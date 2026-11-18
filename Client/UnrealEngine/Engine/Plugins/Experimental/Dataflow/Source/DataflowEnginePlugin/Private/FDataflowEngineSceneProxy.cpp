// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 17

// FDataflowEngineSceneProxy @ 14daaf830

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

FDataflowEngineSceneProxy * __thiscall
FDataflowEngineSceneProxy::FDataflowEngineSceneProxy
          (FDataflowEngineSceneProxy *this,UDataflowComponent *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  longlong lVar3;
  EShaderPlatform EVar4;
  FManagedArrayCollection *this_00;
  FManagedArrayCollection *this_01;
  UMaterial *pUVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined8 local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  this_01 = (FManagedArrayCollection *)0x0;
  local_res8 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->DataflowComponent = param_1;
  *(undefined ***)this = &___7FDataflowEngineSceneProxy__6B_;
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FManagedArrayCollection *)0x0) {
    this_01 = FManagedArrayCollection::FManagedArrayCollection(this_00);
  }
  FManagedArrayCollection::GroupNames(this_01,&local_48);
  iVar6 = local_48.ArrayNum;
  pFVar1 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar6 * 8);
  FVar7.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((FName *)FVar7.Data == pFVar1) break;
    FManagedArrayCollection::EmptyGroup(this_01,*(FName *)FVar7.Data);
    FVar7.Data = FVar7.Data + 8;
  }
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FManagedArrayCollection::CopyTo
            (&param_1->RenderCollection,this_01,&local_38,
             (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)&local_48);
  this->ConstantData = this_01;
  pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  this->RenderMaterial = (UMaterialInterface *)pUVar5;
  (this->MeshBatchDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshBatchDatas).ArrayNum = 0;
  (this->MeshBatchDatas).ArrayMax = 0;
  pcVar2 = *(code **)(param_1->_padding_ + 0xa90);
  EVar4 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  (*pcVar2)(param_1,&this->MaterialRelevance,EVar4);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(*(longlong *)&this->field_0x220 + 8),
             "FDataflowEngineMeshVertexFactory");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  lVar3 = *(longlong *)&this->field_0x220;
  this->NumRenderedVerts = 0;
  (this->VertexBatchDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBatchDatas).ArrayNum = 0;
  (this->VertexBatchDatas).ArrayMax = 0;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->BoxVertexFactory,*(Type *)(lVar3 + 8),"FDataflowEngineBoxInstanceVertexFactory")
  ;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->BoxVertexBuffers).StaticMeshVertexBuffer)
  ;
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->BoxVertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->BoxVertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->BoxIndexBuffer);
  pUVar5 = (UMaterial *)
           (**(code **)(this->DataflowComponent->_padding_ + 0x690))(this->DataflowComponent,0);
  if (pUVar5 == (UMaterial *)0x0) {
    pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  this->RenderMaterial = (UMaterialInterface *)pUVar5;
  return this;
}

// ~FDataflowEngineSceneProxy @ 14daafee0

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
FDataflowEngineSceneProxy::~FDataflowEngineSceneProxy(FDataflowEngineSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FDataflowEngineSceneProxy__6B_;
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->BoxIndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->BoxVertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->BoxVertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->BoxVertexBuffers).StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->BoxVertexFactory);
  pFVar1 = (this->VertexBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  pFVar1 = (this->MeshBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14dab02d0

void __thiscall
`FDataflowEngineSceneProxy::CreateMeshRenderThreadResources'::__l12::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  FColor_u_0 FVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  FColor_u_0 local_res10;
  FColor_u_0 local_res18;
  FColor_u_0 local_res20;
  FColor_u_0 local_1c0;
  TVector2<float>_u_0 local_1a8;
  TVector2<float>_u_0 local_1a0;
  TVector2<float>_u_0 local_198;
  float local_190;
  float fStack_18c;
  float local_188;
  float local_184;
  float fStack_180;
  float local_17c;
  float local_178;
  float fStack_174;
  float local_170;
  TVector<float>_u_0 local_168;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8 [14];
  
  lVar18 = *(longlong *)((longlong)this + 8);
  lVar15 = (longlong)param_1;
  uVar21 = (uint)~param_1 >> 0x1f;
  uVar12 = param_1 * 3;
  lVar1 = *(longlong *)this;
  uVar16 = 0;
  uVar8 = uVar16;
  if (param_1 < *(int *)(lVar18 + 0x18)) {
    uVar8 = uVar21;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(*(longlong *)(lVar18 + 0x10) + lVar15 * 0xc);
  lVar18 = (longlong)(int)uVar8;
  uVar9 = uVar16;
  if ((int)uVar8 < *(int *)(lVar1 + 0x18)) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar19 = *(longlong *)((longlong)this + 8);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar2 = *(longlong *)this;
  uVar8 = uVar16;
  if (param_1 < *(int *)(lVar19 + 0x18)) {
    uVar8 = uVar21;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(*(longlong *)(lVar19 + 0x10) + 4 + lVar15 * 0xc);
  lVar19 = (longlong)(int)uVar8;
  uVar9 = uVar16;
  if ((int)uVar8 < *(int *)(lVar2 + 0x18)) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar20 = *(longlong *)((longlong)this + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  lVar3 = *(longlong *)this;
  uVar8 = uVar16;
  if (param_1 < *(int *)(lVar20 + 0x18)) {
    uVar8 = uVar21;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(*(longlong *)(lVar20 + 0x10) + 8 + lVar15 * 0xc);
  lVar20 = (longlong)(int)uVar8;
  if ((int)uVar8 < *(int *)(lVar3 + 0x18)) {
    uVar16 = ~uVar8 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar24 = __real_3f800000;
  fVar6 = __real_322bcc77;
  uVar9 = param_1 * 3;
  uVar14 = (ulonglong)(uVar9 * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x5d8));
  lVar3 = *(longlong *)(lVar3 + 0x10);
  uVar13 = *(undefined4 *)(lVar1 + 8 + lVar18 * 0xc);
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x5d0);
  *(undefined8 *)(uVar14 + lVar4) = *(undefined8 *)(lVar1 + lVar18 * 0xc);
  *(undefined4 *)(uVar14 + 8 + lVar4) = uVar13;
  uVar13 = *(undefined4 *)(lVar2 + 8 + lVar19 * 0xc);
  uVar8 = uVar9 + 1;
  uVar14 = (ulonglong)(uVar8 * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x5d8));
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x5d0);
  uVar16 = uVar9 + 2;
  *(undefined8 *)(uVar14 + lVar4) = *(undefined8 *)(lVar2 + lVar19 * 0xc);
  *(undefined4 *)(uVar14 + 8 + lVar4) = uVar13;
  uVar13 = *(undefined4 *)(lVar3 + 8 + lVar20 * 0xc);
  uVar14 = (ulonglong)(uVar16 * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x5d8));
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x5d0);
  *(undefined8 *)(uVar14 + lVar4) = *(undefined8 *)(lVar3 + lVar20 * 0xc);
  *(undefined4 *)(uVar14 + 8 + lVar4) = uVar13;
  fVar32 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  fVar33 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  fVar28 = *(float *)(lVar2 + lVar19 * 0xc);
  fVar30 = *(float *)(lVar2 + 4 + lVar19 * 0xc);
  fVar25 = fVar28 - *(float *)(lVar1 + lVar18 * 0xc);
  local_17c = *(float *)(lVar2 + 8 + lVar19 * 0xc);
  fVar27 = fVar30 - *(float *)(lVar1 + 4 + lVar18 * 0xc);
  local_188 = local_17c - *(float *)(lVar1 + 8 + lVar18 * 0xc);
  fVar22 = fVar27 * fVar27 + fVar25 * fVar25 + local_188 * local_188;
  fVar23 = fVar27;
  fVar31 = fVar25;
  uVar13 = local_188;
  if ((fVar22 != fVar24) &&
     (fVar23 = fVar33, fVar31 = fVar32,
     uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar6 <= fVar22)) {
    fVar22 = fVar24 / SQRT(fVar22);
    fVar23 = fVar22 * fVar27;
    fVar31 = fVar22 * fVar25;
    uVar13 = fVar22 * local_188;
  }
  _local_190 = CONCAT44(fVar27,fVar25);
  fVar28 = *(float *)(lVar3 + lVar20 * 0xc) - fVar28;
  fVar30 = *(float *)(lVar3 + 4 + lVar20 * 0xc) - fVar30;
  local_17c = *(float *)(lVar3 + 8 + lVar20 * 0xc) - local_17c;
  fVar27 = fVar30 * fVar30 + fVar28 * fVar28 + local_17c * local_17c;
  fVar22 = fVar30;
  fVar25 = fVar28;
  uVar26 = local_17c;
  if ((fVar27 != fVar24) &&
     (fVar22 = fVar33, fVar25 = fVar32,
     uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar6 <= fVar27)) {
    fVar27 = fVar24 / SQRT(fVar27);
    fVar22 = fVar27 * fVar30;
    fVar25 = fVar27 * fVar28;
    uVar26 = fVar27 * local_17c;
  }
  _local_184 = CONCAT44(fVar30,fVar28);
  fVar29 = fVar22 * (float)uVar13 - (float)uVar26 * fVar23;
  fVar27 = (float)uVar26 * fVar31 - fVar25 * (float)uVar13;
  local_170 = fVar25 * fVar23 - fVar22 * fVar31;
  fVar23 = fVar27 * fVar27 + fVar29 * fVar29 + local_170 * local_170;
  fVar28 = fVar29;
  fVar30 = fVar27;
  uVar13 = local_170;
  if ((fVar23 != fVar24) &&
     (fVar28 = fVar32, fVar30 = fVar33,
     uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar6 <= fVar23)) {
    fVar24 = fVar24 / SQRT(fVar23);
    fVar28 = fVar24 * fVar29;
    fVar30 = fVar24 * fVar27;
    uVar13 = fVar24 * local_170;
  }
  _local_178 = CONCAT44(fVar27,fVar29);
  local_108._0_8_ = CONCAT44(fVar30,fVar28);
  local_168._s_0.X = 0.0;
  local_168._4_8_ = 0x3f800000;
  local_158._0_8_ = 0x3f800000;
  local_158._s_0.Z = 0.0;
  local_108._s_0.Z = (float)uVar13;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0x10) + 0x4e0),uVar9,
             (TVector<float> *)&local_158._s_0,(TVector<float> *)&local_168._s_0,
             (TVector<float> *)&local_108._s_0);
  local_f8._0_8_ = CONCAT44(fVar30,fVar28);
  local_148._s_0.X = 0.0;
  local_148._4_8_ = 0x3f800000;
  local_138._0_8_ = 0x3f800000;
  local_138._s_0.Z = 0.0;
  local_f8._s_0.Z = (float)uVar13;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0x10) + 0x4e0),uVar8,
             (TVector<float> *)&local_138._s_0,(TVector<float> *)&local_148._s_0,
             (TVector<float> *)&local_f8._s_0);
  local_e8[0]._0_8_ = CONCAT44(fVar30,fVar28);
  local_128._s_0.X = 0.0;
  local_128._4_8_ = 0x3f800000;
  local_118._0_8_ = 0x3f800000;
  local_118._s_0.Z = 0.0;
  local_e8[0]._8_4_ = uVar13;
  FStaticMeshVertexBuffer::SetVertexTangents
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0x10) + 0x4e0),uVar16,
             (TVector<float> *)&local_118._s_0,(TVector<float> *)&local_128._s_0,
             (TVector<float> *)&local_e8[0]._s_0);
  local_1a8 = (TVector2<float>_u_0)0x0;
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0x10) + 0x4e0),param_1 * 3,0
             ,(TVector2<float> *)&local_1a8._s_0,false);
  local_1a0 = (TVector2<float>_u_0)0x0;
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0x10) + 0x4e0),uVar8,0,
             (TVector2<float> *)&local_1a0._s_0,false);
  local_198 = (TVector2<float>_u_0)0x0;
  FStaticMeshVertexBuffer::SetVertexUV
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 0x10) + 0x4e0),uVar16,0,
             (TVector2<float> *)&local_198._s_0,false);
  lVar18 = *(longlong *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  local_res10 = IDataflowEnginePlugin::SelectionLockedPrimaryColor.field0_0x0;
  if (**(int **)((longlong)this + 0x18) == 1) {
    local_res10 = IDataflowEnginePlugin::SelectionPrimaryColor.field0_0x0;
  }
  lVar19 = *(longlong *)((longlong)this + 0x28);
  uVar9 = 0;
  uVar16 = uVar9;
  if (param_1 < *(int *)(lVar18 + 0x18)) {
    uVar16 = uVar21;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar18 + 0x10) + lVar15 * 0xc);
  uVar10 = uVar9;
  if ((int)uVar16 < *(int *)(lVar19 + 0x18)) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar19 + 0x10) + (longlong)(int)uVar16 * 4);
  uVar10 = uVar9;
  if ((int)uVar16 < *(int *)(lVar1 + 0x18)) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = 0;
  FVar17 = local_res10;
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar16 * 4) == 0) {
    lVar18 = *(longlong *)((longlong)this + 0x30);
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar16 = uVar9;
    if (param_1 < *(int *)(lVar1 + 0x18)) {
      uVar16 = uVar21;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = *(uint *)(*(longlong *)(lVar1 + 0x10) + lVar15 * 0xc);
    uVar11 = uVar10;
    if ((int)uVar16 < *(int *)(lVar18 + 0x18)) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FLinearColor::ToFColorSRGB
              ((FLinearColor *)((longlong)(int)uVar16 * 0x10 + *(longlong *)(lVar18 + 0x10)));
    FVar17 = local_res18;
  }
  *(FColor_u_0 *)
   ((ulonglong)(uint)(param_1 * 3 * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x628)) +
   *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x620)) = FVar17;
  lVar18 = *(longlong *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 8);
  lVar19 = *(longlong *)((longlong)this + 0x28);
  uVar16 = uVar10;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar16 = uVar21;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar1 + 0x10) + 4 + lVar15 * 0xc);
  uVar11 = uVar9;
  if ((int)uVar16 < *(int *)(lVar19 + 0x18)) {
    uVar11 = ~uVar16 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar19 + 0x10) + (longlong)(int)uVar16 * 4);
  uVar11 = uVar9;
  if ((int)uVar16 < *(int *)(lVar18 + 0x18)) {
    uVar11 = ~uVar16 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar17 = local_res10;
  if (*(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)(int)uVar16 * 4) == 0) {
    lVar18 = *(longlong *)((longlong)this + 0x30);
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar16 = uVar9;
    if (param_1 < *(int *)(lVar1 + 0x18)) {
      uVar16 = uVar21;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = *(uint *)(*(longlong *)(lVar1 + 0x10) + 4 + lVar15 * 0xc);
    if ((int)uVar16 < *(int *)(lVar18 + 0x18)) {
      uVar9 = ~uVar16 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FLinearColor::ToFColorSRGB
              ((FLinearColor *)((longlong)(int)uVar16 * 0x10 + *(longlong *)(lVar18 + 0x10)));
    FVar17 = local_res20;
  }
  *(FColor_u_0 *)
   ((ulonglong)(uVar8 * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x628)) +
   *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x620)) = FVar17;
  lVar18 = *(longlong *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 8);
  lVar19 = *(longlong *)((longlong)this + 0x28);
  uVar16 = uVar10;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar16 = uVar21;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar15 * 0xc);
  uVar9 = uVar10;
  if ((int)uVar16 < *(int *)(lVar19 + 0x18)) {
    uVar9 = ~uVar16 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar19 + 0x10) + (longlong)(int)uVar16 * 4);
  uVar9 = uVar10;
  if ((int)uVar16 < *(int *)(lVar18 + 0x18)) {
    uVar9 = ~uVar16 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)(int)uVar16 * 4) == 0) {
    lVar18 = *(longlong *)((longlong)this + 8);
    lVar1 = *(longlong *)((longlong)this + 0x30);
    uVar16 = uVar10;
    if (param_1 < *(int *)(lVar18 + 0x18)) {
      uVar16 = uVar21;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = *(uint *)(*(longlong *)(lVar18 + 0x10) + 8 + lVar15 * 0xc);
    uVar21 = uVar10;
    if ((int)uVar16 < *(int *)(lVar1 + 0x18)) {
      uVar21 = ~uVar16 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FLinearColor::ToFColorSRGB
              ((FLinearColor *)((longlong)(int)uVar16 * 0x10 + *(longlong *)(lVar1 + 0x10)));
    local_res10 = local_1c0;
  }
  uVar21 = uVar12 + 2;
  ((FColor_u_0 *)
  ((ulonglong)(uVar21 * *(int *)(*(longlong *)((longlong)this + 0x10) + 0x628)) +
  *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x620)))->_s_0 = (FColor_u_0_s_0)local_res10;
  lVar18 = *(longlong *)((longlong)this + 0x10);
  uVar16 = uVar10;
  if ((int)uVar12 < *(int *)(lVar18 + 0x668)) {
    uVar16 = ~uVar12 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)(*(longlong *)(lVar18 + 0x660) + (longlong)(int)uVar12 * 4) = uVar12;
  lVar18 = *(longlong *)((longlong)this + 0x10);
  uVar12 = uVar10;
  if ((int)uVar8 < *(int *)(lVar18 + 0x668)) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)(*(longlong *)(lVar18 + 0x660) + (longlong)(int)uVar8 * 4) = uVar8;
  lVar18 = *(longlong *)((longlong)this + 0x10);
  if ((int)uVar21 < *(int *)(lVar18 + 0x668)) {
    uVar10 = ~uVar21 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)(*(longlong *)(lVar18 + 0x660) + (longlong)(int)uVar21 * 4) = uVar21;
  return;
}

// CanBeOccluded @ 14dab1730

bool __thiscall FDataflowEngineSceneProxy::CanBeOccluded(FDataflowEngineSceneProxy *this)

{
  return false;
}

// CreateInstancedVertexRenderThreadResources @ 14dab1e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDataflowEngineSceneProxy::CreateInstancedVertexRenderThreadResources
          (FDataflowEngineSceneProxy *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TArray<FDataflowVertexBatchData,TSizedDefaultAllocator<32>_> *pTVar2;
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *_Dst;
  uchar *puVar3;
  ushort *puVar4;
  FGenericStaticFeatureLevel FVar5;
  uchar *puVar6;
  FStaticMeshVertexDataInterface FVar7;
  code *pcVar8;
  FColor_u_0 FVar9;
  TManagedArray<UE::Math::TVector<float>_> *pTVar10;
  longlong lVar11;
  FRHICommandListBase *pFVar12;
  TManagedArray<int> *pTVar13;
  bool bVar14;
  FStaticShaderPlatform FVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  undefined1 auStackY_8d8 [32];
  ushort local_898;
  ushort local_896;
  ushort local_894;
  ushort local_892;
  ushort local_890;
  ushort local_88e;
  uint local_88c;
  undefined8 local_888;
  float local_880;
  uint local_878;
  uint local_874;
  longlong local_870;
  int local_868;
  TManagedArray<UE::Math::TVector<float>_> *local_860;
  longlong local_858;
  undefined8 local_850;
  float local_848;
  uint local_840;
  longlong local_838;
  TManagedArray<int> *local_830;
  int *local_828;
  undefined8 local_820;
  undefined8 local_818;
  longlong local_810;
  undefined8 local_808;
  float local_800;
  float fStack_7fc;
  float local_7f8;
  TVector<float>_u_0 local_7f0;
  float local_7e0;
  float fStack_7dc;
  float local_7d8;
  TVector<float>_u_0 local_7d0;
  float local_7c0;
  float fStack_7bc;
  float local_7b8;
  TVector<float>_u_0 local_7a8;
  TVector<float>_u_0 local_798;
  TVector<float>_u_0 local_788;
  TVector<float>_u_0 local_778;
  TVector<float>_u_0 local_768;
  TVector<float>_u_0 local_758;
  longlong local_748;
  FRHICommandListBase *local_740;
  FPositionVertexBuffer *local_738;
  TManagedArray<int> *local_730;
  TManagedArray<int> *local_728;
  TVector<float>_u_0 local_718;
  TVector<float>_u_0 local_708;
  TVector<float>_u_0 local_6f8;
  undefined8 local_6e8;
  float local_6e0;
  FRenderingFacade local_6d8;
  FDataType local_1b8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  if ((this->DataflowComponent->SelectionState).Mode == DSS_Dataflow_Vertex) {
    FVar5.FeatureLevel = (*(FSceneInterface **)&this->field_0x220)->FeatureLevel;
    local_740 = param_1;
    FVar15.Platform = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
    bVar14 = UseGPUScene(FVar15,FVar5);
    if (bVar14) {
      GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_6d8,this->ConstantData)
      ;
      if ((local_6d8.VertexAttribute.ConstAttributeArray ==
           (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_860 = local_6d8.VertexAttribute.ConstAttributeArray;
      if ((local_6d8.VertexSelectionAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_728 = local_6d8.VertexSelectionAttribute.ConstAttributeArray;
      if ((local_6d8.GeometrySelectionAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_830 = local_6d8.GeometrySelectionAttribute.ConstAttributeArray;
      if ((local_6d8.VertexToGeometryIndexAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0
          ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x67,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_730 = local_6d8.VertexToGeometryIndexAttribute.ConstAttributeArray;
      iVar16 = GeometryCollection::Facades::FRenderingFacade::NumVerticesOnSelectedGeometry
                         (&local_6d8);
      this->NumRenderedVerts = iVar16;
      local_868 = BoxIndicesArray.ArrayNum * 3;
      uVar21 = iVar16 * local_868;
      if (iVar16 != 0) {
        local_738 = &(this->BoxVertexBuffers).PositionVertexBuffer;
        FPositionVertexBuffer::Init(local_738,uVar21,true);
        FStaticMeshVertexBuffer::Init
                  (&(this->BoxVertexBuffers).StaticMeshVertexBuffer,uVar21,1,true);
        FColorVertexBuffer::Init(&(this->BoxVertexBuffers).ColorVertexBuffer,uVar21,true);
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&(this->BoxIndexBuffer).Indices,uVar21,Default);
        uVar21 = this->NumRenderedVerts;
        pTVar2 = &this->VertexBatchDatas;
        iVar16 = (this->VertexBatchDatas).ArrayNum;
        piVar1 = &(this->VertexBatchDatas).ArrayNum;
        local_828 = piVar1;
        if (iVar16 < (int)uVar21) {
          iVar17 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x14,4,uVar21 - iVar16,&pTVar2->AllocatorInstance,piVar1,
                              &(this->VertexBatchDatas).ArrayMax);
          DefaultConstructItems<FDataflowVertexBatchData,int>
                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x14,uVar21 - iVar16);
        }
        else {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
          }
          if ((int)uVar21 < iVar16) {
            uVar22 = iVar16 - uVar21;
            if (((int)(uVar22 | uVar21) < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar22 != 0) {
              _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x14;
              iVar16 = (*piVar1 - uVar21) - uVar22;
              if (iVar16 != 0) {
                memmove(_Dst,_Dst + (longlong)(int)uVar22 * 0x14,(longlong)iVar16 * 0x14);
              }
              *piVar1 = *piVar1 - uVar22;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,&pTVar2->AllocatorInstance,*piVar1,
                         &(this->VertexBatchDatas).ArrayMax);
            }
          }
        }
        uVar21 = 0;
        local_88c = 0;
        local_870 = 0;
        local_838 = 0;
        while( true ) {
          lVar24 = local_870;
          uVar22 = local_88c;
          if (local_6d8.VertexAttribute.ConstAttributeArray ==
              (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
            iVar16 = FManagedArrayCollection::NumElements
                               (local_6d8.VertexAttribute.ConstCollection,
                                local_6d8.VertexAttribute.Group);
          }
          else {
            iVar16 = (**(code **)(*(longlong *)local_6d8.VertexAttribute.ConstAttributeArray + 0x60)
                     )();
          }
          pTVar13 = local_730;
          pFVar12 = local_740;
          if (iVar16 <= (int)uVar22) break;
          local_878 = ~uVar22 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar22 < *(int *)&local_730->field_0x18) {
            uVar18 = local_878;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar18 = *(uint *)(*(longlong *)&pTVar13->field_0x10 + lVar24 * 4);
          uVar23 = 0;
          if ((int)uVar18 < *(int *)&local_830->field_0x18) {
            uVar23 = ~uVar18 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)(*(longlong *)&local_830->field_0x10 + (longlong)(int)uVar18 * 4) != 0) {
            uVar23 = ~uVar21 >> 0x1f;
            uVar18 = 0;
            if ((int)uVar21 < (this->VertexBatchDatas).ArrayNum) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar11 = local_838;
            local_874 = uVar21 * local_868;
            *(uint *)((this->VertexBatchDatas).AllocatorInstance.Data + local_838 * 0x14) =
                 local_874;
            iVar16 = BoxIndicesArray.ArrayNum;
            uVar18 = 0;
            if ((int)uVar21 < *local_828) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(int *)((this->VertexBatchDatas).AllocatorInstance.Data + lVar11 * 0x14 + 4) = iVar16;
            uVar18 = 0;
            if ((int)uVar21 < *local_828) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar2 = &this->VertexBatchDatas;
            *(uint *)((pTVar2->AllocatorInstance).Data + lVar11 * 0x14 + 8) = local_874;
            uVar18 = 0;
            if ((int)uVar21 < (this->VertexBatchDatas).ArrayNum) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_840 = uVar21 + 1;
            *(uint *)((pTVar2->AllocatorInstance).Data + lVar11 * 0x14 + 0xc) =
                 local_840 * local_868 + -1;
            uVar18 = 0;
            if ((int)uVar21 < (this->VertexBatchDatas).ArrayNum) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(uint *)((pTVar2->AllocatorInstance).Data + lVar11 * 0x14 + 0x10) = uVar22;
            uVar21 = 0;
            if (0 < BoxIndicesArray.ArrayNum) {
              uVar20 = (ulonglong)(int)local_874;
              local_858 = 0;
              local_748 = lVar24 * 3;
              local_810 = uVar20 * 4;
              do {
                lVar11 = local_748;
                lVar24 = local_858;
                uVar25 = (int)uVar20 + uVar21 * 3;
                uVar23 = ~uVar21 >> 0x1f;
                uVar18 = 0;
                if ((int)uVar21 < BoxIndicesArray.ArrayNum) {
                  uVar18 = uVar23;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar18 = *(uint *)(BoxIndicesArray.AllocatorInstance.Data + lVar24);
                lVar24 = (longlong)(int)uVar18;
                uVar19 = 0;
                if ((int)uVar18 < BoxVertexArray.ArrayNum) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar10 = local_860;
                fVar32 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc);
                fVar33 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc + 4);
                fVar34 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc + 8);
                uVar18 = 0;
                if ((int)uVar22 < *(int *)&local_860->field_0x18) {
                  uVar18 = local_878;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar24 = *(longlong *)&pTVar10->field_0x10;
                local_848 = fVar34 + fVar34 + *(float *)(lVar24 + 8 + lVar11 * 4);
                uVar18 = 0;
                if ((int)uVar21 < BoxIndicesArray.ArrayNum) {
                  uVar18 = uVar23;
                }
                local_850 = CONCAT44(fVar33 + fVar33 + *(float *)(lVar24 + 4 + lVar11 * 4),
                                     fVar32 + fVar32 + *(float *)(lVar24 + lVar11 * 4));
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar18 = *(uint *)(BoxIndicesArray.AllocatorInstance.Data + local_858 + 4);
                lVar24 = (longlong)(int)uVar18;
                uVar19 = 0;
                if ((int)uVar18 < BoxVertexArray.ArrayNum) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar18 = local_878;
                fVar32 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc);
                fVar33 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc + 4);
                fVar34 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc + 8);
                uVar19 = 0;
                if ((int)uVar22 < *(int *)&local_860->field_0x18) {
                  uVar19 = local_878;
                }
                if ((uVar19 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar24 = *(longlong *)&local_860->field_0x10;
                fVar32 = fVar32 + fVar32 + *(float *)(lVar24 + lVar11 * 4);
                fVar33 = fVar33 + fVar33 + *(float *)(lVar24 + 4 + lVar11 * 4);
                fVar34 = fVar34 + fVar34 + *(float *)(lVar24 + 8 + lVar11 * 4);
                uVar19 = 0;
                if ((int)uVar21 < BoxIndicesArray.ArrayNum) {
                  uVar19 = uVar23;
                }
                local_888 = CONCAT44(fVar33,fVar32);
                local_880 = fVar34;
                if ((uVar19 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar23 = *(uint *)(BoxIndicesArray.AllocatorInstance.Data + local_858 + 8);
                lVar24 = (longlong)(int)uVar23;
                uVar19 = 0;
                if ((int)uVar23 < BoxVertexArray.ArrayNum) {
                  uVar19 = ~uVar23 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar10 = local_860;
                fVar27 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc);
                fVar26 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc + 4);
                fVar39 = *(float *)(BoxVertexArray.AllocatorInstance.Data + lVar24 * 0xc + 8);
                uVar23 = 0;
                if ((int)uVar22 < *(int *)&local_860->field_0x18) {
                  uVar23 = uVar18;
                }
                if ((uVar23 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar24 = *(longlong *)&pTVar10->field_0x10;
                uVar22 = uVar25 + 2;
                puVar6 = (this->BoxVertexBuffers).PositionVertexBuffer.Data;
                fVar37 = fVar32 - (float)local_850;
                fVar30 = fVar27 + fVar27 + *(float *)(lVar24 + lVar11 * 4);
                fVar35 = fVar26 + fVar26 + *(float *)(lVar24 + 4 + lVar11 * 4);
                local_6e0 = fVar39 + fVar39 + *(float *)(lVar24 + 8 + lVar11 * 4);
                fVar39 = fVar33 - local_850._4_4_;
                uVar20 = (ulonglong)(uVar25 * (this->BoxVertexBuffers).PositionVertexBuffer.Stride);
                uVar18 = uVar25 + 1;
                local_7f8 = fVar34 - local_848;
                *(undefined8 *)(puVar6 + uVar20) = local_850;
                *(float *)(puVar6 + uVar20 + 8) = local_848;
                fVar27 = __real_3f800000;
                uVar20 = (ulonglong)(uVar18 * (this->BoxVertexBuffers).PositionVertexBuffer.Stride);
                puVar6 = (this->BoxVertexBuffers).PositionVertexBuffer.Data;
                local_888 = CONCAT44(fVar33,fVar32);
                *(ulonglong *)(puVar6 + uVar20) = CONCAT44(fVar33,fVar32);
                *(float *)(puVar6 + uVar20 + 8) = fVar34;
                uVar20 = (ulonglong)(uVar22 * (this->BoxVertexBuffers).PositionVertexBuffer.Stride);
                puVar6 = (this->BoxVertexBuffers).PositionVertexBuffer.Data;
                local_6e8 = CONCAT44(fVar35,fVar30);
                *(ulonglong *)(puVar6 + uVar20) = CONCAT44(fVar35,fVar30);
                *(float *)(puVar6 + uVar20 + 8) = local_6e0;
                fVar26 = fVar39 * fVar39 + fVar37 * fVar37 + local_7f8 * local_7f8;
                if (fVar26 == fVar27) {
                  local_7f0._0_8_ = CONCAT44(fVar39,fVar37);
                  uVar40 = fVar39;
                  uVar38 = fVar37;
                  uVar28 = local_7f8;
                }
                else if (__real_322bcc77 <= fVar26) {
                  fVar27 = fVar27 / SQRT(fVar26);
                  uVar40 = fVar39 * fVar27;
                  uVar38 = fVar37 * fVar27;
                  uVar28 = local_7f8 * fVar27;
                }
                else {
                  local_7f0._s_0.Y = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  local_7f0._s_0.X = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                  uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  uVar38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                  uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                }
                _local_800 = CONCAT44(fVar39,fVar37);
                fVar30 = fVar30 - fVar32;
                fVar35 = fVar35 - fVar33;
                local_7d8 = local_6e0 - fVar34;
                fVar32 = fVar35 * fVar35 + fVar30 * fVar30 + local_7d8 * local_7d8;
                if (fVar32 == __real_3f800000) {
                  local_7d0._0_8_ = CONCAT44(fVar35,fVar30);
                  uVar31 = fVar30;
                  uVar36 = fVar35;
                  uVar29 = local_7d8;
                }
                else if (__real_322bcc77 <= fVar32) {
                  fVar32 = __real_3f800000 / SQRT(fVar32);
                  uVar31 = fVar30 * fVar32;
                  uVar36 = fVar35 * fVar32;
                  uVar29 = local_7d8 * fVar32;
                }
                else {
                  local_7d0._s_0.Y = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  local_7d0._s_0.X = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                  uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                  uVar36 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                }
                _local_7e0 = CONCAT44(fVar35,fVar30);
                fVar33 = (float)uVar36 * (float)uVar28 - (float)uVar29 * (float)uVar40;
                local_7b8 = (float)uVar31 * (float)uVar40 - (float)uVar36 * (float)uVar38;
                fVar34 = (float)uVar29 * (float)uVar38 - (float)uVar31 * (float)uVar28;
                fVar32 = fVar34 * fVar34 + fVar33 * fVar33 + local_7b8 * local_7b8;
                uVar40 = local_7b8;
                uVar38 = fVar33;
                uVar28 = fVar34;
                if ((fVar32 != __real_3f800000) &&
                   (uVar40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                   uVar38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                   uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                   __real_322bcc77 <= fVar32)) {
                  fVar32 = __real_3f800000 / SQRT(fVar32);
                  uVar40 = fVar32 * local_7b8;
                  uVar38 = fVar32 * fVar33;
                  uVar28 = fVar32 * fVar34;
                }
                _local_7c0 = CONCAT44(fVar34,fVar33);
                local_7a8._s_0.X = 0.0;
                local_7a8._4_8_ = 0x3f800000;
                local_798._0_8_ = 0x3f800000;
                local_798._s_0.Z = 0.0;
                local_718._s_0.X = (float)uVar38;
                local_718._s_0.Y = (float)uVar28;
                local_718._s_0.Z = (float)uVar40;
                FStaticMeshVertexBuffer::SetVertexTangents
                          (&(this->BoxVertexBuffers).StaticMeshVertexBuffer,uVar25,
                           (TVector<float> *)&local_798._s_0,(TVector<float> *)&local_7a8._s_0,
                           (TVector<float> *)&local_718._s_0);
                local_788._s_0.X = 0.0;
                local_788._4_8_ = 0x3f800000;
                local_778._0_8_ = 0x3f800000;
                local_778._s_0.Z = 0.0;
                local_708._s_0.X = (float)uVar38;
                local_708._s_0.Y = (float)uVar28;
                local_708._s_0.Z = (float)uVar40;
                FStaticMeshVertexBuffer::SetVertexTangents
                          (&(this->BoxVertexBuffers).StaticMeshVertexBuffer,uVar18,
                           (TVector<float> *)&local_778._s_0,(TVector<float> *)&local_788._s_0,
                           (TVector<float> *)&local_708._s_0);
                local_768._s_0.X = 0.0;
                local_768._4_8_ = 0x3f800000;
                local_758._0_8_ = 0x3f800000;
                local_758._s_0.Z = 0.0;
                local_6f8._s_0.X = (float)uVar38;
                local_6f8._s_0.Y = (float)uVar28;
                local_6f8._s_0.Z = (float)uVar40;
                FStaticMeshVertexBuffer::SetVertexTangents
                          (&(this->BoxVertexBuffers).StaticMeshVertexBuffer,uVar22,
                           (TVector<float> *)&local_758._s_0,(TVector<float> *)&local_768._s_0,
                           (TVector<float> *)&local_6f8._s_0);
                puVar6 = (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar24 = (ulonglong)uVar25 *
                         (ulonglong)(this->BoxVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
                FVar7 = *(this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
                local_808 = 0;
                if ((this->BoxVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
                  puVar4 = (ushort *)(puVar6 + lVar24 * 4);
                  lVar24 = (**(code **)((longlong)FVar7 + 0x50))();
                  if ((puVar6 + lVar24 < puVar4 + 2) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((puVar4 < (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_898 = 0;
                  FGenericPlatformMath::StoreHalf(&local_898,0.0);
                  *puVar4 = local_898;
                  local_896 = 0;
                  FGenericPlatformMath::StoreHalf(&local_896,0.0);
                  puVar4[1] = local_896;
                }
                else {
                  puVar3 = puVar6 + lVar24 * 8;
                  lVar24 = (**(code **)((longlong)FVar7 + 0x50))();
                  if ((puVar6 + lVar24 < puVar3 + 8) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((puVar3 < (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *(undefined8 *)puVar3 = local_808;
                }
                puVar6 = (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar24 = (ulonglong)uVar18 *
                         (ulonglong)(this->BoxVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
                FVar7 = *(this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
                local_820 = 0;
                if ((this->BoxVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
                  puVar4 = (ushort *)(puVar6 + lVar24 * 4);
                  lVar24 = (**(code **)((longlong)FVar7 + 0x50))();
                  if ((puVar6 + lVar24 < puVar4 + 2) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((puVar4 < (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_894 = 0;
                  FGenericPlatformMath::StoreHalf(&local_894,0.0);
                  *puVar4 = local_894;
                  local_892 = 0;
                  FGenericPlatformMath::StoreHalf(&local_892,0.0);
                  puVar4[1] = local_892;
                }
                else {
                  puVar3 = puVar6 + lVar24 * 8;
                  lVar24 = (**(code **)((longlong)FVar7 + 0x50))();
                  if ((puVar6 + lVar24 < puVar3 + 8) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((puVar3 < (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *(undefined8 *)puVar3 = local_820;
                }
                puVar6 = (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar24 = (ulonglong)(this->BoxVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                         (ulonglong)uVar22;
                FVar7 = *(this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
                local_818 = 0;
                if ((this->BoxVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
                  puVar4 = (ushort *)(puVar6 + lVar24 * 4);
                  lVar24 = (**(code **)((longlong)FVar7 + 0x50))();
                  if ((puVar6 + lVar24 < puVar4 + 2) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((puVar4 < (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_890 = 0;
                  FGenericPlatformMath::StoreHalf(&local_890,0.0);
                  *puVar4 = local_890;
                  local_88e = 0;
                  FGenericPlatformMath::StoreHalf(&local_88e,0.0);
                  puVar4[1] = local_88e;
                }
                else {
                  puVar3 = puVar6 + lVar24 * 8;
                  lVar24 = (**(code **)((longlong)FVar7 + 0x50))();
                  if ((puVar6 + lVar24 < puVar3 + 8) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((puVar3 < (this->BoxVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *(undefined8 *)puVar3 = local_818;
                }
                pTVar13 = local_728;
                uVar23 = 0;
                if ((int)local_88c < *(int *)&local_728->field_0x18) {
                  uVar23 = local_878;
                }
                if ((uVar23 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar9 = IDataflowEnginePlugin::VertexColor.field0_0x0;
                if (*(int *)(*(longlong *)&pTVar13->field_0x10 + local_870 * 4) != 0) {
                  FVar9 = IDataflowEnginePlugin::SelectionPrimaryColor.field0_0x0;
                }
                ((FColor_u_0 *)
                ((this->BoxVertexBuffers).ColorVertexBuffer.Data +
                uVar25 * (this->BoxVertexBuffers).ColorVertexBuffer.Stride))->_s_0 =
                     (FColor_u_0_s_0)FVar9;
                ((FColor_u_0 *)
                ((this->BoxVertexBuffers).ColorVertexBuffer.Data +
                uVar18 * (this->BoxVertexBuffers).ColorVertexBuffer.Stride))->_s_0 =
                     (FColor_u_0_s_0)FVar9;
                ((FColor_u_0 *)
                ((this->BoxVertexBuffers).ColorVertexBuffer.Data +
                uVar22 * (this->BoxVertexBuffers).ColorVertexBuffer.Stride))->_s_0 =
                     (FColor_u_0_s_0)FVar9;
                uVar23 = 0;
                if ((int)uVar25 < (this->BoxIndexBuffer).Indices.ArrayNum) {
                  uVar23 = ~uVar25 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar24 = local_810;
                *(uint *)((this->BoxIndexBuffer).Indices.AllocatorInstance.Data + local_810) =
                     uVar25;
                uVar23 = 0;
                if ((int)uVar18 < (this->BoxIndexBuffer).Indices.ArrayNum) {
                  uVar23 = ~uVar18 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(uint *)((this->BoxIndexBuffer).Indices.AllocatorInstance.Data +
                         (longlong)(int)uVar18 * 4) = uVar18;
                uVar18 = 0;
                if ((int)uVar22 < (this->BoxIndexBuffer).Indices.ArrayNum) {
                  uVar18 = ~uVar22 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_810 = lVar24 + 0xc;
                local_858 = local_858 + 0xc;
                uVar21 = uVar21 + 1;
                *(uint *)((this->BoxIndexBuffer).Indices.AllocatorInstance.Data +
                         (longlong)(int)uVar22 * 4) = uVar22;
                uVar20 = (ulonglong)local_874;
                lVar24 = local_870;
                uVar22 = local_88c;
              } while ((int)uVar21 < BoxIndicesArray.ArrayNum);
            }
            local_838 = local_838 + 1;
            uVar21 = local_840;
          }
          local_88c = uVar22 + 1;
          local_870 = lVar24 + 1;
        }
        (**(code **)((this->BoxVertexBuffers).PositionVertexBuffer._padding_ + 0x18))
                  (local_738,local_740);
        this_00 = &this->BoxVertexBuffers;
        (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x18))(this_00,pFVar12);
        (**(code **)((this->BoxVertexBuffers).ColorVertexBuffer._padding_ + 0x18))
                  (&(this->BoxVertexBuffers).ColorVertexBuffer,pFVar12);
        local_1b8._padding_._4_4_ = 4;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_._0_4_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_._6_1_ = 0;
        local_1b8._padding_ = 0;
        local_1b8._padding_ = 0;
        local_1b8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
        local_1b8.PreSkinPositionComponent.StreamOffset = 0;
        local_1b8.PreSkinPositionComponent.Offset = '\0';
        local_1b8.PreSkinPositionComponent.Stride = '\0';
        local_1b8.PreSkinPositionComponent.Type.Value = '\0';
        local_1b8.PreSkinPositionComponent.VertexStreamUsage = Default;
        local_1b8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
        local_1b8._padding_._0_4_ = 0xffffffff;
        local_1b8._padding_._4_2_ = 0xff;
        FPositionVertexBuffer::BindPositionVertexBuffer
                  (local_738,(FVertexFactory *)&this->VertexFactory,
                   (FStaticMeshDataType *)&local_1b8);
        FStaticMeshVertexBuffer::BindTangentVertexBuffer
                  (&this_00->StaticMeshVertexBuffer,(FVertexFactory *)&this->VertexFactory,
                   (FStaticMeshDataType *)&local_1b8);
        FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
                  (&this_00->StaticMeshVertexBuffer,(FVertexFactory *)&this->VertexFactory,
                   (FStaticMeshDataType *)&local_1b8,-1);
        FColorVertexBuffer::BindColorVertexBuffer
                  (&(this->BoxVertexBuffers).ColorVertexBuffer,
                   (FVertexFactory *)&this->VertexFactory,(FStaticMeshDataType *)&local_1b8);
        FLocalVertexFactory::SetData(&this->BoxVertexFactory,pFVar12,&local_1b8);
        (**(code **)((this->BoxVertexFactory)._padding_ + 0x18))(&this->BoxVertexFactory,pFVar12);
        (**(code **)((this->BoxIndexBuffer)._padding_ + 0x18))(&this->BoxIndexBuffer,pFVar12);
      }
    }
  }
  return;
}

// CreateMeshRenderThreadResources @ 14dab34a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDataflowEngineSceneProxy::CreateMeshRenderThreadResources
          (FDataflowEngineSceneProxy *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  FStaticMeshVertexBuffers *this_00;
  TArray<FDataflowTriangleSetMeshBatchData,TSizedDefaultAllocator<32>_> *pTVar2;
  FLocalVertexFactory *this_01;
  undefined8 *puVar3;
  undefined4 *puVar4;
  UDataflowComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar12;
  TManagedArray<int> *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FPositionVertexBuffer *this_02;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStackY_708 [32];
  <lambda_1> local_6c8;
  TArrayView<std::nullptr_t,int> local_698;
  code *local_688;
  TManagedArray<UE::Math::TVector<float>_> **local_680;
  TManagedArray<UE::Math::TVector<float>_> *local_678;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_670;
  FDataflowEngineSceneProxy *local_668;
  FDataflowSelectionState *local_660;
  TManagedArray<int> *local_658;
  TManagedArray<int> *local_650;
  TManagedArray<FLinearColor> *local_648;
  FRenderingFacade local_638;
  FDataType local_118;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_708;
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_638,this->ConstantData);
  pUVar5 = this->DataflowComponent;
  bVar14 = GeometryCollection::Facades::FRenderingFacade::CanRenderSurface(&local_638);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Facade.CanRenderSurface()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                          ,0x92,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = GeometryCollection::Facades::FRenderingFacade::NumTriangles(&local_638);
  uVar20 = iVar15 * 3;
  iVar15 = GeometryCollection::Facades::FRenderingFacade::NumTriangles(&local_638);
  this_00 = &this->VertexBuffers;
  FPositionVertexBuffer::Init(&(this->VertexBuffers).PositionVertexBuffer,uVar20,true);
  FStaticMeshVertexBuffer::Init(&this_00->StaticMeshVertexBuffer,uVar20,1,true);
  FColorVertexBuffer::Init(&(this->VertexBuffers).ColorVertexBuffer,uVar20,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&(this->IndexBuffer).Indices,iVar15 * 3,Default);
  iVar15 = GeometryCollection::Facades::FRenderingFacade::NumTriangles(&local_638);
  uVar20 = 0;
  if (0 < iVar15) {
    if (local_638.GeometryNameAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
      iVar15 = FManagedArrayCollection::NumElements
                         (local_638.GeometryNameAttribute.ConstCollection,
                          local_638.GeometryNameAttribute.Group);
    }
    else {
      iVar15 = (**(code **)(*(longlong *)local_638.GeometryNameAttribute.ConstAttributeArray + 0x60)
               )();
    }
    if (0 < (longlong)iVar15) {
      lVar24 = 0;
      lVar22 = 0;
      lVar23 = 0;
      do {
        if ((local_638.IndicesCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x67,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar13 = local_638.IndicesCountAttribute.ConstAttributeArray;
        uVar21 = ~uVar20 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar20 < *(int *)&(local_638.IndicesCountAttribute.ConstAttributeArray)->field_0x18
           ) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(*(longlong *)&pTVar13->field_0x10 + lVar23) != 0) {
          pTVar2 = &this->MeshBatchDatas;
          iVar17 = (this->MeshBatchDatas).ArrayNum;
          piVar1 = &(this->MeshBatchDatas).ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1080,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->MeshBatchDatas).ArrayNum = iVar17 + 1;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          lVar18 = (longlong)iVar17 * 0x80;
          *(undefined8 *)(pFVar6 + lVar18 + 0x14) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x14 + 8) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x24) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x24 + 8) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x34) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x34 + 8) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x44) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x44 + 8) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x54) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x54 + 8) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 100) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 100 + 8) = 0;
          *(undefined8 *)(pFVar6 + lVar18 + 0x74) = 0;
          *(undefined4 *)(pFVar6 + lVar18 + 0x7c) = 0;
          *(undefined8 *)(pFVar6 + lVar18) = 0xffffffffffffffff;
          *(undefined8 *)(pFVar6 + lVar18 + 8) = 0xffffffffffffffff;
          *(undefined4 *)(pFVar6 + lVar18 + 0x10) = 0xffffffff;
          *(double (*) [2])(pFVar6 + lVar18 + 0x20) =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          *(double (*) [2])(pFVar6 + lVar18 + 0x30) =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          *(double (*) [2])(pFVar6 + lVar18 + 0x40) =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          *(double (*) [2])(pFVar6 + lVar18 + 0x50) =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          *(double (*) [2])(pFVar6 + lVar18 + 0x60) =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          *(double (*) [2])(pFVar6 + lVar18 + 0x70) =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          iVar17 = (this->MeshBatchDatas).ArrayNum;
          uVar19 = iVar17 - 1;
          uVar16 = 0;
          if ((int)uVar19 < iVar17) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar17 = (this->MeshBatchDatas).ArrayNum;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if ((local_638.IndicesStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = local_638.IndicesStartAttribute.ConstAttributeArray;
          uVar16 = 0;
          if ((int)uVar20 <
              *(int *)&(local_638.IndicesStartAttribute.ConstAttributeArray)->field_0x18) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x78) =
               *(int *)(*(longlong *)&pTVar13->field_0x10 + lVar24 * 4) * 3;
          if ((local_638.IndicesCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = local_638.IndicesCountAttribute.ConstAttributeArray;
          uVar16 = 0;
          if ((int)uVar20 <
              *(int *)&(local_638.IndicesCountAttribute.ConstAttributeArray)->field_0x18) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x74) =
               *(int *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x78) + -1 +
               *(int *)(*(longlong *)&pTVar13->field_0x10 + lVar24 * 4) * 3;
          if ((local_638.IndicesStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = local_638.IndicesStartAttribute.ConstAttributeArray;
          uVar16 = 0;
          if ((int)uVar20 <
              *(int *)&(local_638.IndicesStartAttribute.ConstAttributeArray)->field_0x18) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x80) =
               *(int *)(*(longlong *)&pTVar13->field_0x10 + lVar24 * 4) * 3;
          if ((local_638.IndicesCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = local_638.IndicesCountAttribute.ConstAttributeArray;
          uVar16 = 0;
          if ((int)uVar20 <
              *(int *)&(local_638.IndicesCountAttribute.ConstAttributeArray)->field_0x18) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x7c) =
               *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + lVar24 * 4);
          *(uint *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x70) = uVar20;
          if ((local_638.GeometryTransformAttribute.ConstAttributeArray ==
               (TManagedArray<UE::Math::TTransform<double>_> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar12 = local_638.GeometryTransformAttribute.ConstAttributeArray;
          uVar16 = 0;
          if ((int)uVar20 <
              *(int *)&(local_638.GeometryTransformAttribute.ConstAttributeArray)->field_0x18) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar18 = *(longlong *)&pTVar12->field_0x10;
          uVar11 = ((undefined8 *)(lVar22 + lVar18))[1];
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x60) =
               *(undefined8 *)(lVar22 + lVar18);
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x58) = uVar11;
          puVar3 = (undefined8 *)(lVar22 + 0x10 + lVar18);
          uVar11 = puVar3[1];
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x50) = *puVar3;
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x48) = uVar11;
          puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar18);
          uVar11 = puVar3[1];
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x40) = *puVar3;
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x38) = uVar11;
          puVar3 = (undefined8 *)(lVar22 + 0x30 + lVar18);
          uVar11 = puVar3[1];
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x30) = *puVar3;
          *(undefined8 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x28) = uVar11;
          puVar4 = (undefined4 *)(lVar22 + 0x40 + lVar18);
          uVar8 = puVar4[1];
          uVar9 = puVar4[2];
          uVar10 = puVar4[3];
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x20) = *puVar4;
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x1c) = uVar8;
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x18) = uVar9;
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x14) = uVar10;
          puVar4 = (undefined4 *)(lVar22 + 0x50 + lVar18);
          uVar8 = puVar4[1];
          uVar9 = puVar4[2];
          uVar10 = puVar4[3];
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0x10) = *puVar4;
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -0xc) = uVar8;
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -8) = uVar9;
          *(undefined4 *)(pFVar6 + (longlong)iVar17 * 0x80 + -4) = uVar10;
        }
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x60;
        lVar23 = lVar23 + 4;
      } while (lVar24 < iVar15);
    }
    if ((local_638.IndicesAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_638.VertexAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_638.GeometrySelectionAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_638.VertexToGeometryIndexAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_638.VertexColorAttribute.ConstAttributeArray == (TManagedArray<FLinearColor> *)0x0)
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_670 = local_638.IndicesAttribute.ConstAttributeArray;
    local_678 = local_638.VertexAttribute.ConstAttributeArray;
    local_658 = local_638.GeometrySelectionAttribute.ConstAttributeArray;
    local_650 = local_638.VertexToGeometryIndexAttribute.ConstAttributeArray;
    local_648 = local_638.VertexColorAttribute.ConstAttributeArray;
    local_668 = this;
    local_660 = &pUVar5->SelectionState;
    iVar15 = GeometryCollection::Facades::FRenderingFacade::NumTriangles(&local_638);
    local_688 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDataflowEngineSceneProxy::CreateMeshRenderThreadResources'::__l12::<lambda_1>,void,int>
                ::Call;
    local_680 = &local_678;
    local_698.DataPtr = (void **)0x0;
    local_698.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar15,1,(TFunctionRef<void___cdecl(int)> *)&local_688,local_6c8,
               None,&local_698);
  }
  this_02 = &(this->VertexBuffers).PositionVertexBuffer;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x18))(this_02,param_1);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x18))(this_00,param_1);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x18))
            (&(this->VertexBuffers).ColorVertexBuffer,param_1);
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_118.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  this_01 = &this->VertexFactory;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._4_4_ = 4;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._4_2_ = 0xff;
  local_118._padding_._6_1_ = 0;
  local_118.PreSkinPositionComponent.StreamOffset = 0;
  local_118.PreSkinPositionComponent.Offset = '\0';
  local_118.PreSkinPositionComponent.Stride = '\0';
  local_118.PreSkinPositionComponent.Type.Value = '\0';
  local_118.PreSkinPositionComponent.VertexStreamUsage = Default;
  FPositionVertexBuffer::BindPositionVertexBuffer
            (this_02,(FVertexFactory *)this_01,(FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&this_00->StaticMeshVertexBuffer,(FVertexFactory *)this_01,
             (FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            (&this_00->StaticMeshVertexBuffer,(FVertexFactory *)this_01,
             (FStaticMeshDataType *)&local_118,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            (&(this->VertexBuffers).ColorVertexBuffer,(FVertexFactory *)this_01,
             (FStaticMeshDataType *)&local_118);
  FLocalVertexFactory::SetData(this_01,param_1,&local_118);
  (**(code **)(this_01->_padding_ + 0x18))(this_01,param_1);
  (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
  return;
}

// CreateRenderThreadResources @ 14dab3df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDataflowEngineSceneProxy::CreateRenderThreadResources
          (FDataflowEngineSceneProxy *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ConstantData == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstantData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->RenderMaterial == (UMaterialInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderMaterial",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CreateInstancedVertexRenderThreadResources(this,param_1);
  CreateMeshRenderThreadResources(this,param_1);
  return;
}

// DestroyInstancedVertexRenderThreadResources @ 14dab3f00

void __thiscall
FDataflowEngineSceneProxy::DestroyInstancedVertexRenderThreadResources
          (FDataflowEngineSceneProxy *this)

{
  if (this->NumRenderedVerts != 0) {
    (**(code **)((this->BoxVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
              (&(this->BoxVertexBuffers).PositionVertexBuffer);
    (**(code **)((this->BoxVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))
              (&this->BoxVertexBuffers);
    (**(code **)((this->BoxVertexBuffers).ColorVertexBuffer._padding_ + 0x20))
              (&(this->BoxVertexBuffers).ColorVertexBuffer);
    (**(code **)((this->BoxIndexBuffer)._padding_ + 0x20))();
    (**(code **)((this->BoxVertexFactory)._padding_ + 0x20))();
  }
  return;
}

// DestroyMeshRenderThreadResources @ 14dab3f80

void __thiscall
FDataflowEngineSceneProxy::DestroyMeshRenderThreadResources(FDataflowEngineSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                       ,0xfa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this->VertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))(&this->VertexBuffers)
  ;
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00014dab4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
  return;
}

// DestroyRenderThreadResources @ 14dab4020

void __thiscall
FDataflowEngineSceneProxy::DestroyRenderThreadResources(FDataflowEngineSceneProxy *this)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->NumRenderedVerts != 0) {
    (**(code **)((this->BoxVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
              (&(this->BoxVertexBuffers).PositionVertexBuffer);
    (**(code **)((this->BoxVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))
              (&this->BoxVertexBuffers);
    (**(code **)((this->BoxVertexBuffers).ColorVertexBuffer._padding_ + 0x20))
              (&(this->BoxVertexBuffers).ColorVertexBuffer);
    (**(code **)((this->BoxIndexBuffer)._padding_ + 0x20))();
    (**(code **)((this->BoxVertexFactory)._padding_ + 0x20))();
  }
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                       ,0xfa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this->VertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))(&this->VertexBuffers)
  ;
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
  pFVar1 = this->ConstantData;
  if (pFVar1 != (FManagedArrayCollection *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->ConstantData = (FManagedArrayCollection *)0x0;
  return;
}

// GetDynamicInstancedVertexMeshElements @ 14dab4220

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
FDataflowEngineSceneProxy::GetDynamicInstancedVertexMeshElements
          (FDataflowEngineSceneProxy *this,int param_1,FMeshElementCollector *param_2)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  uint uVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar11;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar12;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar13;
  FMaterialRenderProxy *pFVar14;
  ForElementType<FMeshBatchElement> FVar15;
  ulonglong uVar16;
  ForElementType<FMeshBatchElement> FVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  int local_res10;
  FRenderingFacade local_558;
  
  if ((this->NumRenderedVerts != 0) &&
     ((this->DataflowComponent->SelectionState).Mode == DSS_Dataflow_Vertex)) {
    local_res10 = param_1;
    GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_558,this->ConstantData);
    if ((local_558.VertexAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_558.VertexHitProxyIndexAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_558.VertexAttribute.ConstAttributeArray ==
        (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      FManagedArrayCollection::NumElements
                (local_558.VertexAttribute.ConstCollection,local_558.VertexAttribute.Group);
    }
    else {
      (**(code **)(*(longlong *)local_558.VertexAttribute.ConstAttributeArray + 0x60))();
    }
    uVar3 = (this->VertexBatchDatas).ArrayNum;
    uVar16 = (ulonglong)(int)uVar3;
    pFVar18 = (this->VertexBatchDatas).AllocatorInstance.Data;
    pFVar1 = pFVar18 + uVar16 * 0x14;
    while( true ) {
      if ((this->VertexBatchDatas).ArrayNum != (int)uVar16) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDataflowVertexBatchData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar18 == pFVar1) break;
      paVar4 = &param_2->OneFrameResources->Next;
      aVar11 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
      *(undefined8 *)((longlong)aVar11 + 8) = 0;
      *(undefined ***)aVar11 =
           &
           ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
      ;
      TVar12.Next = *paVar4;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
          *)((longlong)aVar11 + 8) = TVar12.Next;
        LOCK();
        aVar13 = *paVar4;
        bVar7 = TVar12.Next == aVar13;
        if (bVar7) {
          *paVar4 = aVar11;
          aVar13 = TVar12.Next;
        }
        UNLOCK();
        TVar12.Next = aVar13;
      } while (!bVar7);
      FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar11 + 0x10));
      bVar2 = this->field_0x82;
      if (((((char)bVar2 < '\0') || ((bVar2 & 0x10) != 0)) || ((bVar2 & 3) == 3)) ||
         ((bVar2 & 0x60) != 0)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((param_2->RHICmdList == (FRHICommandList *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RHICmdList",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                             ,0x46,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FDynamicPrimitiveUniformBuffer::Set
                ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar11 + 0x10),
                 (FRHICommandListBase *)param_2->RHICmdList,(TMatrix<double> *)&this->field_0x110,
                 (TMatrix<double> *)&this->field_0x110,
                 (TBoxSphereBounds<double,double> *)&this->field_0x190,
                 (TBoxSphereBounds<double,double> *)&this->field_0x1c8,true,false,bVar7);
      iVar9 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              ::Add(&param_2->MeshBatchStorage,1);
      uVar6 = iVar9 / 0x49;
      uVar10 = 0;
      if ((int)uVar6 < (param_2->MeshBatchStorage).Chunks.Array.ArrayNum) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar17 = (ForElementType<FMeshBatchElement>)
               ((longlong)
                (param_2->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar6] +
               (ulonglong)(uint)(iVar9 % 0x49) * 0xe0);
      *(uint *)((longlong)FVar17 + 0xd4) = *(uint *)((longlong)FVar17 + 0xd4) & 0xffffffdb;
      *(FLocalVertexFactory **)((longlong)FVar17 + 0xa8) = &this->BoxVertexFactory;
      pFVar14 = (FMaterialRenderProxy *)(**(code **)(this->RenderMaterial->_padding_ + 0x310))();
      *(FMaterialRenderProxy **)((longlong)FVar17 + 0xb0) = pFVar14;
      *(uint *)((longlong)FVar17 + 0xd4) =
           ((byte)this->field_0x78 & 1 ^ *(uint *)((longlong)FVar17 + 0xd4) & 0xfffffffe) &
           0xffffe07f | 0x2000;
      if ((*(int *)((longlong)FVar17 + 0xa0) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar15 = FVar17;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar17 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar15 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar17 + 0x98);
      }
      *(FDynamicMeshIndexBuffer32 **)((longlong)FVar15 + 0x18) = &this->BoxIndexBuffer;
      *(undefined8 **)((longlong)FVar15 + 8) = (undefined8 *)((longlong)aVar11 + 0x18);
      *(undefined4 *)((longlong)FVar15 + 0x58) = *(undefined4 *)pFVar18;
      *(undefined4 *)((longlong)FVar15 + 0x5c) = *(undefined4 *)(pFVar18 + 4);
      *(undefined4 *)((longlong)FVar15 + 0x68) = *(undefined4 *)(pFVar18 + 8);
      *(undefined4 *)((longlong)FVar15 + 0x6c) = *(undefined4 *)(pFVar18 + 0xc);
      FMeshElementCollector::AddMesh(param_2,local_res10,(FMeshBatch *)FVar17);
      uVar16 = (ulonglong)uVar3;
      pFVar18 = pFVar18 + 0x14;
    }
  }
  return;
}

// GetDynamicMeshElements @ 14dab4600

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
FDataflowEngineSceneProxy::GetDynamicMeshElements
          (FDataflowEngineSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDataflowEngineSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_OverlaySceneProxy_GetDynamicMeshElements>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  uint uVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  uVar12 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDataflowEngineSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_OverlaySceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar7 = ::FName::FName(&local_60,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements
                 ,*pFVar7,L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDataflowEngineSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_OverlaySceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDataflowEngineSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_OverlaySceneProxy_GetDynamicMeshElements>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar7,
                         L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                   ,0x7c);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68.s.LowPart = FVar10.Value;
      local_68.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14dab477b;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_14dab477b:
  if ((this->RenderMaterial == (UMaterialInterface *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderMaterial",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowEnginePlugin\\Private\\Dataflow\\DataflowEngineSceneProxy.cpp"
                         ,0x7e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (uVar12 & 0x1f) & 1) != 0) {
        GetMeshDynamicMeshElements(this,uVar12,param_4);
        GetDynamicInstancedVertexMeshElements(this,uVar12,param_4);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < param_1->ArrayNum);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
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

// GetMemoryFootprint @ 14dab4b20

uint __thiscall FDataflowEngineSceneProxy::GetMemoryFootprint(FDataflowEngineSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0xa60;
}

// GetMeshDynamicMeshElements @ 14dab4b40

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

void __thiscall
FDataflowEngineSceneProxy::GetMeshDynamicMeshElements
          (FDataflowEngineSceneProxy *this,int param_1,FMeshElementCollector *param_2)

{
  byte bVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar18;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar19;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar20;
  FMaterialRenderProxy *pFVar21;
  ForElementType<FMeshBatchElement> FVar22;
  ForElementType<FMeshBatchElement> FVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auStackY_768 [32];
  undefined1 local_718 [4];
  int local_714;
  uint local_710;
  FScriptContainerElement *local_708;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  FRenderingFacade local_6d8;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_768;
  local_714 = param_1;
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_6d8,this->ConstantData);
  if ((local_6d8.GeometryHitProxyIndexAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_710 = (this->MeshBatchDatas).ArrayNum;
  uVar17 = (ulonglong)(int)local_710;
  pFVar25 = (this->MeshBatchDatas).AllocatorInstance.Data;
  pFVar24 = pFVar25 + 0x20;
  local_708 = pFVar25 + uVar17 * 0x80;
  while( true ) {
    pFVar12 = local_708;
    if ((this->MeshBatchDatas).ArrayNum != (int)uVar17) {
      local_718[0] = 0;
      `TCheckedPointerIterator<FDataflowTriangleSetMeshBatchData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_718);
    }
    if (pFVar25 == pFVar12) {
      return;
    }
    local_6e8 = *(double *)(pFVar24 + 0x10);
    dStack_6e0 = *(double *)(pFVar24 + 0x18);
    dVar27 = *(double *)pFVar24;
    dVar11 = *(double *)(pFVar24 + 8);
    dVar9 = dVar11 + dVar11;
    dVar26 = local_6e8 + local_6e8;
    dVar6 = (dVar27 + dVar27) * dVar27;
    dVar4 = dVar9 * *(double *)pFVar24;
    auVar28 = blendpd(*(undefined1 (*) [16])(pFVar24 + 0x40),*(undefined1 (*) [16])(pFVar24 + 0x50),
                      2);
    local_6f8 = *(double *)pFVar24;
    dStack_6f0 = *(double *)(pFVar24 + 8);
    dVar8 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar26 * local_6e8 + dVar6)) *
            *(double *)(pFVar24 + 0x48);
    dVar27 = dStack_6e0 * (dVar27 + dVar27);
    dVar7 = *(double *)pFVar24 * dVar26;
    dVar5 = (dStack_6e0 * dVar26 + dVar4) * *(double *)(pFVar24 + 0x40);
    local_188 = (dVar27 + dVar26 * *(double *)(pFVar24 + 8)) * *(double *)(pFVar24 + 0x48);
    dVar27 = *(double *)(pFVar24 + 0x50) * (dVar26 * *(double *)(pFVar24 + 8) - dVar27);
    local_168 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar6 + dVar9 * dVar11)) *
                *(double *)(pFVar24 + 0x50);
    local_1a8 = auVar28._0_8_ * (dVar7 - dVar9 * dStack_6e0);
    local_198._8_4_ = SUB84(dVar8,0);
    local_198._0_8_ =
         SUB168(*(undefined1 (*) [16])(pFVar24 + 0x40),8) * (dVar4 - dStack_6e0 * dVar26);
    local_198._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_158 = *(double *)(pFVar24 + 0x20);
    dStack_150 = *(double *)(pFVar24 + 0x28);
    dStack_1a0 = 0.0;
    dStack_180 = 0.0;
    local_1b8._8_4_ = SUB84(dVar5,0);
    local_1b8._0_8_ =
         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar26 * local_6e8 + dVar9 * dVar11))
         * *(double *)(pFVar24 + 0x40);
    local_1b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_178._8_4_ = SUB84(dVar27,0);
    local_178._0_8_ = (dVar9 * dStack_6e0 + dVar7) * *(double *)(pFVar24 + 0x50);
    local_178._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    dStack_160 = 0.0;
    local_148 = *(undefined4 *)(pFVar24 + 0x30);
    uStack_144 = *(undefined4 *)(pFVar24 + 0x34);
    uStack_140 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    uStack_13c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    VectorMatrixMultiply
              (&local_138,(TMatrix<double> *)&this->field_0x110,(TMatrix<double> *)local_1b8);
    paVar2 = &param_2->OneFrameResources->Next;
    aVar18 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
    *(undefined8 *)((longlong)aVar18 + 8) = 0;
    *(undefined ***)aVar18 =
         &
         ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    TVar19.Next = *paVar2;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar18 + 8) = TVar19.Next;
      LOCK();
      aVar20 = *paVar2;
      bVar13 = TVar19.Next == aVar20;
      if (bVar13) {
        *paVar2 = aVar18;
        aVar20 = TVar19.Next;
      }
      UNLOCK();
      TVar19.Next = aVar20;
    } while (!bVar13);
    FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
              ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar18 + 0x10));
    bVar1 = this->field_0x82;
    if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
       ((bVar1 & 0x60) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if ((param_2->RHICmdList == (FRHICommandList *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("RHICmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                            ,0x46,L""), bVar14)) break;
    FDynamicPrimitiveUniformBuffer::Set
              ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar18 + 0x10),
               (FRHICommandListBase *)param_2->RHICmdList,&local_138,&local_138,
               (TBoxSphereBounds<double,double> *)&this->field_0x190,
               (TBoxSphereBounds<double,double> *)&this->field_0x1c8,true,false,bVar13);
    iVar15 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
             ::Add(&param_2->MeshBatchStorage,1);
    uVar10 = iVar15 / 0x49;
    uVar16 = 0;
    if ((int)uVar10 < (param_2->MeshBatchStorage).Chunks.Array.ArrayNum) {
      uVar16 = ~uVar10 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar23 = (ForElementType<FMeshBatchElement>)
             ((longlong)(param_2->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar10]
             + (ulonglong)(uint)(iVar15 % 0x49) * 0xe0);
    *(uint *)((longlong)FVar23 + 0xd4) = *(uint *)((longlong)FVar23 + 0xd4) & 0xffffffbf;
    *(FLocalVertexFactory **)((longlong)FVar23 + 0xa8) = &this->VertexFactory;
    pFVar21 = (FMaterialRenderProxy *)(**(code **)(this->RenderMaterial->_padding_ + 0x310))();
    *(FMaterialRenderProxy **)((longlong)FVar23 + 0xb0) = pFVar21;
    *(uint *)((longlong)FVar23 + 0xd4) =
         ((byte)this->field_0x78 & 1 ^ *(uint *)((longlong)FVar23 + 0xd4) & 0xfffffffe) & 0xffffe07f
         | 0x2000;
    if ((*(int *)((longlong)FVar23 + 0xa0) < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar22 = FVar23;
    if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar23 + 0x98) !=
        (ForElementType<FMeshBatchElement>)0x0) {
      FVar22 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar23 + 0x98);
    }
    *(FDynamicMeshIndexBuffer32 **)((longlong)FVar22 + 0x18) = &this->IndexBuffer;
    *(undefined8 **)((longlong)FVar22 + 8) = (undefined8 *)((longlong)aVar18 + 0x18);
    *(undefined4 *)((longlong)FVar22 + 0x58) = *(undefined4 *)pFVar25;
    *(undefined4 *)((longlong)FVar22 + 0x5c) = *(undefined4 *)(pFVar24 + -0x1c);
    *(undefined4 *)((longlong)FVar22 + 0x68) = *(undefined4 *)(pFVar24 + -0x18);
    *(undefined4 *)((longlong)FVar22 + 0x6c) = *(undefined4 *)(pFVar24 + -0x14);
    FMeshElementCollector::AddMesh(param_2,local_714,(FMeshBatch *)FVar23);
    pFVar25 = pFVar25 + 0x80;
    uVar17 = (ulonglong)local_710;
    pFVar24 = pFVar24 + 0x80;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// GetRenderMaterial @ 14dab52c0

UMaterialInterface * __thiscall
FDataflowEngineSceneProxy::GetRenderMaterial(FDataflowEngineSceneProxy *this)

{
  UMaterialInterface *pUVar1;
  UMaterial *pUVar2;
  
  pUVar1 = (UMaterialInterface *)
           (**(code **)(this->DataflowComponent->_padding_ + 0x690))(this->DataflowComponent,0);
  if (pUVar1 == (UMaterialInterface *)0x0) {
    pUVar2 = UMaterial::GetDefaultMaterial(MD_Surface);
    return (UMaterialInterface *)pUVar2;
  }
  return pUVar1;
}

// GetTypeHash @ 14dab5490

ulong64 __thiscall FDataflowEngineSceneProxy::GetTypeHash(FDataflowEngineSceneProxy *this)

{
  return 0x1553741c8;
}

// GetViewRelevance @ 14dab54d0

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
FDataflowEngineSceneProxy::GetViewRelevance
          (FDataflowEngineSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3 | 2;
  uVar3 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  uVar4 = 0;
  if (this->field_0x89 != '\x01') {
    uVar4 = 0x2000;
  }
  uVar4 = uVar4 | uVar3 & 0xffffdfdf;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)(byte)this->field_0x7f << 0xe ^ uVar4) & 0x4000 ^ uVar4;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  __return_storage_ptr__->bVelocityRelevance = 0;
  return __return_storage_ptr__;
}

