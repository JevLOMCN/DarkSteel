// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 50

// StaticClass @ 149859ac0

UClass * __cdecl UPCGPolygon2DData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DData",
               &Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton,
               StaticRegisterNativesUPCGPolygon2DData,0x260,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPolygon2DData>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14985b110

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
`UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  UPCGPolygon2DData *pUVar1;
  bool in_R9B;
  
  pUVar1 = CastChecked<UPCGPolygon2DData,UPCGData>((UPCGData *)param_2);
  UPCGPolygon2DData::CreateStaticAccessor
            ((UPCGPolygon2DData *)param_1,(FPCGAttributePropertySelector *)pUVar1,param_3,in_R9B);
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b1f0

TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> __cdecl
`UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  longlong lVar1;
  UPCGPolygon2DData *pUVar2;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar3;
  bool in_R9B;
  undefined8 *local_res8;
  
  pUVar2 = CastChecked<UPCGPolygon2DData,UPCGData_const_>((UPCGData *)param_2);
  TVar3 = UPCGPolygon2DData::CreateStaticAccessor
                    ((UPCGPolygon2DData *)&local_res8,(FPCGAttributePropertySelector *)pUVar2,
                     param_3,in_R9B);
  lVar1 = (TVar3.Ptr)->_padding_;
  (TVar3.Ptr)->_padding_ = 0;
  param_1->_padding_ = lVar1;
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b410

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __cdecl
`UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  UPCGPolygon2DData *pUVar2;
  FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *pFVar3;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *pFVar4;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  pUVar2 = CastChecked<UPCGPolygon2DData,UPCGData>((UPCGData *)param_2);
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_3) + 8);
  (**(code **)(*(longlong *)pUVar2 + 0x348))(pUVar2,local_18,CONCAT71(in_register_00000081,param_3))
  ;
  if (((local_18[0] == PCGMetadataDomainID::Data.Flag) &&
      (local_14 == PCGMetadataDomainID::Data.CustomFlag)) && (iVar1 - 2U < 2)) {
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar3,pUVar2,true);
      goto LAB_14985b510;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 - 2U < 2)) {
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar3,pUVar2,false);
      goto LAB_14985b510;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 == 0)) {
    pFVar4 = ::operator_new(0x38);
    if (pFVar4 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0) {
      pFVar4 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>(pFVar4,pUVar2);
      goto LAB_14985b510;
    }
  }
  pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0;
LAB_14985b510:
  param_1->_padding_ = (longlong)pFVar4;
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b6c0

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__cdecl `UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_4>::<lambda_invoker_cdecl>
                  (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  UPCGPolygon2DData *pUVar2;
  FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *pFVar3;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *pFVar4;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  pUVar2 = CastChecked<UPCGPolygon2DData,UPCGData_const_>((UPCGData *)param_2);
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_3) + 8);
  (**(code **)(*(longlong *)pUVar2 + 0x348))(pUVar2,local_18,CONCAT71(in_register_00000081,param_3))
  ;
  if (((local_18[0] == PCGMetadataDomainID::Data.Flag) &&
      (local_14 == PCGMetadataDomainID::Data.CustomFlag)) && (iVar1 - 2U < 2)) {
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar3,pUVar2,true);
      goto LAB_14985b7c0;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 - 2U < 2)) {
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar3,pUVar2,false);
      goto LAB_14985b7c0;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 == 0)) {
    pFVar4 = ::operator_new(0x38);
    if (pFVar4 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0) {
      pFVar4 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>(pFVar4,pUVar2);
      goto LAB_14985b7c0;
    }
  }
  pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0;
LAB_14985b7c0:
  param_1->_padding_ = (longlong)pFVar4;
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// UPCGPolygon2DData @ 14988e560

UPCGPolygon2DData * __thiscall
UPCGPolygon2DData::UPCGPolygon2DData(UPCGPolygon2DData *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGPolygon2DData__6B_;
  (this->Polygon).Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polygon).Outer.Vertices.ArrayNum = 0;
  (this->Polygon).Outer.Vertices.ArrayMax = 0;
  (this->Polygon).Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polygon).Holes.ArrayNum = 0;
  (this->Polygon).Holes.ArrayMax = 0;
  (this->VertexEntryKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEntryKeys).ArrayNum = 0;
  (this->VertexEntryKeys).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&this->SegmentIndexToSegmentAndHoleIndices = 0;
  *(undefined8 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8 = 0;
  *(undefined8 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x28 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x40 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x48 = 0;
  *(undefined8 *)&this->SegmentAndHoleIndicesToSegmentIndex = 0;
  *(undefined8 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x34 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x48 = 0;
  this->SegmentCount = 0;
  return this;
}

// UPCGPolygon2DData @ 14988e6a0

UPCGPolygon2DData * __thiscall
UPCGPolygon2DData::UPCGPolygon2DData(UPCGPolygon2DData *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  UPCGPolygon2DData *pUVar11;
  FPCGMetadataDomainID local_18;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGPolygon2DData__6B_;
  (this->Polygon).Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polygon).Outer.Vertices.ArrayNum = 0;
  (this->Polygon).Outer.Vertices.ArrayMax = 0;
  (this->Polygon).Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polygon).Holes.ArrayNum = 0;
  (this->Polygon).Holes.ArrayMax = 0;
  (this->VertexEntryKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEntryKeys).ArrayNum = 0;
  (this->VertexEntryKeys).ArrayMax = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar9;
  *(undefined8 *)&this->SegmentIndexToSegmentAndHoleIndices = 0;
  *(undefined8 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8 = 0;
  *(undefined8 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x28 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34 = 0;
  *(undefined8 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x40 = 0;
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x48 = 0;
  *(undefined8 *)&this->SegmentAndHoleIndicesToSegmentIndex = 0;
  *(undefined8 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x48 = 0;
  this->SegmentCount = 0;
  if (*(longlong *)&this->field_0x38 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Metadata",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                        ,0xf3,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pUVar11 = (UPCGPolygon2DData *)(*pcVar1)();
      return pUVar11;
    }
  }
  local_18 = PCGMetadataDomainID::Elements;
  UPCGMetadata::SetupDomain(*(UPCGMetadata **)&this->field_0x38,&local_18,true);
  return this;
}

// ~UPCGPolygon2DData @ 1498917a0

void __thiscall UPCGPolygon2DData::~UPCGPolygon2DData(UPCGPolygon2DData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UPCGPolygon2DData__6B_;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SegmentAndHoleIndicesToSegmentIndex);
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SegmentIndexToSegmentAndHoleIndices);
  pFVar2 = (this->VertexEntryKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::TPolygon2<double>,int>
            ((TPolygon2<double> *)(this->Polygon).Holes.AllocatorInstance.Data,
             (this->Polygon).Holes.ArrayNum);
  pFVar2 = (this->Polygon).Holes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Polygon).Outer.Vertices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989de70

void __thiscall
UPCGPolygon2DData::AddToCrc(UPCGPolygon2DData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UClass *this_00;
  bool bVar1;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone(*(UPCGMetadata **)&this->field_0x38);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  if (param_2) {
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId294,"UPCGPolygon2DData::AddToCrc",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                 ,0x126);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId294);
    }
    this_00 = StaticClass();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    ::operator<<((FArchive *)param_1,&local_18);
    PCGPolygon2DData::SerializePolygon(&this->Polygon,(FArchive *)param_1);
    UE::Math::operator<<((FArchive *)param_1,&this->Transform);
    if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
      UPCGMetadata::AddToCrc(*(UPCGMetadata **)&this->field_0x38,param_1,true);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// AllocateMetadataEntries @ 14989eca0

void __thiscall UPCGPolygon2DData::AllocateMetadataEntries(UPCGPolygon2DData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  
  uVar5 = (**(code **)(*(longlong *)this + 0x4a8))();
  uVar8 = (ulonglong)uVar5;
  if ((this->VertexEntryKeys).ArrayNum != uVar5) {
    if ((int)uVar5 < 0) goto LAB_14989edf5;
    piVar1 = &(this->VertexEntryKeys).ArrayMax;
    (this->VertexEntryKeys).ArrayNum = 0;
    if (*piVar1 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&(this->VertexEntryKeys).AllocatorInstance,0,piVar1);
    }
  }
  if ((this->VertexEntryKeys).ArrayNum == 0) {
    pTVar7 = &this->VertexEntryKeys;
    if ((int)uVar5 < 0) {
LAB_14989edf5:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    piVar1 = &(this->VertexEntryKeys).ArrayMax;
    if ((this->VertexEntryKeys).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&pTVar7->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar5) {
      do {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (((pFVar2 < (FScriptContainerElement *)0x151f03061) &&
            (&PCGInvalidEntryKey < pFVar2 + (longlong)*piVar1 * 8)) &&
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
        iVar6 = (this->VertexEntryKeys).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar7->AllocatorInstance,piVar1);
        }
        (this->VertexEntryKeys).ArrayNum = iVar6 + 1;
        *(undefined8 *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = 0xffffffffffffffff
        ;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// CopyInternal @ 1498a4880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGPolygon2DData::CopyInternal(UPCGPolygon2DData *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *this_00;
  TMap<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
  *this_01;
  int iVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UPCGSpatialData *pUVar7;
  UObject *pUVar8;
  UPCGPolygon2DData *pUVar9;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGPolygon2DData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UPCGSpatialData *)(*pcVar4)();
        return pUVar7;
      }
    }
  }
  else {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UPCGSpatialData *)(*pcVar4)();
          return pUVar7;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar8 = GetTransientPackageAsObject();
      pUVar9 = NewObject<UPCGPolygon2DData>(pUVar8);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar9 == (UPCGPolygon2DData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UPCGSpatialData *)(*pcVar4)();
          return pUVar7;
        }
      }
      local_res18[0] = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UPCGPolygon2DData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a48df;
    }
  }
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UPCGPolygon2DData>(pUVar8);
LAB_1498a48df:
  UE::Geometry::TGeneralPolygon2<double>::operator=(&pUVar9->Polygon,&this->Polygon);
  TArray<__int64,TSizedDefaultAllocator<32>_>::operator=
            (&pUVar9->VertexEntryKeys,&this->VertexEntryKeys);
  dVar5 = (this->Transform).Rotation.XY.m128d_f64[1];
  this_00 = &pUVar9->SegmentIndexToSegmentAndHoleIndices;
  (pUVar9->Transform).Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (pUVar9->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (pUVar9->Transform).Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  (pUVar9->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->Transform).Translation.XY.m128d_f64[1];
  (pUVar9->Transform).Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  (pUVar9->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->Transform).Translation.ZW.m128d_f64[1];
  (pUVar9->Transform).Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  (pUVar9->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (pUVar9->Transform).Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  (pUVar9->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (pUVar9->Transform).Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  (pUVar9->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  if (this_00 != &this->SegmentIndexToSegmentAndHoleIndices) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0x38,
               (int *)&(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0x48,
               (ForElementType<FSetElementId> *)
               &(this->SegmentIndexToSegmentAndHoleIndices).field_0x38,
               *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x48);
    iVar3 = *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_00,
               (int *)&(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0x8,
               (int *)&(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0xc);
    puVar1 = &(this->SegmentIndexToSegmentAndHoleIndices).field_0x10;
    puVar2 = &(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0x10;
    *(undefined4 *)&(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0x30 =
         *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x30;
    *(undefined4 *)&(pUVar9->SegmentIndexToSegmentAndHoleIndices).field_0x34 =
         *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_00,*(void **)&this->SegmentIndexToSegmentAndHoleIndices,
             (longlong)iVar3 * 0x14);
    }
  }
  this_01 = &pUVar9->SegmentAndHoleIndicesToSegmentIndex;
  if (this_01 != &this->SegmentAndHoleIndicesToSegmentIndex) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0x38,
               (int *)&(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0x48,
               (ForElementType<FSetElementId> *)
               &(this->SegmentAndHoleIndicesToSegmentIndex).field_0x38,
               *(int *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x48);
    iVar3 = *(int *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_01,
               (int *)&(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0x8,
               (int *)&(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0xc);
    puVar1 = &(this->SegmentAndHoleIndicesToSegmentIndex).field_0x10;
    puVar2 = &(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0x10;
    *(undefined4 *)&(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0x30 =
         *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x30;
    *(undefined4 *)&(pUVar9->SegmentAndHoleIndicesToSegmentIndex).field_0x34 =
         *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_01,*(void **)&this->SegmentAndHoleIndicesToSegmentIndex,
             (longlong)iVar3 * 0x14);
    }
  }
  pUVar9->SegmentCount = this->SegmentCount;
  return (UPCGSpatialData *)pUVar9;
}

// CreateAccessorKeys @ 1498a7b80

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __thiscall
UPCGPolygon2DData::CreateAccessorKeys
          (UPCGPolygon2DData *this,FPCGAttributePropertySelector *param_1,bool param_2)

{
  int iVar1;
  FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *pFVar2;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *pFVar3;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_2) + 8);
  (**(code **)(*(longlong *)this + 0x348))(this,local_18);
  if (((local_18[0] == PCGMetadataDomainID::Data.Flag) &&
      (local_14 == PCGMetadataDomainID::Data.CustomFlag)) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar2,this,true);
      goto LAB_1498a7c67;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar2,this,false);
      goto LAB_1498a7c67;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 == 0)) {
    pFVar3 = ::operator_new(0x38);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0) {
      pFVar3 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>(pFVar3,this);
      goto LAB_1498a7c67;
    }
  }
  pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0;
LAB_1498a7c67:
  param_1->_padding_ = (longlong)pFVar3;
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// CreateBasePointData @ 1498a9f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGPolygon2DData::CreateBasePointData
          (UPCGPolygon2DData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  long64 lVar4;
  UPCGMetadata *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  UPackage *pUVar22;
  UPCGBasePointData *pUVar23;
  UClass *pUVar24;
  FString *pFVar25;
  FName *pFVar26;
  FPCGMetadataDomain *this_01;
  double *pdVar27;
  TTuple<int,int> *pTVar28;
  TTransform<double> *pTVar29;
  long64 *plVar30;
  UClass *pUVar31;
  FName FVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  undefined1 auStackY_4c8 [32];
  ForAnyElementType local_478;
  undefined8 local_470;
  undefined1 local_468 [16];
  wchar_t local_458 [2];
  int local_454;
  int local_450;
  UPCGPolygon2DData *local_448;
  ulong64 local_440;
  undefined2 local_438;
  undefined1 local_436;
  undefined1 local_435;
  TObjectPtr<UPCGMetadata>_u_0 local_430;
  void *local_428;
  undefined8 local_420;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_418;
  undefined8 local_410;
  FName local_408;
  UPackage *local_400;
  undefined8 local_3f8;
  FPCGAttributePropertySelector local_3e8;
  FName local_3a0;
  FPCGContext *local_398;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FPCGAttributePropertySelector local_378;
  FName local_338;
  FPCGMetadataDomainID local_330;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  undefined8 *local_308;
  FScriptContainerElement **local_300;
  FText local_2f8;
  FName local_2e8;
  FString local_2e0;
  TArrayView<int_const_,int> local_2c8;
  FString local_2b8;
  FPCGPointValueRanges local_2a8;
  undefined1 local_118 [96];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_398 = param_1;
  pUVar22 = GetTransientPackage();
  pUVar31 = (UClass *)0x0;
  local_400 = pUVar22;
  if (param_1 == (FPCGContext *)0x0) {
    bVar19 = IsInGameThread();
    if ((!bVar19) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4331830188552749225>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0xa9,"Context != nullptr || IsInGameThread()"), bVar19)) {
      pcVar5 = (code *)swi(3);
      pUVar23 = (UPCGBasePointData *)(*pcVar5)();
      return pUVar23;
    }
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    local_408.ComparisonIndex.Value = 0;
    local_408.Number = 0;
    if ((lVar3 != 0) &&
       (pUVar24 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar24 != (UClass *)0x0)) {
      iVar20 = (int)pUVar24->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar20) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar20 * 8) !=
          &pUVar24->_padding_)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        pUVar31 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar23 = NewObject<UPCGBasePointData>
                        ((UObject *)pUVar22,pUVar31,local_408,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar23 = FPCGContext::
              NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                        (param_1,&local_400,
                         (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
  }
  local_448 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this == (UPCGPolygon2DData *)0x0)) {
    local_430.DebugPtr = (UPCGMetadata *)0x0;
    local_438 = 0x101;
    local_440 = 0;
    local_435 = 0;
    if (this != (UPCGPolygon2DData *)0x0) {
      local_430.DebugPtr = (UPCGMetadata *)(**(code **)(*(longlong *)this + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_440 = 0;
    local_438 = 0x101;
    local_435 = 0;
    local_430.DebugPtr = (UPCGMetadata *)(**(code **)(*(longlong *)this + 800))(this);
  }
  uVar35 = 0;
  local_428 = (void *)0x0;
  local_420 = 0;
  local_418 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_410 = 0;
  local_436 = 0;
  (**(code **)(pUVar23->_padding_ + 0x468))(pUVar23,&local_448);
  if ((local_448 != (UPCGPolygon2DData *)0x0) && ((char)local_438 != '\0')) {
    (**(code **)(pUVar23->_padding_ + 0x470))(pUVar23,&local_448);
  }
  if (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar22 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DProperties,(UObject *)pUVar22,
                       L"EPCGPolygon2DProperties");
  }
  pFVar25 = UEnum::GetNameStringByValue
                      (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton,&local_2e0,3
                      );
  iVar21 = (pFVar25->Data).ArrayNum;
  iVar20 = iVar21 + -1;
  if (iVar21 == 0) {
    iVar20 = 0;
  }
  pFVar26 = ::FName::FName(&local_2e8,iVar20,(wchar_t *)(pFVar25->Data).AllocatorInstance.Data,
                           FNAME_Add);
  FVar32 = *pFVar26;
  local_3a0 = FVar32;
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  local_330.Flag = PCGMetadataDomainID::Default.Flag;
  local_330._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_330.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_330.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_458[0] = L'\xffff';
  local_458[1] = L'\xffff';
  local_338 = FVar32;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar23->_padding_,&local_330);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::FindOrCreateAttribute<int>
              (this_01,local_338,(int *)local_458,false,true,true);
  }
  iVar20 = (**(code **)(*(longlong *)this + 0x4a8))(this);
  local_450 = iVar20;
  (**(code **)(pUVar23->_padding_ + 0x490))(pUVar23,iVar20,1);
  (**(code **)(pUVar23->_padding_ + 0x498))(pUVar23,0x81);
  local_454 = (this->VertexEntryKeys).ArrayNum;
  if (((local_454 != 0) && (local_454 != iVar20)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexEntryKeys.IsEmpty() || VertexEntryKeys.Num() == NumPoints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                          ,0x23a,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    pUVar23 = (UPCGBasePointData *)(*pcVar5)();
    return pUVar23;
  }
  FPCGPointValueRanges::FPCGPointValueRanges(&local_2a8,pUVar23,false);
  uVar38 = uVar35;
  iVar21 = iVar20;
  if (0 < iVar20) {
    do {
      uVar36 = (uint)uVar35;
      pdVar27 = (double *)(**(code **)(*(longlong *)this + 0x4d0))(this,local_118,uVar35,0);
      uVar33 = ~uVar36 >> 0x1f;
      dVar6 = *pdVar27;
      dVar7 = pdVar27[1];
      dVar8 = pdVar27[2];
      dVar9 = pdVar27[3];
      dVar10 = pdVar27[4];
      dVar11 = pdVar27[5];
      dVar12 = pdVar27[6];
      dVar13 = pdVar27[7];
      dVar14 = pdVar27[8];
      dVar15 = pdVar27[9];
      dVar16 = pdVar27[10];
      dVar17 = pdVar27[0xb];
      uVar37 = 0;
      if ((int)uVar36 < local_2a8.TransformRange.NumElements) {
        uVar37 = uVar33;
      }
      if ((uVar37 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        pUVar23 = (UPCGBasePointData *)(*pcVar5)();
        return pUVar23;
      }
      if (uVar36 == (int)uVar36 % local_2a8.TransformRange.ElementView.NumElements) {
        pTVar29 = (TTransform<double> *)
                  ((longlong)
                   ((local_2a8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                  (longlong)local_2a8.TransformRange.ElementView.BytesBetweenElements *
                  (longlong)((int)uVar36 % local_2a8.TransformRange.ElementView.NumElements));
      }
      else {
        pTVar29 = &local_2a8.TransformRange.StubValue;
      }
      (pTVar29->Rotation).XY.m128d_f64[0] = dVar6;
      (pTVar29->Rotation).XY.m128d_f64[1] = dVar7;
      (pTVar29->Rotation).ZW.m128d_f64[0] = dVar8;
      (pTVar29->Rotation).ZW.m128d_f64[1] = dVar9;
      (pTVar29->Translation).XY.m128d_f64[0] = dVar10;
      (pTVar29->Translation).XY.m128d_f64[1] = dVar11;
      (pTVar29->Translation).ZW.m128d_f64[0] = dVar12;
      (pTVar29->Translation).ZW.m128d_f64[1] = dVar13;
      (pTVar29->Scale3D).XY.m128d_f64[0] = dVar14;
      (pTVar29->Scale3D).XY.m128d_f64[1] = dVar15;
      (pTVar29->Scale3D).ZW.m128d_f64[0] = dVar16;
      (pTVar29->Scale3D).ZW.m128d_f64[1] = dVar17;
      if (local_454 != 0) {
        uVar37 = 0;
        if ((int)uVar36 < (this->VertexEntryKeys).ArrayNum) {
          uVar37 = uVar33;
        }
        if ((uVar37 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          pUVar23 = (UPCGBasePointData *)(*pcVar5)();
          return pUVar23;
        }
        lVar4 = *(long64 *)((this->VertexEntryKeys).AllocatorInstance.Data + uVar38 * 8);
        uVar37 = 0;
        if ((int)uVar36 < local_2a8.MetadataEntryRange.NumElements) {
          uVar37 = uVar33;
        }
        if ((uVar37 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar19)) {
          pcVar5 = (code *)swi(3);
          pUVar23 = (UPCGBasePointData *)(*pcVar5)();
          return pUVar23;
        }
        if (uVar36 == (int)uVar36 % local_2a8.MetadataEntryRange.ElementView.NumElements) {
          plVar30 = (long64 *)
                    ((longlong)local_2a8.MetadataEntryRange.ElementView.BytesBetweenElements *
                     (longlong)((int)uVar36 % local_2a8.MetadataEntryRange.ElementView.NumElements)
                    + (longlong)local_2a8.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar30 = &local_2a8.MetadataEntryRange.StubValue;
        }
        *plVar30 = lVar4;
      }
      this_00 = (UPCGMetadata *)pUVar23->_padding_;
      uVar37 = 0;
      if ((int)uVar36 < local_2a8.MetadataEntryRange.NumElements) {
        uVar37 = uVar33;
      }
      if ((uVar37 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        pUVar23 = (UPCGBasePointData *)(*pcVar5)();
        return pUVar23;
      }
      if (uVar36 == (int)uVar36 % local_2a8.MetadataEntryRange.ElementView.NumElements) {
        plVar30 = (long64 *)
                  ((longlong)local_2a8.MetadataEntryRange.ElementView.BytesBetweenElements *
                   (longlong)((int)uVar36 % local_2a8.MetadataEntryRange.ElementView.NumElements) +
                  (longlong)local_2a8.MetadataEntryRange.ElementView.FirstElementPtr);
      }
      else {
        plVar30 = &local_2a8.MetadataEntryRange.StubValue;
      }
      UPCGMetadata::InitializeOnSet(this_00,plVar30,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
      uVar35 = (ulonglong)(uVar36 + 1);
      uVar38 = uVar38 + 1;
      FVar32 = local_3a0;
      param_1 = local_398;
      iVar21 = local_450;
    } while ((longlong)uVar38 < (longlong)iVar20);
  }
  iVar34 = 0;
  iVar20 = *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34;
  iVar2 = *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8;
  if (iVar2 == iVar20) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2526822602761043381>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                        ,0x24b,"!SegmentIndexToSegmentAndHoleIndices.IsEmpty()");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      pUVar23 = (UPCGBasePointData *)(*pcVar5)();
      return pUVar23;
    }
    goto LAB_1498aa940;
  }
  uVar37 = iVar2 - iVar20;
  local_478.Data = (FScriptContainerElement *)0x0;
  local_470 = 0;
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
  }
  if (0 < (int)uVar37) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar37,&local_478,0,(int *)((longlong)&local_470 + 4));
  }
  if (0 < iVar21) {
    do {
      pTVar28 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                               *)&this->SegmentIndexToSegmentAndHoleIndices,iVar34);
      puVar1 = &pTVar28->field_0x4;
      if (((local_478.Data <= puVar1) && (puVar1 < local_478.Data + (longlong)local_470._4_4_ * 4))
         && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar19)) {
        pcVar5 = (code *)swi(3);
        pUVar23 = (UPCGBasePointData *)(*pcVar5)();
        return pUVar23;
      }
      iVar20 = (int)local_470;
      if ((int)local_470 == local_470._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_478,(int *)((longlong)&local_470 + 4));
      }
      iVar34 = iVar34 + 1;
      local_470 = CONCAT44(local_470._4_4_,iVar20 + 1);
      *(undefined4 *)(local_478.Data + (longlong)iVar20 * 4) = *(undefined4 *)puVar1;
    } while (iVar34 < iVar21);
  }
  local_3f8 = 0;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            ((FPCGAttributePropertyOutputSelector *)&local_378);
  FPCGAttributePropertySelector::SetDomainName(&local_378,(FName)0x0,true);
  FPCGAttributePropertySelector::SetAttributeName(&local_378,FVar32,true);
  DestructItems<FString,int>
            ((FString *)local_378.ExtraNames.AllocatorInstance.Data,local_378.ExtraNames.ArrayNum);
  local_378.ExtraNames.ArrayNum = 0;
  if (local_378.ExtraNames.ArrayMax == 0) {
    local_378.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,local_378.ExtraNames.ArrayMax,&local_378.ExtraNames.AllocatorInstance,0,
               &local_378.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_378.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  iVar20 = (int)local_470;
  local_318 = local_478.Data;
  if (((int)local_470 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    pUVar23 = (UPCGBasePointData *)(*pcVar5)();
    return pUVar23;
  }
  iStack_310 = iVar20;
  uStack_37c = uStack_30c;
  iStack_380 = iVar20;
  local_388 = local_318;
  FPCGAttributePropertyOutputSelector::CopyAndFixSource
            ((FPCGAttributePropertyOutputSelector *)&local_378,
             (FPCGAttributePropertyOutputSelector *)&local_3e8,
             (FPCGAttributePropertyInputSelector *)0x0,(UPCGData *)pUVar23);
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)(local_468 + 8),(FPCGAttributePropertySelector *)pUVar23,
             SUB81(&local_3e8,0));
  PCGAttributeAccessorHelpers::CreateKeys
            ((UPCGData *)local_468,(FPCGAttributePropertySelector *)pUVar23);
  if (((IPCGAttributeAccessor *)local_468._8_8_ == (IPCGAttributeAccessor *)0x0) ||
     ((IPCGAttributeAccessorKeys *)local_468._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
    PCGLog::Metadata::LogFailToCreateAccessorError(&local_3e8,param_1);
  }
  else {
    iVar20 = iStack_380;
    iVar21 = (**(code **)(*(longlong *)local_468._0_8_ + 0x10))();
    if (iVar21 != iVar20) {
      local_308 = (undefined8 *)local_468;
      local_300 = &local_388;
      bVar19 = `PCGAttributeAccessorHelpers::WriteAllValues<int>'::__l6::<lambda_1>::operator()
                         (&local_308);
      if (!bVar19) goto LAB_1498aa8d2;
    }
    local_2c8.DataPtr = (int *)local_388;
    local_2c8.ArrayNum = iStack_380;
    local_2c8._12_4_ = uStack_37c;
    bVar19 = IPCGAttributeAccessor::SetRange<int>
                       ((IPCGAttributeAccessor *)local_468._8_8_,&local_2c8,0,
                        (IPCGAttributeAccessorKeys *)local_468._0_8_,AllowBroadcastAndConstructible)
    ;
    uVar18 = local_468._8_8_;
    if (!bVar19) {
      pFVar25 = FPCGAttributePropertySelector::ToString(&local_3e8,&local_2b8,false);
      FText::FromString(&local_2f8,pFVar25);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      PCGLog::Metadata::LogFailToSetAttributeError<int>
                (&local_2f8,(IPCGAttributeAccessor *)uVar18,param_1);
      if (local_2f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
      }
    }
  }
LAB_1498aa8d2:
  if ((IPCGAttributeAccessorKeys *)local_468._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)*(longlong *)local_468._0_8_)(local_468._0_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_468._8_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)*(longlong *)local_468._8_8_)(local_468._8_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_3e8.ExtraNames.AllocatorInstance.Data,local_3e8.ExtraNames.ArrayNum);
  if (local_3e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.ExtraNames.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_378.ExtraNames.AllocatorInstance.Data,local_378.ExtraNames.ArrayNum);
  if (local_378.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.ExtraNames.AllocatorInstance.Data);
  }
  if (local_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data);
  }
LAB_1498aa940:
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_418,(int)local_410);
  if (local_418 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_418);
  }
  if (local_428 != (void *)0x0) {
    FMemory::Free(local_428);
  }
  return pUVar23;
}

// CreateConstAccessorKeys @ 1498ad0c0

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__thiscall
UPCGPolygon2DData::CreateConstAccessorKeys
          (UPCGPolygon2DData *this,FPCGAttributePropertySelector *param_1,bool param_2)

{
  int iVar1;
  FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *pFVar2;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *pFVar3;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_2) + 8);
  (**(code **)(*(longlong *)this + 0x348))(this,local_18);
  if (((local_18[0] == PCGMetadataDomainID::Data.Flag) &&
      (local_14 == PCGMetadataDomainID::Data.CustomFlag)) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar2,this,true);
      goto LAB_1498ad1a7;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGPolygon2DData>(pFVar2,this,false);
      goto LAB_1498ad1a7;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 == 0)) {
    pFVar3 = ::operator_new(0x38);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0) {
      pFVar3 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>(pFVar3,this);
      goto LAB_1498ad1a7;
    }
  }
  pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)0x0;
LAB_1498ad1a7:
  param_1->_padding_ = (longlong)pFVar3;
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// CreatePointArrayData @ 1498adcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGPolygon2DData::CreatePointArrayData
          (UPCGPolygon2DData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointArrayData *)0x0) {
    pUVar2 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar3 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointArrayData>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// CreatePointData @ 1498aeec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGPolygon2DData::CreatePointData(UPCGPolygon2DData *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res18[0] = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UPCGPointData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)local_res18);
  if (pUVar2 == (UPCGPointData *)0x0) {
    pUVar2 = (UPCGPointData *)0x0;
  }
  else {
    pUVar3 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointData>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// CreateStaticAccessor @ 1498b0230

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
UPCGPolygon2DData::CreateStaticAccessor
          (UPCGPolygon2DData *param_1,FPCGAttributePropertySelector *param_2,bool param_3,
          bool param_4)

{
  FName FVar1;
  UPackage *pUVar2;
  long64 lVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  undefined7 in_register_00000081;
  FPCGAttributePropertySelector *this;
  FName local_res18 [2];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  this = (FPCGAttributePropertySelector *)CONCAT71(in_register_00000081,param_3);
  FVar1 = this->DomainName;
  if (this->Selection == Property) {
    if ((FVar1 == (FName)0x0) || (FVar1 == PCGPolygon2DData::VertexDomainName)) {
      FPCGAttributePropertySelector::GetName(this);
      if (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DProperties,(UObject *)pUVar2,
                           L"EPCGPolygon2DProperties");
      }
      lVar3 = UEnum::GetValueByName
                        (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton,
                         local_res18[0],None);
      if (lVar3 != -1) {
        PCGPolygon2DData::CreatePropertyAccessor
                  ((EPCGPolygon2DProperties)param_1,SUB81(lVar3,0),param_4);
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
               (IPCGAttributeAccessor *)param_1;
      }
      if (!param_4) {
        pFVar4 = FText::FromName(&local_28,local_res18);
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_38,L"PCGPolygon2DData",L"FailCreateAccessor",
                            L"Property {0} is not valid for a polygon vertex.");
        pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
        pFVar4 = FText::Format<FText>(&local_48,pFVar6,pFVar4);
        PCGLog::LogErrorOnGraph(pFVar4,(FPCGContext *)0x0);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
    }
    else if (FVar1 == PCGDataConstants::DataDomainName) {
      FPCGAttributePropertySelector::GetName(this);
      if (Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DDataProperties,(UObject *)pUVar2,
                           L"EPCGPolygon2DDataProperties");
      }
      lVar3 = UEnum::GetValueByName
                        (Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton,
                         local_res18[0],None);
      if (lVar3 != -1) {
        PCGPolygon2DData::CreateDataPropertyAccessor
                  ((EPCGPolygon2DProperties)param_1,SUB81(lVar3,0),param_4);
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
               (IPCGAttributeAccessor *)param_1;
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// GetAllSupportedMetadataDomainIDs @ 1498b4df0

TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPolygon2DData::GetAllSupportedMetadataDomainIDs
          (UPCGPolygon2DData *this,
          TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomainID FVar2;
  FPCGMetadataDomainID FVar3;
  undefined8 local_48;
  FName FStack_40;
  undefined8 local_38;
  FName FStack_30;
  
  FVar3 = PCGMetadataDomainID::Data;
  FVar2 = PCGMetadataDomainID::Elements;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&__return_storage_ptr__->AllocatorInstance,2,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = FVar3._0_8_;
  FStack_40 = FVar3.DebugName;
  *(undefined8 *)pFVar1 = local_48;
  *(FName *)(pFVar1 + 8) = FStack_40;
  local_38 = FVar2._0_8_;
  FStack_30 = FVar2.DebugName;
  *(undefined8 *)(pFVar1 + 0x10) = local_38;
  *(FName *)(pFVar1 + 0x18) = FStack_30;
  return __return_storage_ptr__;
}

// GetBounds @ 1498b5bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
UPCGPolygon2DData::GetBounds(UPCGPolygon2DData *this,TBox<double> *__return_storage_ptr__)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_118 [32];
  TVector2<double>_u_0 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  TVector<double>_u_0 local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  UE::Geometry::TGeneralPolygon2<double>::Bounds
            (&this->Polygon,(TAxisAlignedBox2<double> *)&local_f8._s_0);
  local_a8 = 1;
  local_d8._s_0.X = local_f8._s_0.X;
  local_d8._s_0.Y = local_f8._s_0.Y;
  local_c0 = local_e8;
  uStack_b8 = uStack_e0;
  local_d8._s_0.Z = __real_c049000000000000;
  local_b0 = __real_4049000000000000;
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_98);
  UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_d8._s_0,__return_storage_ptr__,pTVar1);
  return __return_storage_ptr__;
}

// GetConstVerticesEntryKeys @ 1498b79b0

TArrayView<__int64_const_,int> * __thiscall
UPCGPolygon2DData::GetConstVerticesEntryKeys
          (UPCGPolygon2DData *this,TArrayView<__int64_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<__int64_const_,int> *pTVar4;
  
  iVar1 = (this->VertexEntryKeys).ArrayNum;
  __return_storage_ptr__->DataPtr = (long64 *)(this->VertexEntryKeys).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<__int64_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetDataType @ 1498b8410

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGPolygon2DData::GetDataType(UPCGPolygon2DData *this)

{
  return Polygon2D;
}

// GetDataTypeId @ 1498b8ac0

FPCGDataTypeBaseId * __thiscall UPCGPolygon2DData::GetDataTypeId(UPCGPolygon2DData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D,(UObject *)pUVar3,
                         L"PCGDataTypeInfoPolygon2D");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8b43;
  }
  else {
LAB_1498b8b43:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b8b9a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b8b9c;
  }
LAB_1498b8b9a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b8b9c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolygon2D::AsId(void)'
          ::__l2::Id;
}

// GetDefaultMetadataDomainID @ 1498b9510

FPCGMetadataDomainID * __thiscall
UPCGPolygon2DData::GetDefaultMetadataDomainID
          (UPCGPolygon2DData *this,FPCGMetadataDomainID *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
  return __return_storage_ptr__;
}

// GetDimension @ 1498b9a50

int __thiscall UPCGPolygon2DData::GetDimension(UPCGPolygon2DData *this)

{
  return 2;
}

// GetDistanceAtSegmentStart @ 1498b9e60

double __thiscall UPCGPolygon2DData::GetDistanceAtSegmentStart(UPCGPolygon2DData *this,int param_1)

{
  TTuple<int,int> TVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TTuple<int,int> *pTVar7;
  FScriptContainerElement *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  TSegment2<double> local_68 [2];
  
  dVar4 = __real_4000000000000000;
  dVar3 = 0.0;
  iVar9 = this->SegmentCount;
  if (param_1 < this->SegmentCount) {
    iVar9 = param_1;
  }
  iVar10 = 0;
  if (0 < iVar9) {
    iVar10 = iVar9;
  }
  iVar9 = 0;
  if (0 < iVar10) {
    do {
      if (this->SegmentCount <= iVar9) {
        return dVar3;
      }
      pTVar7 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
               ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                              *)&this->SegmentIndexToSegmentAndHoleIndices,iVar9);
      TVar1 = *pTVar7;
      uVar8 = TVar1._4_4_;
      if (uVar8 == 0xffffffff) {
        this_00 = (FScriptContainerElement *)&this->Polygon;
      }
      else {
        uVar6 = 0;
        if ((int)uVar8 < (this->Polygon).Holes.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          dVar3 = (double)(*pcVar2)();
          return dVar3;
        }
        this_00 = (this->Polygon).Holes.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      }
      UE::Geometry::TPolygon2<double>::Segment((TPolygon2<double> *)this_00,local_68,TVar1._0_4_);
      iVar9 = iVar9 + 1;
      dVar3 = dVar3 + local_68[0].Extent * dVar4;
      if (iVar10 <= iVar9) {
        return dVar3;
      }
    } while( true );
  }
  return 0.0;
}

// GetInputKeyAtDistance @ 1498ba570

float __thiscall
UPCGPolygon2DData::GetInputKeyAtDistance(UPCGPolygon2DData *this,int param_1,double param_2)

{
  TTuple<int,int> TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<int,int> *pTVar5;
  FScriptContainerElement *this_00;
  uint uVar6;
  float fVar7;
  TSegment2<double> local_48;
  
  if (param_1 < 0) {
    return 0.0;
  }
  if (this->SegmentCount <= param_1) {
    return (float)this->SegmentCount;
  }
  pTVar5 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
           ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                          *)&this->SegmentIndexToSegmentAndHoleIndices,param_1);
  TVar1 = *pTVar5;
  uVar6 = TVar1._4_4_;
  if (uVar6 == 0xffffffff) {
    this_00 = (FScriptContainerElement *)&this->Polygon;
  }
  else {
    uVar4 = 0;
    if ((int)uVar6 < (this->Polygon).Holes.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
    }
    this_00 = (this->Polygon).Holes.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  }
  UE::Geometry::TPolygon2<double>::Segment((TPolygon2<double> *)this_00,&local_48,TVar1._0_4_);
  return (float)(param_2 / (local_48.Extent * __real_4000000000000000) + (double)param_1);
}

// GetLocationAtAlpha @ 1498baf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPCGPolygon2DData::GetLocationAtAlpha
          (UPCGPolygon2DData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*(longlong *)this + 0x4c0))(this,local_78);
  dVar2 = *(double *)(lVar3 + 0x28);
  dVar1 = *(double *)(lVar3 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetMetadataDomainIDFromSelector @ 1498bb320

FPCGMetadataDomainID * __thiscall
UPCGPolygon2DData::GetMetadataDomainIDFromSelector
          (UPCGPolygon2DData *this,FPCGMetadataDomainID *__return_storage_ptr__,
          FPCGAttributePropertySelector *param_1)

{
  if (param_1->DomainName == PCGPolygon2DData::VertexDomainName) {
    *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
    return __return_storage_ptr__;
  }
  UPCGData::GetMetadataDomainIDFromSelector((UPCGData *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMutableVerticesEntryKeys @ 1498bb710

TArrayView<__int64,int> * __thiscall
UPCGPolygon2DData::GetMutableVerticesEntryKeys
          (UPCGPolygon2DData *this,TArrayView<__int64,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<__int64,int> *pTVar4;
  
  iVar1 = (this->VertexEntryKeys).ArrayNum;
  __return_storage_ptr__->DataPtr = (long64 *)(this->VertexEntryKeys).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<__int64,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetNumSegments @ 1498bb9e0

int __thiscall UPCGPolygon2DData::GetNumSegments(UPCGPolygon2DData *this)

{
  return this->SegmentCount;
}

// GetNumVertices @ 1498bba90

int __thiscall UPCGPolygon2DData::GetNumVertices(UPCGPolygon2DData *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498bba93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this + 0x4a0))();
  return iVar1;
}

// GetPolygon2DAccessorMethods @ 1498bbe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGAttributeAccessorMethods * __cdecl
UPCGPolygon2DData::GetPolygon2DAccessorMethods(FPCGAttributeAccessorMethods *__return_storage_ptr__)

{
  undefined ***pppuVar1;
  undefined1 auStack_f8 [32];
  code *local_d8 [2];
  undefined **local_c8;
  code *local_c0;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_c0 = `UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
                ::Call;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_90 = `UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `UPCGPolygon2DData::GetPolygon2DAccessorMethods'::__l2::<lambda_4>::
             <lambda_invoker_cdecl>;
  local_b0 = (undefined ***)0x0;
  local_80 = (undefined ***)0x0;
  local_50 = (undefined ***)0x0;
  local_20 = (undefined ***)0x0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  FPCGAttributeAccessorMethods::FPCGAttributeAccessorMethods
            (__return_storage_ptr__,(FPCGAttributeAccessorMethods *)local_d8);
  if (local_48 != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar1 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar1 = local_50;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar1 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar1 = local_80;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_d8[0] != (code *)0x0) {
    pppuVar1 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar1 = local_b0;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1498bc890

UClass * __cdecl UPCGPolygon2DData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DData",
               &Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton,
               StaticRegisterNativesUPCGPolygon2DData,0x260,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPolygon2DData>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton;
}

// GetSegmentLength @ 1498c5fd0

double __thiscall UPCGPolygon2DData::GetSegmentLength(UPCGPolygon2DData *this,int param_1)

{
  TTuple<int,int> TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<int,int> *pTVar5;
  FScriptContainerElement *this_00;
  uint uVar6;
  double dVar7;
  TSegment2<double> local_38;
  
  if ((-1 < param_1) && (param_1 < this->SegmentCount)) {
    pTVar5 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
             ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                            *)&this->SegmentIndexToSegmentAndHoleIndices,param_1);
    TVar1 = *pTVar5;
    uVar6 = TVar1._4_4_;
    if (uVar6 == 0xffffffff) {
      this_00 = (FScriptContainerElement *)&this->Polygon;
    }
    else {
      uVar4 = 0;
      if ((int)uVar6 < (this->Polygon).Holes.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          dVar7 = (double)(*pcVar2)();
          return dVar7;
        }
      }
      this_00 = (this->Polygon).Holes.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    }
    UE::Geometry::TPolygon2<double>::Segment((TPolygon2<double> *)this_00,&local_38,TVar1._0_4_);
    return local_38.Extent + local_38.Extent;
  }
  return 0.0;
}

// GetTransform @ 1498c8360

TTransform<double> * __thiscall
UPCGPolygon2DData::GetTransform(UPCGPolygon2DData *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Translation.XY.m128d_f64[0];
  dVar4 = (this->Transform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Transform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetTransformAtAlpha @ 1498c8540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UPCGPolygon2DData::GetTransformAtAlpha
          (UPCGPolygon2DData *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  int iVar1;
  TTuple<int,int> TVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  TTuple<int,int> *pTVar13;
  TTransform<double> *pTVar14;
  TMatrix<double> *this_00;
  TQuat<double> *pTVar15;
  longlong lVar16;
  FScriptContainerElement *this_01;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  TVector2<double>_u_0 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  TVector<double>_u_0 local_1b0;
  TQuat<double> local_198 [2];
  TQuat<double> local_158;
  TTransform<double> local_138;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (this->SegmentCount == 0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar7 = (double)param_1;
    if (__real_3feffffffaa19c48 <= (double)param_1) {
      dVar7 = __real_3feffffffaa19c48;
    }
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    dVar7 = dVar7 * (double)this->SegmentCount;
    lVar16 = (longlong)dVar7;
    dVar9 = dVar7;
    if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar7)) {
      auVar8._8_4_ = SUB84(dVar7,0);
      auVar8._0_8_ = dVar7;
      auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      uVar11 = movmskpd(0,auVar8);
      dVar9 = (double)(longlong)(lVar16 - (ulonglong)(uVar11 & 1));
    }
    pTVar13 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
              ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                             *)&this->SegmentIndexToSegmentAndHoleIndices,
                            (int)((longlong)ROUND((dVar7 + dVar7) - __real_3fe0000000000000) >> 1));
    TVar2 = *pTVar13;
    uVar11 = TVar2._4_4_;
    if (uVar11 == 0xffffffff) {
      this_01 = (FScriptContainerElement *)&this->Polygon;
    }
    else {
      iVar1 = (this->Polygon).Holes.ArrayNum;
      uVar12 = 0;
      if ((int)uVar11 < iVar1) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_1e8 = (longlong)(int)uVar11;
        local_1e0 = (longlong)iVar1;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TTransform<double> *)(*pcVar3)();
          return pTVar14;
        }
      }
      this_01 = (this->Polygon).Holes.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
    }
    UE::Geometry::TPolygon2<double>::Segment
              ((TPolygon2<double> *)this_01,(TSegment2<double> *)&local_1d8._s_0,TVar2._0_4_);
    local_138.Translation.ZW.m128d_f64[0] = 0.0;
    local_138.Translation.ZW.m128d_f64[1] = 0.0;
    local_1b8 = (((dVar7 - dVar9) + (dVar7 - dVar9)) - __real_3ff0000000000000) * local_1b8;
    local_138.Translation.XY.m128d_f64[0] = local_1b8 * local_1c8 + local_1d8._s_0.X;
    local_138.Translation.XY.m128d_f64[1] = local_1b8 * local_1c0 + local_1d8._s_0.Y;
    if ((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)local_1c8 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_1c8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_1c0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_1c0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      local_1b0._s_0.X = local_1c8;
      local_1b0._s_0.Y = local_1c0;
      local_1b0._s_0.Z = 0.0;
      this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                          (&local_d8,(TVector<double> *)&local_1b0._s_0,
                           &UE::Math::TVector<double>::UpVector);
      pTVar15 = UE::Math::TMatrix<double>::ToQuat(this_00,&local_158);
    }
    else {
      pTVar15 = local_198;
      local_198[0].X = UE::Math::TQuat<double>::Identity.X;
      local_198[0].Y = UE::Math::TQuat<double>::Identity.Y;
      local_198[0].Z = UE::Math::TQuat<double>::Identity.Z;
      local_198[0].W = UE::Math::TQuat<double>::Identity.W;
    }
    local_138.Rotation.XY.m128d_f64[0] = pTVar15->X;
    local_138.Rotation.XY.m128d_f64[1] = pTVar15->Y;
    local_138.Rotation.ZW.m128d_f64[0] = pTVar15->Z;
    local_138.Rotation.ZW.m128d_f64[1] = pTVar15->W;
    local_138.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_138.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_138.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar4;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar5;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar6;
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar4;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar5;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar6;
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar4;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar5;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar6;
    UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_138,&this->Transform);
  }
  return __return_storage_ptr__;
}

// GetTransformAtDistance @ 1498c91b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UPCGPolygon2DData::GetTransformAtDistance
          (UPCGPolygon2DData *this,TTransform<double> *__return_storage_ptr__,int param_1,
          double param_2,bool param_3,TBox<double> *param_4)

{
  int iVar1;
  TTuple<int,int> TVar2;
  code *pcVar3;
  double adVar4 [2];
  double adVar5 [2];
  double adVar6 [2];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  bool bVar14;
  TTuple<int,int> *pTVar15;
  TTransform<double> *pTVar16;
  TMatrix<double> *this_00;
  TQuat<double> *pTVar17;
  FScriptContainerElement *this_01;
  uint uVar18;
  uint uVar19;
  double dVar20;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong local_270;
  TVector<double>_u_0 local_268;
  TVector2<double>_u_0 local_250;
  double local_240;
  double local_238;
  double local_230;
  undefined1 local_220;
  undefined7 uStack_21f;
  TQuat<double> local_218 [2];
  TQuat<double> local_1d8;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_298;
  if (param_4 != (TBox<double> *)0x0) {
    local_220 = 1;
    dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    auVar10._8_4_ =
         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    auVar10._0_8_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    auVar10._12_4_ =
         (int)((ulonglong)
               (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) >> 0x20);
    *(undefined1 (*) [16])&(param_4->Min).field0_0x0 = auVar10;
    auVar8._8_4_ = SUB84(dVar13,0);
    auVar8._0_8_ = dVar9;
    auVar8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_4->Min).field0_0x0 + 0x10) = auVar8;
    auVar11._8_4_ = SUB84(dVar20,0);
    auVar11._0_8_ = dVar12;
    auVar11._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_4->Max).field0_0x0 + 8) = auVar11;
    param_4->IsValid = 1;
    param_4->Pad[0] = (char)uStack_21f;
    param_4->Pad[1] = (char)((uint7)uStack_21f >> 8);
    param_4->Pad[2] = (char)((uint7)uStack_21f >> 0x10);
    param_4->Pad[3] = (char)((uint7)uStack_21f >> 0x18);
    param_4->Pad[4] = (char)((uint7)uStack_21f >> 0x20);
    param_4->Pad[5] = (char)((uint7)uStack_21f >> 0x28);
    param_4->Pad[6] = (char)((uint7)uStack_21f >> 0x30);
  }
  if ((param_1 < 0) || (this->SegmentCount <= param_1)) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    pTVar15 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
              ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                             *)&this->SegmentIndexToSegmentAndHoleIndices,param_1);
    TVar2 = *pTVar15;
    uVar18 = TVar2._4_4_;
    if (uVar18 == 0xffffffff) {
      this_01 = (FScriptContainerElement *)&this->Polygon;
    }
    else {
      iVar1 = (this->Polygon).Holes.ArrayNum;
      uVar19 = 0;
      if ((int)uVar18 < iVar1) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_278 = (longlong)(int)uVar18;
        local_270 = (longlong)iVar1;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          pTVar16 = (TTransform<double> *)(*pcVar3)();
          return pTVar16;
        }
      }
      this_01 = (this->Polygon).Holes.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
    }
    UE::Geometry::TPolygon2<double>::Segment
              ((TPolygon2<double> *)this_01,(TSegment2<double> *)&local_250._s_0,TVar2._0_4_);
    local_1b8.Translation.ZW.m128d_f64[0]._0_4_ = 0;
    local_1b8.Translation.ZW.m128d_f64[0]._4_4_ = 0;
    local_1b8.Translation.ZW.m128d_f64[1]._0_4_ = 0;
    local_1b8.Translation.ZW.m128d_f64[1]._4_4_ = 0;
    uVar18 = SUB84(local_240,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar19 = (uint)((ulonglong)local_240 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_158.Translation.ZW.m128d_f64[0] = 0.0;
    local_158.Translation.ZW.m128d_f64[1] = 0.0;
    local_158.Translation.XY.m128d_f64[0] = (param_2 - local_230) * local_240 + local_250._s_0.X;
    local_1b8.Translation.XY.m128d_f64[1] = (param_2 - local_230) * local_238 + local_250._s_0.Y;
    adVar6[1]._0_4_ = SUB84(local_1b8.Translation.XY.m128d_f64[1],0);
    adVar6[0] = local_158.Translation.XY.m128d_f64[0];
    adVar6[1]._4_4_ = (int)((ulonglong)local_1b8.Translation.XY.m128d_f64[1] >> 0x20);
    local_158.Translation.XY.m128d_f64[1] = adVar6[1];
    if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar19,uVar18) &&
         (double)CONCAT44(uVar19,uVar18) != __real_3f1a36e2e0000000) ||
       (uVar18 = SUB84(local_238,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar19 = (uint)((ulonglong)local_238 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar19,uVar18) &&
       (double)CONCAT44(uVar19,uVar18) != __real_3f1a36e2e0000000)) {
      local_268._s_0.X = local_240;
      local_268._s_0.Y = local_238;
      local_268._s_0.Z = 0.0;
      this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                          (&local_f8,(TVector<double> *)&local_268._s_0,
                           &UE::Math::TVector<double>::UpVector);
      pTVar17 = UE::Math::TMatrix<double>::ToQuat(this_00,&local_1d8);
      local_1b8.Translation.ZW.m128d_f64[0]._0_4_ = local_158.Translation.ZW.m128d_f64[0]._0_4_;
      local_1b8.Translation.ZW.m128d_f64[0]._4_4_ = local_158.Translation.ZW.m128d_f64[0]._4_4_;
      local_1b8.Translation.ZW.m128d_f64[1]._0_4_ = local_158.Translation.ZW.m128d_f64[1]._0_4_;
      local_1b8.Translation.ZW.m128d_f64[1]._4_4_ = local_158.Translation.ZW.m128d_f64[1]._4_4_;
      local_1b8.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
      local_1b8.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
    }
    else {
      pTVar17 = local_218;
      local_218[0].X = UE::Math::TQuat<double>::Identity.X;
      local_218[0].Y = UE::Math::TQuat<double>::Identity.Y;
      local_218[0].Z = UE::Math::TQuat<double>::Identity.Z;
      local_218[0].W = UE::Math::TQuat<double>::Identity.W;
      local_1b8.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
    }
    local_1b8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar17->X;
    local_1b8.Rotation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&pTVar17->X + 4);
    local_1b8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar17->Y;
    local_1b8.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar17->Y + 4);
    local_1b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar17->Z;
    local_1b8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&pTVar17->Z + 4);
    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar17->W;
    local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar17->W + 4);
    local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_ =
         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
    local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = 0;
    local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = 0;
    local_158.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_158.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_158.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_158.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_1b8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_1b8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    if (param_3) {
      adVar4[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      adVar4[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      adVar4[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      adVar5[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      adVar5[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      adVar5[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_158.Rotation.XY.m128d_f64[0]._0_4_ = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
      local_158.Rotation.XY.m128d_f64[0]._4_4_ = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
      local_158.Rotation.XY.m128d_f64[1]._0_4_ = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
      local_158.Rotation.XY.m128d_f64[1]._4_4_ = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
      local_1b8.Rotation.XY.m128d_f64 = adVar4;
      local_158.Rotation.ZW.m128d_f64[0]._0_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._0_4_;
      local_158.Rotation.ZW.m128d_f64[0]._4_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._4_4_;
      local_158.Rotation.ZW.m128d_f64[1]._4_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._4_4_;
      local_158.Rotation.ZW.m128d_f64[1]._0_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._0_4_;
      local_1b8.Rotation.ZW.m128d_f64 = adVar5;
      UE::Math::TTransform<double>::Multiply(&local_1b8,&local_158,&this->Transform);
    }
    *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) =
         local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) =
         local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) =
         local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         local_1b8.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) =
         local_1b8.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) =
         local_1b8.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) =
         local_1b8.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar7._8_4_ = SUB84(local_1b8.Translation.XY.m128d_f64[1],0);
    auVar7._0_8_ = local_1b8.Translation.XY.m128d_f64[0];
    auVar7._12_4_ = (int)((ulonglong)local_1b8.Translation.XY.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
    *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         local_1b8.Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) =
         local_1b8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) =
         local_1b8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) =
         local_1b8.Translation.ZW.m128d_f64[1]._4_4_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_1b8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_1b8.Scale3D.XY.m128d_f64[1];
    *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
         local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
         local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
         local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  return __return_storage_ptr__;
}

// IsClosed @ 1498d0ea0

bool __thiscall UPCGPolygon2DData::IsClosed(UPCGPolygon2DData *this)

{
  return true;
}

// ProjectPoint @ 1498d4700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UPCGPolygon2DData::ProjectPoint
          (UPCGPolygon2DData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  UPCGPolygon2DData *pUVar25;
  FPCGPoint *pFVar26;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar27;
  TTransform<double> *pTVar28;
  UPCGMetadata *pUVar29;
  bool bVar30;
  undefined1 uVar31;
  TMatrix<double> *pTVar32;
  ulonglong uVar33;
  TTuple<TTuple<int,int>,int> *pTVar34;
  TTransform<double> *pTVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  undefined1 (*pauVar40) [16];
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  FScriptContainerElement *pFVar44;
  undefined4 uVar45;
  double dVar46;
  undefined4 uVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar51;
  undefined1 auVar50 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar52 [16];
  double dVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 in_XMM4 [16];
  undefined8 uVar62;
  undefined1 auVar57 [16];
  double dVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auStack_408 [32];
  longlong local_3e8;
  longlong local_3e0;
  undefined1 local_3d8 [4];
  int local_3d4;
  uint local_3d0;
  int local_3cc;
  double local_3c8 [2];
  TVector2<double>_u_0 local_3b8;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  UPCGPolygon2DData *local_398;
  TTuple<int,int> local_390;
  FPCGPoint *local_388;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *local_380;
  TTransform<double> *local_378;
  FPCGProjectionParams *local_370;
  TTransform<double> *local_368;
  UPCGMetadata *local_360;
  double local_358 [2];
  TVector2<double>_u_0 local_348;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  TQuat<double> local_2f8;
  TQuat<double> local_2d8;
  TQuat<double> local_2b8;
  double local_298;
  double dStack_290;
  undefined8 local_288;
  undefined1 local_280 [16];
  double local_270;
  TVector<double> local_268;
  TVector<double> local_250;
  TSegment2<double> local_238;
  undefined1 local_208 [16];
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  double local_1c8;
  TTransform<double> local_1a8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_388 = param_4;
  local_368 = &this->Transform;
  local_360 = param_5;
  local_398 = this;
  local_378 = param_1;
  local_370 = param_3;
  UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_1a8,local_368);
  pTVar32 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_1a8,&local_148);
  UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_1e8._s_0,pTVar32);
  dVar11 = __real_3fe0000000000000;
  dVar46 = (local_1e8._s_0.X + local_1d0) * __real_3fe0000000000000;
  dVar17 = (local_1e8._s_0.Y + local_1c8) * __real_3fe0000000000000;
  uVar45 = (undefined4)((ulonglong)dVar17 >> 0x20);
  local_3b8._8_4_ = SUB84(dVar17,0);
  local_3b8._s_0.X = dVar46;
  local_3b8._12_4_ = uVar45;
  bVar30 = UE::Geometry::TPolygon2<double>::Contains
                     (&(this->Polygon).Outer,(TVector2<double> *)&local_3b8._s_0);
  if (!bVar30) {
    return false;
  }
  uVar24 = local_3b8._s_0.Y;
  local_380 = &(this->Polygon).Holes;
  local_3d0 = (this->Polygon).Holes.ArrayNum;
  uVar33 = (ulonglong)(int)local_3d0;
  pFVar44 = (local_380->AllocatorInstance).Data;
  pFVar39 = pFVar44 + uVar33 * 0x10;
  local_3a8 = pFVar39;
  do {
    pTVar27 = local_380;
    local_3a0 = pFVar44;
    if (local_380->ArrayNum != (int)uVar33) {
      local_3d8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_3d8);
    }
    pTVar28 = local_378;
    pFVar26 = local_388;
    if (pFVar44 == pFVar39) {
      FPCGPoint::FPCGPoint(local_388,local_378,__real_3f800000,0);
      pUVar25 = local_398;
      pTVar35 = local_368;
      if (local_370->bProjectPositions != false) {
        pTVar35 = &local_398->Transform;
        auVar60 = *(undefined1 (*) [16])(local_398->Transform).Rotation.ZW.m128d_f64;
        dVar4 = (local_398->Transform).Rotation.ZW.m128d_f64[1];
        dVar14 = (local_398->Transform).Scale3D.ZW.m128d_f64[0] * 0.0;
        dVar63 = (local_398->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar12 = (local_398->Transform).Scale3D.XY.m128d_f64[0] * dVar46;
        dVar13 = (local_398->Transform).Scale3D.XY.m128d_f64[1] * dVar17;
        uVar49 = (undefined4)((ulonglong)dVar13 >> 0x20);
        local_208 = *(undefined1 (*) [16])(pTVar35->Rotation).XY.m128d_f64;
        auVar67._8_4_ = SUB84(dVar13,0);
        auVar67._0_8_ = dVar12;
        auVar67._12_4_ = uVar49;
        dVar56 = auVar60._0_8_;
        auVar50 = blendpd(local_208,auVar60,2);
        auVar68._0_8_ = auVar67._8_8_ * local_208._0_8_ - local_208._8_8_ * dVar12;
        auVar68._8_8_ = dVar14 * local_208._8_8_ - dVar56 * dVar13;
        auVar69._8_4_ = SUB84(dVar13,0);
        auVar69._0_8_ = dVar12;
        auVar69._12_4_ = uVar49;
        local_288 = 0;
        auVar47._8_4_ = SUB84(dVar63,0);
        auVar47._0_8_ = dVar14;
        auVar47._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
        auVar47 = blendpd(auVar69,auVar47,2);
        auVar54._0_8_ = auVar47._0_8_ * dVar56 - auVar50._0_8_ * dVar14;
        auVar54._8_8_ = auVar47._8_8_ * auVar60._8_8_ - auVar50._8_8_ * dVar63;
        auVar47 = *(undefined1 (*) [16])(pTVar35->Rotation).XY.m128d_f64;
        auVar69 = blendpd(auVar68,auVar54,2);
        dVar63 = auVar68._8_8_ + auVar68._8_8_;
        dVar10 = auVar54._0_8_ + auVar54._0_8_;
        uVar49 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar70._0_8_ = auVar69._0_8_ + auVar69._0_8_;
        auVar70._8_8_ = auVar69._8_8_ + auVar69._8_8_;
        auVar58._8_4_ = SUB84(dVar10,0);
        auVar58._0_8_ = dVar63;
        auVar58._12_4_ = uVar49;
        auVar53._8_4_ = SUB84(dVar10,0);
        auVar53._0_8_ = dVar63;
        auVar53._12_4_ = uVar49;
        auVar54 = blendpd(auVar53,auVar70,2);
        auVar69 = blendpd(auVar47,auVar60,2);
        auVar59._0_8_ = auVar58._8_8_ * auVar47._0_8_ - auVar47._8_8_ * dVar63;
        auVar59._8_8_ = auVar70._0_8_ * auVar47._8_8_ - dVar56 * dVar10;
        auVar50._8_4_ = SUB84(auVar59._8_8_,0);
        auVar50._0_8_ = auVar59._0_8_;
        auVar50._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
        auVar55._0_8_ = auVar54._0_8_ * dVar56 - auVar69._0_8_ * auVar70._0_8_;
        auVar55._8_8_ = auVar54._8_8_ * auVar60._8_8_ - auVar69._8_8_ * auVar70._8_8_;
        auVar60 = blendpd(auVar59,auVar55,2);
        dVar56 = dVar63 * dVar4 + dVar12 + auVar50._8_8_ +
                 (local_398->Transform).Translation.XY.m128d_f64[0];
        dVar63 = dVar10 * dVar4 + dVar13 + auVar55._0_8_ +
                 (local_398->Transform).Translation.XY.m128d_f64[1];
        uVar49 = SUB84(dVar63,0);
        uVar64 = (undefined4)((ulonglong)dVar63 >> 0x20);
        local_270 = auVar70._0_8_ * dVar4 + dVar14 + auVar60._0_8_ +
                    (local_398->Transform).Translation.ZW.m128d_f64[0];
        local_280._8_4_ = uVar49;
        local_280._0_8_ = dVar56;
        local_280._12_4_ = uVar64;
        auVar60._8_4_ = uVar49;
        auVar60._0_8_ = dVar56;
        auVar60._12_4_ = uVar64;
        *(undefined1 (*) [16])(pFVar26->Transform).Translation.XY.m128d_f64 = auVar60;
        (pFVar26->Transform).Translation.ZW.m128d_f64[0] = local_270;
        (pFVar26->Transform).Translation.ZW.m128d_f64[1] = 0.0;
        local_298 = dVar46;
        dStack_290 = dVar17;
      }
      dVar56 = __real_3ff0000000000000;
      if (local_370->bProjectRotations != false) {
        local_2f8.Z = (pTVar35->Rotation).ZW.m128d_f64[0];
        local_2f8.W = (pTVar35->Rotation).ZW.m128d_f64[1];
        local_2f8.X = (pTVar35->Rotation).XY.m128d_f64[0];
        local_2f8.Y = (pTVar35->Rotation).XY.m128d_f64[1];
        local_338._s_0.Z = __real_3ff0000000000000;
        local_338._s_0.X = 0.0;
        local_338._s_0.Y = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_2f8,&local_268,(TVector<double> *)&local_338._s_0);
        local_2d8.Z = (pTVar28->Rotation).ZW.m128d_f64[0];
        local_2d8.W = (pTVar28->Rotation).ZW.m128d_f64[1];
        local_2d8.X = (pTVar28->Rotation).XY.m128d_f64[0];
        local_2d8.Y = (pTVar28->Rotation).XY.m128d_f64[1];
        local_318._s_0.Z = dVar56;
        local_318._s_0.X = 0.0;
        local_318._s_0.Y = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_2d8,&local_250,(TVector<double> *)&local_318._s_0);
        UE::Math::TQuat<double>::FindBetweenNormals(&local_2b8,&local_250,&local_268);
        dVar20 = (pTVar28->Rotation).XY.m128d_f64[0];
        dVar21 = (pTVar28->Rotation).XY.m128d_f64[1];
        dVar22 = (pTVar28->Rotation).ZW.m128d_f64[0];
        dVar23 = (pTVar28->Rotation).ZW.m128d_f64[1];
        dVar8 = local_2b8.X;
        dVar16 = local_2b8.W;
        auVar61._8_4_ = local_2b8.X._0_4_;
        auVar61._0_8_ = dVar8;
        auVar61._12_4_ = local_2b8.X._4_4_;
        dVar15 = local_2b8.Z;
        dVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar9 = local_2b8.Y;
        auVar48._8_4_ = local_2b8.Z._0_4_;
        auVar48._0_8_ = dVar15;
        auVar48._12_4_ = local_2b8.Z._4_4_;
        dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
        dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        (pFVar26->Transform).Rotation.XY.m128d_f64[0] =
             dVar23 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar20 * dVar16 +
             dVar9 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar15 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        (pFVar26->Transform).Rotation.XY.m128d_f64[1] =
             dVar22 * dVar8 * dVar4 + dVar21 * dVar16 + dVar9 * dVar23 * dVar6 +
             dVar15 * dVar20 * dVar7;
        (pFVar26->Transform).Rotation.ZW.m128d_f64[0] =
             dVar8 * dVar21 * dVar63 + dVar22 * dVar16 + dVar9 * dVar20 * dVar12 +
             dVar15 * dVar23 * dVar10;
        (pFVar26->Transform).Rotation.ZW.m128d_f64[1] =
             auVar61._8_8_ * dVar20 * dVar13 + dVar23 * dVar16 + dVar9 * dVar21 * dVar5 +
             auVar48._8_8_ * dVar22 * dVar14;
      }
      pUVar29 = local_360;
      if (local_360 != (UPCGMetadata *)0x0) {
        pFVar44 = (FScriptContainerElement *)&pUVar25->Polygon;
        uVar36 = 0xffffffff;
        uVar37 = 0xffffffff;
        local_3c8[0] = __real_7fefffffffffffff;
        local_348._8_4_ = SUB84(dVar17,0);
        local_348._s_0.X = dVar46;
        local_348._12_4_ = uVar45;
        local_3d4 = -1;
        dVar46 = UE::Geometry::TPolygon2<double>::DistanceSquared
                           ((TPolygon2<double> *)pFVar44,(TVector2<double> *)&local_348._s_0,
                            &local_3d4,local_3c8);
        uVar38 = 0;
        uVar45 = SUB84(dVar46,0);
        uVar49 = (undefined4)((ulonglong)dVar46 >> 0x20);
        if (0 < (pUVar25->Polygon).Holes.ArrayNum) {
          do {
            uVar37 = 0;
            if ((int)uVar38 < pTVar27->ArrayNum) {
              uVar37 = ~uVar38 >> 0x1f;
            }
            if (uVar37 == 0) {
              local_3e8 = (longlong)(int)uVar38;
              local_3e0 = (longlong)pTVar27->ArrayNum;
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar3 = (code *)swi(3);
                uVar31 = (*pcVar3)();
                return (bool)uVar31;
              }
            }
            dVar46 = UE::Geometry::TPolygon2<double>::DistanceSquared
                               ((TPolygon2<double> *)
                                ((pTVar27->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10),
                                (TVector2<double> *)&local_348._s_0,&local_3cc,local_358);
            uVar37 = uVar36;
            if (dVar46 < (double)CONCAT44(uVar49,uVar45)) {
              uVar45 = SUB84(dVar46,0);
              uVar49 = (undefined4)((ulonglong)dVar46 >> 0x20);
              local_3c8[0] = local_358[0];
              local_3d4 = local_3cc;
              uVar37 = uVar38;
            }
            uVar38 = uVar38 + 1;
            uVar36 = uVar37;
          } while ((int)uVar38 < (pUVar25->Polygon).Holes.ArrayNum);
        }
        iVar2 = local_3d4;
        if (uVar37 != 0xffffffff) {
          uVar36 = 0;
          if ((int)uVar37 < pTVar27->ArrayNum) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if (uVar36 == 0) {
            local_3e8 = (longlong)(int)uVar37;
            local_3e0 = (longlong)pTVar27->ArrayNum;
            bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar30) {
              pcVar3 = (code *)swi(3);
              uVar31 = (*pcVar3)();
              return (bool)uVar31;
            }
          }
          pFVar44 = (pTVar27->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x10;
        }
        UE::Geometry::TPolygon2<double>::Segment((TPolygon2<double> *)pFVar44,&local_238,iVar2);
        local_390._0_4_ = local_3d4;
        dVar11 = (local_3c8[0] / local_238.Extent + dVar56) * dVar11;
        local_390._4_4_ = uVar37;
        pTVar34 = TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                          *)&pUVar25->SegmentAndHoleIndicesToSegmentIndex,&local_390);
        if ((pTVar34 == (TTuple<TTuple<int,int>,int> *)0x0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x27b,L""), bVar30)) {
          pcVar3 = (code *)swi(3);
          uVar31 = (*pcVar3)();
          return (bool)uVar31;
        }
        if (__real_3feffffde0000000 <= dVar11) {
          dVar11 = __real_3feffffde0000000;
        }
        (**(code **)(*(longlong *)pUVar25 + 0x518))
                  (pUVar25,(float)((double)*(int *)&pTVar34->field_0x8 + dVar11),local_388,pUVar29);
      }
      return true;
    }
    iVar2 = *(int *)(pFVar44 + 8);
    lVar43 = (longlong)iVar2;
    pauVar40 = *(undefined1 (**) [16])pFVar44;
    if ((iVar2 < 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar30)) {
      pcVar3 = (code *)swi(3);
      uVar31 = (*pcVar3)();
      return (bool)uVar31;
    }
    iVar41 = 0;
    if (iVar2 != 0) {
      uVar36 = iVar2 - 1;
      uVar37 = 0;
      if ((int)uVar36 < iVar2) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if (uVar37 == 0) {
        local_3e8 = (longlong)(int)uVar36;
        local_3e0 = lVar43;
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar30) {
          pcVar3 = (code *)swi(3);
          uVar31 = (*pcVar3)();
          return (bool)uVar31;
        }
      }
      uVar37 = 0;
      pauVar1 = pauVar40 + (int)uVar36;
      uVar49 = *(undefined4 *)*pauVar1;
      uVar64 = *(undefined4 *)(*pauVar1 + 4);
      uVar65 = *(undefined4 *)(*pauVar1 + 8);
      uVar66 = *(undefined4 *)(*pauVar1 + 0xc);
      pFVar39 = local_3a8;
      lVar42 = lVar43;
      if (0 < iVar2) {
        do {
          uVar62 = in_XMM4._8_8_;
          uVar51 = in_XMM3._8_8_;
          uVar36 = 0;
          if ((int)uVar37 < iVar2) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if (uVar36 == 0) {
            local_3e8 = (longlong)(int)uVar37;
            local_3e0 = lVar43;
            bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            uVar62 = in_XMM4._8_8_;
            uVar51 = in_XMM3._8_8_;
            if (bVar30) {
              pcVar3 = (code *)swi(3);
              uVar31 = (*pcVar3)();
              return (bool)uVar31;
            }
          }
          auVar60 = *pauVar40;
          auVar18._4_8_ = uVar51;
          auVar18._0_4_ = uVar64;
          auVar52._0_8_ = auVar18._0_8_ << 0x20;
          auVar52._8_4_ = uVar65;
          auVar52._12_4_ = uVar66;
          dVar56 = auVar52._8_8_;
          in_XMM3._12_4_ = uVar66;
          in_XMM3._8_4_ = uVar65;
          in_XMM3._0_8_ = dVar56;
          auVar19._4_8_ = uVar62;
          auVar19._0_4_ = auVar60._4_4_;
          auVar57._0_8_ = auVar19._0_8_ << 0x20;
          auVar57._8_4_ = auVar60._8_4_;
          auVar57._12_4_ = auVar60._12_4_;
          dVar63 = auVar57._8_8_;
          uVar51 = auVar60._8_8_;
          in_XMM4._8_8_ = uVar51;
          in_XMM4._0_8_ = dVar63;
          if ((double)uVar24 < dVar56) {
            if ((dVar63 <= (double)uVar24) &&
               (in_XMM4._0_8_ = dVar63 - dVar56,
               (auVar60._0_8_ - (double)CONCAT44(uVar64,uVar49)) * ((double)uVar24 - dVar56) -
               (local_3b8._s_0.X - (double)CONCAT44(uVar64,uVar49)) * in_XMM4._0_8_ < 0.0)) {
              iVar41 = iVar41 + -1;
            }
          }
          else if (((double)uVar24 < dVar63) &&
                  (in_XMM4._0_8_ = dVar63 - dVar56,
                  0.0 < (auVar60._0_8_ - (double)CONCAT44(uVar64,uVar49)) *
                        ((double)uVar24 - dVar56) -
                        (local_3b8._s_0.X - (double)CONCAT44(uVar64,uVar49)) * in_XMM4._0_8_)) {
            iVar41 = iVar41 + 1;
          }
          uVar49 = *(undefined4 *)*pauVar40;
          uVar64 = *(undefined4 *)(*pauVar40 + 4);
          uVar65 = *(undefined4 *)(*pauVar40 + 8);
          uVar66 = *(undefined4 *)(*pauVar40 + 0xc);
          pauVar40 = pauVar40 + 1;
          uVar37 = uVar37 + 1;
          lVar42 = lVar42 + -1;
        } while (lVar42 != 0);
        pFVar39 = local_3a8;
        if (iVar41 != 0) {
          return false;
        }
      }
    }
    pFVar44 = local_3a0 + 0x10;
    uVar33 = (ulonglong)local_3d0;
  } while( true );
}

// SamplePoint @ 1498da130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGPolygon2DData::SamplePoint
          (UPCGPolygon2DData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  FPCGPoint *pFVar6;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  UPCGMetadata *pUVar8;
  bool bVar9;
  undefined1 uVar10;
  TMatrix<double> *pTVar11;
  ulonglong uVar12;
  TTuple<TTuple<int,int>,int> *pTVar13;
  int iVar14;
  uint uVar15;
  double *pdVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  undefined1 local_278 [4];
  int local_274;
  uint local_270;
  int local_26c;
  double local_268 [2];
  TVector2<double>_u_0 local_258;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  TTuple<int,int> local_238;
  FPCGPoint *local_230;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *local_228;
  TTransform<double> *local_220;
  TBox<double> *local_218;
  UPCGMetadata *local_210;
  double local_200;
  TVector2<double>_u_0 local_1f8;
  TSegment2<double> local_1e8;
  TVector<double>_u_0 local_1c0;
  double local_1a8;
  double local_1a0;
  double local_198;
  TTransform<double> local_188;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_210 = param_4;
  local_230 = param_3;
  local_220 = param_1;
  local_218 = param_2;
  UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_188,&this->Transform);
  pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_188,&local_128);
  UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_1c0._s_0,pTVar11);
  dVar4 = __real_3fe0000000000000;
  if ((local_1c0._s_0.Z <= 0.0) && (0.0 <= local_198)) {
    dVar25 = (local_1c0._s_0.X + local_1a8) * __real_3fe0000000000000;
    dVar24 = (local_1c0._s_0.Y + local_1a0) * __real_3fe0000000000000;
    uVar23 = SUB84(dVar24,0);
    uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
    local_258._8_4_ = uVar23;
    local_258._s_0.X = dVar25;
    local_258._12_4_ = uVar26;
    bVar9 = UE::Geometry::TPolygon2<double>::Contains
                      (&(this->Polygon).Outer,(TVector2<double> *)&local_258._s_0);
    if (bVar9) {
      uVar5 = local_258._s_0.Y;
      local_228 = &(this->Polygon).Holes;
      local_270 = (this->Polygon).Holes.ArrayNum;
      uVar12 = (ulonglong)(int)local_270;
      pFVar17 = (local_228->AllocatorInstance).Data;
      pFVar20 = pFVar17 + uVar12 * 0x10;
      local_248 = pFVar20;
      do {
        pTVar7 = local_228;
        local_240 = pFVar17;
        if (local_228->ArrayNum != (int)uVar12) {
          local_278[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_278);
        }
        pFVar6 = local_230;
        if (pFVar17 == pFVar20) {
          FPCGPoint::FPCGPoint(local_230,local_220,__real_3f800000,0);
          pUVar8 = local_210;
          dVar24 = (local_218->Min).field0_0x0._s_0.Y;
          (pFVar6->BoundsMin).field0_0x0._s_0.X = (local_218->Min).field0_0x0._s_0.X;
          (pFVar6->BoundsMin).field0_0x0._s_0.Y = dVar24;
          (pFVar6->BoundsMin).field0_0x0._s_0.Z = (local_218->Min).field0_0x0._s_0.Z;
          dVar24 = (local_218->Max).field0_0x0._s_0.Y;
          (pFVar6->BoundsMax).field0_0x0._s_0.X = (local_218->Max).field0_0x0._s_0.X;
          (pFVar6->BoundsMax).field0_0x0._s_0.Y = dVar24;
          (pFVar6->BoundsMax).field0_0x0._s_0.Z = (local_218->Max).field0_0x0._s_0.Z;
          if (local_210 != (UPCGMetadata *)0x0) {
            pFVar17 = (FScriptContainerElement *)&this->Polygon;
            uVar18 = 0xffffffff;
            uVar19 = 0xffffffff;
            local_268[0] = __real_7fefffffffffffff;
            local_1f8._8_4_ = uVar23;
            local_1f8._s_0.X = dVar25;
            local_1f8._12_4_ = uVar26;
            local_274 = -1;
            dVar25 = UE::Geometry::TPolygon2<double>::DistanceSquared
                               ((TPolygon2<double> *)pFVar17,(TVector2<double> *)&local_1f8._s_0,
                                &local_274,local_268);
            uVar23 = SUB84(dVar25,0);
            uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
            uVar15 = 0;
            if (0 < (this->Polygon).Holes.ArrayNum) {
              do {
                uVar19 = 0;
                if ((int)uVar15 < pTVar7->ArrayNum) {
                  uVar19 = ~uVar15 >> 0x1f;
                }
                if (uVar19 == 0) {
                  local_288 = (longlong)(int)uVar15;
                  local_280 = (longlong)pTVar7->ArrayNum;
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    uVar10 = (*pcVar3)();
                    return (bool)uVar10;
                  }
                }
                dVar25 = UE::Geometry::TPolygon2<double>::DistanceSquared
                                   ((TPolygon2<double> *)
                                    ((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10
                                    ),(TVector2<double> *)&local_1f8._s_0,&local_26c,&local_200);
                uVar19 = uVar18;
                if (dVar25 < (double)CONCAT44(uVar26,uVar23)) {
                  uVar23 = SUB84(dVar25,0);
                  uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
                  local_268[0] = local_200;
                  local_274 = local_26c;
                  uVar19 = uVar15;
                }
                uVar15 = uVar15 + 1;
                uVar18 = uVar19;
              } while ((int)uVar15 < (this->Polygon).Holes.ArrayNum);
            }
            iVar2 = local_274;
            if (uVar19 != 0xffffffff) {
              uVar18 = 0;
              if ((int)uVar19 < pTVar7->ArrayNum) {
                uVar18 = ~uVar19 >> 0x1f;
              }
              if (uVar18 == 0) {
                local_288 = (longlong)(int)uVar19;
                local_280 = (longlong)pTVar7->ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar3 = (code *)swi(3);
                  uVar10 = (*pcVar3)();
                  return (bool)uVar10;
                }
              }
              pFVar17 = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x10;
            }
            UE::Geometry::TPolygon2<double>::Segment((TPolygon2<double> *)pFVar17,&local_1e8,iVar2);
            local_238._0_4_ = local_274;
            dVar4 = (local_268[0] / local_1e8.Extent + __real_3ff0000000000000) * dVar4;
            local_238._4_4_ = uVar19;
            pTVar13 = TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                              *)&this->SegmentAndHoleIndicesToSegmentIndex,&local_238);
            if ((pTVar13 == (TTuple<TTuple<int,int>,int> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x27b,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              uVar10 = (*pcVar3)();
              return (bool)uVar10;
            }
            if (__real_3feffffde0000000 <= dVar4) {
              dVar4 = __real_3feffffde0000000;
            }
            (**(code **)(*(longlong *)this + 0x518))
                      (this,(float)(dVar4 + (double)*(int *)&pTVar13->field_0x8),local_230,pUVar8);
          }
          return true;
        }
        iVar2 = *(int *)(pFVar17 + 8);
        lVar21 = (longlong)iVar2;
        pdVar16 = *(double **)pFVar17;
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        iVar14 = 0;
        if (iVar2 != 0) {
          uVar18 = iVar2 - 1;
          uVar19 = 0;
          if ((int)uVar18 < iVar2) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if (uVar19 == 0) {
            local_288 = (longlong)(int)uVar18;
            local_280 = lVar21;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              uVar10 = (*pcVar3)();
              return (bool)uVar10;
            }
          }
          uVar19 = 0;
          pdVar1 = pdVar16 + (longlong)(int)uVar18 * 2;
          uVar28 = *(undefined4 *)pdVar1;
          uVar29 = *(undefined4 *)((longlong)pdVar1 + 4);
          uVar30 = *(undefined4 *)(pdVar1 + 1);
          uVar31 = *(undefined4 *)((longlong)pdVar1 + 0xc);
          pFVar20 = local_248;
          lVar22 = lVar21;
          if (0 < iVar2) {
            do {
              uVar18 = 0;
              if ((int)uVar19 < iVar2) {
                uVar18 = ~uVar19 >> 0x1f;
              }
              if (uVar18 == 0) {
                local_288 = (longlong)(int)uVar19;
                local_280 = lVar21;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar9) {
                  pcVar3 = (code *)swi(3);
                  uVar10 = (*pcVar3)();
                  return (bool)uVar10;
                }
              }
              dVar24 = pdVar16[1];
              dVar27 = (double)CONCAT44(uVar31,uVar30);
              if ((double)uVar5 < dVar27) {
                if ((dVar24 <= (double)uVar5) &&
                   (((double)uVar5 - dVar27) * (*pdVar16 - (double)CONCAT44(uVar29,uVar28)) -
                    (dVar24 - dVar27) * (local_258._s_0.X - (double)CONCAT44(uVar29,uVar28)) < 0.0))
                {
                  iVar14 = iVar14 + -1;
                }
              }
              else if (((double)uVar5 < dVar24) &&
                      (0.0 < ((double)uVar5 - dVar27) * (*pdVar16 - (double)CONCAT44(uVar29,uVar28))
                             - (dVar24 - dVar27) *
                               (local_258._s_0.X - (double)CONCAT44(uVar29,uVar28)))) {
                iVar14 = iVar14 + 1;
              }
              uVar28 = *(undefined4 *)pdVar16;
              uVar29 = *(undefined4 *)((longlong)pdVar16 + 4);
              uVar30 = *(undefined4 *)(pdVar16 + 1);
              uVar31 = *(undefined4 *)((longlong)pdVar16 + 0xc);
              pdVar16 = pdVar16 + 2;
              uVar19 = uVar19 + 1;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            pFVar20 = local_248;
            if (iVar14 != 0) {
              return false;
            }
          }
        }
        pFVar17 = local_240 + 0x10;
        uVar12 = (ulonglong)local_270;
      } while( true );
    }
  }
  return false;
}

// Serialize @ 1498de6c0

void __thiscall UPCGPolygon2DData::Serialize(UPCGPolygon2DData *this,FArchive *param_1)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  PCGPolygon2DData::SerializePolygon(&this->Polygon,param_1);
  UE::Math::operator<<(param_1,&this->Transform);
  TArrayPrivateFriend::Serialize<__int64,TSizedDefaultAllocator<32>_>
            (param_1,&this->VertexEntryKeys);
  if ((param_1->field_0x28 & 1) != 0) {
    UpdateMappings(this);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Serialize @ 1498de790

void __thiscall
UPCGPolygon2DData::Serialize(UPCGPolygon2DData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FLLMScope local_res8 [2];
  FSlotBase local_res10;
  FName local_res18;
  FMemScope local_res20;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPCGCustomVersion::GUID);
  PCGPolygon2DData::SerializePolygon(&this->Polygon,pFVar1);
  UE::Math::operator<<(pFVar1,&this->Transform);
  TArrayPrivateFriend::Serialize<__int64,TSizedDefaultAllocator<32>_>(pFVar1,&this->VertexEntryKeys)
  ;
  if ((pFVar1->field_0x28 & 1) != 0) {
    UpdateMappings(this);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetDomainFromDomainID @ 1498df000

bool __thiscall
UPCGPolygon2DData::SetDomainFromDomainID
          (UPCGPolygon2DData *this,FPCGMetadataDomainID *param_1,
          FPCGAttributePropertySelector *param_2)

{
  bool bVar1;
  
  if ((param_1->Flag == PCGMetadataDomainID::Elements.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Elements.CustomFlag)) {
    FPCGAttributePropertySelector::SetDomainName(param_2,PCGPolygon2DData::VertexDomainName,false);
    return true;
  }
  bVar1 = UPCGData::SetDomainFromDomainID((UPCGData *)this,param_1,param_2);
  return bVar1;
}

// SetPolygon @ 1498e0670

void __thiscall
UPCGPolygon2DData::SetPolygon
          (UPCGPolygon2DData *this,TGeneralPolygon2<double> *param_1,
          TArrayView<__int64_const_,int> *param_2)

{
  TGeneralPolygon2<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar1 = &this->Polygon;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->Outer).Vertices.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->Outer).Vertices.AllocatorInstance.Data =
         (param_1->Outer).Vertices.AllocatorInstance.Data;
    (param_1->Outer).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Polygon).Outer.Vertices.ArrayNum = (param_1->Outer).Vertices.ArrayNum;
    (this->Polygon).Outer.Vertices.ArrayMax = (param_1->Outer).Vertices.ArrayMax;
    (param_1->Outer).Vertices.ArrayNum = 0;
    (param_1->Outer).Vertices.ArrayMax = 0;
  }
  pTVar3 = &param_1->Holes;
  (this->Polygon).bOuterIsCW = param_1->bOuterIsCW;
  pTVar4 = &(this->Polygon).Holes;
  if (pTVar4 != pTVar3) {
    DestructItems<UE::Geometry::TPolygon2<double>,int>
              ((TPolygon2<double> *)(pTVar4->AllocatorInstance).Data,(this->Polygon).Holes.ArrayNum)
    ;
    pFVar2 = (pTVar4->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Polygon).Holes.ArrayNum = (param_1->Holes).ArrayNum;
    (this->Polygon).Holes.ArrayMax = (param_1->Holes).ArrayMax;
    (param_1->Holes).ArrayNum = 0;
    (param_1->Holes).ArrayMax = 0;
  }
  UpdateMappings(this);
  if ((param_2 != (TArrayView<__int64_const_,int> *)0x0) &&
     (param_2->ArrayNum ==
      *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8 -
      *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34)) {
    TArray<__int64,TSizedDefaultAllocator<32>_>::operator=<__int64_const_,int>
              (&this->VertexEntryKeys,param_2);
  }
  return;
}

// SetPolygon @ 1498e0760

void __thiscall
UPCGPolygon2DData::SetPolygon
          (UPCGPolygon2DData *this,TGeneralPolygon2<double> *param_1,
          TArrayView<__int64_const_,int> *param_2)

{
  UE::Geometry::TGeneralPolygon2<double>::operator=(&this->Polygon,param_1);
  UpdateMappings(this);
  if ((param_2 != (TArrayView<__int64_const_,int> *)0x0) &&
     (param_2->ArrayNum ==
      *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8 -
      *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34)) {
    TArray<__int64,TSizedDefaultAllocator<32>_>::operator=<__int64_const_,int>
              (&this->VertexEntryKeys,param_2);
  }
  return;
}

// SetTransform @ 1498f5850

void __thiscall
UPCGPolygon2DData::SetTransform(UPCGPolygon2DData *this,TTransform<double> *param_1,bool param_2)

{
  bool bVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  double dStack_60;
  TVector<double>_u_0 local_58;
  TQuat<double> local_38;
  
  dVar2 = __real_3ff0000000000000;
  bVar1 = false;
  if (param_2) {
    local_78._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_60 = (param_1->Rotation).ZW.m128d_f64[1];
    local_78._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
    local_78._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
    uVar3 = SUB84(__real_3ff0000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_98._s_0.X = 0.0;
    local_98._s_0.Y = 0.0;
    local_98._16_8_ = __real_3ff0000000000000;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&local_78._s_0,(TVector<double> *)&local_58._s_0,
               (TVector<double> *)&local_98._s_0);
    local_38.Z = (this->Transform).Rotation.ZW.m128d_f64[0];
    local_38.W = (this->Transform).Rotation.ZW.m128d_f64[1];
    local_38.X = (this->Transform).Rotation.XY.m128d_f64[0];
    local_38.Y = (this->Transform).Rotation.XY.m128d_f64[1];
    local_78._s_0.Z = dVar2;
    local_78._s_0.X = 0.0;
    local_78._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_38,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0);
    dVar2 = local_58._s_0.Y * local_98._s_0.Y + local_58._s_0.X * local_98._s_0.X +
            local_58._s_0.Z * local_98._s_0.Z;
    if (dVar2 <= 0.0) {
      if (0.0 <= dVar2) {
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (undefined4)__real_bff0000000000000;
        uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      }
    }
    bVar1 = (double)CONCAT44(uVar4,uVar3) < 0.0;
  }
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  if (bVar1) {
    PCGPolygon2DData::ReversePolygon(&this->Polygon,&this->VertexEntryKeys);
  }
  return;
}

// StaticRegisterNativesUPCGPolygon2DData @ 1498f69c0

void __cdecl UPCGPolygon2DData::StaticRegisterNativesUPCGPolygon2DData(void)

{
  return;
}

// UpdateMappings @ 1498f95f0

void __thiscall UPCGPolygon2DData::UpdateMappings(UPCGPolygon2DData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [16];
  int local_res18 [2];
  TTuple<int,int> local_res20;
  int local_78;
  uint local_74;
  TTuple<int,int> local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  
  TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>,FDefaultSetAllocator>
           *)&this->SegmentIndexToSegmentAndHoleIndices);
  TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
           *)&this->SegmentAndHoleIndicesToSegmentIndex);
  piVar1 = &this->SegmentCount;
  iVar6 = 0;
  *piVar1 = 0;
  if (0 < (this->Polygon).Outer.Vertices.ArrayNum) {
    local_60 = local_res18;
    local_68 = piVar1;
    do {
      local_res18[1] = 0xffffffff;
      local_res18[0] = iVar6;
      TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,TTuple<int,int>_&&>_>
                ((TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>,FDefaultSetAllocator>
                  *)&this->SegmentIndexToSegmentAndHoleIndices,
                 (TPairInitializer<int_const_&,TTuple<int,int>_&&> *)local_res8,(bool *)&local_68);
      local_res20._4_4_ = 0xffffffff;
      local_res20._0_4_ = iVar6;
      TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
      ::Emplace<TTuple<int,int>,int_const_&>
                ((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                  *)&this->SegmentAndHoleIndicesToSegmentIndex,&local_res20,piVar1);
      *piVar1 = *piVar1 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (this->Polygon).Outer.Vertices.ArrayNum);
  }
  iVar6 = (this->Polygon).Holes.ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
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
      pFVar2 = (this->Polygon).Holes.AllocatorInstance.Data;
      iVar6 = 0;
      if (0 < *(int *)(pFVar2 + lVar8 + 8)) {
        local_50 = &local_78;
        local_58 = piVar1;
        do {
          local_78 = iVar6;
          local_74 = uVar7;
          TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,TTuple<int,int>_&&>_>
                    ((TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>,FDefaultSetAllocator>
                      *)&this->SegmentIndexToSegmentAndHoleIndices,
                     (TPairInitializer<int_const_&,TTuple<int,int>_&&> *)(local_res8 + 8),
                     (bool *)&local_58);
          local_70._0_4_ = iVar6;
          local_70._4_4_ = uVar7;
          TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
          ::Emplace<TTuple<int,int>,int_const_&>
                    ((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                      *)&this->SegmentAndHoleIndicesToSegmentIndex,&local_70,piVar1);
          *piVar1 = *piVar1 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(pFVar2 + lVar8 + 8));
      }
      iVar6 = (this->Polygon).Holes.ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// WriteMetadataToEntry @ 1498f9ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGPolygon2DData::WriteMetadataToEntry
          (UPCGPolygon2DData *this,float param_1,long64 *param_2,UPCGMetadata *param_3)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPCGMetadataDomain *pFVar6;
  FPCGMetadataDomain *this_00;
  TTuple<TTuple<int,int>,int> *pTVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint *puVar12;
  longlong lVar13;
  float fVar14;
  undefined4 in_XMM1_Db;
  undefined1 auVar16 [16];
  undefined1 auStackY_108 [32];
  TTuple<int,int> local_d8;
  TTuple<int,int> local_d0;
  undefined8 local_c8;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_ac;
  TArrayView<TTuple<__int64,float>,int> local_a8;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined1 auVar15 [16];
  
  if (param_3 != (UPCGMetadata *)0x0) {
    local_78 = __security_cookie.value ^ (ulonglong)auStackY_108;
    if (*(UPCGMetadata **)&this->field_0x38 == (UPCGMetadata *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2526822602761043531>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                         ,0x1b5,"Metadata");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if ((this->VertexEntryKeys).ArrayNum != 0) {
      pFVar6 = UPCGMetadata::GetConstMetadataDomain
                         (*(UPCGMetadata **)&this->field_0x38,&PCGMetadataDomainID::Elements);
      this_00 = UPCGMetadata::GetMetadataDomain(param_3,&PCGMetadataDomainID::Elements);
      if ((pFVar6 != (FPCGMetadataDomain *)0x0) && (this_00 != (FPCGMetadataDomain *)0x0)) {
        auVar16._4_4_ = in_XMM1_Db;
        auVar16._0_4_ = param_1;
        iVar8 = (int)param_1;
        fVar14 = param_1;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != param_1)) {
          auVar16._8_4_ = in_XMM1_Db;
          auVar16._12_4_ = in_XMM1_Db;
          auVar15._8_8_ = auVar16._8_8_;
          auVar15._4_4_ = param_1;
          auVar15._0_4_ = param_1;
          uVar5 = movmskps((int)this_00,auVar15);
          fVar14 = (float)(int)(iVar8 - (uVar5 & 1));
        }
        fVar14 = param_1 - fVar14;
        uVar5 = (int)ROUND((param_1 + param_1) - __real_3f000000) >> 1;
        if (*(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x8 !=
            *(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x34) {
          puVar11 = *(undefined1 **)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x40;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(this->SegmentIndexToSegmentAndHoleIndices).field_0x38;
          }
          iVar8 = *(int *)(puVar11 +
                          (ulonglong)
                          (*(int *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x48 - 1U &
                          uVar5) * 4);
          if (iVar8 != -1) {
            do {
              lVar1 = *(longlong *)&this->SegmentIndexToSegmentAndHoleIndices +
                      (longlong)iVar8 * 0x14;
              if (*(uint *)(*(longlong *)&this->SegmentIndexToSegmentAndHoleIndices +
                           (longlong)iVar8 * 0x14) == uVar5) {
                piVar10 = (int *)(lVar1 + 4);
                if (lVar1 == 0) {
                  piVar10 = (int *)0x0;
                }
                if (piVar10 != (int *)0x0) {
                  iVar8 = *piVar10;
                  iVar2 = piVar10[1];
                  if ((((int)uVar5 < 0) || ((this->VertexEntryKeys).ArrayNum <= (int)uVar5)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("VertexEntryKeys.IsValidIndex(CurrentVertexIndex)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                                         ,0x1d6,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar9 = 0;
                  if ((int)uVar5 < (this->VertexEntryKeys).ArrayNum) {
                    uVar9 = ~uVar5 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  lVar1 = *(longlong *)
                           ((this->VertexEntryKeys).AllocatorInstance.Data +
                           (longlong)(int)uVar5 * 8);
                  lVar13 = lVar1;
                  if (__real_358637bd < fVar14) {
                    local_d8._0_4_ = iVar8 + 1;
                    local_d8._4_4_ = iVar2;
                    pTVar7 = TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                             ::Find((TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                                     *)&this->SegmentAndHoleIndicesToSegmentIndex,&local_d8);
                    puVar12 = (uint *)&pTVar7->field_0x8;
                    if (pTVar7 == (TTuple<TTuple<int,int>,int> *)0x0) {
                      puVar12 = (uint *)0x0;
                    }
                    if (puVar12 == (uint *)0x0) {
                      local_d0._0_4_ = 0;
                      local_d0._4_4_ = iVar2;
                      pTVar7 = TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                               ::Find((TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
                                       *)&this->SegmentAndHoleIndicesToSegmentIndex,&local_d0);
                      puVar12 = (uint *)&pTVar7->field_0x8;
                      if (pTVar7 == (TTuple<TTuple<int,int>,int> *)0x0) {
                        puVar12 = (uint *)0x0;
                      }
                      if (puVar12 == (uint *)0x0) goto LAB_1498fa2dd;
                    }
                    uVar5 = *puVar12;
                    if ((((int)uVar5 < 0) || ((this->VertexEntryKeys).ArrayNum <= (int)uVar5)) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("VertexEntryKeys.IsValidIndex(NextVertexIndex)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                                           ,0x1f0,L""), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    uVar9 = 0;
                    if ((int)uVar5 < (this->VertexEntryKeys).ArrayNum) {
                      uVar9 = ~uVar5 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    lVar13 = *(longlong *)
                              ((this->VertexEntryKeys).AllocatorInstance.Data +
                              (longlong)(int)uVar5 * 8);
                    if ((fVar14 < __real_3f7fffef) && (lVar1 != -1)) {
                      FPCGMetadataDomain::InitializeOnSet
                                (this_00,param_2,lVar1,pFVar6,-1,(FPCGMetadataDomain *)0x0);
                      if (lVar13 == -1) {
                        return;
                      }
                      local_a8.DataPtr = (TTuple<__int64,float> *)local_98;
                      local_98._8_4_ = __real_3f800000 - fVar14;
                      local_c8._0_4_ = (undefined4)lVar1;
                      local_c8._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
                      local_a8.ArrayNum = 2;
                      local_b8._0_4_ = (undefined4)lVar13;
                      local_b8._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
                      local_88 = (undefined4)local_b8;
                      uStack_84 = local_b8._4_4_;
                      uStack_7c = uStack_ac;
                      local_98._0_4_ = (undefined4)local_c8;
                      local_98._4_4_ = local_c8._4_4_;
                      uStack_8c = uStack_bc;
                      local_c8 = lVar1;
                      local_b8 = lVar13;
                      fStack_80 = fVar14;
                      FPCGMetadataDomain::ComputeWeightedAttribute(this_00,param_2,&local_a8,pFVar6)
                      ;
                      return;
                    }
                  }
LAB_1498fa2dd:
                  FPCGMetadataDomain::InitializeOnSet
                            (this_00,param_2,lVar13,pFVar6,-1,(FPCGMetadataDomain *)0x0);
                  return;
                }
                break;
              }
              iVar8 = *(int *)(lVar1 + 0xc);
            } while (iVar8 != -1);
          }
        }
        *param_2 = -1;
      }
    }
  }
  return;
}

// WriteMetadataToPoint @ 1498fa8b0

void __thiscall
UPCGPolygon2DData::WriteMetadataToPoint
          (UPCGPolygon2DData *this,float param_1,FPCGPoint *param_2,UPCGMetadata *param_3)

{
  WriteMetadataToEntry(this,param_1,&param_2->MetadataEntry,param_3);
  return;
}

