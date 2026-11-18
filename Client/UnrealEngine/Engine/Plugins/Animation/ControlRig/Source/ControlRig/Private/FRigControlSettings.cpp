// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// FRigControlSettings @ 14a220000

FRigControlSettings * __thiscall
FRigControlSettings::FRigControlSettings(FRigControlSettings *this,FRigControlSettings *param_1)

{
  TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRigControlElementCustomization *pFVar3;
  TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UEnum *pUVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined3 uVar13;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar14;
  
  pTVar1 = &this->LimitEnabled;
  this->AnimationType = param_1->AnimationType;
  this->ControlType = param_1->ControlType;
  this->DisplayName = param_1->DisplayName;
  this->PrimaryAxis = param_1->PrimaryAxis;
  this->bIsCurve = param_1->bIsCurve;
  piVar2 = &(this->LimitEnabled).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->LimitEnabled).ArrayNum;
  pFVar6 = (param_1->LimitEnabled).AllocatorInstance.Data;
  (this->LimitEnabled).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 2);
  }
  this->bDrawLimits = param_1->bDrawLimits;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float01;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float02;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float03;
  (this->MinimumValue).FloatStorage.Float00 = (param_1->MinimumValue).FloatStorage.Float00;
  (this->MinimumValue).FloatStorage.Float01 = fVar10;
  (this->MinimumValue).FloatStorage.Float02 = fVar11;
  (this->MinimumValue).FloatStorage.Float03 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float11;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float12;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float13;
  (this->MinimumValue).FloatStorage.Float10 = (param_1->MinimumValue).FloatStorage.Float10;
  (this->MinimumValue).FloatStorage.Float11 = fVar10;
  (this->MinimumValue).FloatStorage.Float12 = fVar11;
  (this->MinimumValue).FloatStorage.Float13 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float21;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float22;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float23;
  (this->MinimumValue).FloatStorage.Float20 = (param_1->MinimumValue).FloatStorage.Float20;
  (this->MinimumValue).FloatStorage.Float21 = fVar10;
  (this->MinimumValue).FloatStorage.Float22 = fVar11;
  (this->MinimumValue).FloatStorage.Float23 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float31;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float32;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float33;
  (this->MinimumValue).FloatStorage.Float30 = (param_1->MinimumValue).FloatStorage.Float30;
  (this->MinimumValue).FloatStorage.Float31 = fVar10;
  (this->MinimumValue).FloatStorage.Float32 = fVar11;
  (this->MinimumValue).FloatStorage.Float33 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float01_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float02_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float03_2;
  (this->MinimumValue).FloatStorage.Float00_2 = (param_1->MinimumValue).FloatStorage.Float00_2;
  (this->MinimumValue).FloatStorage.Float01_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float02_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float03_2 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float11_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float12_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float13_2;
  (this->MinimumValue).FloatStorage.Float10_2 = (param_1->MinimumValue).FloatStorage.Float10_2;
  (this->MinimumValue).FloatStorage.Float11_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float12_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float13_2 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float21_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float22_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float23_2;
  (this->MinimumValue).FloatStorage.Float20_2 = (param_1->MinimumValue).FloatStorage.Float20_2;
  (this->MinimumValue).FloatStorage.Float21_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float22_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float23_2 = fVar12;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float31_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float32_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float33_2;
  (this->MinimumValue).FloatStorage.Float30_2 = (param_1->MinimumValue).FloatStorage.Float30_2;
  (this->MinimumValue).FloatStorage.Float31_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float32_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float33_2 = fVar12;
  uVar13 = *(undefined3 *)&(param_1->MinimumValue).FloatStorage.field_0x81;
  (this->MinimumValue).FloatStorage.bValid = (param_1->MinimumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MinimumValue).FloatStorage.field_0x81 = uVar13;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float01;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float02;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float03;
  (this->MaximumValue).FloatStorage.Float00 = (param_1->MaximumValue).FloatStorage.Float00;
  (this->MaximumValue).FloatStorage.Float01 = fVar10;
  (this->MaximumValue).FloatStorage.Float02 = fVar11;
  (this->MaximumValue).FloatStorage.Float03 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float11;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float12;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float13;
  (this->MaximumValue).FloatStorage.Float10 = (param_1->MaximumValue).FloatStorage.Float10;
  (this->MaximumValue).FloatStorage.Float11 = fVar10;
  (this->MaximumValue).FloatStorage.Float12 = fVar11;
  (this->MaximumValue).FloatStorage.Float13 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float21;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float22;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float23;
  (this->MaximumValue).FloatStorage.Float20 = (param_1->MaximumValue).FloatStorage.Float20;
  (this->MaximumValue).FloatStorage.Float21 = fVar10;
  (this->MaximumValue).FloatStorage.Float22 = fVar11;
  (this->MaximumValue).FloatStorage.Float23 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float31;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float32;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float33;
  (this->MaximumValue).FloatStorage.Float30 = (param_1->MaximumValue).FloatStorage.Float30;
  (this->MaximumValue).FloatStorage.Float31 = fVar10;
  (this->MaximumValue).FloatStorage.Float32 = fVar11;
  (this->MaximumValue).FloatStorage.Float33 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float01_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float02_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float03_2;
  (this->MaximumValue).FloatStorage.Float00_2 = (param_1->MaximumValue).FloatStorage.Float00_2;
  (this->MaximumValue).FloatStorage.Float01_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float02_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float03_2 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float11_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float12_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float13_2;
  (this->MaximumValue).FloatStorage.Float10_2 = (param_1->MaximumValue).FloatStorage.Float10_2;
  (this->MaximumValue).FloatStorage.Float11_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float12_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float13_2 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float21_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float22_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float23_2;
  (this->MaximumValue).FloatStorage.Float20_2 = (param_1->MaximumValue).FloatStorage.Float20_2;
  (this->MaximumValue).FloatStorage.Float21_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float22_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float23_2 = fVar12;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float31_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float32_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float33_2;
  (this->MaximumValue).FloatStorage.Float30_2 = (param_1->MaximumValue).FloatStorage.Float30_2;
  (this->MaximumValue).FloatStorage.Float31_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float32_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float33_2 = fVar12;
  uVar13 = *(undefined3 *)&(param_1->MaximumValue).FloatStorage.field_0x81;
  (this->MaximumValue).FloatStorage.bValid = (param_1->MaximumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MaximumValue).FloatStorage.field_0x81 = uVar13;
  this->bShapeVisible = param_1->bShapeVisible;
  this->ShapeVisibility = param_1->ShapeVisibility;
  this->ShapeName = param_1->ShapeName;
  uVar8 = *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ShapeColor).field0_0x0 = *(undefined8 *)&(param_1->ShapeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShapeColor).field0_0x0 + 8) = uVar8;
  this->bIsTransientControl = param_1->bIsTransientControl;
  pUVar7 = (param_1->ControlEnum).field0_0x0.DebugPtr;
  (this->ControlEnum).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar3 = &this->Customization;
  (pFVar3->AvailableSpaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Customization).AvailableSpaces.ArrayMax;
  iVar5 = (param_1->Customization).AvailableSpaces.ArrayNum;
  pFVar6 = (param_1->Customization).AvailableSpaces.AllocatorInstance.Data;
  (this->Customization).AvailableSpaces.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar5,0,(ForAnyElementType *)pFVar3,iVar5,piVar2);
    memcpy((pFVar3->AvailableSpaces).AllocatorInstance.Data,pFVar6,(longlong)iVar5 * 0x14);
  }
  pTVar14 = &(this->Customization).RemovedSpaces;
  (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Customization).RemovedSpaces.ArrayMax;
  iVar5 = (param_1->Customization).RemovedSpaces.ArrayNum;
  pFVar6 = (param_1->Customization).RemovedSpaces.AllocatorInstance.Data;
  (this->Customization).RemovedSpaces.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar14->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar14->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar14 = &this->DrivenControls;
  (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DrivenControls).ArrayMax;
  iVar5 = (param_1->DrivenControls).ArrayNum;
  pFVar6 = (param_1->DrivenControls).AllocatorInstance.Data;
  (this->DrivenControls).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar14->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar14->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar14 = &this->PreviouslyDrivenControls;
  (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PreviouslyDrivenControls).ArrayMax;
  iVar5 = (param_1->PreviouslyDrivenControls).ArrayNum;
  pFVar6 = (param_1->PreviouslyDrivenControls).AllocatorInstance.Data;
  (this->PreviouslyDrivenControls).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar14->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar14->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar4 = &this->FilteredChannels;
  this->bGroupWithParentControl = param_1->bGroupWithParentControl;
  this->bRestrictSpaceSwitching = param_1->bRestrictSpaceSwitching;
  piVar2 = &(this->FilteredChannels).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->FilteredChannels).ArrayNum;
  pFVar6 = (param_1->FilteredChannels).AllocatorInstance.Data;
  (this->FilteredChannels).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  this->PreferredRotationOrder = param_1->PreferredRotationOrder;
  this->bUsePreferredRotationOrder = param_1->bUsePreferredRotationOrder;
  dVar9 = (param_1->ShapeTransform).Rotation.XY.m128d_f64[1];
  (this->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ShapeTransform).Rotation.XY.m128d_f64[0];
  (this->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1];
  (this->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0];
  (this->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ShapeTransform).Translation.XY.m128d_f64[1];
  (this->ShapeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ShapeTransform).Translation.XY.m128d_f64[0];
  (this->ShapeTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ShapeTransform).Translation.ZW.m128d_f64[1];
  (this->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ShapeTransform).Translation.ZW.m128d_f64[0];
  (this->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1];
  (this->ShapeTransform).Scale3D.XY.m128d_f64[0] = (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ShapeTransform).Scale3D.ZW.m128d_f64[0] = (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  return this;
}

// ~FRigControlSettings @ 14a225ef0

void __thiscall FRigControlSettings::~FRigControlSettings(FRigControlSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FilteredChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviouslyDrivenControls).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DrivenControls).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Customization).RemovedSpaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Customization).AvailableSpaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LimitEnabled).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a229890

FRigControlSettings * __thiscall
FRigControlSettings::operator=(FRigControlSettings *this,FRigControlSettings *param_1)

{
  TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UEnum *pUVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined3 uVar12;
  
  this->AnimationType = param_1->AnimationType;
  this->ControlType = param_1->ControlType;
  pTVar1 = &this->LimitEnabled;
  this->DisplayName = param_1->DisplayName;
  this->PrimaryAxis = param_1->PrimaryAxis;
  this->bIsCurve = param_1->bIsCurve;
  if (pTVar1 != &param_1->LimitEnabled) {
    iVar4 = (param_1->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayMax;
    pFVar5 = (param_1->LimitEnabled).AllocatorInstance.Data;
    (this->LimitEnabled).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 2);
      }
    }
  }
  this->bDrawLimits = param_1->bDrawLimits;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float01;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float02;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float03;
  (this->MinimumValue).FloatStorage.Float00 = (param_1->MinimumValue).FloatStorage.Float00;
  (this->MinimumValue).FloatStorage.Float01 = fVar9;
  (this->MinimumValue).FloatStorage.Float02 = fVar10;
  (this->MinimumValue).FloatStorage.Float03 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float11;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float12;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float13;
  (this->MinimumValue).FloatStorage.Float10 = (param_1->MinimumValue).FloatStorage.Float10;
  (this->MinimumValue).FloatStorage.Float11 = fVar9;
  (this->MinimumValue).FloatStorage.Float12 = fVar10;
  (this->MinimumValue).FloatStorage.Float13 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float21;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float22;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float23;
  (this->MinimumValue).FloatStorage.Float20 = (param_1->MinimumValue).FloatStorage.Float20;
  (this->MinimumValue).FloatStorage.Float21 = fVar9;
  (this->MinimumValue).FloatStorage.Float22 = fVar10;
  (this->MinimumValue).FloatStorage.Float23 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float31;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float32;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float33;
  (this->MinimumValue).FloatStorage.Float30 = (param_1->MinimumValue).FloatStorage.Float30;
  (this->MinimumValue).FloatStorage.Float31 = fVar9;
  (this->MinimumValue).FloatStorage.Float32 = fVar10;
  (this->MinimumValue).FloatStorage.Float33 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float01_2;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float02_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float03_2;
  (this->MinimumValue).FloatStorage.Float00_2 = (param_1->MinimumValue).FloatStorage.Float00_2;
  (this->MinimumValue).FloatStorage.Float01_2 = fVar9;
  (this->MinimumValue).FloatStorage.Float02_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float03_2 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float11_2;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float12_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float13_2;
  (this->MinimumValue).FloatStorage.Float10_2 = (param_1->MinimumValue).FloatStorage.Float10_2;
  (this->MinimumValue).FloatStorage.Float11_2 = fVar9;
  (this->MinimumValue).FloatStorage.Float12_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float13_2 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float21_2;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float22_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float23_2;
  (this->MinimumValue).FloatStorage.Float20_2 = (param_1->MinimumValue).FloatStorage.Float20_2;
  (this->MinimumValue).FloatStorage.Float21_2 = fVar9;
  (this->MinimumValue).FloatStorage.Float22_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float23_2 = fVar11;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float31_2;
  fVar10 = (param_1->MinimumValue).FloatStorage.Float32_2;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float33_2;
  (this->MinimumValue).FloatStorage.Float30_2 = (param_1->MinimumValue).FloatStorage.Float30_2;
  (this->MinimumValue).FloatStorage.Float31_2 = fVar9;
  (this->MinimumValue).FloatStorage.Float32_2 = fVar10;
  (this->MinimumValue).FloatStorage.Float33_2 = fVar11;
  uVar12 = *(undefined3 *)&(param_1->MinimumValue).FloatStorage.field_0x81;
  (this->MinimumValue).FloatStorage.bValid = (param_1->MinimumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MinimumValue).FloatStorage.field_0x81 = uVar12;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float01;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float02;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float03;
  (this->MaximumValue).FloatStorage.Float00 = (param_1->MaximumValue).FloatStorage.Float00;
  (this->MaximumValue).FloatStorage.Float01 = fVar9;
  (this->MaximumValue).FloatStorage.Float02 = fVar10;
  (this->MaximumValue).FloatStorage.Float03 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float11;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float12;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float13;
  (this->MaximumValue).FloatStorage.Float10 = (param_1->MaximumValue).FloatStorage.Float10;
  (this->MaximumValue).FloatStorage.Float11 = fVar9;
  (this->MaximumValue).FloatStorage.Float12 = fVar10;
  (this->MaximumValue).FloatStorage.Float13 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float21;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float22;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float23;
  (this->MaximumValue).FloatStorage.Float20 = (param_1->MaximumValue).FloatStorage.Float20;
  (this->MaximumValue).FloatStorage.Float21 = fVar9;
  (this->MaximumValue).FloatStorage.Float22 = fVar10;
  (this->MaximumValue).FloatStorage.Float23 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float31;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float32;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float33;
  (this->MaximumValue).FloatStorage.Float30 = (param_1->MaximumValue).FloatStorage.Float30;
  (this->MaximumValue).FloatStorage.Float31 = fVar9;
  (this->MaximumValue).FloatStorage.Float32 = fVar10;
  (this->MaximumValue).FloatStorage.Float33 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float01_2;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float02_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float03_2;
  (this->MaximumValue).FloatStorage.Float00_2 = (param_1->MaximumValue).FloatStorage.Float00_2;
  (this->MaximumValue).FloatStorage.Float01_2 = fVar9;
  (this->MaximumValue).FloatStorage.Float02_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float03_2 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float11_2;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float12_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float13_2;
  (this->MaximumValue).FloatStorage.Float10_2 = (param_1->MaximumValue).FloatStorage.Float10_2;
  (this->MaximumValue).FloatStorage.Float11_2 = fVar9;
  (this->MaximumValue).FloatStorage.Float12_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float13_2 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float21_2;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float22_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float23_2;
  (this->MaximumValue).FloatStorage.Float20_2 = (param_1->MaximumValue).FloatStorage.Float20_2;
  (this->MaximumValue).FloatStorage.Float21_2 = fVar9;
  (this->MaximumValue).FloatStorage.Float22_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float23_2 = fVar11;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float31_2;
  fVar10 = (param_1->MaximumValue).FloatStorage.Float32_2;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float33_2;
  (this->MaximumValue).FloatStorage.Float30_2 = (param_1->MaximumValue).FloatStorage.Float30_2;
  (this->MaximumValue).FloatStorage.Float31_2 = fVar9;
  (this->MaximumValue).FloatStorage.Float32_2 = fVar10;
  (this->MaximumValue).FloatStorage.Float33_2 = fVar11;
  uVar12 = *(undefined3 *)&(param_1->MaximumValue).FloatStorage.field_0x81;
  (this->MaximumValue).FloatStorage.bValid = (param_1->MaximumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MaximumValue).FloatStorage.field_0x81 = uVar12;
  this->bShapeVisible = param_1->bShapeVisible;
  this->ShapeVisibility = param_1->ShapeVisibility;
  this->ShapeName = param_1->ShapeName;
  uVar7 = *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ShapeColor).field0_0x0 = *(undefined8 *)&(param_1->ShapeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShapeColor).field0_0x0 + 8) = uVar7;
  this->bIsTransientControl = param_1->bIsTransientControl;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->ControlEnum).field0_0x0.DebugPtr, pUVar6 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ControlEnum).field0_0x0 = (param_1->ControlEnum).field0_0x0;
  FRigControlElementCustomization::operator=(&this->Customization,&param_1->Customization);
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&this->DrivenControls,&param_1->DrivenControls);
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&this->PreviouslyDrivenControls,&param_1->PreviouslyDrivenControls);
  this->bGroupWithParentControl = param_1->bGroupWithParentControl;
  pTVar3 = &this->FilteredChannels;
  this->bRestrictSpaceSwitching = param_1->bRestrictSpaceSwitching;
  if (pTVar3 != &param_1->FilteredChannels) {
    iVar4 = (param_1->FilteredChannels).ArrayNum;
    piVar2 = &(this->FilteredChannels).ArrayMax;
    pFVar5 = (param_1->FilteredChannels).AllocatorInstance.Data;
    (this->FilteredChannels).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
      }
    }
  }
  this->PreferredRotationOrder = param_1->PreferredRotationOrder;
  this->bUsePreferredRotationOrder = param_1->bUsePreferredRotationOrder;
  dVar8 = (param_1->ShapeTransform).Rotation.XY.m128d_f64[1];
  (this->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ShapeTransform).Rotation.XY.m128d_f64[0];
  (this->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1];
  (this->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0];
  (this->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ShapeTransform).Translation.XY.m128d_f64[1];
  (this->ShapeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ShapeTransform).Translation.XY.m128d_f64[0];
  (this->ShapeTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ShapeTransform).Translation.ZW.m128d_f64[1];
  (this->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ShapeTransform).Translation.ZW.m128d_f64[0];
  (this->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1];
  (this->ShapeTransform).Scale3D.XY.m128d_f64[0] = (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ShapeTransform).Scale3D.ZW.m128d_f64[0] = (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
  return this;
}

// StaticStruct @ 14a2c01d0

UScriptStruct * __cdecl FRigControlSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlSettings,(UObject *)pUVar1,
                         L"RigControlSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlSettings.OuterSingleton;
}

// FRigControlSettings @ 14a2d9dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigControlSettings * __thiscall FRigControlSettings::FRigControlSettings(FRigControlSettings *this)

{
  FLinearColor FVar1;
  FControlRigShapeDefinition *pFVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->AnimationType = AnimationControl;
  this->ControlType = EulerTransform;
  (this->DisplayName).ComparisonIndex = 0;
  (this->DisplayName).Number = 0;
  (this->LimitEnabled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LimitEnabled).ArrayNum = 0;
  (this->LimitEnabled).ArrayMax = 0;
  this->PrimaryAxis = X;
  this->bIsCurve = false;
  this->bDrawLimits = true;
  (this->MinimumValue).FloatStorage.Float00 = 0.0;
  (this->MinimumValue).FloatStorage.Float01 = 0.0;
  (this->MinimumValue).FloatStorage.Float02 = 0.0;
  (this->MinimumValue).FloatStorage.Float03 = 0.0;
  (this->MinimumValue).FloatStorage.Float10 = 0.0;
  (this->MinimumValue).FloatStorage.Float11 = 0.0;
  (this->MinimumValue).FloatStorage.Float12 = 0.0;
  (this->MinimumValue).FloatStorage.Float13 = 0.0;
  (this->MinimumValue).FloatStorage.Float20 = 0.0;
  (this->MinimumValue).FloatStorage.Float21 = 0.0;
  (this->MinimumValue).FloatStorage.Float22 = 0.0;
  (this->MinimumValue).FloatStorage.Float23 = 0.0;
  (this->MinimumValue).FloatStorage.Float30 = 0.0;
  (this->MinimumValue).FloatStorage.Float31 = 0.0;
  (this->MinimumValue).FloatStorage.Float32 = 0.0;
  (this->MinimumValue).FloatStorage.Float33 = 0.0;
  (this->MinimumValue).FloatStorage.Float00_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float01_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float02_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float03_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float10_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float11_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float12_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float13_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float20_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float21_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float22_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float23_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float30_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float31_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float32_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->MinimumValue).FloatStorage.bValid = 0;
  (this->MaximumValue).FloatStorage.Float00 = 0.0;
  (this->MaximumValue).FloatStorage.Float01 = 0.0;
  (this->MaximumValue).FloatStorage.Float02 = 0.0;
  (this->MaximumValue).FloatStorage.Float03 = 0.0;
  (this->MaximumValue).FloatStorage.Float10 = 0.0;
  (this->MaximumValue).FloatStorage.Float11 = 0.0;
  (this->MaximumValue).FloatStorage.Float12 = 0.0;
  (this->MaximumValue).FloatStorage.Float13 = 0.0;
  (this->MaximumValue).FloatStorage.Float20 = 0.0;
  (this->MaximumValue).FloatStorage.Float21 = 0.0;
  (this->MaximumValue).FloatStorage.Float22 = 0.0;
  (this->MaximumValue).FloatStorage.Float23 = 0.0;
  (this->MaximumValue).FloatStorage.Float30 = 0.0;
  (this->MaximumValue).FloatStorage.Float31 = 0.0;
  (this->MaximumValue).FloatStorage.Float32 = 0.0;
  (this->MaximumValue).FloatStorage.Float33 = 0.0;
  (this->MaximumValue).FloatStorage.Float00_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float01_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float02_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float03_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float10_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float11_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float12_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float13_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float20_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float21_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float22_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float23_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float30_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float31_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float32_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->MaximumValue).FloatStorage.bValid = 0;
  this->bShapeVisible = true;
  this->ShapeVisibility = UserDefined;
  (this->ShapeName).ComparisonIndex = 0;
  FVar1 = FLinearColor::Red;
  (this->ShapeName).Number = 0;
  this->bIsTransientControl = false;
  (this->ShapeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ControlEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->Customization).AvailableSpaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Customization).AvailableSpaces.ArrayNum = 0;
  (this->Customization).AvailableSpaces.ArrayMax = 0;
  (this->Customization).RemovedSpaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Customization).RemovedSpaces.ArrayNum = 0;
  (this->Customization).RemovedSpaces.ArrayMax = 0;
  (this->DrivenControls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrivenControls).ArrayNum = 0;
  (this->DrivenControls).ArrayMax = 0;
  (this->PreviouslyDrivenControls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviouslyDrivenControls).ArrayNum = 0;
  (this->PreviouslyDrivenControls).ArrayMax = 0;
  (this->FilteredChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredChannels).ArrayNum = 0;
  (this->FilteredChannels).ArrayMax = 0;
  this->bGroupWithParentControl = false;
  this->bRestrictSpaceSwitching = false;
  this->PreferredRotationOrder = YZX;
  this->bUsePreferredRotationOrder = false;
  *&(this->ShapeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ShapeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ShapeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ShapeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ShapeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ShapeTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FControlRigShapeDefinition::FControlRigShapeDefinition
                     ((FControlRigShapeDefinition *)local_b8);
  this->ShapeName = pFVar2->ShapeName;
  if ((void *)local_b8._32_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._32_8_);
  }
  return this;
}

// operator= @ 14a2e01f0

FRigControlSettings * __thiscall
FRigControlSettings::operator=(FRigControlSettings *this,FRigControlSettings *param_1)

{
  TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *pTVar2;
  FRigControlElementCustomization *pFVar3;
  FRigControlElementCustomization *pFVar4;
  TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<ERigControlTransformChannel,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  UEnum *pUVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined3 uVar14;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar16;
  
  pTVar1 = &param_1->LimitEnabled;
  this->AnimationType = param_1->AnimationType;
  pTVar2 = &this->LimitEnabled;
  this->ControlType = param_1->ControlType;
  this->DisplayName = param_1->DisplayName;
  this->PrimaryAxis = param_1->PrimaryAxis;
  this->bIsCurve = param_1->bIsCurve;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LimitEnabled).ArrayNum = (param_1->LimitEnabled).ArrayNum;
    (this->LimitEnabled).ArrayMax = (param_1->LimitEnabled).ArrayMax;
    (param_1->LimitEnabled).ArrayNum = 0;
    (param_1->LimitEnabled).ArrayMax = 0;
  }
  this->bDrawLimits = param_1->bDrawLimits;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float01;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float02;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float03;
  (this->MinimumValue).FloatStorage.Float00 = (param_1->MinimumValue).FloatStorage.Float00;
  (this->MinimumValue).FloatStorage.Float01 = fVar11;
  (this->MinimumValue).FloatStorage.Float02 = fVar12;
  (this->MinimumValue).FloatStorage.Float03 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float11;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float12;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float13;
  (this->MinimumValue).FloatStorage.Float10 = (param_1->MinimumValue).FloatStorage.Float10;
  (this->MinimumValue).FloatStorage.Float11 = fVar11;
  (this->MinimumValue).FloatStorage.Float12 = fVar12;
  (this->MinimumValue).FloatStorage.Float13 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float21;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float22;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float23;
  (this->MinimumValue).FloatStorage.Float20 = (param_1->MinimumValue).FloatStorage.Float20;
  (this->MinimumValue).FloatStorage.Float21 = fVar11;
  (this->MinimumValue).FloatStorage.Float22 = fVar12;
  (this->MinimumValue).FloatStorage.Float23 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float31;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float32;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float33;
  (this->MinimumValue).FloatStorage.Float30 = (param_1->MinimumValue).FloatStorage.Float30;
  (this->MinimumValue).FloatStorage.Float31 = fVar11;
  (this->MinimumValue).FloatStorage.Float32 = fVar12;
  (this->MinimumValue).FloatStorage.Float33 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float01_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float02_2;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float03_2;
  (this->MinimumValue).FloatStorage.Float00_2 = (param_1->MinimumValue).FloatStorage.Float00_2;
  (this->MinimumValue).FloatStorage.Float01_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float02_2 = fVar12;
  (this->MinimumValue).FloatStorage.Float03_2 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float11_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float12_2;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float13_2;
  (this->MinimumValue).FloatStorage.Float10_2 = (param_1->MinimumValue).FloatStorage.Float10_2;
  (this->MinimumValue).FloatStorage.Float11_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float12_2 = fVar12;
  (this->MinimumValue).FloatStorage.Float13_2 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float21_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float22_2;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float23_2;
  (this->MinimumValue).FloatStorage.Float20_2 = (param_1->MinimumValue).FloatStorage.Float20_2;
  (this->MinimumValue).FloatStorage.Float21_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float22_2 = fVar12;
  (this->MinimumValue).FloatStorage.Float23_2 = fVar13;
  fVar11 = (param_1->MinimumValue).FloatStorage.Float31_2;
  fVar12 = (param_1->MinimumValue).FloatStorage.Float32_2;
  fVar13 = (param_1->MinimumValue).FloatStorage.Float33_2;
  (this->MinimumValue).FloatStorage.Float30_2 = (param_1->MinimumValue).FloatStorage.Float30_2;
  (this->MinimumValue).FloatStorage.Float31_2 = fVar11;
  (this->MinimumValue).FloatStorage.Float32_2 = fVar12;
  (this->MinimumValue).FloatStorage.Float33_2 = fVar13;
  uVar14 = *(undefined3 *)&(param_1->MinimumValue).FloatStorage.field_0x81;
  (this->MinimumValue).FloatStorage.bValid = (param_1->MinimumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MinimumValue).FloatStorage.field_0x81 = uVar14;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float01;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float02;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float03;
  (this->MaximumValue).FloatStorage.Float00 = (param_1->MaximumValue).FloatStorage.Float00;
  (this->MaximumValue).FloatStorage.Float01 = fVar11;
  (this->MaximumValue).FloatStorage.Float02 = fVar12;
  (this->MaximumValue).FloatStorage.Float03 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float11;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float12;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float13;
  (this->MaximumValue).FloatStorage.Float10 = (param_1->MaximumValue).FloatStorage.Float10;
  (this->MaximumValue).FloatStorage.Float11 = fVar11;
  (this->MaximumValue).FloatStorage.Float12 = fVar12;
  (this->MaximumValue).FloatStorage.Float13 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float21;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float22;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float23;
  (this->MaximumValue).FloatStorage.Float20 = (param_1->MaximumValue).FloatStorage.Float20;
  (this->MaximumValue).FloatStorage.Float21 = fVar11;
  (this->MaximumValue).FloatStorage.Float22 = fVar12;
  (this->MaximumValue).FloatStorage.Float23 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float31;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float32;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float33;
  (this->MaximumValue).FloatStorage.Float30 = (param_1->MaximumValue).FloatStorage.Float30;
  (this->MaximumValue).FloatStorage.Float31 = fVar11;
  (this->MaximumValue).FloatStorage.Float32 = fVar12;
  (this->MaximumValue).FloatStorage.Float33 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float01_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float02_2;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float03_2;
  (this->MaximumValue).FloatStorage.Float00_2 = (param_1->MaximumValue).FloatStorage.Float00_2;
  (this->MaximumValue).FloatStorage.Float01_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float02_2 = fVar12;
  (this->MaximumValue).FloatStorage.Float03_2 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float11_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float12_2;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float13_2;
  (this->MaximumValue).FloatStorage.Float10_2 = (param_1->MaximumValue).FloatStorage.Float10_2;
  (this->MaximumValue).FloatStorage.Float11_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float12_2 = fVar12;
  (this->MaximumValue).FloatStorage.Float13_2 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float21_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float22_2;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float23_2;
  (this->MaximumValue).FloatStorage.Float20_2 = (param_1->MaximumValue).FloatStorage.Float20_2;
  (this->MaximumValue).FloatStorage.Float21_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float22_2 = fVar12;
  (this->MaximumValue).FloatStorage.Float23_2 = fVar13;
  fVar11 = (param_1->MaximumValue).FloatStorage.Float31_2;
  fVar12 = (param_1->MaximumValue).FloatStorage.Float32_2;
  fVar13 = (param_1->MaximumValue).FloatStorage.Float33_2;
  (this->MaximumValue).FloatStorage.Float30_2 = (param_1->MaximumValue).FloatStorage.Float30_2;
  (this->MaximumValue).FloatStorage.Float31_2 = fVar11;
  (this->MaximumValue).FloatStorage.Float32_2 = fVar12;
  (this->MaximumValue).FloatStorage.Float33_2 = fVar13;
  uVar14 = *(undefined3 *)&(param_1->MaximumValue).FloatStorage.field_0x81;
  (this->MaximumValue).FloatStorage.bValid = (param_1->MaximumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MaximumValue).FloatStorage.field_0x81 = uVar14;
  this->bShapeVisible = param_1->bShapeVisible;
  this->ShapeVisibility = param_1->ShapeVisibility;
  this->ShapeName = param_1->ShapeName;
  uVar9 = *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ShapeColor).field0_0x0 = *(undefined8 *)&(param_1->ShapeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShapeColor).field0_0x0 + 8) = uVar9;
  this->bIsTransientControl = param_1->bIsTransientControl;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->ControlEnum).field0_0x0.DebugPtr, pUVar8 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pFVar3 = &param_1->Customization;
  pFVar4 = &this->Customization;
  (this->ControlEnum).field0_0x0 = (param_1->ControlEnum).field0_0x0;
  if (pFVar4 != pFVar3) {
    pFVar7 = (pFVar4->AvailableSpaces).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar4->AvailableSpaces).AllocatorInstance.Data =
         (pFVar3->AvailableSpaces).AllocatorInstance.Data;
    (pFVar3->AvailableSpaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Customization).AvailableSpaces.ArrayNum =
         (param_1->Customization).AvailableSpaces.ArrayNum;
    (this->Customization).AvailableSpaces.ArrayMax =
         (param_1->Customization).AvailableSpaces.ArrayMax;
    (param_1->Customization).AvailableSpaces.ArrayNum = 0;
    (param_1->Customization).AvailableSpaces.ArrayMax = 0;
  }
  pTVar15 = &(param_1->Customization).RemovedSpaces;
  pTVar16 = &(this->Customization).RemovedSpaces;
  if (pTVar16 != pTVar15) {
    pFVar7 = (pTVar16->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Customization).RemovedSpaces.ArrayNum = (param_1->Customization).RemovedSpaces.ArrayNum;
    (this->Customization).RemovedSpaces.ArrayMax = (param_1->Customization).RemovedSpaces.ArrayMax;
    (param_1->Customization).RemovedSpaces.ArrayNum = 0;
    (param_1->Customization).RemovedSpaces.ArrayMax = 0;
  }
  pTVar15 = &param_1->DrivenControls;
  pTVar16 = &this->DrivenControls;
  if (pTVar16 != pTVar15) {
    pFVar7 = (pTVar16->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DrivenControls).ArrayNum = (param_1->DrivenControls).ArrayNum;
    (this->DrivenControls).ArrayMax = (param_1->DrivenControls).ArrayMax;
    (param_1->DrivenControls).ArrayNum = 0;
    (param_1->DrivenControls).ArrayMax = 0;
  }
  pTVar15 = &param_1->PreviouslyDrivenControls;
  pTVar16 = &this->PreviouslyDrivenControls;
  if (pTVar16 != pTVar15) {
    pFVar7 = (pTVar16->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PreviouslyDrivenControls).ArrayNum = (param_1->PreviouslyDrivenControls).ArrayNum;
    (this->PreviouslyDrivenControls).ArrayMax = (param_1->PreviouslyDrivenControls).ArrayMax;
    (param_1->PreviouslyDrivenControls).ArrayNum = 0;
    (param_1->PreviouslyDrivenControls).ArrayMax = 0;
  }
  pTVar5 = &param_1->FilteredChannels;
  this->bGroupWithParentControl = param_1->bGroupWithParentControl;
  pTVar6 = &this->FilteredChannels;
  this->bRestrictSpaceSwitching = param_1->bRestrictSpaceSwitching;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FilteredChannels).ArrayNum = (param_1->FilteredChannels).ArrayNum;
    (this->FilteredChannels).ArrayMax = (param_1->FilteredChannels).ArrayMax;
    (param_1->FilteredChannels).ArrayNum = 0;
    (param_1->FilteredChannels).ArrayMax = 0;
  }
  this->PreferredRotationOrder = param_1->PreferredRotationOrder;
  this->bUsePreferredRotationOrder = param_1->bUsePreferredRotationOrder;
  dVar10 = (param_1->ShapeTransform).Rotation.XY.m128d_f64[1];
  (this->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ShapeTransform).Rotation.XY.m128d_f64[0];
  (this->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1];
  (this->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0];
  (this->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ShapeTransform).Translation.XY.m128d_f64[1];
  (this->ShapeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ShapeTransform).Translation.XY.m128d_f64[0];
  (this->ShapeTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ShapeTransform).Translation.ZW.m128d_f64[1];
  (this->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ShapeTransform).Translation.ZW.m128d_f64[0];
  (this->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1];
  (this->ShapeTransform).Scale3D.XY.m128d_f64[0] = (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ShapeTransform).Scale3D.ZW.m128d_f64[0] = (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  return this;
}

// operator== @ 14a2e1cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigControlSettings::operator==(FRigControlSettings *this,FRigControlSettings *param_1)

{
  ERigControlType EVar1;
  ERigControlAxis EVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  bool bVar24;
  int iVar25;
  TTransform<double> *pTVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  FRigControlValue *pFVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  
  if ((((((((this->AnimationType == param_1->AnimationType) &&
           (EVar1 = this->ControlType, EVar1 == param_1->ControlType)) &&
          (this->DisplayName == param_1->DisplayName)) &&
         ((EVar2 = this->PrimaryAxis, EVar2 == param_1->PrimaryAxis &&
          (this->bIsCurve == param_1->bIsCurve)))) &&
        (iVar25 = (this->LimitEnabled).ArrayNum, iVar25 == (param_1->LimitEnabled).ArrayNum)) &&
       (((((bVar24 = CompareItems<FRigControlLimitEnabled,int>
                               ((FRigControlLimitEnabled *)
                                (this->LimitEnabled).AllocatorInstance.Data,
                                (FRigControlLimitEnabled *)
                                (param_1->LimitEnabled).AllocatorInstance.Data,iVar25), bVar24 &&
           (this->bDrawLimits == param_1->bDrawLimits)) &&
          ((this->bShapeVisible == param_1->bShapeVisible &&
           (((this->ShapeVisibility == param_1->ShapeVisibility &&
             (this->ShapeName == param_1->ShapeName)) &&
            (this->bIsTransientControl == param_1->bIsTransientControl)))))) &&
         (((this->ControlEnum).field0_0x0.DebugPtr == (param_1->ControlEnum).field0_0x0.DebugPtr &&
          ((float)((uint)((this->ShapeColor).field0_0x0._s_0.R -
                         (param_1->ShapeColor).field0_0x0._s_0.R) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3a83126f)))) &&
        ((float)((uint)((this->ShapeColor).field0_0x0._s_0.G -
                       (param_1->ShapeColor).field0_0x0._s_0.G) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3a83126f)))) &&
      ((((float)((uint)((this->ShapeColor).field0_0x0._s_0.B -
                       (param_1->ShapeColor).field0_0x0._s_0.B) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3a83126f &&
        ((float)((uint)((this->ShapeColor).field0_0x0._s_0.A -
                       (param_1->ShapeColor).field0_0x0._s_0.A) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3a83126f)) &&
       ((iVar25 = (this->Customization).AvailableSpaces.ArrayNum,
        iVar25 == (param_1->Customization).AvailableSpaces.ArrayNum &&
        (((bVar24 = CompareItems<FRigElementKeyWithLabel,int>
                              ((FRigElementKeyWithLabel *)
                               (this->Customization).AvailableSpaces.AllocatorInstance.Data,
                               (FRigElementKeyWithLabel *)
                               (param_1->Customization).AvailableSpaces.AllocatorInstance.Data,
                               iVar25), bVar24 &&
          (iVar25 = (this->DrivenControls).ArrayNum, iVar25 == (param_1->DrivenControls).ArrayNum))
         && (bVar24 = CompareItems<FRigElementKey,int>
                                ((FRigElementKey *)(this->DrivenControls).AllocatorInstance.Data,
                                 (FRigElementKey *)(param_1->DrivenControls).AllocatorInstance.Data,
                                 iVar25), bVar24)))))))) &&
     ((this->bGroupWithParentControl == param_1->bGroupWithParentControl &&
      (this->bRestrictSpaceSwitching == param_1->bRestrictSpaceSwitching)))) {
    iVar25 = (this->FilteredChannels).ArrayNum;
    if ((iVar25 == (param_1->FilteredChannels).ArrayNum) &&
       (((iVar25 == 0 ||
         (iVar25 = memcmp((this->FilteredChannels).AllocatorInstance.Data,
                          (param_1->FilteredChannels).AllocatorInstance.Data,(longlong)iVar25),
         iVar25 == 0)) &&
        ((this->PreferredRotationOrder == param_1->PreferredRotationOrder &&
         (this->bUsePreferredRotationOrder == param_1->bUsePreferredRotationOrder)))))) {
      FRigControlValue::GetAsTransform(&this->MinimumValue,&local_108,EVar1,EVar2);
      pFVar30 = &param_1->MinimumValue;
      pTVar26 = FRigControlValue::GetAsTransform
                          (pFVar30,&local_a8,this->ControlType,this->PrimaryAxis);
      dVar23 = __real_3f50624dd2f1a9fc;
      uVar22 = _UNK_15061cc8c;
      uVar21 = _UNK_15061cc88;
      uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      auVar32._0_8_ =
           (double)CONCAT44((uint)((ulonglong)
                                   (local_108.Translation.ZW.m128d_f64[0] -
                                   local_a8.Translation.ZW.m128d_f64[0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_108.Translation.ZW.m128d_f64[0] -
                                  local_a8.Translation.ZW.m128d_f64[0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ =
           SUB84(local_108.Translation.ZW.m128d_f64[1] - local_a8.Translation.ZW.m128d_f64[1],0) &
           _UNK_15061cc88;
      auVar32._12_4_ =
           (uint)((ulonglong)
                  (local_108.Translation.ZW.m128d_f64[1] - local_a8.Translation.ZW.m128d_f64[1]) >>
                 0x20) & _UNK_15061cc8c;
      lVar31 = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar32._8_8_);
      auVar3._8_4_ = (int)lVar31;
      auVar3._0_8_ = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar32._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar27 = movmskpd((int)pFVar30,auVar3);
      auVar33._0_8_ =
           (double)CONCAT44((uint)((ulonglong)
                                   (local_108.Translation.XY.m128d_f64[0] -
                                   local_a8.Translation.XY.m128d_f64[0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_108.Translation.XY.m128d_f64[0] -
                                  local_a8.Translation.XY.m128d_f64[0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar33._8_4_ =
           SUB84(local_108.Translation.XY.m128d_f64[1] - local_a8.Translation.XY.m128d_f64[1],0) &
           _UNK_15061cc88;
      auVar33._12_4_ =
           (uint)((ulonglong)
                  (local_108.Translation.XY.m128d_f64[1] - local_a8.Translation.XY.m128d_f64[1]) >>
                 0x20) & _UNK_15061cc8c;
      lVar31 = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar33._8_8_);
      auVar13._8_4_ = (int)lVar31;
      auVar13._0_8_ = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar33._0_8_);
      auVar13._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar25 = movmskpd((int)pTVar26,auVar13);
      if ((uVar27 & 0x3fffffff) == 0 && iVar25 == 0) {
        auVar34._0_8_ =
             (double)CONCAT44((uint)((ulonglong)
                                     (local_108.Rotation.ZW.m128d_f64[0] -
                                     local_a8.Rotation.ZW.m128d_f64[0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_108.Rotation.ZW.m128d_f64[0] -
                                    local_a8.Rotation.ZW.m128d_f64[0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar34._8_4_ =
             SUB84(local_108.Rotation.ZW.m128d_f64[1] - local_a8.Rotation.ZW.m128d_f64[1],0) &
             _UNK_15061cc88;
        auVar34._12_4_ =
             (uint)((ulonglong)
                    (local_108.Rotation.ZW.m128d_f64[1] - local_a8.Rotation.ZW.m128d_f64[1]) >> 0x20
                   ) & _UNK_15061cc8c;
        lVar31 = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar34._8_8_);
        auVar4._8_4_ = (int)lVar31;
        auVar4._0_8_ = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar34._0_8_);
        auVar4._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        iVar28 = movmskpd(0,auVar4);
        lVar31 = -(ulonglong)
                  (__real_3f50624dd2f1a9fc <
                  (double)CONCAT44((uint)((ulonglong)
                                          (local_108.Rotation.XY.m128d_f64[1] -
                                          local_a8.Rotation.XY.m128d_f64[1]) >> 0x20) &
                                   _UNK_15061cc8c,
                                   SUB84(local_108.Rotation.XY.m128d_f64[1] -
                                         local_a8.Rotation.XY.m128d_f64[1],0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar31;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3f50624dd2f1a9fc <
                        (double)CONCAT44((uint)((ulonglong)
                                                (local_108.Rotation.XY.m128d_f64[0] -
                                                local_a8.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_108.Rotation.XY.m128d_f64[0] -
                                               local_a8.Rotation.XY.m128d_f64[0],0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        uVar27 = movmskpd(iVar25,auVar5);
        uVar29 = iVar28 << 2 | uVar27;
        if (uVar29 != 0) {
          lVar31 = -(ulonglong)
                    (__real_3f50624dd2f1a9fc <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_108.Rotation.ZW.m128d_f64[1] +
                                            local_a8.Rotation.ZW.m128d_f64[1]) >> 0x20) &
                                     _UNK_15061cc8c,
                                     SUB84(local_108.Rotation.ZW.m128d_f64[1] +
                                           local_a8.Rotation.ZW.m128d_f64[1],0) & _UNK_15061cc88));
          auVar6._8_4_ = (int)lVar31;
          auVar6._0_8_ = -(ulonglong)
                          (__real_3f50624dd2f1a9fc <
                          (double)CONCAT44((uint)((ulonglong)
                                                  (local_108.Rotation.ZW.m128d_f64[0] +
                                                  local_a8.Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(local_108.Rotation.ZW.m128d_f64[0] +
                                                 local_a8.Rotation.ZW.m128d_f64[0],0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar6._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
          uVar29 = movmskpd(uVar29,auVar6);
          lVar31 = -(ulonglong)
                    (__real_3f50624dd2f1a9fc <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_108.Rotation.XY.m128d_f64[1] +
                                            local_a8.Rotation.XY.m128d_f64[1]) >> 0x20) &
                                     _UNK_15061cc8c,
                                     SUB84(local_108.Rotation.XY.m128d_f64[1] +
                                           local_a8.Rotation.XY.m128d_f64[1],0) & _UNK_15061cc88));
          auVar16._8_4_ = (int)lVar31;
          auVar16._0_8_ =
               -(ulonglong)
                (__real_3f50624dd2f1a9fc <
                (double)CONCAT44((uint)((ulonglong)
                                        (local_108.Rotation.XY.m128d_f64[0] +
                                        local_a8.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(local_108.Rotation.XY.m128d_f64[0] +
                                       local_a8.Rotation.XY.m128d_f64[0],0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar16._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
          uVar27 = movmskpd(uVar27,auVar16);
          if ((uVar29 & 0x3fffffff) != 0 || uVar27 != 0) {
            return false;
          }
        }
        auVar35._0_8_ =
             (double)CONCAT44((uint)((ulonglong)
                                     (local_108.Scale3D.ZW.m128d_f64[0] -
                                     local_a8.Scale3D.ZW.m128d_f64[0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_108.Scale3D.ZW.m128d_f64[0] -
                                    local_a8.Scale3D.ZW.m128d_f64[0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar35._8_4_ =
             SUB84(local_108.Scale3D.ZW.m128d_f64[1] - local_a8.Scale3D.ZW.m128d_f64[1],0) &
             _UNK_15061cc88;
        auVar35._12_4_ =
             (uint)((ulonglong)
                    (local_108.Scale3D.ZW.m128d_f64[1] - local_a8.Scale3D.ZW.m128d_f64[1]) >> 0x20)
             & _UNK_15061cc8c;
        lVar31 = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar35._8_8_);
        auVar7._8_4_ = (int)lVar31;
        auVar7._0_8_ = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar35._0_8_);
        auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        uVar29 = movmskpd(0,auVar7);
        auVar36._0_8_ =
             (double)CONCAT44((uint)((ulonglong)
                                     (local_108.Scale3D.XY.m128d_f64[0] -
                                     local_a8.Scale3D.XY.m128d_f64[0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_108.Scale3D.XY.m128d_f64[0] -
                                    local_a8.Scale3D.XY.m128d_f64[0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar36._8_4_ =
             SUB84(local_108.Scale3D.XY.m128d_f64[1] - local_a8.Scale3D.XY.m128d_f64[1],0) &
             _UNK_15061cc88;
        auVar36._12_4_ =
             (uint)((ulonglong)
                    (local_108.Scale3D.XY.m128d_f64[1] - local_a8.Scale3D.XY.m128d_f64[1]) >> 0x20)
             & _UNK_15061cc8c;
        lVar31 = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar36._8_8_);
        auVar14._8_4_ = (int)lVar31;
        auVar14._0_8_ = -(ulonglong)(__real_3f50624dd2f1a9fc < auVar36._0_8_);
        auVar14._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        iVar25 = movmskpd(uVar27,auVar14);
        if ((uVar29 & 0x3fffffff) == 0 && iVar25 == 0) {
          FRigControlValue::GetAsTransform
                    (&this->MaximumValue,&local_a8,this->ControlType,this->PrimaryAxis);
          pFVar30 = &param_1->MaximumValue;
          pTVar26 = FRigControlValue::GetAsTransform
                              (pFVar30,&local_108,this->ControlType,this->PrimaryAxis);
          auVar37._0_8_ =
               (double)CONCAT44((uint)((ulonglong)
                                       (local_a8.Translation.ZW.m128d_f64[0] -
                                       local_108.Translation.ZW.m128d_f64[0]) >> 0x20) & uVar20,
                                SUB84(local_a8.Translation.ZW.m128d_f64[0] -
                                      local_108.Translation.ZW.m128d_f64[0],0) & uVar19);
          auVar37._8_4_ =
               SUB84(local_a8.Translation.ZW.m128d_f64[1] - local_108.Translation.ZW.m128d_f64[1],0)
               & uVar21;
          auVar37._12_4_ =
               (uint)((ulonglong)
                      (local_a8.Translation.ZW.m128d_f64[1] - local_108.Translation.ZW.m128d_f64[1])
                     >> 0x20) & uVar22;
          lVar31 = -(ulonglong)(dVar23 < auVar37._8_8_);
          auVar8._8_4_ = (int)lVar31;
          auVar8._0_8_ = -(ulonglong)(dVar23 < auVar37._0_8_);
          auVar8._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
          uVar27 = movmskpd((int)pFVar30,auVar8);
          auVar38._0_8_ =
               (double)CONCAT44((uint)((ulonglong)
                                       (local_a8.Translation.XY.m128d_f64[0] -
                                       local_108.Translation.XY.m128d_f64[0]) >> 0x20) & uVar20,
                                SUB84(local_a8.Translation.XY.m128d_f64[0] -
                                      local_108.Translation.XY.m128d_f64[0],0) & uVar19);
          auVar38._8_4_ =
               SUB84(local_a8.Translation.XY.m128d_f64[1] - local_108.Translation.XY.m128d_f64[1],0)
               & uVar21;
          auVar38._12_4_ =
               (uint)((ulonglong)
                      (local_a8.Translation.XY.m128d_f64[1] - local_108.Translation.XY.m128d_f64[1])
                     >> 0x20) & uVar22;
          lVar31 = -(ulonglong)(dVar23 < auVar38._8_8_);
          auVar15._8_4_ = (int)lVar31;
          auVar15._0_8_ = -(ulonglong)(dVar23 < auVar38._0_8_);
          auVar15._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
          iVar25 = movmskpd((int)pTVar26,auVar15);
          if ((uVar27 & 0x3fffffff) == 0 && iVar25 == 0) {
            auVar39._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)
                                         (local_a8.Rotation.ZW.m128d_f64[0] -
                                         local_108.Rotation.ZW.m128d_f64[0]) >> 0x20) & uVar20,
                                  SUB84(local_a8.Rotation.ZW.m128d_f64[0] -
                                        local_108.Rotation.ZW.m128d_f64[0],0) & uVar19);
            auVar39._8_4_ =
                 SUB84(local_a8.Rotation.ZW.m128d_f64[1] - local_108.Rotation.ZW.m128d_f64[1],0) &
                 uVar21;
            auVar39._12_4_ =
                 (uint)((ulonglong)
                        (local_a8.Rotation.ZW.m128d_f64[1] - local_108.Rotation.ZW.m128d_f64[1]) >>
                       0x20) & uVar22;
            lVar31 = -(ulonglong)(dVar23 < auVar39._8_8_);
            auVar9._8_4_ = (int)lVar31;
            auVar9._0_8_ = -(ulonglong)(dVar23 < auVar39._0_8_);
            auVar9._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
            iVar28 = movmskpd(0,auVar9);
            lVar31 = -(ulonglong)
                      (dVar23 < (double)CONCAT44((uint)((ulonglong)
                                                        (local_a8.Rotation.XY.m128d_f64[1] -
                                                        local_108.Rotation.XY.m128d_f64[1]) >> 0x20)
                                                 & uVar22,SUB84(local_a8.Rotation.XY.m128d_f64[1] -
                                                                local_108.Rotation.XY.m128d_f64[1],0
                                                               ) & uVar21));
            auVar10._8_4_ = (int)lVar31;
            auVar10._0_8_ =
                 -(ulonglong)
                  (dVar23 < (double)CONCAT44((uint)((ulonglong)
                                                    (local_a8.Rotation.XY.m128d_f64[0] -
                                                    local_108.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                             uVar20,SUB84(local_a8.Rotation.XY.m128d_f64[0] -
                                                          local_108.Rotation.XY.m128d_f64[0],0) &
                                                    uVar19));
            auVar10._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
            uVar27 = movmskpd(iVar25,auVar10);
            uVar29 = iVar28 << 2 | uVar27;
            if (uVar29 != 0) {
              lVar31 = -(ulonglong)
                        (dVar23 < (double)CONCAT44((uint)((ulonglong)
                                                          (local_a8.Rotation.ZW.m128d_f64[1] +
                                                          local_108.Rotation.ZW.m128d_f64[1]) >>
                                                         0x20) & uVar22,
                                                   SUB84(local_a8.Rotation.ZW.m128d_f64[1] +
                                                         local_108.Rotation.ZW.m128d_f64[1],0) &
                                                   uVar21));
              auVar11._8_4_ = (int)lVar31;
              auVar11._0_8_ =
                   -(ulonglong)
                    (dVar23 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_a8.Rotation.ZW.m128d_f64[0] +
                                                      local_108.Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                               uVar20,SUB84(local_a8.Rotation.ZW.m128d_f64[0] +
                                                            local_108.Rotation.ZW.m128d_f64[0],0) &
                                                      uVar19));
              auVar11._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
              uVar29 = movmskpd(uVar29,auVar11);
              lVar31 = -(ulonglong)
                        (dVar23 < (double)CONCAT44((uint)((ulonglong)
                                                          (local_a8.Rotation.XY.m128d_f64[1] +
                                                          local_108.Rotation.XY.m128d_f64[1]) >>
                                                         0x20) & uVar22,
                                                   SUB84(local_a8.Rotation.XY.m128d_f64[1] +
                                                         local_108.Rotation.XY.m128d_f64[1],0) &
                                                   uVar21));
              auVar17._8_4_ = (int)lVar31;
              auVar17._0_8_ =
                   -(ulonglong)
                    (dVar23 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_a8.Rotation.XY.m128d_f64[0] +
                                                      local_108.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                               uVar20,SUB84(local_a8.Rotation.XY.m128d_f64[0] +
                                                            local_108.Rotation.XY.m128d_f64[0],0) &
                                                      uVar19));
              auVar17._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
              uVar27 = movmskpd(uVar27,auVar17);
              if ((uVar29 & 0x3fffffff) != 0 || uVar27 != 0) {
                return false;
              }
            }
            auVar40._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)
                                         (local_a8.Scale3D.ZW.m128d_f64[0] -
                                         local_108.Scale3D.ZW.m128d_f64[0]) >> 0x20) & uVar20,
                                  SUB84(local_a8.Scale3D.ZW.m128d_f64[0] -
                                        local_108.Scale3D.ZW.m128d_f64[0],0) & uVar19);
            auVar40._8_4_ =
                 SUB84(local_a8.Scale3D.ZW.m128d_f64[1] - local_108.Scale3D.ZW.m128d_f64[1],0) &
                 uVar21;
            auVar40._12_4_ =
                 (uint)((ulonglong)
                        (local_a8.Scale3D.ZW.m128d_f64[1] - local_108.Scale3D.ZW.m128d_f64[1]) >>
                       0x20) & uVar22;
            lVar31 = -(ulonglong)(dVar23 < auVar40._8_8_);
            auVar12._8_4_ = (int)lVar31;
            auVar12._0_8_ = -(ulonglong)(dVar23 < auVar40._0_8_);
            auVar12._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
            uVar29 = movmskpd(0,auVar12);
            auVar41._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)
                                         (local_a8.Scale3D.XY.m128d_f64[0] -
                                         local_108.Scale3D.XY.m128d_f64[0]) >> 0x20) & uVar20,
                                  SUB84(local_a8.Scale3D.XY.m128d_f64[0] -
                                        local_108.Scale3D.XY.m128d_f64[0],0) & uVar19);
            auVar41._8_4_ =
                 SUB84(local_a8.Scale3D.XY.m128d_f64[1] - local_108.Scale3D.XY.m128d_f64[1],0) &
                 uVar21;
            auVar41._12_4_ =
                 (uint)((ulonglong)
                        (local_a8.Scale3D.XY.m128d_f64[1] - local_108.Scale3D.XY.m128d_f64[1]) >>
                       0x20) & uVar22;
            lVar31 = -(ulonglong)(dVar23 < auVar41._8_8_);
            auVar18._8_4_ = (int)lVar31;
            auVar18._0_8_ = -(ulonglong)(dVar23 < auVar41._0_8_);
            auVar18._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
            iVar25 = movmskpd(uVar27,auVar18);
            if ((uVar29 & 0x3fffffff) == 0 && iVar25 == 0) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// Load @ 14a32b1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRigControlSettings::Load(FRigControlSettings *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FRigControlElementCustomization *pFVar3;
  FScriptContainerElement *pFVar4;
  ERigControlType EVar5;
  uint uVar6;
  ulonglong *puVar7;
  FName FVar8;
  FName FVar9;
  FScriptContainerElement *pFVar10;
  EEulerRotationOrder *pEVar11;
  ERigControlAnimationType EVar12;
  int iVar13;
  int iVar14;
  long64 lVar15;
  FRigControl *pFVar16;
  FControlRigShapeDefinition *pFVar17;
  size_t sVar18;
  UClass *pUVar19;
  UEnum *pUVar20;
  longlong lVar21;
  UPackage *pUVar22;
  ulonglong uVar23;
  int *piVar24;
  undefined1 *puVar25;
  ForAnyElementType FVar26;
  bool bVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_528 [32];
  bool local_4e8;
  bool local_4e7;
  bool local_4e6;
  TStringView<wchar_t> local_4d8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_4c8;
  undefined1 local_4b8 [8];
  FName local_4b0;
  FName local_4a8;
  FString local_4a0;
  FName local_490;
  FName local_488 [2];
  undefined1 local_478 [40];
  double dStack_450;
  double local_448;
  double dStack_440;
  undefined1 local_438 [32];
  undefined1 local_418 [40];
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [32];
  FRigControl local_3b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_528;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton == (UEnum *)0x0) {
      pUVar22 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAnimationType,(UObject *)pUVar22,
                         L"ERigControlAnimationType");
    }
    AnimationTypeEnum = Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar24 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (Z_Registration_Info_UEnum_ERigControlType.OuterSingleton == (UEnum *)0x0) {
      pUVar22 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigControlType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlType,(UObject *)pUVar22,
                         L"ERigControlType");
    }
    ControlTypeEnum = Z_Registration_Info_UEnum_ERigControlType.OuterSingleton;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar24 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton == (UEnum *)0x0) {
      pUVar22 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlVisibility,(UObject *)pUVar22,
                         L"ERigControlVisibility");
    }
    ShapeVisibilityEnum = Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton;
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar24 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    if (Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton == (UEnum *)0x0) {
      pUVar22 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAxis,(UObject *)pUVar22,
                         L"ERigControlAxis");
    }
    ControlAxisEnum = Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton;
    _Init_thread_footer(&::_TSS3);
  }
  local_4b0.ComparisonIndex.Value = 0;
  local_4b0.Number = 0;
  local_490.ComparisonIndex.Value = 0;
  local_490.Number = 0;
  bVar27 = false;
  local_4a8.ComparisonIndex.Value = 0;
  local_4a8.Number = 0;
  bVar28 = false;
  local_488[0].ComparisonIndex.Value = 0;
  local_488[0].Number = 0;
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  local_4e6 = false;
  local_4e7 = false;
  local_4e8 = false;
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (0x10 < iVar13) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_4b0);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_490);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->DisplayName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_488);
  ::operator<<(param_1,&this->bIsCurve);
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  iVar14 = 0;
  if (iVar13 < 0x11) {
    puVar7 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar1) {
      local_4d8.DataPtr = (wchar_t *)((ulonglong)local_4d8.DataPtr & 0xffffffff00000000);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4d8);
      if (1 < (uint)local_4d8.DataPtr) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar6 = (uint)local_4d8.DataPtr;
      if ((param_1->field_0x28 & 1) == 0) goto LAB_14a32b34b;
    }
    else {
      uVar6 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar1;
    }
    bVar27 = uVar6 != 0;
  }
LAB_14a32b34b:
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0xd) {
    puVar7 = *(ulonglong **)&param_1->field_0x8;
    puVar25 = &param_1->field_0x28;
    puVar1 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar1) {
      local_4d8.DataPtr = (wchar_t *)((ulonglong)local_4d8.DataPtr & 0xffffffff00000000);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4d8);
      if (1 < (uint)local_4d8.DataPtr) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar6 = (uint)local_4d8.DataPtr;
      if ((*puVar25 & 1) != 0) goto LAB_14a32b3b8;
    }
    else {
      uVar6 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar1;
LAB_14a32b3b8:
      local_4e6 = uVar6 != 0;
    }
    puVar7 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar1) {
      local_4d8.DataPtr = (wchar_t *)((ulonglong)local_4d8.DataPtr & 0xffffffff00000000);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4d8);
      if (1 < (uint)local_4d8.DataPtr) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar6 = (uint)local_4d8.DataPtr;
      if ((*puVar25 & 1) != 0) goto LAB_14a32b40e;
    }
    else {
      uVar6 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar1;
LAB_14a32b40e:
      local_4e7 = uVar6 != 0;
    }
    puVar7 = *(ulonglong **)&param_1->field_0x8;
    piVar24 = (int *)*puVar7 + 1;
    if ((int *)puVar7[1] < piVar24) {
      local_4d8.DataPtr = (wchar_t *)((ulonglong)local_4d8.DataPtr & 0xffffffff00000000);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4d8);
      if (1 < (uint)local_4d8.DataPtr) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((*puVar25 & 1) != 0) {
        local_4e8 = (uint)local_4d8.DataPtr != 0;
      }
    }
    else {
      local_4e8 = *(int *)*puVar7 != 0;
      *puVar7 = (ulonglong)piVar24;
    }
  }
  else {
    TArrayPrivateFriend::Serialize<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_>
              (param_1,&this->LimitEnabled);
  }
  puVar25 = &param_1->field_0x28;
  ::operator<<(param_1,&this->bDrawLimits);
  uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_478._16_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[2];
  local_478._24_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[3];
  local_478._32_8_ = (undefined8)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_450 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_448 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_440 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar29 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_478._8_4_ = uVar33;
  local_478._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_478._12_4_ = uVar34;
  local_438._24_4_ = uVar29;
  local_438._16_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_438._28_4_ = uVar30;
  local_3d8._24_4_ = uVar29;
  local_3d8._16_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3d8._28_4_ = uVar30;
  local_438._8_4_ = uVar31;
  local_438._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_438._12_4_ = uVar32;
  local_418._8_4_ = uVar33;
  local_418._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_418._12_4_ = uVar34;
  local_3d8._8_4_ = uVar31;
  local_3d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3d8._12_4_ = uVar32;
  local_418._16_8_ = local_478._16_8_;
  local_418._24_8_ = local_478._24_8_;
  local_418._32_8_ = local_478._32_8_;
  dStack_3f0 = dStack_450;
  local_3e8 = local_448;
  dStack_3e0 = dStack_440;
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 10) {
    UE::Math::operator<<(param_1,(TQuat<double> *)local_478);
    UE::Math::operator<<(param_1,(TVector<double> *)(local_478 + 0x20));
    UE::Math::operator<<(param_1,(TVector<double> *)local_438);
    if ((*puVar25 & 1) != 0) {
      dStack_440 = 0.0;
      local_438._24_8_ = 0;
    }
    UE::Math::operator<<(param_1,(TQuat<double> *)local_418);
    UE::Math::operator<<(param_1,(TVector<double> *)(local_418 + 0x20));
    UE::Math::operator<<(param_1,(TVector<double> *)local_3d8);
    if ((*puVar25 & 1) != 0) {
      dStack_3e0 = 0.0;
      local_3d8._24_8_ = 0;
    }
  }
  else {
    ::operator<<(param_1,&this->MinimumValue);
    ::operator<<(param_1,&this->MaximumValue);
  }
  lVar15 = UEnum::GetValueByName(ControlTypeEnum,local_490,None);
  this->ControlType = (ERigControlType)lVar15;
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x11) {
    puVar7 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar1) {
      local_4d8.DataPtr = (wchar_t *)((ulonglong)local_4d8.DataPtr & 0xffffffff00000000);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4d8,4);
      if (1 < (uint)local_4d8.DataPtr) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar6 = (uint)local_4d8.DataPtr;
      if ((*puVar25 & 1) != 0) goto LAB_14a32b632;
    }
    else {
      uVar6 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar1;
LAB_14a32b632:
      bVar28 = uVar6 != 0;
    }
    if (bVar27) {
      if ((bVar28) && (this->ControlType != Bool)) {
        EVar12 = AnimationControl;
      }
      else {
        EVar12 = AnimationChannel;
      }
    }
    else {
      EVar12 = ProxyControl;
    }
    this->AnimationType = EVar12;
    local_4b0 = UEnum::GetNameByValue(AnimationTypeEnum,(long64)&local_4c8);
    local_4b0 = *(FName *)local_4b0;
  }
  ::operator<<(param_1,&this->bShapeVisible);
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x11) {
    local_4a8 = UEnum::GetNameByValue(ShapeVisibilityEnum,(long64)&local_4c8);
    local_4a8 = *(FName *)local_4a8;
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_4a8);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ShapeName);
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0xb) {
    pFVar16 = FRigControl::FRigControl(&local_3b8);
    FVar8 = this->ShapeName;
    FVar9 = pFVar16->GizmoName;
    local_3b8._padding_ = (longlong)&___7FRigControl__6B_;
    if (local_3b8.Dependents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Dependents.AllocatorInstance.Data);
    }
    if (FVar8 == FVar9) {
      pFVar17 = FControlRigShapeDefinition::FControlRigShapeDefinition
                          ((FControlRigShapeDefinition *)&local_3b8);
      this->ShapeName = pFVar17->ShapeName;
      if ((void *)local_3b8._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._32_8_);
      }
    }
  }
  ::operator<<(param_1,&this->ShapeColor);
  ::operator<<(param_1,&this->bIsTransientControl);
  ::operator<<(param_1,&local_4a0);
  lVar15 = UEnum::GetValueByName(AnimationTypeEnum,local_4b0,None);
  pUVar20 = ControlAxisEnum;
  this->AnimationType = (ERigControlAnimationType)lVar15;
  lVar15 = UEnum::GetValueByName(pUVar20,local_488[0],None);
  pUVar20 = ShapeVisibilityEnum;
  this->PrimaryAxis = (ERigControlAxis)lVar15;
  lVar15 = UEnum::GetValueByName(pUVar20,local_4a8,None);
  this->ShapeVisibility = (ERigControlVisibility)lVar15;
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 10) {
    FRigControlValue::SetFromTransform
              (&this->MinimumValue,(TTransform<double> *)local_478,this->ControlType,
               this->PrimaryAxis);
    FRigControlValue::SetFromTransform
              (&this->MaximumValue,(TTransform<double> *)local_418,this->ControlType,
               this->PrimaryAxis);
  }
  (this->ControlEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  if (local_4a0.Data.ArrayNum < 2) goto LAB_14a32b900;
  bVar27 = IsInGameThread();
  if (bVar27) {
    local_4c8.ArrayNum = 0;
    local_4c8.ArrayMax = 0;
    local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_4a0.Data.ArrayNum == 0) {
      local_4d8.DataPtr = L"";
LAB_14a32b842:
      sVar18 = wcslen(local_4d8.DataPtr);
      iVar14 = (int)sVar18;
    }
    else {
      local_4d8.DataPtr = (wchar_t *)local_4a0.Data.AllocatorInstance.Data;
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a32b842;
    }
    local_4d8.Size = iVar14;
    pUVar19 = Z_Construct_UClass_UEnum_NoRegister();
    pUVar20 = (UEnum *)StaticLoadObject(pUVar19,(UObject *)0x0,&local_4d8,
                                        (TStringView<wchar_t> *)&local_4c8,0,(UPackageMap *)0x0,true
                                        ,(FLinkerInstancingContext *)0x0);
  }
  else {
    if (local_4a0.Data.ArrayNum == 0) {
      local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
LAB_14a32b8b5:
      sVar18 = wcslen((wchar_t *)local_4c8.AllocatorInstance.Data);
      iVar14 = (int)sVar18;
    }
    else {
      local_4c8.AllocatorInstance.Data = local_4a0.Data.AllocatorInstance.Data;
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a32b8b5;
    }
    local_4c8.ArrayNum = iVar14;
    pUVar19 = Z_Construct_UClass_UEnum_NoRegister();
    pUVar20 = (UEnum *)StaticFindObject(pUVar19,(UObject *)0x0,(TStringView<wchar_t> *)&local_4c8,
                                        None);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->ControlEnum).field0_0x0.DebugPtr = pUVar20;
LAB_14a32b900:
  pFVar3 = &this->Customization;
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x25) {
    piVar24 = &(this->Customization).AvailableSpaces.ArrayMax;
    iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if (iVar13 < 9) {
      iVar13 = *piVar24;
      (this->Customization).AvailableSpaces.ArrayNum = 0;
      if (iVar13 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)pFVar3,0,piVar24);
      }
    }
    else {
      local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4c8.ArrayNum = 0;
      local_4c8.ArrayMax = 0;
      TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>(param_1,&local_4c8)
      ;
      iVar13 = *piVar24;
      (this->Customization).AvailableSpaces.ArrayNum = 0;
      if (iVar13 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)pFVar3,0,piVar24);
      }
      uVar23 = local_4c8._8_8_ & 0xffffffff;
      if (local_4c8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar23);
      }
      if (*piVar24 < local_4c8.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,local_4c8.ArrayNum,(ForAnyElementType *)pFVar3,
                   (this->Customization).AvailableSpaces.ArrayNum,piVar24);
        uVar23 = local_4c8._8_8_ & 0xffffffff;
      }
      iVar13 = (int)uVar23;
      pFVar4 = local_4c8.AllocatorInstance.Data + (longlong)iVar13 * 0xc;
      FVar26.Data = local_4c8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar23 != iVar13) {
          `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_4b8);
        }
        if (FVar26.Data == pFVar4) break;
        iVar14 = (this->Customization).AvailableSpaces.ArrayNum;
        if (iVar14 == *piVar24) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x414,(ForAnyElementType *)pFVar3,piVar24);
        }
        lVar21 = (longlong)iVar14;
        (this->Customization).AvailableSpaces.ArrayNum = iVar14 + 1;
        pFVar10 = (pFVar3->AvailableSpaces).AllocatorInstance.Data;
        *(undefined8 *)(pFVar10 + lVar21 * 0x14) = *(undefined8 *)FVar26.Data;
        local_4d8.DataPtr = (wchar_t *)0x0;
        pFVar2 = FVar26.Data + 8;
        FVar26.Data = FVar26.Data + 0xc;
        *(undefined4 *)(pFVar10 + lVar21 * 0x14 + 8) = *(undefined4 *)pFVar2;
        *(undefined8 *)(pFVar10 + lVar21 * 0x14 + 0xc) = 0;
        uVar23 = local_4c8._8_8_ & 0xffffffff;
      }
      if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.AllocatorInstance.Data);
      }
    }
  }
  else {
    TArrayPrivateFriend::Serialize<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>
              (param_1,&pFVar3->AvailableSpaces);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x11) {
    piVar24 = &(this->DrivenControls).ArrayMax;
    (this->DrivenControls).ArrayNum = 0;
    if (*piVar24 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->DrivenControls).AllocatorInstance,0,piVar24);
    }
  }
  else {
    TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>
              (param_1,&this->DrivenControls);
  }
  (this->PreviouslyDrivenControls).ArrayNum = 0;
  if ((this->PreviouslyDrivenControls).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->PreviouslyDrivenControls).AllocatorInstance,0,
               &(this->PreviouslyDrivenControls).ArrayMax);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0xd) {
    SetupLimitArrayForType(this,local_4e6,local_4e7,local_4e8);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x11) {
    if (((this->AnimationType == AnimationControl) || (this->AnimationType == AnimationChannel)) &&
       ((EVar5 = this->ControlType, EVar5 == Bool ||
        (((byte)(EVar5 - Float) < 3 || (EVar5 == ScaleFloat)))))) {
      bVar27 = true;
    }
    else {
      bVar27 = false;
    }
    this->bGroupWithParentControl = bVar27;
  }
  else {
    ::operator<<(param_1,&this->bGroupWithParentControl);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x16) {
    this->bRestrictSpaceSwitching = false;
  }
  else {
    ::operator<<(param_1,&this->bRestrictSpaceSwitching);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x17) {
    piVar24 = &(this->FilteredChannels).ArrayMax;
    (this->FilteredChannels).ArrayNum = 0;
    if (*piVar24 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->FilteredChannels).AllocatorInstance,0,piVar24);
    }
  }
  else {
    TArrayPrivateFriend::Serialize<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>
              (param_1,&this->FilteredChannels);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x1a) {
    this->PreferredRotationOrder = YZX;
  }
  else {
    pEVar11 = (EEulerRotationOrder *)**(undefined8 **)&param_1->field_0x8;
    if ((EEulerRotationOrder *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar11 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PreferredRotationOrder,1);
    }
    else {
      this->PreferredRotationOrder = *pEVar11;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar13 < 0x1b) {
    this->bUsePreferredRotationOrder = false;
  }
  else {
    ::operator<<(param_1,&this->bUsePreferredRotationOrder);
  }
  *&(this->ShapeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ShapeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ShapeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ShapeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ShapeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ShapeTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  return;
}

// Save @ 14a344e00

void __thiscall FRigControlSettings::Save(FRigControlSettings *this,FArchive *param_1)

{
  UEnum *this_00;
  EEulerRotationOrder *pEVar1;
  FString *pFVar2;
  UPackage *pUVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_68;
  TStringView<wchar_t> local_58;
  FSoftObjectPath local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton == (UEnum *)0x0) {
        pUVar3 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAnimationType,(UObject *)pUVar3,
                           L"ERigControlAnimationType");
      }
      AnimationTypeEnum = Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      if (Z_Registration_Info_UEnum_ERigControlType.OuterSingleton == (UEnum *)0x0) {
        pUVar3 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigControlType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlType,(UObject *)pUVar3,
                           L"ERigControlType");
      }
      ControlTypeEnum = Z_Registration_Info_UEnum_ERigControlType.OuterSingleton;
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar5 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      if (Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton == (UEnum *)0x0) {
        pUVar3 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlVisibility,(UObject *)pUVar3,
                           L"ERigControlVisibility");
      }
      ShapeVisibilityEnum = Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton;
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar5 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      if (Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton == (UEnum *)0x0) {
        pUVar3 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAxis,(UObject *)pUVar3,
                           L"ERigControlAxis");
      }
      ControlAxisEnum = Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton;
      _Init_thread_footer(&::_TSS3);
    }
  }
  UEnum::GetNameByValue(AnimationTypeEnum,(long64)local_res8);
  UEnum::GetNameByValue(ControlTypeEnum,(long64)local_res10);
  UEnum::GetNameByValue(ShapeVisibilityEnum,(long64)local_res20);
  UEnum::GetNameByValue(ControlAxisEnum,(long64)local_res18);
  this_00 = (this->ControlEnum).field0_0x0.DebugPtr;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if (this_00 != (UEnum *)0x0) {
    pFVar2 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this_00,(FString *)&local_58,(UObject *)0x0);
    if (&local_68 != pFVar2) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    if ((param_1->field_0x2b & 1) != 0) {
      local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_48.AssetPath.PackageName.Number = 0;
      local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_48.AssetPath.AssetName.Number = 0;
      local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = local_68.Data.ArrayNum + -1;
      local_48.SubPathString.Data.ArrayNum = 0;
      local_48.SubPathString.Data.ArrayMax = 0;
      if (local_68.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      local_58.Size = iVar4;
      local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_48,&local_58);
      (**(code **)(*(longlong *)param_1 + 0x140))(param_1,&local_48);
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res8);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res10);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->DisplayName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res18);
  ::operator<<(param_1,&this->bIsCurve);
  TArrayPrivateFriend::Serialize<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_>
            (param_1,&this->LimitEnabled);
  ::operator<<(param_1,&this->bDrawLimits);
  ::operator<<(param_1,&this->MinimumValue);
  ::operator<<(param_1,&this->MaximumValue);
  ::operator<<(param_1,&this->bShapeVisible);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res20);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ShapeName);
  ::operator<<(param_1,&this->ShapeColor);
  ::operator<<(param_1,&this->bIsTransientControl);
  ::operator<<(param_1,&local_68);
  TArrayPrivateFriend::Serialize<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_>
            (param_1,&(this->Customization).AvailableSpaces);
  TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>
            (param_1,&this->DrivenControls);
  ::operator<<(param_1,&this->bGroupWithParentControl);
  ::operator<<(param_1,&this->bRestrictSpaceSwitching);
  TArrayPrivateFriend::Serialize<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>
            (param_1,&this->FilteredChannels);
  pEVar1 = (EEulerRotationOrder *)**(undefined8 **)&param_1->field_0x8;
  if ((EEulerRotationOrder *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PreferredRotationOrder,1);
  }
  else {
    this->PreferredRotationOrder = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bUsePreferredRotationOrder);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupLimitArrayForType @ 14a3524a0

void __thiscall
FRigControlSettings::SetupLimitArrayForType
          (FRigControlSettings *this,bool param_1,bool param_2,bool param_3)

{
  TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  
  switch(this->ControlType) {
  default:
    (this->LimitEnabled).ArrayNum = 0;
    if (-1 < (this->LimitEnabled).ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,0,&(this->LimitEnabled).AllocatorInstance,0,&(this->LimitEnabled).ArrayMax);
    return;
  case Float:
  case Integer:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,1 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,1 - iVar9);
    }
    else if (1 < iVar9) {
      uVar8 = iVar9 - 1;
      if ((int)uVar8 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (uVar8 == 0) goto LAB_14a3525ce;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 2;
      if (~uVar8 + *piVar2 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)(int)uVar8 * 2,(longlong)(int)(~uVar8 + *piVar2) * 2);
      }
      *piVar2 = *piVar2 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a3525ce:
    if ((*piVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    *pFVar6 = (FScriptContainerElement)param_1;
    pFVar6[1] = (FScriptContainerElement)param_1;
    return;
  case Vector2D:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,2 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,2 - iVar9);
    }
    else if (2 < iVar9) {
      iVar9 = iVar9 + -2;
      if (iVar9 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar9 == 0) goto LAB_14a352820;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 4;
      iVar5 = (*piVar2 - iVar9) + -2;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar9 * 2,(longlong)iVar5 * 2);
      }
      *piVar2 = *piVar2 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a352820:
    if ((*piVar2 < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[2] = (FScriptContainerElement)param_1;
    pFVar6[3] = (FScriptContainerElement)param_1;
    uVar7 = *(undefined2 *)(pFVar6 + 2);
    goto LAB_14a35286b;
  case Position:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 3) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,3 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,3 - iVar9);
    }
    else if (3 < iVar9) {
      iVar9 = iVar9 + -3;
      if (iVar9 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar9 == 0) goto LAB_14a352990;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 6;
      iVar5 = (*piVar2 - iVar9) + -3;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar9 * 2,(longlong)iVar5 * 2);
      }
      *piVar2 = *piVar2 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a352990:
    if ((*piVar2 < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[4] = (FScriptContainerElement)param_1;
    pFVar6[5] = (FScriptContainerElement)param_1;
    break;
  case Scale:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 3) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,3 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,3 - iVar9);
    }
    else if (3 < iVar9) {
      iVar9 = iVar9 + -3;
      if (iVar9 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar9 == 0) goto LAB_14a352b04;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 6;
      iVar5 = (*piVar2 - iVar9) + -3;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar9 * 2,(longlong)iVar5 * 2);
      }
      *piVar2 = *piVar2 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a352b04:
    if ((*piVar2 < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[4] = (FScriptContainerElement)param_3;
    pFVar6[5] = (FScriptContainerElement)param_3;
    break;
  case Rotator:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 3) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,3 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,3 - iVar9);
    }
    else if (3 < iVar9) {
      iVar9 = iVar9 + -3;
      if (iVar9 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar9 == 0) goto LAB_14a352c31;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 6;
      iVar5 = (*piVar2 - iVar9) + -3;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar9 * 2,(longlong)iVar5 * 2);
      }
      *piVar2 = *piVar2 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a352c31:
    if ((*piVar2 < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[4] = (FScriptContainerElement)param_2;
    pFVar6[5] = (FScriptContainerElement)param_2;
    break;
  case Transform:
  case EulerTransform:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 9) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,9 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,9 - iVar9);
    }
    else if (9 < iVar9) {
      iVar9 = iVar9 + -9;
      if (iVar9 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar9 == 0) goto LAB_14a352fe3;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 0x12;
      iVar5 = (*piVar2 - iVar9) + -9;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar9 * 2,(longlong)iVar5 * 2);
      }
      *piVar2 = *piVar2 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a352fe3:
    if ((*piVar2 < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[4] = (FScriptContainerElement)param_1;
    pFVar6[5] = (FScriptContainerElement)param_1;
    uVar7 = *(undefined2 *)(pFVar6 + 4);
    if ((*piVar2 < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 2) = uVar7;
    if ((*piVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)(pTVar1->AllocatorInstance).Data = uVar7;
    if ((*piVar2 < 6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[10] = (FScriptContainerElement)param_2;
    pFVar6[0xb] = (FScriptContainerElement)param_2;
    uVar7 = *(undefined2 *)(pFVar6 + 10);
    if ((*piVar2 < 5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 8) = uVar7;
    if ((*piVar2 < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 6) = uVar7;
    if ((*piVar2 < 9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[0x10] = (FScriptContainerElement)param_3;
    pFVar6[0x11] = (FScriptContainerElement)param_3;
    uVar7 = *(undefined2 *)(pFVar6 + 0x10);
    if ((*piVar2 < 8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 0xe) = uVar7;
    if ((*piVar2 < 7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 0xc) = uVar7;
    return;
  case TransformNoScale:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 6) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,6 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,6 - iVar9);
    }
    else if (6 < iVar9) {
      iVar9 = iVar9 + -6;
      if (iVar9 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar9 == 0) goto LAB_14a352d5e;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 0xc;
      iVar5 = (*piVar2 - iVar9) + -6;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar9 * 2,(longlong)iVar5 * 2);
      }
      *piVar2 = *piVar2 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a352d5e:
    if ((*piVar2 < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[4] = (FScriptContainerElement)param_1;
    pFVar6[5] = (FScriptContainerElement)param_1;
    uVar7 = *(undefined2 *)(pFVar6 + 4);
    if ((*piVar2 < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 2) = uVar7;
    if ((*piVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)(pTVar1->AllocatorInstance).Data = uVar7;
    if ((*piVar2 < 6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar6[10] = (FScriptContainerElement)param_2;
    pFVar6[0xb] = (FScriptContainerElement)param_2;
    uVar7 = *(undefined2 *)(pFVar6 + 10);
    if ((*piVar2 < 5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 8) = uVar7;
    if ((*piVar2 < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((pTVar1->AllocatorInstance).Data + 6) = uVar7;
    return;
  case ScaleFloat:
    pTVar1 = &this->LimitEnabled;
    iVar9 = (this->LimitEnabled).ArrayNum;
    piVar2 = &(this->LimitEnabled).ArrayNum;
    if (iVar9 < 1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,1,1 - iVar9,&pTVar1->AllocatorInstance,piVar2,
                         &(this->LimitEnabled).ArrayMax);
      DefaultConstructItems<FRigControlLimitEnabled,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 2,1 - iVar9);
    }
    else if (1 < iVar9) {
      uVar8 = iVar9 - 1;
      if ((int)uVar8 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (uVar8 == 0) goto LAB_14a3526f8;
      pFVar6 = (pTVar1->AllocatorInstance).Data + 2;
      if (~uVar8 + *piVar2 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)(int)uVar8 * 2,(longlong)(int)(~uVar8 + *piVar2) * 2);
      }
      *piVar2 = *piVar2 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,&pTVar1->AllocatorInstance,*piVar2,&(this->LimitEnabled).ArrayMax);
    }
LAB_14a3526f8:
    if ((*piVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    *pFVar6 = (FScriptContainerElement)param_3;
    pFVar6[1] = (FScriptContainerElement)param_3;
    return;
  }
  uVar7 = *(undefined2 *)(pFVar6 + 4);
  if (((this->LimitEnabled).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)((this->LimitEnabled).AllocatorInstance.Data + 2) = uVar7;
LAB_14a35286b:
  if (((this->LimitEnabled).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined2 *)(this->LimitEnabled).AllocatorInstance.Data = uVar7;
  return;
}

