// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 15

// StaticClass @ 14e6d8500

UClass * __cdecl UInterchangeOBJTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeOBJTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeOBJTranslator",
               &Z_Registration_Info_UClass_UInterchangeOBJTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeOBJTranslator,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeOBJTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeOBJTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeOBJTranslator.InnerSingleton;
}

// UInterchangeOBJTranslator @ 14e6e09c0

UInterchangeOBJTranslator * __thiscall
UInterchangeOBJTranslator::UInterchangeOBJTranslator
          (UInterchangeOBJTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  (this->ObjDataPtr).Ptr = (FObjData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  return this;
}

// UInterchangeOBJTranslator @ 14e6e0a10

UInterchangeOBJTranslator * __thiscall
UInterchangeOBJTranslator::UInterchangeOBJTranslator(UInterchangeOBJTranslator *this)

{
  FObjectInitializer *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = FObjectInitializer::Get();
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  puVar2 = ::operator_new(0x120);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = UE::Core::Private::PimplPtr::DeleterFunc<FObjData>;
    puVar2[1] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0x11] = 0;
    puVar2[0x13] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1d] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x7c) = 0x80;
    *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x84) = 0;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xcc) = 0x80;
    *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0xd4) = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    (this->ObjDataPtr).Ptr = (FObjData *)(puVar2 + 2);
    return this;
  }
  (this->ObjDataPtr).Ptr = (FObjData *)&DAT_00000010;
  return this;
}

// ~UInterchangeOBJTranslator @ 14e6e1620

void __thiscall
UInterchangeOBJTranslator::~UInterchangeOBJTranslator(UInterchangeOBJTranslator *this)

{
  FObjData *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  pFVar1 = (this->ObjDataPtr).Ptr;
  if (pFVar1 != (FObjData *)0x0) {
    (*(code *)pFVar1[-1].CurrentMaterial.Data.AllocatorInstance.Data)(&pFVar1[-1].CurrentMaterial);
  }
  this->_padding_ = (longlong)&___7IInterchangeTexturePayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeMeshPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetMeshPayloadData @ 14e6f0350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
UInterchangeOBJTranslator::GetMeshPayloadData
          (UInterchangeOBJTranslator *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,TTransform<double> *param_2)

{
  ForAnyElementType _Src;
  int iVar1;
  undefined1 auStackY_148 [32];
  FAttributeKey local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  long64 lStack_a0;
  long64 local_98;
  ulong64 local_90;
  undefined8 local_88;
  _RTL_CRITICAL_SECTION local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_cc = 0x80;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8 = 0xffffffff;
  local_88._0_4_ = 0.1;
  local_88._4_4_ = 0;
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  _Src = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance;
  local_108.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Key.Data.ArrayMax = 0;
  iVar1 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_108.Key.Data.ArrayNum = iVar1;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_108,iVar1,&local_108.Key.Data.ArrayMax);
    memcpy(local_108.Key.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
  }
  UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
            ((FAttributeStorage *)local_f8,&local_108,param_2,None);
  if (local_108.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Key.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x10))(this,__return_storage_ptr__,param_1,local_f8);
  DeleteCriticalSection(&local_80);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,0,local_f8._8_4_);
  iVar1 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

// GetMeshPayloadData @ 14e6f0560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
UInterchangeOBJTranslator::GetMeshPayloadData
          (UInterchangeOBJTranslator *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,FAttributeStorage *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  void *_Src;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FMeshDescription *pFVar8;
  UInterchangeResultError_Generic *pUVar9;
  FText *pFVar10;
  uint uVar11;
  ForAnyElementType *pFVar12;
  undefined1 auStackY_738 [32];
  FText local_6f8;
  ForAnyElementType local_6e8;
  int local_6e0;
  int iStack_6dc;
  FScriptContainerElement *local_6d8;
  ForAnyElementType local_6d0;
  undefined8 local_6c8;
  FMeshDescription local_6b8;
  FScriptContainerElement *local_3f8;
  undefined8 local_3f0;
  int local_3e8;
  FScriptContainerElement *local_3e0;
  undefined8 local_3d8;
  FScriptContainerElement *local_3d0;
  undefined8 local_3c8;
  FScriptContainerElement *local_3c0;
  undefined8 local_3b8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_3b0;
  undefined8 local_3a8;
  FScriptContainerElement *local_3a0;
  undefined8 local_398;
  FScriptContainerElement *local_390;
  undefined8 local_388;
  bool local_380;
  TTransform<double> local_378;
  FMeshDescription local_318;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_738;
  bVar6 = false;
  bVar5 = true;
  local_6f8.TextData.Reference = (ITextData *)0x0;
  local_6f8._12_4_ = 0;
  local_6d8 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance.
              Data;
  uVar11 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_378.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_378.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_378.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_378.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_378.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_378.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_378.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_378.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_378.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_378.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_378.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_378.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_378.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_378.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_378.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_378.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_378.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_378.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_6f8.Flags = uVar11;
  if (uVar11 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,0,(ForAnyElementType *)&local_6f8,uVar11,(int *)&local_6f8.field_0xc);
    memcpy(local_6f8.TextData.Reference,local_6d8,(longlong)(int)uVar11 * 2);
  }
  UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TTransform<double>,void>
            (param_2,(FAttributeKey *)&local_6f8,&local_378);
  if (local_6f8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_6f8.TextData.Reference);
  }
  FMeshDescription::FMeshDescription(&local_6b8);
  local_3f8 = (FScriptContainerElement *)0x0;
  local_3f0 = 0;
  local_3e0 = (FScriptContainerElement *)0x0;
  local_3d8 = 0;
  local_380 = false;
  pFVar8 = FObjData::MakeMeshDescriptionForGroup
                     ((FObjData *)this->_padding_,&local_318,&param_1->UniqueId,&local_378);
  if (&local_6b8 != pFVar8) {
    TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                *)&local_6b8,
               (TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                *)pFVar8);
  }
  local_6b8.VertexElements = pFVar8->VertexElements;
  local_6b8.VertexInstanceElements = pFVar8->VertexInstanceElements;
  local_6b8.UVElements = pFVar8->UVElements;
  local_6b8.EdgeElements = pFVar8->EdgeElements;
  local_6b8.TriangleElements = pFVar8->TriangleElements;
  local_6b8.PolygonElements = pFVar8->PolygonElements;
  local_6b8.PolygonGroupElements = pFVar8->PolygonGroupElements;
  local_6b8.VertexInstanceVertices.ArrayPtr = (pFVar8->VertexInstanceVertices).ArrayPtr;
  local_6b8.EdgeVertices.ArrayPtr = (pFVar8->EdgeVertices).ArrayPtr;
  local_6b8.EdgeVertices.Extent = (pFVar8->EdgeVertices).Extent;
  local_6b8.EdgeVertices._12_4_ = *(undefined4 *)&(pFVar8->EdgeVertices).field_0xc;
  local_6b8.TriangleVertexInstances.ArrayPtr = (pFVar8->TriangleVertexInstances).ArrayPtr;
  local_6b8.TriangleVertexInstances.Extent = (pFVar8->TriangleVertexInstances).Extent;
  local_6b8.TriangleVertexInstances._12_4_ =
       *(undefined4 *)&(pFVar8->TriangleVertexInstances).field_0xc;
  local_6b8.TrianglePolygons.ArrayPtr = (pFVar8->TrianglePolygons).ArrayPtr;
  local_6b8.TriangleEdges.ArrayPtr = (pFVar8->TriangleEdges).ArrayPtr;
  local_6b8.TriangleEdges.Extent = (pFVar8->TriangleEdges).Extent;
  local_6b8.TriangleEdges._12_4_ = *(undefined4 *)&(pFVar8->TriangleEdges).field_0xc;
  local_6b8.TriangleVertices.ArrayPtr = (pFVar8->TriangleVertices).ArrayPtr;
  local_6b8.TriangleVertices.Extent = (pFVar8->TriangleVertices).Extent;
  local_6b8.TriangleVertices._12_4_ = *(undefined4 *)&(pFVar8->TriangleVertices).field_0xc;
  local_6b8.TriangleUVs.ArrayPtr = (pFVar8->TriangleUVs).ArrayPtr;
  local_6b8.TriangleUVs.Extent = (pFVar8->TriangleUVs).Extent;
  local_6b8.TriangleUVs._12_4_ = *(undefined4 *)&(pFVar8->TriangleUVs).field_0xc;
  local_6b8.TrianglePolygonGroups.ArrayPtr = (pFVar8->TrianglePolygonGroups).ArrayPtr;
  local_6b8.PolygonPolygonGroups.ArrayPtr = (pFVar8->PolygonPolygonGroups).ArrayPtr;
  local_6b8.VertexPositions.ArrayPtr = (pFVar8->VertexPositions).ArrayPtr;
  FMeshElementIndexer::operator=
            (&local_6b8.VertexToVertexInstances,&pFVar8->VertexToVertexInstances);
  FMeshElementIndexer::operator=(&local_6b8.VertexToEdges,&pFVar8->VertexToEdges);
  FMeshElementIndexer::operator=
            (&local_6b8.VertexInstanceToTriangles,&pFVar8->VertexInstanceToTriangles);
  FMeshElementIndexer::operator=(&local_6b8.EdgeToTriangles,&pFVar8->EdgeToTriangles);
  FMeshElementIndexer::operator=(&local_6b8.UVToTriangles,&pFVar8->UVToTriangles);
  FMeshElementIndexer::operator=(&local_6b8.PolygonToTriangles,&pFVar8->PolygonToTriangles);
  FMeshElementIndexer::operator=
            (&local_6b8.PolygonGroupToTriangles,&pFVar8->PolygonGroupToTriangles);
  FMeshElementIndexer::operator=(&local_6b8.PolygonGroupToPolygons,&pFVar8->PolygonGroupToPolygons);
  FMeshDescription::~FMeshDescription(&local_318);
  bVar7 = FStaticMeshOperations::ValidateAndFixData(&local_6b8,&param_1->UniqueId);
  if (!bVar7) {
    pUVar9 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                       ((UInterchangeTranslatorBase *)&this[-1]._padding_);
    lVar4 = this[-1]._padding_;
    if (lVar4 == 0) {
      local_6d0.Data = (FScriptContainerElement *)0x0;
      local_6c8 = 0;
      pFVar12 = &local_6d0;
    }
    else {
      local_6e8.Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(lVar4 + 0x30);
      _Src = *(void **)(lVar4 + 0x28);
      local_6e0 = iVar2;
      if (iVar2 == 0) {
        pFVar12 = &local_6e8;
        iStack_6dc = 0;
        bVar6 = true;
        bVar5 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,&local_6e8,iVar2,&iStack_6dc);
        memcpy(local_6e8.Data,_Src,(longlong)iVar2 * 2);
        pFVar12 = &local_6e8;
        bVar6 = true;
        bVar5 = false;
      }
    }
    plVar1 = &pUVar9->_padding_;
    if ((ForAnyElementType *)plVar1 != pFVar12) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar12->Data;
      pFVar12->Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pUVar9->_padding_ = *(undefined4 *)&pFVar12[1].Data;
      uVar3 = *(undefined4 *)((longlong)&pFVar12[1].Data + 4);
      pFVar12[1].Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = uVar3;
    }
    if ((bVar5) && (local_6d0.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_6d0.Data);
    }
    if ((bVar6) && (local_6e8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_6e8.Data);
    }
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_6f8,L"InterchangeOBJTranslator",
                         L"GetMeshPayloadData_ValidateMeshDescriptionFail",
                         L"Invalid mesh data (NAN) was found and fix to zero. Mesh render can be bad."
                        );
    FText::operator=(&pUVar9->Text,pFVar10);
    if (local_6f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6f8.TextData.Reference + 0x10))();
    }
  }
  FMeshDescription::FMeshDescription((FMeshDescription *)__return_storage_ptr__,&local_6b8);
  (__return_storage_ptr__->TypedValue).JointNames.AllocatorInstance.Data = local_3f8;
  (__return_storage_ptr__->TypedValue).JointNames.ArrayNum = (int)local_3f0;
  (__return_storage_ptr__->TypedValue).JointNames.ArrayMax = local_3f0._4_4_;
  (__return_storage_ptr__->TypedValue).VertexOffset = local_3e8;
  (__return_storage_ptr__->TypedValue).MorphTargetName.Data.AllocatorInstance.Data = local_3e0;
  (__return_storage_ptr__->TypedValue).MorphTargetName.Data.ArrayNum = (int)local_3d8;
  (__return_storage_ptr__->TypedValue).MorphTargetName.Data.ArrayMax = local_3d8._4_4_;
  (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.bIsSet = local_380;
  local_3f8 = (FScriptContainerElement *)0x0;
  local_3f0 = 0;
  local_3e0 = (void *)0x0;
  local_3d8 = 0;
  if (local_380 != false) {
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.Transforms.
    AllocatorInstance.Data = local_3d0;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.Transforms.ArrayNum =
         (int)local_3c8;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.Transforms.ArrayMax =
         local_3c8._4_4_;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartIndices.
    AllocatorInstance.Data = local_3c0;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartIndices.ArrayNum =
         (int)local_3b8;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartIndices.ArrayMax =
         local_3b8._4_4_;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartUids.
    AllocatorInstance.Data = (FScriptContainerElement *)local_3b0;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartUids.ArrayNum =
         (int)local_3a8;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartUids.ArrayMax =
         local_3a8._4_4_;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.BoneInfluences.
    AllocatorInstance.Data = local_3a0;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.BoneInfluences.
    ArrayNum = (int)local_398;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.BoneInfluences.
    ArrayMax = local_398._4_4_;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.
    NumInfluencesPerInstance.AllocatorInstance.Data = local_390;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.
    NumInfluencesPerInstance.ArrayNum = (int)local_388;
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.
    NumInfluencesPerInstance.ArrayMax = local_388._4_4_;
    local_388 = 0;
    local_3d0 = (FScriptContainerElement *)0x0;
    local_3c8 = 0;
    local_3c0 = (FScriptContainerElement *)0x0;
    local_3b8 = 0;
    local_3b0 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
    local_3a8 = 0;
    local_3a0 = (FScriptContainerElement *)0x0;
    local_398 = 0;
    local_390 = (FScriptContainerElement *)0x0;
  }
  __return_storage_ptr__->bIsSet = true;
  if (local_380 != false) {
    if (local_390 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390);
    }
    if (local_3a0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0);
    }
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(local_3b0,(int)local_3a8);
    if (local_3b0 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_3b0);
    }
    if (local_3c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0);
    }
    if (local_3d0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0);
    }
  }
  if (local_3e0 != (void *)0x0) {
    FMemory::Free(local_3e0);
  }
  DestructItems<FString,int>((FString *)local_3f8,(int)local_3f0);
  if (local_3f8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8);
  }
  FMeshDescription::~FMeshDescription(&local_6b8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e6f0ed0

UClass * __cdecl UInterchangeOBJTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeOBJTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeOBJTranslator",
               &Z_Registration_Info_UClass_UInterchangeOBJTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeOBJTranslator,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeOBJTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeOBJTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeOBJTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e6f1190

EInterchangeTranslatorAssetType __thiscall
UInterchangeOBJTranslator::GetSupportedAssetTypes(UInterchangeOBJTranslator *this)

{
  return Meshes|Materials;
}

// GetSupportedFormats @ 14e6f11a0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeOBJTranslator::GetSupportedFormats
          (UInterchangeOBJTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((!GInterchangeEnableOBJImport) && (!GIsAutomationTesting)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_18,L"obj;OBJ File Format");
  local_20 = CONCAT44(local_20._4_4_,1);
  local_28.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FString,FString,int>(local_28.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = (int)local_20;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6f12a0

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeOBJTranslator::GetTexturePayloadData
          (UInterchangeOBJTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  TOptional<UE::Interchange::FImportImage> *pTVar6;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 local_28 [2];
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_18;
  
  local_18.Object = (FAnalyticsHelper *)this[-1]._padding_;
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this[-1]._padding_;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Interchange::Private::FScopedTranslator::FScopedTranslator
            ((FScopedTranslator *)&local_28[0].ObjectPtr,param_1,
             (UInterchangeResultsContainer *)this[-1]._padding_,&local_18);
  bVar3 = UE::Interchange::Private::FScopedTranslator::IsValid
                    ((FScopedTranslator *)&local_28[0].ObjectPtr);
  if ((bVar3) && (local_28[0].DebugPtr != (UInterchangeTranslatorBase *)0x0)) {
    pUVar4 = Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress
                       ((UObjectBaseUtility *)local_28[0].DebugPtr,pUVar4);
    if (plVar5 != (longlong *)0x0) {
      if (param_1 != (FString *)param_2) {
        pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        ::FString::FString((FString *)param_2,param_1);
        if (*(int *)((longlong)&param_2->field0_0x0 + 0xc) == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar2)();
            return pTVar6;
          }
        }
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,__return_storage_ptr__,param_1,param_2);
      goto LAB_14e6f13b1;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8318688749919667740>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeOBJTranslator.cpp"
                     ,0x61c,"TextureTranslator");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar2)();
    return pTVar6;
  }
  __return_storage_ptr__->bIsSet = false;
LAB_14e6f13b1:
  UE::Interchange::Private::FScopedTranslator::~FScopedTranslator
            ((FScopedTranslator *)&local_28[0].ObjectPtr);
  return __return_storage_ptr__;
}

// GetTranslatorType @ 14e6f1900

EInterchangeTranslatorType __thiscall
UInterchangeOBJTranslator::GetTranslatorType(UInterchangeOBJTranslator *this)

{
  EInterchangeTranslatorType EVar1;
  
  EVar1 = Assets;
  if (GInterchangeEnableOBJLevelImport) {
    EVar1 = Scenes;
  }
  return EVar1;
}

// StaticRegisterNativesUInterchangeOBJTranslator @ 14e6fcda0

void __cdecl UInterchangeOBJTranslator::StaticRegisterNativesUInterchangeOBJTranslator(void)

{
  return;
}

// Translate @ 14e6fcdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UInterchangeOBJTranslator::Translate
          (UInterchangeOBJTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  TMap<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
  *pTVar1;
  TMap<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  void *pvVar5;
  FObjData *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  UInterchangeResultError_Generic *pUVar18;
  FString *pFVar19;
  FText *pFVar20;
  UInterchangeSceneNode *pUVar21;
  FString *pFVar22;
  UClass *pUVar23;
  UInterchangeMeshNode *this_00;
  TBox<double> *pTVar24;
  FGroupData *pFVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  UInterchangeMaterialInstanceNode *this_01;
  UInterchangeTexture2DNode *pUVar27;
  FLinearColor_u_0 *pFVar28;
  FString *pFVar29;
  byte bVar30;
  longlong *plVar31;
  ForAnyElementType FVar32;
  undefined ***pppuVar33;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar34;
  char cVar35;
  int iVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  TVector<float>_u_0 *pTVar39;
  UInterchangeBaseNodeContainer *pUVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  undefined1 *puVar44;
  uint *puVar45;
  TBitArray<FDefaultBitArrayAllocator> *pTVar46;
  uint uVar47;
  FScriptContainerElement *pFVar48;
  undefined1 *puVar49;
  uint uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStackY_ab8 [32];
  char local_a78 [3];
  undefined1 local_a75;
  undefined1 local_a74;
  bool local_a73;
  bool local_a72;
  bool local_a71;
  bool local_a70;
  bool local_a6f [3];
  uint local_a6c;
  UInterchangeBaseNodeContainer *local_a68;
  undefined1 local_a60 [4];
  uint local_a5c;
  FString local_a58;
  int local_a48 [2];
  int local_a40;
  uint uStack_a3c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a38;
  uint local_a30;
  uint uStack_a2c;
  uint uStack_a28;
  undefined4 uStack_a24;
  int local_a20 [2];
  TVector<float>_u_0 local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  TMap<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
  *local_9b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9b0;
  undefined8 local_990;
  TVector<float>_u_0 local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_938;
  int local_918;
  TBitArray<FDefaultBitArrayAllocator> *local_910;
  int local_908;
  TVector<float>_u_0 local_904;
  UInterchangeOBJTranslator *local_8f8;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  TMap<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
  *local_8c0;
  int iStack_8b8;
  uint uStack_8b4;
  undefined1 *local_8b0;
  undefined4 uStack_8a8;
  int iStack_8a4;
  int local_8a0;
  undefined4 uStack_89c;
  int iStack_898;
  undefined4 uStack_894;
  TMap<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
  *local_890;
  FString local_888;
  TMap<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
  *local_878;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_870;
  undefined8 uStack_850;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  code *local_808;
  FObjData **local_800;
  FString local_7f8;
  FString local_7e8;
  wchar_t *local_7d8;
  int iStack_7d0;
  undefined4 uStack_7cc;
  FScriptContainerElement *local_7c8;
  int iStack_7c0;
  undefined4 uStack_7bc;
  FString local_7b8;
  FString local_7a8;
  wchar_t *local_798;
  int iStack_790;
  undefined4 uStack_78c;
  FScriptContainerElement *local_788;
  int iStack_780;
  undefined4 uStack_77c;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  initializer_list<TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>_>
  local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FObjData *local_628;
  TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
  *local_620;
  char *local_618;
  TStringView<wchar_t> local_608;
  TStringView<wchar_t> local_5f8;
  FString local_5e8;
  FString local_5d8;
  TStringView<wchar_t> local_5c8;
  TStringView<wchar_t> local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FLinearColor_u_0 local_528;
  FLinearColor_u_0 local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4b8;
  FText local_4a8;
  FString local_498;
  FLinearColor local_488;
  FString local_478;
  FString local_468;
  TMap<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
  *local_458;
  undefined8 uStack_450;
  TBitArray<FDefaultBitArrayAllocator> *local_448;
  undefined8 uStack_440;
  FLinearColor local_428 [2];
  undefined4 local_3fc;
  undefined1 local_3f8 [128];
  undefined1 local_378 [128];
  TMap<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
  *local_2f8;
  undefined8 uStack_2f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d8;
  TBitArray<FDefaultBitArrayAllocator> **local_2d0;
  code *local_2c8 [2];
  undefined **local_2b8;
  code *local_2b0;
  undefined ***local_2a0;
  code *local_298 [2];
  undefined **local_288;
  code *local_280;
  undefined ***local_270;
  code *local_268 [2];
  undefined **local_258;
  code *local_250;
  undefined ***local_240;
  code *local_238 [2];
  undefined **local_228;
  code *local_220;
  undefined ***local_210;
  code *local_208 [2];
  undefined **local_1f8;
  code *local_1f0;
  undefined ***local_1e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  code *local_1c0;
  undefined ***local_1b0;
  code *local_1a8 [2];
  undefined **local_198;
  code *local_190;
  undefined ***local_180;
  TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>
  local_178;
  FString *local_168;
  code **local_160;
  FString *local_158;
  code **local_150;
  FString *local_148;
  code **local_140;
  FString *local_138;
  code **local_130;
  FString *local_128;
  code **local_120;
  FString *local_118;
  code **local_110;
  FString *local_108;
  code **local_100;
  TBox<double> local_f8;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_ab8;
  local_a48[0] = 0;
  local_a58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a58.Data.ArrayNum = *(int *)(this->_padding_ + 0x30);
  lVar37 = (longlong)local_a58.Data.ArrayNum;
  pvVar5 = *(void **)(this->_padding_ + 0x28);
  local_a68 = param_1;
  local_8f8 = this;
  if (local_a58.Data.ArrayNum == 0) {
    local_a58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a58.Data.ArrayNum,0,(ForAnyElementType *)&local_a58,local_a58.Data.ArrayNum
               ,&local_a58.Data.ArrayMax);
    memcpy(local_a58.Data.AllocatorInstance.Data,pvVar5,lVar37 * 2);
  }
  bVar15 = FPaths::FileExists(&local_a58);
  if (bVar15) {
    iVar36 = local_a58.Data.ArrayNum + -1;
    if (local_a58.Data.ArrayNum == 0) {
      iVar36 = 0;
    }
    ::FString::AssignRange
              (&((this->ObjDataPtr).Ptr)->ObjFilename,
               (wchar_t *)local_a58.Data.AllocatorInstance.Data,iVar36);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&local_818,L"o");
      local_2d0 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
      pcStack_2e0 = UE::Interchange::ObjParserUtils::ParseObjectName;
      local_178.Key = &local_818;
      pTStack_2e8 = (TBitArray<FDefaultBitArrayAllocator> *)
                    &
                    ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_178.Value = (TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)> *)&local_2f8;
      local_2f8 = (TMap<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
                   *)UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      ::FString::FString(&local_828,L"v");
      local_1b0 = (undefined ***)0x0;
      local_1c0 = UE::Interchange::ObjParserUtils::ParseVertexPosition;
      local_168 = &local_828;
      local_1c8 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_160 = local_1d8;
      local_1d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      ::FString::FString(&local_838,L"vt");
      local_1e0 = (undefined ***)0x0;
      local_1f0 = UE::Interchange::ObjParserUtils::ParseTextureCoordinate;
      local_158 = &local_838;
      local_1f8 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_150 = local_208;
      local_208[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      ::FString::FString(&local_848,L"vn");
      local_210 = (undefined ***)0x0;
      local_220 = UE::Interchange::ObjParserUtils::ParseNormalVector;
      local_148 = &local_848;
      local_228 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_140 = local_238;
      local_238[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      ::FString::FString(&local_638,L"f");
      local_240 = (undefined ***)0x0;
      local_250 = UE::Interchange::ObjParserUtils::ParseFace;
      local_138 = &local_638;
      local_258 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_130 = local_268;
      local_268[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      ::FString::FString(&local_648,L"g");
      local_180 = (undefined ***)0x0;
      local_190 = UE::Interchange::ObjParserUtils::ParseGroup;
      local_128 = &local_648;
      local_198 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_120 = local_1a8;
      local_1a8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      ::FString::FString(&local_658,L"mtllib");
      local_270 = (undefined ***)0x0;
      local_280 = UE::Interchange::ObjParserUtils::ParseMaterialLib;
      local_288 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118 = &local_658;
      local_298[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      local_110 = local_298;
      ::FString::FString(&local_668,L"usemtl");
      local_2a0 = (undefined ***)0x0;
      local_2b0 = UE::Interchange::ObjParserUtils::ParseUseMaterial;
      local_108 = &local_668;
      local_2b8 = &
                  ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_100 = local_2c8;
      local_2c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
                     ::Call;
      local_678._First = &local_178;
      local_678._Last =
           (TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>
            *)&local_f8;
      TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
      ::
      TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
                (&ObjKeywordMap,&local_678);
      if (local_2c8[0] != (code *)0x0) {
        pppuVar33 = &local_2b8;
        if (local_2a0 != (undefined ***)0x0) {
          pppuVar33 = local_2a0;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.Data.AllocatorInstance.Data);
      }
      if (local_298[0] != (code *)0x0) {
        pppuVar33 = &local_288;
        if (local_270 != (undefined ***)0x0) {
          pppuVar33 = local_270;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.Data.AllocatorInstance.Data);
      }
      if (local_1a8[0] != (code *)0x0) {
        pppuVar33 = &local_198;
        if (local_180 != (undefined ***)0x0) {
          pppuVar33 = local_180;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.Data.AllocatorInstance.Data);
      }
      if (local_268[0] != (code *)0x0) {
        pppuVar33 = &local_258;
        if (local_240 != (undefined ***)0x0) {
          pppuVar33 = local_240;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.Data.AllocatorInstance.Data);
      }
      if (local_238[0] != (code *)0x0) {
        pppuVar33 = &local_228;
        if (local_210 != (undefined ***)0x0) {
          pppuVar33 = local_210;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.Data.AllocatorInstance.Data);
      }
      if (local_208[0] != (code *)0x0) {
        pppuVar33 = &local_1f8;
        if (local_1e0 != (undefined ***)0x0) {
          pppuVar33 = local_1e0;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.Data.AllocatorInstance.Data);
      }
      if (local_1d8[0] != (code *)0x0) {
        pppuVar33 = &local_1c8;
        if (local_1b0 != (undefined ***)0x0) {
          pppuVar33 = local_1b0;
        }
        (*(code *)(*pppuVar33)[2])();
      }
      if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data.AllocatorInstance.Data);
      }
      if (local_2f8 !=
          (TMap<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
           *)0x0) {
        ppTVar34 = &pTStack_2e8;
        if (local_2d0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
          ppTVar34 = local_2d0;
        }
        (*(code *)((*ppTVar34)->AllocatorInstance).SecondaryData)();
      }
      if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_818.Data.AllocatorInstance.Data);
      }
      atexit(`UInterchangeOBJTranslator::Translate'::__l2::
             _dynamic_atexit_destructor_for__ObjKeywordMap__);
      _Init_thread_footer(&::_TSS0);
    }
    local_628 = (this->ObjDataPtr).Ptr;
    local_618 = local_a78;
    FVar32.Data = (FScriptContainerElement *)L"";
    if (local_a58.Data.ArrayNum != 0) {
      FVar32.Data = local_a58.Data.AllocatorInstance.Data;
    }
    local_800 = &local_628;
    local_808 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Interchange::ObjParserUtils::ParseFile'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
                ::Call;
    local_a78[0] = '\x01';
    local_620 = &ObjKeywordMap;
    FFileHelper::LoadFileToStringWithLineVisitor
              ((wchar_t *)FVar32.Data,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_808
              );
    local_a78[2] = local_a78[0];
    cVar35 = local_a78[0];
    if (local_a78[0] == '\0') goto LAB_14e6fcfec;
    pFVar6 = (this->ObjDataPtr).Ptr;
    if ((*(int *)&(pFVar6->Groups).field_0x8 != *(int *)&(pFVar6->Groups).field_0x34) ||
       (*(int *)&(pFVar6->Materials).field_0x8 != *(int *)&(pFVar6->Materials).field_0x34)) {
      pUVar21 = NewObject<UInterchangeSceneNode>((UObject *)param_1);
      FPaths::GetBaseFilename(&local_958,&local_a58,true);
      FVar32.Data = local_958.Data.AllocatorInstance.Data;
      if (local_958.Data.ArrayNum < 2) {
        pFVar19 = ::FString::FString(&local_498,L"Null");
        ::FString::ConcatCF(&local_948,L"\\Scene\\",pFVar19);
      }
      else {
        local_9e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_958.Data.ArrayNum,0,(ForAnyElementType *)&local_9e8,
                   local_958.Data.ArrayNum,&local_9e8.Data.ArrayMax);
        memcpy(local_9e8.Data.AllocatorInstance.Data,FVar32.Data,
               (longlong)local_958.Data.ArrayNum * 2);
        ::FString::ConcatCF(&local_948,L"\\Scene\\",&local_9e8);
        local_498.Data.AllocatorInstance.Data = local_9e8.Data.AllocatorInstance.Data;
      }
      local_a6c = 0;
      uVar50 = 0;
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_7f8,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (param_1,(UInterchangeBaseNode *)pUVar21,&local_948,&local_958,TranslatedScene,
                 &local_7f8);
      if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
      }
      pFVar6 = (this->ObjDataPtr).Ptr;
      local_938._padding_._0_4_ = 0;
      local_938._padding_._4_4_ = 1;
      local_938.UnvisitedBitMask = 0xffffffff;
      pTVar46 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar6->Groups).field_0x10;
      local_938.CurrentBitIndex = 0;
      local_938.BaseBitIndex = 0;
      pTVar1 = &pFVar6->Groups;
      local_938.Array = pTVar46;
      local_910 = pTVar46;
      local_890 = pTVar1;
      if (*(int *)&(pFVar6->Groups).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_938);
      }
      uVar42 = *(uint *)&(pFVar6->Groups).field_0x28;
      uVar41 = uVar42 & 0xffffffe0;
      TStack_9b0._padding_ = CONCAT44(local_938._padding_._4_4_,(undefined4)local_938._padding_);
      TStack_9b0.CurrentBitIndex = local_938.CurrentBitIndex;
      TStack_9b0.UnvisitedBitMask = local_938.UnvisitedBitMask;
      TStack_9b0._28_4_ = local_938._28_4_;
      TStack_9b0.BaseBitIndex = local_938.BaseBitIndex;
      local_990 = CONCAT44(local_990._4_4_,
                           *(int *)&(pFVar6->Groups).field_0x8 -
                           *(int *)&(pFVar6->Groups).field_0x34);
      TStack_9b0.Array = local_938.Array;
      iVar36 = (int)uVar42 >> 5;
      TStack_870.Array = local_938.Array;
      uStack_850 = local_990;
      local_a5c = uVar42;
      local_9b8 = pTVar1;
      local_878 = pTVar1;
      TStack_870._padding_ = TStack_9b0._padding_;
      TStack_870._16_8_ = TStack_9b0._16_8_;
      TStack_870._24_8_ = TStack_9b0._24_8_;
      if (((int)uVar42 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      uVar4 = *(uint *)&(pFVar6->Groups).field_0x28;
      uVar47 = 0;
      if (uVar42 != uVar4) {
        puVar49 = *(undefined1 **)&(pFVar6->Groups).field_0x20;
        puVar44 = (undefined1 *)pTVar46;
        if (puVar49 != (undefined1 *)0x0) {
          puVar44 = puVar49;
        }
        uVar42 = -1 << ((byte)uVar42 & 0x1f) & *(uint *)(puVar44 + (longlong)iVar36 * 4);
        while (uVar47 = uVar50, uVar42 == 0) {
          lVar37 = (longlong)iVar36;
          uVar41 = uVar41 + 0x20;
          iVar36 = iVar36 + 1;
          uVar42 = uVar4;
          local_a5c = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
          goto LAB_14e6fd300;
          uVar42 = *(uint *)(puVar44 + lVar37 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
        lVar37 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar37 == 0; lVar37 = lVar37 + -1) {
          }
        }
        local_918 = (int)lVar37;
        uVar42 = (uVar41 - 1) + local_918;
        local_a5c = uVar42;
        if ((int)uVar4 < (int)uVar42) {
          uVar42 = uVar4;
          local_a5c = uVar4;
        }
      }
LAB_14e6fd300:
      while( true ) {
        pTVar1 = local_878;
        if (*(int *)&local_878->field_0x8 - *(int *)&local_878->field_0x34 != (int)uStack_850) {
          local_a78[1] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a78 + 1);
        }
        if (((TStack_870.CurrentBitIndex == uVar42) && (TStack_870.Array == pTVar46)) &&
           (pTVar1 == local_890)) break;
        lVar37 = *(longlong *)pTVar1;
        iVar36 = *(int *)(lVar37 + 8 + (longlong)TStack_870.CurrentBitIndex * 0x28);
        pFVar19 = (FString *)(lVar37 + (longlong)TStack_870.CurrentBitIndex * 0x28);
        if (iVar36 < 2) {
          uVar47 = uVar47 | 4;
          pFVar22 = ::FString::FString(&local_478,L"Null");
        }
        else {
          pFVar38 = (pFVar19->Data).AllocatorInstance.Data;
          local_9d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar47 = uVar47 | 8;
          local_9d8.Data.ArrayNum = iVar36;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar36,0,(ForAnyElementType *)&local_9d8,iVar36,&local_9d8.Data.ArrayMax);
          memcpy(local_9d8.Data.AllocatorInstance.Data,pFVar38,(longlong)iVar36 * 2);
          pFVar22 = &local_9d8;
        }
        ::FString::ConcatCF(&local_7a8,L"\\Actor\\",pFVar22);
        if (((uVar47 & 8) != 0) &&
           (uVar47 = uVar47 & 0xfffffff7,
           local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
        }
        if (((uVar47 & 4) != 0) &&
           (uVar47 = uVar47 & 0xfffffffb,
           local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_478.Data.AllocatorInstance.Data);
        }
        iVar36 = (pFVar19->Data).ArrayNum;
        if (iVar36 < 2) {
          uVar47 = uVar47 | 0x10;
          local_a6c = uVar47;
          pFVar22 = ::FString::FString(&local_468,L"Null");
        }
        else {
          pFVar38 = (pFVar19->Data).AllocatorInstance.Data;
          uVar47 = uVar47 | 0x20;
          local_9c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a6c = uVar47;
          local_9c8.Data.ArrayNum = iVar36;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar36,0,(ForAnyElementType *)&local_9c8,iVar36,&local_9c8.Data.ArrayMax);
          memcpy(local_9c8.Data.AllocatorInstance.Data,pFVar38,(longlong)iVar36 * 2);
          pFVar22 = &local_9c8;
        }
        ::FString::ConcatCF(&local_8f0,L"\\Mesh\\",pFVar22);
        if (((uVar47 & 0x20) != 0) &&
           (uVar47 = uVar47 & 0xffffffdf, local_a6c = uVar47,
           local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
        }
        if (((uVar47 & 0x10) != 0) &&
           (local_a6c = uVar47 & 0xffffffef,
           local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_468.Data.AllocatorInstance.Data);
        }
        pUVar40 = local_a68;
        pUVar21 = NewObject<UInterchangeSceneNode>((UObject *)local_a68);
        UInterchangeBaseNodeContainer::SetupNode
                  (pUVar40,(UInterchangeBaseNode *)pUVar21,&local_7a8,pFVar19,TranslatedScene,
                   &local_948);
        UInterchangeSceneNode::SetCustomAssetInstanceUid(pUVar21,&local_8f0);
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar40,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar23 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_378,pUVar23);
        local_378._8_8_ = pUVar40;
        this_00 = (UInterchangeMeshNode *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_378);
        if (local_378._64_8_ != 0) {
          plVar31 = (longlong *)(local_378 + 0x50);
          if ((longlong *)local_378._104_8_ != (longlong *)0x0) {
            plVar31 = (longlong *)local_378._104_8_;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        ::FString::FString(&local_7e8,L"");
        UInterchangeBaseNodeContainer::SetupNode
                  (pUVar40,(UInterchangeBaseNode *)this_00,&local_8f0,pFVar19,TranslatedAsset,
                   &local_7e8);
        if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
        }
        local_a75 = 1;
        (**(code **)(this_00->_padding_ + 0x300))(this_00,pFVar19,&local_a75);
        pTVar24 = FObjData::GetGroupBoundingBox((this->ObjDataPtr).Ptr,&local_f8,pFVar19);
        UInterchangeMeshNode::SetCustomBoundingBox(this_00,pTVar24);
        pFVar6 = (this->ObjDataPtr).Ptr;
        pFVar25 = TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                  ::Find((TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                          *)&pFVar6->Groups,pFVar19);
        if (pFVar25 == (FGroupData *)0x0) {
          iVar36 = 0;
        }
        else {
          pTVar26 = FObjData::GetVertexIndicesUsedByGroup(pFVar6,&local_4b8,pFVar25);
          iVar36 = pTVar26->ArrayNum;
          if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b8.AllocatorInstance.Data);
          }
        }
        iVar43 = 0;
        local_a20[0] = iVar36;
        UInterchangeMeshNode::SetCustomVertexCount(this_00,local_a20);
        pFVar25 = TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                  ::Find((TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                          *)&((this->ObjDataPtr).Ptr)->Groups,pFVar19);
        if (pFVar25 == (FGroupData *)0x0) {
          iVar43 = 0;
        }
        else {
          iVar36 = (pFVar25->FaceGroups).ArrayNum;
          pFVar38 = (pFVar25->FaceGroups).AllocatorInstance.Data;
          pFVar48 = pFVar38 + (longlong)iVar36 * 0x20;
          while( true ) {
            if ((pFVar25->FaceGroups).ArrayNum != iVar36) {
              local_a74 = 0;
              `TCheckedPointerIterator<FObjData::FFaceGroupData_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_a74);
            }
            if (pFVar38 == pFVar48) break;
            iVar43 = iVar43 + *(int *)(pFVar38 + 0x18);
            pFVar38 = pFVar38 + 0x20;
          }
        }
        local_a48[0] = iVar43;
        UInterchangeMeshNode::SetCustomPolygonCount(this_00,local_a48);
        local_a73 = true;
        UInterchangeMeshNode::SetCustomHasVertexNormal(this_00,&local_a73);
        local_a72 = false;
        UInterchangeMeshNode::SetCustomHasVertexBinormal(this_00,&local_a72);
        local_a71 = false;
        UInterchangeMeshNode::SetCustomHasVertexTangent(this_00,&local_a71);
        local_a70 = false;
        UInterchangeMeshNode::SetCustomHasSmoothGroup(this_00,&local_a70);
        local_a6f[0] = false;
        UInterchangeMeshNode::SetCustomHasVertexColor(this_00,local_a6f);
        iVar36 = pFVar19[1].Data.ArrayNum;
        pFVar38 = pFVar19[1].Data.AllocatorInstance.Data;
        pFVar48 = pFVar38 + (longlong)iVar36 * 0x20;
        while( true ) {
          if (pFVar19[1].Data.ArrayNum != iVar36) {
            local_a6f[1] = false;
            `TCheckedPointerIterator<FObjData::FFaceGroupData_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_a6f + 1);
          }
          pTVar46 = local_910;
          if (pFVar38 == pFVar48) break;
          if (1 < *(int *)(pFVar38 + 8)) {
            local_7d8 = L"";
            iStack_7d0 = 0;
            pFVar22 = UE::Interchange::ObjTranslatorUtils::MakeMaterialInstanceNodeName
                                (&local_5e8,(FString *)pFVar38);
            local_608._12_4_ = uStack_7cc;
            local_608.Size = iStack_7d0;
            local_608.DataPtr = local_7d8;
            local_7c8 = (pFVar22->Data).AllocatorInstance.Data;
            iVar43 = (pFVar22->Data).ArrayNum;
            iStack_7c0 = iVar43 + -1;
            if (iVar43 == 0) {
              iStack_7c0 = 0;
            }
            local_5f8._12_4_ = uStack_7bc;
            local_5f8.Size = iStack_7c0;
            local_5f8.DataPtr = (wchar_t *)local_7c8;
            UInterchangeMaterialInstanceNode::MakeNodeUid(&local_7b8,&local_5f8,&local_608);
            if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
            }
            UInterchangeMeshNode::SetSlotMaterialDependencyUid
                      (this_00,(FString *)pFVar38,&local_7b8);
            if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
            }
          }
          pFVar38 = pFVar38 + 0x20;
        }
        if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
        }
        if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
        }
        TStack_870.UnvisitedBitMask = TStack_870.UnvisitedBitMask & ~TStack_870._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_870);
        this = local_8f8;
        uVar42 = local_a5c;
        uVar47 = local_a6c;
      }
      pFVar6 = (this->ObjDataPtr).Ptr;
      iStack_8b8 = 0;
      local_8a0 = 0;
      puVar49 = &(pFVar6->Materials).field_0x10;
      iVar36 = *(int *)&(pFVar6->Materials).field_0x28;
      pTVar2 = &pFVar6->Materials;
      uStack_8b4 = 1;
      iStack_8a4 = iStack_8b8;
      if (iVar36 != 0) {
        puVar45 = *(uint **)&(pFVar6->Materials).field_0x20;
        if (puVar45 == (uint *)0x0) {
          puVar45 = (uint *)puVar49;
        }
        uStack_8b4 = *puVar45;
        while (uStack_8b4 == 0) {
          lVar37 = (longlong)iStack_8b8;
          local_8a0 = local_8a0 + 0x20;
          iStack_8b8 = iStack_8b8 + 1;
          uStack_8b4 = 1;
          iStack_8a4 = iVar36;
          if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_8b8)
          goto LAB_14e6fd8f0;
          uStack_8b4 = puVar45[lVar37 + 1];
        }
        uStack_8b4 = -uStack_8b4 & uStack_8b4;
        uVar3 = (ulonglong)uStack_8b4 * 2 + 1;
        lVar37 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar37 == 0; lVar37 = lVar37 + -1) {
          }
        }
        local_908 = (int)lVar37;
        iStack_8a4 = local_8a0 + -1 + local_908;
        if (iVar36 < iStack_8a4) {
          iStack_8a4 = iVar36;
        }
      }
LAB_14e6fd8f0:
      uVar50 = *(uint *)&(pFVar6->Materials).field_0x28;
      bVar30 = (byte)uVar50 & 0x1f;
      uStack_a3c = 1 << bVar30;
      uStack_89c = local_3fc;
      uVar41 = uVar50 & 0xffffffe0;
      iStack_898 = *(int *)&(pFVar6->Materials).field_0x8 - *(int *)&(pFVar6->Materials).field_0x34;
      uVar42 = -1 << bVar30;
      iVar43 = (int)uVar50 >> 5;
      uStack_8a8 = 0xffffffff;
      TStack_9b0._padding_ = CONCAT44(uStack_8b4,iStack_8b8);
      TStack_9b0.CurrentBitIndex = iStack_8a4;
      TStack_9b0.UnvisitedBitMask = 0xffffffff;
      TStack_9b0._28_4_ = local_3fc;
      TStack_9b0.BaseBitIndex = local_8a0;
      local_990 = CONCAT44(uStack_894,iStack_898);
      local_a40 = iVar43;
      pTStack_a38 = (TBitArray<FDefaultBitArrayAllocator> *)puVar49;
      local_a30 = uVar42;
      uStack_a2c = uVar50;
      uStack_a28 = uVar41;
      local_9b8 = (TMap<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                   *)pTVar2;
      TStack_9b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar49;
      local_8c0 = pTVar2;
      local_8b0 = puVar49;
      if ((((int)uVar50 < 0) || (iVar36 < (int)uVar50)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      fVar14 = __real_3fc28f5c;
      fVar13 = __real_3f4ccccd;
      fVar12 = __real_3dcccccd;
      uVar47 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar11 = __real_3f800000;
      fVar10 = __real_38d1b717;
      uVar4 = *(uint *)&(pFVar6->Materials).field_0x28;
      if (uVar50 != uVar4) {
        puVar44 = *(undefined1 **)&(pFVar6->Materials).field_0x20;
        if (puVar44 != (undefined1 *)0x0) {
          puVar49 = puVar44;
        }
        uVar42 = uVar42 & *(uint *)(puVar49 + (longlong)iVar43 * 4);
        while (uVar42 == 0) {
          uStack_a28 = uVar41 + 0x20;
          local_a40 = iVar43 + 1;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_a40)
          goto LAB_14e6fda46;
          uVar42 = *(uint *)(puVar49 + (longlong)iVar43 * 4 + 4);
          local_a30 = 0xffffffff;
          uVar41 = uStack_a28;
          iVar43 = local_a40;
        }
        uStack_a3c = -uVar42 & uVar42;
        uVar3 = (ulonglong)uStack_a3c * 2 + 1;
        lVar37 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar37 == 0; lVar37 = lVar37 + -1) {
          }
        }
        uStack_a2c = (int)lVar37 + -1 + uVar41;
        if ((int)uVar4 < (int)uStack_a2c) {
LAB_14e6fda46:
          uStack_a2c = uVar4;
        }
      }
      uStack_450 = CONCAT44(uStack_a3c,local_a40);
      uStack_440 = (code *)CONCAT44(uStack_a2c,local_a30);
      uStack_2d8 = CONCAT44(uStack_a24,uStack_a28);
      pTStack_2e8 = pTStack_a38;
      local_448 = pTStack_a38;
      uVar50 = local_a6c;
      local_458 = pTVar2;
      local_2f8 = pTVar2;
      uStack_2f0 = uStack_450;
      pcStack_2e0 = uStack_440;
      while( true ) {
        pTVar1 = local_9b8;
        if (*(int *)&local_9b8->field_0x8 - *(int *)&local_9b8->field_0x34 != (int)local_990) {
          `TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FMaterialData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a60);
        }
        if (((TStack_9b0.CurrentBitIndex == uStack_440._4_4_) && (TStack_9b0.Array == local_448)) &&
           (pTVar1 == (TMap<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                       *)local_458)) break;
        pFVar19 = (FString *)((longlong)TStack_9b0.CurrentBitIndex * 400 + *(longlong *)pTVar1);
        local_798 = L"";
        iStack_790 = 0;
        iVar36 = (pFVar19->Data).ArrayNum;
        if (iVar36 < 2) {
          uVar50 = uVar50 | 1;
          pFVar22 = ::FString::FString(&local_5d8,L"Null");
        }
        else {
          local_9f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar38 = (pFVar19->Data).AllocatorInstance.Data;
          uVar50 = uVar50 | 2;
          local_9f8.Data.ArrayNum = iVar36;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar36,0,(ForAnyElementType *)&local_9f8,iVar36,&local_9f8.Data.ArrayMax);
          memcpy(local_9f8.Data.AllocatorInstance.Data,pFVar38,(longlong)iVar36 * 2);
          pFVar22 = &local_9f8;
        }
        ::FString::ConcatCF(&local_8e0,L"MAT_",pFVar22);
        if (((uVar50 & 2) != 0) &&
           (uVar50 = uVar50 & 0xfffffffd,
           local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
        }
        if (((uVar50 & 1) != 0) &&
           (uVar50 = uVar50 & 0xfffffffe,
           local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
        }
        local_5c8._12_4_ = uStack_78c;
        local_5c8.Size = iStack_790;
        local_788 = local_8e0.Data.AllocatorInstance.Data;
        local_5c8.DataPtr = local_798;
        iStack_780 = local_8e0.Data.ArrayNum + -1;
        if (local_8e0.Data.ArrayNum == 0) {
          iStack_780 = 0;
        }
        local_5b8._12_4_ = uStack_77c;
        local_5b8.Size = iStack_780;
        local_5b8.DataPtr = (wchar_t *)local_8e0.Data.AllocatorInstance.Data;
        UInterchangeMaterialInstanceNode::MakeNodeUid(&local_888,&local_5b8,&local_5c8);
        if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
        }
        pUVar40 = local_a68;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_a68,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar23 = Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_3f8,pUVar23);
        local_3f8._8_8_ = pUVar40;
        this_01 = (UInterchangeMaterialInstanceNode *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3f8);
        if (local_3f8._64_8_ != 0) {
          plVar31 = (longlong *)(local_3f8 + 0x50);
          if ((longlong *)local_3f8._104_8_ != (longlong *)0x0) {
            plVar31 = (longlong *)local_3f8._104_8_;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        ::FString::FString(&local_778,
                           L"/InterchangeAssets/Materials/PBRSurfaceMaterial_MR.PBRSurfaceMaterial_MR"
                          );
        UInterchangeMaterialInstanceNode::SetCustomParent(this_01,&local_778);
        if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_778.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_768,L"");
        UInterchangeBaseNodeContainer::SetupNode
                  (pUVar40,(UInterchangeBaseNode *)this_01,&local_888,pFVar19,TranslatedAsset,
                   &local_768);
        if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_768.Data.AllocatorInstance.Data);
        }
        bVar9 = true;
        bVar8 = false;
        local_a78[0] = '\0';
        bVar15 = true;
        bVar17 = UE::Interchange::ObjTranslatorUtils::HandlePbrAttributes
                           (local_a68,(FMaterialData *)(pFVar19 + 1),this_01);
        if (!bVar17) {
          bVar9 = false;
          switch(((FMaterialData *)(pFVar19 + 1))->IlluminationModel) {
          case 0:
            ::FString::FString(&local_758,
                               L"/InterchangeAssets/Materials/UnlitMaterial.UnlitMaterial");
            UInterchangeMaterialInstanceNode::SetCustomParent(this_01,&local_758);
            if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_758.Data.AllocatorInstance.Data);
            }
            pFVar22 = ::FName::ToString(&UE::Interchange::Materials::Unlit::Parameters::UnlitColor,
                                        &local_5a8);
            UE::Interchange::ObjTranslatorUtils::AddTexturedColoredInput
                      (local_a68,this_01,pFVar22,
                       (TVector<float> *)((longlong)&pFVar19[1].Data.AllocatorInstance.Data + 4),
                       (FTextureParameter *)&pFVar19[4].Data.ArrayNum);
            bVar8 = true;
            if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
            }
            goto LAB_14e6fe110;
          case 1:
            bVar15 = false;
            break;
          case 3:
          case 4:
          case 8:
          case 9:
            bVar8 = true;
            break;
          case 6:
            bVar8 = true;
          case 7:
            local_a78[0] = '\x01';
          }
          ::FString::FString(&local_748,
                             L"/InterchangeAssets/Materials/PhongSurfaceMaterial.PhongSurfaceMaterial"
                            );
          UInterchangeMaterialInstanceNode::SetCustomParent(this_01,&local_748);
          if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_748.Data.AllocatorInstance.Data);
          }
          fVar55 = (float)pFVar19[1].Data.ArrayNum;
          fVar53 = *(float *)((longlong)&pFVar19[1].Data.AllocatorInstance.Data + 4);
          if (fVar53 <= fVar55) {
            fVar55 = fVar53;
          }
          fVar53 = (float)pFVar19[1].Data.ArrayMax;
          if (fVar53 <= fVar55) {
            fVar55 = fVar53;
          }
          if (0.0 <= fVar55) {
            local_904._0_8_ = *(undefined8 *)((longlong)&pFVar19[1].Data.AllocatorInstance.Data + 4)
            ;
            pTVar39 = &local_904;
            local_904._s_0.Z = (float)pFVar19[1].Data.ArrayMax;
          }
          else {
            local_988._s_0.X = 0.8;
            pTVar39 = &local_988;
            local_988._s_0.Y = 0.8;
            local_988._s_0.Z = 0.8;
          }
          pFVar22 = ::FName::ToString(&UE::Interchange::Materials::Lambert::Parameters::DiffuseColor
                                      ,&local_598);
          pUVar40 = local_a68;
          UE::Interchange::ObjTranslatorUtils::AddTexturedColoredInput
                    (local_a68,this_01,pFVar22,(TVector<float> *)&pTVar39->_s_0,
                     (FTextureParameter *)&pFVar19[4].Data.ArrayNum);
          if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_598.Data.AllocatorInstance.Data);
          }
          if (bVar15) {
            pFVar22 = ::FName::ToString(&UE::Interchange::Materials::Phong::Parameters::
                                         SpecularColor,&local_588);
            pUVar40 = local_a68;
            UE::Interchange::ObjTranslatorUtils::AddTexturedColoredInput
                      (local_a68,this_01,pFVar22,(TVector<float> *)&pFVar19[2].Data.ArrayMax,
                       (FTextureParameter *)&pFVar19[7].Data.ArrayNum);
            if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_588.Data.AllocatorInstance.Data);
            }
            ::FName::ToString(&UE::Interchange::Materials::Phong::Parameters::Shininess,&local_978);
            pUVar27 = UE::Interchange::ObjTranslatorUtils::CreateTexture2DNode
                                (pUVar40,(FTextureParameter *)&pFVar19[0xd].Data.ArrayNum);
            fVar55 = (float)pFVar19[0x10].Data.ArrayNum;
            if (pUVar27 == (UInterchangeTexture2DNode *)0x0) {
              if (0.0 <= fVar55) {
                UInterchangeMaterialInstanceNode::AddScalarParameterValue(this_01,&local_978,fVar55)
                ;
              }
            }
            else {
              if (fVar55 < 0.0) {
                fVar55 = fVar11;
              }
              pFVar22 = UInterchangeBaseNode::GetUniqueID
                                  ((UInterchangeBaseNode *)pUVar27,&local_578);
              ::FString::ConcatFC(&local_738,&local_978,L"Map");
              UInterchangeMaterialInstanceNode::AddTextureParameterValue(this_01,&local_738,pFVar22)
              ;
              if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_738.Data.AllocatorInstance.Data);
              }
              if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_578.Data.AllocatorInstance.Data);
              }
              UInterchangeMaterialInstanceNode::AddScalarParameterValue
                        (this_01,&local_978,fVar55 * fVar12);
              pUVar40 = local_a68;
            }
            if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_978.Data.AllocatorInstance.Data);
            }
          }
          ::FName::ToString(&UE::Interchange::Materials::Phong::Parameters::AmbientColor,&local_8d0)
          ;
          if (!bVar8) {
            fVar55 = *(float *)((longlong)&pFVar19[2].Data.AllocatorInstance.Data + 4);
            fVar53 = *(float *)&pFVar19[2].Data.AllocatorInstance.Data;
            if (fVar53 <= fVar55) {
              fVar55 = fVar53;
            }
            fVar53 = (float)pFVar19[2].Data.ArrayNum;
            if (fVar53 <= fVar55) {
              fVar55 = fVar53;
            }
            fVar53 = fVar13;
            fVar54 = fVar13;
            local_a18._s_0.Z = fVar13;
            if (0.0 <= fVar55) {
              pFVar38 = pFVar19[2].Data.AllocatorInstance.Data;
              fVar53 = SUB84(pFVar38,0);
              fVar54 = (float)((ulonglong)pFVar38 >> 0x20);
              local_a18._s_0.Z = (float)pFVar19[2].Data.ArrayNum;
            }
            local_a18._0_8_ = CONCAT44(fVar54,fVar53);
            pUVar27 = UE::Interchange::ObjTranslatorUtils::CreateTexture2DNode
                                (pUVar40,(FTextureParameter *)(pFVar19 + 6));
            if (pUVar27 == (UInterchangeTexture2DNode *)0x0) {
              uVar51 = local_a18._s_0.X;
              if (local_a18._s_0.Y <= local_a18._s_0.X) {
                uVar51 = local_a18._s_0.Y;
              }
              if (local_a18._s_0.Z <= (float)uVar51) {
                uVar51 = local_a18._s_0.Z;
              }
              if (0.0 <= (float)uVar51) {
                FLinearColor::FLinearColor(&local_488,(TVector<float> *)&local_a18._s_0);
                UInterchangeMaterialInstanceNode::AddVectorParameterValue
                          (this_01,&local_8d0,&local_488);
              }
            }
            else {
              ::FString::ConcatFC(&local_728,&local_8d0,L"Map");
              pFVar22 = UInterchangeBaseNode::GetUniqueID
                                  ((UInterchangeBaseNode *)pUVar27,&local_568);
              UInterchangeMaterialInstanceNode::AddTextureParameterValue(this_01,&local_728,pFVar22)
              ;
              if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_568.Data.AllocatorInstance.Data);
              }
              if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_728.Data.AllocatorInstance.Data);
              }
            }
          }
          bVar8 = bVar9;
          if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
          }
        }
LAB_14e6fe110:
        ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Opacity,&local_968);
        pUVar27 = UE::Interchange::ObjTranslatorUtils::CreateTexture2DNode
                            (local_a68,(FTextureParameter *)(pFVar19 + 0xc));
        if (pUVar27 == (UInterchangeTexture2DNode *)0x0) {
          bVar15 = UE::Interchange::ObjTranslatorUtils::AddTexturedWeightedInput
                             (local_a68,this_01,&local_968,(float *)(pFVar19 + 0x10),
                              (FTextureParameter *)&pFVar19[10].Data.ArrayNum);
          if ((!bVar15) &&
             ((fVar55 = *(float *)&pFVar19[0x10].Data.AllocatorInstance.Data, 0.0 <= fVar55 ||
              ((fVar55 = *(float *)((longlong)&pFVar19[0x10].Data.AllocatorInstance.Data + 4),
               0.0 <= fVar55 && (fVar55 = fVar11 - fVar55, 0.0 <= fVar55)))))) {
            UInterchangeMaterialInstanceNode::AddScalarParameterValue(this_01,&local_968,fVar55);
            goto LAB_14e6fe1f6;
          }
        }
        else {
          pFVar22 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar27,&local_548);
          ::FString::ConcatFC(&local_718,&local_968,L"Map");
          UInterchangeMaterialInstanceNode::AddTextureParameterValue(this_01,&local_718,pFVar22);
          if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_718.Data.AllocatorInstance.Data);
          }
          if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_548.Data.AllocatorInstance.Data);
          }
LAB_14e6fe1f6:
          if (bVar9) {
            ::FString::FString(&local_708,
                               L"/InterchangeAssets/Materials/ThinTranslucentMaterial_MR.ThinTranslucentMaterial_MR"
                              );
            UInterchangeMaterialInstanceNode::SetCustomParent(this_01,&local_708);
            FVar32.Data = local_708.Data.AllocatorInstance.Data;
          }
          else {
            ::FString::FString(&local_6f8,
                               L"/InterchangeAssets/Materials/PhongSurfaceTranslucentMaterial.PhongSurfaceTranslucentMaterial"
                              );
            UInterchangeMaterialInstanceNode::SetCustomParent(this_01,&local_6f8);
            FVar32.Data = local_6f8.Data.AllocatorInstance.Data;
          }
          if (FVar32.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar32.Data);
          }
        }
        if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_968.Data.AllocatorInstance.Data);
        }
        if (!bVar8) {
          pFVar22 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::EmissiveColor
                                      ,&local_538);
          pUVar40 = local_a68;
          UE::Interchange::ObjTranslatorUtils::AddTexturedColoredInput
                    (local_a68,this_01,pFVar22,(TVector<float> *)&pFVar19[3].Data.ArrayNum,
                     (FTextureParameter *)(pFVar19 + 9));
          if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_538.Data.AllocatorInstance.Data);
          }
          fVar55 = (float)pFVar19[0xf].Data.ArrayMax;
          if ((0.0 <= fVar55) || (fVar55 = fVar14, local_a78[0] != '\0')) {
            ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::IndexOfRefraction,
                              &local_6e8);
            UInterchangeMaterialInstanceNode::AddScalarParameterValue(this_01,&local_6e8,fVar55);
            if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
            }
          }
          fVar55 = (((TVector<float>_u_0 *)&pFVar19[0xf].Data)->_s_0).X;
          fVar53 = *(float *)((longlong)&pFVar19[0xf].Data.AllocatorInstance.Data + 4);
          fVar54 = (float)pFVar19[0xf].Data.ArrayNum;
          fVar52 = fVar55;
          if (fVar53 <= fVar55) {
            fVar52 = fVar53;
          }
          if (fVar54 <= fVar52) {
            fVar52 = fVar54;
          }
          if (fVar52 < 0.0) {
LAB_14e6fe36d:
            if (local_a78[0] != '\0') {
              if (fVar52 >= 0.0) goto LAB_14e6fe375;
              pFVar28 = &local_528;
              local_528 = FLinearColor::White.field0_0x0;
              goto LAB_14e6fe398;
            }
          }
          else {
            if ((((float)((uint)(fVar55 - UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) &
                         uVar47) <= fVar10) &&
                ((float)((uint)(fVar53 - UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y) &
                        uVar47) <= fVar10)) &&
               ((float)((uint)(fVar54 - UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) &
                       uVar47) <= fVar10)) goto LAB_14e6fe36d;
LAB_14e6fe375:
            pFVar28 = &FLinearColor::FLinearColor(local_428,(TVector<float> *)(pFVar19 + 0xf))->
                       field0_0x0;
LAB_14e6fe398:
            local_518._0_8_ = *(undefined8 *)&(pFVar28->_s_0).R;
            local_518._8_4_ = *(float *)((longlong)pFVar28 + 8);
            local_518._12_4_ = *(float *)((longlong)pFVar28 + 0xc);
            ::FName::ToString(&UE::Interchange::Materials::ThinTranslucent::Parameters::
                               TransmissionColor,&local_6d8);
            UInterchangeMaterialInstanceNode::AddVectorParameterValue
                      (this_01,&local_6d8,(FLinearColor *)&local_518._s_0);
            if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
            }
          }
          pUVar27 = UE::Interchange::ObjTranslatorUtils::CreateTexture2DNode
                              (pUVar40,(FTextureParameter *)(pFVar19 + 0x16));
          if (pUVar27 == (UInterchangeTexture2DNode *)0x0) {
            iVar36 = *(int *)&pFVar19[0x15].Data.AllocatorInstance.Data;
            if (iVar36 < 2) goto LAB_14e6fe628;
            pvVar5 = *(void **)&pFVar19[0x14].Data.ArrayNum;
            local_a08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a08.Data.ArrayNum = iVar36;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar36,0,(ForAnyElementType *)&local_a08,iVar36,&local_a08.Data.ArrayMax)
            ;
            memcpy(local_a08.Data.AllocatorInstance.Data,pvVar5,(longlong)iVar36 * 2);
            pFVar22 = FPaths::GetBaseFilename(&local_4e8,&local_a08,true);
            UE::Interchange::ObjTranslatorUtils::MakeTextureNodeName(&local_688,pFVar22);
            if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
            }
            pUVar27 = UE::Interchange::ObjTranslatorUtils::CreateTexture2DNode
                                (pUVar40,&local_a08,&local_688);
            if (pUVar27 != (UInterchangeTexture2DNode *)0x0) {
              pFVar22 = UInterchangeBaseNode::GetUniqueID
                                  ((UInterchangeBaseNode *)pUVar27,&local_4c8);
              pFVar29 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Normal,
                                          &local_4d8);
              ::FString::ConcatFC(&local_6b8,pFVar29,L"Map");
              UInterchangeMaterialInstanceNode::AddTextureParameterValue(this_01,&local_6b8,pFVar22)
              ;
              if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
              }
              if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
              }
              if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
              }
              fVar55 = (float)pFVar19[0x15].Data.ArrayNum;
              ::FString::FString(&local_6a8,L"NormalMapWeight");
              UInterchangeMaterialInstanceNode::AddScalarParameterValue(this_01,&local_6a8,fVar55);
              if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
              }
              ::FString::FString(&local_698,L"bHasBump");
              UInterchangeMaterialInstanceNode::AddStaticSwitchParameterValue
                        (this_01,&local_698,true);
              if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_698.Data.AllocatorInstance.Data);
              }
            }
            FVar32.Data = local_a08.Data.AllocatorInstance.Data;
            if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_688.Data.AllocatorInstance.Data);
              FVar32.Data = local_a08.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar19 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar27,&local_4f8);
            pFVar22 = ::FName::ToString(&UE::Interchange::Materials::Common::Parameters::Normal,
                                        &local_508);
            ::FString::ConcatFC(&local_6c8,pFVar22,L"Map");
            UInterchangeMaterialInstanceNode::AddTextureParameterValue(this_01,&local_6c8,pFVar19);
            if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
            }
            FVar32.Data = local_4f8.Data.AllocatorInstance.Data;
            if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_508.Data.AllocatorInstance.Data);
              FVar32.Data = local_4f8.Data.AllocatorInstance.Data;
            }
          }
          if (FVar32.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar32.Data);
          }
        }
LAB_14e6fe628:
        if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_888.Data.AllocatorInstance.Data);
        }
        TStack_9b0.UnvisitedBitMask = TStack_9b0.UnvisitedBitMask & ~TStack_9b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9b0);
      }
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
      cVar35 = local_a78[2];
      if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.Data.AllocatorInstance.Data);
        cVar35 = local_a78[2];
      }
      goto LAB_14e6fcfec;
    }
    pUVar18 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                        ((UInterchangeTranslatorBase *)this);
    pFVar19 = FPaths::GetBaseFilename(&local_558,&local_a58,true);
    ::FString::operator=((FString *)&pUVar18->_padding_,pFVar19);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_4a8,L"InterchangeOBJTranslator",L"EmptyFileError",
                         L"The OBJ file appears to be empty.");
    FText::operator=(&pUVar18->Text,pFVar20);
    if (local_4a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
    }
  }
  cVar35 = '\0';
LAB_14e6fcfec:
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  return (bool)cVar35;
}

// _getUObject @ 14e6ffda0

UObject * __thiscall UInterchangeOBJTranslator::_getUObject(UInterchangeOBJTranslator *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e6ffdac

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeOBJTranslator::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeOBJTranslator::_getUObject_adjustor_8__(UInterchangeOBJTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeOBJTranslator *)&this[-1].ObjDataPtr);
  return (UObject *)pUVar1;
}

