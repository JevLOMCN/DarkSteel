// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// FTextRenderSceneProxy @ 1479a5e70

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

FTextRenderSceneProxy * __thiscall
FTextRenderSceneProxy::FTextRenderSceneProxy
          (FTextRenderSceneProxy *this,UTextRenderComponent *param_1)

{
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *pTVar1;
  byte bVar2;
  ITextData *pIVar3;
  UFont *pUVar4;
  bool bVar5;
  longlong lVar6;
  UMaterial *pUVar7;
  UMaterialInterface *pUVar8;
  FMaterialRelevance FVar9;
  TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *pTVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  FMIDData *local_68;
  FSharedReferencer<1> local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> local_38;
  
  local_res10 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &___7FTextRenderSceneProxy__6B_;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(*(longlong *)&this->field_0x220 + 8),
             "FTextRenderSceneProxy");
  (this->TextBatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->FontMIDs;
  (this->TextBatches).ArrayNum = 0;
  (this->TextBatches).ArrayMax = 0;
  (this->TextRenderColor).field0_0x0 = (param_1->TextRenderColor).field0_0x0;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  this->Font = (UFont *)(param_1->Font).field0_0x0;
  pTVar1->Object = (FMIDData *)0x0;
  (this->FontMIDs).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->Text).TextData.Reference;
  (this->Text).TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  (this->Text).Flags = (param_1->Text).Flags;
  this->XScale = param_1->XScale * param_1->WorldSize * param_1->InvDefaultSize;
  this->YScale = param_1->YScale * param_1->WorldSize * param_1->InvDefaultSize;
  this->HorizSpacingAdjust = param_1->HorizSpacingAdjust;
  this->VertSpacingAdjust = param_1->VertSpacingAdjust;
  (this->HorizontalAlignment).Value = (param_1->HorizontalAlignment).Value;
  (this->VerticalAlignment).Value = (param_1->VerticalAlignment).Value;
  this->bAlwaysRenderAsText = param_1->bAlwaysRenderAsText;
  FRenderResource::FRenderResource((FRenderResource *)&this->RayTracingGeometry);
  (this->RayTracingGeometry).DynamicGeometrySharedBufferGenerationID = -1;
  (this->RayTracingGeometry)._padding_ = (longlong)&___7FRayTracingGeometry__6B_;
  (this->RayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
  (this->RayTracingGeometry).RawData._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->RayTracingGeometry).RawDataHeader.Reserved[2] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[3] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[4] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[5] = 0xffffffff;
  (this->RayTracingGeometry).RawData._padding_ = 0;
  (this->RayTracingGeometry).RawData._padding_ = 0;
  (this->RayTracingGeometry).RawData.bNeedsCPUAccess = false;
  (this->RayTracingGeometry).LastUpdatedFrame = 0;
  (this->RayTracingGeometry).NumUpdatesSinceLastBuild = 0;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&(this->RayTracingGeometry).Initializer);
  (this->RayTracingGeometry).GroupHandle = -1;
  (this->RayTracingGeometry).LODIndex = -1;
  (this->RayTracingGeometry).RayTracingGeometryRHI.Reference = (FRHIRayTracingGeometry *)0x0;
  (this->RayTracingGeometry).GeometryState = Invalid;
  (this->RayTracingGeometry).RayTracingBuildRequestIndex = -1;
  (this->RayTracingGeometry).RayTracingGeometryHandle = -1;
  (this->CachedRayTracingMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRayTracingMaterials).ArrayNum = 0;
  (this->CachedRayTracingMaterials).ArrayMax = 0;
  *(undefined8 *)&this->field_0x30 = 0x3f800000;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x3c = 0x3f800000;
  pUVar8 = (param_1->TextMaterial).field0_0x0.DebugPtr;
  if (pUVar8 != (UMaterialInterface *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    lVar6 = (**(code **)(pUVar8->_padding_ + 0x2e0))(pUVar8,&local_58);
    if (((*(char *)(lVar6 + 0x148) == '\0') || (*(char *)(lVar6 + 0x148) == '\x01')) &&
       (pUVar7 = (UMaterial *)(param_1->TextMaterial).field0_0x0.DebugPtr,
       pUVar7 != (UMaterial *)0x0)) goto LAB_1479a60d0;
  }
  pUVar7 = UMaterial::GetDefaultMaterial(MD_Surface);
LAB_1479a60d0:
  this->TextMaterial = (UMaterialInterface *)pUVar7;
  local_48 = 0;
  uStack_40 = 0;
  pUVar8 = (UMaterialInterface *)(**(code **)(pUVar7->_padding_ + 0x2e0))(pUVar7,&local_48);
  FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  FVar9 = UMaterialInterface::GetRelevance(pUVar8,(EShaderPlatform)local_res18);
  uVar11 = *(uint *)&(this->MaterialRelevance).field0_0x0 >> 0x12;
  (this->MaterialRelevance).field0_0x0.Raw =
       (this->MaterialRelevance).field0_0x0.Raw | *(ulonglong *)FVar9.field0_0x0;
  uVar12 = *(uint *)FVar9.field0_0x0 >> 0x12;
  if (((byte)(*(uint *)FVar9.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar11 & 0x3f)) {
    uVar12 = uVar11;
  }
  uVar11 = (uint)(this->MaterialRelevance).field0_0x0.Raw;
  *(uint *)&(this->MaterialRelevance).field0_0x0 = (uVar12 << 0x12 ^ uVar11) & 0xfc0000 ^ uVar11;
  pUVar4 = this->Font;
  if (((pUVar4 != (UFont *)0x0) && (pUVar4->FontCacheType == Offline)) &&
     (FTextRenderComponentMIDCache::InstancePtr != (FTextRenderComponentMIDCache *)0x0)) {
    pTVar10 = FTextRenderComponentMIDCache::GetMIDData
                        (FTextRenderComponentMIDCache::InstancePtr,&local_38,this->TextMaterial,
                         pUVar4);
    local_60.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_68 = pTVar10->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *)&local_68) {
      pTVar1->Object = local_68;
      local_68 = (FMIDData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FontMIDs).SharedReferenceCount,&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  this->field_0x84 = this->field_0x84 & 0xfd;
  bVar5 = IsRayTracingEnabled();
  this->bSupportRayTracing = bVar5;
  bVar2 = *(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5);
  this->bNeedsToUpdateRayTracingCache = true;
  this->bRayTracingWithWPO = (bool)(bVar2 >> 6 & 1);
  return this;
}

// ~FTextRenderSceneProxy @ 1479a9440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FTextRenderSceneProxy::~FTextRenderSceneProxy(FTextRenderSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  *(undefined ***)this = &___7FTextRenderSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->RayTracingGeometry)._padding_ + 0x20))(&this->RayTracingGeometry);
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(this->CachedRayTracingMaterials).AllocatorInstance.Data,
             (this->CachedRayTracingMaterials).ArrayNum);
  pFVar1 = (this->CachedRayTracingMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontMIDs).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TextBatches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 1479abc00

void __thiscall `FTextRenderSceneProxy::BuildStringMesh'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMIDData *pFVar6;
  TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *this_00;
  uint uVar7;
  
  if ((**(int **)((longlong)this + 8) < *(int *)(*(longlong *)this + 8)) &&
     (**(int **)((longlong)this + 0x18) < *(int *)(*(longlong *)((longlong)this + 0x10) + 8))) {
    lVar2 = *(longlong *)((longlong)this + 0x20);
    uVar5 = *(uint *)(lVar2 + 0x650);
    if (uVar5 == *(uint *)(lVar2 + 0x654)) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)(lVar2 + 0x648),(int *)(lVar2 + 0x654));
    }
    *(uint *)(lVar2 + 0x650) = uVar5 + 1;
    uVar7 = 0;
    if ((int)uVar5 < (int)(uVar5 + 1)) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x648) + (longlong)(int)uVar5 * 0x18);
    *puVar1 = **(undefined4 **)((longlong)this + 0x18);
    puVar1[1] = *(int *)(*(longlong *)((longlong)this + 0x10) + 8) -
                **(int **)((longlong)this + 0x18);
    puVar1[2] = **(undefined4 **)((longlong)this + 8);
    puVar1[3] = *(int *)(*(longlong *)this + 8) - **(int **)((longlong)this + 8);
    *(undefined8 *)(puVar1 + 4) = 0;
    this_00 = (TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *)
              (*(longlong *)((longlong)this + 0x20) + 0x678);
    pFVar6 = this_00->Object;
    if (((pFVar6 != (FMIDData *)0x0) && (-1 < **(int **)((longlong)this + 0x28))) &&
       (**(int **)((longlong)this + 0x28) < (pFVar6->MIDs).ArrayNum)) {
      pFVar6 = TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::operator->(this_00);
      uVar5 = **(uint **)((longlong)this + 0x28);
      uVar7 = 0;
      if ((int)uVar5 < (pFVar6->MIDs).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((pFVar6->MIDs).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      *(longlong *)(puVar1 + 4) = lVar2;
      if (lVar2 != 0) goto LAB_1479abdb5;
    }
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0x668);
  }
LAB_1479abdb5:
  **(undefined4 **)((longlong)this + 8) = *(undefined4 *)(*(longlong *)this + 8);
  **(undefined4 **)((longlong)this + 0x18) =
       *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 8);
  return;
}

// BuildStringMesh @ 1479b4ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FTextRenderSceneProxy::BuildStringMesh
          (FTextRenderSceneProxy *this,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  uchar uVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  FMIDData *pFVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  FTextRenderSceneProxy *pFVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 uVar13;
  wchar_t wVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  FString *pFVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  UFont *pUVar27;
  wchar_t *pwVar28;
  FScriptContainerElement *pFVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  undefined1 auStackY_3a8 [32];
  undefined4 local_350;
  int local_34c;
  int local_348;
  undefined4 local_344;
  int local_340;
  int local_33c;
  FScriptContainerElement *local_338;
  uint local_330;
  uint local_32c;
  float local_328;
  float local_324;
  longlong local_320;
  FMIDData *local_318;
  float local_310;
  int local_30c [2];
  float local_304;
  ulonglong local_300;
  FScriptContainerElement *local_2f8;
  FScriptContainerElement *pFStack_2f0;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *local_2e8;
  int *local_2e0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_2d8;
  int *local_2d0;
  FTextRenderSceneProxy *local_2c8;
  uint *local_2c0;
  float local_2b8;
  float fStack_2b4;
  float local_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  ulonglong local_298;
  TVector2<double>_u_0 local_290;
  FTextIterator local_278;
  undefined4 local_268;
  uint uStack_264;
  uint uStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float local_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined1 uStack_215;
  uint uStack_214;
  undefined4 local_208;
  uint uStack_204;
  uint uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float local_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined1 local_1bc;
  undefined1 local_1bb;
  undefined1 local_1ba;
  undefined1 local_1b9;
  undefined1 local_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  uint uStack_1b4;
  undefined4 local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float local_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined1 uStack_155;
  uint uStack_154;
  undefined4 local_148;
  uint uStack_144;
  uint uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  uint uStack_f4;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  uVar26 = 0;
  (this->TextBatches).ArrayNum = 0;
  if ((this->TextBatches).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TextBatches).AllocatorInstance,0,&(this->TextBatches).ArrayMax);
  }
  if ((this->Font == (UFont *)0x0) || (bVar12 = FText::IsEmpty(&this->Text), bVar12)) {
    bVar12 = false;
  }
  else {
    local_2e0 = local_30c;
    local_2d0 = local_30c + 1;
    local_2c0 = &local_330;
    uVar21 = (ulonglong)(longlong)(0x7fffffff - param_1->ArrayNum) >> 2;
    uVar25 = (ulonglong)(longlong)(0x7fffffff - param_2->ArrayNum) / 6;
    fVar32 = 0.0;
    local_330 = 0xffffffff;
    if (uVar21 < uVar25) {
      uVar25 = uVar21;
    }
    local_310 = 0.0;
    local_304 = ((float)this->Font->Kerning + this->HorizSpacingAdjust) * this->XScale;
    local_30c[0] = 0;
    local_30c[1] = 0;
    local_2e8 = param_1;
    local_2d8 = param_2;
    local_2c8 = this;
    pFVar22 = FText::ToString(&this->Text);
    iVar17 = (pFVar22->Data).ArrayNum;
    iVar18 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar18 = 0;
    }
    if ((ulonglong)(longlong)iVar18 < uVar25) {
      uVar25 = (longlong)iVar18;
    }
    uVar15 = param_1->ArrayNum + (int)uVar25 * 4;
    local_298 = uVar25;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (param_1->ArrayMax < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,uVar15,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    uVar15 = param_2->ArrayNum + (int)uVar25 * 6;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    local_300 = 0;
    fVar31 = __real_3f800000;
    if ((pFVar22->Data).ArrayNum == 0) {
      pwVar28 = L"";
      local_2f8 = (FScriptContainerElement *)0x15060d16c;
      pFStack_2f0 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      pwVar28 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      local_2f8 = (FScriptContainerElement *)pwVar28;
      pFStack_2f0 = (FScriptContainerElement *)pwVar28;
      if (((FScriptContainerElement *)pwVar28 == (FScriptContainerElement *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InSourceString",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                              ,0x51,L""), fVar31 = __real_3f800000, bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
    }
    while( true ) {
      dVar30 = __real_bfe0000000000000;
      fVar34 = 0.0;
      uVar15 = (uint)__xmm_80000000000000008000000000000000;
      uVar21 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      if (((FScriptContainerElement *)pwVar28 == (FScriptContainerElement *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentPosition",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                              ,0x56,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      if ((*pwVar28 == L'\0') || (uVar25 <= uVar26)) break;
      local_278.SourceString = (wchar_t *)local_2f8;
      local_278.CurrentPosition = (wchar_t *)pFStack_2f0;
      ComputeTextSize((TVector2<double> *)&local_290._s_0,&local_278,this->Font,this->XScale,
                      this->YScale,this->HorizSpacingAdjust,this->VertSpacingAdjust);
      uVar3 = (this->HorizontalAlignment).Value;
      fVar35 = 0.0;
      local_324 = 0.0;
      if (uVar3 != '\0') {
        if (uVar3 == '\x01') {
          dVar30 = local_290._s_0.X * dVar30;
        }
        else {
          if (uVar3 != '\x02') {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                                ,0xe7,L"");
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            goto LAB_1479b5277;
          }
          dVar30 = (double)CONCAT44((uint)((ulonglong)local_290._0_8_ >> 0x20) ^ (uint)uVar21,
                                    SUB84(local_290._s_0.X,0) ^ uVar15);
        }
        fVar35 = (float)dVar30;
        local_324 = fVar35;
      }
LAB_1479b5277:
      local_328 = 0.0;
LAB_1479b5280:
      pFVar29 = (FScriptContainerElement *)pwVar28;
      if ((pFVar29 == (FScriptContainerElement *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentPosition",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                              ,0x5d,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      wVar14 = *(wchar_t *)pFVar29;
      pwVar28 = (wchar_t *)pFVar29;
      if (wVar14 == L'\0') goto LAB_1479b61c6;
      if (wVar14 != L'<') {
LAB_1479b52da:
        if (wVar14 == L'\n') {
          pwVar28 = (wchar_t *)(pFVar29 + 2);
          pFStack_2f0 = (FScriptContainerElement *)pwVar28;
          goto LAB_1479b61c6;
        }
LAB_1479b52e4:
        pwVar28 = (wchar_t *)(pFVar29 + 2);
        pFStack_2f0 = (FScriptContainerElement *)pwVar28;
        if (uVar25 <= uVar26) goto LAB_1479b61c6;
        wVar14 = UFont::RemapChar(this->Font,wVar14);
        pUVar27 = this->Font;
        uVar26 = local_300;
        if ((int)(uint)(ushort)wVar14 < (pUVar27->Characters).ArrayNum) {
          if (((pUVar27->Characters).ArrayNum <= (int)(uint)(ushort)wVar14) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          pFVar10 = local_2c8;
          local_338 = (pUVar27->Characters).AllocatorInstance.Data;
          local_320 = (ulonglong)(ushort)wVar14 * 3;
          pUVar27 = this->Font;
          uVar26 = local_300;
          if ((int)(uint)(byte)local_338[(ulonglong)(ushort)wVar14 * 0x18 + 0x10] <
              (pUVar27->Textures).ArrayNum) {
            if (local_330 != (byte)local_338[(ulonglong)(ushort)wVar14 * 0x18 + 0x10]) {
              if (local_330 != 0xffffffff) {
                if ((*local_2e0 < local_2e8->ArrayNum) && (*local_2d0 < local_2d8->ArrayNum)) {
                  uVar15 = (local_2c8->TextBatches).ArrayNum;
                  piVar2 = &(local_2c8->TextBatches).ArrayMax;
                  if (uVar15 == *piVar2) {
                    uVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&(local_2c8->TextBatches).AllocatorInstance,piVar2);
                  }
                  (pFVar10->TextBatches).ArrayNum = uVar15 + 1;
                  uVar24 = 0;
                  if ((int)uVar15 < (int)(uVar15 + 1)) {
                    uVar24 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    uVar13 = (*pcVar9)();
                    return (bool)uVar13;
                  }
                  puVar11 = local_2c0;
                  pFVar5 = (pFVar10->TextBatches).AllocatorInstance.Data;
                  lVar23 = (longlong)(int)uVar15;
                  *(int *)(pFVar5 + lVar23 * 0x18) = *local_2d0;
                  *(int *)(pFVar5 + lVar23 * 0x18 + 4) = local_2d8->ArrayNum - *local_2d0;
                  *(int *)(pFVar5 + lVar23 * 0x18 + 8) = *local_2e0;
                  iVar17 = *local_2e0;
                  iVar18 = local_2e8->ArrayNum;
                  *(undefined8 *)(pFVar5 + lVar23 * 0x18 + 0x10) = 0;
                  *(int *)(pFVar5 + lVar23 * 0x18 + 0xc) = iVar18 - iVar17;
                  pFVar6 = (local_2c8->FontMIDs).Object;
                  if (((pFVar6 != (FMIDData *)0x0) && (-1 < (int)*local_2c0)) &&
                     ((int)*local_2c0 < (pFVar6->MIDs).ArrayNum)) {
                    local_318 = TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::
                                operator->(&local_2c8->FontMIDs);
                    uVar15 = *puVar11;
                    uVar24 = 0;
                    if ((int)uVar15 < (local_318->MIDs).ArrayNum) {
                      uVar24 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      uVar13 = (*pcVar9)();
                      return (bool)uVar13;
                    }
                    lVar7 = *(longlong *)
                             ((local_318->MIDs).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
                    *(longlong *)(pFVar5 + lVar23 * 0x18 + 0x10) = lVar7;
                    if (lVar7 != 0) goto LAB_1479b5533;
                  }
                  *(UMaterialInterface **)(pFVar5 + lVar23 * 0x18 + 0x10) = local_2c8->TextMaterial;
                }
LAB_1479b5533:
                *local_2e0 = local_2e8->ArrayNum;
                *local_2d0 = local_2d8->ArrayNum;
                pUVar27 = this->Font;
              }
              local_330 = (uint)(byte)local_338[local_320 * 8 + 0x10];
            }
            FVar4 = local_338[local_320 * 8 + 0x10];
            if (((pUVar27->Textures).ArrayNum <= (int)(uint)(byte)FVar4) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            lVar23 = *(longlong *)
                      ((pUVar27->Textures).AllocatorInstance.Data + (ulonglong)(byte)FVar4 * 8);
            uVar25 = local_298;
            uVar26 = local_300;
            if (lVar23 != 0) {
              uVar8 = *(undefined8 *)(lVar23 + 0x158);
              iVar17 = *(int *)(local_338 + local_320 * 8 + 8);
              iVar18 = *(int *)(local_338 + local_320 * 8);
              iVar19 = *(int *)(local_338 + local_320 * 8 + 0xc);
              local_268 = 0;
              local_219 = 0x7f;
              fVar37 = fVar31 / (float)(int)uVar8;
              iVar20 = 0x7f;
              if ((int)ROUND(__real_3f000000) >> 1 < 0x7f) {
                iVar20 = (int)ROUND(__real_3f000000) >> 1;
              }
              fVar31 = fVar31 / (float)(int)((ulonglong)uVar8 >> 0x20);
              fVar33 = (float)iVar17 * this->XScale;
              fVar32 = (float)*(int *)(local_338 + local_320 * 8 + 0x14) * this->YScale + fVar32;
              lVar23 = local_320 * 8;
              local_320 = CONCAT44(local_320._4_4_,fVar33);
              local_21c = 0x80;
              if (-0x80 < iVar20) {
                local_21c = (char)iVar20;
              }
              uVar15 = 0x7f;
              if ((int)ROUND(___real_c37d8000) >> 1 < 0x7f) {
                uVar15 = (int)ROUND(___real_c37d8000) >> 1;
              }
              local_32c = 0xffffff80;
              if (-0x80 < (int)uVar15) {
                local_32c = uVar15 & 0xff;
              }
              fVar40 = (float)iVar18 * fVar37;
              local_21b = (undefined1)local_32c;
              uVar15 = 0x7f;
              if ((int)ROUND(___real_437e8000) >> 1 < 0x7f) {
                uVar15 = (int)ROUND(___real_437e8000) >> 1;
              }
              fVar36 = (float)*(int *)(local_338 + lVar23 + 4) * fVar31;
              uVar24 = 0xffffff80;
              if (-0x80 < (int)uVar15) {
                uVar24 = uVar15 & 0xff;
              }
              uVar41 = (uint)(fVar35 + fVar34) ^ __xmm_80000000800000008000000080000000;
              uVar15 = (uint)fVar32 ^ __xmm_80000000800000008000000080000000;
              uVar39 = (uint)(fVar33 + fVar35 + fVar34) ^ __xmm_80000000800000008000000080000000;
              uVar38 = (uint)((float)iVar19 * this->YScale + fVar32) ^
                       __xmm_80000000800000008000000080000000;
              uStack_214 = (this->TextRenderColor).field0_0x0.Bits;
              piVar2 = &param_1->ArrayMax;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_318 = (FMIDData *)CONCAT44(local_318._4_4_,uVar24);
              local_218 = (undefined1)uVar24;
              uStack_215 = 0x7f;
              local_2b8 = fVar40;
              fStack_2b4 = fVar36;
              uStack_264 = uVar41;
              uStack_260 = uVar15;
              fStack_25c = fVar40;
              fStack_258 = fVar36;
              fStack_254 = fVar40;
              fStack_250 = fVar36;
              fStack_24c = fVar40;
              fStack_248 = fVar36;
              fStack_244 = fVar40;
              fStack_240 = fVar36;
              local_23c = fVar40;
              fStack_238 = fVar36;
              fStack_234 = fVar40;
              fStack_230 = fVar36;
              fStack_22c = fVar40;
              fStack_228 = fVar36;
              fStack_224 = fVar40;
              fStack_220 = fVar36;
              local_21a = local_21c;
              uStack_217 = local_21c;
              uStack_216 = local_21c;
              if (((pFVar5 <= (FScriptContainerElement *)&local_268) &&
                  ((FScriptContainerElement *)&local_268 < pFVar5 + (longlong)*piVar2 * 0x58)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar16 = param_1->ArrayNum;
              local_338 = (FScriptContainerElement *)CONCAT44(local_338._4_4_,iVar16);
              if (iVar16 == *piVar2) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x458,&param_1->AllocatorInstance,piVar2);
                local_338 = (FScriptContainerElement *)CONCAT44(local_338._4_4_,iVar16);
              }
              param_1->ArrayNum = iVar16 + 1;
              lVar23 = (longlong)iVar16 * 0x58;
              fVar37 = ((float)iVar18 + (float)iVar17) * fVar37;
              pFVar5 = (param_1->AllocatorInstance).Data;
              uVar13 = 0x80;
              if (-0x80 < iVar20) {
                uVar13 = (char)iVar20;
              }
              *(ulonglong *)(pFVar5 + lVar23) = CONCAT44(uStack_264,local_268);
              *(ulonglong *)(pFVar5 + lVar23 + 8) = CONCAT44(fStack_25c,uStack_260);
              local_1bb = (undefined1)local_32c;
              *(ulonglong *)(pFVar5 + lVar23 + 0x10) = CONCAT44(fStack_254,fStack_258);
              *(ulonglong *)(pFVar5 + lVar23 + 0x10 + 8) = CONCAT44(fStack_24c,fStack_250);
              local_1b8 = SUB81(local_318,0);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20) = CONCAT44(fStack_244,fStack_248);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20 + 8) = CONCAT44(local_23c,fStack_240);
              local_208 = 0;
              *(ulonglong *)(pFVar5 + lVar23 + 0x30) = CONCAT44(fStack_234,fStack_238);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30 + 8) = CONCAT44(fStack_22c,fStack_230);
              *(ulonglong *)(pFVar5 + lVar23 + 0x40) = CONCAT44(fStack_224,fStack_228);
              *(ulonglong *)(pFVar5 + lVar23 + 0x40 + 8) =
                   CONCAT17(local_219,
                            CONCAT16(local_21a,CONCAT15(local_21b,CONCAT14(local_21c,fStack_220))));
              *(ulonglong *)(pFVar5 + lVar23 + 0x50) =
                   CONCAT44(uStack_214,
                            CONCAT13(uStack_215,CONCAT12(uStack_216,CONCAT11(uStack_217,local_218)))
                           );
              uStack_1b4 = (this->TextRenderColor).field0_0x0.Bits;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_1b9 = 0x7f;
              uStack_1b5 = 0x7f;
              local_2b0 = fVar37;
              fStack_2ac = fVar36;
              uStack_204 = uVar39;
              uStack_200 = uVar15;
              fStack_1fc = fVar37;
              fStack_1f8 = fVar36;
              fStack_1f4 = fVar37;
              fStack_1f0 = fVar36;
              fStack_1ec = fVar37;
              fStack_1e8 = fVar36;
              fStack_1e4 = fVar37;
              fStack_1e0 = fVar36;
              local_1dc = fVar37;
              fStack_1d8 = fVar36;
              fStack_1d4 = fVar37;
              fStack_1d0 = fVar36;
              fStack_1cc = fVar37;
              fStack_1c8 = fVar36;
              fStack_1c4 = fVar37;
              fStack_1c0 = fVar36;
              local_1bc = uVar13;
              local_1ba = uVar13;
              uStack_1b7 = uVar13;
              uStack_1b6 = uVar13;
              if (((pFVar5 <= (FScriptContainerElement *)&local_208) &&
                  ((FScriptContainerElement *)&local_208 < pFVar5 + (longlong)*piVar2 * 0x58)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar17 = param_1->ArrayNum;
              if (iVar17 == *piVar2) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x458,&param_1->AllocatorInstance,piVar2);
              }
              fVar36 = (float)iVar19 * fVar31 + fVar36;
              param_1->ArrayNum = iVar17 + 1;
              local_15b = (undefined1)local_32c;
              local_158 = SUB81(local_318,0);
              lVar23 = (longlong)iVar17 * 0x58;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_1a8 = 0;
              *(ulonglong *)(pFVar5 + lVar23) = CONCAT44(uStack_204,local_208);
              *(ulonglong *)(pFVar5 + lVar23 + 8) = CONCAT44(fStack_1fc,uStack_200);
              local_159 = 0x7f;
              *(ulonglong *)(pFVar5 + lVar23 + 0x10) = CONCAT44(fStack_1f4,fStack_1f8);
              *(ulonglong *)(pFVar5 + lVar23 + 0x10 + 8) = CONCAT44(fStack_1ec,fStack_1f0);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20) = CONCAT44(fStack_1e4,fStack_1e8);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20 + 8) = CONCAT44(local_1dc,fStack_1e0);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30) = CONCAT44(fStack_1d4,fStack_1d8);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30 + 8) = CONCAT44(fStack_1cc,fStack_1d0);
              uStack_155 = 0x7f;
              *(ulonglong *)(pFVar5 + lVar23 + 0x40) = CONCAT44(fStack_1c4,fStack_1c8);
              *(ulonglong *)(pFVar5 + lVar23 + 0x40 + 8) =
                   CONCAT17(local_1b9,
                            CONCAT16(local_1ba,CONCAT15(local_1bb,CONCAT14(local_1bc,fStack_1c0))));
              *(ulonglong *)(pFVar5 + lVar23 + 0x50) =
                   CONCAT44(uStack_1b4,
                            CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,CONCAT11(uStack_1b7,local_1b8)))
                           );
              uStack_154 = (this->TextRenderColor).field0_0x0.Bits;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_2a8 = fVar40;
              fStack_2a4 = fVar36;
              uStack_1a4 = uVar41;
              uStack_1a0 = uVar38;
              fStack_19c = fVar40;
              fStack_198 = fVar36;
              fStack_194 = fVar40;
              fStack_190 = fVar36;
              fStack_18c = fVar40;
              fStack_188 = fVar36;
              fStack_184 = fVar40;
              fStack_180 = fVar36;
              local_17c = fVar40;
              fStack_178 = fVar36;
              fStack_174 = fVar40;
              fStack_170 = fVar36;
              fStack_16c = fVar40;
              fStack_168 = fVar36;
              fStack_164 = fVar40;
              fStack_160 = fVar36;
              local_15c = uVar13;
              local_15a = uVar13;
              uStack_157 = uVar13;
              uStack_156 = uVar13;
              if (((pFVar5 <= (FScriptContainerElement *)&local_1a8) &&
                  ((FScriptContainerElement *)&local_1a8 < pFVar5 + (longlong)*piVar2 * 0x58)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar18 = param_1->ArrayNum;
              if (iVar18 == param_1->ArrayMax) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x458,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar18 + 1;
              local_fb = (undefined1)local_32c;
              local_f8 = SUB81(local_318,0);
              lVar23 = (longlong)iVar18 * 0x58;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_148 = 0;
              *(ulonglong *)(pFVar5 + lVar23) = CONCAT44(uStack_1a4,local_1a8);
              *(ulonglong *)(pFVar5 + lVar23 + 8) = CONCAT44(fStack_19c,uStack_1a0);
              local_f9 = 0x7f;
              *(ulonglong *)(pFVar5 + lVar23 + 0x10) = CONCAT44(fStack_194,fStack_198);
              *(ulonglong *)(pFVar5 + lVar23 + 0x10 + 8) = CONCAT44(fStack_18c,fStack_190);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20) = CONCAT44(fStack_184,fStack_188);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20 + 8) = CONCAT44(local_17c,fStack_180);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30) = CONCAT44(fStack_174,fStack_178);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30 + 8) = CONCAT44(fStack_16c,fStack_170);
              uStack_f5 = 0x7f;
              *(ulonglong *)(pFVar5 + lVar23 + 0x40) = CONCAT44(fStack_164,fStack_168);
              *(ulonglong *)(pFVar5 + lVar23 + 0x40 + 8) =
                   CONCAT17(local_159,
                            CONCAT16(local_15a,CONCAT15(local_15b,CONCAT14(local_15c,fStack_160))));
              *(ulonglong *)(pFVar5 + lVar23 + 0x50) =
                   CONCAT44(uStack_154,
                            CONCAT13(uStack_155,CONCAT12(uStack_156,CONCAT11(uStack_157,local_158)))
                           );
              uStack_f4 = (this->TextRenderColor).field0_0x0.Bits;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_2a0 = fVar37;
              fStack_29c = fVar36;
              uStack_144 = uVar39;
              uStack_140 = uVar38;
              fStack_13c = fVar37;
              fStack_138 = fVar36;
              fStack_134 = fVar37;
              fStack_130 = fVar36;
              fStack_12c = fVar37;
              fStack_128 = fVar36;
              fStack_124 = fVar37;
              fStack_120 = fVar36;
              local_11c = fVar37;
              fStack_118 = fVar36;
              fStack_114 = fVar37;
              fStack_110 = fVar36;
              fStack_10c = fVar37;
              fStack_108 = fVar36;
              fStack_104 = fVar37;
              fStack_100 = fVar36;
              local_fc = uVar13;
              local_fa = uVar13;
              uStack_f7 = uVar13;
              uStack_f6 = uVar13;
              if (((pFVar5 <= (FScriptContainerElement *)&local_148) &&
                  ((FScriptContainerElement *)&local_148 <
                   pFVar5 + (longlong)param_1->ArrayMax * 0x58)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar19 = param_1->ArrayNum;
              if (iVar19 == param_1->ArrayMax) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x458,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar19 + 1;
              lVar23 = (longlong)iVar19 * 0x58;
              pFVar5 = (param_1->AllocatorInstance).Data;
              local_350 = local_338._0_4_;
              *(ulonglong *)(pFVar5 + lVar23) = CONCAT44(uStack_144,local_148);
              *(ulonglong *)(pFVar5 + lVar23 + 8) = CONCAT44(fStack_13c,uStack_140);
              *(ulonglong *)(pFVar5 + lVar23 + 0x10) = CONCAT44(fStack_134,fStack_138);
              *(ulonglong *)(pFVar5 + lVar23 + 0x10 + 8) = CONCAT44(fStack_12c,fStack_130);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20) = CONCAT44(fStack_124,fStack_128);
              *(ulonglong *)(pFVar5 + lVar23 + 0x20 + 8) = CONCAT44(local_11c,fStack_120);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30) = CONCAT44(fStack_114,fStack_118);
              *(ulonglong *)(pFVar5 + lVar23 + 0x30 + 8) = CONCAT44(fStack_10c,fStack_110);
              *(ulonglong *)(pFVar5 + lVar23 + 0x40) = CONCAT44(fStack_104,fStack_108);
              *(ulonglong *)(pFVar5 + lVar23 + 0x40 + 8) =
                   CONCAT17(local_f9,CONCAT16(local_fa,CONCAT15(local_fb,CONCAT14(local_fc,
                                                  fStack_100))));
              *(ulonglong *)(pFVar5 + lVar23 + 0x50) =
                   CONCAT44(uStack_f4,
                            CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))));
              pFVar5 = (param_2->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)&local_350) &&
                  ((FScriptContainerElement *)&local_350 < pFVar5 + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar20 = param_2->ArrayNum;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar20 + 1;
              *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar20 * 4) = local_350;
              pFVar5 = (param_2->AllocatorInstance).Data;
              local_34c = iVar19;
              if (((pFVar5 <= (FScriptContainerElement *)&local_34c) &&
                  ((FScriptContainerElement *)&local_34c < pFVar5 + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar20 = param_2->ArrayNum;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar20 + 1;
              *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar20 * 4) = local_34c;
              pFVar5 = (param_2->AllocatorInstance).Data;
              local_348 = iVar17;
              if (((pFVar5 <= (FScriptContainerElement *)&local_348) &&
                  ((FScriptContainerElement *)&local_348 < pFVar5 + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar17 = param_2->ArrayNum;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar17 + 1;
              *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_348;
              pFVar5 = (param_2->AllocatorInstance).Data;
              local_344 = local_338._0_4_;
              if (((pFVar5 <= (FScriptContainerElement *)&local_344) &&
                  ((FScriptContainerElement *)&local_344 < pFVar5 + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar17 = param_2->ArrayNum;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar17 + 1;
              *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_344;
              pFVar5 = (param_2->AllocatorInstance).Data;
              local_340 = iVar18;
              if (((pFVar5 <= (FScriptContainerElement *)&local_340) &&
                  ((FScriptContainerElement *)&local_340 < pFVar5 + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar17 = param_2->ArrayNum;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar17 + 1;
              *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_340;
              pFVar5 = (param_2->AllocatorInstance).Data;
              local_33c = iVar19;
              if (((pFVar5 <= (FScriptContainerElement *)&local_33c) &&
                  ((FScriptContainerElement *)&local_33c < pFVar5 + (longlong)*piVar1 * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar17 = param_2->ArrayNum;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar17 + 1;
              fVar34 = local_328 + (float)local_320;
              *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_33c;
              local_328 = fVar34;
              if (((FScriptContainerElement *)pwVar28 == (FScriptContainerElement *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CurrentPosition",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                                      ,0x77,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              wVar14 = *pwVar28;
              if (wVar14 != L'\0') {
                if (wVar14 == L'<') {
                  if ((*(wchar_t *)(pFVar29 + 4) == L'b') && (*(wchar_t *)(pFVar29 + 6) == L'r')) {
                    if (*(wchar_t *)(pFVar29 + 8) == L'>') goto LAB_1479b618b;
                    goto LAB_1479b6171;
                  }
                }
                else {
LAB_1479b6171:
                  if (wVar14 == L'\n') goto LAB_1479b618b;
                }
                iVar17 = iswspace(wVar14);
                if (iVar17 == 0) {
                  fVar34 = fVar34 + local_304;
                  local_328 = fVar34;
                }
              }
LAB_1479b618b:
              local_300 = local_300 + 1;
              uVar25 = local_298;
              uVar26 = local_300;
              fVar35 = local_324;
              fVar31 = __real_3f800000;
              fVar32 = local_310;
            }
          }
        }
        goto LAB_1479b5280;
      }
      if ((*(wchar_t *)(pFVar29 + 2) != L'b') || (*(wchar_t *)(pFVar29 + 4) != L'r'))
      goto LAB_1479b52e4;
      if (*(wchar_t *)(pFVar29 + 6) != L'>') goto LAB_1479b52da;
      pwVar28 = (wchar_t *)(pFVar29 + 8);
      pFStack_2f0 = (FScriptContainerElement *)pwVar28;
LAB_1479b61c6:
      uVar8 = local_290._s_0.Y;
      if (local_290._s_0.Y <= __real_0000000000000000) {
        fVar34 = UFont::GetMaxCharHeight(this->Font);
        uVar8 = (undefined8)fVar34;
      }
      fVar32 = (float)((double)fVar32 + (double)uVar8);
      local_310 = fVar32;
    }
    `FTextRenderSceneProxy::BuildStringMesh'::__l2::<lambda_1>::operator()(&local_2e8);
    bVar12 = 0 < param_1->ArrayNum;
  }
  return bVar12;
}

// CanBeOccluded @ 1479b7920

bool __thiscall FTextRenderSceneProxy::CanBeOccluded(FTextRenderSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// CreateRenderThreadResources @ 1479bbe20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextRenderSceneProxy::CreateRenderThreadResources
          (FTextRenderSceneProxy *this,FRHICommandListBase *param_1)

{
  EBufferUsageFlags *pEVar1;
  FName FVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  FName local_res8;
  FName local_res18;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  if ((this->Font == (UFont *)0x0) || (this->Font->FontCacheType != Runtime)) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    bVar3 = BuildStringMesh(this,&local_48,&(this->IndexBuffer).Indices);
    if (bVar3) {
      local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x230;
      local_res8.Number = *(uint *)&this->field_0x234;
      pFVar4 = ::FName::ToString(&local_res8,&local_28);
      ::FString::ConcatCF(&local_38,L"FTextRenderSceneProxy ",pFVar4);
      iVar6 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar5 = ::FName::FName(&local_res18,iVar6,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar2 = *pFVar5;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      (this->VertexBuffers).PositionVertexBuffer._padding_ = (longlong)FVar2;
      (this->VertexBuffers).StaticMeshVertexBuffer._padding_ = (longlong)FVar2;
      (this->VertexBuffers).ColorVertexBuffer._padding_ = (longlong)FVar2;
      pEVar1 = &(this->IndexBuffer).UsageFlags;
      *pEVar1 = *pEVar1 | ShaderResource;
      (this->IndexBuffer)._padding_ = (longlong)FVar2;
      FStaticMeshVertexBuffers::InitFromDynamicVertex
                (&this->VertexBuffers,param_1,(FRenderCommandPipe *)0x0,&this->VertexFactory,
                 &local_48,1,0);
      (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
      if (this->bSupportRayTracing != false) {
        UpdateRayTracingGeometry_RenderingThread(this,param_1);
        this->bNeedsToUpdateRayTracingCache = true;
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawStaticElements @ 1479bf500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FTextRenderSceneProxy::DrawStaticElements
          (FTextRenderSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  FMeshBatchElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [8];
  FMeshBatchElement local_130;
  FMeshBatchElement *local_98;
  int local_90;
  undefined4 local_8c;
  FLocalVertexFactory *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  uint local_5c;
  undefined2 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((int)(this->VertexFactory)._padding_ != -1) {
    (**(code **)((longlong)*param_1 + 0x10))(param_1,(this->TextBatches).ArrayNum);
    uVar5 = __real_3f800000;
    iVar2 = (this->TextBatches).ArrayNum;
    pFVar8 = (this->TextBatches).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->TextBatches).ArrayNum != iVar2) {
        local_138[0] = 0;
        `TCheckedPointerIterator<FTextRenderSceneProxy::FTextBatch,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_138);
      }
      if (pFVar8 == pFVar1) break;
      local_98 = (FMeshBatchElement *)0x0;
      local_5c = local_5c & 0xf081803c | 0x81803c;
      local_8c = 1;
      local_78 = 0;
      local_88 = (FLocalVertexFactory *)0x0;
      uStack_80 = 0;
      local_70 = 0xffffffffffffffff;
      local_68 = 0;
      local_64 = 0xffffffff;
      local_60 = 0;
      local_5e = 0xff;
      local_58 = 0xffff;
      local_90 = 1;
      DefaultConstructItems<FMeshBatchElement,int>(&local_130,1);
      if (local_90 < 1) {
        local_148 = 0;
        local_140 = (longlong)local_90;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar7 = &local_130;
      if (local_98 != (FMeshBatchElement *)0x0) {
        pFVar7 = local_98;
      }
      pFVar7->IndexBuffer = (FIndexBuffer *)&this->IndexBuffer;
      local_88 = &this->VertexFactory;
      uStack_80 = (**(code **)(**(longlong **)(pFVar8 + 0x10) + 0x310))();
      pFVar7->FirstIndex = *(uint *)pFVar8;
      iVar3 = *(int *)(pFVar8 + 4);
      pFVar7->NumPrimitives =
           iVar3 / 3 + (iVar3 >> 0x1f) +
           (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
      pFVar7->MinVertexIndex = *(uint *)(pFVar8 + 8);
      pFVar7->MaxVertexIndex = *(int *)(pFVar8 + 0xc) + *(int *)(pFVar8 + 8) + -1;
      local_5e = 0;
      local_5c = (byte)this->field_0x78 & 1 | local_5c & 0xffffe07c;
      (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_130,uVar5);
      pFVar7 = &local_130;
      if (local_98 != (FMeshBatchElement *)0x0) {
        pFVar7 = local_98;
      }
      DestructItems<FMeshBatchElement,int>(pFVar7,local_90);
      if (local_98 != (FMeshBatchElement *)0x0) {
        FMemory::Free(local_98);
      }
      pFVar8 = pFVar8 + 0x18;
    }
  }
  return;
}

// GetAllocatedSize @ 1479c3da0

uint __thiscall FTextRenderSceneProxy::GetAllocatedSize(FTextRenderSceneProxy *this)

{
  return *(int *)&this->field_0x104 << 2;
}

// GetDynamicMeshElements @ 1479c7fc0

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
FTextRenderSceneProxy::GetDynamicMeshElements
          (FTextRenderSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FTextRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_TextRenderSceneProxy_GetDynamicMeshElements>
  FVar13;
  undefined8 uVar14;
  FPrimitiveDrawInterface *pFVar15;
  int iVar16;
  FName FVar17;
  ForElementType<FMeshBatchElement> FVar18;
  ForElementType<FMeshBatchElement> FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined1 local_88 [4];
  FColor_u_0 local_84;
  FName local_80;
  longlong local_78;
  FName local_70;
  FName local_68;
  longlong local_58;
  FName local_50;
  FName local_48 [2];
  
  uVar21 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_TextRenderSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FTextRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_TextRenderSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar12 = ::FName::FName(&local_50,"STAT_TextRenderSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_TextRenderSceneProxy_GetDynamicMeshElements,*pFVar12,
                 L"STAT_TextRenderSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_TextRenderSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_TextRenderSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FTextRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_TextRenderSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar12 = ::FName::FName(local_48,"STAT_TextRenderSceneProxy_GetDynamicMeshElements");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FTextRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_TextRenderSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_TextRenderSceneProxy_GetDynamicMeshElements,*pFVar12,
                          L"STAT_TextRenderSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar6 = false;
  bVar5 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_80.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                   ,0x308);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_1479c817e;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  local_70 = local_68;
  FVar17 = local_68;
LAB_1479c817e:
  if (((int)(this->VertexFactory)._padding_ != -1) && (iVar16 = param_1->ArrayNum, 0 < iVar16)) {
    local_78 = 0;
    do {
      lVar3 = local_78;
      if ((param_3 >> (uVar21 & 0x1f) & 1) != 0) {
        uVar9 = 0;
        if ((int)uVar21 < iVar16) {
          uVar9 = ~uVar21 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar16 = (this->TextBatches).ArrayNum;
        pFVar20 = (this->TextBatches).AllocatorInstance.Data;
        local_58 = *(longlong *)((param_1->AllocatorInstance).Data + lVar3);
        pFVar1 = pFVar20 + (longlong)iVar16 * 0x18;
        while( true ) {
          if ((this->TextBatches).ArrayNum != iVar16) {
            local_88[0] = 0;
            `TCheckedPointerIterator<FTextRenderSceneProxy::FTextBatch_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_88);
          }
          if (pFVar20 == pFVar1) break;
          iVar10 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&param_4->MeshBatchStorage,1);
          uVar9 = iVar10 / 0x49;
          uVar11 = 0;
          if ((int)uVar9 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          FVar18 = (ForElementType<FMeshBatchElement>)
                   ((longlong)
                    (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar9] +
                   (ulonglong)(uint)(iVar10 % 0x49) * 0xe0);
          if ((*(int *)((longlong)FVar18 + 0xa0) < 1) &&
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
          FVar19 = FVar18;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar18 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar19 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar18 + 0x98);
          }
          *(FDynamicMeshIndexBuffer32 **)((longlong)FVar19 + 0x18) = &this->IndexBuffer;
          *(FLocalVertexFactory **)((longlong)FVar18 + 0xa8) = &this->VertexFactory;
          *(undefined4 *)((longlong)FVar19 + 0x58) = *(undefined4 *)pFVar20;
          iVar10 = *(int *)(pFVar20 + 4);
          *(int *)((longlong)FVar19 + 0x5c) =
               iVar10 / 3 + (iVar10 >> 0x1f) +
               (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
          *(undefined4 *)((longlong)FVar19 + 0x68) = *(undefined4 *)(pFVar20 + 8);
          *(int *)((longlong)FVar19 + 0x6c) = *(int *)(pFVar20 + 0xc) + *(int *)(pFVar20 + 8) + -1;
          *(uint *)((longlong)FVar18 + 0xd4) =
               ((byte)this->field_0x78 & 1 ^ *(uint *)((longlong)FVar18 + 0xd4) & 0xfffffffe) &
               0xffffe07d;
          uVar14 = (**(code **)(**(longlong **)(pFVar20 + 0x10) + 0x310))();
          *(undefined8 *)((longlong)FVar18 + 0xb0) = uVar14;
          bVar8 = this->bAlwaysRenderAsText;
          *(undefined1 *)((longlong)FVar18 + 0xd2) = 0;
          uVar9 = 0;
          if (bVar8 == false) {
            uVar9 = 0x2000;
          }
          uVar11 = *(uint *)((longlong)FVar18 + 0xd4);
          *(uint *)((longlong)FVar18 + 0xd4) = uVar9 | uVar11 & 0xffffdfff;
          *(uint *)((longlong)FVar18 + 0xd4) =
               -(uint)((this->field_0x79 & 6) != 0) & 0x4000 | uVar9 | uVar11 & 0xffff9fff;
          FMeshElementCollector::AddMesh(param_4,uVar21,(FMeshBatch *)FVar18);
          pFVar20 = pFVar20 + 0x18;
        }
        bVar2 = this->field_0x79;
        lVar3 = *(longlong *)(local_58 + 8);
        pFVar15 = FMeshElementCollector::GetPDI(param_4,uVar21);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar15,(FEngineShowFlags *)(lVar3 + 0x48),
                   (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar2 & 6) != 0);
      }
      iVar16 = param_1->ArrayNum;
      local_78 = local_78 + 8;
      uVar21 = uVar21 + 1;
      FVar17 = local_70;
    } while ((int)uVar21 < iVar16);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 1479c8590

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

void __thiscall
FTextRenderSceneProxy::GetDynamicRayTracingInstances
          (FTextRenderSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  int *piVar1;
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FSceneView *pFVar7;
  FMeshBatch *pFVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  FRayTracingInstance *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_2e8 [32];
  undefined4 local_298;
  undefined4 uStack_294;
  longlong local_280;
  longlong local_278;
  FRayTracingInstance local_258;
  FRayTracingDynamicGeometryUpdateParams local_1e8;
  FRayTracingInstance local_158;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  FRayTracingGeometry *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  float local_a8 [2];
  float afStack_a0 [2];
  float local_98 [2];
  float afStack_90 [2];
  float local_88 [2];
  float afStack_80 [2];
  float local_78 [2];
  float afStack_70 [2];
  undefined1 local_68;
  FRHIResource *local_60;
  ulonglong local_58;
  
  pTVar10 = CVarRayTracingTextMeshes.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((pTVar10->ShadowedValue[1] != 0) && (this->bSupportRayTracing != false)) &&
     ((int)(this->VertexFactory)._padding_ != -1)) {
    pFVar17 = (param_1->Views).AllocatorInstance.Data;
    iVar4 = (param_1->Views).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = param_1->VisibilityMap;
    uVar19 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
      }
    }
    uVar23 = 0x20;
    if (uVar5 != 0) {
      uVar23 = uVar19;
    }
    if ((((int)uVar23 < 0) || (iVar4 <= (int)uVar23)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Views.IsValidIndex(FirstActiveViewIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                            ,0x393,
                            L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar20 = (FScriptContainerElement *)0x0;
    uVar18 = 0;
    uVar19 = uVar18;
    if ((int)uVar23 < iVar4) {
      uVar19 = ~uVar23 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_258.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Materials.ArrayNum = 0;
    local_258.Materials.ArrayMax = 0;
    local_258.bApplyLocalBoundsTransform = false;
    local_258.bThinGeometry = false;
    local_258.InstanceLayer = NearField;
    local_258.bInstanceMaskAndFlagsDirty = true;
    local_258.NumTransforms = 0;
    pFVar7 = *(FSceneView **)(pFVar17 + (longlong)(int)uVar23 * 8);
    pTVar2 = &this->CachedRayTracingMaterials;
    local_258.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.PrimitiveInstanceIndices.ArrayNum = 0;
    local_258.PrimitiveInstanceIndices.ArrayMax = 0;
    local_258.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
    local_258.PrimitiveInstanceIndicesView.ArrayNum = 0;
    local_258.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.InstanceTransforms.ArrayNum = 0;
    local_258.InstanceTransforms.ArrayMax = 0;
    if (this->bNeedsToUpdateRayTracingCache == false) {
      local_258.bApplyLocalBoundsTransform = false;
      local_258.bThinGeometry = false;
      local_258.InstanceLayer = NearField;
      local_258.bInstanceMaskAndFlagsDirty = false;
      local_258.NumTransforms = 0;
    }
    else {
      piVar1 = &(this->CachedRayTracingMaterials).ArrayMax;
      pFVar8 = (FMeshBatch *)(pTVar2->AllocatorInstance).Data;
      iVar13 = (this->CachedRayTracingMaterials).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FMeshBatch,int>(pFVar8,iVar13);
        (this->CachedRayTracingMaterials).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FMeshBatch,int>(pFVar8,iVar13);
        (this->CachedRayTracingMaterials).ArrayNum = 0;
      }
      local_278 = (longlong)(this->TextBatches).ArrayNum;
      if (0 < local_278) {
        local_280 = 0;
        pFVar17 = pFVar20;
        do {
          uVar22 = (uint)pFVar17;
          uVar19 = uVar18;
          if ((int)uVar22 < (this->TextBatches).ArrayNum) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar13 = (this->CachedRayTracingMaterials).ArrayNum;
          pFVar17 = (this->TextBatches).AllocatorInstance.Data + local_280;
          if (iVar13 == (this->CachedRayTracingMaterials).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8e0,&pTVar2->AllocatorInstance,
                                &(this->CachedRayTracingMaterials).ArrayMax);
          }
          (this->CachedRayTracingMaterials).ArrayNum = iVar13 + 1;
          pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0xe0;
          DefaultConstructItems<FMeshBatch,int>(pFVar24,1);
          if ((*(int *)(pFVar24 + 0xa0) < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar21 = pFVar24;
          if (*(FScriptContainerElement **)(pFVar24 + 0x98) != (FScriptContainerElement *)0x0) {
            pFVar21 = *(FScriptContainerElement **)(pFVar24 + 0x98);
          }
          *(FDynamicMeshIndexBuffer32 **)(pFVar21 + 0x18) = &this->IndexBuffer;
          *(FLocalVertexFactory **)(pFVar24 + 0xa8) = &this->VertexFactory;
          *(undefined4 *)(pFVar21 + 0x58) = *(undefined4 *)pFVar17;
          iVar13 = *(int *)(pFVar17 + 4);
          *(int *)(pFVar21 + 0x5c) =
               iVar13 / 3 + (iVar13 >> 0x1f) +
               (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >> 0x1f);
          *(undefined4 *)(pFVar21 + 0x68) = *(undefined4 *)(pFVar17 + 8);
          *(int *)(pFVar21 + 0x6c) = *(int *)(pFVar17 + 0xc) + *(int *)(pFVar17 + 8) + -1;
          *(uint *)(pFVar24 + 0xd4) = *(uint *)(pFVar24 + 0xd4) & 0xffffe07d;
          uVar14 = (**(code **)(**(longlong **)(pFVar17 + 0x10) + 0x310))();
          *(undefined8 *)(pFVar24 + 0xb0) = uVar14;
          uVar19 = uVar18;
          if (this->bAlwaysRenderAsText == false) {
            uVar19 = 0x2000;
          }
          *(uint *)(pFVar24 + 0xd4) = uVar19 | *(uint *)(pFVar24 + 0xd4) & 0xffffdfff;
          bVar12 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,pFVar7);
          *(uint *)(pFVar24 + 0xd4) = *(uint *)(pFVar24 + 0xd4) & 0xff7fffff;
          *(uint *)(pFVar24 + 0xd4) = *(uint *)(pFVar24 + 0xd4) | (uint)bVar12 << 0x17;
          pFVar24[0xd2] = (FScriptContainerElement)0x0;
          bVar3 = this->field_0x79;
          *(uint *)(pFVar24 + 0xcc) = uVar22;
          *(undefined2 *)(pFVar24 + 0xd0) = 0;
          pFVar17 = (FScriptContainerElement *)(ulonglong)(uVar22 + 1);
          *(uint *)(pFVar24 + 0xd4) =
               -(uint)((bVar3 & 6) != 0) & 0x4000 | *(uint *)(pFVar24 + 0xd4) & 0xffffbfff;
          local_280 = local_280 + 0x18;
          local_278 = local_278 + -1;
        } while (local_278 != 0);
      }
      this->bNeedsToUpdateRayTracingCache = false;
    }
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    iVar13 = (this->CachedRayTracingMaterials).ArrayNum;
    if ((iVar13 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_258.Geometry = &this->RayTracingGeometry;
    local_298 = SUB84(pFVar17,0);
    uStack_294 = (undefined4)((ulonglong)pFVar17 >> 0x20);
    local_258.InstanceTransformsView.DataPtr = (TMatrix<double> *)&this->field_0x110;
    local_258.MaterialsView.DataPtr._0_4_ = local_298;
    local_258.MaterialsView.DataPtr._4_4_ = uStack_294;
    local_258.InstanceTransformsView.ArrayNum = 1;
    local_258.MaterialsView.ArrayNum = iVar13;
    if (this->bRayTracingWithWPO != false) {
      lVar15 = (**(code **)((this->VertexFactory)._padding_ + 0x30))();
      if ((*(uint *)(lVar15 + 0x38) & 0x400) != 0) {
        iVar6 = (this->CachedRayTracingMaterials).ArrayNum;
        pFVar8 = (FMeshBatch *)(pTVar2->AllocatorInstance).Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        if (iVar6 == 0) {
          local_1e8.MeshBatches.AllocatorInstance.Data = pFVar20;
          local_1e8.MeshBatches.ArrayNum = iVar6;
          local_1e8.MeshBatches.ArrayMax = 0;
        }
        else {
          local_e0._0_4_ = iVar6;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,iVar6,0,&local_e8,iVar6,(int *)((longlong)&local_e0 + 4));
          ConstructItems<FMeshBatch,FMeshBatch,int>(local_e8.Data,pFVar8,iVar6);
          local_1e8.MeshBatches.AllocatorInstance.Data = local_e8.Data;
          local_1e8.MeshBatches.ArrayNum = (int)local_e0;
          local_1e8.MeshBatches.ArrayMax = local_e0._4_4_;
        }
        local_1e8.NumVertices = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
        local_1e8.Geometry = &this->RayTracingGeometry;
        local_1e8.NumTriangles = (this->RayTracingGeometry).Initializer.TotalPrimitiveCount;
        local_1e8.VertexBufferSize = local_1e8.NumVertices * 0xc;
        local_d8 = 0;
        local_c0 = 0;
        local_b8 = 1;
        local_b4 = 0;
        local_a8[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
        local_a8[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
        afStack_a0[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
        afStack_a0[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
        local_98[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
        local_98[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
        afStack_90[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
        afStack_90[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
        local_88[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
        local_88[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
        afStack_80[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
        afStack_80[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
        local_78[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
        local_78[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
        afStack_70[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
        afStack_70[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
        local_68 = 0;
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = 0;
        local_1e8.bUsingIndirectDraw = false;
        local_1e8.Buffer = (FRWBuffer *)0x0;
        local_1e8.bApplyWorldPositionOffset = true;
        local_1e8.InstanceId = 0;
        local_1e8.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
        local_1e8.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
        local_1e8.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
        local_1e8.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
        local_1e8.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
        local_1e8.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
        local_1e8.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
        local_1e8.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
        local_1e8.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
        local_1e8.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
        local_1e8.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
        local_1e8.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
        local_1e8.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
        local_1e8.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
        local_1e8.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
        local_1e8.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
        local_1e8.bAlphaMasked = false;
        local_1e8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
        local_60 = (FRHIResource *)0x0;
        local_d4 = local_1e8.NumVertices;
        local_d0 = local_1e8.VertexBufferSize;
        local_cc = local_1e8.NumTriangles;
        local_c8 = local_1e8.Geometry;
        FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(param_1,uVar23,&local_1e8);
        if (local_60 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_60);
        }
        DestructItems<FMeshBatch,int>((FMeshBatch *)local_e8.Data,(int)local_e0);
        if ((FMeshBatch *)local_e8.Data != (FMeshBatch *)0x0) {
          FMemory::Free(local_e8.Data);
        }
      }
    }
    if (local_258.Materials.ArrayNum != 0) {
      if (iVar13 != 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaterialsView.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                            ,0x27,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar13 = local_258.Materials.ArrayNum;
      if (local_258.Materials.ArrayNum < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
    if ((this->CachedRayTracingMaterials).ArrayNum != iVar13) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedRayTracingMaterials.Num() == RayTracingInstance.GetMaterials().Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                          ,0x3d0,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (((local_258.Geometry)->Initializer).Segments.ArrayNum !=
        (this->CachedRayTracingMaterials).ArrayNum) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RayTracingInstance.Geometry->Initializer.Segments.Num() == CachedRayTracingMaterials.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                          ,0x3d3,
                          L"Segments/Materials mismatch. Number of segments: %d. Number of Materials: %d."
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (0 < iVar4) {
      do {
        uVar19 = (uint)pFVar20;
        if ((uVar5 >> (uVar19 & 0x1f) & 1) != 0) {
          pFVar16 = FRayTracingInstance::FRayTracingInstance(&local_158,&local_258);
          FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar19,pFVar16);
        }
        pFVar20 = (FScriptContainerElement *)(ulonglong)(uVar19 + 1);
      } while ((int)(uVar19 + 1) < iVar4);
    }
    if (local_258.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.InstanceTransforms.AllocatorInstance.Data);
    }
    if (local_258.PrimitiveInstanceIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_258.PrimitiveInstanceIndices.AllocatorInstance.Data);
    }
    FVar11.Data = local_258.Materials.AllocatorInstance.Data;
    DestructItems<FMeshBatch,int>
              ((FMeshBatch *)local_258.Materials.AllocatorInstance.Data,local_258.Materials.ArrayNum
              );
    if ((FMeshBatch *)FVar11.Data != (FMeshBatch *)0x0) {
      FMemory::Free(FVar11.Data);
    }
  }
  return;
}

// GetMemoryFootprint @ 1479cbbd0

uint __thiscall FTextRenderSceneProxy::GetMemoryFootprint(FTextRenderSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 2000;
}

// GetTypeHash @ 1479d3bc0

ulong64 __thiscall FTextRenderSceneProxy::GetTypeHash(FTextRenderSceneProxy *this)

{
  return 0x1551fff60;
}

// GetViewRelevance @ 1479d50e0

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
FTextRenderSceneProxy::GetViewRelevance
          (FTextRenderSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar5 = 0;
  if ((!bVar2) || (uVar4 = 4, (param_1->Family->EngineShowFlags).TextRender == 0)) {
    uVar4 = uVar5;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar4;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  bVar2 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 5;
  uVar3 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  uVar4 = uVar5;
  if (this->field_0x89 != '\x01') {
    uVar4 = 0x2000;
  }
  uVar4 = uVar4 | uVar3 & 0xffffdfff;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)(byte)this->field_0x7f << 0xe ^ uVar4) & 0x4000 ^ uVar4;
  bVar2 = IsRichView(param_1->Family);
  if ((((bVar2) || ((param_1->Family->EngineShowFlags).Bounds != 0)) ||
      ((param_1->Family->EngineShowFlags).Collision != 0)) ||
     (((this->field_0x79 & 6) != 0 || ((this->field_0x79 & 0x10) != 0)))) {
    __return_storage_ptr__->bDynamicRelevance = 1;
  }
  else {
    __return_storage_ptr__->bStaticRelevance = 1;
  }
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       (((this->field_0x86 & 1) != 0 ||
        (((char)this->field_0x82 < '\0' || ((this->field_0x82 & 0x72) != 0)))))) &&
      (uVar5 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0)) &&
     (__return_storage_ptr__->bRenderInMainPass != 0)) {
    uVar5 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar5 >> 4;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 1479d58e0

bool __thiscall FTextRenderSceneProxy::HasRayTracingRepresentation(FTextRenderSceneProxy *this)

{
  return true;
}

// IsRayTracingRelevant @ 1479da6c0

bool __thiscall FTextRenderSceneProxy::IsRayTracingRelevant(FTextRenderSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 1479da6d0

bool __thiscall FTextRenderSceneProxy::IsRayTracingStaticRelevant(FTextRenderSceneProxy *this)

{
  return false;
}

// IsUsingDistanceCullFade @ 1479da910

bool __thiscall FTextRenderSceneProxy::IsUsingDistanceCullFade(FTextRenderSceneProxy *this)

{
  return (bool)(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 1 & 1);
}

// ReleaseRenderThreadResources @ 1479e33f0

void __thiscall FTextRenderSceneProxy::ReleaseRenderThreadResources(FTextRenderSceneProxy *this)

{
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this->VertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))(&this->VertexBuffers)
  ;
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001479e345e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->RayTracingGeometry)._padding_ + 0x20))();
  return;
}

// UpdateRayTracingGeometry_RenderingThread @ 1479f2350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FTextRenderSceneProxy::UpdateRayTracingGeometry_RenderingThread
          (FTextRenderSceneProxy *this,FRHICommandListBase *param_1)

{
  int iVar1;
  FRHIBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FRHIBuffer *this_00;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FDebugName *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_1a8 [32];
  FRayTracingGeometrySegment local_158;
  FRayTracingGeometryInitializer local_130;
  FDebugName local_c0 [2];
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ERayTracingGeometryInitializerType local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  FResourceArrayUploadInterface *local_78;
  uint local_70 [6];
  FRHIRayTracingGeometry *local_58;
  FDebugName local_50;
  FName local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::DebugName,"FTextRenderSceneProxy");
    _Init_thread_footer(&::_TSS0);
  }
  uVar11 = 0;
  local_94 = 0x10000;
  local_a8 = (FRHIBuffer *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = Rendering;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78 = (FResourceArrayUploadInterface *)0x0;
  local_58 = (FRHIRayTracingGeometry *)0x0;
  local_70[0] = 0xffffffff;
  local_70[1] = 0xffffffff;
  local_70[2] = 0xffffffff;
  local_70[3] = 0xffffffff;
  local_70[4] = 0xffffffff;
  local_70[5] = 0xffffffff;
  FDebugName::FDebugName(&local_50);
  iVar8 = DebugNumber;
  local_44.ComparisonIndex.Value = 0;
  local_44.Number = 0;
  DebugNumber = DebugNumber + 1;
  pFVar9 = FDebugName::FDebugName(local_c0,::DebugName,iVar8);
  this_00 = local_a8;
  local_50.Name = pFVar9->Name;
  local_50.Number = pFVar9->Number;
  pFVar2 = (FRHIBuffer *)(this->IndexBuffer)._padding_;
  if (local_a8 != pFVar2) {
    local_a8 = pFVar2;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  local_a0 = local_a0 & 0xffffffff;
  iVar8 = (this->IndexBuffer).Indices.ArrayNum;
  local_94 = CONCAT22(local_94._2_2_,1);
  local_98 = iVar8 / 3 + (iVar8 >> 0x1f) +
             (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f);
  uVar12 = uVar11;
  if (0 < (this->TextBatches).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (this->TextBatches).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (FRHIBuffer *)(this->VertexBuffers).PositionVertexBuffer._padding_;
      pFVar3 = (this->TextBatches).AllocatorInstance.Data;
      local_158.VertexBuffer.Reference = (FRHIBuffer *)0x0;
      local_158.VertexBufferElementType = VET_Float3;
      local_158.VertexBufferOffset = 0;
      local_158.VertexBufferStride = 0xc;
      local_158.MaxVertices = 0;
      local_158.FirstPrimitive = 0;
      local_158.NumPrimitives = 0;
      local_158.bForceOpaque = false;
      local_158.bAllowDuplicateAnyHitShaderInvocation = true;
      local_158.bEnabled = true;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        local_158.VertexBuffer.Reference = pFVar2;
        FRHIResource::AddRef((FRHIResource *)pFVar2);
      }
      local_158.VertexBufferStride = (this->VertexBuffers).PositionVertexBuffer.Stride;
      local_158.MaxVertices = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
      local_158.VertexBufferElementType = VET_Float3;
      local_158.VertexBufferOffset = 0;
      iVar8 = *(int *)(pFVar3 + uVar12);
      iVar1 = *(int *)(pFVar3 + uVar12 + 4);
      local_158.bEnabled = true;
      local_158._32_2_ = local_158._32_2_ & 0xff00;
      local_158.NumPrimitives =
           iVar1 / 3 + (iVar1 >> 0x1f) +
           (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
      local_158.FirstPrimitive =
           iVar8 / 3 + (iVar8 >> 0x1f) +
           (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f);
      if (((local_88.Data <= &local_158) &&
          (&local_158 <
           (FRayTracingGeometrySegment *)(local_88.Data + (longlong)local_80._4_4_ * 0x28))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar8 + 1);
      pFVar3 = local_88.Data + (longlong)iVar8 * 0x28;
      *(undefined8 *)&pFVar3->field_0x0 = 0;
      *(FRHIBuffer **)&pFVar3->field_0x0 = local_158.VertexBuffer.Reference;
      if (local_158.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_158.VertexBuffer.Reference);
      }
      *(EVertexElementType *)(pFVar3 + 8) = local_158.VertexBufferElementType;
      *(uint *)(pFVar3 + 0xc) = local_158.VertexBufferOffset;
      *(uint *)(pFVar3 + 0x10) = local_158.VertexBufferStride;
      *(uint *)(pFVar3 + 0x14) = local_158.MaxVertices;
      *(uint *)(pFVar3 + 0x18) = local_158.FirstPrimitive;
      *(uint *)(pFVar3 + 0x1c) = local_158.NumPrimitives;
      pFVar3[0x20] = (FScriptContainerElement)local_158.bForceOpaque;
      pFVar3[0x21] = (FScriptContainerElement)local_158.bAllowDuplicateAnyHitShaderInvocation;
      pFVar3[0x22] = (FScriptContainerElement)local_158.bEnabled;
      if (local_158.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_158.VertexBuffer.Reference);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x18;
    } while ((int)(uVar10 + 1) < (this->TextBatches).ArrayNum);
  }
  local_130.IndexBuffer.Reference = local_a8;
  if (local_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_a8);
  }
  FVar5.Data = local_88.Data;
  iVar8 = (int)local_80;
  local_130.IndexBufferOffset = (uint)local_a0;
  local_130.GeometryType = local_a0._4_4_;
  local_130.TotalPrimitiveCount = local_98;
  local_130.bFastBuild = (bool)(undefined1)local_94;
  local_130.bAllowUpdate = (bool)local_94._1_1_;
  local_130.bAllowCompaction = (bool)local_94._2_1_;
  local_130.bTemplate = (bool)local_94._3_1_;
  local_130.Type = local_90;
  local_130.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Segments.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_130.Segments.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_80,0,&local_130.Segments.AllocatorInstance,(int)local_80,
               &local_130.Segments.ArrayMax);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              (local_130.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar5.Data,
               iVar8);
  }
  local_130.OfflineData = local_78;
  local_130.SourceGeometry = local_58;
  local_130.DebugName.Number = local_50.Number;
  local_130.OfflineDataHeader.Reserved[0] = local_70[0];
  local_130.OfflineDataHeader.Reserved[1] = local_70[1];
  local_130.OfflineDataHeader.Reserved[2] = local_70[2];
  local_130.OfflineDataHeader.Reserved[3] = local_70[3];
  local_130.OwnerName = local_44;
  local_130.OfflineDataHeader.Reserved[4] = local_70[4];
  local_130.OfflineDataHeader.Reserved[5] = local_70[5];
  local_130.DebugName.Name = local_50.Name;
  FRayTracingGeometry::SetInitializer(&this->RayTracingGeometry,&local_130);
  (**(code **)((this->RayTracingGeometry)._padding_ + 0x18))(&this->RayTracingGeometry,param_1);
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_88.Data,(int)local_80);
  if ((FRayTracingGeometrySegment *)local_88.Data != (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8);
  }
  return;
}

