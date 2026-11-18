// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// GetCapFillMode @ 14cc5b280

ERevolvePropertiesCapFillMode __thiscall
URevolveProperties::GetCapFillMode(URevolveProperties *this)

{
  return Delaunay;
}

// StaticClass @ 14cc82270

UClass * __cdecl URevolveProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_URevolveProperties.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RevolveProperties",
               &Z_Registration_Info_UClass_URevolveProperties.InnerSingleton,
               StaticRegisterNativesURevolveProperties,0x120,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URevolveProperties>,
               InternalVTableHelperCtorCaller<URevolveProperties>,aFStackX_8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URevolveProperties.InnerSingleton;
}

// URevolveProperties @ 14ccbff10

URevolveProperties * __thiscall
URevolveProperties::URevolveProperties(URevolveProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->NumExplicitSteps = 0x18;
  this->RevolveDegreesOffset = 0.0;
  this->_padding_ = (longlong)&___7URevolveProperties__6B_;
  this->RevolveDegreesClamped = 360.0;
  this->RevolveDegrees = 360.0;
  this->StepsMaxDegrees = 15.0;
  this->bExplicitSteps = false;
  this->HeightOffsetPerDegree = 0.0;
  this->bReverseRevolutionDirection = false;
  this->bFlipMesh = false;
  this->bSharpNormals = false;
  this->QuadSplitCompactTolerance = 0.01;
  this->SharpNormalsDegreeThreshold = 0.1;
  this->bPathAtMidpointOfStep = false;
  this->PolygroupMode = PerFace;
  this->QuadSplitMode = Compact;
  this->bWeldFullRevolution = true;
  this->bWeldVertsOnAxis = true;
  this->AxisWeldTolerance = 0.1;
  this->bFlipVs = false;
  this->bUVsSkipFullyWeldedEdges = true;
  return this;
}

// ~URevolveProperties @ 14ccc4e80

void __thiscall URevolveProperties::~URevolveProperties(URevolveProperties *this)

{
  this->_padding_ = (longlong)&___7URevolveProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// ApplyToCurveSweepOp @ 14cce4eb0

void __thiscall
URevolveProperties::ApplyToCurveSweepOp
          (URevolveProperties *this,UNewMeshMaterialProperties *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCurveSweepOp *param_4)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  double dVar4;
  ERevolvePropertiesPolygroupMode EVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TVector2<double>_u_0 TVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FCurveSweepOp *pFVar15;
  bool bVar16;
  char cVar17;
  longlong lVar18;
  int iVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  pFVar15 = param_4;
  pTVar1 = &param_4->ProfileCurve;
  bVar16 = RevolveUtil::ProfileIsCCWRelativeRevolve
                     (pTVar1,param_2,param_3,param_4->bProfileCurveIsClosed);
  bVar20 = bVar16 ^ this->bFlipMesh ^ this->bReverseRevolutionDirection;
  if (bVar20 != 1) {
    iVar19 = (param_4->ProfileCurve).ArrayNum;
    uVar21 = 0;
    if (0 < iVar19 / 2) {
      param_4 = (FCurveSweepOp *)0x0;
      do {
        uVar22 = ~uVar21 + iVar19;
        uVar23 = 0;
        if ((int)uVar22 < iVar19) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        lVar18 = (longlong)(int)uVar22;
        uVar22 = 0;
        if ((int)uVar21 < (pFVar15->ProfileCurve).ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        uVar21 = uVar21 + 1;
        uVar12 = *(undefined8 *)(pFVar6 + lVar18 * 0x18 + 8);
        pFVar2 = (FScriptContainerElement *)((longlong)&param_4->_padding_ + (longlong)pFVar7);
        uVar13 = *(undefined8 *)pFVar2;
        uVar14 = *(undefined8 *)(pFVar2 + 8);
        uVar3 = *(undefined8 *)((longlong)&param_4->_padding_ + (longlong)pFVar7);
        pFVar2 = (FScriptContainerElement *)((longlong)&param_4->_padding_ + (longlong)pFVar7);
        *(undefined8 *)pFVar2 = *(undefined8 *)(pFVar6 + lVar18 * 0x18);
        *(undefined8 *)(pFVar2 + 8) = uVar12;
        *(undefined8 *)((longlong)&param_4->_padding_ + (longlong)pFVar7) =
             *(undefined8 *)(pFVar6 + lVar18 * 0x18 + 0x10);
        param_4 = (FCurveSweepOp *)&param_4->_padding_;
        *(undefined8 *)(pFVar6 + lVar18 * 0x18) = uVar13;
        *(undefined8 *)(pFVar6 + lVar18 * 0x18 + 8) = uVar14;
        *(undefined8 *)(pFVar6 + lVar18 * 0x18 + 0x10) = uVar3;
        iVar19 = (pFVar15->ProfileCurve).ArrayNum;
      } while ((int)uVar21 < iVar19 / 2);
    }
  }
  lVar18 = 0xb8;
  if (this->HeightOffsetPerDegree == 0.0) {
    lVar18 = 0xb0;
  }
  dVar4 = *(double *)((longlong)&this->_padding_ + lVar18);
  if (this->bExplicitSteps == false) {
    uVar21 = -(int)((longlong)
                    ROUND(__real_bfe0000000000000 - (dVar4 + dVar4) / this->StepsMaxDegrees) >> 1);
  }
  else {
    uVar21 = this->NumExplicitSteps;
  }
  uVar22 = SUB84(this->RevolveDegreesOffset,0);
  uVar23 = (uint)((ulonglong)this->RevolveDegreesOffset >> 0x20);
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar10 = (__real_3ff0000000000000 / (double)(int)uVar21) * dVar4;
  if (this->bReverseRevolutionDirection != false) {
    dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar25,SUB84(dVar10,0) ^ uVar24);
    uVar22 = uVar22 ^ uVar24;
    uVar23 = uVar23 ^ uVar25;
  }
  dVar11 = dVar4 * this->HeightOffsetPerDegree * (__real_3ff0000000000000 / (double)(int)uVar21);
  if (((this->bPathAtMidpointOfStep != false) && (dVar10 != 0.0)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_4066800000000000)) {
    RevolveUtil::MakeProfileCurveMidpointOfFirstStep(pTVar1,dVar10,param_2,param_3);
  }
  if (((this->bWeldFullRevolution == false) || (this->HeightOffsetPerDegree != 0.0)) ||
     (dVar4 != __real_4076800000000000)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  pFVar15->bSweepCurveIsClosed = bVar16;
  if (bVar16 == false) {
    uVar21 = uVar21 + 1;
  }
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if ((pFVar15->SweepCurve).ArrayMax < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar21,&(pFVar15->SweepCurve).AllocatorInstance,(pFVar15->SweepCurve).ArrayNum
               ,&(pFVar15->SweepCurve).ArrayMax);
  }
  RevolveUtil::GenerateSweepCurve
            (param_2,param_3,(double)CONCAT44(uVar23,uVar22),dVar10,dVar11,uVar21,
             &pFVar15->SweepCurve);
  if ((this->bWeldVertsOnAxis != false) && (dVar11 == 0.0)) {
    RevolveUtil::WeldPointsOnAxis
              (pTVar1,param_2,param_3,this->AxisWeldTolerance,&pFVar15->ProfileVerticesToWeld);
  }
  pFVar15->bSharpNormals = this->bSharpNormals;
  pFVar15->SharpNormalAngleTolerance = this->SharpNormalsDegreeThreshold;
  pFVar15->DiagonalTolerance = this->QuadSplitCompactTolerance;
  dVar4 = (double)param_1->UVScale;
  uVar21 = (uint)((ulonglong)dVar4 >> 0x20);
  TVar9._8_4_ = SUB84(dVar4,0);
  TVar9._s_0.X = dVar4;
  TVar9._12_4_ = uVar21;
  (pFVar15->UVScale).field0_0x0 = TVar9;
  if ((bVar20 ^ this->bFlipVs) != 1) {
    (pFVar15->UVScale).field0_0x0._s_0.Y = (double)CONCAT44(uVar21 ^ uVar25,SUB84(dVar4,0) ^ uVar24)
    ;
    (pFVar15->UVOffset).field0_0x0._s_0.X = 0.0;
    *(double *)((longlong)&(pFVar15->UVOffset).field0_0x0 + 8) = dVar4;
  }
  pFVar15->bUVsSkipFullyWeldedEdges = this->bUVsSkipFullyWeldedEdges;
  pFVar15->bUVScaleRelativeWorld = param_1->bWorldSpaceUVScale;
  pFVar15->UnitUVInWorldCoordinates = 100.0;
  EVar5 = this->PolygroupMode;
  if (EVar5 == PerShape) {
    pFVar15->PolygonGroupingMode = Single;
  }
  else if (EVar5 == PerFace) {
    pFVar15->PolygonGroupingMode = PerFace;
  }
  else if (EVar5 == PerRevolveStep) {
    pFVar15->PolygonGroupingMode = PerSweepSegment;
  }
  else if (EVar5 == PerPathSegment) {
    pFVar15->PolygonGroupingMode = PerProfileSegment;
  }
  if (this->QuadSplitMode == Uniform) {
    pFVar15->QuadSplitMode = Uniform;
  }
  else if (this->QuadSplitMode == Compact) {
    pFVar15->QuadSplitMode = ShortestDiagonal;
  }
  cVar17 = (**(code **)(this->_padding_ + 0x2c8))(this);
  if (cVar17 == '\0') {
    pFVar15->CapFillMode = None;
  }
  else if (cVar17 == '\x01') {
    pFVar15->CapFillMode = CenterFan;
  }
  else if (cVar17 == '\x02') {
    pFVar15->CapFillMode = Delaunay;
  }
  else if (cVar17 == '\x03') {
    pFVar15->CapFillMode = EarClipping;
  }
  return;
}

// GetPrivateStaticClass @ 14cd01aa0

UClass * __cdecl URevolveProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URevolveProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RevolveProperties",
               &Z_Registration_Info_UClass_URevolveProperties.InnerSingleton,
               StaticRegisterNativesURevolveProperties,0x120,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URevolveProperties>,
               InternalVTableHelperCtorCaller<URevolveProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URevolveProperties.InnerSingleton;
}

// StaticRegisterNativesURevolveProperties @ 14cd2f340

void __cdecl URevolveProperties::StaticRegisterNativesURevolveProperties(void)

{
  return;
}

