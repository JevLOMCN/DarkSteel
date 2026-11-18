// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e86deb0

UScriptStruct * __cdecl FGeometryCollectionToCollectionDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2,
                           (UObject *)pUVar1,L"GeometryCollectionToCollectionDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
         OuterSingleton;
}

// GetType @ 14e86e030

FName __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::GetType
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionToCollectionDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e86e190

bool __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::IsA
          (FGeometryCollectionToCollectionDataflowNode_v2 *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FGeometryCollectionToCollectionDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86e1f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86e1f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86e216;
      }
    }
  }
  bVar5 = true;
LAB_14e86e216:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86e2e0

FStructOnScope * __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::NewStructOnScope
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2,
                           (UObject *)pUVar2,L"GeometryCollectionToCollectionDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86e3c0

void __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::SerializeInternal
          (FGeometryCollectionToCollectionDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2,
                           (UObject *)pUVar1,L"GeometryCollectionToCollectionDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86e43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86e480

FName __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::GetDisplayName
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollectionToCollection");
  return in_RDX;
}

// GetCategory @ 14e86e4f0

FName __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::GetCategory
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e86e520

FString * __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::GetTags
          (FGeometryCollectionToCollectionDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86e550

UScriptStruct * __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::TypedScriptStruct
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2,
                           (UObject *)pUVar1,L"GeometryCollectionToCollectionDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode_v2.
         OuterSingleton;
}

// Evaluate @ 14e86e730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::Evaluate
          (FGeometryCollectionToCollectionDataflowNode_v2 *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  UGeometryCollection *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGeometryCollection *pFVar3;
  UObject *pUVar4;
  TObjectPtr<UMaterialInterface> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  TTransform<double> *pTVar11;
  TTransform<float> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStackY_468 [32];
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> local_428;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_418;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_408;
  UGeometryCollection *local_3f8;
  FContext *local_3f0;
  FCollectionTransformFacade local_3e8;
  TObjectPtr<UStaticMesh>_u_0 local_2f8 [2];
  double local_2e8 [2];
  double local_2d8 [2];
  double local_2c8 [2];
  double local_2b8 [2];
  double local_2a8 [2];
  double local_298 [2];
  ForAnyElementType local_288;
  undefined8 local_280;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  FManagedArrayCollection local_158;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_3f0 = param_1;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FManagedArrayCollection *)puVar10 != &this->Collection) &&
       (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar10 !=
       &this->Materials)) &&
      (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar10 !=
      &this->InstancedMeshes)) &&
     ((puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)puVar10 !=
      &this->RootProxyMeshes &&
      (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5163137966440186408>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                          ,0x228,
                          "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&InstancedMeshes) || Out->IsA(&RootProxyMeshes)"
                         ), bVar7)))) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_158);
  pUVar1 = (this->GeometryCollection).field0_0x0.DebugPtr;
  uVar15 = 0;
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 0;
  local_408.ArrayMax = 0;
  local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.ArrayNum = 0;
  local_418.ArrayMax = 0;
  local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.ArrayNum = 0;
  local_428.ArrayMax = 0;
  if (pUVar1 != (UGeometryCollection *)0x0) {
    local_3f8 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FGeometryCollectionEngineConversion::ConvertGeometryCollectionToGeometryCollection
              ((TObjectPtr<UGeometryCollection>)&local_3f8,&local_158,&local_408,&local_418);
    pUVar1 = (this->GeometryCollection).field0_0x0.DebugPtr;
    local_278.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_278.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_278.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_278.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_278.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_278.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    pTVar2 = (pUVar1->GeometryCollection).SharedReferenceCount.ReferenceController;
    pFVar3 = (pUVar1->GeometryCollection).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pFVar3 != (FGeometryCollection *)0x0) {
      pUVar1 = (this->GeometryCollection).field0_0x0.DebugPtr;
      pTVar2 = (pUVar1->GeometryCollection).SharedReferenceCount.ReferenceController;
      pFVar3 = (pUVar1->GeometryCollection).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FGeometryCollection *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                (&local_3e8,(FManagedArrayCollection *)pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pTVar11 = GeometryCollection::Facades::FCollectionTransformFacade::GetRootTransform
                          (&local_3e8,&local_a8);
      local_278.Rotation.XY.m128d_f64 = *&(pTVar11->Rotation).XY.m128d_f64;
      local_278.Rotation.ZW.m128d_f64 = *&(pTVar11->Rotation).ZW.m128d_f64;
      local_278.Translation.XY.m128d_f64 = *&(pTVar11->Translation).XY.m128d_f64;
      local_278.Translation.ZW.m128d_f64 = *&(pTVar11->Translation).ZW.m128d_f64;
      local_278.Scale3D.XY.m128d_f64 = *&(pTVar11->Scale3D).XY.m128d_f64;
      local_278.Scale3D.ZW.m128d_f64 = *&(pTVar11->Scale3D).ZW.m128d_f64;
    }
    pUVar1 = (this->GeometryCollection).field0_0x0.DebugPtr;
    uVar16 = uVar15;
    uVar17 = uVar15;
    if (0 < (pUVar1->RootProxyData).ProxyMeshes.ArrayNum) {
      do {
        uVar14 = (uint)uVar15;
        local_2f8[0].DebugPtr = (UStaticMesh *)0x0;
        local_288.Data = (FScriptContainerElement *)0x0;
        uVar8 = 0;
        if ((int)uVar14 < (pUVar1->RootProxyData).ProxyMeshes.ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        local_280 = 0;
        local_2e8[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_2e8[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2e8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_2d8[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2d8[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2d8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_2c8[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2c8[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_2c8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2b8[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_2b8[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_2b8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_2a8[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2a8[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2a8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_298[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_298[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_298[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (pUVar1->RootProxyData).ProxyMeshes.AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 = *(UObject **)(pFVar13 + uVar17), pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_2f8[0] = *(TObjectPtr<UStaticMesh>_u_0 *)(pFVar13 + uVar17);
        pTVar12 = FGeometryCollectionProxyMeshData::GetMeshTransform(&pUVar1->RootProxyData,uVar14);
        local_1b8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar12->Rotation).m128_f32[1],0);
        local_1b8.Rotation.XY.m128d_f64[0] = (double)(pTVar12->Rotation).m128_f32[0];
        local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar12->Rotation).m128_f32[1] >> 0x20);
        local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar12->Rotation).m128_f32[3],0);
        local_1b8.Rotation.ZW.m128d_f64[0] = (double)(pTVar12->Rotation).m128_f32[2];
        local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar12->Rotation).m128_f32[3] >> 0x20);
        local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)(pTVar12->Translation).m128_f32[1],0);
        local_1b8.Translation.XY.m128d_f64[0] = (double)(pTVar12->Translation).m128_f32[0];
        local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar12->Translation).m128_f32[1] >> 0x20);
        local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)(pTVar12->Translation).m128_f32[3],0);
        local_1b8.Translation.ZW.m128d_f64[0] = (double)(pTVar12->Translation).m128_f32[2];
        local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar12->Translation).m128_f32[3] >> 0x20);
        local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar12->Scale3D).m128_f32[1],0);
        local_1b8.Scale3D.XY.m128d_f64[0] = (double)(pTVar12->Scale3D).m128_f32[0];
        local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar12->Scale3D).m128_f32[1] >> 0x20);
        local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar12->Scale3D).m128_f32[3],0);
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)(pTVar12->Scale3D).m128_f32[2];
        local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar12->Scale3D).m128_f32[3] >> 0x20);
        local_218.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_218.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_218.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_218.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_218.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_218,&local_1b8,&local_278);
        local_2e8[0] = local_218.Rotation.XY.m128d_f64[0];
        local_2e8[1] = local_218.Rotation.XY.m128d_f64[1];
        local_2d8[0] = local_218.Rotation.ZW.m128d_f64[0];
        local_2d8[1] = local_218.Rotation.ZW.m128d_f64[1];
        local_2c8[0] = local_218.Translation.XY.m128d_f64[0];
        local_2c8[1] = local_218.Translation.XY.m128d_f64[1];
        local_2b8[0] = local_218.Translation.ZW.m128d_f64[0];
        local_2b8[1] = local_218.Translation.ZW.m128d_f64[1];
        local_2a8[0] = local_218.Scale3D.XY.m128d_f64[0];
        local_2a8[1] = local_218.Scale3D.XY.m128d_f64[1];
        local_298[0] = local_218.Scale3D.ZW.m128d_f64[0];
        local_298[1] = local_218.Scale3D.ZW.m128d_f64[1];
        if ((-1 < (int)uVar14) &&
           ((int)uVar14 < (pUVar1->RootProxyData).MeshOverrideMaterials.ArrayNum)) {
          if (((int)uVar14 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar13 = (pUVar1->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data + uVar16;
          if ((FScriptContainerElement *)&local_288 != pFVar13) {
            iVar9 = *(int *)&pFVar13[8].field_0x0;
            pTVar5 = *(TObjectPtr<UMaterialInterface> **)&pFVar13->field_0x0;
            local_280 = CONCAT44(local_280._4_4_,iVar9);
            if ((iVar9 == 0) && (local_280._4_4_ == 0)) {
              local_280 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar9,local_280._4_4_,&local_288,iVar9,
                         (int *)((longlong)&local_280 + 4));
              ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                        (local_288.Data,pTVar5,iVar9);
            }
          }
        }
        iVar9 = local_428.ArrayNum;
        if (local_428.ArrayNum == local_428.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1080,&local_428.AllocatorInstance,&local_428.ArrayMax);
        }
        local_428.ArrayNum = iVar9 + 1;
        FDataflowRootProxyMesh::FDataflowRootProxyMesh
                  ((FDataflowRootProxyMesh *)
                   (local_428.AllocatorInstance.Data + (longlong)iVar9 * 0x80),
                   (FDataflowRootProxyMesh *)&local_2f8[0].ObjectPtr);
        if (local_288.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data);
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar16 = uVar16 + 0x10;
        uVar17 = uVar17 + 8;
        param_1 = local_3f0;
      } while ((int)(uVar14 + 1) <
               (((this->GeometryCollection).field0_0x0.DebugPtr)->RootProxyData).ProxyMeshes.
               ArrayNum);
    }
  }
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_158,&this->Collection);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_408,&this->Materials);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_418,&this->InstancedMeshes);
  FDataflowNode::
  SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_428,&this->RootProxyMeshes);
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)local_428.AllocatorInstance.Data,local_428.ArrayNum);
  if ((FDataflowRootProxyMesh *)local_428.AllocatorInstance.Data != (FDataflowRootProxyMesh *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_418.AllocatorInstance.Data,
             local_418.ArrayNum);
  if ((FGeometryCollectionAutoInstanceMesh *)local_418.AllocatorInstance.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_418.AllocatorInstance.Data);
  }
  if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_158);
  return;
}

// FGeometryCollectionToCollectionDataflowNode_v2 @ 14e91ec10

FGeometryCollectionToCollectionDataflowNode_v2 * __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::FGeometryCollectionToCollectionDataflowNode_v2
          (FGeometryCollectionToCollectionDataflowNode_v2 *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FGeometryCollectionToCollectionDataflowNode_v2__6B_;
  (this->GeometryCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Collection;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Materials;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->InstancedMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->RootProxyMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FGeometryCollectionToCollectionDataflowNode_v2 @ 14e91edc0

FGeometryCollectionToCollectionDataflowNode_v2 * __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::FGeometryCollectionToCollectionDataflowNode_v2
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometryCollectionToCollectionDataflowNode_v2__6B_;
  (this->GeometryCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  return this;
}

// ~FGeometryCollectionToCollectionDataflowNode_v2 @ 14e933580

void __thiscall
FGeometryCollectionToCollectionDataflowNode_v2::~FGeometryCollectionToCollectionDataflowNode_v2
          (FGeometryCollectionToCollectionDataflowNode_v2 *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)(this->RootProxyMeshes).AllocatorInstance.Data,
             (this->RootProxyMeshes).ArrayNum);
  pFVar1 = (this->RootProxyMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

