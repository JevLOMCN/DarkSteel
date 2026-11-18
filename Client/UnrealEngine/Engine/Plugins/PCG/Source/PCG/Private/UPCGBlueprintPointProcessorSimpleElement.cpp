// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 1499003c0

UClass * __cdecl UPCGBlueprintPointProcessorSimpleElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPointProcessorSimpleElement.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPointProcessorSimpleElement",
               &Z_Registration_Info_UClass_UPCGBlueprintPointProcessorSimpleElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintPointProcessorSimpleElement,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBlueprintPointProcessorSimpleElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintPointProcessorSimpleElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPointProcessorSimpleElement.InnerSingleton;
}

// UPCGBlueprintPointProcessorSimpleElement @ 1499c3180

UPCGBlueprintPointProcessorSimpleElement * __thiscall
UPCGBlueprintPointProcessorSimpleElement::UPCGBlueprintPointProcessorSimpleElement
          (UPCGBlueprintPointProcessorSimpleElement *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7UPCGBlueprintPointProcessorSimpleElement__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bInheritMetadata = true;
  this->bInheritSpatialData = true;
  this->PropertiesToAllocate = 0;
  return this;
}

// UPCGBlueprintPointProcessorSimpleElement @ 1499c31e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGBlueprintPointProcessorSimpleElement * __thiscall
UPCGBlueprintPointProcessorSimpleElement::UPCGBlueprintPointProcessorSimpleElement
          (UPCGBlueprintPointProcessorSimpleElement *this)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  FText *pFVar5;
  FPCGDataTypeIdentifier *pFVar6;
  FPCGPinProperties *pFVar7;
  FPCGDataTypeIdentifier local_28;
  
  pFVar4 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar4);
  *(undefined2 *)&this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *piVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->PropertiesToAllocate = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7UPCGBlueprintPointProcessorSimpleElement__6B_;
  this->bInheritMetadata = true;
  this->bInheritSpatialData = true;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,(ForAnyElementType *)&this->_padding_,piVar1);
  *(int *)&this->_padding_ = iVar3 + 1;
  lVar2 = this->_padding_;
  pFVar5 = FText::GetEmpty();
  pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar7 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)((longlong)iVar3 * 0x30 + lVar2),
                      &PCGPinConstants::DefaultInputLabel,pFVar6,true,true,pFVar5);
  pFVar7->PinStatus = Required;
  iVar3 = (int)this->_padding_;
  if (iVar3 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar3 + 1;
  lVar2 = this->_padding_;
  pFVar5 = FText::GetEmpty();
  pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)((longlong)iVar3 * 0x30 + lVar2),
             &PCGPinConstants::DefaultOutputLabel,pFVar6,true,true,pFVar5);
  return this;
}

// ~UPCGBlueprintPointProcessorSimpleElement @ 1499c62b0

void __thiscall
UPCGBlueprintPointProcessorSimpleElement::~UPCGBlueprintPointProcessorSimpleElement
          (UPCGBlueprintPointProcessorSimpleElement *this)

{
  this->_padding_ = (longlong)&___7UPCGBlueprintBaseElement__6B_;
  DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1499c8d60

int __thiscall
`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  UObject *pUVar1;
  UObject *pUVar2;
  UObject *this_00;
  UFunction *pUVar3;
  UObject *local_48;
  int local_40;
  int local_3c;
  UObject *local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  pUVar1 = *(UObject **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar2 = *(UObject **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  this_00 = *(UObject **)this;
  local_28 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_48 = pUVar1;
  local_40 = param_1;
  local_3c = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_38 = pUVar2;
  local_30 = param_2;
  local_2c = param_3;
  pUVar3 = UObject::FindFunctionChecked
                     (this_00,NAME_UPCGBlueprintPointProcessorSimpleElement_RangePointLoopBody);
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar3,&local_48);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  return local_28;
}

// operator() @ 1499cc2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  UObject *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  TTransform<double> *pTVar14;
  TVector<double> *pTVar15;
  TVector4<double> *pTVar16;
  long64 *plVar17;
  UFunction *pUVar18;
  TVector4<double>_u_0 *pTVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_758 [32];
  longlong local_738;
  longlong local_730;
  int local_728;
  undefined8 *local_720;
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  float local_6b8;
  undefined4 uStack_6b4;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  longlong lStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  undefined8 local_658;
  long64 lStack_650;
  undefined8 local_648 [2];
  FPCGPoint local_638;
  undefined8 local_568;
  FPCGPoint local_558;
  ulonglong local_488;
  char local_480;
  FPCGPoint local_478;
  FPCGPointValueRanges local_3a8;
  FConstPCGPointValueRanges local_218;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_758;
  uVar22 = (ulonglong)param_1;
  local_720 = this;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_218,*(UPCGBasePointData **)((longlong)this + 8));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_3a8,*(UPCGBasePointData **)((longlong)this + 0x10),false);
  dVar6 = _UNK_150689688;
  dVar5 = ___xmm_3ff00000000000003ff0000000000000;
  local_728 = param_1 + param_3;
  iVar11 = 0;
  if (param_1 < local_728) {
    uVar24 = (uint)__xmm_80000000000000008000000000000000;
    uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar23 = uVar22;
    do {
      uVar21 = (uint)uVar23;
      uVar10 = uVar21 & 0x800003ff;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
      }
      if (uVar10 == 0) {
        GInitRunaway();
      }
      piVar12 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                          (&local_218.SeedRange,uVar21);
      iVar20 = *piVar12;
      pfVar13 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                          (&local_218.DensityRange,uVar21);
      fVar1 = *pfVar13;
      pTVar14 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                ::GetElement(&local_218.TransformRange,uVar21);
      FPCGPoint::FPCGPoint(&local_478,pTVar14,fVar1,iVar20);
      pTVar15 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(&local_218.BoundsMinRange,uVar21);
      local_478.BoundsMin.field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
      local_478.BoundsMin.field0_0x0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
      local_478.BoundsMin.field0_0x0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
      pTVar15 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(&local_218.BoundsMaxRange,uVar21);
      local_478.BoundsMax.field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
      local_478.BoundsMax.field0_0x0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
      local_478.BoundsMax.field0_0x0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
      pfVar13 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                          (&local_218.SteepnessRange,uVar21);
      local_478.Steepness = *pfVar13;
      pTVar16 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                ::GetElement(&local_218.ColorRange,uVar21);
      local_478.Color.field0_0x0._s_0.X = (pTVar16->field0_0x0)._s_0.X;
      local_478.Color.field0_0x0._s_0.Y = (pTVar16->field0_0x0)._s_0.Y;
      local_478.Color.field0_0x0._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
      local_478.Color.field0_0x0._s_0.W = (pTVar16->field0_0x0)._s_0.W;
      plVar17 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                          (&local_218.MetadataEntryRange,uVar21);
      local_478.MetadataEntry = *plVar17;
      local_6b8 = 1.0;
      local_718._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_718._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_718._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_708._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_708._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_708._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_6f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_6f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_6f8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_6d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_6d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_6d8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_6e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_6e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_6e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_6c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_6c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_6c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_6a8 = (double)CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                         0x20) ^ uVar25,
                                   SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^
                                   uVar24);
      dStack_6b0 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar25,
                                    UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar24);
      dStack_6a0 = (double)CONCAT44((uint)((ulonglong)
                                           UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                          0x20) ^ uVar25,
                                    SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0)
                                    ^ uVar24);
      local_698 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
      dStack_690 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_688 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      this_00 = *(UObject **)this;
      local_678 = dVar5;
      dStack_670 = dVar6;
      local_668 = dVar5;
      dStack_660 = dVar6;
      local_658._0_4_ = 0.5;
      local_658._4_4_ = 0;
      lStack_650 = -1;
      if (this_00[2].field_0x19 != '\0') {
        local_718._8_8_ = local_478.Transform.Rotation.XY.m128d_f64[1];
        local_718._0_8_ = local_478.Transform.Rotation.XY.m128d_f64[0];
        local_708._8_8_ = local_478.Transform.Rotation.ZW.m128d_f64[1];
        local_708._0_8_ = local_478.Transform.Rotation.ZW.m128d_f64[0];
        local_6f8._8_8_ = local_478.Transform.Translation.XY.m128d_f64[1];
        local_6f8._0_8_ = local_478.Transform.Translation.XY.m128d_f64[0];
        local_6e8._8_8_ = local_478.Transform.Translation.ZW.m128d_f64[1];
        local_6e8._0_8_ = local_478.Transform.Translation.ZW.m128d_f64[0];
        local_6d8._8_8_ = local_478.Transform.Scale3D.XY.m128d_f64[1];
        local_6d8._0_8_ = local_478.Transform.Scale3D.XY.m128d_f64[0];
        local_6c8._8_8_ = local_478.Transform.Scale3D.ZW.m128d_f64[1];
        local_6c8._0_8_ = local_478.Transform.Scale3D.ZW.m128d_f64[0];
        local_6b8 = local_478.Density;
        uStack_6b4 = local_478._100_4_;
        dStack_6b0 = local_478.BoundsMin.field0_0x0._s_0.X;
        local_6a8 = local_478.BoundsMin.field0_0x0._s_0.Y;
        dStack_6a0 = local_478.BoundsMin.field0_0x0._s_0.Z;
        local_698 = local_478.BoundsMax.field0_0x0._s_0.X;
        dStack_690 = local_478.BoundsMax.field0_0x0._s_0.Y;
        local_688 = local_478.BoundsMax.field0_0x0._s_0.Z;
        lStack_680 = local_478._padding_;
        local_678 = local_478.Color.field0_0x0._s_0.X;
        dStack_670 = local_478.Color.field0_0x0._s_0.Y;
        local_658._4_4_ = local_478.Seed;
        local_658._0_4_ = local_478.Steepness;
        local_668 = local_478.Color.field0_0x0._s_0.Z;
        dStack_660 = local_478.Color.field0_0x0._s_0.W;
        lStack_650 = local_478.MetadataEntry;
      }
      uVar2 = *(undefined8 *)((longlong)this + 0x10);
      uVar3 = local_720[1];
      FPCGPoint::FPCGPoint(&local_638);
      FPCGPoint::FPCGPoint(&local_558);
      local_480 = '\0';
      local_638.Transform.Rotation.XY.m128d_f64[0] = local_478.Transform.Rotation.XY.m128d_f64[0];
      local_638.Transform.Rotation.XY.m128d_f64[1] = local_478.Transform.Rotation.XY.m128d_f64[1];
      local_638.Transform.Rotation.ZW.m128d_f64[0] = local_478.Transform.Rotation.ZW.m128d_f64[0];
      local_638.Transform.Rotation.ZW.m128d_f64[1] = local_478.Transform.Rotation.ZW.m128d_f64[1];
      local_638.Transform.Translation.XY.m128d_f64[0] =
           local_478.Transform.Translation.XY.m128d_f64[0];
      local_638.Transform.Translation.XY.m128d_f64[1] =
           local_478.Transform.Translation.XY.m128d_f64[1];
      local_638.Transform.Translation.ZW.m128d_f64[0] =
           local_478.Transform.Translation.ZW.m128d_f64[0];
      local_638.Transform.Translation.ZW.m128d_f64[1] =
           local_478.Transform.Translation.ZW.m128d_f64[1];
      local_638.Transform.Scale3D.XY.m128d_f64[0] = local_478.Transform.Scale3D.XY.m128d_f64[0];
      local_638.Transform.Scale3D.XY.m128d_f64[1] = local_478.Transform.Scale3D.XY.m128d_f64[1];
      local_638.Transform.Scale3D.ZW.m128d_f64[0] = local_478.Transform.Scale3D.ZW.m128d_f64[0];
      local_638.Transform.Scale3D.ZW.m128d_f64[1] = local_478.Transform.Scale3D.ZW.m128d_f64[1];
      local_638.Density = local_478.Density;
      local_638._100_4_ = local_478._100_4_;
      local_638.BoundsMin.field0_0x0._s_0.X = local_478.BoundsMin.field0_0x0._s_0.X;
      local_638.BoundsMin.field0_0x0._s_0.Y = local_478.BoundsMin.field0_0x0._s_0.Y;
      local_638.BoundsMin.field0_0x0._s_0.Z = local_478.BoundsMin.field0_0x0._s_0.Z;
      local_638.BoundsMax.field0_0x0._s_0.X = local_478.BoundsMax.field0_0x0._s_0.X;
      local_638.BoundsMax.field0_0x0._s_0.Y = local_478.BoundsMax.field0_0x0._s_0.Y;
      local_638.BoundsMax.field0_0x0._s_0.Z = local_478.BoundsMax.field0_0x0._s_0.Z;
      local_638._padding_ = local_478._padding_;
      local_638.Color.field0_0x0._s_0.X = local_478.Color.field0_0x0._s_0.X;
      local_638.Color.field0_0x0._s_0.Y = local_478.Color.field0_0x0._s_0.Y;
      local_638.Seed = local_478.Seed;
      local_638.Steepness = local_478.Steepness;
      local_638.Color.field0_0x0._s_0.Z = local_478.Color.field0_0x0._s_0.Z;
      local_638.Color.field0_0x0._s_0.W = local_478.Color.field0_0x0._s_0.W;
      local_638.MetadataEntry = local_478.MetadataEntry;
      local_558.Transform.Rotation.XY.m128d_f64[0] = (double)local_718._0_8_;
      local_558.Transform.Rotation.XY.m128d_f64[1] = (double)local_718._8_8_;
      local_558.Transform.Rotation.ZW.m128d_f64[0] = (double)local_708._0_8_;
      local_558.Transform.Rotation.ZW.m128d_f64[1] = (double)local_708._8_8_;
      local_558.Transform.Translation.XY.m128d_f64[0] = (double)local_6f8._0_8_;
      local_558.Transform.Translation.XY.m128d_f64[1] = (double)local_6f8._8_8_;
      local_558.Transform.Translation.ZW.m128d_f64[0] = (double)local_6e8._0_8_;
      local_558.Transform.Translation.ZW.m128d_f64[1] = (double)local_6e8._8_8_;
      local_558.Transform.Scale3D.XY.m128d_f64[0] = (double)local_6d8._0_8_;
      local_558.Transform.Scale3D.XY.m128d_f64[1] = (double)local_6d8._8_8_;
      local_558.Transform.Scale3D.ZW.m128d_f64[0] = (double)local_6c8._0_8_;
      local_558.Transform.Scale3D.ZW.m128d_f64[1] = (double)local_6c8._8_8_;
      local_558.Density = local_6b8;
      local_558._100_4_ = uStack_6b4;
      local_558.BoundsMin.field0_0x0._s_0.X = dStack_6b0;
      local_558.BoundsMin.field0_0x0._s_0.Y = local_6a8;
      local_558.BoundsMin.field0_0x0._s_0.Z = dStack_6a0;
      local_558.BoundsMax.field0_0x0._s_0.X = local_698;
      local_558.BoundsMax.field0_0x0._s_0.Y = dStack_690;
      local_558.BoundsMax.field0_0x0._s_0.Z = local_688;
      local_558._padding_ = lStack_680;
      local_558.Color.field0_0x0._s_0.X = local_678;
      local_558.Color.field0_0x0._s_0.Y = dStack_670;
      local_558.Color.field0_0x0._s_0.Z = local_668;
      local_558.Color.field0_0x0._s_0.W = dStack_660;
      local_558.Steepness = (float)local_658;
      local_558.Seed = local_658._4_4_;
      local_558.MetadataEntry = lStack_650;
      local_648[0] = uVar3;
      local_568 = uVar2;
      local_488 = uVar22;
      pUVar18 = UObject::FindFunctionChecked
                          (this_00,NAME_UPCGBlueprintPointProcessorSimpleElement_PointLoopBody);
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar18,local_648);
      local_718._8_8_ = local_558.Transform.Rotation.XY.m128d_f64[1];
      local_718._0_8_ = local_558.Transform.Rotation.XY.m128d_f64[0];
      local_708._8_8_ = local_558.Transform.Rotation.ZW.m128d_f64[1];
      local_708._0_8_ = local_558.Transform.Rotation.ZW.m128d_f64[0];
      local_6f8._8_8_ = local_558.Transform.Translation.XY.m128d_f64[1];
      local_6f8._0_8_ = local_558.Transform.Translation.XY.m128d_f64[0];
      local_6e8._8_8_ = local_558.Transform.Translation.ZW.m128d_f64[1];
      local_6e8._0_8_ = local_558.Transform.Translation.ZW.m128d_f64[0];
      local_6d8._8_8_ = local_558.Transform.Scale3D.XY.m128d_f64[1];
      local_6d8._0_8_ = local_558.Transform.Scale3D.XY.m128d_f64[0];
      local_6c8._8_8_ = local_558.Transform.Scale3D.ZW.m128d_f64[1];
      local_6c8._0_8_ = local_558.Transform.Scale3D.ZW.m128d_f64[0];
      local_6b8 = local_558.Density;
      uStack_6b4 = local_558._100_4_;
      dStack_6b0 = local_558.BoundsMin.field0_0x0._s_0.X;
      local_6a8 = local_558.BoundsMin.field0_0x0._s_0.Y;
      dStack_6a0 = local_558.BoundsMin.field0_0x0._s_0.Z;
      local_698 = local_558.BoundsMax.field0_0x0._s_0.X;
      dStack_690 = local_558.BoundsMax.field0_0x0._s_0.Y;
      local_688 = local_558.BoundsMax.field0_0x0._s_0.Z;
      lStack_680 = local_558._padding_;
      local_678 = local_558.Color.field0_0x0._s_0.X;
      dStack_670 = local_558.Color.field0_0x0._s_0.Y;
      local_668 = local_558.Color.field0_0x0._s_0.Z;
      dStack_660 = local_558.Color.field0_0x0._s_0.W;
      local_658._0_4_ = local_558.Steepness;
      local_658._4_4_ = local_558.Seed;
      lStack_650 = local_558.MetadataEntry;
      if (local_480 != '\0') {
        if (local_3a8.TransformRange.NumElements != 0) {
          pTVar14 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3a8.TransformRange,param_2);
          (pTVar14->Rotation).XY.m128d_f64[0] = local_558.Transform.Rotation.XY.m128d_f64[0];
          (pTVar14->Rotation).XY.m128d_f64[1] = local_558.Transform.Rotation.XY.m128d_f64[1];
          (pTVar14->Rotation).ZW.m128d_f64[0] = local_558.Transform.Rotation.ZW.m128d_f64[0];
          (pTVar14->Rotation).ZW.m128d_f64[1] = local_558.Transform.Rotation.ZW.m128d_f64[1];
          (pTVar14->Translation).XY.m128d_f64[0] = local_558.Transform.Translation.XY.m128d_f64[0];
          (pTVar14->Translation).XY.m128d_f64[1] = local_558.Transform.Translation.XY.m128d_f64[1];
          (pTVar14->Translation).ZW.m128d_f64[0] = local_558.Transform.Translation.ZW.m128d_f64[0];
          (pTVar14->Translation).ZW.m128d_f64[1] = local_558.Transform.Translation.ZW.m128d_f64[1];
          (pTVar14->Scale3D).XY.m128d_f64[0] = local_558.Transform.Scale3D.XY.m128d_f64[0];
          (pTVar14->Scale3D).XY.m128d_f64[1] = local_558.Transform.Scale3D.XY.m128d_f64[1];
          (pTVar14->Scale3D).ZW.m128d_f64[0] = local_558.Transform.Scale3D.ZW.m128d_f64[0];
          (pTVar14->Scale3D).ZW.m128d_f64[1] = local_558.Transform.Scale3D.ZW.m128d_f64[1];
        }
        if (local_3a8.DensityRange.NumElements != 0) {
          pfVar13 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3a8.DensityRange,param_2);
          *pfVar13 = local_558.Density;
        }
        if (local_3a8.SteepnessRange.NumElements != 0) {
          pfVar13 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3a8.SteepnessRange,param_2);
          *pfVar13 = local_558.Steepness;
        }
        if (local_3a8.BoundsMinRange.NumElements != 0) {
          pTVar15 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3a8.BoundsMinRange,param_2);
          (pTVar15->field0_0x0)._s_0.X = local_558.BoundsMin.field0_0x0._s_0.X;
          (pTVar15->field0_0x0)._s_0.Y = local_558.BoundsMin.field0_0x0._s_0.Y;
          (pTVar15->field0_0x0)._s_0.Z = local_558.BoundsMin.field0_0x0._s_0.Z;
        }
        if (local_3a8.BoundsMaxRange.NumElements != 0) {
          pTVar15 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3a8.BoundsMaxRange,param_2);
          (pTVar15->field0_0x0)._s_0.X = local_558.BoundsMax.field0_0x0._s_0.X;
          (pTVar15->field0_0x0)._s_0.Y = local_558.BoundsMax.field0_0x0._s_0.Y;
          (pTVar15->field0_0x0)._s_0.Z = local_558.BoundsMax.field0_0x0._s_0.Z;
        }
        uVar8 = local_558.Color.field0_0x0._s_0.W;
        uVar7 = local_558.Color.field0_0x0._s_0.Z;
        uVar3 = local_558.Color.field0_0x0._s_0.Y;
        uVar2 = local_558.Color.field0_0x0._s_0.X;
        iVar20 = local_3a8.ColorRange.NumElements;
        if (iVar20 != 0) {
          uVar10 = 0;
          if (param_2 < iVar20) {
            uVar10 = (uint)~param_2 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_730 = (longlong)iVar20;
            local_738 = (longlong)param_2;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              iVar11 = (*pcVar4)();
              return iVar11;
            }
          }
          if (param_2 == param_2 % local_3a8.ColorRange.ElementView.NumElements) {
            pTVar19 = (TVector4<double>_u_0 *)
                      ((longlong)&(local_3a8.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                      (longlong)local_3a8.ColorRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_3a8.ColorRange.ElementView.NumElements));
          }
          else {
            pTVar19 = &local_3a8.ColorRange.StubValue.field0_0x0;
          }
          (((TVector4<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X = (double)uVar2;
          *(undefined8 *)((longlong)pTVar19 + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar19 + 0x10) = uVar7;
          *(undefined8 *)((longlong)pTVar19 + 0x18) = uVar8;
        }
        if (local_3a8.SeedRange.NumElements != 0) {
          piVar12 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3a8.SeedRange,param_2);
          *piVar12 = local_658._4_4_;
        }
        if (local_3a8.MetadataEntryRange.NumElements != 0) {
          plVar17 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3a8.MetadataEntryRange,param_2);
          *plVar17 = lStack_650;
        }
        iVar11 = iVar11 + 1;
        param_2 = param_2 + 1;
      }
      uVar23 = (ulonglong)(uVar21 + 1);
      uVar22 = uVar22 + 1;
      this = local_720;
    } while ((int)(uVar21 + 1) < local_728);
  }
  return iVar11;
}

// Execute_Implementation @ 1499f15d0

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

void __thiscall
UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation
          (UPCGBlueprintPointProcessorSimpleElement *this,FPCGDataCollection *param_1,
          FPCGDataCollection *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  code *pcVar3;
  longlong lVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGBasePointData *this_00;
  UFunction *pUVar11;
  FName *pFVar12;
  FPCGTaggedData *this_01;
  ulonglong uVar13;
  code **ppcVar14;
  code **ppcVar15;
  longlong *plVar16;
  FObjectPtr_u_0 *pFVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  <lambda_5> local_167 [3];
  uint local_164;
  FObjectPtr_u_0 local_160;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_158;
  FObjectPtr_u_0 *local_148;
  <lambda_4> local_140;
  <lambda_3> local_138;
  FObjectPtr_u_0 local_130;
  UPCGBasePointData *local_128;
  FName local_120;
  FPCGInitializeFromDataParams local_118;
  code *local_d8 [2];
  longlong local_c8 [3];
  longlong *local_b0;
  code *local_a8 [2];
  longlong local_98 [3];
  longlong *local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FPCGDataCollection::GetInputsByPin(param_1,&local_158,&PCGPinConstants::DefaultInputLabel);
  uVar13 = (ulonglong)local_158.ArrayNum;
  pFVar17 = (FObjectPtr_u_0 *)(local_158.AllocatorInstance.Data + uVar13 * 0x78);
  local_164 = local_158.ArrayNum;
  FVar18.Data = local_158.AllocatorInstance.Data;
  local_148 = pFVar17;
  do {
    if (local_158.ArrayNum != (uint)uVar13) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_168);
    }
    if ((FObjectPtr_u_0 *)FVar18.Data == pFVar17) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FPCGTaggedData *)local_158.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      return;
    }
    local_160 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar18.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1499f1690:
      if ((UPCGSpatialData *)local_160.Handle != (UPCGSpatialData *)0x0) {
        pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_160,pUVar10);
        FVar5 = local_160;
        if ((bVar6) && ((UPCGSpatialData *)local_160.Handle != (UPCGSpatialData *)0x0)) {
          this_00 = FPCGContext::NewPointData_AnyThread((FPCGContext *)this->_padding_);
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_118,(UPCGSpatialData *)FVar5.Handle);
          local_118.bInheritMetadata = this->bInheritMetadata;
          local_118.bInheritSpatialData = this->bInheritSpatialData;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_00,&local_118);
          pcVar3 = *(code **)(this_00->_padding_ + 0x490);
          uVar8 = (**(code **)(*(longlong *)FVar5.Handle + 0x488))(FVar5.Handle);
          (*pcVar3)(this_00,uVar8,1);
          if ((this->bInheritMetadata == false) && (this->bInheritSpatialData != false)) {
            (**(code **)(this_00->_padding_ + 0x578))(this_00,0xffffffffffffffff);
          }
          (**(code **)(this_00->_padding_ + 0x498))(this_00,this->PropertiesToAllocate);
          local_130.Handle = FVar5.Handle;
          local_128 = this_00;
          pUVar11 = UObject::FindFunctionChecked
                              ((UObject *)this,
                               NAME_UPCGBlueprintPointProcessorSimpleElement_Initialize);
          (**(code **)(this->_padding_ + 0x260))(this,pUVar11,&local_130);
          local_a8[0] = (code *)0x0;
          local_80 = (longlong *)0x0;
          local_80 = FMemory::Malloc(0x20,8);
          *local_80 = (longlong)
                      &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::`6'::<lambda_1>,0,1>
                       ::_vftable_;
          local_80[1] = (longlong)this;
          ((FObjectPtr_u_0 *)(local_80 + 2))->Handle = (UObject *)FVar5;
          local_80[3] = (longlong)this_00;
          if (local_80 + 1 != (longlong *)0x0) {
            local_a8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_1>,int,int,int,int>
                          ::Call;
          }
          local_d8[0] = (code *)0x0;
          local_b0 = (longlong *)0x0;
          local_b0 = FMemory::Malloc(0x20,8);
          *local_b0 = (longlong)
                      &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::`6'::<lambda_2>,0,1>
                       ::_vftable_;
          local_b0[1] = (longlong)this;
          ((FObjectPtr_u_0 *)(local_b0 + 2))->Handle = (UObject *)FVar5;
          local_b0[3] = (longlong)this_00;
          plVar16 = (longlong *)this->_padding_;
          if (local_b0 + 1 != (longlong *)0x0) {
            local_d8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_2>,int,int,int,int>
                          ::Call;
          }
          pcVar3 = *(code **)(*plVar16 + 0x3d8);
          pFVar12 = ::FName::FName(&local_120,0x12,L"RangePointLoopBody",FNAME_Add);
          cVar7 = (*pcVar3)(plVar16,*pFVar12);
          local_50 = (code **)0x0;
          ppcVar15 = local_a8;
          if (cVar7 == '\0') {
            ppcVar15 = local_d8;
          }
          local_78[0] = *ppcVar15;
          if (*ppcVar15 != (code *)0x0) {
            ppcVar14 = (code **)ppcVar15[5];
            if ((code **)ppcVar15[5] == (code **)0x0) {
              ppcVar14 = ppcVar15 + 2;
            }
            (**(code **)*ppcVar14)(ppcVar14,local_78 + 2);
          }
          lVar4 = this->_padding_;
          uVar2 = *(undefined1 *)(lVar4 + 0x112);
          *(undefined1 *)(lVar4 + 0x112) = 1;
          local_140.OutputPointData = this_00;
          local_138.OutputPointData = this_00;
          iVar9 = (**(code **)(*(longlong *)FVar5.Handle + 0x488))(FVar5.Handle);
          FPCGAsync::
          AsyncProcessingRangeEx<_UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation_::__l13::<lambda_5>,TFunction<int___cdecl(int,int,int)>_&,_UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation_::__l6::<lambda_3>_&,_UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation_::__l6::<lambda_4>_&>
                    ((FPCGAsyncState *)(this->_padding_ + 0x88),iVar9,local_167,
                     (TFunction<int___cdecl(int,int,int)> *)local_78,&local_138,&local_140,false,
                     0x40,true);
          *(undefined1 *)(lVar4 + 0x112) = uVar2;
          piVar1 = &(param_2->TaggedData).ArrayMax;
          iVar9 = (param_2->TaggedData).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)param_2,piVar1);
          }
          (param_2->TaggedData).ArrayNum = iVar9 + 1;
          this_01 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_2->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar9 * 0x78),(FPCGTaggedData *)FVar18.Data);
          FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)this_00);
          this_01->Pin = PCGPinConstants::DefaultOutputLabel;
          if (local_78[0] != (code *)0x0) {
            ppcVar15 = local_78 + 2;
            if (local_50 != (code **)0x0) {
              ppcVar15 = local_50;
            }
            (**(code **)(*ppcVar15 + 0x10))();
          }
          if (local_d8[0] != (code *)0x0) {
            plVar16 = local_c8;
            if (local_b0 != (longlong *)0x0) {
              plVar16 = local_b0;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_a8[0] != (code *)0x0) {
            plVar16 = local_98;
            if (local_80 != (longlong *)0x0) {
              plVar16 = local_80;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_118.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_118.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_118.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_118.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
          }
          pFVar17 = local_148;
          if (local_118.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
            pFVar17 = local_148;
          }
        }
      }
    }
    else if ((UPCGSpatialData *)local_160.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_160.Handle);
      goto LAB_1499f1690;
    }
    uVar13 = (ulonglong)local_164;
    FVar18.Data = FVar18.Data + 0x78;
  } while( true );
}

// GetPrivateStaticClass @ 1499fab50

UClass * __cdecl UPCGBlueprintPointProcessorSimpleElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPointProcessorSimpleElement.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPointProcessorSimpleElement",
               &Z_Registration_Info_UClass_UPCGBlueprintPointProcessorSimpleElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintPointProcessorSimpleElement,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBlueprintPointProcessorSimpleElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintPointProcessorSimpleElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPointProcessorSimpleElement.InnerSingleton;
}

// Initialize @ 1499fe5a0

void __thiscall
UPCGBlueprintPointProcessorSimpleElement::Initialize
          (UPCGBlueprintPointProcessorSimpleElement *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  UFunction *pUVar1;
  UPCGBasePointData *local_18;
  UPCGBasePointData *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGBlueprintPointProcessorSimpleElement_Initialize);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// PointLoopBody @ 149a048d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGBlueprintPointProcessorSimpleElement::PointLoopBody
          (UPCGBlueprintPointProcessorSimpleElement *this,UPCGBasePointData *param_1,
          FPCGPoint *param_2,UPCGBasePointData *param_3,FPCGPoint *param_4,long64 param_5)

{
  UFunction *pUVar1;
  undefined1 auStack_228 [32];
  UPCGBasePointData *local_208 [2];
  FPCGPoint local_1f8;
  UPCGBasePointData *local_128;
  FPCGPoint local_118;
  long64 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  FPCGPoint::FPCGPoint(&local_1f8);
  FPCGPoint::FPCGPoint(&local_118);
  local_1f8.Transform.Rotation.XY.m128d_f64[0] = (param_2->Transform).Rotation.XY.m128d_f64[0];
  local_1f8.Transform.Rotation.XY.m128d_f64[1] = (param_2->Transform).Rotation.XY.m128d_f64[1];
  local_40 = '\0';
  local_1f8.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Transform).Rotation.ZW.m128d_f64[0];
  local_1f8.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  local_1f8.Transform.Translation.XY.m128d_f64[0] = (param_2->Transform).Translation.XY.m128d_f64[0]
  ;
  local_1f8.Transform.Translation.XY.m128d_f64[1] = (param_2->Transform).Translation.XY.m128d_f64[1]
  ;
  local_1f8.Transform.Translation.ZW.m128d_f64[0] = (param_2->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_1f8.Transform.Translation.ZW.m128d_f64[1] = (param_2->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_1f8.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  local_1f8.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  local_1f8.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  local_1f8.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  local_1f8.Density = param_2->Density;
  local_1f8._100_4_ = *(undefined4 *)&param_2->field_0x64;
  local_1f8.BoundsMin.field0_0x0._s_0.X = (param_2->BoundsMin).field0_0x0._s_0.X;
  local_1f8.BoundsMax.field0_0x0._s_0.X = (param_2->BoundsMax).field0_0x0._s_0.X;
  local_1f8.BoundsMax.field0_0x0._s_0.Y = (param_2->BoundsMax).field0_0x0._s_0.Y;
  local_1f8.BoundsMin.field0_0x0._s_0.Y = (param_2->BoundsMin).field0_0x0._s_0.Y;
  local_1f8.BoundsMin.field0_0x0._s_0.Z = (param_2->BoundsMin).field0_0x0._s_0.Z;
  local_1f8.BoundsMax.field0_0x0._s_0.Z = (param_2->BoundsMax).field0_0x0._s_0.Z;
  local_1f8._padding_ = param_2->_padding_;
  local_1f8.Color.field0_0x0._s_0.X = (param_2->Color).field0_0x0._s_0.X;
  local_1f8.Color.field0_0x0._s_0.Y = (param_2->Color).field0_0x0._s_0.Y;
  local_1f8.Color.field0_0x0._s_0.Z = (param_2->Color).field0_0x0._s_0.Z;
  local_1f8.Color.field0_0x0._s_0.W = (param_2->Color).field0_0x0._s_0.W;
  local_1f8.Steepness = param_2->Steepness;
  local_1f8.Seed = param_2->Seed;
  local_1f8.MetadataEntry = param_2->MetadataEntry;
  local_118.Transform.Rotation.XY.m128d_f64[0] = (param_4->Transform).Rotation.XY.m128d_f64[0];
  local_118.Transform.Rotation.XY.m128d_f64[1] = (param_4->Transform).Rotation.XY.m128d_f64[1];
  local_118.Transform.Rotation.ZW.m128d_f64[0] = (param_4->Transform).Rotation.ZW.m128d_f64[0];
  local_118.Transform.Rotation.ZW.m128d_f64[1] = (param_4->Transform).Rotation.ZW.m128d_f64[1];
  local_118.Transform.Translation.XY.m128d_f64[0] = (param_4->Transform).Translation.XY.m128d_f64[0]
  ;
  local_118.Transform.Translation.XY.m128d_f64[1] = (param_4->Transform).Translation.XY.m128d_f64[1]
  ;
  local_118.Transform.Translation.ZW.m128d_f64[0] = (param_4->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_118.Transform.Translation.ZW.m128d_f64[1] = (param_4->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_118.Transform.Scale3D.XY.m128d_f64[0] = (param_4->Transform).Scale3D.XY.m128d_f64[0];
  local_118.Transform.Scale3D.XY.m128d_f64[1] = (param_4->Transform).Scale3D.XY.m128d_f64[1];
  local_118.Transform.Scale3D.ZW.m128d_f64[0] = (param_4->Transform).Scale3D.ZW.m128d_f64[0];
  local_118.Transform.Scale3D.ZW.m128d_f64[1] = (param_4->Transform).Scale3D.ZW.m128d_f64[1];
  local_118.Density = param_4->Density;
  local_118._100_4_ = *(undefined4 *)&param_4->field_0x64;
  local_118.BoundsMin.field0_0x0._s_0.X = (param_4->BoundsMin).field0_0x0._s_0.X;
  local_118.BoundsMin.field0_0x0._s_0.Y = (param_4->BoundsMin).field0_0x0._s_0.Y;
  local_118.BoundsMin.field0_0x0._s_0.Z = (param_4->BoundsMin).field0_0x0._s_0.Z;
  local_118.BoundsMax.field0_0x0._s_0.X = (param_4->BoundsMax).field0_0x0._s_0.X;
  local_118.BoundsMax.field0_0x0._s_0.Y = (param_4->BoundsMax).field0_0x0._s_0.Y;
  local_118.BoundsMax.field0_0x0._s_0.Z = (param_4->BoundsMax).field0_0x0._s_0.Z;
  local_118._padding_ = param_4->_padding_;
  local_118.Color.field0_0x0._s_0.X = (param_4->Color).field0_0x0._s_0.X;
  local_118.Color.field0_0x0._s_0.Y = (param_4->Color).field0_0x0._s_0.Y;
  local_118.Color.field0_0x0._s_0.Z = (param_4->Color).field0_0x0._s_0.Z;
  local_118.Color.field0_0x0._s_0.W = (param_4->Color).field0_0x0._s_0.W;
  local_118.Steepness = param_4->Steepness;
  local_118.Seed = param_4->Seed;
  local_118.MetadataEntry = param_4->MetadataEntry;
  local_48 = param_5;
  local_208[0] = param_1;
  local_128 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGBlueprintPointProcessorSimpleElement_PointLoopBody);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_208);
  (param_4->Transform).Rotation.XY.m128d_f64[0] = local_118.Transform.Rotation.XY.m128d_f64[0];
  (param_4->Transform).Rotation.XY.m128d_f64[1] = local_118.Transform.Rotation.XY.m128d_f64[1];
  (param_4->Transform).Rotation.ZW.m128d_f64[0] = local_118.Transform.Rotation.ZW.m128d_f64[0];
  (param_4->Transform).Rotation.ZW.m128d_f64[1] = local_118.Transform.Rotation.ZW.m128d_f64[1];
  (param_4->Transform).Translation.XY.m128d_f64[0] = local_118.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_4->Transform).Translation.XY.m128d_f64[1] = local_118.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_4->Transform).Translation.ZW.m128d_f64[0] = local_118.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_4->Transform).Translation.ZW.m128d_f64[1] = local_118.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_4->Transform).Scale3D.XY.m128d_f64[0] = local_118.Transform.Scale3D.XY.m128d_f64[0];
  (param_4->Transform).Scale3D.XY.m128d_f64[1] = local_118.Transform.Scale3D.XY.m128d_f64[1];
  (param_4->Transform).Scale3D.ZW.m128d_f64[0] = local_118.Transform.Scale3D.ZW.m128d_f64[0];
  (param_4->Transform).Scale3D.ZW.m128d_f64[1] = local_118.Transform.Scale3D.ZW.m128d_f64[1];
  param_4->Density = local_118.Density;
  *(undefined4 *)&param_4->field_0x64 = local_118._100_4_;
  (param_4->BoundsMin).field0_0x0._s_0.X = local_118.BoundsMin.field0_0x0._s_0.X;
  (param_4->BoundsMin).field0_0x0._s_0.Y = local_118.BoundsMin.field0_0x0._s_0.Y;
  (param_4->BoundsMin).field0_0x0._s_0.Z = local_118.BoundsMin.field0_0x0._s_0.Z;
  (param_4->BoundsMax).field0_0x0._s_0.X = local_118.BoundsMax.field0_0x0._s_0.X;
  (param_4->BoundsMax).field0_0x0._s_0.Y = local_118.BoundsMax.field0_0x0._s_0.Y;
  (param_4->BoundsMax).field0_0x0._s_0.Z = local_118.BoundsMax.field0_0x0._s_0.Z;
  param_4->_padding_ = local_118._padding_;
  (param_4->Color).field0_0x0._s_0.X = local_118.Color.field0_0x0._s_0.X;
  (param_4->Color).field0_0x0._s_0.Y = local_118.Color.field0_0x0._s_0.Y;
  (param_4->Color).field0_0x0._s_0.Z = local_118.Color.field0_0x0._s_0.Z;
  (param_4->Color).field0_0x0._s_0.W = local_118.Color.field0_0x0._s_0.W;
  param_4->Steepness = local_118.Steepness;
  param_4->Seed = local_118.Seed;
  param_4->MetadataEntry = local_118.MetadataEntry;
  return local_40 != '\0';
}

// RangePointLoopBody @ 149a098b0

int __thiscall
UPCGBlueprintPointProcessorSimpleElement::RangePointLoopBody
          (UPCGBlueprintPointProcessorSimpleElement *this,FPCGPointInputRange *param_1,
          FPCGPointOutputRange *param_2)

{
  UPCGBasePointData *pUVar1;
  UFunction *pUVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_38;
  int local_30;
  int local_2c;
  UPCGBasePointData *local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_38 = (param_1->PointData).field0_0x0;
  local_30 = param_1->RangeStartIndex;
  local_2c = param_1->RangeSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_2->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_28 = (param_2->PointData).field0_0x0.DebugPtr;
  local_20 = param_2->RangeStartIndex;
  local_1c = param_2->RangeSize;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UPCGBlueprintPointProcessorSimpleElement_RangePointLoopBody);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  (param_2->PointData).field0_0x0.DebugPtr = local_28;
  param_2->RangeStartIndex = local_20;
  param_2->RangeSize = local_1c;
  return local_18;
}

// StaticRegisterNativesUPCGBlueprintPointProcessorSimpleElement @ 149a0ff60

void __cdecl
UPCGBlueprintPointProcessorSimpleElement::
StaticRegisterNativesUPCGBlueprintPointProcessorSimpleElement(void)

{
  return;
}

