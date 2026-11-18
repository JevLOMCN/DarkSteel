// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 149416610

UClass * __cdecl UNiagaraStatelessModule_ShapeLocation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ShapeLocation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ShapeLocation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ShapeLocation>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton;
}

// UNiagaraStatelessModule_ShapeLocation @ 14942a3c0

UNiagaraStatelessModule_ShapeLocation * __thiscall
UNiagaraStatelessModule_ShapeLocation::UNiagaraStatelessModule_ShapeLocation
          (UNiagaraStatelessModule_ShapeLocation *this,FVTableHelper *param_1)

{
  float fVar1;
  TVector2<float>_u_0 local_res8 [4];
  TVector<float>_u_0 local_28 [2];
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  fVar1 = __real_42c80000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ShapeLocation__6B_;
  this->ShapePrimitive = Sphere;
  local_28[0]._s_0.X = 100.0;
  local_28[0]._s_0.Y = 100.0;
  local_28[0]._s_0.Z = 100.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->BoxSize,(TVector<float> *)&local_28[0]._s_0);
  this->bBoxSurfaceOnly = false;
  this->BoxSurfaceExpansion = Centered;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->BoxSurfaceThickness,0.0);
  local_res8[0]._s_0.X = 100.0;
  local_res8[0]._s_0.Y = 100.0;
  FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
            (&this->PlaneSize,(TVector2<float> *)&local_res8[0]._s_0);
  this->bPlaneEdgesOnly = false;
  this->PlaneEdgeExpansion = Centered;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->PlaneEdgeThickness,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->CylinderHeight,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->CylinderRadius,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->CylinderHeightMidpoint,__real_3f000000);
  this->bCylinderSurfaceOnly = false;
  this->bCylinderSurfaceOnlyIncludeEndCaps = true;
  this->CylinderSurfaceExpansion = Centered;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->CylinderSurfaceThickness,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->RingRadius,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->DiscCoverage,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->RingUDistribution,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->SphereRadius,fVar1);
  this->CoordinateSpace = Simulation;
  FNiagaraDistributionRangeRotator::FNiagaraDistributionRangeRotator(&this->ShapeRotation);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->ShapeScale,&UE::Math::TVector<float>::OneVector);
  return this;
}

// UNiagaraStatelessModule_ShapeLocation @ 14942a530

UNiagaraStatelessModule_ShapeLocation * __thiscall
UNiagaraStatelessModule_ShapeLocation::UNiagaraStatelessModule_ShapeLocation
          (UNiagaraStatelessModule_ShapeLocation *this)

{
  float fVar1;
  TVector2<float>_u_0 local_res8 [4];
  TVector<float>_u_0 local_28 [2];
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  fVar1 = __real_42c80000;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ShapeLocation__6B_;
  this->ShapePrimitive = Sphere;
  local_28[0]._s_0.X = 100.0;
  local_28[0]._s_0.Y = 100.0;
  local_28[0]._s_0.Z = 100.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->BoxSize,(TVector<float> *)&local_28[0]._s_0);
  this->bBoxSurfaceOnly = false;
  this->BoxSurfaceExpansion = Centered;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->BoxSurfaceThickness,0.0);
  local_res8[0]._s_0.X = 100.0;
  local_res8[0]._s_0.Y = 100.0;
  FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
            (&this->PlaneSize,(TVector2<float> *)&local_res8[0]._s_0);
  this->bPlaneEdgesOnly = false;
  this->PlaneEdgeExpansion = Centered;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->PlaneEdgeThickness,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->CylinderHeight,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->CylinderRadius,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->CylinderHeightMidpoint,__real_3f000000);
  this->bCylinderSurfaceOnly = false;
  this->bCylinderSurfaceOnlyIncludeEndCaps = true;
  this->CylinderSurfaceExpansion = Centered;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->CylinderSurfaceThickness,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->RingRadius,fVar1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->DiscCoverage,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->RingUDistribution,0.0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->SphereRadius,fVar1);
  this->CoordinateSpace = Simulation;
  FNiagaraDistributionRangeRotator::FNiagaraDistributionRangeRotator(&this->ShapeRotation);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->ShapeScale,&UE::Math::TVector<float>::OneVector);
  return this;
}

// ~UNiagaraStatelessModule_ShapeLocation @ 14942cd90

void __thiscall
UNiagaraStatelessModule_ShapeLocation::~UNiagaraStatelessModule_ShapeLocation
          (UNiagaraStatelessModule_ShapeLocation *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ShapeLocation__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ShapeScale)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ShapeRotation)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SphereRadius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RingUDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->DiscCoverage)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RingRadius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderSurfaceThickness)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderHeightMidpoint)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderRadius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderHeight)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->PlaneEdgeThickness)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->PlaneSize)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->BoxSurfaceThickness)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->BoxSize)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149435aa0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_ShapeLocation::BuildEmitterData
          (UNiagaraStatelessModule_ShapeLocation *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined8 uVar4;
  char cVar7;
  ENSM_ShapePrimitive EVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  FNiagaraStatelessRange<UE::Math::TVector<float>_> *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar19;
  TVector2<float>_u_0 TVar20;
  TVector2<float>_u_0 TVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  code *local_a8 [2];
  undefined **local_98;
  code *local_90;
  undefined8 local_80;
  FNiagaraStatelessRange<UE::Math::TVector<float>_> local_78 [2];
  
  pTVar9 = param_1->BuiltData;
  uVar17 = pTVar9->ArrayNum + 3U & 0xfffffffc;
  iVar15 = (uVar17 - pTVar9->ArrayNum) + 0x48;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,&pTVar9->ArrayMax);
  memset((pTVar9->AllocatorInstance).Data + iVar13,0,(longlong)iVar15);
  iVar13 = -1;
  pFVar10 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar10 + (int)uVar17) = 0;
  *(undefined8 *)(pFVar10 + (int)uVar17 + 8) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x30) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x40) = 0;
  *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 8) = 0xffffffff;
  pFVar10[(int)uVar17] = (FScriptContainerElement)0x5;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0xc) =
       UE::Math::TRotator<float>::ZeroRotator._0_8_;
  *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x14) = UE::Math::TRotator<float>::ZeroRotator.Roll;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x18) =
       UE::Math::TRotator<float>::ZeroRotator._0_8_;
  *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = UE::Math::TRotator<float>::ZeroRotator.Roll;
  *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x24) = 0xffffffff;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x28) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x30) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x38) = 0;
  *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x40) = 0xffffffffffffffff;
  bVar12 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar12) {
    iVar15 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                       (param_1,&NiagaraStatelessCommon::GGlobals.PositionVariable);
    *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x40) = iVar15;
    iVar15 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                       (param_1,&NiagaraStatelessCommon::GGlobals.PreviousPositionVariable);
    *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x44) = iVar15;
    if ((*(int *)(pFVar10 + (longlong)(int)uVar17 + 0x40) != -1) || (iVar15 != -1)) {
      pFVar10[(int)uVar17] = (FScriptContainerElement)this->ShapePrimitive;
      *(ENiagaraCoordinateSpace *)(pFVar10 + (longlong)(int)uVar17 + 4) = this->CoordinateSpace;
      fVar22 = UE::Math::TRotator<float>::ZeroRotator.Roll;
      fVar2 = UE::Math::TRotator<float>::ZeroRotator.Pitch;
      fVar5 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
      cVar7 = (char)(this->ShapeRotation)._padding_;
      fVar3 = fVar2;
      fVar6 = fVar5;
      fVar18 = fVar22;
      if (cVar7 == '\x01') {
        iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                           (param_1,(FNiagaraVariableBase *)
                                    ((longlong)&(this->ShapeRotation)._padding_ + 4));
      }
      else if (cVar7 == '\x02') {
        iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                           (param_1,(FInstancedStruct *)&(this->ShapeRotation)._padding_);
      }
      else {
        fVar2 = (this->ShapeRotation).Min.Pitch;
        fVar5 = (this->ShapeRotation).Min.Yaw;
        fVar22 = (this->ShapeRotation).Min.Roll;
        fVar3 = fVar2;
        fVar6 = fVar5;
        fVar18 = fVar22;
        if (cVar7 != '\x03') {
          fVar3 = (this->ShapeRotation).Max.Pitch;
          fVar6 = (this->ShapeRotation).Max.Yaw;
          fVar18 = (this->ShapeRotation).Max.Roll;
        }
        iVar15 = -1;
      }
      pFVar1 = pFVar10 + (longlong)(int)uVar17 + 8;
      *(int *)pFVar1 = iVar15;
      *(float *)(pFVar1 + 4) = fVar2;
      *(float *)(pFVar1 + 8) = fVar5;
      *(float *)(pFVar1 + 0xc) = fVar22;
      *(ulonglong *)(pFVar10 + (longlong)(int)uVar17 + 0x18) = CONCAT44(fVar6,fVar3);
      *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = fVar18;
      uVar19 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      uStack_e4 = (undefined4)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      uStack_e0 = (undefined4)
                  ((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
      cVar7 = (char)(this->ShapeScale)._padding_;
      fStack_dc = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      uVar23 = uStack_e4;
      uVar24 = uStack_e0;
      if (cVar7 == '\x01') {
        local_e8 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->ShapeScale)._padding_ + 4));
      }
      else if (cVar7 == '\x02') {
        local_e8 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->ShapeScale)._padding_);
      }
      else {
        uVar4 = *(undefined8 *)&(this->ShapeScale).Min.field0_0x0;
        uStack_e4 = (undefined4)uVar4;
        uStack_e0 = (undefined4)((ulonglong)uVar4 >> 0x20);
        fStack_dc = (this->ShapeScale).Min.field0_0x0._s_0.Z;
        local_e8 = -1;
        uVar23 = uStack_e4;
        uVar24 = uStack_e0;
        uVar19 = fStack_dc;
        if (cVar7 != '\x03') {
          uVar4 = *(undefined8 *)&(this->ShapeScale).Max.field0_0x0;
          uVar23 = (int)uVar4;
          uVar24 = (int)((ulonglong)uVar4 >> 0x20);
          uVar19 = (this->ShapeScale).Max.field0_0x0._s_0.Z;
        }
      }
      *(ulonglong *)(pFVar10 + (longlong)(int)uVar17 + 0x24) = CONCAT44(uStack_e4,local_e8);
      *(ulonglong *)(pFVar10 + (longlong)(int)uVar17 + 0x24 + 8) = CONCAT44(fStack_dc,uStack_e0);
      *(ulonglong *)(pFVar10 + (longlong)(int)uVar17 + 0x34) = CONCAT44(uVar24,uVar23);
      *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x3c) = uVar19;
      EVar8 = this->ShapePrimitive;
      if (EVar8 == Box) {
        pTVar9 = param_1->BuiltData;
        uVar17 = pTVar9->ArrayNum + 3U & 0xfffffffc;
        iVar16 = (uVar17 - pTVar9->ArrayNum) + 0x30;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar16,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        memset((pTVar9->AllocatorInstance).Data + iVar15,0,(longlong)iVar16);
        pFVar10 = (param_1->BuiltData->AllocatorInstance).Data;
        *(undefined2 *)(pFVar10 + (longlong)(int)uVar17 + 1) = 0;
        pFVar10[(longlong)(int)uVar17 + 3] = (FScriptContainerElement)0x0;
        *(undefined2 *)(pFVar10 + (longlong)(int)uVar17 + 0x21) = 0;
        pFVar10[(longlong)(int)uVar17 + 0x23] = (FScriptContainerElement)0x0;
        pFVar10[(int)uVar17] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 4) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 8) = 0;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = 0;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x18) = 0;
        pFVar10[(longlong)(int)uVar17 + 0x20] = (FScriptContainerElement)0x1;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x24) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x28) = 0;
        pFVar10[(int)uVar17] = (FScriptContainerElement)this->bBoxSurfaceOnly;
        pFVar14 = FNiagaraStatelessEmitterDataBuildContext::ConvertDistributionToRange
                            (param_1,local_78,&this->BoxSize,&UE::Math::TVector<float>::ZeroVector);
        uVar4 = *(undefined8 *)((longlong)&(pFVar14->Min).field0_0x0 + 4);
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 4) = *(undefined8 *)pFVar14;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 4 + 8) = uVar4;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x14) =
             *(undefined8 *)&(pFVar14->Max).field0_0x0;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = (pFVar14->Max).field0_0x0._s_0.Z;
        pFVar10[(longlong)(int)uVar17 + 0x20] = (FScriptContainerElement)this->BoxSurfaceExpansion;
        cVar7 = (char)(this->BoxSurfaceThickness)._padding_;
        if (cVar7 == '\x01') {
          fVar2 = 0.0;
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->BoxSurfaceThickness)._padding_ + 4));
          fVar3 = 0.0;
        }
        else if (cVar7 == '\x02') {
          fVar2 = 0.0;
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->BoxSurfaceThickness)._padding_);
          fVar3 = 0.0;
        }
        else {
          fVar2 = (this->BoxSurfaceThickness).Min;
          fVar3 = fVar2;
          if (cVar7 != '\x03') {
            fVar3 = (this->BoxSurfaceThickness).Max;
          }
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x24) = iVar13;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x28) = fVar2;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x2c) = fVar3;
      }
      else if (EVar8 == Cylinder) {
        pTVar9 = param_1->BuiltData;
        uVar17 = pTVar9->ArrayNum + 3U & 0xfffffffc;
        iVar16 = (uVar17 - pTVar9->ArrayNum) + 0x34;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar16,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        memset((pTVar9->AllocatorInstance).Data + iVar15,0,(longlong)iVar16);
        fVar2 = 0.0;
        pFVar10 = (param_1->BuiltData->AllocatorInstance).Data;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x24) = 0x10100;
        *(undefined4 *)(pFVar10 + (int)uVar17) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 4) = 0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0xc) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = 0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x18) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = 0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x28) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x2c) = 0;
        cVar7 = (char)(this->CylinderHeight)._padding_;
        if (cVar7 == '\x01') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->CylinderHeight)._padding_ + 4));
        }
        else if (cVar7 == '\x02') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->CylinderHeight)._padding_);
        }
        else {
          fVar3 = (this->CylinderHeight).Min;
          fVar5 = fVar3;
          if (cVar7 != '\x03') {
            fVar5 = (this->CylinderHeight).Max;
          }
          iVar15 = -1;
        }
        *(int *)(pFVar10 + (int)uVar17) = iVar15;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 4) = fVar3;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 8) = fVar5;
        cVar7 = (char)(this->CylinderRadius)._padding_;
        if (cVar7 == '\x01') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->CylinderRadius)._padding_ + 4));
        }
        else if (cVar7 == '\x02') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->CylinderRadius)._padding_);
        }
        else {
          fVar3 = (this->CylinderRadius).Min;
          fVar5 = fVar3;
          if (cVar7 != '\x03') {
            fVar5 = (this->CylinderRadius).Max;
          }
          iVar15 = -1;
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0xc) = iVar15;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = fVar3;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x14) = fVar5;
        cVar7 = (char)(this->CylinderHeightMidpoint)._padding_;
        if (cVar7 == '\x01') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->CylinderHeightMidpoint)._padding_ + 4));
        }
        else if (cVar7 == '\x02') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->CylinderHeightMidpoint)._padding_)
          ;
        }
        else {
          fVar3 = (this->CylinderHeightMidpoint).Min;
          fVar5 = fVar3;
          if (cVar7 != '\x03') {
            fVar5 = (this->CylinderHeightMidpoint).Max;
          }
          iVar15 = -1;
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x18) = iVar15;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = fVar3;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = fVar5;
        pFVar10[(longlong)(int)uVar17 + 0x24] = (FScriptContainerElement)this->bCylinderSurfaceOnly;
        pFVar10[(longlong)(int)uVar17 + 0x25] =
             (FScriptContainerElement)this->bCylinderSurfaceOnlyIncludeEndCaps;
        pFVar10[(longlong)(int)uVar17 + 0x26] =
             (FScriptContainerElement)this->CylinderSurfaceExpansion;
        cVar7 = (char)(this->CylinderSurfaceThickness)._padding_;
        if (cVar7 == '\x01') {
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->CylinderSurfaceThickness)._padding_ + 4));
          fVar3 = 0.0;
        }
        else if (cVar7 == '\x02') {
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)
                                      &(this->CylinderSurfaceThickness)._padding_);
          fVar3 = 0.0;
        }
        else {
          fVar2 = (this->CylinderSurfaceThickness).Min;
          fVar3 = fVar2;
          if (cVar7 != '\x03') {
            fVar3 = (this->CylinderSurfaceThickness).Max;
          }
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x28) = iVar13;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x2c) = fVar2;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x30) = fVar3;
      }
      else if (EVar8 == Plane) {
        pTVar9 = param_1->BuiltData;
        uVar17 = pTVar9->ArrayNum + 3U & 0xfffffffc;
        iVar16 = (uVar17 - pTVar9->ArrayNum) + 0x28;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar16,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        memset((pTVar9->AllocatorInstance).Data + iVar15,0,(longlong)iVar16);
        pFVar10 = (param_1->BuiltData->AllocatorInstance).Data;
        *(undefined2 *)(pFVar10 + (longlong)(int)uVar17 + 1) = 0;
        pFVar10[(longlong)(int)uVar17 + 3] = (FScriptContainerElement)0x0;
        *(undefined2 *)(pFVar10 + (longlong)(int)uVar17 + 0x19) = 0;
        pFVar10[(longlong)(int)uVar17 + 0x1b] = (FScriptContainerElement)0x0;
        pFVar10[(int)uVar17] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 4) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 8) = 0;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = 0;
        pFVar10[(longlong)(int)uVar17 + 0x18] = (FScriptContainerElement)0x1;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = 0;
        pFVar10[(int)uVar17] = (FScriptContainerElement)this->bPlaneEdgesOnly;
        TVar20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        cVar7 = (char)(this->PlaneSize)._padding_;
        TVar21 = TVar20;
        if (cVar7 == '\x01') {
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->PlaneSize)._padding_ + 4));
        }
        else if (cVar7 == '\x02') {
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->PlaneSize)._padding_);
        }
        else {
          TVar20 = (this->PlaneSize).Min.field0_0x0;
          TVar21 = TVar20;
          if (cVar7 != '\x03') {
            TVar21 = (this->PlaneSize).Max.field0_0x0;
          }
          iVar15 = -1;
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 4) = iVar15;
        ((TVector2<float>_u_0 *)(pFVar10 + (longlong)(int)uVar17 + 8))->_s_0 =
             (TVector2<float>_u_0_s_0)TVar20;
        ((TVector2<float>_u_0 *)(pFVar10 + (longlong)(int)uVar17 + 0x10))->_s_0 =
             (TVector2<float>_u_0_s_0)TVar21;
        pFVar10[(longlong)(int)uVar17 + 0x18] = (FScriptContainerElement)this->PlaneEdgeExpansion;
        cVar7 = (char)(this->PlaneEdgeThickness)._padding_;
        if (cVar7 == '\x01') {
          fVar2 = 0.0;
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->PlaneEdgeThickness)._padding_ + 4));
          fVar3 = 0.0;
        }
        else if (cVar7 == '\x02') {
          fVar2 = 0.0;
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->PlaneEdgeThickness)._padding_);
          fVar3 = 0.0;
        }
        else {
          fVar2 = (this->PlaneEdgeThickness).Min;
          fVar3 = fVar2;
          if (cVar7 != '\x03') {
            fVar3 = (this->PlaneEdgeThickness).Max;
          }
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = iVar13;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = fVar2;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x24) = fVar3;
      }
      else if (EVar8 == Ring) {
        pTVar9 = param_1->BuiltData;
        uVar17 = pTVar9->ArrayNum + 3U & 0xfffffffc;
        iVar16 = (uVar17 - pTVar9->ArrayNum) + 0x24;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar16,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        memset((pTVar9->AllocatorInstance).Data + iVar15,0,(longlong)iVar16);
        fVar2 = 0.0;
        pFVar10 = (param_1->BuiltData->AllocatorInstance).Data;
        *(undefined4 *)(pFVar10 + (int)uVar17) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 4) = 0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0xc) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = 0;
        *(undefined4 *)(pFVar10 + (longlong)(int)uVar17 + 0x18) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = 0;
        cVar7 = (char)(this->RingRadius)._padding_;
        if (cVar7 == '\x01') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->RingRadius)._padding_ + 4));
        }
        else if (cVar7 == '\x02') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->RingRadius)._padding_);
        }
        else {
          fVar3 = (this->RingRadius).Min;
          fVar5 = fVar3;
          if (cVar7 != '\x03') {
            fVar5 = (this->RingRadius).Max;
          }
          iVar15 = -1;
        }
        *(int *)(pFVar10 + (int)uVar17) = iVar15;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 4) = fVar3;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 8) = fVar5;
        cVar7 = (char)(this->DiscCoverage)._padding_;
        if (cVar7 == '\x01') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->DiscCoverage)._padding_ + 4));
        }
        else if (cVar7 == '\x02') {
          fVar5 = 0.0;
          fVar3 = 0.0;
          iVar15 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->DiscCoverage)._padding_);
        }
        else {
          fVar3 = (this->DiscCoverage).Min;
          fVar5 = fVar3;
          if (cVar7 != '\x03') {
            fVar5 = (this->DiscCoverage).Max;
          }
          iVar15 = -1;
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0xc) = iVar15;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x10) = fVar3;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x14) = fVar5;
        cVar7 = (char)(this->RingUDistribution)._padding_;
        if (cVar7 == '\x01') {
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->RingUDistribution)._padding_ + 4));
          fVar3 = 0.0;
        }
        else if (cVar7 == '\x02') {
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->RingUDistribution)._padding_);
          fVar3 = 0.0;
        }
        else {
          fVar2 = (this->RingUDistribution).Min;
          fVar3 = fVar2;
          if (cVar7 != '\x03') {
            fVar3 = (this->RingUDistribution).Max;
          }
        }
        *(int *)(pFVar10 + (longlong)(int)uVar17 + 0x18) = iVar13;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x1c) = fVar2;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 0x20) = fVar3;
      }
      else {
        if (EVar8 != Sphere) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_ShapeLocation.cpp"
                              ,0x118,L"");
          if (!bVar12) {
            return;
          }
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar9 = param_1->BuiltData;
        uVar17 = pTVar9->ArrayNum + 3U & 0xfffffffc;
        iVar16 = (uVar17 - pTVar9->ArrayNum) + 0xc;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar16,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        memset((pTVar9->AllocatorInstance).Data + iVar15,0,(longlong)iVar16);
        pFVar10 = (param_1->BuiltData->AllocatorInstance).Data;
        *(undefined4 *)(pFVar10 + (int)uVar17) = 0xffffffff;
        *(undefined8 *)(pFVar10 + (longlong)(int)uVar17 + 4) = 0;
        cVar7 = (char)(this->SphereRadius)._padding_;
        if (cVar7 == '\x01') {
          fVar2 = 0.0;
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                             (param_1,(FNiagaraVariableBase *)
                                      ((longlong)&(this->SphereRadius)._padding_ + 4));
          fVar3 = 0.0;
        }
        else if (cVar7 == '\x02') {
          fVar2 = 0.0;
          iVar13 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                             (param_1,(FInstancedStruct *)&(this->SphereRadius)._padding_);
          fVar3 = 0.0;
        }
        else {
          fVar2 = (this->SphereRadius).Min;
          fVar3 = fVar2;
          if (cVar7 != '\x03') {
            fVar3 = (this->SphereRadius).Max;
          }
        }
        *(int *)(pFVar10 + (int)uVar17) = iVar13;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 4) = fVar2;
        *(float *)(pFVar10 + (longlong)(int)uVar17 + 8) = fVar3;
      }
      local_80 = 0;
      local_98 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_90 = NSMShapeLocationPrivate::ParticleSimulate;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                    ::Call;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_a8);
    }
  }
  return;
}

// BuildShaderParameters @ 14943ac10

void __thiscall
UNiagaraStatelessModule_ShapeLocation::BuildShaderParameters
          (UNiagaraStatelessModule_ShapeLocation *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FShapeLocationModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FShapeLocationModule_ShaderParameters>::
           GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c370

UClass * __cdecl UNiagaraStatelessModule_ShapeLocation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ShapeLocation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ShapeLocation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ShapeLocation>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton;
}

// SetShaderParameters @ 1494669c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraStatelessModule_ShapeLocation::SetShaderParameters
          (UNiagaraStatelessModule_ShapeLocation *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  float *pfVar1;
  TTransform<float> *pTVar2;
  undefined8 uVar3;
  char cVar4;
  uchar uVar5;
  uchar uVar6;
  int iVar7;
  uchar *puVar8;
  FNiagaraStatelessSpaceTransforms *pFVar9;
  uchar *puVar10;
  code *pcVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  bool bVar15;
  FShaderParametersMetadata *pFVar16;
  TQuat<float> *pTVar17;
  uint uVar18;
  uint uVar19;
  TIntVector4<unsigned_int>_u_0 *pTVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  TIntVector4<unsigned_int>_u_0 TVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 local_res10;
  float local_168;
  float fStack_164;
  float local_158;
  float fStack_154;
  undefined4 uStack_124;
  undefined4 uStack_120;
  TQuat<float> local_d8 [11];
  
  uVar19 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar16 = TShaderParameterStructTypeInfo<NiagaraStateless::FShapeLocationModule_ShaderParameters>
            ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar19,pFVar16);
  pFVar16 = TShaderParameterStructTypeInfo<NiagaraStateless::FShapeLocationModule_ShaderParameters>
            ::GetStructMetadata();
  uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  pTVar20 = (TIntVector4<unsigned_int>_u_0 *)(param_1->ShaderParametersBase + uVar19);
  param_1->ParameterOffset = pFVar16->Size + uVar19;
  param_1->BuiltDataOffset = uVar18 + 0x48;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0x48)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltDataOffset <= BuiltData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                          ,0x22,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puVar8 = (param_1->BuiltData).DataPtr;
  pTVar17 = UE::Math::TRotator<float>::Quaternion
                      ((TRotator<float> *)(puVar8 + (longlong)(int)uVar18 + 0xc),local_d8);
  if (*(int *)(puVar8 + (longlong)(int)uVar18 + 8) == -1) {
    fVar36 = pTVar17->X;
    fVar38 = pTVar17->Y;
    fVar39 = pTVar17->Z;
    fVar41 = pTVar17->W;
  }
  else {
    iVar7 = *(int *)(puVar8 + (longlong)(int)uVar18 + 8) * 4;
    if (((iVar7 < 0) ||
        ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < (longlong)iVar7 + 0x10U))
       && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                               ,0x2d,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pfVar1 = (float *)((param_1->RendererParameterData).DataPtr + iVar7);
    fVar36 = *pfVar1;
    fVar38 = pfVar1[1];
    fVar39 = pfVar1[2];
    fVar41 = pfVar1[3];
  }
  iVar7 = *(int *)(puVar8 + (longlong)(int)uVar18 + 4);
  pFVar9 = param_1->SpaceTransforms;
  if (((iVar7 < 0) || (2 < iVar7)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                          ,0x37,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  cVar4 = pFVar9->TransformRemap[iVar7][0];
  if (cVar4 != -1) {
    pTVar2 = pFVar9->Transforms + cVar4;
    fVar23 = (pTVar2->Rotation).m128_f32[0];
    fVar30 = (pTVar2->Rotation).m128_f32[1];
    fVar22 = (pTVar2->Rotation).m128_f32[2];
    fVar35 = (pTVar2->Rotation).m128_f32[3];
    fVar33 = fVar38 * fVar23;
    fVar34 = fVar36 * fVar23;
    fVar31 = fVar36 * fVar30;
    fVar32 = fVar38 * fVar30;
    fVar37 = fVar36 * fVar22;
    fVar40 = fVar39 * fVar22;
    fVar36 = fVar41 * fVar23 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
             fVar35 * fVar36 +
             fVar39 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
             fVar38 * fVar22 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fVar38 = fVar39 * fVar23 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
             fVar35 * fVar38 +
             fVar41 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
             fVar37 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fVar39 = fVar33 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar35 * fVar39 +
             fVar31 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
             fVar41 * fVar22 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fVar41 = fVar34 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar35 * fVar41 +
             fVar32 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
             fVar40 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  }
  if (*(int *)(puVar8 + (longlong)(int)uVar18 + 0x24) == -1) {
    uVar3 = *(undefined8 *)(puVar8 + (longlong)(int)uVar18 + 0x28);
    fVar23 = *(float *)(puVar8 + (longlong)(int)uVar18 + 0x30);
  }
  else {
    iVar7 = *(int *)(puVar8 + (longlong)(int)uVar18 + 0x24) * 4;
    lVar21 = (longlong)iVar7;
    if (((iVar7 < 0) ||
        ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < lVar21 + 0xcU)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                            ,0x2d,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar10 = (param_1->RendererParameterData).DataPtr;
    uVar3 = *(undefined8 *)(puVar10 + lVar21);
    fVar23 = *(float *)(puVar10 + lVar21 + 8);
  }
  pTVar20->_s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  *(undefined8 *)(pTVar20 + 1) = 0;
  *(undefined8 *)((longlong)pTVar20 + 0x18) = 0;
  *(undefined8 *)(pTVar20 + 2) = 0;
  *(undefined8 *)((longlong)pTVar20 + 0x28) = 0;
  *(undefined8 *)(pTVar20 + 3) = 0;
  *(undefined8 *)((longlong)pTVar20 + 0x38) = 0;
  uVar5 = puVar8[(int)uVar18];
  local_168 = (float)uVar3;
  fStack_164 = (float)((ulonglong)uVar3 >> 0x20);
  if (uVar5 == '\0') {
    uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
    param_1->BuiltDataOffset = uVar18 + 0x30;
    if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0x30)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("BuiltDataOffset <= BuiltData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                            ,0x22,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar8 = (param_1->BuiltData).DataPtr;
    if (*(int *)(puVar8 + (longlong)(int)uVar18 + 4) == -1) {
      uVar3 = *(undefined8 *)(puVar8 + (longlong)(int)uVar18 + 8);
      fVar30 = *(float *)(puVar8 + (longlong)(int)uVar18 + 0x10);
    }
    else {
      iVar7 = *(int *)(puVar8 + (longlong)(int)uVar18 + 4) * 4;
      lVar21 = (longlong)iVar7;
      if (((iVar7 < 0) ||
          ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < lVar21 + 0xcU)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                              ,0x2d,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar10 = (param_1->RendererParameterData).DataPtr;
      uVar3 = *(undefined8 *)(puVar10 + lVar21);
      fVar30 = *(float *)(puVar10 + lVar21 + 8);
    }
    local_158 = (float)uVar3;
    fStack_154 = (float)((ulonglong)uVar3 >> 0x20);
    fVar22 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                       (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0x24),
                        (float *)(puVar8 + (longlong)(int)uVar18 + 0x28));
    uVar5 = puVar8[(longlong)(int)uVar18 + 0x20];
    if (uVar5 == '\0') {
      fVar35 = (float)((uint)(fVar22 * __real_3f000000) ^ __xmm_80000000800000008000000080000000);
    }
    else {
      fVar35 = 0.0;
      if ((uVar5 != '\x01') && (fVar35 = fVar22 * __real_3f000000, uVar5 != '\x02')) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_ShapeLocation.cpp"
                            ,0x47,L"");
        if (bVar15) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fVar22 = 0.0;
        fVar35 = 0.0;
      }
    }
    (pTVar20->_s_0).X = 0;
    uVar5 = puVar8[(int)uVar18];
    (pTVar20->_s_0).Z = 6;
    (pTVar20->_s_0).Y = (uint)(uVar5 != '\0');
    *(float *)(pTVar20 + 1) = fVar35 + local_158 * local_168;
    *(float *)((longlong)pTVar20 + 0x14) = fVar35 + fStack_154 * fStack_164;
    *(float *)((longlong)pTVar20 + 0x18) = fVar35 + fVar30 * fVar23;
    *(undefined4 *)((longlong)pTVar20 + 0x1c) = 0;
    *(float *)(pTVar20 + 2) = fVar22;
    *(float *)((longlong)pTVar20 + 0x24) = fVar22;
    *(float *)((longlong)pTVar20 + 0x28) = fVar22;
    *(undefined4 *)((longlong)pTVar20 + 0x2c) = 0;
    *(float *)(pTVar20 + 3) = fVar36;
    *(float *)((longlong)pTVar20 + 0x34) = fVar38;
    *(float *)((longlong)pTVar20 + 0x38) = fVar39;
    *(float *)((longlong)pTVar20 + 0x3c) = fVar41;
    return;
  }
  if (uVar5 == '\x01') {
    uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
    param_1->BuiltDataOffset = uVar18 + 0x34;
    if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0x34)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("BuiltDataOffset <= BuiltData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                            ,0x22,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar8 = (param_1->BuiltData).DataPtr;
    fVar30 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                       (param_1,*(int *)(puVar8 + (int)uVar18),
                        (float *)(puVar8 + (longlong)(int)uVar18 + 4));
    fVar22 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                       (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0xc),
                        (float *)(puVar8 + (longlong)(int)uVar18 + 0x10));
    fVar35 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                       (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0x18),
                        (float *)(puVar8 + (longlong)(int)uVar18 + 0x1c));
    fVar31 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                       (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0x28),
                        (float *)(puVar8 + (longlong)(int)uVar18 + 0x2c));
    uVar19 = __xmm_80000000800000008000000080000000;
    uVar5 = puVar8[(longlong)(int)uVar18 + 0x26];
    if (uVar5 == '\0') {
      fVar32 = (float)((uint)fVar31 ^ __xmm_80000000800000008000000080000000);
    }
    else if (uVar5 == '\x01') {
      fVar32 = fVar31 * __real_bf000000;
    }
    else if (uVar5 == '\x02') {
      fVar32 = 0.0;
    }
    else {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_ShapeLocation.cpp"
                          ,0x54,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar31 = 0.0;
      fVar32 = 0.0;
    }
    fVar33 = __real_3f800000;
    fVar37 = fVar39 + fVar39;
    (pTVar20->_s_0).X = 1;
    uVar5 = puVar8[(longlong)(int)uVar18 + 0x25];
    uVar6 = puVar8[(longlong)(int)uVar18 + 0x24];
    fVar34 = (float)((uint)(fVar38 + fVar38) ^ uVar19);
    (pTVar20->_s_0).W = (uint)fVar32;
    (pTVar20->_s_0).Z = (uint)fVar31;
    (pTVar20->_s_0).Y = -(uint)(uVar5 != '\0') & 2 | (uint)(uVar6 != '\0');
    fVar40 = (float)((uint)(fVar39 + fVar39) ^ uVar19);
    fVar32 = fVar36 + fVar36;
    *(float *)(pTVar20 + 1) = ((fVar38 * fVar34 - fVar39 * fVar37) + fVar33) * local_168;
    *(float *)((longlong)pTVar20 + 0x14) = (fVar41 * fVar37 - fVar36 * fVar34) * local_168;
    *(float *)((longlong)pTVar20 + 0x18) = (fVar36 * fVar37 + fVar41 * fVar34) * local_168;
    *(float *)((longlong)pTVar20 + 0x1c) = fVar30;
    fVar34 = fVar38 + fVar38;
    fVar31 = (float)((uint)(fVar36 + fVar36) ^ uVar19);
    *(float *)(pTVar20 + 2) = (fVar38 * fVar32 + fVar41 * fVar40) * fStack_164;
    *(float *)((longlong)pTVar20 + 0x24) =
         ((fVar39 * fVar40 - fVar36 * fVar32) + fVar33) * fStack_164;
    *(float *)((longlong)pTVar20 + 0x28) = (fVar41 * fVar32 - fVar38 * fVar40) * fStack_164;
    *(uint *)((longlong)pTVar20 + 0x2c) = (uint)(fVar35 * fVar30) ^ uVar19;
    *(float *)(pTVar20 + 3) = (fVar41 * fVar34 - fVar39 * fVar31) * fVar23;
    *(float *)((longlong)pTVar20 + 0x34) = (fVar39 * fVar34 + fVar41 * fVar31) * fVar23;
    *(float *)((longlong)pTVar20 + 0x38) = ((fVar36 * fVar31 - fVar38 * fVar34) + fVar33) * fVar23;
    *(float *)((longlong)pTVar20 + 0x3c) = fVar22;
    return;
  }
  if (uVar5 != '\x02') {
    if (uVar5 == '\x03') {
      uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
      param_1->BuiltDataOffset = uVar18 + 0x24;
      if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0x24)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("BuiltDataOffset <= BuiltData.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                              ,0x22,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar8 = (param_1->BuiltData).DataPtr;
      fVar22 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                         (param_1,*(int *)(puVar8 + (int)uVar18),
                          (float *)(puVar8 + (longlong)(int)uVar18 + 4));
      fVar35 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                         (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0xc),
                          (float *)(puVar8 + (longlong)(int)uVar18 + 0x10));
      fVar31 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                         (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0x18),
                          (float *)(puVar8 + (longlong)(int)uVar18 + 0x1c));
      fVar30 = __real_3f800000;
      fVar32 = 0.0;
      fVar23 = __real_3f800000 - fVar35;
      if (__real_3f800000 <= __real_3f800000 - fVar35) {
        fVar23 = __real_3f800000;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (0.0 < fVar23) {
        fVar32 = SQRT(fVar23);
      }
      fVar23 = __real_3f800000 - fVar32;
      (pTVar20->_s_0).X = 2;
      *(undefined4 *)((longlong)pTVar20 + 0x1c) = 0;
      *(float *)((longlong)pTVar20 + 0x14) = fVar32 * fVar22;
      fVar35 = fVar39 + fVar39;
      *(float *)(pTVar20 + 1) = fVar23 * fVar22;
      fVar22 = (float)((uint)(fVar38 + fVar38) ^ __xmm_80000000800000008000000080000000);
      *(float *)((longlong)pTVar20 + 0x18) = (fVar30 - fVar31) * __real_c0c90fdb;
      fVar23 = fVar36 + fVar36;
      *(float *)(pTVar20 + 2) = ((fVar38 * fVar22 - fVar39 * fVar35) + fVar30) * local_168;
      *(float *)((longlong)pTVar20 + 0x24) = (fVar41 * fVar35 - fVar36 * fVar22) * local_168;
      *(float *)((longlong)pTVar20 + 0x28) = (fVar36 * fVar35 + fVar41 * fVar22) * local_168;
      *(undefined4 *)((longlong)pTVar20 + 0x2c) = 0x3f800000;
      auVar26._4_4_ = fVar41;
      auVar26._0_4_ = fVar41;
      auVar26._8_4_ = fVar41;
      auVar26._12_4_ = fVar41;
      fVar22 = (float)((uint)(fVar39 + fVar39) ^ __xmm_80000000800000008000000080000000);
      auVar12._4_8_ = auVar26._8_8_;
      auVar12._0_4_ = uStack_124;
      auVar27._0_8_ = auVar12._0_8_ << 0x20;
      auVar27._8_4_ = uStack_120;
      auVar27._12_4_ = 0x3f800000;
      fVar35 = (fVar38 * fVar23 + fVar41 * fVar22) * fStack_164;
      auVar13._4_8_ = auVar27._8_8_;
      auVar13._0_4_ = fVar35;
      auVar28._0_8_ = auVar13._0_8_ << 0x20;
      auVar28._8_4_ = uStack_120;
      auVar28._12_4_ = 0x3f800000;
      auVar14._4_8_ = auVar28._8_8_;
      auVar14._0_4_ = fVar35;
      auVar29._0_8_ = auVar14._0_8_ << 0x20;
      auVar29._8_4_ = ((fVar39 * fVar22 - fVar36 * fVar23) + fVar30) * fStack_164;
      auVar29._12_4_ = 0x3f800000;
      auVar24._4_12_ = auVar29._4_12_;
      auVar24._0_4_ = (fVar41 * fVar23 - fVar38 * fVar22) * fStack_164;
    }
    else {
      if (uVar5 != '\x04') {
        return;
      }
      uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
      param_1->BuiltDataOffset = uVar18 + 0xc;
      if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0xc)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("BuiltDataOffset <= BuiltData.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                              ,0x22,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar8 = (param_1->BuiltData).DataPtr;
      fVar22 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                         (param_1,*(int *)(puVar8 + (int)uVar18),
                          (float *)(puVar8 + (longlong)(int)uVar18 + 4));
      uVar19 = __xmm_80000000800000008000000080000000;
      fVar30 = __real_3f800000;
      fVar35 = 0.0;
      if (*(int *)(puVar8 + (int)uVar18) == -1) {
        fVar35 = *(float *)(puVar8 + (longlong)(int)uVar18 + 8) -
                 *(float *)(puVar8 + (longlong)(int)uVar18 + 4);
      }
      fVar32 = fVar39 + fVar39;
      (pTVar20->_s_0).X = 3;
      fVar31 = (float)((uint)(fVar38 + fVar38) ^ uVar19);
      *(float *)(pTVar20 + 1) = ((fVar38 * fVar31 - fVar39 * fVar32) + fVar30) * local_168;
      fVar33 = fVar36 + fVar36;
      *(float *)((longlong)pTVar20 + 0x14) = (fVar41 * fVar32 - fVar36 * fVar31) * local_168;
      *(float *)((longlong)pTVar20 + 0x18) = (fVar41 * fVar31 + fVar36 * fVar32) * local_168;
      *(float *)((longlong)pTVar20 + 0x1c) = fVar35;
      fVar32 = (float)((uint)(fVar39 + fVar39) ^ uVar19);
      *(float *)(pTVar20 + 2) = (fVar41 * fVar32 + fVar38 * fVar33) * fStack_164;
      *(float *)((longlong)pTVar20 + 0x24) =
           ((fVar39 * fVar32 - fVar36 * fVar33) + fVar30) * fStack_164;
      fVar31 = fVar38 + fVar38;
      fVar35 = (float)((uint)(fVar36 + fVar36) ^ uVar19);
      *(float *)((longlong)pTVar20 + 0x28) = (fVar41 * fVar33 - fVar38 * fVar32) * fStack_164;
      *(float *)((longlong)pTVar20 + 0x2c) = fVar22;
      auVar24._8_4_ = (fVar41 * fVar35 + fVar39 * fVar31) * fVar23;
      auVar24._4_4_ = (fVar41 * fVar31 - fVar39 * fVar35) * fVar23;
      auVar24._0_4_ = ((fVar36 * fVar35 - fVar38 * fVar31) + fVar30) * fVar23;
      auVar24._12_4_ = 0;
    }
    TVar25._12_4_ = auVar24._12_4_;
    TVar25._0_8_ = auVar24._4_8_;
    TVar25._s_0.Z = auVar24._0_4_;
    pTVar20[3] = TVar25;
    return;
  }
  uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar18 + 0x28;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0x28)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltDataOffset <= BuiltData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                          ,0x22,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puVar8 = (param_1->BuiltData).DataPtr;
  if (*(int *)(puVar8 + (longlong)(int)uVar18 + 4) == -1) {
    local_res10 = *(undefined8 *)(puVar8 + (longlong)(int)uVar18 + 8);
  }
  else {
    iVar7 = *(int *)(puVar8 + (longlong)(int)uVar18 + 4) * 4;
    if (((iVar7 < 0) ||
        ((ulonglong)(longlong)(param_1->RendererParameterData).ArrayNum < (longlong)iVar7 + 8U)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                            ,0x2d,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_res10 = *(undefined8 *)((param_1->RendererParameterData).DataPtr + iVar7);
  }
  fVar23 = FNiagaraStatelessSetShaderParameterContext::GetRendererParameterValue<float>
                     (param_1,*(int *)(puVar8 + (longlong)(int)uVar18 + 0x1c),
                      (float *)(puVar8 + (longlong)(int)uVar18 + 0x20));
  uVar5 = puVar8[(longlong)(int)uVar18 + 0x18];
  fVar30 = fVar23 * __real_3f000000;
  if (uVar5 == '\0') {
    fVar30 = (float)((uint)fVar30 ^ __xmm_80000000800000008000000080000000);
  }
  else {
    if (uVar5 != '\x01') {
      if (uVar5 == '\x02') goto LAB_149467249;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_ShapeLocation.cpp"
                          ,0x47,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar23 = 0.0;
    }
    fVar30 = 0.0;
  }
LAB_149467249:
  (pTVar20->_s_0).X = 0;
  uVar5 = puVar8[(int)uVar18];
  (pTVar20->_s_0).Z = 4;
  (pTVar20->_s_0).Y = (uint)(uVar5 != '\0');
  *(float *)(pTVar20 + 1) = (float)local_res10 * local_168 + fVar30;
  *(float *)((longlong)pTVar20 + 0x14) = local_res10._4_4_ * fStack_164 + fVar30;
  *(undefined8 *)((longlong)pTVar20 + 0x18) = 0;
  *(float *)(pTVar20 + 2) = fVar23;
  *(float *)((longlong)pTVar20 + 0x24) = fVar23;
  *(undefined8 *)((longlong)pTVar20 + 0x28) = 0;
  *(float *)(pTVar20 + 3) = fVar36;
  *(float *)((longlong)pTVar20 + 0x34) = fVar38;
  *(float *)((longlong)pTVar20 + 0x38) = fVar39;
  *(float *)((longlong)pTVar20 + 0x3c) = fVar41;
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation @ 149469e20

void __cdecl
UNiagaraStatelessModule_ShapeLocation::StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation
          (void)

{
  return;
}

