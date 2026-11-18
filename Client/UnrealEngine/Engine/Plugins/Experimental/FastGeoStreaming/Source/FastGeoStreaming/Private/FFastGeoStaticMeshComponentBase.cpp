// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 41

// FFastGeoStaticMeshComponentBase @ 14da19770

FFastGeoStaticMeshComponentBase * __thiscall
FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentBase
          (FFastGeoStaticMeshComponentBase *this,FFastGeoStaticMeshComponentBase *param_1)

{
  int *piVar1;
  TArray<FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FFastGeoMeshComponent::FFastGeoMeshComponent
            ((FFastGeoMeshComponent *)this,(FFastGeoMeshComponent *)param_1);
  *(undefined ***)this = &___7FFastGeoStaticMeshComponentBase__6B_;
  pTVar2 = &this->LODData;
  this->bUseDefaultCollision = param_1->bUseDefaultCollision;
  piVar1 = &(this->LODData).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->LODData).ArrayNum;
  _Src = (param_1->LODData).AllocatorInstance.Data;
  (this->LODData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// FFastGeoStaticMeshComponentBase @ 14da19830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoStaticMeshComponentBase * __thiscall
FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentBase
          (FFastGeoStaticMeshComponentBase *this,int param_1,FFastGeoElementType *param_2)

{
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  *(undefined ***)this = &___7FFastGeoStaticMeshComponentBase__6B_;
  *(undefined8 *)&this->field_0x3c0 = 0;
  *(undefined8 *)&this->field_0x3c8 = 0;
  this->bUseDefaultCollision = false;
  (this->LODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODData).ArrayNum = 0;
  (this->LODData).ArrayMax = 0;
  return this;
}

// ~FFastGeoStaticMeshComponentBase @ 14da1b990

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
FFastGeoStaticMeshComponentBase::~FFastGeoStaticMeshComponentBase
          (FFastGeoStaticMeshComponentBase *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LODData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->field_0x3c0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3c0);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// AdditionalStatObject @ 14da205a0

UObject * __thiscall
FFastGeoStaticMeshComponentBase::AdditionalStatObject(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return *(UObject **)(lVar1 + 0x100);
}

// ApplyWorldTransform @ 14da20d30

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

void __thiscall
FFastGeoStaticMeshComponentBase::ApplyWorldTransform
          (FFastGeoStaticMeshComponentBase *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  TMatrix<double> local_128 [2];
  
  FFastGeoPrimitiveComponent::ApplyWorldTransform((FFastGeoPrimitiveComponent *)this,param_1);
  UE::Math::TTransform<double>::ToMatrixWithScale((TTransform<double> *)&this->field_0x90,local_128)
  ;
  dVar6 = *(double *)&this->field_0x108;
  dVar11 = *(double *)&this->field_0x110;
  dVar9 = *(double *)&this->field_0xf0;
  dVar10 = *(double *)&this->field_0xf8;
  dVar1 = *(double *)&this->field_0x118;
  dVar2 = *(double *)&this->field_0x100;
  dVar7 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][0] * dVar11) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[1][0] * dVar11,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][0] * dVar6) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[0][0] * dVar6,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][0] * dVar1) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[2][0] * dVar1,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar8 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][1] * dVar11) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_128[0].M[1][1] * dVar11,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][1] * dVar6) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_128[0].M[0][1] * dVar6,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][1] * dVar1) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_128[0].M[2][1] * dVar1,0) & _UNK_15061cc88);
  dVar6 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][2] * dVar11) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[1][2] * dVar11,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][2] * dVar6) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[0][2] * dVar6,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][2] * dVar1) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[2][2] * dVar1,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_128[0].M[3][1] =
       local_128[0].M[1][1] * dVar10 + local_128[0].M[0][1] * dVar9 + local_128[0].M[2][1] * dVar2 +
       local_128[0].M[3][1];
  auVar12._0_8_ =
       local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
       local_128[0].M[2][0] * local_128[0].M[2][0];
  auVar12._8_8_ =
       local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
       local_128[0].M[2][1] * local_128[0].M[2][1];
  auVar13._8_4_ = SUB84(auVar12._8_8_,0);
  auVar13._0_8_ = auVar12._8_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar13 = maxpd(auVar12,auVar13);
  dVar11 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
  dVar1 = local_128[0].M[1][2] * local_128[0].M[1][2] + local_128[0].M[0][2] * local_128[0].M[0][2]
          + local_128[0].M[2][2] * local_128[0].M[2][2];
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar13 = maxpd(auVar13,auVar5);
  dVar1 = SQRT(auVar13._0_8_) * *(double *)&this->field_0x120;
  auVar4._8_4_ = SUB84(local_128[0].M[3][1],0);
  auVar4._0_8_ = local_128[0].M[1][0] * dVar10 + local_128[0].M[0][0] * dVar9 +
                 local_128[0].M[2][0] * dVar2 + local_128[0].M[3][0];
  auVar4._12_4_ = (int)((ulonglong)local_128[0].M[3][1] >> 0x20);
  *(undefined1 (*) [16])&this->field_0x128 = auVar4;
  if (dVar1 <= dVar11) {
    dVar11 = dVar1;
  }
  local_150 = SUB84(dVar7,0);
  uStack_14c = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar3._8_4_ = local_150;
  auVar3._0_8_ = local_128[0].M[1][2] * dVar10 + local_128[0].M[0][2] * dVar9 +
                 local_128[0].M[2][2] * dVar2 + local_128[0].M[3][2];
  auVar3._12_4_ = uStack_14c;
  *(undefined1 (*) [16])&this->field_0x138 = auVar3;
  *(double *)&this->field_0x148 = dVar8;
  *(double *)&this->field_0x150 = dVar6;
  *(double *)&this->field_0x158 = dVar11;
  return;
}

// CollectPSOPrecacheData @ 14da23b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FFastGeoStaticMeshComponentBase::CollectPSOPrecacheData
          (FFastGeoStaticMeshComponentBase *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  bool bVar1;
  longlong lVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  undefined1 auStackY_168 [32];
  code *local_138;
  undefined4 *local_130;
  undefined4 local_128 [2];
  TArray<FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_>
  *local_120;
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lVar2 = (**(code **)(*(longlong *)this + 0x110))();
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    lVar2 = (**(code **)(*(longlong *)this + 0x110))(this);
    pFVar3 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar2 + 0x100));
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      lVar2 = (**(code **)(*(longlong *)this + 0x110))(this);
      local_118._248_1_ = local_118._248_1_ & 0xf0;
      local_118.Entries.ArrayMax = 4;
      local_128[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x100) + 0x1c0);
      local_120 = &this->LODData;
      local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.AssetName.Data.ArrayNum = 0;
      local_118.AssetName.Data.ArrayMax = 0;
      local_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_118.Entries.ArrayNum = 0;
      local_118.FallbackMaterial = (UMaterialInterface *)0x0;
      bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>(this,&local_118);
      local_130 = local_128;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                  ::Call;
      pFVar4 = &FNaniteVertexFactory::StaticType;
      if (!bVar1) {
        pFVar4 = &FLocalVertexFactory::StaticType;
      }
      FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<FFastGeoStaticMeshComponentBase>
                (this,pFVar4,param_1,
                 (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                  *)&local_138,param_2);
      if (local_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateSceneProxy @ 14da26140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoStaticMeshComponentBase::CreateSceneProxy
          (FFastGeoStaticMeshComponentBase *this,ESceneProxyCreationError *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UWorld *pUVar5;
  FPrimitiveSceneProxy *pFVar6;
  longlong lVar7;
  FStaticMeshRenderData *pFVar8;
  longlong lVar9;
  UStaticMesh *this_00;
  FSceneInterface *pFVar10;
  ESceneProxyCreationError local_res8 [4];
  
  pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if ((pUVar5 == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar5 == (UWorld *)0x0) {
    pFVar10 = (FSceneInterface *)0x0;
    lVar7 = (**(code **)(*(longlong *)this + 0x110))(this);
    this_00 = *(UStaticMesh **)(lVar7 + 0x100);
  }
  else {
    pFVar10 = pUVar5->Scene;
    lVar7 = (**(code **)(*(longlong *)this + 0x110))();
    this_00 = *(UStaticMesh **)(lVar7 + 0x100);
    if (pFVar10 != (FSceneInterface *)0x0) goto LAB_14da261ef;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Scene",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                     ,0xf0,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
LAB_14da261ef:
  if ((this_00 == (UStaticMesh *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xf1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  pFVar8 = UStaticMesh::GetRenderData(this_00);
  if ((pFVar8 == (FStaticMeshRenderData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh->GetRenderData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xf2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  pFVar8 = UStaticMesh::GetRenderData(this_00);
  if ((pFVar8->bIsInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh->GetRenderData()->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xf3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  cVar4 = (**(code **)(this_00->_padding_ + 0x10))();
  if ((cVar4 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StaticMesh->IsCompiling()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xf4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  if (param_1 != (ESceneProxyCreationError *)0x0) {
    *param_1 = None;
  }
  (**(code **)(*(longlong *)this + 0xb0))(this);
  lVar7 = (**(code **)(*(longlong *)this + 0x118))(this);
  if ((*(longlong *)(lVar7 + 0x48) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  if ((*(FSceneInterface **)(lVar7 + 0x48) != pFVar10) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.Scene == Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0xff,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  lVar1 = *(longlong *)(lVar7 + 0x18);
  lVar9 = (**(code **)(pFVar10->_padding_ + 0x410))(pFVar10);
  if ((lVar1 != lVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.World == Scene->GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0x100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  if ((*(Type *)(lVar7 + 0xb0) != pFVar10->FeatureLevel) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.FeatureLevel == Scene->GetFeatureLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0x101,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  if ((*(int *)(lVar7 + 0x98) != *(int *)&this->field_0x35c) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.ComponentId == GetPrimitiveSceneId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0x102,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  pFVar6 = FStaticMeshComponentHelper::CreateSceneProxy<FFastGeoStaticMeshComponentBase,1>
                     (this,local_res8);
  if ((pFVar6 == (FPrimitiveSceneProxy *)0x0) && (param_1 != (ESceneProxyCreationError *)0x0)) {
    if (local_res8[0] == WaitingPSOs) {
      *param_1 = WaitingPSOs;
    }
    else {
      *param_1 = InvalidMesh;
    }
  }
  return pFVar6;
}

// CreateStaticMeshSceneProxy @ 14da266e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoStaticMeshComponentBase::CreateStaticMeshSceneProxy
          (FFastGeoStaticMeshComponentBase *this,FMaterialAudit *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FPrimitiveSceneProxy *pFVar4;
  FStaticMeshSceneProxyDesc *pFVar5;
  FSceneProxy *this_00;
  FSceneProxy *pFVar6;
  FStaticMeshSceneProxy *this_01;
  TSharedPtr<FInstanceDataSceneProxy,1> local_28;
  
  pFVar6 = (FSceneProxy *)0x0;
  pUVar3 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if ((pUVar3 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0x11a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar4;
  }
  pFVar5 = (FStaticMeshSceneProxyDesc *)(**(code **)(*(longlong *)this + 0x118))(this);
  if ((pFVar5->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                         ,0x11c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar4;
  }
  if (param_2) {
    this_00 = ::operator_new(0xc20);
    if (this_00 != (FSceneProxy *)0x0) {
      local_28.Object = (FInstanceDataSceneProxy *)0x0;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = Nanite::FSceneProxy::FSceneProxy(this_00,param_1,pFVar5,&local_28);
    }
    *(FSceneProxy **)&this->field_0x348 = pFVar6;
    if (this_00 != (FSceneProxy *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pFVar6 = *(FSceneProxy **)&this->field_0x348;
    }
  }
  else {
    this_01 = ::operator_new(0xb90);
    if (this_01 != (FStaticMeshSceneProxy *)0x0) {
      pFVar6 = (FSceneProxy *)FStaticMeshSceneProxy::FStaticMeshSceneProxy(this_01,pFVar5,false);
    }
    *(FSceneProxy **)&this->field_0x348 = pFVar6;
  }
  return (FPrimitiveSceneProxy *)pFVar6;
}

// DoCustomNavigableGeometryExport @ 14da272a0

bool __thiscall
FFastGeoStaticMeshComponentBase::DoCustomNavigableGeometryExport
          (FFastGeoStaticMeshComponentBase *this,FNavigableGeometryExport *param_1)

{
  UStaticMesh *this_00;
  char cVar1;
  bool bVar2;
  longlong lVar3;
  UNavCollisionBase *pUVar4;
  FFastGeoStaticMeshComponentBase *local_res8;
  
  if (((*(double *)&this->field_0xd0 != 0.0) || (*(double *)&this->field_0xd8 != 0.0)) ||
     (*(double *)&this->field_0xe0 != 0.0)) {
    lVar3 = (**(code **)(*(longlong *)this + 0x110))();
    this_00 = *(UStaticMesh **)(lVar3 + 0x100);
    if ((((this_00 != (UStaticMesh *)0x0) &&
         ((cVar1 = (**(code **)(this_00->_padding_ + 0x10))(), cVar1 == '\0' ||
          (local_res8 = this,
          bVar2 = `FStaticMeshComponentHelper::
                  DoCustomNavigableGeometryExport<FFastGeoStaticMeshComponentBase>'::__l9::
                  <lambda_1>::operator()(&local_res8), bVar2)))) &&
        (pUVar4 = UStaticMesh::GetNavCollision(this_00), pUVar4 != (UNavCollisionBase *)0x0)) &&
       ((pUVar4->bIsDynamicObstacle != 0 ||
        (cVar1 = (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&this->field_0x90,param_1),
        cVar1 != '\0')))) {
      return false;
    }
  }
  return true;
}

// GetBodySetup @ 14da298f0

UBodySetup * __thiscall
FFastGeoStaticMeshComponentBase::GetBodySetup(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    lVar1 = (**(code **)(*(longlong *)this + 0x110))(this);
    return *(UBodySetup **)(*(longlong *)(lVar1 + 0x100) + 0x1d8);
  }
  return (UBodySetup *)0x0;
}

// GetCollisionResponseToChannels @ 14da29ab0

FCollisionResponseContainer * __thiscall
FFastGeoStaticMeshComponentBase::GetCollisionResponseToChannels
          (FFastGeoStaticMeshComponentBase *this)

{
  return (FCollisionResponseContainer *)&this->field_0x1e8;
}

// GetComplexPhysicalMaterials @ 14da29b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
FFastGeoStaticMeshComponentBase::GetComplexPhysicalMaterials
          (FFastGeoStaticMeshComponentBase *this,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  TObjectPtr<UPhysicalMaterial>_u_0 TVar8;
  uint uVar9;
  FScriptContainerElement *_Dst;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong local_res20;
  
  if (*(longlong *)&this->field_0x2a0 == 0) {
    uVar5 = (**(code **)(*(longlong *)this + 0x60))();
    TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::SetNum(param_1,uVar5,Default);
    if (param_2 != (TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar6 = param_2->ArrayNum;
      piVar1 = &param_2->ArrayNum;
      if (iVar6 < (int)uVar5) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar5 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      }
      else {
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if ((int)uVar5 < iVar6) {
          uVar10 = iVar6 - uVar5;
          if (((int)(uVar10 | uVar5) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar10 != 0) {
            _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
            iVar6 = (*piVar1 - uVar10) - uVar5;
            if (iVar6 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar10 * 0x10,(longlong)iVar6 << 4);
            }
            *piVar1 = *piVar1 - uVar10;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
          }
        }
      }
    }
    plVar12 = (longlong *)0x0;
    plVar7 = plVar12;
    plVar13 = plVar12;
    plVar14 = plVar12;
    if (0 < (int)uVar5) {
      do {
        uVar10 = (uint)plVar7;
        TVar8 = (GEngine->DefaultPhysMaterial).field0_0x0;
        plVar7 = (longlong *)(**(code **)(*(longlong *)this + 0x58))(this,plVar7);
        if (plVar7 != (longlong *)0x0) {
          TVar8.DebugPtr = (UPhysicalMaterial *)(**(code **)(*plVar7 + 0x318))(plVar7);
        }
        uVar11 = ~uVar10 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(TObjectPtr<UPhysicalMaterial>_u_0 *)
         ((param_1->AllocatorInstance).Data + (longlong)plVar13 * 8) = TVar8;
        if (param_2 != (TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *)0x0) {
          local_res20 = 0;
          plVar15 = plVar12;
          if ((plVar7 != (longlong *)0x0) &&
             (local_res20 = (**(code **)(*plVar7 + 800))(plVar7), local_res20 != 0)) {
            plVar15 = plVar7;
          }
          uVar9 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(longlong *)((param_2->AllocatorInstance).Data + (longlong)plVar14) = local_res20;
          uVar9 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(longlong **)((param_2->AllocatorInstance).Data + 8 + (longlong)plVar14) = plVar15;
        }
        plVar13 = (longlong *)((longlong)plVar13 + 1);
        plVar7 = (longlong *)(ulonglong)(uVar10 + 1);
        plVar14 = plVar14 + 2;
      } while ((longlong)plVar13 < (longlong)(int)uVar5);
    }
  }
  else {
    TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::SetNum(param_1,1,Default);
    uVar2 = *(undefined8 *)&this->field_0x2a0;
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)(param_1->AllocatorInstance).Data = uVar2;
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(param_1->AllocatorInstance).Data != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = UObjectBase::IsValidLowLevel(*(UObjectBase **)(param_1->AllocatorInstance).Data);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!OutPhysMaterials[0] || OutPhysMaterials[0]->IsValidLowLevel()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoStaticMeshComponent.cpp"
                             ,399,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// GetComponentMaterialSlotsOverlayMaterial @ 14da2a390

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
FFastGeoStaticMeshComponentBase::GetComponentMaterialSlotsOverlayMaterial
          (FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xd0);
}

// GetDefaultMaterialSlotsOverlayMaterial @ 14da2a400

void __thiscall
FFastGeoStaticMeshComponentBase::GetDefaultMaterialSlotsOverlayMaterial
          (FFastGeoStaticMeshComponentBase *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  lVar8 = (**(code **)(*(longlong *)this + 0x110))(this);
  if (*(longlong *)(lVar8 + 0x100) != 0) {
    lVar8 = (**(code **)(*(longlong *)this + 0x110))(this);
    lVar8 = *(longlong *)(lVar8 + 0x100);
    lVar9 = *(longlong *)(lVar8 + 0x170);
    iVar2 = *(int *)(lVar8 + 0x178);
    pFVar10 = (FScriptContainerElement *)(lVar9 + 0x30);
    lVar11 = (longlong)iVar2 * 0x38 + lVar9;
    while( true ) {
      if (*(int *)(lVar8 + 0x178) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar9 == lVar11) break;
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar7 + 1;
      pUVar4 = *(UObject **)pFVar10;
      *(UObject **)(pFVar3 + (longlong)iVar7 * 8) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      lVar9 = lVar9 + 0x38;
      pFVar10 = pFVar10 + 0x38;
    }
  }
  return;
}

// GetForceNaniteForMasked @ 14da2a5a0

bool __thiscall
FFastGeoStaticMeshComponentBase::GetForceNaniteForMasked(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (bool)((byte)(*(uint *)(lVar1 + 0x164) >> 0xc) & 1);
}

// GetForcedLodModel @ 14da2a5d0

int __thiscall
FFastGeoStaticMeshComponentBase::GetForcedLodModel(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return *(int *)(lVar1 + 0x148);
}

// GetMaterial @ 14da2a7b0

UMaterialInterface * __thiscall
FFastGeoStaticMeshComponentBase::GetMaterial
          (FFastGeoStaticMeshComponentBase *this,int param_1,bool param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
                     (this,param_1,param_2,false);
  return pUVar1;
}

// GetMaterial @ 14da2a7c0

UMaterialInterface * __thiscall
FFastGeoStaticMeshComponentBase::GetMaterial(FFastGeoStaticMeshComponentBase *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
                     (this,param_1,false,false);
  return pUVar1;
}

// GetMinLOD @ 14da2a820

int __thiscall FFastGeoStaticMeshComponentBase::GetMinLOD(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return *(int *)(lVar1 + 0x14c);
}

// GetNaniteAuditMaterial @ 14da2a860

UMaterialInterface * __thiscall
FFastGeoStaticMeshComponentBase::GetNaniteAuditMaterial
          (FFastGeoStaticMeshComponentBase *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
                     (this,param_1,true,false);
  return pUVar1;
}

// GetNaniteResources @ 14da2a880

FResources * __thiscall
FFastGeoStaticMeshComponentBase::GetNaniteResources(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  FStaticMeshRenderData *pFVar2;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    lVar1 = (**(code **)(*(longlong *)this + 0x110))(this);
    pFVar2 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar1 + 0x100));
    if (pFVar2 != (FStaticMeshRenderData *)0x0) {
      lVar1 = (**(code **)(*(longlong *)this + 0x110))(this);
      pFVar2 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar1 + 0x100));
      return (pFVar2->NaniteResourcesPtr).Ptr;
    }
  }
  return (FResources *)0x0;
}

// GetNavigationBounds @ 14da2a9d0

TBox<double> * __thiscall
FFastGeoStaticMeshComponentBase::GetNavigationBounds
          (FFastGeoStaticMeshComponentBase *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  
  lVar7 = (**(code **)(*(longlong *)this + 0x110))();
  if (*(UStaticMesh **)(lVar7 + 0x100) != (UStaticMesh *)0x0) {
    UStaticMesh::GetNavigationBounds
              (*(UStaticMesh **)(lVar7 + 0x100),__return_storage_ptr__,
               (TTransform<double> *)&this->field_0x90);
    return __return_storage_ptr__;
  }
  dVar1 = *(double *)&this->field_0x128;
  dVar2 = *(double *)&this->field_0x140;
  dVar3 = *(double *)&this->field_0x130;
  dVar4 = *(double *)&this->field_0x148;
  dVar5 = *(double *)&this->field_0x150;
  dVar6 = *(double *)&this->field_0x138;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetNavigationData @ 14da2adc0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FFastGeoStaticMeshComponentBase::GetNavigationData
          (FFastGeoStaticMeshComponentBase *this,FNavigationRelevantData *param_1)

{
  byte bVar1;
  longlong lVar2;
  UNavCollisionBase *pUVar3;
  FDestructionSentinel FStack_78;
  undefined1 auStack_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_58;
  ForAnyElementType FStack_50;
  int iStack_48;
  ForAnyElementType FStack_40;
  undefined8 uStack_38;
  ForAnyElementType FStack_30;
  undefined8 uStack_28;
  ForAnyElementType FStack_20;
  undefined8 uStack_18;
  uint uStack_10;
  ENavigationDataResolution EStack_c;
  
  bVar1 = this->field_0x160;
  if ((bVar1 & 0xc) != 0) {
    auStack_60._0_4_ = auStack_60._0_4_ & 0xfffffffe;
    iStack_48 = 0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    uStack_38._0_4_ = 0;
    uStack_38._4_4_ = 0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    uStack_28._0_4_ = 0;
    uStack_28._4_4_ = 0;
    uStack_10 = ((bVar1 & 8) * 2 | bVar1 & 4) << 2 | uStack_10 & 0xffffff80;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    uStack_18._0_4_ = 0;
    uStack_18._4_4_ = 0;
    TStack_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    EStack_c = Invalid;
    FCompositeNavModifier::Add(&param_1->Modifiers,(FCompositeNavModifier *)auStack_60);
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)FStack_30.Data,(int)uStack_28);
    if ((FSimpleLinkNavModifier *)FStack_30.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)FStack_40.Data,(int)uStack_38);
    if ((FAreaNavModifier *)FStack_40.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(FStack_40.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_58,(FWriteAccessScope *)&FStack_78);
    if ((iStack_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      iStack_48 = 0;
    }
    if (FStack_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_78.Accessor,&FStack_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_58.AccessDetector);
  }
  FStack_78.bDestroyed = (bool)this->field_0xe0;
  FStack_78._17_3_ = *(undefined3 *)&this->field_0xe1;
  FStack_78._20_4_ = *(undefined4 *)&this->field_0xe4;
  if (((*(double *)&this->field_0xd0 != 0.0) || (*(double *)&this->field_0xd8 != 0.0)) ||
     (*(double *)&this->field_0xe0 != 0.0)) {
    lVar2 = (**(code **)(*(longlong *)this + 0x110))(this);
    if (*(UStaticMesh **)(lVar2 + 0x100) != (UStaticMesh *)0x0) {
      pUVar3 = UStaticMesh::GetNavCollision(*(UStaticMesh **)(lVar2 + 0x100));
      if ((pUVar3 != (UNavCollisionBase *)0x0) && (pUVar3->bIsDynamicObstacle != 0)) {
        (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,&param_1->Modifiers,&this->field_0x90);
      }
    }
  }
  return;
}

// GetNumMaterials @ 14da2ae50

int __thiscall
FFastGeoStaticMeshComponentBase::GetNumMaterials(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    lVar1 = (**(code **)(*(longlong *)this + 0x110))(this);
    return *(int *)(*(longlong *)(lVar1 + 0x100) + 0x178);
  }
  return 0;
}

// GetOverlayMaterial @ 14da2af90

UMaterialInterface * __thiscall
FFastGeoStaticMeshComponentBase::GetOverlayMaterial(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return *(UMaterialInterface **)(lVar1 + 0x128);
}

// GetOverrideMinLOD @ 14da2afb0

bool __thiscall
FFastGeoStaticMeshComponentBase::GetOverrideMinLOD(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (bool)((byte)(*(uint *)(lVar1 + 0x164) >> 4) & 1);
}

// GetPhysicalMaterial @ 14da2b0f0

UPhysicalMaterial * __thiscall
FFastGeoStaticMeshComponentBase::GetPhysicalMaterial(FFastGeoStaticMeshComponentBase *this)

{
  longlong *plVar1;
  UPhysicalMaterial *pUVar2;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x58))(this,0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014da2b112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPhysicalMaterial *)(**(code **)(*plVar1 + 0x318))(plVar1,*(code **)(*plVar1 + 0x318))
    ;
    return pUVar2;
  }
  return (UPhysicalMaterial *)0x0;
}

// GetStaticMesh @ 14da2bb50

UStaticMesh * __thiscall
FFastGeoStaticMeshComponentBase::GetStaticMesh(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return *(UStaticMesh **)(lVar1 + 0x100);
}

// GetUsedMaterials @ 14da2bd50

void __thiscall
FFastGeoStaticMeshComponentBase::GetUsedMaterials
          (FFastGeoStaticMeshComponentBase *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined7 in_register_00000081;
  bool abStackX_8 [8];
  FFastGeoStaticMeshComponentBase *pFStackX_20;
  longlong lStack_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> TStack_30;
  code *pcStack_20;
  FFastGeoStaticMeshComponentBase **ppFStack_18;
  
  lVar5 = (**(code **)(*(longlong *)this + 0x110))
                    (this,param_1,CONCAT71(in_register_00000081,param_2));
  if (*(longlong *)(lVar5 + 0x100) != 0) {
    lVar5 = (**(code **)(*(longlong *)this + 0x110))(this);
    ppFStack_18 = &pFStackX_20;
    pcStack_20 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<FFastGeoStaticMeshComponentBase>'::__l5::<lambda_1>,UMaterialInterface_*,int>
                 ::Call;
    pFStackX_20 = this;
    UStaticMesh::GetUsedMaterials
              (*(UStaticMesh **)(lVar5 + 0x100),param_1,
               (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&pcStack_20);
    bVar3 = IsRayTracingAllowed();
    if (bVar3) {
      lVar5 = (**(code **)(*(longlong *)this + 0x110))(this);
      if ((*(byte *)(*(longlong *)(lVar5 + 0x100) + 0x1e4) & 0x20) != 0) {
        bVar3 = Nanite::FNaniteResourcesHelper::
                ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>(this,(FMaterialAudit *)0x0)
        ;
        if ((bVar3) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
          FStaticMeshComponentHelper::
          GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>(this,param_1);
        }
      }
    }
    if (0 < param_1->ArrayNum) {
      TStack_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_30.ArrayNum = 0;
      TStack_30.ArrayMax = 0;
      FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent>
                ((FFastGeoMeshComponent *)this,&TStack_30);
      abStackX_8[0] = false;
      FMaterialOverlayHelper::AppendAllOverlayMaterial(&TStack_30,param_1,abStackX_8);
      if (abStackX_8[0] != false) {
        lStack_38 = (**(code **)(*(longlong *)this + 0x108))(this);
        if (lStack_38 != 0) {
          pFVar1 = (param_1->AllocatorInstance).Data;
          if ((pFVar1 <= (FScriptContainerElement *)&lStack_38) &&
             ((FScriptContainerElement *)&lStack_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar4 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = lStack_38;
        }
      }
      if (TStack_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_30.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HasValidNaniteData @ 14da2c360

bool __thiscall
FFastGeoStaticMeshComponentBase::HasValidNaniteData(FFastGeoStaticMeshComponentBase *this)

{
  FResources *pFVar1;
  
  pFVar1 = GetNaniteResources(this);
  if (pFVar1 != (FResources *)0x0) {
    return 0 < (pFVar1->PageStreamingStates).ArrayNum;
  }
  return false;
}

// InitializeDynamicProperties @ 14da2c530

void __thiscall
FFastGeoStaticMeshComponentBase::InitializeDynamicProperties(FFastGeoStaticMeshComponentBase *this)

{
  code *pcVar1;
  bool bVar2;
  UBodySetup *pUVar3;
  
  if (this->bUseDefaultCollision != false) {
    pUVar3 = (UBodySetup *)(**(code **)(*(longlong *)this + 8))();
    if (pUVar3 != (UBodySetup *)0x0) {
      FBodyInstance::UseExternalCollisionProfile((FBodyInstance *)&this->field_0x180,pUVar3);
    }
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBodyInstance::FixupData
            ((FBodyInstance *)&this->field_0x180,
             *(UObject **)(*(longlong *)&this->field_0x20 + 0x18));
  return;
}

// InitializeSceneProxyDescDynamicProperties @ 14da2d530

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

void __thiscall
FFastGeoStaticMeshComponentBase::InitializeSceneProxyDescDynamicProperties
          (FFastGeoStaticMeshComponentBase *this)

{
  int iVar1;
  TObjectPtr<UMaterialInterface> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FStaticMeshSceneProxyDesc *this_00;
  FResources *pFVar5;
  UBodySetup *pUVar6;
  UWorld *pUVar7;
  FSceneInterface *this_01;
  FMaterialRelevance local_res8;
  undefined4 uStack_c;
  
  FFastGeoPrimitiveComponent::InitializeSceneProxyDescDynamicProperties
            ((FFastGeoPrimitiveComponent *)this);
  this_00 = (FStaticMeshSceneProxyDesc *)(**(code **)(*(longlong *)this + 0x118))(this);
  pTVar2 = *(TObjectPtr<UMaterialInterface> **)&this->field_0x3c0;
  iVar1 = *(int *)&this->field_0x3c8;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this_00->OverrideMaterials).DataPtr = pTVar2;
  *(ulonglong *)&(this_00->OverrideMaterials).ArrayNum = CONCAT44(uStack_c,iVar1);
  pFVar5 = GetNaniteResources(this);
  this_00->NaniteResources = pFVar5;
  pUVar6 = (UBodySetup *)(**(code **)(*(longlong *)this + 8))(this);
  this_00->BodySetup = pUVar6;
  pUVar7 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar7 == (UWorld *)0x0) {
    this_01 = (FSceneInterface *)0x0;
  }
  else {
    this_01 = pUVar7->Scene;
  }
  FSceneInterface::GetShaderPlatform(this_01);
  FMeshComponentHelper::GetMaterialRelevance<FFastGeoMeshComponent>
            ((FFastGeoMeshComponent *)&local_res8,(EShaderPlatform)this);
  FStaticMeshSceneProxyDesc::SetMaterialRelevance(this_00,&local_res8);
  FStaticMeshSceneProxyDesc::SetCollisionResponseToChannels
            (this_00,(FCollisionResponseContainer *)&this->field_0x1e8);
  return;
}

// IsDisallowNanite @ 14da2d850

bool __thiscall
FFastGeoStaticMeshComponentBase::IsDisallowNanite(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (bool)((byte)(*(uint *)(lVar1 + 0x164) >> 10) & 1);
}

// IsForceDisableNanite @ 14da2d910

bool __thiscall
FFastGeoStaticMeshComponentBase::IsForceDisableNanite(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (bool)((byte)(*(uint *)(lVar1 + 0x164) >> 0xb) & 1);
}

// IsForceNaniteForMasked @ 14da2d940

bool __thiscall
FFastGeoStaticMeshComponentBase::IsForceNaniteForMasked(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (bool)((byte)(*(uint *)(lVar1 + 0x164) >> 0xc) & 1);
}

// IsNavigationRelevant @ 14da2dd40

bool __thiscall
FFastGeoStaticMeshComponentBase::IsNavigationRelevant(FFastGeoStaticMeshComponentBase *this)

{
  UStaticMesh *this_00;
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  char cStack_36;
  char cStack_32;
  
  lVar5 = (**(code **)(*(longlong *)this + 0x110))();
  this_00 = *(UStaticMesh **)(lVar5 + 0x100);
  if ((((this_00 != (UStaticMesh *)0x0) &&
       (cVar2 = (**(code **)(this_00->_padding_ + 0x10))(), cVar2 == '\0')) &&
      (bVar3 = UStaticMesh::IsNavigationRelevant(this_00), bVar3)) &&
     ((this->field_0x160 & 0x10) != 0)) {
    iVar4 = (**(code **)(*(longlong *)this + 0x90))(this);
    if (1 < iVar4) {
      return true;
    }
    uVar1 = *(undefined8 *)&this->field_0x1e8;
    cVar2 = (**(code **)(*(longlong *)this + 0x10))(this);
    if ((cVar2 != '\0') &&
       (((cVar2 = this->field_0x197, cVar2 == '\x01' || (cVar2 == '\x03')) || (cVar2 == '\x05')))) {
      cStack_36 = (char)((ulonglong)uVar1 >> 0x10);
      cStack_32 = (char)((ulonglong)uVar1 >> 0x30);
      if (cStack_36 == '\x02') {
        return true;
      }
      if (cStack_32 == '\x02') {
        return true;
      }
    }
  }
  return false;
}

// IsReverseCulling @ 14da2df60

bool __thiscall
FFastGeoStaticMeshComponentBase::IsReverseCulling(FFastGeoStaticMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x110))();
  return (bool)(*(byte *)(lVar1 + 0x164) & 1);
}

// Serialize @ 14da37190

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
FFastGeoStaticMeshComponentBase::Serialize(FFastGeoStaticMeshComponentBase *this,FArchive *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int *piVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint local_res8 [2];
  
  FFastGeoPrimitiveComponent::Serialize((FFastGeoPrimitiveComponent *)this,param_1);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                     &this->field_0x3c0);
  lVar6 = (**(code **)(*(longlong *)this + 0x118))(this);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,lVar6 + 0x100);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,lVar6 + 0x128);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                     (lVar6 + 0xd0));
  puVar1 = (uint *)(lVar6 + 0x138);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x148);
  puVar2 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x14c);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x150);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x13c);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x140);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x144);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)(lVar6 + 0x154);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar2 = &param_1->field_0x28;
  bVar7 = (bool)(*(byte *)(lVar6 + 0x164) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da374b2;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da374b2:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xfffffffe | (uint)bVar7;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 3) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da3753a;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da3753a:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 3 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xfffffff7 | (uint)bVar7 * 8;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 4) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da375cc;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da375cc:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 4 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xffffffef | (uint)bVar7 << 4;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 5) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da3765a;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da3765a:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 5 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xffffffdf | (uint)bVar7 << 5;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 6) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da376e8;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da376e8:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 6 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xffffffbf | (uint)bVar7 << 6;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 7) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da37776;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da37776:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 7 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xffffff7f | (uint)bVar7 << 7;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 8) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da37805;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da37805:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 8 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xfffffeff | (uint)bVar7 << 8;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 10) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da37894;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da37894:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 10 & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xfffffbff | (uint)bVar7 << 10;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 0xb) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) goto LAB_14da37923;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_14da37923:
    bVar7 = local_res8[0] != 0;
  }
  uVar8 = *(uint *)(lVar6 + 0x164);
  if ((uVar8 >> 0xb & 1) != (uint)bVar7) {
    uVar8 = uVar8 & 0xfffff7ff | (uint)bVar7 << 0xb;
    *(uint *)(lVar6 + 0x164) = uVar8;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)(uVar8 >> 0xc) & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) == 0) goto LAB_14da379b6;
  }
  else {
    local_res8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar7 = local_res8[0] != 0;
LAB_14da379b6:
  if ((*(uint *)(lVar6 + 0x164) >> 0xc & 1) != (uint)bVar7) {
    *(uint *)(lVar6 + 0x164) = *(uint *)(lVar6 + 0x164) & 0xffffefff | (uint)bVar7 << 0xc;
  }
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    local_res8[0] = 0;
    if ((*puVar2 & 1) == 0) {
      local_res8[0] = (uint)(this->bUseDefaultCollision != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) != 0) {
      this->bUseDefaultCollision = local_res8[0] != 0;
    }
  }
  else {
    this->bUseDefaultCollision = *piVar5 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return;
}

// ShouldCreateNaniteProxy @ 14da38140

bool __thiscall
FFastGeoStaticMeshComponentBase::ShouldCreateNaniteProxy
          (FFastGeoStaticMeshComponentBase *this,FMaterialAudit *param_1)

{
  bool bVar1;
  FStaticMeshSceneProxyDesc *pFVar2;
  
  pFVar2 = (FStaticMeshSceneProxyDesc *)(**(code **)(*(longlong *)this + 0x110))();
  bVar1 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                    (pFVar2,param_1);
  return bVar1;
}

// ShouldExportAsObstacle @ 14da38260

bool __thiscall
FFastGeoStaticMeshComponentBase::ShouldExportAsObstacle
          (FFastGeoStaticMeshComponentBase *this,UNavCollisionBase *param_1)

{
  return param_1->bIsDynamicObstacle;
}

// UseNaniteOverrideMaterials @ 14da398e0

bool __thiscall
FFastGeoStaticMeshComponentBase::UseNaniteOverrideMaterials
          (FFastGeoStaticMeshComponentBase *this,bool param_1)

{
  bool bVar1;
  
  if ((!param_1) &&
     (bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>(this,(FMaterialAudit *)0x0),
     !bVar1)) {
    return false;
  }
  if (Nanite::GEnableNaniteMaterialOverrides == 0) {
    return false;
  }
  return true;
}

