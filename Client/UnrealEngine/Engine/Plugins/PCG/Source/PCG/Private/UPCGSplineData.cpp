// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 59

// StaticClass @ 149853990

UClass * __cdecl UPCGSplineData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineData",
               &Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton,
               StaticRegisterNativesUPCGSplineData,800,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGSplineData>,InternalVTableHelperCtorCaller<UPCGSplineData>,
               local_res8,UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14985b170

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
`UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  UPCGSplineData::CreateStaticAccessor((FPCGAttributePropertySelector *)param_1,param_3);
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b270

TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> __cdecl
`UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  longlong lVar1;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar2;
  undefined8 *local_res8;
  
  TVar2 = UPCGSplineData::CreateStaticAccessor((FPCGAttributePropertySelector *)&local_res8,param_3)
  ;
  lVar1 = (TVar2.Ptr)->_padding_;
  (TVar2.Ptr)->_padding_ = 0;
  param_1->_padding_ = lVar1;
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b540

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __cdecl
`UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  undefined1 local_res8 [32];
  
  operator()(local_res8,param_1,param_2,param_3);
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b7f0

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__cdecl `UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_4>::<lambda_invoker_cdecl>
                  (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  undefined1 local_res8 [32];
  
  operator()(local_res8,param_1,param_2,param_3);
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// UPCGSplineData @ 14988efe0

UPCGSplineData * __thiscall
UPCGSplineData::UPCGSplineData(UPCGSplineData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGSplineData__6B_;
  FPCGSplineStruct::FPCGSplineStruct(&this->SplineStruct);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  return this;
}

// UPCGSplineData @ 14988f060

UPCGSplineData * __thiscall UPCGSplineData::UPCGSplineData(UPCGSplineData *this)

{
  code *pcVar1;
  bool bVar2;
  FObjectInitializer *pFVar3;
  UPCGSplineData *pUVar4;
  FPCGMetadataDomainID local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,pFVar3);
  *(undefined ***)this = &___7UPCGSplineData__6B_;
  FPCGSplineStruct::FPCGSplineStruct(&this->SplineStruct);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  if (*(longlong *)&this->field_0x38 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UPCGSplineData *)(*pcVar1)();
      return pUVar4;
    }
  }
  local_18 = PCGMetadataDomainID::Elements;
  UPCGMetadata::SetupDomain(*(UPCGMetadata **)&this->field_0x38,&local_18,true);
  return this;
}

// ~UPCGSplineData @ 149891a60

void __thiscall UPCGSplineData::~UPCGSplineData(UPCGSplineData *this)

{
  *(undefined ***)this = &___7UPCGSplineData__6B_;
  FPCGSplineStruct::~FPCGSplineStruct(&this->SplineStruct);
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 149898a30

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __thiscall
`UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_3>::operator()
          (void *this,UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *pFVar4;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined7 in_register_00000089;
  FString local_28;
  FString local_18;
  
  if (param_2 == (FPCGAttributePropertySelector *)0x0) {
    pFVar6 = GetTypeName<UPCGSplineData>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar3 = UPCGSplineData::StaticClass();
  lVar2 = *(longlong *)&(param_2->DomainName).Number;
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pFVar6 = GetTypeName<UPCGSplineData>(&local_28);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UPCGData>(&local_18,(UPCGData *)param_2);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  iVar1 = *(int *)(CONCAT71(in_register_00000089,param_3) + 8);
  (**(code **)(param_2->_padding_ + 0x348))
            (param_2,&local_28,CONCAT71(in_register_00000089,param_3));
  if ((((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data ==
        PCGMetadataDomainID::Data.Flag) &&
      (local_28.Data.AllocatorInstance.Data._4_4_ == PCGMetadataDomainID::Data.CustomFlag)) &&
     (iVar1 - 2U < 2)) {
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar5 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
                         (pFVar4,(UPCGSplineData *)param_2,true);
      goto LAB_149898b50;
    }
  }
  else if ((((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data == Default) ||
           (((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data ==
             PCGMetadataDomainID::Elements.Flag &&
            (local_28.Data.AllocatorInstance.Data._4_4_ == PCGMetadataDomainID::Elements.CustomFlag)
            ))) && (iVar1 - 2U < 2)) {
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar5 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
                         (pFVar4,(UPCGSplineData *)param_2,false);
      goto LAB_149898b50;
    }
  }
  else if ((((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data == Default) ||
           (((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data ==
             PCGMetadataDomainID::Elements.Flag &&
            (local_28.Data.AllocatorInstance.Data._4_4_ == PCGMetadataDomainID::Elements.CustomFlag)
            ))) && (iVar1 == 0)) {
    pFVar5 = ::operator_new(0x38);
    if (pFVar5 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0) {
      pFVar5 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>
                         (pFVar5,(UPCGSplineData *)param_2);
      goto LAB_149898b50;
    }
  }
  pFVar5 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0;
LAB_149898b50:
  param_1->_padding_ = (longlong)pFVar5;
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// operator() @ 149899630

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__thiscall
`UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_4>::operator()
          (void *this,UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *pFVar4;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined7 in_register_00000089;
  FString local_28;
  FString local_18;
  
  if (param_2 == (FPCGAttributePropertySelector *)0x0) {
    pFVar6 = GetTypeName<UPCGSplineData>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar3 = UPCGSplineData::StaticClass();
  lVar2 = *(longlong *)&(param_2->DomainName).Number;
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pFVar6 = GetTypeName<UPCGSplineData>(&local_28);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,(UPCGData *)param_2);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  iVar1 = *(int *)(CONCAT71(in_register_00000089,param_3) + 8);
  (**(code **)(param_2->_padding_ + 0x348))
            (param_2,&local_28,CONCAT71(in_register_00000089,param_3));
  if ((((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data ==
        PCGMetadataDomainID::Data.Flag) &&
      (local_28.Data.AllocatorInstance.Data._4_4_ == PCGMetadataDomainID::Data.CustomFlag)) &&
     (iVar1 - 2U < 2)) {
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar5 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
                         (pFVar4,(UPCGSplineData *)param_2,true);
      goto LAB_149899750;
    }
  }
  else if ((((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data == Default) ||
           (((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data ==
             PCGMetadataDomainID::Elements.Flag &&
            (local_28.Data.AllocatorInstance.Data._4_4_ == PCGMetadataDomainID::Elements.CustomFlag)
            ))) && (iVar1 - 2U < 2)) {
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar5 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>
                         (pFVar4,(UPCGSplineData *)param_2,false);
      goto LAB_149899750;
    }
  }
  else if ((((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data == Default) ||
           (((EPCGMetadataDomainFlag)local_28.Data.AllocatorInstance.Data ==
             PCGMetadataDomainID::Elements.Flag &&
            (local_28.Data.AllocatorInstance.Data._4_4_ == PCGMetadataDomainID::Elements.CustomFlag)
            ))) && (iVar1 == 0)) {
    pFVar5 = ::operator_new(0x38);
    if (pFVar5 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0) {
      pFVar5 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>
                         (pFVar5,(UPCGSplineData *)param_2);
      goto LAB_149899750;
    }
  }
  pFVar5 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0;
LAB_149899750:
  param_1->_padding_ = (longlong)pFVar5;
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// AddToCrc @ 14989e220

void __thiscall UPCGSplineData::AddToCrc(UPCGSplineData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UClass *this_00;
  UPackage *pUVar1;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone(*(UPCGMetadata **)&this->field_0x38);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::AddToCrc(*(UPCGMetadata **)&this->field_0x38,param_1,param_2);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineStruct,(UObject *)pUVar1,
                         L"PCGSplineStruct");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton,(FArchive *)param_1,
             &this->SplineStruct,(void *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AllocateMetadataEntries @ 14989ee10

void __thiscall UPCGSplineData::AllocateMetadataEntries(UPCGSplineData *this)

{
  FPCGSplineStruct::AllocateMetadataEntries(&this->SplineStruct);
  return;
}

// ApplyTo @ 14989f190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGSplineData::ApplyTo(UPCGSplineData *this,USplineComponent *param_1)

{
  FSpline *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  if (param_1 == (USplineComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSplineComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                       ,0xb7,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  USplineComponent::ClearSplinePoints(param_1,false);
  USceneComponent::SetWorldTransform
            ((USceneComponent *)param_1,&(this->SplineStruct).Transform,false,(FHitResult *)0x0,None
            );
  dVar3 = (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.Y;
  (param_1->DefaultUpVector).field0_0x0._s_0.X =
       (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.X;
  (param_1->DefaultUpVector).field0_0x0._s_0.Y = dVar3;
  (param_1->DefaultUpVector).field0_0x0._s_0.Z =
       (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.Z;
  param_1->ReparamStepsPerSegment = (this->SplineStruct).ReparamStepsPerSegment;
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     (pFVar1 = &(this->SplineStruct).Spline, pFVar1->CurrentImplementation != '\0')) {
    USplineComponent::SetSpline(param_1,pFVar1);
  }
  else {
    USplineComponent::SetSpline(param_1,&(this->SplineStruct).SplineCurves);
  }
  param_1->bStationaryEndpoints = false;
  USplineComponent::SetClosedLoop(param_1,(this->SplineStruct).bClosedLoop,true);
  (**(code **)(param_1->_padding_ + 0xad0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014989f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x5b0))(param_1);
  return;
}

// CopyInternal @ 1498a5120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall UPCGSplineData::CopyInternal(UPCGSplineData *this,FPCGContext *param_1)

{
  UPCGSplineData *pUVar1;
  
  pUVar1 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(param_1);
  (**(code **)(*(longlong *)this + 0x538))(this,pUVar1);
  return (UPCGSpatialData *)pUVar1;
}

// CopySplineData @ 1498a64c0

void __thiscall UPCGSplineData::CopySplineData(UPCGSplineData *this,UPCGSplineData *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  FPCGSplineStruct::operator=(&param_1->SplineStruct,&this->SplineStruct);
  dVar1 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (param_1->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (param_1->CachedBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (param_1->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (param_1->CachedBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (param_1->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (param_1->CachedBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (this->CachedBounds).Pad[0];
  uVar3 = (this->CachedBounds).Pad[1];
  uVar4 = (this->CachedBounds).Pad[2];
  uVar5 = (this->CachedBounds).Pad[3];
  uVar6 = (this->CachedBounds).Pad[4];
  uVar7 = (this->CachedBounds).Pad[5];
  uVar8 = (this->CachedBounds).Pad[6];
  (param_1->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (param_1->CachedBounds).Pad[0] = uVar2;
  (param_1->CachedBounds).Pad[1] = uVar3;
  (param_1->CachedBounds).Pad[2] = uVar4;
  (param_1->CachedBounds).Pad[3] = uVar5;
  (param_1->CachedBounds).Pad[4] = uVar6;
  (param_1->CachedBounds).Pad[5] = uVar7;
  (param_1->CachedBounds).Pad[6] = uVar8;
  return;
}

// CreateAccessorKeys @ 1498a7c90

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __thiscall
UPCGSplineData::CreateAccessorKeys
          (UPCGSplineData *this,FPCGAttributePropertySelector *param_1,bool param_2)

{
  int iVar1;
  FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *pFVar2;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *pFVar3;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_2) + 8);
  (**(code **)(*(longlong *)this + 0x348))(this,local_18);
  if (((local_18[0] == PCGMetadataDomainID::Data.Flag) &&
      (local_14 == PCGMetadataDomainID::Data.CustomFlag)) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>(pFVar2,this,true);
      goto LAB_1498a7d77;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>(pFVar2,this,false);
      goto LAB_1498a7d77;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 == 0)) {
    pFVar3 = ::operator_new(0x38);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0) {
      pFVar3 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>(pFVar3,this);
      goto LAB_1498a7d77;
    }
  }
  pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0;
LAB_1498a7d77:
  param_1->_padding_ = (longlong)pFVar3;
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// CreateBasePointData @ 1498ab040

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
UPCGSplineData::CreateBasePointData
          (UPCGSplineData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  UPCGBasePointData *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  undefined1 auStackY_238 [32];
  UPCGSplineData *local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  undefined1 local_1e6;
  undefined1 local_1e5;
  UClass *local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_1c8;
  undefined8 local_1c0;
  FName local_1b8;
  UPackage *local_1b0;
  FPCGProjectionParams local_1a8;
  undefined1 local_188 [128];
  void *local_108;
  undefined4 local_100;
  void *local_f8;
  ForAnyElementType local_e0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar5 = GetTransientPackage();
  pUVar8 = (UClass *)0x0;
  local_1b0 = pUVar5;
  if (param_1 == (FPCGContext *)0x0) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGBasePointData *)(*pcVar3)();
      return pUVar6;
    }
    lVar2 = *(longlong *)param_2.Class.field0_0x0;
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    pUVar9 = pUVar8;
    if ((lVar2 != 0) &&
       (pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar9 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar6 = NewObject<UPCGBasePointData>
                       ((UObject *)pUVar5,pUVar9,local_1b8,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar6 = FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_1b0,
                        (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
  }
  local_1f8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this == (UPCGSplineData *)0x0)) {
    local_1f0 = 0;
    local_1e8 = 0x101;
    local_1e5 = 0;
    if (this != (UPCGSplineData *)0x0) {
      pUVar8 = (UClass *)(**(code **)(*(longlong *)this + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_1f0 = 0;
    local_1e8 = 0x101;
    local_1e5 = 0;
    pUVar8 = (UClass *)(**(code **)(*(longlong *)this + 800))(this);
  }
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_1c0 = 0;
  local_1e6 = 0;
  local_1e0 = pUVar8;
  (**(code **)(pUVar6->_padding_ + 0x468))(pUVar6,&local_1f8);
  if ((local_1f8 != (UPCGSplineData *)0x0) && ((char)local_1e8 != '\0')) {
    (**(code **)(pUVar6->_padding_ + 0x470))(pUVar6,&local_1f8);
  }
  FPCGSplineSamplerParams::FPCGSplineSamplerParams((FPCGSplineSamplerParams *)local_188);
  local_188[1] = Distance;
  local_1a8.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.bProjectPositions = true;
  local_1a8.bProjectRotations = true;
  local_1a8.bProjectScales = false;
  local_1a8.ColorBlendMode = SourceValue;
  local_1a8._4_4_ = 0;
  local_1a8.AttributeList.Data.ArrayNum = 0;
  local_1a8.AttributeList.Data.ArrayMax = 0;
  local_1a8.AttributeMode = ExcludeAttributes;
  local_1a8.AttributeMergeOperation = Min;
  local_1a8.TagMergeOperation = Source;
  local_1a8._27_5_ = 0;
  ::FString::FString(&local_1a8.AttributeList,L"");
  local_1a8.AttributeMode = ExcludeAttributes;
  local_1a8.AttributeMergeOperation = TargetValue;
  local_1a8.TagMergeOperation = Source;
  PCGSplineSamplerHelpers::SampleLineData
            (param_1,(UPCGPolyLineData *)this,(UPCGSpatialData *)0x0,(UPCGSpatialData *)0x0,
             &local_1a8,(FPCGSplineSamplerParams *)local_188,pUVar6);
  if (local_1a8.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AttributeList.Data.AllocatorInstance.Data);
  }
  if (5 < (byte)LogPCG._0_1_) {
    (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  local_188._56_8_ = &___7FIndexedCurve__6B_;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_188 + 0x40));
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_1c8,(int)local_1c0);
  if (local_1c8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  return pUVar6;
}

// CreateConstAccessorKeys @ 1498ad1d0

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__thiscall
UPCGSplineData::CreateConstAccessorKeys
          (UPCGSplineData *this,FPCGAttributePropertySelector *param_1,bool param_2)

{
  int iVar1;
  FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *pFVar2;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *pFVar3;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_2) + 8);
  (**(code **)(*(longlong *)this + 0x348))(this,local_18);
  if (((local_18[0] == PCGMetadataDomainID::Data.Flag) &&
      (local_14 == PCGMetadataDomainID::Data.CustomFlag)) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>(pFVar2,this,true);
      goto LAB_1498ad2b7;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 - 2U < 2)) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData> *)0x0) {
      pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineData<UPCGSplineData>(pFVar2,this,false);
      goto LAB_1498ad2b7;
    }
  }
  else if (((local_18[0] == Default) ||
           ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
            (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) && (iVar1 == 0)) {
    pFVar3 = ::operator_new(0x38);
    if (pFVar3 != (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0) {
      pFVar3 = FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
               FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>(pFVar3,this);
      goto LAB_1498ad2b7;
    }
  }
  pFVar3 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)0x0;
LAB_1498ad2b7:
  param_1->_padding_ = (longlong)pFVar3;
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// CreatePointArrayData @ 1498ae0c0

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
UPCGSplineData::CreatePointArrayData
          (UPCGSplineData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId521,"UPCGSplineData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
               ,0x209);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId521);
  }
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
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreatePointData @ 1498af280

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
UPCGSplineData::CreatePointData(UPCGSplineData *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res18 [2];
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId514,"UPCGSplineData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
               ,0x202);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId514);
  }
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
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreateStaticAccessor @ 1498b0410

/* WARNING: Type propagation algorithm not settling */
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
UPCGSplineData::CreateStaticAccessor(FPCGAttributePropertySelector *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  undefined1 uVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  bool bVar14;
  FStructProperty *pFVar15;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar16;
  UStruct *pUVar17;
  FStructProperty *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  UClass *this;
  FName *pFVar22;
  FStructProperty *pFVar23;
  ForAnyElementType FVar24;
  undefined7 in_register_00000011;
  FPCGAttributePropertySelector *this_00;
  FStructProperty *pFVar25;
  char in_R8B;
  FName local_res10 [2];
  FName local_res20;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_148;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_138;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_128;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_118;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_108;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_88;
  FName local_78;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  this_00 = (FPCGAttributePropertySelector *)CONCAT71(in_register_00000011,param_2);
  pFVar25 = (FStructProperty *)0x0;
  uVar3 = false;
  local_res10[0].ComparisonIndex.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    this = StaticClass();
    pFVar22 = ::FName::FName(&local_78,0xc,L"SplineStruct",FNAME_Add);
    pFVar23 = (FStructProperty *)UStruct::FindPropertyByName((UStruct *)this,*pFVar22);
    if (((pFVar23 == (FStructProperty *)0x0) ||
        ((*(uint *)(pFVar23->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar23 = pFVar25,
       bVar14)) {
      pcVar2 = (code *)swi(3);
      TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
      return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)TVar16.Ptr;
    }
    PCGSplineStructProperty = pFVar23;
    _Init_thread_footer(&::_TSS0);
  }
  FVar1 = this_00->DomainName;
  if (this_00->Selection != Property) {
LAB_1498b109d:
    param_1->_padding_ = 0;
    return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
           (IPCGAttributeAccessor *)param_1;
  }
  pFVar23 = pFVar25;
  if ((FVar1 == (FName)0x0) || (FVar1 == PCGSplineData::ControlPointDomainName)) {
    FPCGAttributePropertySelector::GetName(this_00);
    FVar1.Number = local_res10[0].Number;
    FVar1.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
    bVar14 = ::FName::Equals(FVar1,L"Position");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_128.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 5;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TVector_N_Math_UE___0A__00____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_128);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>::
              _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>::
              _vftable__for__IPCGPropertyChain__;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x22,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_128.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000001;
      }
      goto joined_r0x0001498b0576;
    }
    FVar4.Number = local_res10[0].Number;
    FVar4.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
    bVar14 = ::FName::Equals(FVar4,L"LocalPosition");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_118.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ArrayNum = 0;
        local_118.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 5;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TVector_N_Math_UE___0A__0A_____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_118);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>::
              _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>::
              _vftable__for__IPCGPropertyChain__;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x22,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_118.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000002;
      }
      goto joined_r0x0001498b0576;
    }
    FVar5.Number = local_res10[0].Number;
    FVar5.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
    bVar14 = ::FName::Equals(FVar5,L"Rotation");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_108.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 7;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TQuat_N_Math_UE___00_00____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_108);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>::
              _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>::
              _vftable__for__IPCGPropertyChain__;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x22,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_108.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000008;
      }
      goto joined_r0x0001498b0576;
    }
    FVar6.Number = local_res10[0].Number;
    FVar6.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
    bVar14 = ::FName::Equals(FVar6,L"LocalRotation");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_f8.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 7;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TQuat_N_Math_UE___00_0A_____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_f8);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>::
              _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>::
              _vftable__for__IPCGPropertyChain__;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x22,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_f8.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000020;
      }
      goto joined_r0x0001498b0576;
    }
    FVar7.Number = local_res10[0].Number;
    FVar7.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
    bVar14 = ::FName::Equals(FVar7,L"Scale");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_e8.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.ArrayNum = 0;
        local_e8.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 5;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TVector_N_Math_UE___01_00____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_e8);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>::
              _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>::
              _vftable__for__IPCGPropertyChain__;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x22,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_e8.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000040;
      }
      goto joined_r0x0001498b0576;
    }
    FVar8.Number = local_res10[0].Number;
    FVar8.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
    bVar14 = ::FName::Equals(FVar8,L"LocalScale");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar23 = PCGSplineStructProperty;
      pFVar18 = pFVar25;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 5;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TVector_N_Math_UE___01_0A_____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar23,&local_d8);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>::
              _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>::
              _vftable__for__IPCGPropertyChain__;
        if (((pFVar23 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar23->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x22,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        pFVar18 = (FStructProperty *)&DAT_00000080;
      }
      FVar24.Data = local_d8.AllocatorInstance.Data;
      if (-1 < (char)pFVar18) goto LAB_1498b0587;
    }
    else {
      FVar9.Number = local_res10[0].Number;
      FVar9.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
      bVar14 = ::FName::Equals(FVar9,L"Transform");
      if (bVar14) {
        pFVar18 = ::operator_new(0x30);
        pFVar23 = PCGSplineStructProperty;
        FVar24.Data = local_c8.AllocatorInstance.Data;
        if (pFVar18 != (FStructProperty *)0x0) {
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
          *(undefined1 *)&pFVar18->_padding_ = 0;
          *(undefined2 *)((longlong)&pFVar18->_padding_ + 2) = 8;
          pFVar18->_padding_ =
               (longlong)
               &
               ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TTransform_N_Math_UE___02_00____6B_
          ;
          IPCGPropertyChain::IPCGPropertyChain
                    ((IPCGPropertyChain *)&pFVar18->_padding_,(FProperty *)pFVar23,&local_c8);
          pFVar18->_padding_ = 0;
          pFVar18->_padding_ =
               (longlong)
               &FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>::
                _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>_>__
          ;
          pFVar18->_padding_ =
               (longlong)
               &FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>::
                _vftable__for__IPCGPropertyChain__;
          if (((pFVar23 == (FStructProperty *)0x0) ||
              (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                  ((UStruct *)(pFVar23->Struct).field0_0x0.DebugPtr), !bVar14)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                  ,0x22,L""), bVar14)) {
            pcVar2 = (code *)swi(3);
            TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
            return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                   TVar16.Ptr;
          }
          pUVar17 = IPCGPropertyChain::GetTopPropertyStruct
                              ((IPCGPropertyChain *)&pFVar18->_padding_);
          pFVar18->_padding_ = (longlong)pUVar17;
          uVar3 = true;
          pFVar25 = pFVar18;
          FVar24.Data = local_c8.AllocatorInstance.Data;
        }
      }
      else {
        FVar10.Number = local_res10[0].Number;
        FVar10.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
        bVar14 = ::FName::Equals(FVar10,L"LocalTransform");
        if (bVar14) {
          pFVar18 = ::operator_new(0x30);
          pFVar23 = PCGSplineStructProperty;
          FVar24.Data = local_b8.AllocatorInstance.Data;
          uVar3 = false;
          if (pFVar18 != (FStructProperty *)0x0) {
            local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.ArrayNum = 0;
            local_b8.ArrayMax = 0;
            *(undefined1 *)&pFVar18->_padding_ = 0;
            *(undefined2 *)((longlong)&pFVar18->_padding_ + 2) = 8;
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TTransform_N_Math_UE___02_0A_____6B_
            ;
            IPCGPropertyChain::IPCGPropertyChain
                      ((IPCGPropertyChain *)&pFVar18->_padding_,(FProperty *)pFVar23,&local_b8);
            pFVar18->_padding_ = 0;
            pFVar18->_padding_ =
                 (longlong)
                 &FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>::
                  _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>_>__
            ;
            pFVar18->_padding_ =
                 (longlong)
                 &FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>::
                  _vftable__for__IPCGPropertyChain__;
            if (((pFVar23 == (FStructProperty *)0x0) ||
                (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                    ((UStruct *)(pFVar23->Struct).field0_0x0.DebugPtr), !bVar14)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                    ,0x22,L""), bVar14)) {
              pcVar2 = (code *)swi(3);
              TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
              return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                     TVar16.Ptr;
            }
            pUVar17 = IPCGPropertyChain::GetTopPropertyStruct
                                ((IPCGPropertyChain *)&pFVar18->_padding_);
            pFVar18->_padding_ = (longlong)pUVar17;
            pFVar25 = pFVar18;
            FVar24.Data = local_b8.AllocatorInstance.Data;
            uVar3 = true;
          }
        }
        else {
          FVar11.Number = local_res10[0].Number;
          FVar11.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
          bVar14 = ::FName::Equals(FVar11,L"ArriveTangent");
          if (bVar14) {
            pFVar18 = ::operator_new(0x30);
            pFVar23 = PCGSplineStructProperty;
            FVar24.Data = local_a8.AllocatorInstance.Data;
            uVar3 = false;
            if (pFVar18 != (FStructProperty *)0x0) {
              local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_a8.ArrayNum = 0;
              local_a8.ArrayMax = 0;
              *(undefined1 *)&pFVar18->_padding_ = 0;
              *(undefined2 *)((longlong)&pFVar18->_padding_ + 2) = 5;
              pFVar18->_padding_ =
                   (longlong)
                   &
                   ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TVector_N_Math_UE___03_0A_____6B_
              ;
              IPCGPropertyChain::IPCGPropertyChain
                        ((IPCGPropertyChain *)&pFVar18->_padding_,(FProperty *)pFVar23,&local_a8);
              pFVar18->_padding_ = 0;
              pFVar18->_padding_ =
                   (longlong)
                   &FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>::
                    _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>_>__
              ;
              pFVar18->_padding_ =
                   (longlong)
                   &FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>::
                    _vftable__for__IPCGPropertyChain__;
              if (((pFVar23 == (FStructProperty *)0x0) ||
                  (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                      ((UStruct *)(pFVar23->Struct).field0_0x0.DebugPtr), !bVar14))
                 && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                         ,0x22,L""), bVar14)) {
                pcVar2 = (code *)swi(3);
                TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
                return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                       TVar16.Ptr;
              }
              pUVar17 = IPCGPropertyChain::GetTopPropertyStruct
                                  ((IPCGPropertyChain *)&pFVar18->_padding_);
              pFVar18->_padding_ = (longlong)pUVar17;
              pFVar25 = pFVar18;
              FVar24.Data = local_a8.AllocatorInstance.Data;
              uVar3 = true;
            }
          }
          else {
            FVar12.Number = local_res10[0].Number;
            FVar12.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
            bVar14 = ::FName::Equals(FVar12,L"LeaveTangent");
            if (bVar14) {
              pFVar18 = ::operator_new(0x30);
              pFVar23 = PCGSplineStructProperty;
              FVar24.Data = local_98.AllocatorInstance.Data;
              uVar3 = false;
              if (pFVar18 != (FStructProperty *)0x0) {
                local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_98.ArrayNum = 0;
                local_98.ArrayMax = 0;
                *(undefined1 *)&pFVar18->_padding_ = 0;
                *(undefined2 *)((longlong)&pFVar18->_padding_ + 2) = 5;
                pFVar18->_padding_ =
                     (longlong)
                     &
                     ___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor_U__TVector_N_Math_UE___04_0A_____6B_
                ;
                IPCGPropertyChain::IPCGPropertyChain
                          ((IPCGPropertyChain *)&pFVar18->_padding_,(FProperty *)pFVar23,&local_98);
                pFVar18->_padding_ = 0;
                pFVar18->_padding_ =
                     (longlong)
                     &FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>::
                      _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>_>__
                ;
                pFVar18->_padding_ =
                     (longlong)
                     &FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>::
                      _vftable__for__IPCGPropertyChain__;
                if (((pFVar23 == (FStructProperty *)0x0) ||
                    (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                        ((UStruct *)(pFVar23->Struct).field0_0x0.DebugPtr), !bVar14)
                    ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                              ,0x22,L""), bVar14)) {
                  pcVar2 = (code *)swi(3);
                  TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
                  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                         TVar16.Ptr;
                }
                pUVar17 = IPCGPropertyChain::GetTopPropertyStruct
                                    ((IPCGPropertyChain *)&pFVar18->_padding_);
                pFVar18->_padding_ = (longlong)pUVar17;
                pFVar25 = pFVar18;
                FVar24.Data = local_98.AllocatorInstance.Data;
                uVar3 = true;
              }
            }
            else {
              FVar13.Number = local_res10[0].Number;
              FVar13.ComparisonIndex.Value = local_res10[0].ComparisonIndex.Value;
              bVar14 = ::FName::Equals(FVar13,L"InterpType");
              if (!bVar14) {
                if (in_R8B == '\0') {
                  pFVar19 = FText::FromName(&local_50,local_res10);
                  pFVar20 = FText::AsLocalizable_Advanced_LocText
                                      (&local_60,L"PCGSplineData",L"FailCreateAccessor",
                                       L"Property {0} is not valid for a control point.");
                  pFVar21 = FTextFormat::FTextFormat(&local_40,pFVar20,Default);
                  pFVar19 = FText::Format<FText>(&local_70,pFVar21,pFVar19);
                  PCGLog::LogErrorOnGraph(pFVar19,(FPCGContext *)0x0);
                  if (local_70.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
                  }
                  if (local_60.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
                  }
                }
                goto LAB_1498b109d;
              }
              pFVar18 = ::operator_new(0x30);
              pFVar23 = PCGSplineStructProperty;
              FVar24.Data = local_88.AllocatorInstance.Data;
              uVar3 = false;
              if (pFVar18 != (FStructProperty *)0x0) {
                local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88.ArrayNum = 0;
                local_88.ArrayMax = 0;
                *(undefined1 *)&pFVar18->_padding_ = 0;
                *(undefined2 *)((longlong)&pFVar18->_padding_ + 2) = 3;
                pFVar18->_padding_ =
                     (longlong)
                     &___7__IPCGAttributeAccessorT_V__FPCGControlPointsAccessor__J_05_0A_____6B_;
                IPCGPropertyChain::IPCGPropertyChain
                          ((IPCGPropertyChain *)&pFVar18->_padding_,(FProperty *)pFVar23,&local_88);
                pFVar18->_padding_ = 0;
                pFVar18->_padding_ =
                     (longlong)
                     &FPCGControlPointsAccessor<__int64,6,0>::
                      _vftable__for__IPCGAttributeAccessorT<FPCGControlPointsAccessor<__int64,6,0>_>__
                ;
                pFVar18->_padding_ =
                     (longlong)
                     &FPCGControlPointsAccessor<__int64,6,0>::_vftable__for__IPCGPropertyChain__;
                if (((pFVar23 == (FStructProperty *)0x0) ||
                    (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                        ((UStruct *)(pFVar23->Struct).field0_0x0.DebugPtr), !bVar14)
                    ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                              ,0x22,L""), bVar14)) {
                  pcVar2 = (code *)swi(3);
                  TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
                  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                         TVar16.Ptr;
                }
                pUVar17 = IPCGPropertyChain::GetTopPropertyStruct
                                    ((IPCGPropertyChain *)&pFVar18->_padding_);
                pFVar18->_padding_ = (longlong)pUVar17;
                pFVar25 = pFVar18;
                FVar24.Data = local_88.AllocatorInstance.Data;
                uVar3 = true;
              }
            }
          }
        }
      }
      if (!(bool)uVar3) goto LAB_1498b0587;
    }
  }
  else {
    if (FVar1 != PCGDataConstants::DataDomainName) goto LAB_1498b109d;
    FPCGAttributePropertySelector::GetName(this_00);
    bVar14 = ::FName::Equals(local_res20,L"SplineTransform");
    if (bVar14) {
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_148.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.ArrayNum = 0;
        local_148.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 0;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 8;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__IPCGAttributeAccessorT_V__FPCGSplineAccessor_U__TTransform_N_Math_UE___0A_____6B_
        ;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_148);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGSplineAccessor<UE::Math::TTransform<double>,0>::
              _vftable__for__IPCGAttributeAccessorT<FPCGSplineAccessor<UE::Math::TTransform<double>,0>_>__
        ;
        pFVar15->_padding_ =
             (longlong)
             &FPCGSplineAccessor<UE::Math::TTransform<double>,0>::_vftable__for__IPCGPropertyChain__
        ;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x10e,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_148.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000004;
      }
    }
    else {
      bVar14 = ::FName::Equals(local_res20,L"IsClosed");
      if (!bVar14) goto LAB_1498b109d;
      pFVar15 = ::operator_new(0x30);
      pFVar18 = PCGSplineStructProperty;
      FVar24.Data = local_138.AllocatorInstance.Data;
      if (pFVar15 != (FStructProperty *)0x0) {
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 0;
        local_138.ArrayMax = 0;
        *(undefined1 *)&pFVar15->_padding_ = 1;
        *(undefined2 *)((longlong)&pFVar15->_padding_ + 2) = 10;
        pFVar15->_padding_ =
             (longlong)&___7__IPCGAttributeAccessorT_V__FPCGSplineAccessor__N_00____6B_;
        IPCGPropertyChain::IPCGPropertyChain
                  ((IPCGPropertyChain *)&pFVar15->_padding_,(FProperty *)pFVar18,&local_138);
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &FPCGSplineAccessor<bool,1>::
              _vftable__for__IPCGAttributeAccessorT<FPCGSplineAccessor<bool,1>_>__;
        pFVar15->_padding_ =
             (longlong)&FPCGSplineAccessor<bool,1>::_vftable__for__IPCGPropertyChain__;
        if (((pFVar18 == (FStructProperty *)0x0) ||
            (bVar14 = UStruct::IsChildOf<FPCGSplineStruct>
                                ((UStruct *)(pFVar18->Struct).field0_0x0.DebugPtr), !bVar14)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProperty && InProperty->Struct->IsChildOf<FPCGSplineStruct>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                                ,0x10e,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          TVar16.Ptr = (IPCGAttributeAccessor *)(*pcVar2)();
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
                 TVar16.Ptr;
        }
        pUVar17 = IPCGPropertyChain::GetTopPropertyStruct((IPCGPropertyChain *)&pFVar15->_padding_);
        pFVar15->_padding_ = (longlong)pUVar17;
        pFVar25 = pFVar15;
        FVar24.Data = local_138.AllocatorInstance.Data;
        pFVar23 = (FStructProperty *)&DAT_00000010;
      }
    }
joined_r0x0001498b0576:
    if (pFVar23 == (FStructProperty *)0x0) goto LAB_1498b0587;
  }
  if (FVar24.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar24.Data);
  }
LAB_1498b0587:
  param_1->_padding_ = (longlong)pFVar25;
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)param_1;
}

// GetAllSupportedMetadataDomainIDs @ 1498b4e80

TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineData::GetAllSupportedMetadataDomainIDs
          (UPCGSplineData *this,
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

// GetBounds @ 1498b5e10

TBox<double> * __thiscall
UPCGSplineData::GetBounds(UPCGSplineData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedBounds).IsValid;
  uVar6 = (this->CachedBounds).Pad[0];
  uVar7 = (this->CachedBounds).Pad[1];
  uVar8 = (this->CachedBounds).Pad[2];
  uVar9 = (this->CachedBounds).Pad[3];
  uVar10 = (this->CachedBounds).Pad[4];
  uVar11 = (this->CachedBounds).Pad[5];
  uVar12 = (this->CachedBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetConstVerticesEntryKeys @ 1498b7a20

TArrayView<__int64_const_,int> * __thiscall
UPCGSplineData::GetConstVerticesEntryKeys
          (UPCGSplineData *this,TArrayView<__int64_const_,int> *__return_storage_ptr__)

{
  FPCGSplineStruct::GetConstControlPointsEntryKeys(&this->SplineStruct,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurvatureAtDistance @ 1498b8030

double __thiscall
UPCGSplineData::GetCurvatureAtDistance(UPCGSplineData *this,int param_1,double param_2)

{
  FPCGSplineStruct *this_00;
  FSpline *this_01;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  FInterpCurve<UE::Math::TVector<double>_> *this_02;
  FInterpCurve<UE::Math::TVector<double>_> *this_03;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 unaff_XMM15 [16];
  TVector<double>_u_0 local_b8;
  double local_a0;
  
  this_00 = &this->SplineStruct;
  dVar6 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(this_00,param_1);
  fVar5 = FPCGSplineStruct::GetInputKeyAtDistanceAlongSpline
                    (this_00,(double)(float)(dVar6 + param_2));
  this_01 = &(this->SplineStruct).Spline;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (this_01->CurrentImplementation != '\0')) {
    this_02 = (FInterpCurve<UE::Math::TVector<double>_> *)FSpline::GetSplinePointsPosition(this_01);
  }
  else {
    this_02 = (FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineStruct).SplineCurves;
  }
  this_03 = (FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineStruct).SplineCurves;
  FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
            (this_02,(TVector<double> *)&local_b8._s_0,fVar5,&UE::Math::TVector<double>::ZeroVector)
  ;
  auVar7._0_8_ = local_b8._s_0.Y * local_b8._s_0.Y;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_b8._s_0.X * local_b8._s_0.X + auVar7._0_8_ +
                 local_b8._s_0.Z * local_b8._s_0.Z;
  auVar8 = sqrtpd(auVar7,auVar8);
  dVar6 = auVar8._0_8_;
  if (auVar8._0_8_ <= __real_3e45798ee2308c3a) {
    dVar6 = __real_3e45798ee2308c3a;
  }
  dVar6 = __real_3ff0000000000000 / dVar6;
  dVar11 = local_b8._s_0.X * dVar6;
  dVar3 = dVar6 * local_b8._s_0.Y;
  dVar9 = local_b8._s_0.Z * dVar6;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (this_01->CurrentImplementation != '\0')) {
    this_03 = (FInterpCurve<UE::Math::TVector<double>_> *)FSpline::GetSplinePointsPosition(this_01);
  }
  FInterpCurve<UE::Math::TVector<double>_>::EvalSecondDerivative
            (this_03,(TVector<double> *)&local_b8._s_0,fVar5,&UE::Math::TVector<double>::ZeroVector)
  ;
  dVar2 = local_b8._s_0.X * dVar11 + local_b8._s_0.Y * dVar3 + local_b8._s_0.Z * dVar9;
  dVar4 = local_b8._s_0.X - dVar11 * dVar2;
  dVar3 = local_b8._s_0.Y - dVar3 * dVar2;
  dVar2 = local_b8._s_0.Z - dVar9 * dVar2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2;
  auVar8 = sqrtpd(unaff_XMM15,auVar1);
  dVar6 = auVar8._0_8_ * dVar6;
  FPCGSplineStruct::GetQuaternionAtSplineInputKey
            (this_00,(TQuat<double> *)&local_b8._s_0,fVar5,Local);
  dVar9 = local_b8._s_0.Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
          local_b8._s_0.Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  dVar9 = dVar9 + dVar9;
  dVar11 = local_b8._s_0.Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
           local_b8._s_0.X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  dVar10 = local_b8._s_0.X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
           local_b8._s_0.Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  dVar11 = dVar11 + dVar11;
  dVar10 = dVar10 + dVar10;
  dVar9 = ((local_b8._s_0.Z * dVar9 - local_b8._s_0.X * dVar10) +
          local_a0 * dVar11 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y) * dVar3 +
          ((local_b8._s_0.Y * dVar10 - local_b8._s_0.Z * dVar11) +
          local_a0 * dVar9 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X) * dVar4 +
          ((local_b8._s_0.X * dVar11 - local_b8._s_0.Y * dVar9) +
          local_a0 * dVar10 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z) * dVar2;
  dVar11 = dVar6;
  if ((dVar9 <= 0.0) && (dVar11 = 0.0, dVar9 < 0.0)) {
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return dVar11;
}

// GetDataType @ 1498b8460

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSplineData::GetDataType(UPCGSplineData *this)

{
  return Spline;
}

// GetDataTypeId @ 1498b8e40

FPCGDataTypeBaseId * __thiscall UPCGSplineData::GetDataTypeId(UPCGSplineData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline,(UObject *)pUVar3,
                         L"PCGDataTypeInfoSpline");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8ec3;
  }
  else {
LAB_1498b8ec3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b8f1a;
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
    if (bVar2) goto LAB_1498b8f1c;
  }
LAB_1498b8f1a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b8f1c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpline::AsId(void)'
          ::__l2::Id;
}

// GetDistanceAtSegmentStart @ 1498b9fc0

double __thiscall UPCGSplineData::GetDistanceAtSegmentStart(UPCGSplineData *this,int param_1)

{
  double dVar1;
  
  dVar1 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(&this->SplineStruct,param_1);
  return dVar1;
}

// GetInputKeyAtDistance @ 1498ba6b0

float __thiscall
UPCGSplineData::GetInputKeyAtDistance(UPCGSplineData *this,int param_1,double param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)(**(code **)(*(longlong *)this + 0x508))();
  fVar1 = FPCGSplineStruct::GetInputKeyAtDistanceAlongSpline
                    (&this->SplineStruct,(double)(float)(dVar2 + param_2));
  return fVar1;
}

// GetLocationAtAlpha @ 1498baf90

TVector<double> * __thiscall
UPCGSplineData::GetLocationAtAlpha
          (UPCGSplineData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(longlong *)this + 0x4f8))(this,param_1);
  FPCGSplineStruct::GetLocationAtSplineInputKey
            (&this->SplineStruct,__return_storage_ptr__,fVar1,World);
  return __return_storage_ptr__;
}

// GetLocationAtDistance @ 1498bb060

TVector<double> * __thiscall
UPCGSplineData::GetLocationAtDistance
          (UPCGSplineData *this,TVector<double> *__return_storage_ptr__,int param_1,double param_2,
          bool param_3)

{
  double dVar1;
  
  dVar1 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(&this->SplineStruct,param_1);
  FPCGSplineStruct::GetLocationAtDistanceAlongSpline
            (&this->SplineStruct,__return_storage_ptr__,dVar1 + param_2,(uint)param_3);
  return __return_storage_ptr__;
}

// GetMetadataDomainIDFromSelector @ 1498bb360

FPCGMetadataDomainID * __thiscall
UPCGSplineData::GetMetadataDomainIDFromSelector
          (UPCGSplineData *this,FPCGMetadataDomainID *__return_storage_ptr__,
          FPCGAttributePropertySelector *param_1)

{
  if (param_1->DomainName == PCGSplineData::ControlPointDomainName) {
    *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
    return __return_storage_ptr__;
  }
  UPCGData::GetMetadataDomainIDFromSelector((UPCGData *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMetadataEntryKeysForSplinePoints @ 1498bb3a0

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineData::GetMetadataEntryKeysForSplinePoints
          (UPCGSplineData *this,TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  
  iVar1 = (this->SplineStruct).ControlPointsEntryKeys.ArrayNum;
  _Src = (this->SplineStruct).ControlPointsEntryKeys.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetMutableVerticesEntryKeys @ 1498bb780

TArrayView<__int64,int> * __thiscall
UPCGSplineData::GetMutableVerticesEntryKeys
          (UPCGSplineData *this,TArrayView<__int64,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<__int64,int> *pTVar4;
  
  iVar1 = (this->SplineStruct).ControlPointsEntryKeys.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (long64 *)(this->SplineStruct).ControlPointsEntryKeys.AllocatorInstance.Data;
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

// GetNumSegments @ 1498bb9f0

int __thiscall UPCGSplineData::GetNumSegments(UPCGSplineData *this)

{
  int iVar1;
  FSpline *this_00;
  
  this_00 = &(this->SplineStruct).Spline;
  if ((PCGSplineStruct::GUseSplineCurves) || (this_00->CurrentImplementation == '\0')) {
    iVar1 = *(int *)&(this->SplineStruct).SplineCurves.Position.field_0x8;
  }
  else {
    iVar1 = FSpline::GetNumControlPoints(this_00);
  }
  if (((this->SplineStruct).bClosedLoop == false) && (iVar1 = iVar1 + -1, iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

// GetPrivateStaticClass @ 1498bce90

UClass * __cdecl UPCGSplineData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineData",
               &Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton,
               StaticRegisterNativesUPCGSplineData,800,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGSplineData>,InternalVTableHelperCtorCaller<UPCGSplineData>,
               local_res8,UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton;
}

// GetSegmentLength @ 1498c60b0

double __thiscall UPCGSplineData::GetSegmentLength(UPCGSplineData *this,int param_1)

{
  int iVar1;
  FSpline *this_00;
  double dVar2;
  double dVar3;
  
  this_00 = &(this->SplineStruct).Spline;
  if ((PCGSplineStruct::GUseSplineCurves) || (this_00->CurrentImplementation == '\0')) {
    iVar1 = *(int *)&(this->SplineStruct).SplineCurves.Position.field_0x8;
  }
  else {
    iVar1 = FSpline::GetNumControlPoints(this_00);
  }
  if (((this->SplineStruct).bClosedLoop == false) && (iVar1 = iVar1 + -1, iVar1 < 0)) {
    iVar1 = 0;
  }
  if ((param_1 < iVar1) && (-1 < param_1)) {
    dVar2 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(&this->SplineStruct,param_1 + 1);
    dVar3 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(&this->SplineStruct,param_1);
    return dVar2 - dVar3;
  }
  return 0.0;
}

// GetSplineAccessorMethods @ 1498c66b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGAttributeAccessorMethods * __cdecl
UPCGSplineData::GetSplineAccessorMethods(FPCGAttributeAccessorMethods *__return_storage_ptr__)

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
  local_c0 = `UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
                ::Call;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_90 = `UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `UPCGSplineData::GetSplineAccessorMethods'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
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

// GetSplinePoints @ 1498c6900

TArray<FSplinePoint,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineData::GetSplinePoints
          (UPCGSplineData *this,
          TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FSpline *this_00;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  Type TVar13;
  int iVar14;
  FInterpCurveVector *pFVar15;
  FInterpCurveVector *pFVar16;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *pTVar17;
  TRotator<double> *pTVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong local_res10;
  longlong local_res18;
  FInterpCurveQuat *local_res20;
  TRotator<double> local_68;
  
  if ((PCGSplineStruct::GUseSplineCurves) ||
     ((this->SplineStruct).Spline.CurrentImplementation == '\0')) {
    pFVar15 = &(this->SplineStruct).SplineCurves.Position;
  }
  else {
    pFVar15 = FSpline::GetSplinePointsPosition(&(this->SplineStruct).Spline);
  }
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
    local_res20 = FSpline::GetSplinePointsRotation(&(this->SplineStruct).Spline);
  }
  else {
    local_res20 = &(this->SplineStruct).SplineCurves.Rotation;
  }
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     (this_00 = &(this->SplineStruct).Spline, this_00->CurrentImplementation != '\0')) {
    pFVar16 = FSpline::GetSplinePointsScale(this_00);
  }
  else {
    pFVar16 = &(this->SplineStruct).SplineCurves.Scale;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar21 = *(uint *)&pFVar15->field_0x8;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar21,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar19 = *(int *)&pFVar15->field_0x8;
  uVar21 = 0;
  if (0 < iVar19) {
    local_res18 = 0;
    local_res10 = 0;
    do {
      uVar22 = ~uVar21 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar21 < iVar19) {
        uVar12 = uVar22;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      TVar13 = ConvertInterpCurveModeToSplinePointType
                         ((uint)*(byte *)(*(longlong *)pFVar15 + 0x50 + local_res18));
      uVar12 = 0;
      if ((int)uVar21 < *(int *)&pFVar16->field_0x8) {
        uVar12 = uVar22;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      lVar3 = *(longlong *)pFVar16;
      uVar12 = 0;
      if ((int)uVar21 < *(int *)&local_res20->field_0x8) {
        uVar12 = uVar22;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      pTVar18 = UE::Math::TQuat<double>::Rotator
                          ((TQuat<double> *)(local_res10 + 0x10 + *(longlong *)local_res20),
                           &local_68);
      uVar12 = 0;
      if ((int)uVar21 < *(int *)&pFVar15->field_0x8) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      lVar4 = *(longlong *)pFVar15;
      uVar12 = 0;
      if ((int)uVar21 < *(int *)&pFVar15->field_0x8) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      lVar5 = *(longlong *)pFVar15;
      uVar12 = 0;
      if ((int)uVar21 < *(int *)&pFVar15->field_0x8) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      iVar19 = __return_storage_ptr__->ArrayNum;
      lVar6 = *(longlong *)pFVar15;
      iVar14 = iVar19;
      if (iVar19 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      local_res10 = local_res10 + 0x80;
      uVar21 = uVar21 + 1;
      __return_storage_ptr__->ArrayNum = iVar14 + 1;
      lVar20 = (longlong)iVar14 * 0x88;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(float *)(pFVar7 + lVar20) = (float)iVar19;
      puVar2 = (undefined8 *)(local_res18 + 8 + lVar6);
      uVar9 = puVar2[1];
      *(undefined8 *)(pFVar7 + lVar20 + 8) = *puVar2;
      *(undefined8 *)(pFVar7 + lVar20 + 8 + 8) = uVar9;
      *(undefined8 *)(pFVar7 + lVar20 + 0x18) = *(undefined8 *)(local_res18 + 0x18 + lVar6);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + local_res18);
      uVar9 = puVar2[1];
      *(undefined8 *)(pFVar7 + lVar20 + 0x20) = *puVar2;
      *(undefined8 *)(pFVar7 + lVar20 + 0x20 + 8) = uVar9;
      *(undefined8 *)(pFVar7 + lVar20 + 0x30) = *(undefined8 *)(lVar5 + 0x30 + local_res18);
      puVar2 = (undefined8 *)(lVar4 + 0x38 + local_res18);
      uVar9 = puVar2[1];
      *(undefined8 *)(pFVar7 + lVar20 + 0x38) = *puVar2;
      *(undefined8 *)(pFVar7 + lVar20 + 0x38 + 8) = uVar9;
      *(undefined8 *)(pFVar7 + lVar20 + 0x48) = *(undefined8 *)(lVar4 + 0x48 + local_res18);
      dVar10 = pTVar18->Yaw;
      *(double *)(pFVar7 + lVar20 + 0x50) = pTVar18->Pitch;
      *(double *)(pFVar7 + lVar20 + 0x50 + 8) = dVar10;
      *(double *)(pFVar7 + lVar20 + 0x60) = pTVar18->Roll;
      puVar2 = (undefined8 *)(local_res18 + 8 + lVar3);
      uVar9 = puVar2[1];
      *(undefined8 *)(pFVar7 + lVar20 + 0x68) = *puVar2;
      *(undefined8 *)(pFVar7 + lVar20 + 0x68 + 8) = uVar9;
      lVar4 = local_res18 + 0x18;
      local_res18 = local_res18 + 0x58;
      *(undefined8 *)(pFVar7 + lVar20 + 0x78) = *(undefined8 *)(lVar4 + lVar3);
      pFVar7[lVar20 + 0x80] = SUB41(TVar13,0);
      iVar19 = *(int *)&pFVar15->field_0x8;
    } while ((int)uVar21 < iVar19);
  }
  return __return_storage_ptr__;
}

// GetTangentsAtSegmentStart @ 1498c7df0

void __thiscall
UPCGSplineData::GetTangentsAtSegmentStart
          (UPCGSplineData *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  FInterpCurveVector *pFVar7;
  FInterpCurveVector *pFVar8;
  longlong lVar9;
  
  if ((PCGSplineStruct::GUseSplineCurves) ||
     ((this->SplineStruct).Spline.CurrentImplementation == '\0')) {
    pFVar7 = &(this->SplineStruct).SplineCurves.Position;
  }
  else {
    pFVar7 = FSpline::GetSplinePointsPosition(&(this->SplineStruct).Spline);
  }
  if ((param_1 < 0) || (*(int *)&pFVar7->field_0x8 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SplineStruct.GetSplinePointsPosition().Points.IsValidIndex(SegmentIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                       ,0xf1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
    pFVar7 = FSpline::GetSplinePointsPosition(&(this->SplineStruct).Spline);
  }
  else {
    pFVar7 = &(this->SplineStruct).SplineCurves.Position;
  }
  pFVar8 = &(this->SplineStruct).SplineCurves.Position;
  uVar6 = 0;
  if (param_1 < *(int *)&pFVar7->field_0x8) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)pFVar7;
  lVar9 = (longlong)param_1 * 0x58;
  pdVar1 = (double *)(lVar9 + 0x20 + lVar2);
  dVar4 = pdVar1[1];
  (param_2->field0_0x0)._s_0.X = *pdVar1;
  (param_2->field0_0x0)._s_0.Y = dVar4;
  (param_2->field0_0x0)._s_0.Z = *(double *)(lVar9 + 0x30 + lVar2);
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
    pFVar8 = FSpline::GetSplinePointsPosition(&(this->SplineStruct).Spline);
  }
  uVar6 = 0;
  if (param_1 < *(int *)&pFVar8->field_0x8) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)pFVar8;
  pdVar1 = (double *)(lVar9 + 0x38 + lVar2);
  dVar4 = pdVar1[1];
  (param_3->field0_0x0)._s_0.X = *pdVar1;
  (param_3->field0_0x0)._s_0.Y = dVar4;
  (param_3->field0_0x0)._s_0.Z = *(double *)(lVar9 + 0x48 + lVar2);
  return;
}

// GetTransform @ 1498c83b0

/* WARNING: Type propagation algorithm not settling */

TTransform<double> * __thiscall
UPCGSplineData::GetTransform(UPCGSplineData *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->SplineStruct).Transform.Rotation.XY.m128d_f64[1];
  dVar2 = (this->SplineStruct).Transform.Rotation.ZW.m128d_f64[0];
  dVar3 = (this->SplineStruct).Transform.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->SplineStruct).Transform.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->SplineStruct).Transform.Translation.XY.m128d_f64[0];
  dVar4 = (this->SplineStruct).Transform.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->SplineStruct).Transform.Translation.ZW.m128d_f64[0];
  dVar3 = (this->SplineStruct).Transform.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->SplineStruct).Transform.Scale3D.XY.m128d_f64[0];
  dVar4 = (this->SplineStruct).Transform.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->SplineStruct).Transform.Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->SplineStruct).Transform.Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetTransformAtAlpha @ 1498c8870

TTransform<double> * __thiscall
UPCGSplineData::GetTransformAtAlpha
          (UPCGSplineData *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(longlong *)this + 0x4f8))(this,param_1);
  FPCGSplineStruct::GetTransformAtSplineInputKey
            (&this->SplineStruct,__return_storage_ptr__,fVar1,World,false);
  return __return_storage_ptr__;
}

// GetTransformAtDistance @ 1498c9560

TTransform<double> * __thiscall
UPCGSplineData::GetTransformAtDistance
          (UPCGSplineData *this,TTransform<double> *__return_storage_ptr__,int param_1,
          double param_2,bool param_3,TBox<double> *param_4)

{
  FSpline *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  undefined7 uStack_57;
  
  if (param_4 != (TBox<double> *)0x0) {
    dVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    auVar2._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
                         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    auVar2._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
                   UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    auVar2._12_4_ =
         (int)((ulonglong)
               (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) >> 0x20);
    *(undefined1 (*) [16])&(param_4->Min).field0_0x0 = auVar2;
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar8;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_4->Min).field0_0x0 + 0x10) = auVar1;
    auVar4._8_4_ = SUB84(dVar3,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_4->Max).field0_0x0 + 8) = auVar4;
    param_4->IsValid = 1;
    param_4->Pad[0] = (char)uStack_57;
    param_4->Pad[1] = (char)((uint7)uStack_57 >> 8);
    param_4->Pad[2] = (char)((uint7)uStack_57 >> 0x10);
    param_4->Pad[3] = (char)((uint7)uStack_57 >> 0x18);
    param_4->Pad[4] = (char)((uint7)uStack_57 >> 0x20);
    param_4->Pad[5] = (char)((uint7)uStack_57 >> 0x28);
    param_4->Pad[6] = (char)((uint7)uStack_57 >> 0x30);
  }
  dVar8 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(&this->SplineStruct,param_1);
  this_00 = &(this->SplineStruct).Spline;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (this_00->CurrentImplementation != '\0')) {
    fVar7 = FSpline::GetParameterAtDistance(this_00,(float)(dVar8 + param_2));
  }
  else {
    param_4._0_4_ = 0;
    fVar7 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&(this->SplineStruct).SplineCurves.ReparamTable,
                       (float)(dVar8 + param_2),(float *)&param_4);
  }
  FPCGSplineStruct::GetTransformAtSplineInputKey
            (&this->SplineStruct,__return_storage_ptr__,fVar7,(uint)param_3,true);
  return __return_storage_ptr__;
}

// Initialize @ 1498cc960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGSplineData::Initialize(UPCGSplineData *this,FPCGSplineStruct *param_1)

{
  FPCGSplineStruct *this_00;
  TBox<double> *this_01;
  FSpline *this_02;
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uint uVar16;
  uint uVar17;
  TBox<double> *pTVar18;
  FInterpCurveVector *pFVar19;
  TMatrix<double> *pTVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = &this->SplineStruct;
  FPCGSplineStruct::operator=(this_00,param_1);
  pTVar18 = FPCGSplineStruct::GetBounds(this_00,(TBox<double> *)&local_138._s_0);
  this_01 = &this->CachedBounds;
  this_02 = &(this->SplineStruct).Spline;
  dVar1 = (pTVar18->Min).field0_0x0._s_0.Y;
  (this_01->Min).field0_0x0._s_0.X = (pTVar18->Min).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (pTVar18->Max).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = (pTVar18->Min).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (pTVar18->Max).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = (pTVar18->Max).field0_0x0._s_0.Y;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar9 = pTVar18->Pad[0];
  uVar10 = pTVar18->Pad[1];
  uVar11 = pTVar18->Pad[2];
  uVar12 = pTVar18->Pad[3];
  uVar13 = pTVar18->Pad[4];
  uVar14 = pTVar18->Pad[5];
  uVar15 = pTVar18->Pad[6];
  (this->CachedBounds).IsValid = pTVar18->IsValid;
  (this->CachedBounds).Pad[0] = uVar9;
  (this->CachedBounds).Pad[1] = uVar10;
  (this->CachedBounds).Pad[2] = uVar11;
  (this->CachedBounds).Pad[3] = uVar12;
  (this->CachedBounds).Pad[4] = uVar13;
  (this->CachedBounds).Pad[5] = uVar14;
  (this->CachedBounds).Pad[6] = uVar15;
  local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uStack_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (this_02->CurrentImplementation != '\0')) {
    pFVar19 = FSpline::GetSplinePointsScale(this_02);
  }
  else {
    pFVar19 = &(this->SplineStruct).SplineCurves.Scale;
  }
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar23 = *(longlong *)pFVar19;
  iVar4 = *(int *)&pFVar19->field_0x8;
  puVar21 = (undefined8 *)(lVar23 + 0x18);
  lVar22 = (longlong)iVar4 * 0x58 + lVar23;
  uVar30 = (uint)local_150;
  uVar31 = (uint)((ulonglong)local_150 >> 0x20);
  uVar32 = (uint)uStack_148;
  uVar33 = (uint)((ulonglong)uStack_148 >> 0x20);
  uVar34 = (uint)local_140;
  uVar35 = (uint)((ulonglong)local_140 >> 0x20);
  while( true ) {
    if (*(int *)&pFVar19->field_0x8 != iVar4) {
      `TCheckedPointerIterator<FInterpCurvePoint<UE::Math::TVector<double>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (lVar23 == lVar22) break;
    lVar23 = lVar23 + 0x58;
    uVar24 = (uint)puVar21[-2] & uVar16;
    uVar26 = (uint)((ulonglong)puVar21[-2] >> 0x20) & uVar17;
    if ((double)CONCAT44(uVar26,uVar24) <= (double)CONCAT44(uVar31,uVar30)) {
      uVar24 = uVar30;
      uVar26 = uVar31;
    }
    uVar28 = (uint)puVar21[-1] & uVar16;
    uVar29 = (uint)((ulonglong)puVar21[-1] >> 0x20) & uVar17;
    if ((double)CONCAT44(uVar29,uVar28) <= (double)CONCAT44(uVar33,uVar32)) {
      uVar28 = uVar32;
      uVar29 = uVar33;
    }
    uVar25 = (uint)*puVar21 & uVar16;
    uVar27 = (uint)((ulonglong)*puVar21 >> 0x20) & uVar17;
    if ((double)CONCAT44(uVar27,uVar25) <= (double)CONCAT44(uVar35,uVar34)) {
      uVar25 = uVar34;
      uVar27 = uVar35;
    }
    puVar21 = puVar21 + 0xb;
    uVar30 = uVar24;
    uVar31 = uVar26;
    uVar32 = uVar28;
    uVar33 = uVar29;
    uVar34 = uVar25;
    uVar35 = uVar27;
  }
  dVar1 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  dVar8 = (double)CONCAT44(uVar35,uVar34) + (this->CachedBounds).Max.field0_0x0._s_0.Z;
  dVar6 = (this->CachedBounds).Min.field0_0x0._s_0.Y - (double)CONCAT44(uVar33,uVar32);
  local_108 = 1;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (this_01->Min).field0_0x0._s_0.X - (double)CONCAT44(uVar31,uVar30);
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(this_01->Min).field0_0x0 = auVar5;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = dVar1 - (double)CONCAT44(uVar35,uVar34);
  (this->CachedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar31,uVar30) + dVar2;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (double)CONCAT44(uVar33,uVar32) + dVar3;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) = auVar7;
  (this->CachedBounds).IsValid = 1;
  (this->CachedBounds).Pad[0] = (char)uStack_107;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_107 >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_107 >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_107 >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_107 >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_107 >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_107 >> 0x30);
  pTVar20 = UE::Math::TTransform<double>::ToMatrixWithScale(&this_00->Transform,&local_f8);
  UE::Math::TBox<double>::TransformBy(this_01,(TBox<double> *)&local_138._s_0,pTVar20);
  (this_01->Min).field0_0x0._s_0.X = local_138._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = local_138._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = local_138._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dStack_120;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = local_118;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dStack_110;
  (this->CachedBounds).IsValid = local_108;
  (this->CachedBounds).Pad[0] = (char)uStack_107;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_107 >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_107 >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_107 >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_107 >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_107 >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_107 >> 0x30);
  return;
}

// Initialize @ 1498ccba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPCGSplineData::Initialize
          (UPCGSplineData *this,TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,TTransform<double> *param_3,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FSpline *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  TBoxSphereBounds<double,double> *pTVar24;
  TBox<double> *pTVar25;
  FInterpCurveVector *pFVar26;
  TMatrix<double> *pTVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_160;
  undefined8 local_150;
  TArray<__int64,TSizedDefaultAllocator<32>_> *local_148;
  TVector<double>_u_0 local_140;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148 = param_4;
  pFVar8 = (param_4->AllocatorInstance).Data;
  (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = param_4->ArrayNum;
  local_160.ArrayNum = param_4->ArrayNum;
  local_160.ArrayMax = param_4->ArrayMax;
  param_4->ArrayNum = 0;
  param_4->ArrayMax = 0;
  dVar2 = (param_3->Rotation).XY.m128d_f64[1];
  (this->SplineStruct).Transform.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->SplineStruct).Transform.Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->SplineStruct).Transform.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->SplineStruct).Transform.Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Translation).XY.m128d_f64[1];
  (this->SplineStruct).Transform.Translation.XY.m128d_f64[0] =
       (param_3->Translation).XY.m128d_f64[0];
  (this->SplineStruct).Transform.Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Translation).ZW.m128d_f64[1];
  (this->SplineStruct).Transform.Translation.ZW.m128d_f64[0] =
       (param_3->Translation).ZW.m128d_f64[0];
  (this->SplineStruct).Transform.Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->SplineStruct).Transform.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->SplineStruct).Transform.Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->SplineStruct).Transform.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->SplineStruct).Transform.Scale3D.ZW.m128d_f64[1] = dVar2;
  uVar23 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.Y = (double)uVar23;
  (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  (this->SplineStruct).ReparamStepsPerSegment = 10;
  (this->SplineStruct).bClosedLoop = param_2;
  if ((iVar7 == 0) || (param_1->ArrayNum != iVar7)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  pTVar31 = &local_160;
  if (!bVar13) {
    pTVar31 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0;
  }
  local_160.AllocatorInstance.Data = pFVar8;
  FPCGSplineStruct::AddPoints(&this->SplineStruct,param_1,true,pTVar31);
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar5 = (this->SplineStruct).bClosedLoop;
  if (bVar6) {
    pTVar24 = PCGSplineStruct::CalcBounds
                        ((TBoxSphereBounds<double,double> *)&local_140._s_0,
                         &(this->SplineStruct).SplineCurves,bVar5,param_3);
    bVar6 = (this->SplineStruct).bClosedLoop;
    dVar2 = (pTVar24->Origin).field0_0x0._s_0.Y;
    (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.X = (pTVar24->Origin).field0_0x0._s_0.X;
    (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.Y = dVar2;
    dVar2 = (pTVar24->BoxExtent).field0_0x0._s_0.X;
    (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.Z = (pTVar24->Origin).field0_0x0._s_0.Z;
    (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.X = dVar2;
    dVar2 = (pTVar24->BoxExtent).field0_0x0._s_0.Z;
    (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.Y = (pTVar24->BoxExtent).field0_0x0._s_0.Y
    ;
    (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.Z = dVar2;
    (this->SplineStruct).Bounds.SphereRadius = pTVar24->SphereRadius;
    pTVar24 = PCGSplineStruct::CalcBounds
                        ((TBoxSphereBounds<double,double> *)&local_140._s_0,
                         &(this->SplineStruct).SplineCurves,bVar6,
                         &UE::Math::TTransform<double>::Identity);
  }
  else {
    pTVar24 = PCGSplineStruct::CalcBounds
                        ((TBoxSphereBounds<double,double> *)&local_140._s_0,
                         &(this->SplineStruct).Spline,bVar5,param_3);
    bVar6 = (this->SplineStruct).bClosedLoop;
    dVar2 = (pTVar24->Origin).field0_0x0._s_0.Y;
    (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.X = (pTVar24->Origin).field0_0x0._s_0.X;
    (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.Y = dVar2;
    dVar2 = (pTVar24->BoxExtent).field0_0x0._s_0.X;
    (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.Z = (pTVar24->Origin).field0_0x0._s_0.Z;
    (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.X = dVar2;
    dVar2 = (pTVar24->BoxExtent).field0_0x0._s_0.Z;
    (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.Y = (pTVar24->BoxExtent).field0_0x0._s_0.Y
    ;
    (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.Z = dVar2;
    (this->SplineStruct).Bounds.SphereRadius = pTVar24->SphereRadius;
    pTVar24 = PCGSplineStruct::CalcBounds
                        ((TBoxSphereBounds<double,double> *)&local_140._s_0,
                         &(this->SplineStruct).Spline,bVar6,&UE::Math::TTransform<double>::Identity)
    ;
  }
  dVar2 = (pTVar24->Origin).field0_0x0._s_0.Y;
  (this->SplineStruct).LocalBounds.Origin.field0_0x0._s_0.X = (pTVar24->Origin).field0_0x0._s_0.X;
  (this->SplineStruct).LocalBounds.Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar24->BoxExtent).field0_0x0._s_0.X;
  (this->SplineStruct).LocalBounds.Origin.field0_0x0._s_0.Z = (pTVar24->Origin).field0_0x0._s_0.Z;
  (this->SplineStruct).LocalBounds.BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (pTVar24->BoxExtent).field0_0x0._s_0.Z;
  (this->SplineStruct).LocalBounds.BoxExtent.field0_0x0._s_0.Y =
       (pTVar24->BoxExtent).field0_0x0._s_0.Y;
  (this->SplineStruct).LocalBounds.BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->SplineStruct).LocalBounds.SphereRadius = pTVar24->SphereRadius;
  if (!bVar13) {
    piVar1 = &(this->SplineStruct).ControlPointsEntryKeys.ArrayMax;
    (this->SplineStruct).ControlPointsEntryKeys.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->SplineStruct).ControlPointsEntryKeys.AllocatorInstance,0,piVar1);
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pTVar25 = FPCGSplineStruct::GetBounds(&this->SplineStruct,(TBox<double> *)&local_140._s_0);
  this_00 = &(this->SplineStruct).Spline;
  dVar2 = (pTVar25->Min).field0_0x0._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.X = (pTVar25->Min).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar25->Max).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = (pTVar25->Min).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (pTVar25->Max).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = (pTVar25->Max).field0_0x0._s_0.Y;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar14 = pTVar25->Pad[0];
  uVar15 = pTVar25->Pad[1];
  uVar16 = pTVar25->Pad[2];
  uVar17 = pTVar25->Pad[3];
  uVar18 = pTVar25->Pad[4];
  uVar19 = pTVar25->Pad[5];
  uVar20 = pTVar25->Pad[6];
  (this->CachedBounds).IsValid = pTVar25->IsValid;
  (this->CachedBounds).Pad[0] = uVar14;
  (this->CachedBounds).Pad[1] = uVar15;
  (this->CachedBounds).Pad[2] = uVar16;
  (this->CachedBounds).Pad[3] = uVar17;
  (this->CachedBounds).Pad[4] = uVar18;
  (this->CachedBounds).Pad[5] = uVar19;
  (this->CachedBounds).Pad[6] = uVar20;
  local_160.AllocatorInstance.Data =
       (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  local_160.ArrayNum = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_160.ArrayMax = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (this_00->CurrentImplementation != '\0')) {
    pFVar26 = FSpline::GetSplinePointsScale(this_00);
  }
  else {
    pFVar26 = &(this->SplineStruct).SplineCurves.Scale;
  }
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar30 = *(longlong *)pFVar26;
  iVar7 = *(int *)&pFVar26->field_0x8;
  puVar28 = (undefined8 *)(lVar30 + 0x18);
  lVar29 = (longlong)iVar7 * 0x58 + lVar30;
  uVar38 = (uint)local_160.AllocatorInstance.Data;
  uVar39 = (uint)((ulonglong)local_160.AllocatorInstance.Data >> 0x20);
  uVar40 = local_160.ArrayNum;
  uVar41 = local_160.ArrayMax;
  uVar42 = (uint)local_150;
  uVar43 = (uint)((ulonglong)local_150 >> 0x20);
  while( true ) {
    if (*(int *)&pFVar26->field_0x8 != iVar7) {
      `TCheckedPointerIterator<FInterpCurvePoint<UE::Math::TVector<double>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (lVar30 == lVar29) break;
    lVar30 = lVar30 + 0x58;
    uVar32 = (uint)puVar28[-2] & uVar21;
    uVar34 = (uint)((ulonglong)puVar28[-2] >> 0x20) & uVar22;
    if ((double)CONCAT44(uVar34,uVar32) <= (double)CONCAT44(uVar39,uVar38)) {
      uVar32 = uVar38;
      uVar34 = uVar39;
    }
    uVar36 = (uint)puVar28[-1] & uVar21;
    uVar37 = (uint)((ulonglong)puVar28[-1] >> 0x20) & uVar22;
    if ((double)CONCAT44(uVar37,uVar36) <= (double)CONCAT44(uVar41,uVar40)) {
      uVar36 = uVar40;
      uVar37 = uVar41;
    }
    uVar33 = (uint)*puVar28 & uVar21;
    uVar35 = (uint)((ulonglong)*puVar28 >> 0x20) & uVar22;
    if ((double)CONCAT44(uVar35,uVar33) <= (double)CONCAT44(uVar43,uVar42)) {
      uVar33 = uVar42;
      uVar35 = uVar43;
    }
    puVar28 = puVar28 + 0xb;
    uVar38 = uVar32;
    uVar39 = uVar34;
    uVar40 = uVar36;
    uVar41 = uVar37;
    uVar42 = uVar33;
    uVar43 = uVar35;
  }
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  dVar12 = (double)CONCAT44(uVar43,uVar42) + (this->CachedBounds).Max.field0_0x0._s_0.Z;
  dVar10 = (this->CachedBounds).Min.field0_0x0._s_0.Y - (double)CONCAT44(uVar41,uVar40);
  local_110 = 1;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (this->CachedBounds).Min.field0_0x0._s_0.X - (double)CONCAT44(uVar39,uVar38);
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&(this->CachedBounds).Min.field0_0x0 = auVar9;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = dVar2 - (double)CONCAT44(uVar43,uVar42);
  (this->CachedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar39,uVar38) + dVar3;
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = (double)CONCAT44(uVar41,uVar40) + dVar4;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) = auVar11;
  (this->CachedBounds).IsValid = 1;
  (this->CachedBounds).Pad[0] = (char)uStack_10f;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_10f >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_10f >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_10f >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_10f >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_10f >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_10f >> 0x30);
  pTVar27 = UE::Math::TTransform<double>::ToMatrixWithScale(param_3,&local_108);
  UE::Math::TBox<double>::TransformBy(&this->CachedBounds,(TBox<double> *)&local_140._s_0,pTVar27);
  (this->CachedBounds).Min.field0_0x0._s_0.X = local_140._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = local_140._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = local_140._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dStack_128;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = local_120;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dStack_118;
  (this->CachedBounds).IsValid = local_110;
  (this->CachedBounds).Pad[0] = (char)uStack_10f;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_10f >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_10f >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_10f >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_10f >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_10f >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_10f >> 0x30);
  pFVar8 = (local_148->AllocatorInstance).Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// Initialize @ 1498cd020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGSplineData::Initialize(UPCGSplineData *this,USplineComponent *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  FSplineCurves *pFVar26;
  FSpline *pFVar27;
  double *pdVar28;
  TBox<double> *pTVar29;
  FInterpCurveVector *pFVar30;
  undefined8 *puVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [49];
  undefined7 uStack_16f;
  void *local_168 [3];
  void *local_150;
  void *local_138;
  void *local_120;
  FSpline local_100;
  TBox<double> local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1 == (USplineComponent *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSpline",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                        ,0x33,L"");
    if (bVar25) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_1 == (USplineComponent *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSplineComponent",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                        ,0x89,L"");
    if (bVar25) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar26 = USplineComponent::GetSplineCurves(param_1,(FSplineCurves *)local_168);
  FSplineCurves::operator=(&(this->SplineStruct).SplineCurves,pFVar26);
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  if (local_168[0] != (void *)0x0) {
    FMemory::Free(local_168[0]);
  }
  pFVar27 = USplineComponent::GetSpline(param_1,&local_100);
  FSpline::operator=(&(this->SplineStruct).Spline,pFVar27);
  FSpline::~FSpline(&local_100);
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->SplineStruct).Transform.Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->DefaultUpVector).field0_0x0._s_0.Y;
  (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.X =
       (param_1->DefaultUpVector).field0_0x0._s_0.X;
  (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.Y = dVar2;
  (this->SplineStruct).DefaultUpVector.field0_0x0._s_0.Z =
       (param_1->DefaultUpVector).field0_0x0._s_0.Z;
  (this->SplineStruct).ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  bVar25 = USplineComponent::IsClosedLoop(param_1);
  (this->SplineStruct).bClosedLoop = bVar25;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (double)param_1->_padding_;
  (this->SplineStruct).Bounds.Origin.field0_0x0._s_0.Z = (double)param_1->_padding_;
  (this->SplineStruct).Bounds.BoxExtent.field0_0x0._s_0.X = dVar2;
  uVar11 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar33 = param_1->_padding_;
  uVar12 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)((longlong)&(this->SplineStruct).Bounds.BoxExtent.field0_0x0 + 8) =
       (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->SplineStruct).Bounds.BoxExtent.field0_0x0 + 0xc) = uVar11;
  *(int *)((longlong)&(this->SplineStruct).Bounds.BoxExtent.field0_0x0 + 0x10) = (int)lVar33;
  *(undefined4 *)((longlong)&(this->SplineStruct).Bounds.BoxExtent.field0_0x0 + 0x14) = uVar12;
  (this->SplineStruct).Bounds.SphereRadius = (double)param_1->_padding_;
  pdVar28 = (double *)(**(code **)(param_1->_padding_ + 0x5a0))(param_1,local_1a0);
  dVar2 = pdVar28[1];
  (this->SplineStruct).LocalBounds.Origin.field0_0x0._s_0.X = *pdVar28;
  (this->SplineStruct).LocalBounds.Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = pdVar28[3];
  (this->SplineStruct).LocalBounds.Origin.field0_0x0._s_0.Z = pdVar28[2];
  (this->SplineStruct).LocalBounds.BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = pdVar28[5];
  (this->SplineStruct).LocalBounds.BoxExtent.field0_0x0._s_0.Y = pdVar28[4];
  (this->SplineStruct).LocalBounds.BoxExtent.field0_0x0._s_0.Z = dVar2;
  piVar1 = &(this->SplineStruct).ControlPointsEntryKeys.ArrayMax;
  (this->SplineStruct).LocalBounds.SphereRadius = pdVar28[6];
  (this->SplineStruct).ControlPointsEntryKeys.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SplineStruct).ControlPointsEntryKeys.AllocatorInstance,0,piVar1);
  }
  pTVar29 = PCGHelpers::GetActorBounds(&local_b0,(AActor *)param_1->_padding_,true);
  dVar2 = (pTVar29->Min).field0_0x0._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.X = (pTVar29->Min).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar29->Max).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = (pTVar29->Min).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (pTVar29->Max).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = (pTVar29->Max).field0_0x0._s_0.Y;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar13 = pTVar29->Pad[0];
  uVar14 = pTVar29->Pad[1];
  uVar15 = pTVar29->Pad[2];
  uVar16 = pTVar29->Pad[3];
  uVar17 = pTVar29->Pad[4];
  uVar18 = pTVar29->Pad[5];
  uVar19 = pTVar29->Pad[6];
  (this->CachedBounds).IsValid = pTVar29->IsValid;
  (this->CachedBounds).Pad[0] = uVar13;
  (this->CachedBounds).Pad[1] = uVar14;
  (this->CachedBounds).Pad[2] = uVar15;
  (this->CachedBounds).Pad[3] = uVar16;
  (this->CachedBounds).Pad[4] = uVar17;
  (this->CachedBounds).Pad[5] = uVar18;
  (this->CachedBounds).Pad[6] = uVar19;
  uVar40 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar20 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20;
  uVar42 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar21 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20;
  uVar44 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar22 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20;
  if ((PCGSplineStruct::GUseSplineCurves == false) &&
     ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
    pFVar30 = FSpline::GetSplinePointsScale(&(this->SplineStruct).Spline);
  }
  else {
    pFVar30 = &(this->SplineStruct).SplineCurves.Scale;
  }
  uVar24 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar33 = *(longlong *)pFVar30;
  iVar5 = *(int *)&pFVar30->field_0x8;
  puVar31 = (undefined8 *)(lVar33 + 0x18);
  lVar32 = (longlong)iVar5 * 0x58 + lVar33;
  uVar41 = (uint)uVar20;
  uVar43 = (uint)uVar21;
  uVar45 = (uint)uVar22;
  while( true ) {
    if (*(int *)&pFVar30->field_0x8 != iVar5) {
      `TCheckedPointerIterator<FInterpCurvePoint<UE::Math::TVector<double>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (lVar33 == lVar32) break;
    lVar33 = lVar33 + 0x58;
    uVar34 = (uint)puVar31[-2] & uVar23;
    uVar36 = (uint)((ulonglong)puVar31[-2] >> 0x20) & uVar24;
    if ((double)CONCAT44(uVar36,uVar34) <= (double)CONCAT44(uVar41,uVar40)) {
      uVar34 = uVar40;
      uVar36 = uVar41;
    }
    uVar38 = (uint)puVar31[-1] & uVar23;
    uVar39 = (uint)((ulonglong)puVar31[-1] >> 0x20) & uVar24;
    if ((double)CONCAT44(uVar39,uVar38) <= (double)CONCAT44(uVar43,uVar42)) {
      uVar38 = uVar42;
      uVar39 = uVar43;
    }
    uVar35 = (uint)*puVar31 & uVar23;
    uVar37 = (uint)((ulonglong)*puVar31 >> 0x20) & uVar24;
    if ((double)CONCAT44(uVar37,uVar35) <= (double)CONCAT44(uVar45,uVar44)) {
      uVar35 = uVar44;
      uVar37 = uVar45;
    }
    puVar31 = puVar31 + 0xb;
    uVar40 = uVar34;
    uVar41 = uVar36;
    uVar42 = uVar38;
    uVar43 = uVar39;
    uVar44 = uVar35;
    uVar45 = uVar37;
  }
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  dVar10 = (double)CONCAT44(uVar45,uVar44) + (this->CachedBounds).Max.field0_0x0._s_0.Z;
  dVar8 = (this->CachedBounds).Min.field0_0x0._s_0.Y - (double)CONCAT44(uVar43,uVar42);
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (this->CachedBounds).Min.field0_0x0._s_0.X - (double)CONCAT44(uVar41,uVar40);
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&(this->CachedBounds).Min.field0_0x0 = auVar7;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = dVar2 - (double)CONCAT44(uVar45,uVar44);
  (this->CachedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar41,uVar40) + dVar3;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (double)CONCAT44(uVar43,uVar42) + dVar4;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) = auVar9;
  (this->CachedBounds).IsValid = 1;
  (this->CachedBounds).Pad[0] = (char)uStack_16f;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_16f >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_16f >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_16f >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_16f >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_16f >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_16f >> 0x30);
  return;
}

// InitializeTargetMetadata @ 1498d0370

void __thiscall
UPCGSplineData::InitializeTargetMetadata
          (UPCGSplineData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPCGMetadataDomain *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  FName *pFVar6;
  undefined1 local_res18 [8];
  float local_res20 [2];
  
  if ((param_2 == (UPCGMetadata *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetadataToInitialize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                         ,0xa1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UPCGSpatialData::InitializeTargetMetadata((UPCGSpatialData *)this,param_1,param_2);
  this_00 = UPCGMetadata::GetMetadataDomain(param_2,&PCGMetadataDomainID::Elements);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pTVar5 = FPCGSplineStruct::GetAttributeChannelNames(&this->SplineStruct);
    pFVar6 = (FName *)(pTVar5->AllocatorInstance).Data;
    iVar2 = pTVar5->ArrayNum;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar6 == pFVar1) break;
      local_res20[0] = 0.0;
      FPCGMetadataDomain::FindOrCreateAttribute<float>(this_00,*pFVar6,local_res20,true,true,true);
      pFVar6 = pFVar6 + 1;
    }
  }
  return;
}

// IsClosed @ 1498d0eb0

bool __thiscall UPCGSplineData::IsClosed(UPCGSplineData *this)

{
  return (this->SplineStruct).bClosedLoop;
}

// K2_Initialize @ 1498d1310

void __thiscall
UPCGSplineData::K2_Initialize
          (UPCGSplineData *this,TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,TTransform<double> *param_3,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
  (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18.ArrayMax = param_4->ArrayMax;
  param_4->ArrayNum = 0;
  param_4->ArrayMax = 0;
  Initialize(this,param_1,param_2,param_3,&local_18);
  pFVar1 = (param_4->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ProjectOn @ 1498d3ba0

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
UPCGSplineData::ProjectOn
          (UPCGSplineData *this,FPCGContext *param_1,UPCGSpatialData *param_2,
          FPCGProjectionParams *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  UPCGSplineProjectionData *this_00;
  UPCGSpatialData *pUVar4;
  UPCGProjectionData *this_01;
  
  iVar2 = (**(code **)(param_2->_padding_ + 0x380))(param_2);
  if (iVar2 == 2) {
    this_00 = FPCGContext::NewObject_AnyThread<UPCGSplineProjectionData>(param_1);
    UPCGSplineProjectionData::Initialize(this_00,this,param_2,param_3);
  }
  else {
    pcVar1 = *(code **)(param_2->_padding_ + 0x380);
    iVar2 = (**(code **)(*(longlong *)this + 0x380))(this);
    iVar3 = (*pcVar1)(param_2);
    if (iVar3 < iVar2) {
      if (1 < (byte)LogPCG._0_1_) {
        (**(code **)(param_2->_padding_ + 0x380))(param_2);
        (**(code **)(*(longlong *)this + 0x380))(this);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      pUVar4 = (UPCGSpatialData *)(**(code **)(param_2->_padding_ + 0x430))(param_2);
      if (pUVar4 != (UPCGSpatialData *)0x0) {
        this_01 = FPCGContext::NewObject_AnyThread<UPCGProjectionData>(param_1);
        UPCGProjectionData::Initialize(this_01,(UPCGSpatialData *)this,pUVar4,param_3);
        return (UPCGSpatialData *)this_01;
      }
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    this_00 = (UPCGSplineProjectionData *)(**(code **)(*(longlong *)this + 0x310))(this,param_1,1);
  }
  return (UPCGSpatialData *)this_00;
}

// SamplePoint @ 1498daec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGSplineData::SamplePoint
          (UPCGSplineData *this,TTransform<double> *param_1,TBox<double> *param_2,FPCGPoint *param_3
          ,UPCGMetadata *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_178 [32];
  TVector<double>_u_0 local_148;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_148._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_148._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  fVar7 = FPCGSplineStruct::FindInputKeyClosestToWorldLocation
                    (&this->SplineStruct,(TVector<double> *)&local_148._s_0);
  FPCGSplineStruct::GetTransformAtSplineInputKey(&this->SplineStruct,&local_128,fVar7,World,true);
  local_128.Rotation.XY.m128d_f64[0] =
       local_128.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_128.Rotation.XY.m128d_f64[1] =
       local_128.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_128.Rotation.ZW.m128d_f64[0] =
       local_128.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_128.Rotation.ZW.m128d_f64[1] =
       local_128.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_128.Translation.ZW.m128d_f64[0] = local_148._s_0.Z - local_128.Translation.ZW.m128d_f64[0];
  local_128.Translation.XY.m128d_f64[0] = local_148._s_0.X - local_128.Translation.XY.m128d_f64[0];
  local_128.Translation.XY.m128d_f64[1] = local_148._s_0.Y - local_128.Translation.XY.m128d_f64[1];
  uVar24 = (undefined4)((ulonglong)local_128.Translation.XY.m128d_f64[1] >> 0x20);
  auVar17._8_4_ = SUB84(local_128.Rotation.XY.m128d_f64[1],0);
  auVar17._0_8_ = local_128.Rotation.XY.m128d_f64[0];
  auVar17._12_4_ = (int)((ulonglong)local_128.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar14._8_4_ = SUB84(local_128.Rotation.ZW.m128d_f64[1],0);
  auVar14._0_8_ = local_128.Rotation.ZW.m128d_f64[0];
  auVar14._12_4_ = (int)((ulonglong)local_128.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar18 = blendpd(auVar17,auVar14,2);
  auVar28._8_4_ = SUB84(local_128.Translation.XY.m128d_f64[1],0);
  auVar28._0_8_ = local_128.Translation.XY.m128d_f64[0];
  auVar28._12_4_ = uVar24;
  auVar8._8_4_ = SUB84(local_128.Rotation.ZW.m128d_f64[0],0);
  auVar8._0_8_ = local_128.Rotation.XY.m128d_f64[1];
  auVar8._12_4_ = (int)((ulonglong)local_128.Rotation.ZW.m128d_f64[0] >> 0x20);
  auVar13._8_4_ = SUB84(local_128.Translation.XY.m128d_f64[1],0);
  auVar13._0_8_ = local_128.Translation.XY.m128d_f64[0];
  auVar13._12_4_ = uVar24;
  auVar29._0_8_ =
       auVar28._8_8_ * local_128.Rotation.XY.m128d_f64[0] -
       local_128.Rotation.XY.m128d_f64[1] * local_128.Translation.XY.m128d_f64[0];
  auVar29._8_8_ =
       local_128.Translation.ZW.m128d_f64[0] * local_128.Rotation.XY.m128d_f64[1] -
       auVar8._8_8_ * local_128.Translation.XY.m128d_f64[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_128.Translation.ZW.m128d_f64[0];
  auVar14 = blendpd(auVar13,auVar1,2);
  auVar15._0_8_ =
       auVar14._0_8_ * local_128.Rotation.ZW.m128d_f64[0] -
       auVar18._0_8_ * local_128.Translation.ZW.m128d_f64[0];
  auVar15._8_8_ = auVar14._8_8_ * local_128.Rotation.ZW.m128d_f64[1] - auVar18._8_8_ * 0.0;
  dVar12 = auVar29._8_8_ + auVar29._8_8_;
  dVar21 = auVar15._0_8_ + auVar15._0_8_;
  uVar24 = SUB84(dVar21,0);
  uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar14 = blendpd(auVar29,auVar15,2);
  auVar30._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar30._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar26._8_4_ = uVar24;
  auVar26._0_8_ = dVar12;
  auVar26._12_4_ = uVar25;
  auVar9._8_4_ = uVar24;
  auVar9._0_8_ = dVar12;
  auVar9._12_4_ = uVar25;
  auVar22._8_4_ = uVar24;
  auVar22._0_8_ = dVar12;
  auVar22._12_4_ = uVar25;
  auVar14 = blendpd(auVar22,auVar30,2);
  auVar27._0_8_ =
       auVar26._8_8_ * local_128.Rotation.XY.m128d_f64[0] -
       dVar12 * local_128.Rotation.XY.m128d_f64[1];
  auVar27._8_8_ =
       auVar30._0_8_ * local_128.Rotation.XY.m128d_f64[1] -
       auVar9._8_8_ * local_128.Rotation.ZW.m128d_f64[0];
  auVar10._8_4_ = SUB84(auVar30._8_8_,0);
  auVar10._0_8_ = auVar30._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  auVar23._0_8_ = auVar14._0_8_ * local_128.Rotation.ZW.m128d_f64[0] - auVar30._0_8_ * auVar18._0_8_
  ;
  auVar23._8_8_ = auVar14._8_8_ * local_128.Rotation.ZW.m128d_f64[1] - auVar10._8_8_ * auVar18._8_8_
  ;
  auVar19._0_8_ =
       (double)CONCAT44(local_128.Scale3D.XY.m128d_f64[0]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_128.Scale3D.XY.m128d_f64[0]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar19._8_4_ = local_128.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar19._12_4_ = local_128.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  lVar4 = -(ulonglong)(auVar19._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar6 = -(ulonglong)(auVar19._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar3._4_4_ = local_128.Scale3D.XY.m128d_f64[0]._4_4_;
  auVar3._0_4_ = local_128.Scale3D.XY.m128d_f64[0]._0_4_;
  auVar3._8_4_ = local_128.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar3._12_4_ = local_128.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar3);
  lVar5 = -(ulonglong)
           ((double)CONCAT44(local_128.Scale3D.ZW.m128d_f64[0]._4_4_ &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_128.Scale3D.ZW.m128d_f64[0]._0_4_ &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar20._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar4 >> 0x20) & auVar14._4_4_,
                        ~(uint)lVar4 & auVar14._0_4_);
  auVar20._8_4_ = ~(uint)lVar6 & auVar14._8_4_;
  auVar20._12_4_ = ~(uint)((ulonglong)lVar6 >> 0x20) & auVar14._12_4_;
  auVar11._8_4_ = SUB84(auVar27._8_8_,0);
  auVar11._0_8_ = auVar27._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar18._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar18._0_8_ = local_128.Scale3D.ZW.m128d_f64[0];
  auVar18._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
  dVar16 = auVar20._0_8_ *
           (dVar12 * local_128.Rotation.ZW.m128d_f64[1] + local_128.Translation.XY.m128d_f64[0] +
           auVar11._8_8_);
  dVar21 = auVar20._8_8_ *
           (dVar21 * local_128.Rotation.ZW.m128d_f64[1] + local_128.Translation.XY.m128d_f64[1] +
           auVar23._0_8_);
  auVar18 = blendpd(auVar27,auVar23,2);
  dVar12 = (double)CONCAT44(~(uint)((ulonglong)lVar5 >> 0x20) & auVar14._4_4_,
                            ~(uint)lVar5 & auVar14._0_4_) *
           (auVar30._0_8_ * local_128.Rotation.ZW.m128d_f64[1] +
            local_128.Translation.ZW.m128d_f64[0] + auVar18._0_8_);
  fVar7 = (float)SQRT(dVar16 * dVar16 + dVar21 * dVar21 + dVar12 * dVar12);
  bVar2 = fVar7 <= __real_3f800000;
  if (bVar2) {
    dVar12 = (param_1->Rotation).XY.m128d_f64[1];
    fVar7 = __real_3f800000 - fVar7;
    (param_3->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
    (param_3->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Translation).XY.m128d_f64[1];
    (param_3->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (param_3->Transform).Translation.XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Translation).ZW.m128d_f64[1];
    (param_3->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Scale3D).XY.m128d_f64[1];
    (param_3->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar12;
    dVar12 = (param_1->Scale3D).ZW.m128d_f64[1];
    (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar12;
    dVar12 = (param_2->Min).field0_0x0._s_0.Y;
    (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    (param_3->BoundsMin).field0_0x0._s_0.Y = dVar12;
    (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
    dVar12 = (param_2->Max).field0_0x0._s_0.Y;
    (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
    (param_3->BoundsMax).field0_0x0._s_0.Y = dVar12;
    (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
    param_3->Density = fVar7;
    (**(code **)(*(longlong *)this + 0x518))(this);
  }
  return bVar2;
}

// SetDomainFromDomainID @ 1498df050

bool __thiscall
UPCGSplineData::SetDomainFromDomainID
          (UPCGSplineData *this,FPCGMetadataDomainID *param_1,FPCGAttributePropertySelector *param_2
          )

{
  bool bVar1;
  
  if ((param_1->Flag == PCGMetadataDomainID::Elements.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Elements.CustomFlag)) {
    FPCGAttributePropertySelector::SetDomainName
              (param_2,PCGSplineData::ControlPointDomainName,false);
    return true;
  }
  bVar1 = UPCGData::SetDomainFromDomainID((UPCGData *)this,param_1,param_2);
  return bVar1;
}

// StaticRegisterNativesUPCGSplineData @ 1498f6aa0

void __cdecl UPCGSplineData::StaticRegisterNativesUPCGSplineData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPCGSplineData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteMetadataToEntry @ 1498fa360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGSplineData::WriteMetadataToEntry
          (UPCGSplineData *this,float param_1,long64 *param_2,UPCGMetadata *param_3)

{
  FPCGSplineStruct *this_00;
  FSpline *pFVar1;
  FName *pFVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  FPCGMetadataDomain *pFVar11;
  FPCGMetadataDomain *this_01;
  FInterpCurve<UE::Math::TVector<double>_> *this_02;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FPCGMetadataAttribute<float> *this_03;
  FName *pFVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  float local_104;
  float local_100 [2];
  FScriptContainerElement *local_f8;
  FPCGMetadataDomain *local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 uStack_cc;
  TArrayView<TTuple<__int64,float>,int> local_c8;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  if (param_3 != (UPCGMetadata *)0x0) {
    local_98 = __security_cookie.value ^ (ulonglong)auStackY_138;
    if (*(UPCGMetadata **)&this->field_0x38 == (UPCGMetadata *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5155577827566812916>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                         ,0x10c,"Metadata");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar11 = UPCGMetadata::GetConstMetadataDomain
                          (*(UPCGMetadata **)&this->field_0x38,&PCGMetadataDomainID::Elements);
      local_f0 = pFVar11;
      this_01 = UPCGMetadata::GetMetadataDomain(param_3,&PCGMetadataDomainID::Elements);
      if ((pFVar11 != (FPCGMetadataDomain *)0x0) && (this_01 != (FPCGMetadataDomain *)0x0)) {
        iVar3 = (this->SplineStruct).ControlPointsEntryKeys.ArrayNum;
        local_f8 = (this->SplineStruct).ControlPointsEntryKeys.AllocatorInstance.Data;
        if ((iVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar3 != 0) {
          this_00 = &this->SplineStruct;
          if ((PCGSplineStruct::GUseSplineCurves == false) &&
             ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
            this_02 = (FInterpCurve<UE::Math::TVector<double>_> *)
                      FSpline::GetSplinePointsPosition(&(this->SplineStruct).Spline);
          }
          else {
            this_02 = (FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineStruct).SplineCurves
            ;
          }
          uVar9 = FInterpCurve<UE::Math::TVector<double>_>::GetPointIndexForInputValue
                            (this_02,param_1);
          fVar16 = FPCGSplineStruct::GetInputKeyAtSegmentStart(this_00,uVar9);
          if (uVar9 == 0xffffffff) {
            return;
          }
          uVar15 = uVar9 + 1;
          cVar8 = (**(code **)(*(longlong *)this + 0x510))(this);
          if (cVar8 == '\0') {
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               ((this->SplineStruct).Spline.CurrentImplementation != '\0')) {
              iVar10 = FSpline::GetNumControlPoints(&(this->SplineStruct).Spline);
            }
            else {
              iVar10 = *(int *)&(this->SplineStruct).SplineCurves.Position.field_0x8;
            }
            uVar14 = iVar10 - 1U;
            if ((int)uVar15 < (int)(iVar10 - 1U)) {
              uVar14 = uVar15;
            }
            fVar17 = FPCGSplineStruct::GetInputKeyAtSegmentStart(this_00,uVar14);
          }
          else {
            fVar17 = FPCGSplineStruct::GetInputKeyAtSegmentStart(this_00,uVar15);
            pFVar1 = &(this->SplineStruct).Spline;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (pFVar1->CurrentImplementation != '\0')) {
              iVar10 = FSpline::GetNumControlPoints(pFVar1);
            }
            else {
              iVar10 = *(int *)&(this->SplineStruct).SplineCurves.Position.field_0x8;
            }
            uVar14 = (int)uVar15 % iVar10;
          }
          if ((((((int)uVar9 < 0) || (iVar3 <= (int)uVar9)) || ((int)uVar14 < 0)) ||
              (iVar3 <= (int)uVar14)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("EntryKeys.IsValidIndex(PreviousIndex) && EntryKeys.IsValidIndex(NextIndex)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                                 ,0x136,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = 0;
          if ((int)uVar9 < iVar3) {
            uVar15 = ~uVar9 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FPCGMetadataDomain::InitializeOnSet
                    (this_01,param_2,*(long64 *)(local_f8 + (longlong)(int)uVar9 * 8),local_f0,-1,
                     (FPCGMetadataDomain *)0x0);
          if ((uVar9 != uVar14) &&
             (__real_322bcc77 <
              (float)((uint)(fVar16 - fVar17) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
            fVar16 = (param_1 - fVar16) / (fVar17 - fVar16);
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar6 = local_f8;
            local_e8._8_4_ = __real_3f800000 - fVar16;
            uVar4 = *(undefined8 *)(local_f8 + (longlong)(int)uVar9 * 8);
            local_e8._0_4_ = (undefined4)uVar4;
            local_e8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uVar9 = 0;
            if ((int)uVar14 < iVar3) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            local_b8._0_4_ = local_e8._0_4_;
            local_b8._4_4_ = local_e8._4_4_;
            local_b8._12_4_ = local_e8._12_4_;
            local_e8._0_8_ = uVar4;
            local_b8._8_4_ = local_e8._8_4_;
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_c8.ArrayNum = 2;
            uVar4 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar14 * 8);
            local_c8.DataPtr = (TTuple<__int64,float> *)local_b8;
            local_d8._0_4_ = (undefined4)uVar4;
            local_d8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_a8 = (undefined4)local_d8;
            uStack_a4 = local_d8._4_4_;
            uStack_9c = uStack_cc;
            local_d8 = uVar4;
            fStack_a0 = fVar16;
            FPCGMetadataDomain::ComputeWeightedAttribute(this_01,param_2,&local_c8,local_f0);
          }
        }
        pTVar12 = FPCGSplineStruct::GetAttributeChannelNames(&this->SplineStruct);
        if (0 < pTVar12->ArrayNum) {
          FPCGMetadataDomain::InitializeOnSet
                    (this_01,param_2,-1,(FPCGMetadataDomain *)0x0,-1,(FPCGMetadataDomain *)0x0);
          pFVar13 = (FName *)(pTVar12->AllocatorInstance).Data;
          iVar3 = pTVar12->ArrayNum;
          pFVar2 = pFVar13 + iVar3;
          while( true ) {
            if (pTVar12->ArrayNum != iVar3) {
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_108);
            }
            if (pFVar13 == pFVar2) break;
            local_104 = 0.0;
            this_03 = FPCGMetadataDomain::FindOrCreateAttribute<float>
                                (this_01,*pFVar13,&local_104,true,true,true);
            if (this_03 != (FPCGMetadataAttribute<float> *)0x0) {
              if ((PCGSplineStruct::GUseSplineCurves == false) &&
                 (pFVar1 = &(this->SplineStruct).Spline, pFVar1->CurrentImplementation != '\0')) {
                local_100[0] = FSpline::EvaluateAttribute<float>(pFVar1,param_1,*pFVar13);
              }
              else {
                local_100[0] = 0.0;
              }
              FPCGMetadataAttribute<float>::SetValue(this_03,*param_2,local_100);
            }
            pFVar13 = pFVar13 + 1;
          }
        }
      }
    }
  }
  return;
}

// WriteMetadataToPoint @ 1498fa8d0

void __thiscall
UPCGSplineData::WriteMetadataToPoint
          (UPCGSplineData *this,float param_1,FPCGPoint *param_2,UPCGMetadata *param_3)

{
  WriteMetadataToEntry(this,param_1,&param_2->MetadataEntry,param_3);
  return;
}

// execGetMetadataEntryKeysForSplinePoints @ 1498fd0f0

void __cdecl
UPCGSplineData::execGetMetadataEntryKeysForSplinePoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0xf].field_0x18;
  _Src = *(void **)&param_1[0xf].field_0x10;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  local_18.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetSplinePoints @ 1498fd7b0

void __cdecl UPCGSplineData::execGetSplinePoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSplinePoints((UPCGSplineData *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execInitialize @ 1498fdf60

void __cdecl UPCGSplineData::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USplineComponent *local_res10;
  
  local_res10 = (USplineComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Initialize((UPCGSplineData *)param_1,local_res10);
  return;
}

// execK2_Initialize @ 1498fed50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGSplineData::execK2_Initialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *_Src;
  ForAnyElementType FVar12;
  longlong lVar13;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *pTVar14;
  TTransform<double> *pTVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStackY_138 [32];
  int local_f8 [2];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_d0;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar12.Data = (FScriptContainerElement *)0x0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  iVar16 = 0;
  local_f8[0] = 0;
  pTVar14 = &local_d0;
  if ((TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar14 = (TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
    ;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar17 = local_f8[0] != 0;
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_e0 = (void *)0x0;
  local_d8 = 0;
  pTVar15 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  _Src = local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (longlong)(int)local_d8;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8._0_4_ = (int)local_d8;
  local_c0.ArrayNum = (int)local_d8;
  if ((int)local_d8 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_d8,0,&local_f0,(int)local_d8,(int *)((longlong)&local_e8 + 4));
    memcpy(local_f0.Data,_Src,lVar13 << 3);
    FVar12.Data = local_f0.Data;
    iVar16 = local_e8._4_4_;
    local_c0.ArrayNum = (int)local_e8;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_c0.AllocatorInstance.Data = FVar12.Data;
  local_c0.ArrayMax = iVar16;
  Initialize((UPCGSplineData *)param_1,pTVar14,bVar17,pTVar15,&local_c0);
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

