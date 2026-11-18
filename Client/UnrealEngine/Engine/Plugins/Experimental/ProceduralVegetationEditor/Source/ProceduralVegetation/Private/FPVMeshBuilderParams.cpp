// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 4

// StaticStruct @ 14da559c0

UScriptStruct * __cdecl FPVMeshBuilderParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVMeshBuilderParams.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVMeshBuilderParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVMeshBuilderParams,(UObject *)pUVar1,
                         L"PVMeshBuilderParams");
  }
  return Z_Registration_Info_UScriptStruct_FPVMeshBuilderParams.OuterSingleton;
}

// FPVMeshBuilderParams @ 14da633a0

FPVMeshBuilderParams * __thiscall
FPVMeshBuilderParams::FPVMeshBuilderParams(FPVMeshBuilderParams *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_38;
  
  this->bOverrideMaterial = false;
  this->MinMeshDivisions = 6;
  this->MaxMeshDivisions = 0xc;
  this->Accuracy = 5;
  this->LongestSegmentLength = 10.0;
  this->ShortestSegmentLength = 0.0;
  (this->MaterialSettings).GenerationOffset = 0;
  (this->MaterialSettings).DistributionMethod = Repeat;
  (this->MaterialSettings).MaterialSetups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSettings).MaterialSetups.ArrayNum = 0;
  (this->MaterialSettings).MaterialSetups.ArrayMax = 0;
  (this->MaterialSettings).MaterialMode = Generation;
  (this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  (this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  (this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  this->PointRemoval = 0.0;
  this->SegmentReduction = 0.0;
  this->MainTrunkRetention = 0.0;
  this->GroundRetention = 0.0;
  this->SegmentRetentionImpact = 1.0;
  this->HullRetention = 0.0;
  *(undefined4 *)&(this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->HullRetentionGradient).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->HullRetentionGradient).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->HullRetentionGradient).EditorCurveData._padding_ + 4) = 0;
  (this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  (this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  (this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->HullRetentionGradient).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->HullRetentionGradient).EditorCurveData._padding_ + 4) = 0x404;
  (this->HullRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->HullRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HullRetentionGradient).EditorCurveData.Keys.ArrayNum = 0;
  (this->HullRetentionGradient).EditorCurveData.Keys.ArrayMax = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ + 4) =
       0x80;
  *(undefined4 *)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ + 4) = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ + 4) =
       0x404;
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->MainTrunkRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MainTrunkRetentionGradient).EditorCurveData.Keys.ArrayNum = 0;
  (this->MainTrunkRetentionGradient).EditorCurveData.Keys.ArrayMax = 0;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->GroundRetentionGradient).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->GroundRetentionGradient).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->GroundRetentionGradient).EditorCurveData._padding_ + 4) = 0;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->GroundRetentionGradient).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->GroundRetentionGradient).EditorCurveData._padding_ + 4) = 0x404;
  (this->GroundRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->GroundRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GroundRetentionGradient).EditorCurveData.Keys.ArrayNum = 0;
  (this->GroundRetentionGradient).EditorCurveData.Keys.ArrayMax = 0;
  this->ScaleRetention = 0.0;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ScaleRetentionGradient).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ScaleRetentionGradient).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ScaleRetentionGradient).EditorCurveData._padding_ + 4) = 0;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->ScaleRetentionGradient).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->ScaleRetentionGradient).EditorCurveData._padding_ + 4) = 0x404;
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->ScaleRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScaleRetentionGradient).EditorCurveData.Keys.ArrayNum = 0;
  (this->ScaleRetentionGradient).EditorCurveData.Keys.ArrayMax = 0;
  ::FString::FString(&this->SelectedPlantProfile,"None");
  pTVar1 = &this->PlantProfileOptions;
  ::FString::FString(&local_38,"None");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlantProfileOptions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&pTVar1->AllocatorInstance,1,&(this->PlantProfileOptions).ArrayMax);
  ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,&local_38,1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->bIsPlantProfileDropdownEnabled = false;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->PlantProfileFallOff).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->PlantProfileFallOff).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->PlantProfileFallOff).EditorCurveData._padding_ + 4) = 0;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->PlantProfileFallOff).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->PlantProfileFallOff).EditorCurveData._padding_ + 4) = 0x404;
  (this->PlantProfileFallOff).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->PlantProfileFallOff).EditorCurveData.Keys.ArrayNum = 0;
  (this->PlantProfileFallOff).EditorCurveData.Keys.ArrayMax = 0;
  (this->PlantProfileFallOff).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->PlantProfileScale = 1.0;
  this->bApplyProfileToBranches = false;
  (this->DisplacementTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DisplacementValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplacementValues).ArrayNum = 0;
  (this->DisplacementValues).ArrayMax = 0;
  this->DisplacementStrength = 0.5;
  this->DisplacementBias = 0.0;
  (this->DisplacementUVScale).field0_0x0._s_0.X = 1.0;
  (this->DisplacementUVScale).field0_0x0._s_0.Y = 1.0;
  this->DisplacementGenerationUpperLimit = 1;
  InitializeLinearCurve(&this->HullRetentionGradient);
  InitializeLinearCurve(&this->MainTrunkRetentionGradient);
  InitializeLinearCurve(&this->GroundRetentionGradient);
  InitializeLinearCurve(&this->ScaleRetentionGradient);
  InitializeLinearCurve(&this->PlantProfileFallOff);
  return this;
}

// ~FPVMeshBuilderParams @ 14da67750

void __thiscall FPVMeshBuilderParams::~FPVMeshBuilderParams(FPVMeshBuilderParams *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->DisplacementValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlantProfileFallOff).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PlantProfileFallOff).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->PlantProfileFallOff).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->PlantProfileFallOff).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->PlantProfileFallOff).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PlantProfileFallOff).EditorCurveData._padding_);
  DestructItems<FString,int>
            ((FString *)(this->PlantProfileOptions).AllocatorInstance.Data,
             (this->PlantProfileOptions).ArrayNum);
  pFVar1 = (this->PlantProfileOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedPlantProfile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScaleRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ScaleRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ScaleRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ScaleRetentionGradient).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->ScaleRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScaleRetentionGradient).EditorCurveData._padding_);
  pFVar1 = (this->GroundRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->GroundRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->GroundRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->GroundRetentionGradient).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->GroundRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->GroundRetentionGradient).EditorCurveData._padding_);
  pFVar1 = (this->MainTrunkRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MainTrunkRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->MainTrunkRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->MainTrunkRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MainTrunkRetentionGradient).EditorCurveData._padding_);
  pFVar1 = (this->HullRetentionGradient).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->HullRetentionGradient).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->HullRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->HullRetentionGradient).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->HullRetentionGradient).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->HullRetentionGradient).EditorCurveData._padding_);
  pFVar1 = (this->MaterialSettings).MaterialSetups.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// InitializeLinearCurve @ 14da9ace0

void __cdecl FPVMeshBuilderParams::InitializeLinearCurve(FPVFloatRamp *param_1)

{
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8;
  FKeyHandle local_res10;
  FKeyHandle local_res18 [4];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar1;
  
  if (param_1 != (FPVFloatRamp *)0x0) {
    FRichCurve::Reset(&param_1->EditorCurveData);
    FKeyHandle::FKeyHandle(local_res18);
    FVar1.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
    FRichCurve::AddKey(&param_1->EditorCurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
    FKeyHandle::FKeyHandle(local_res18);
    FRichCurve::AddKey(&param_1->EditorCurveData,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                       (FKeyHandle)(FVar1.Index & 0xffffff00));
    FRichCurve::SetKeyInterpMode(&param_1->EditorCurveData,local_res8,RCIM_Linear);
    FRichCurve::SetKeyInterpMode(&param_1->EditorCurveData,local_res10,RCIM_Linear);
  }
  return;
}

