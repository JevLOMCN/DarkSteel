// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// StaticStruct @ 14b4984c0

UScriptStruct * __cdecl FDS_FloatingTextInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_FloatingTextInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_FloatingTextInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_FloatingTextInfo,(UObject *)pUVar1,
                         L"DS_FloatingTextInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_FloatingTextInfo.OuterSingleton;
}

// FDS_FloatingTextInfo @ 14b499c10

/* WARNING: Type propagation algorithm not settling */

FDS_FloatingTextInfo * __thiscall
FDS_FloatingTextInfo::FDS_FloatingTextInfo(FDS_FloatingTextInfo *this,FDS_FloatingTextInfo *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  double dVar10;
  TVector2<float>_u_0 TVar11;
  EStyleColor EVar12;
  undefined2 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar17;
  bool bVar18;
  undefined6 uVar19;
  undefined3 uVar20;
  byte bVar21;
  
  (this->FloatingTextData).FloatingTextWindowID = (param_1->FloatingTextData).FloatingTextWindowID;
  (this->FloatingTextData).TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  uVar9 = *(undefined8 *)
           ((longlong)&(param_1->FloatingTextData).TextBrush.TintColor.SpecifiedColor.field0_0x0 + 8
           );
  *(undefined8 *)&(this->FloatingTextData).TextBrush.TintColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->FloatingTextData).TextBrush.TintColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->FloatingTextData).TextBrush.TintColor.SpecifiedColor.field0_0x0 + 8) = uVar9;
  EVar12 = (param_1->FloatingTextData).TextBrush.TintColor.ColorTableId;
  uVar13 = *(undefined2 *)&(param_1->FloatingTextData).TextBrush.TintColor.field_0x12;
  (this->FloatingTextData).TextBrush.TintColor.ColorUseRule =
       (param_1->FloatingTextData).TextBrush.TintColor.ColorUseRule;
  (this->FloatingTextData).TextBrush.TintColor.ColorTableId = EVar12;
  *(undefined2 *)&(this->FloatingTextData).TextBrush.TintColor.field_0x12 = uVar13;
  (this->FloatingTextData).TextBrush.DrawAs.Value =
       (param_1->FloatingTextData).TextBrush.DrawAs.Value;
  (this->FloatingTextData).TextBrush.Tiling.Value =
       (param_1->FloatingTextData).TextBrush.Tiling.Value;
  (this->FloatingTextData).TextBrush.Mirroring.Value =
       (param_1->FloatingTextData).TextBrush.Mirroring.Value;
  (this->FloatingTextData).TextBrush.ImageType.Value =
       (param_1->FloatingTextData).TextBrush.ImageType.Value;
  (this->FloatingTextData).TextBrush.ImageSize = (param_1->FloatingTextData).TextBrush.ImageSize;
  fVar14 = (param_1->FloatingTextData).TextBrush.Margin.Top;
  fVar15 = (param_1->FloatingTextData).TextBrush.Margin.Right;
  fVar16 = (param_1->FloatingTextData).TextBrush.Margin.Bottom;
  (this->FloatingTextData).TextBrush.Margin.Left = (param_1->FloatingTextData).TextBrush.Margin.Left
  ;
  (this->FloatingTextData).TextBrush.Margin.Top = fVar14;
  (this->FloatingTextData).TextBrush.Margin.Right = fVar15;
  (this->FloatingTextData).TextBrush.Margin.Bottom = fVar16;
  pUVar6 = (param_1->FloatingTextData).TextBrush.ResourceObject.field0_0x0.DebugPtr;
  (this->FloatingTextData).TextBrush.ResourceObject.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  dVar10 = (param_1->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
  (this->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X =
       (param_1->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.X;
  (this->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W;
  (this->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
       (param_1->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
  (this->FloatingTextData).TextBrush.OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar10;
  uVar9 = *(undefined8 *)
           ((longlong)
            &(param_1->FloatingTextData).TextBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 +
           8);
  *(undefined8 *)&(this->FloatingTextData).TextBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0
       = *(undefined8 *)
          &(param_1->FloatingTextData).TextBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->FloatingTextData).TextBrush.OutlineSettings.Color.SpecifiedColor.field0_0x0 +
   8) = uVar9;
  TVar17.Value = (param_1->FloatingTextData).TextBrush.OutlineSettings.RoundingType.Value;
  bVar18 = (param_1->FloatingTextData).TextBrush.OutlineSettings.bUseBrushTransparency;
  uVar19 = *(undefined6 *)&(param_1->FloatingTextData).TextBrush.OutlineSettings.field_0x3a;
  *(undefined8 *)&(this->FloatingTextData).TextBrush.OutlineSettings.Color.ColorUseRule =
       *(undefined8 *)&(param_1->FloatingTextData).TextBrush.OutlineSettings.Color.ColorUseRule;
  (this->FloatingTextData).TextBrush.OutlineSettings.RoundingType =
       (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar17.Value;
  (this->FloatingTextData).TextBrush.OutlineSettings.bUseBrushTransparency = bVar18;
  *(undefined6 *)&(this->FloatingTextData).TextBrush.OutlineSettings.field_0x3a = uVar19;
  TVar11 = (param_1->FloatingTextData).TextBrush.UVRegion.Max.field0_0x0;
  (this->FloatingTextData).TextBrush.UVRegion.Min.field0_0x0 =
       (param_1->FloatingTextData).TextBrush.UVRegion.Min.field0_0x0;
  (this->FloatingTextData).TextBrush.UVRegion.Max.field0_0x0 = TVar11;
  uVar20 = *(undefined3 *)&(param_1->FloatingTextData).TextBrush.UVRegion.field_0x11;
  (this->FloatingTextData).TextBrush.UVRegion.bIsValid =
       (param_1->FloatingTextData).TextBrush.UVRegion.bIsValid;
  *(undefined3 *)&(this->FloatingTextData).TextBrush.UVRegion.field_0x11 = uVar20;
  uVar4 = (this->FloatingTextData).TextBrush.field_0x94;
  bVar21 = ((this->FloatingTextData).TextBrush.bIsDynamicallyLoaded ^
           (param_1->FloatingTextData).TextBrush.bIsDynamicallyLoaded) & 1 ^ uVar4;
  (this->FloatingTextData).TextBrush.field_0x94 = bVar21;
  bVar21 = (bVar21 ^ (param_1->FloatingTextData).TextBrush.field_0x94) & 2 ^ bVar21;
  (this->FloatingTextData).TextBrush.field_0x94 = bVar21;
  (this->FloatingTextData).TextBrush.field_0x94 =
       (bVar21 ^ (param_1->FloatingTextData).TextBrush.field_0x94) & 4 ^ bVar21;
  (this->FloatingTextData).TextBrush.ResourceHandle.Data.Object =
       (param_1->FloatingTextData).TextBrush.ResourceHandle.Data.Object;
  pTVar7 = (param_1->FloatingTextData).TextBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->FloatingTextData).TextBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController =
       pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &(this->FloatingTextData).AnimationSequenceList;
  (this->FloatingTextData).TextBrush.ResourceName =
       (param_1->FloatingTextData).TextBrush.ResourceName;
  (this->FloatingTextData).TextBrushID = (param_1->FloatingTextData).TextBrushID;
  piVar1 = &(this->FloatingTextData).AnimationSequenceList.ArrayMax;
  uVar9 = *(undefined8 *)((longlong)&(param_1->FloatingTextData).TextEffectColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FloatingTextData).TextEffectColor.field0_0x0 =
       *(undefined8 *)&(param_1->FloatingTextData).TextEffectColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->FloatingTextData).TextEffectColor.field0_0x0 + 8) = uVar9;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->FloatingTextData).AnimationSequenceList.ArrayNum;
  pFVar8 = (param_1->FloatingTextData).AnimationSequenceList.AllocatorInstance.Data;
  (this->FloatingTextData).AnimationSequenceList.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar5 << 3);
  }
  dVar10 = (param_1->FloatingTextScreenPosition).field0_0x0._s_0.Y;
  pTVar2 = &(this->NumberData).AnimationSequenceList;
  (this->FloatingTextScreenPosition).field0_0x0._s_0.X =
       (param_1->FloatingTextScreenPosition).field0_0x0._s_0.X;
  (this->FloatingTextScreenPosition).field0_0x0._s_0.Y = dVar10;
  this->TargetEntityID = param_1->TargetEntityID;
  (this->NumberData).FloatingTextWindowID = (param_1->NumberData).FloatingTextWindowID;
  (this->NumberData).NumberFontType = (param_1->NumberData).NumberFontType;
  piVar1 = &(this->NumberData).AnimationSequenceList.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->NumberData).AnimationSequenceList.ArrayNum;
  pFVar8 = (param_1->NumberData).AnimationSequenceList.AllocatorInstance.Data;
  (this->NumberData).AnimationSequenceList.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar5 << 3);
  }
  pTVar3 = &(this->NumberData).IconIDs;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NumberData).IconIDs.ArrayMax;
  iVar5 = (param_1->NumberData).IconIDs.ArrayNum;
  pFVar8 = (param_1->NumberData).IconIDs.AllocatorInstance.Data;
  (this->NumberData).IconIDs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar5 << 2);
  }
  this->NumberValue = param_1->NumberValue;
  this->AbnormalType = param_1->AbnormalType;
  return this;
}

// FDS_FloatingTextInfo @ 14b499ef0

FDS_FloatingTextInfo * __thiscall
FDS_FloatingTextInfo::FDS_FloatingTextInfo(FDS_FloatingTextInfo *this)

{
  TVector2<double> TVar1;
  
  memset(&(this->FloatingTextData).field_0x4,0,0xec);
  (this->FloatingTextData).FloatingTextWindowID = None;
  FSlateBrush::FSlateBrush(&(this->FloatingTextData).TextBrush);
  (this->FloatingTextData).TextBrushID = 0;
  (this->FloatingTextData).TextEffectColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->FloatingTextData).AnimationSequenceList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FloatingTextData).AnimationSequenceList.ArrayNum = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->FloatingTextData).AnimationSequenceList.ArrayMax = 0;
  this->TargetEntityID = 0;
  (this->FloatingTextScreenPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined2 *)&(this->NumberData).field_0x5 = 0;
  (this->NumberData).field_0x7 = 0;
  (this->NumberData).FloatingTextWindowID = None;
  (this->NumberData).NumberFontType = None;
  (this->NumberData).AnimationSequenceList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberData).AnimationSequenceList.ArrayNum = 0;
  (this->NumberData).AnimationSequenceList.ArrayMax = 0;
  (this->NumberData).IconIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberData).IconIDs.ArrayNum = 0;
  (this->NumberData).IconIDs.ArrayMax = 0;
  this->NumberValue = 0;
  this->AbnormalType = None;
  return this;
}

// ~FDS_FloatingTextInfo @ 14b79b980

void __thiscall FDS_FloatingTextInfo::~FDS_FloatingTextInfo(FDS_FloatingTextInfo *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->NumberData).IconIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumberData).AnimationSequenceList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatingTextData).AnimationSequenceList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->FloatingTextData).TextBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->FloatingTextData).TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

