// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 17

// FFastGeoSkinnedMeshComponentBase @ 14da19510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFastGeoSkinnedMeshComponentBase * __thiscall
FFastGeoSkinnedMeshComponentBase::FFastGeoSkinnedMeshComponentBase
          (FFastGeoSkinnedMeshComponentBase *this,FFastGeoSkinnedMeshComponentBase *param_1)

{
  int *piVar1;
  TArray<ESkinCacheUsage,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSkelMeshComponentLODInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FSkelMeshComponentLODInfo *pFVar5;
  
  FFastGeoMeshComponent::FFastGeoMeshComponent
            ((FFastGeoMeshComponent *)this,(FFastGeoMeshComponent *)param_1);
  pTVar2 = &this->SkinCacheUsage;
  this->_padding_ = (longlong)&___7FFastGeoSkinnedMeshComponentBase__6B_;
  piVar1 = &(this->SkinCacheUsage).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->SkinCacheUsage).ArrayNum;
  _Src = (param_1->SkinCacheUsage).AllocatorInstance.Data;
  (this->SkinCacheUsage).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4);
  }
  pTVar3 = &this->LODInfo;
  this->field_0x3e0 = (this->bOverrideMinLod ^ param_1->bOverrideMinLod) & 1U ^ this->field_0x3e0;
  this->bIncludeComponentLocationIntoBounds = param_1->bIncludeComponentLocationIntoBounds;
  this->field_0x3e2 = (this->bHideSkin ^ param_1->bHideSkin) & 1U ^ this->field_0x3e2;
  this->MinLodModel = param_1->MinLodModel;
  piVar1 = &(this->LODInfo).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->LODInfo).ArrayNum;
  pFVar5 = (FSkelMeshComponentLODInfo *)(param_1->LODInfo).AllocatorInstance.Data;
  (this->LODInfo).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FSkelMeshComponentLODInfo,FSkelMeshComponentLODInfo,int>
              ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
  }
  this->MeshObject = param_1->MeshObject;
  return this;
}

// FFastGeoSkinnedMeshComponentBase @ 14da19670

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFastGeoSkinnedMeshComponentBase * __thiscall
FFastGeoSkinnedMeshComponentBase::FFastGeoSkinnedMeshComponentBase
          (FFastGeoSkinnedMeshComponentBase *this,int param_1,FFastGeoElementType *param_2)

{
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  this->bOverrideMinLod = false;
  this->_padding_ = (longlong)&___7FFastGeoSkinnedMeshComponentBase__6B_;
  this->bHideSkin = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SkinCacheUsage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinCacheUsage).ArrayNum = 0;
  (this->SkinCacheUsage).ArrayMax = 0;
  this->bIncludeComponentLocationIntoBounds = false;
  this->MinLodModel = 0;
  (this->LODInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODInfo).ArrayNum = 0;
  (this->LODInfo).ArrayMax = 0;
  this->MeshObject = (FSkeletalMeshObject *)0x0;
  return this;
}

// ~FFastGeoSkinnedMeshComponentBase @ 14da1b8d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::~FFastGeoSkinnedMeshComponentBase
          (FFastGeoSkinnedMeshComponentBase *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSkelMeshComponentLODInfo,int>
            ((FSkelMeshComponentLODInfo *)(this->LODInfo).AllocatorInstance.Data,
             (this->LODInfo).ArrayNum);
  pFVar1 = (this->LODInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinCacheUsage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// CalcMeshBound @ 14da22310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
FFastGeoSkinnedMeshComponentBase::CalcMeshBound
          (FFastGeoSkinnedMeshComponentBase *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TVector<float> *param_1,
          bool param_2,TTransform<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  FSkinnedMeshSceneProxyDesc *pFVar10;
  USkinnedAsset *pUVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  undefined8 local_170;
  undefined1 aauStack_168 [3] [16];
  double local_138;
  TMatrix<double> local_128 [2];
  
  pFVar10 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))();
  pUVar11 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar10);
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  aauStack_168[0]._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  aauStack_168[0]._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (pUVar11 == (USkinnedAsset *)0x0) {
    local_138 = (param_3->Translation).ZW.m128d_f64[0];
    dVar5 = (param_3->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_3->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar5;
    auVar16 = aauStack_168[0];
    aauStack_168[0]._12_4_ = (undefined4)((ulonglong)aauStack_168[0]._8_8_ >> 0x20);
    local_170._0_4_ = SUB84(local_138,0);
    local_170._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    aauStack_168[0]._4_4_ = (undefined4)((ulonglong)aauStack_168[0]._0_8_ >> 0x20);
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) =
         (undefined4)local_170;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x14) = local_170._4_4_
    ;
    *(undefined4 *)&(__return_storage_ptr__->BoxExtent).field0_0x0 = aauStack_168[0]._0_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 4) =
         aauStack_168[0]._4_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) =
         aauStack_168[0]._8_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0xc) =
         aauStack_168[0]._12_4_;
    *(int *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = (int)uVar9;
    *(int *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x14) =
         (int)((ulonglong)uVar9 >> 0x20);
    __return_storage_ptr__->SphereRadius = 0.0;
    local_170 = local_138;
    aauStack_168[0] = auVar16;
  }
  else {
    pFVar10 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
    pUVar11 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar10);
    (**(code **)(*(longlong *)pUVar11 + 0x3e0))(pUVar11,&local_1b8);
    local_1b8 = local_1b8 + (double)(param_1->field0_0x0)._s_0.X;
    dStack_1b0 = dStack_1b0 + (double)(param_1->field0_0x0)._s_0.Y;
    local_1a8 = local_1a8 + (double)(param_1->field0_0x0)._s_0.Z;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_3,local_128);
    dVar8 = (double)CONCAT44((uint)((ulonglong)(dStack_198 * local_128[0].M[1][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dStack_198 * local_128[0].M[1][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_1a0 * local_128[0].M[0][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_1a0 * local_128[0].M[0][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_190 * local_128[0].M[2][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_190 * local_128[0].M[2][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar7 = (double)CONCAT44((uint)((ulonglong)(dStack_198 * local_128[0].M[1][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dStack_198 * local_128[0].M[1][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_1a0 * local_128[0].M[0][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_1a0 * local_128[0].M[0][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_190 * local_128[0].M[2][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_190 * local_128[0].M[2][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar14 = (double)CONCAT44((uint)((ulonglong)(dStack_198 * local_128[0].M[1][1]) >> 0x20) &
                              _UNK_15061cc8c,
                              SUB84(dStack_198 * local_128[0].M[1][1],0) & _UNK_15061cc88) +
             (double)CONCAT44((uint)((ulonglong)(local_1a0 * local_128[0].M[0][1]) >> 0x20) &
                              _UNK_15061cc8c,
                              SUB84(local_1a0 * local_128[0].M[0][1],0) & _UNK_15061cc88) +
             (double)CONCAT44((uint)((ulonglong)(local_190 * local_128[0].M[2][1]) >> 0x20) &
                              _UNK_15061cc8c,
                              SUB84(local_190 * local_128[0].M[2][1],0) & _UNK_15061cc88);
    auVar6._8_4_ = SUB84(dVar14,0);
    auVar6._0_8_ = dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    local_128[0].M[3][1] =
         local_128[0].M[1][1] * dStack_1b0 + local_128[0].M[0][1] * local_1b8 +
         local_128[0].M[2][1] * local_1a8 + local_128[0].M[3][1];
    auVar15._0_8_ =
         local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
         local_128[0].M[2][0] * local_128[0].M[2][0];
    auVar15._8_8_ =
         local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
         local_128[0].M[2][1] * local_128[0].M[2][1];
    auVar16._8_4_ = SUB84(auVar15._8_8_,0);
    auVar16._0_8_ = auVar15._8_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar16 = maxpd(auVar15,auVar16);
    auVar3._8_4_ = SUB84(local_128[0].M[3][1],0);
    auVar3._0_8_ = local_128[0].M[1][0] * dStack_1b0 + local_128[0].M[0][0] * local_1b8 +
                   local_128[0].M[2][0] * local_1a8 + local_128[0].M[3][0];
    auVar3._12_4_ = (int)((ulonglong)local_128[0].M[3][1] >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar3;
    dVar5 = local_128[0].M[1][2] * local_128[0].M[1][2] +
            local_128[0].M[0][2] * local_128[0].M[0][2] +
            local_128[0].M[2][2] * local_128[0].M[2][2];
    dVar13 = SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar14 * dVar14);
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar16 = maxpd(auVar16,auVar4);
    local_188 = SQRT(auVar16._0_8_) * local_188;
    if (local_188 <= dVar13) {
      dVar13 = local_188;
    }
    aauStack_168[0]._0_4_ = SUB84(dVar7,0);
    aauStack_168[0]._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar1._8_4_ = aauStack_168[0]._0_4_;
    auVar1._0_8_ = local_128[0].M[1][2] * dStack_1b0 + local_128[0].M[0][2] * local_1b8 +
                   local_128[0].M[2][2] * local_1a8 + local_128[0].M[3][2];
    auVar1._12_4_ = aauStack_168[0]._4_4_;
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar1;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar14;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8;
    __return_storage_ptr__->SphereRadius = dVar13;
    aauStack_168[0] = auVar6;
  }
  lVar12 = (**(code **)(this->_padding_ + 0xa0))(this);
  dVar14 = (double)*(float *)(lVar12 + 0xa8);
  dVar7 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y * dVar14;
  dVar5 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X * dVar14;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->BoxExtent).field0_0x0 = auVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar14 * dVar5;
  lVar12 = (**(code **)(this->_padding_ + 0xa0))(this);
  __return_storage_ptr__->SphereRadius =
       (double)*(float *)(lVar12 + 0xa8) * __return_storage_ptr__->SphereRadius;
  return __return_storage_ptr__;
}

// CreateMeshObject @ 14da25a90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObject * __thiscall
FFastGeoSkinnedMeshComponentBase::CreateMeshObject(FFastGeoSkinnedMeshComponentBase *this)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkeletalMeshObject *pFVar2;
  
  pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x120))();
  pFVar2 = FSkinnedMeshSceneProxyDesc::CreateMeshObject(pFVar1);
  return pFVar2;
}

// CreateSceneProxy @ 14da25d80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoSkinnedMeshComponentBase::CreateSceneProxy
          (FFastGeoSkinnedMeshComponentBase *this,ESceneProxyCreationError *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EPSOPrecacheProxyCreationStrategy EVar5;
  UWorld *pUVar6;
  FPrimitiveSceneProxy *pFVar7;
  FSkinnedMeshSceneProxyDesc *pFVar8;
  USkinnedAsset *pUVar9;
  FSkeletalMeshRenderData *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FSkeletalMeshRenderData *pFVar13;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  pUVar6 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if ((pUVar6 == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0x7f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  pUVar6 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  pFVar10 = (FSkeletalMeshRenderData *)0x0;
  pFVar13 = pFVar10;
  if (((pUVar6 == (UWorld *)0x0) ||
      (pFVar13 = (FSkeletalMeshRenderData *)pUVar6->Scene, pFVar13 == (FSkeletalMeshRenderData *)0x0
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Scene",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                                ,0x81,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  pFVar8 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  pUVar9 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar8);
  if ((pUVar9 == (USkinnedAsset *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkinnedAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0x84,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  cVar4 = (**(code **)(*(longlong *)&pUVar9->field_0xe0 + 0x10))();
  if ((cVar4 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SkinnedAsset->IsCompiling()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0x85,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  if (param_1 != (ESceneProxyCreationError *)0x0) {
    *param_1 = None;
  }
  bVar3 = FFastGeoPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
                    ((FFastGeoPrimitiveComponent *)this,High);
  if ((bVar3) && (EVar5 = GetPSOPrecacheProxyCreationStrategy(), EVar5 == DelayUntilPSOPrecached)) {
    if (5 < (byte)LogFastGeoStreaming._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogFastGeoStreaming);
    }
    if (param_1 != (ESceneProxyCreationError *)0x0) {
      *param_1 = WaitingPSOs;
    }
    return (FPrimitiveSceneProxy *)0x0;
  }
  (**(code **)(this->_padding_ + 0xb0))(this);
  if (this->MeshObject == (FSkeletalMeshObject *)0x0) {
    pFVar8 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
    pUVar9 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar8);
    if (pUVar9 != (USkinnedAsset *)0x0) {
      pFVar8 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
      pUVar9 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar8);
      pFVar10 = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)pUVar9 + 0x398))(pUVar9);
      goto LAB_14da25f42;
    }
  }
  else {
    pFVar10 = this->MeshObject->SkeletalMeshRenderData;
LAB_14da25f42:
    if (pFVar10 != (FSkeletalMeshRenderData *)0x0) goto LAB_14da25f69;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SkelMeshRenderData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                     ,0x9b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
LAB_14da25f69:
  if ((pFVar10->bInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkelMeshRenderData->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0x9c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  lVar11 = (**(code **)(this->_padding_ + 0x120))(this);
  if ((*(longlong *)(lVar11 + 0x48) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  if ((*(FSkeletalMeshRenderData **)(lVar11 + 0x48) != pFVar13) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.Scene == Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0xa0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  lVar1 = *(longlong *)(lVar11 + 0x18);
  lVar12 = (**(code **)((pFVar13->LODRenderData).Array.AllocatorInstance.Data + 0x410))(pFVar13);
  if ((lVar1 != lVar12) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.World == Scene->GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0xa1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  if ((*(Type *)(lVar11 + 0xb0) != (pFVar13->LODRenderData).Array.ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.FeatureLevel == Scene->GetFeatureLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0xa2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  if ((*(int *)(lVar11 + 0x98) != *(int *)((longlong)&this->_padding_ + 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.ComponentId == GetPrimitiveSceneId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0xa3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  if ((*(longlong *)(lVar11 + 0xf0) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.MeshObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoSkinnedMeshComponent.cpp"
                         ,0xa4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  FLLMScope::FLLMScope(local_res8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,SkeletalMesh,true);
  FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  lVar11 = (**(code **)(this->_padding_ + 0x128))(this);
  this->_padding_ = lVar11;
  (**(code **)(this->_padding_ + 0x130))(this);
  pFVar7 = (FPrimitiveSceneProxy *)this->_padding_;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar7;
}

// DestroyMeshObject @ 14da26aa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::DestroyMeshObject(FFastGeoSkinnedMeshComponentBase *this)

{
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
    (**(code **)(this->MeshObject->_padding_ + 0x10))();
    BeginCleanup((FDeferredCleanupInterface *)this->MeshObject);
    this->MeshObject = (FSkeletalMeshObject *)0x0;
  }
  return;
}

// DestroyRenderState @ 14da26e40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::DestroyRenderState
          (FFastGeoSkinnedMeshComponentBase *this,FFastGeoDestroyRenderStateContext *param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong local_28;
  ForAnyElementType local_20;
  undefined4 local_18;
  int local_14 [3];
  
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
    (**(code **)(this->MeshObject->_padding_ + 0x10))();
    BeginCleanup((FDeferredCleanupInterface *)this->MeshObject);
    this->MeshObject = (FSkeletalMeshObject *)0x0;
  }
  SRWLock = (PSRWLOCK)this->_padding_;
  AcquireSRWLockExclusive(SRWLock);
  if (this->_padding_ != 0) {
    if ((char)this->_padding_ != '\x03') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProxyState == EProxyCreationState::Created",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x19f,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    local_28 = lVar2;
    if (param_1 == (FFastGeoDestroyRenderStateContext *)0x0) {
      plVar4 = *(longlong **)(lVar2 + 0x220);
      local_20.Data = (FScriptContainerElement *)0x0;
      local_18 = 1;
      pcVar5 = *(code **)(*plVar4 + 0x40);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_20,1,local_14);
      *(longlong *)local_20.Data = lVar2;
      (*pcVar5)(plVar4,&local_20);
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
    }
    else {
      pFVar3 = (param_1->PrimitiveSceneProxies).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar3 + (longlong)(param_1->PrimitiveSceneProxies).ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (param_1->PrimitiveSceneProxies).ArrayNum;
      piVar1 = &(param_1->PrimitiveSceneProxies).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_1->PrimitiveSceneProxies).AllocatorInstance,piVar1);
      }
      (param_1->PrimitiveSceneProxies).ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->PrimitiveSceneProxies).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_28;
    }
    this->_padding_ = 0;
    *(undefined2 *)&this->_padding_ = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014da2703a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

// GetBodySetup @ 14da298e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UBodySetup * __thiscall
FFastGeoSkinnedMeshComponentBase::GetBodySetup(FFastGeoSkinnedMeshComponentBase *this)

{
  return (UBodySetup *)0x0;
}

// GetComponentMaterialSlotsOverlayMaterial @ 14da2a370

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
FFastGeoSkinnedMeshComponentBase::GetComponentMaterialSlotsOverlayMaterial
          (FFastGeoSkinnedMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x118))();
  return (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x118);
}

// GetDefaultMaterialSlotsOverlayMaterial @ 14da2a3f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::GetDefaultMaterialSlotsOverlayMaterial
          (FFastGeoSkinnedMeshComponentBase *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FSkinnedMeshSceneProxyDesc *this_00;
  USkinnedAsset *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 auStackX_8 [8];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  this_00 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  pUVar8 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this_00);
  if (pUVar8 != (USkinnedAsset *)0x0) {
    plVar9 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x3c8))(pUVar8);
    lVar10 = *plVar9;
    lVar5 = plVar9[1];
    pFVar11 = (FScriptContainerElement *)(lVar10 + 0x28);
    lVar12 = (longlong)(int)lVar5 * 0x30 + lVar10;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar5) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FSkeletalMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (lVar10 == lVar12) break;
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar11) && (pFVar11 < pFVar2 + (longlong)*piVar1 * 8)) &&
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
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar7 + 1;
      pUVar3 = *(UObject **)pFVar11;
      *(UObject **)(pFVar2 + (longlong)iVar7 * 8) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      lVar10 = lVar10 + 0x30;
      pFVar11 = pFVar11 + 0x30;
    }
  }
  return;
}

// GetMaterial @ 14da2a7a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
FFastGeoSkinnedMeshComponentBase::GetMaterial(FFastGeoSkinnedMeshComponentBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  FSkinnedMeshSceneProxyDesc *this_00;
  USkinnedAsset *pUVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar1)();
      return pUVar5;
    }
    if (*(longlong *)(this->_padding_ + lVar9 * 8) != 0) {
      uVar4 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(this->_padding_ + lVar9 * 8);
    }
  }
  this_00 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  pUVar6 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this_00);
  if ((((pUVar6 != (USkinnedAsset *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)&pUVar6->field_0xe0 + 0x10))(), cVar3 == '\0')) &&
      (lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6), -1 < param_1)) &&
     (param_1 < *(int *)(lVar7 + 8))) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6);
    uVar4 = 0;
    if (param_1 < (int)plVar8[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar1)();
      return pUVar5;
    }
    if (*(longlong *)(*plVar8 + lVar9 * 0x30) != 0) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6);
      uVar4 = 0;
      if (param_1 < (int)plVar8[1]) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(*plVar8 + lVar9 * 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 14da2add0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FFastGeoSkinnedMeshComponentBase::GetNumMaterials(FFastGeoSkinnedMeshComponentBase *this)

{
  char cVar1;
  FSkinnedMeshSceneProxyDesc *pFVar2;
  USkinnedAsset *pUVar3;
  longlong lVar4;
  
  pFVar2 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))();
  pUVar3 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar2);
  if (pUVar3 != (USkinnedAsset *)0x0) {
    pFVar2 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
    pUVar3 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar2);
    cVar1 = (**(code **)(*(longlong *)&pUVar3->field_0xe0 + 0x10))();
    if (cVar1 == '\0') {
      pFVar2 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
      pUVar3 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar2);
      lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x3c8))(pUVar3);
      return *(int *)(lVar4 + 8);
    }
  }
  return 0;
}

// GetOverlayMaterial @ 14da2af70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
FFastGeoSkinnedMeshComponentBase::GetOverlayMaterial(FFastGeoSkinnedMeshComponentBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x118))();
  return *(UMaterialInterface **)(lVar1 + 0x110);
}

// GetUsedMaterials @ 14da2bd40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::GetUsedMaterials
          (FFastGeoSkinnedMeshComponentBase *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FSkinnedMeshSceneProxyDesc *this_00;
  USkinnedAsset *pUVar6;
  longlong lVar7;
  int iVar8;
  undefined7 in_register_00000081;
  bool abStackX_8 [8];
  undefined8 uStack_38;
  longlong lStack_30;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> TStack_28;
  
  this_00 = (FSkinnedMeshSceneProxyDesc *)
            (**(code **)(this->_padding_ + 0x118))
                      (this,param_1,CONCAT71(in_register_00000081,param_2));
  pUVar6 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this_00);
  if (pUVar6 != (USkinnedAsset *)0x0) {
    iVar5 = (int)this->_padding_;
    lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6);
    if (iVar5 < *(int *)(lVar7 + 8)) {
      iVar5 = *(int *)(lVar7 + 8);
    }
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        uStack_38 = (**(code **)(this->_padding_ + 0x58))(this,iVar8);
        pFVar1 = (param_1->AllocatorInstance).Data;
        if ((pFVar1 <= (FScriptContainerElement *)&uStack_38) &&
           ((FScriptContainerElement *)&uStack_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
        iVar8 = iVar8 + 1;
        param_1->ArrayNum = iVar4 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = uStack_38;
      } while (iVar8 < iVar5);
    }
    TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_28.ArrayNum = 0;
    TStack_28.ArrayMax = 0;
    FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent>
              ((FFastGeoMeshComponent *)this,&TStack_28);
    abStackX_8[0] = false;
    FMaterialOverlayHelper::AppendAllOverlayMaterial(&TStack_28,param_1,abStackX_8);
    if (abStackX_8[0] != false) {
      lStack_30 = (**(code **)(this->_padding_ + 0x108))(this);
      if (lStack_30 != 0) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if ((pFVar1 <= (FScriptContainerElement *)&lStack_30) &&
           ((FScriptContainerElement *)&lStack_30 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar5 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = lStack_30;
      }
    }
    if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_28.AllocatorInstance.Data);
    }
  }
  return;
}

// InitializeSceneProxyDescDynamicProperties @ 14da2d3d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::InitializeSceneProxyDescDynamicProperties
          (FFastGeoSkinnedMeshComponentBase *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSkeletalMeshObject *pFVar6;
  longlong lVar7;
  UWorld *pUVar8;
  FSceneInterface *this_00;
  longlong local_res8;
  undefined4 uStack_c;
  
  FFastGeoPrimitiveComponent::InitializeSceneProxyDescDynamicProperties
            ((FFastGeoPrimitiveComponent *)this);
  this_00 = (FSceneInterface *)0x0;
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
    (**(code **)(this->MeshObject->_padding_ + 0x10))();
    BeginCleanup((FDeferredCleanupInterface *)this->MeshObject);
    this->MeshObject = (FSkeletalMeshObject *)0x0;
  }
  pFVar6 = (FSkeletalMeshObject *)(**(code **)(this->_padding_ + 0x110))(this);
  this->MeshObject = pFVar6;
  lVar7 = (**(code **)(this->_padding_ + 0x120))(this);
  lVar2 = this->_padding_;
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(longlong *)(lVar7 + 0x130) = lVar2;
  *(ulonglong *)(lVar7 + 0x138) = CONCAT44(uStack_c,iVar1);
  pFVar3 = (this->SkinCacheUsage).AllocatorInstance.Data;
  iVar1 = (this->SkinCacheUsage).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(FScriptContainerElement **)(lVar7 + 0x140) = pFVar3;
  *(ulonglong *)(lVar7 + 0x148) = CONCAT44(uStack_c,iVar1);
  pUVar8 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar8 != (UWorld *)0x0) {
    this_00 = pUVar8->Scene;
  }
  FSceneInterface::GetShaderPlatform(this_00);
  FMeshComponentHelper::GetMaterialRelevance<FFastGeoMeshComponent>
            ((FFastGeoMeshComponent *)&local_res8,(EShaderPlatform)this);
  *(longlong *)(lVar7 + 0xd8) = local_res8;
  *(FSkeletalMeshObject **)(lVar7 + 0xf0) = this->MeshObject;
  return;
}

// Serialize @ 14da36980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponentBase::Serialize
          (FFastGeoSkinnedMeshComponentBase *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  int *piVar6;
  uint *puVar7;
  longlong lVar8;
  byte bVar9;
  bool bVar10;
  uint local_res8 [2];
  
  FFastGeoPrimitiveComponent::Serialize((FFastGeoPrimitiveComponent *)this,param_1);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  TArrayPrivateFriend::Serialize<enum_ESkinCacheUsage,TSizedDefaultAllocator<32>_>
            (param_1,&this->SkinCacheUsage);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  bVar10 = this->bOverrideMinLod;
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36a34;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36a34:
    bVar10 = uVar4 != 0;
  }
  if (this->bOverrideMinLod != bVar10) {
    this->field_0x3e0 = this->field_0x3e0 & 0xfe | bVar10;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = this->bIncludeComponentLocationIntoBounds;
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)(bVar10 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36abb;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36abb:
    bVar10 = uVar4 != 0;
  }
  if (this->bIncludeComponentLocationIntoBounds != bVar10) {
    this->bIncludeComponentLocationIntoBounds = bVar10;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = this->bHideSkin;
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36b34;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36b34:
    bVar10 = uVar4 != 0;
  }
  if (this->bHideSkin != bVar10) {
    this->field_0x3e2 = this->field_0x3e2 & 0xfe | bVar10;
  }
  piVar2 = &this->MinLodModel;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  lVar8 = (**(code **)(this->_padding_ + 0x120))(this);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(*(byte *)(lVar8 + 0x180) & 1);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36c0f;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36c0f:
    bVar10 = uVar4 != 0;
  }
  bVar9 = *(byte *)(lVar8 + 0x180);
  if ((bool)(bVar9 & 1) != bVar10) {
    bVar9 = bVar9 & 0xfe | bVar10;
    *(byte *)(lVar8 + 0x180) = bVar9;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar9 >> 1 & 1);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36c94;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36c94:
    bVar10 = uVar4 != 0;
  }
  bVar9 = *(byte *)(lVar8 + 0x180);
  if ((bool)(bVar9 >> 1 & 1) != bVar10) {
    bVar9 = bVar9 & 0xfd | bVar10 * '\x02';
    *(byte *)(lVar8 + 0x180) = bVar9;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar9 >> 2 & 1);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36d1f;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36d1f:
    bVar10 = uVar4 != 0;
  }
  bVar9 = *(byte *)(lVar8 + 0x180);
  if ((bool)(bVar9 >> 2 & 1) != bVar10) {
    bVar9 = bVar9 & 0xfb | bVar10 << 2;
    *(byte *)(lVar8 + 0x180) = bVar9;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar9 >> 3 & 1);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36dac;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36dac:
    bVar10 = uVar4 != 0;
  }
  bVar9 = *(byte *)(lVar8 + 0x180);
  if ((bool)(bVar9 >> 3 & 1) != bVar10) {
    bVar9 = bVar9 & 0xf7 | bVar10 << 3;
    *(byte *)(lVar8 + 0x180) = bVar9;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar9 >> 4 & 1);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36e39;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36e39:
    bVar10 = uVar4 != 0;
  }
  bVar9 = *(byte *)(lVar8 + 0x180);
  if ((bool)(bVar9 >> 4 & 1) != bVar10) {
    bVar9 = bVar9 & 0xef | bVar10 << 4;
    *(byte *)(lVar8 + 0x180) = bVar9;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar9 >> 5 & 1);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14da36ec6;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
LAB_14da36ec6:
    bVar10 = uVar4 != 0;
  }
  bVar9 = *(byte *)(lVar8 + 0x180);
  if ((bool)(bVar9 >> 5 & 1) != bVar10) {
    bVar9 = bVar9 & 0xdf | bVar10 << 5;
    *(byte *)(lVar8 + 0x180) = bVar9;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar9 >> 7);
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) == 0) goto LAB_14da36f53;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
  }
  bVar10 = uVar4 != 0;
LAB_14da36f53:
  if ((bool)(*(byte *)(lVar8 + 0x180) >> 7) != bVar10) {
    *(byte *)(lVar8 + 0x180) = *(byte *)(lVar8 + 0x180) & 0x7f | bVar10 << 7;
  }
  puVar3 = (uint *)(lVar8 + 0x170);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)(lVar8 + 0x174);
  puVar1 = &param_1->field_0x2a;
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)(lVar8 + 0x178);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)(lVar8 + 0x17c);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)(lVar8 + 0x150);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)(lVar8 + 0x154);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,(TVector<double> *)(lVar8 + 0x158));
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,lVar8 + 0x100);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,lVar8 + 0x110);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                     (lVar8 + 0x118));
  return;
}

