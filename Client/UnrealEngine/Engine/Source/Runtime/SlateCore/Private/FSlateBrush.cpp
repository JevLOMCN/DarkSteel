// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 15

// ~FSlateBrush @ 14242f260

void __thiscall FSlateBrush::~FSlateBrush(FSlateBrush *this)

{
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResourceHandle).Data.SharedReferenceCount.ReferenceController);
  return;
}

// StaticStruct @ 14252d880

UScriptStruct * __cdecl FSlateBrush::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateBrush.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSlateBrush.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateBrush,(UObject *)pUVar1,L"SlateBrush");
  }
  return Z_Registration_Info_UScriptStruct_FSlateBrush.OuterSingleton;
}

// FSlateBrush @ 1425451d0

FSlateBrush * __thiscall
FSlateBrush::FSlateBrush
          (FSlateBrush *this,Type param_1,FName param_2,FMargin *param_3,Type param_4,Type param_5,
          FDeprecateVector2DParameter *param_6,FLinearColor *param_7,UObject *param_8,bool param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FLinearColor FVar9;
  byte bVar10;
  FString *this_00;
  int iVar11;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  bVar4 = false;
  bVar3 = false;
  uVar1 = *(undefined8 *)&param_7->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
  (this->TintColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->TintColor).SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->TintColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->Tiling).Value = (undefined1)param_4;
  (this->ImageType).Value = (undefined1)param_5;
  (this->DrawAs).Value = (uchar)param_1;
  (this->Mirroring).Value = '\0';
  this->ImageSize = *(FDeprecateSlateVector2D *)param_6;
  fVar6 = param_3->Top;
  fVar7 = param_3->Right;
  fVar8 = param_3->Bottom;
  (this->Margin).Left = param_3->Left;
  (this->Margin).Top = fVar6;
  (this->Margin).Right = fVar7;
  (this->Margin).Bottom = fVar8;
  (this->ResourceObject).field0_0x0.DebugPtr = param_8;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_8);
  }
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W = 0.0;
  FVar9 = FLinearColor::Transparent;
  (this->OutlineSettings).Color.ColorUseRule = UseColor_Specified;
  (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  (this->OutlineSettings).Width = 0.0;
  (this->OutlineSettings).RoundingType = '\x01';
  (this->OutlineSettings).bUseBrushTransparency = false;
  (this->UVRegion).Min.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->UVRegion).Max.field0_0x0 = (TVector2<float>_u_0)0x0;
  *(undefined4 *)&(this->UVRegion).bIsValid = 0;
  this->bIsDynamicallyLoaded = '\0';
  this->field_0x94 = this->field_0x94 | param_9 | 4U;
  FSlateResourceHandle::FSlateResourceHandle(&this->ResourceHandle);
  this->ResourceName = local_res18;
  if (param_8 == (UObject *)0x0) {
    this_00 = ::FName::ToString(&local_res18,&local_18);
    ::FString::FString(&local_28,L"texture:/");
    iVar11 = local_28.Data.ArrayNum + -1;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
    }
    bVar4 = true;
    bVar3 = true;
    bVar10 = ::FString::StartsWith(this_00,(wchar_t *)FVar5.Data,iVar11,IgnoreCase);
    if (!(bool)bVar10) goto LAB_142545320;
  }
  bVar10 = 2;
LAB_142545320:
  this->bHasUObject_DEPRECATED = '\0';
  this->field_0x94 = this->field_0x94 | bVar10;
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FSlateBrush @ 142545380

FSlateBrush * __thiscall
FSlateBrush::FSlateBrush
          (FSlateBrush *this,Type param_1,FName param_2,FMargin *param_3,Type param_4,Type param_5,
          FDeprecateVector2DParameter *param_6,FSlateColor *param_7,UObject *param_8,bool param_9)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FLinearColor FVar10;
  byte bVar11;
  FString *this_00;
  int iVar12;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  bVar3 = false;
  bVar2 = false;
  uVar1 = *(undefined8 *)((longlong)&(param_7->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(this->TintColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_7->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->TintColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = param_7->ColorTableId;
  uVar6 = *(undefined2 *)&param_7->field_0x12;
  (this->TintColor).ColorUseRule = param_7->ColorUseRule;
  (this->TintColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->TintColor).field_0x12 = uVar6;
  (this->Tiling).Value = (undefined1)param_4;
  (this->ImageType).Value = (undefined1)param_5;
  (this->DrawAs).Value = (uchar)param_1;
  (this->Mirroring).Value = '\0';
  this->ImageSize = *(FDeprecateSlateVector2D *)param_6;
  fVar7 = param_3->Top;
  fVar8 = param_3->Right;
  fVar9 = param_3->Bottom;
  (this->Margin).Left = param_3->Left;
  (this->Margin).Top = fVar7;
  (this->Margin).Right = fVar8;
  (this->Margin).Bottom = fVar9;
  (this->ResourceObject).field0_0x0.DebugPtr = param_8;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_8);
  }
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W = 0.0;
  FVar10 = FLinearColor::Transparent;
  (this->OutlineSettings).Color.ColorUseRule = UseColor_Specified;
  (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  (this->OutlineSettings).Width = 0.0;
  (this->OutlineSettings).RoundingType = '\x01';
  (this->OutlineSettings).bUseBrushTransparency = false;
  (this->UVRegion).Min.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->UVRegion).Max.field0_0x0 = (TVector2<float>_u_0)0x0;
  *(undefined4 *)&(this->UVRegion).bIsValid = 0;
  this->bIsDynamicallyLoaded = '\0';
  this->field_0x94 = this->field_0x94 | param_9 | 4U;
  FSlateResourceHandle::FSlateResourceHandle(&this->ResourceHandle);
  this->ResourceName = local_res18;
  if (param_8 == (UObject *)0x0) {
    this_00 = ::FName::ToString(&local_res18,&local_18);
    ::FString::FString(&local_28,L"texture:/");
    iVar12 = local_28.Data.ArrayNum + -1;
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar12 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = true;
    bVar2 = true;
    bVar11 = ::FString::StartsWith(this_00,(wchar_t *)FVar4.Data,iVar12,IgnoreCase);
    if (!(bool)bVar11) goto LAB_1425454d2;
  }
  bVar11 = 2;
LAB_1425454d2:
  this->bHasUObject_DEPRECATED = '\0';
  this->field_0x94 = this->field_0x94 | bVar11;
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FSlateBrush @ 142545530

FSlateBrush * __thiscall
FSlateBrush::FSlateBrush
          (FSlateBrush *this,Type param_1,FName param_2,FMargin *param_3,Type param_4,Type param_5,
          FDeprecateVector2DParameter *param_6,TSharedRef<FLinearColor,1> *param_7,UObject *param_8,
          bool param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FLinearColor FVar9;
  byte bVar10;
  FString *this_00;
  int iVar11;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  bVar4 = false;
  bVar3 = false;
  uVar1 = *(undefined8 *)&param_7->Object->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_7->Object->field0_0x0 + 8);
  (this->TintColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->TintColor).SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->TintColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->Tiling).Value = (undefined1)param_4;
  (this->ImageType).Value = (undefined1)param_5;
  (this->DrawAs).Value = (uchar)param_1;
  (this->Mirroring).Value = '\0';
  this->ImageSize = *(FDeprecateSlateVector2D *)param_6;
  fVar6 = param_3->Top;
  fVar7 = param_3->Right;
  fVar8 = param_3->Bottom;
  (this->Margin).Left = param_3->Left;
  (this->Margin).Top = fVar6;
  (this->Margin).Right = fVar7;
  (this->Margin).Bottom = fVar8;
  (this->ResourceObject).field0_0x0.DebugPtr = param_8;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_8);
  }
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W = 0.0;
  FVar9 = FLinearColor::Transparent;
  (this->OutlineSettings).Color.ColorUseRule = UseColor_Specified;
  (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  (this->OutlineSettings).Width = 0.0;
  (this->OutlineSettings).RoundingType = '\x01';
  (this->OutlineSettings).bUseBrushTransparency = false;
  (this->UVRegion).Min.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->UVRegion).Max.field0_0x0 = (TVector2<float>_u_0)0x0;
  *(undefined4 *)&(this->UVRegion).bIsValid = 0;
  this->bIsDynamicallyLoaded = '\0';
  this->field_0x94 = this->field_0x94 | param_9 | 4U;
  FSlateResourceHandle::FSlateResourceHandle(&this->ResourceHandle);
  this->ResourceName = local_res18;
  if (param_8 == (UObject *)0x0) {
    this_00 = ::FName::ToString(&local_res18,&local_18);
    ::FString::FString(&local_28,L"texture:/");
    iVar11 = local_28.Data.ArrayNum + -1;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
    }
    bVar4 = true;
    bVar3 = true;
    bVar10 = ::FString::StartsWith(this_00,(wchar_t *)FVar5.Data,iVar11,IgnoreCase);
    if (!(bool)bVar10) goto LAB_142545684;
  }
  bVar10 = 2;
LAB_142545684:
  this->bHasUObject_DEPRECATED = '\0';
  this->field_0x94 = this->field_0x94 | bVar10;
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FSlateBrush @ 1425456e0

FSlateBrush * __thiscall FSlateBrush::FSlateBrush(FSlateBrush *this,FSlateBrush *param_1)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  double dVar4;
  TVector2<float>_u_0 TVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar11;
  bool bVar12;
  undefined6 uVar13;
  undefined3 uVar14;
  byte bVar15;
  
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  uVar3 = *(undefined8 *)((longlong)&(param_1->TintColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TintColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TintColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TintColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar6 = (param_1->TintColor).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->TintColor).field_0x12;
  (this->TintColor).ColorUseRule = (param_1->TintColor).ColorUseRule;
  (this->TintColor).ColorTableId = EVar6;
  *(undefined2 *)&(this->TintColor).field_0x12 = uVar7;
  (this->DrawAs).Value = (param_1->DrawAs).Value;
  (this->Tiling).Value = (param_1->Tiling).Value;
  (this->Mirroring).Value = (param_1->Mirroring).Value;
  (this->ImageType).Value = (param_1->ImageType).Value;
  this->ImageSize = param_1->ImageSize;
  fVar8 = (param_1->Margin).Top;
  fVar9 = (param_1->Margin).Right;
  fVar10 = (param_1->Margin).Bottom;
  (this->Margin).Left = (param_1->Margin).Left;
  (this->Margin).Top = fVar8;
  (this->Margin).Right = fVar9;
  (this->Margin).Bottom = fVar10;
  pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr;
  (this->ResourceObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  dVar4 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W = dVar4;
  uVar3 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->OutlineSettings).Color.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8) = uVar3;
  TVar11.Value = (param_1->OutlineSettings).RoundingType.Value;
  bVar12 = (param_1->OutlineSettings).bUseBrushTransparency;
  uVar13 = *(undefined6 *)&(param_1->OutlineSettings).field_0x3a;
  *(undefined8 *)&(this->OutlineSettings).Color.ColorUseRule =
       *(undefined8 *)&(param_1->OutlineSettings).Color.ColorUseRule;
  (this->OutlineSettings).RoundingType = (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar11.Value;
  (this->OutlineSettings).bUseBrushTransparency = bVar12;
  *(undefined6 *)&(this->OutlineSettings).field_0x3a = uVar13;
  TVar5 = (param_1->UVRegion).Max.field0_0x0;
  (this->UVRegion).Min.field0_0x0 = (param_1->UVRegion).Min.field0_0x0;
  (this->UVRegion).Max.field0_0x0 = TVar5;
  uVar14 = *(undefined3 *)&(param_1->UVRegion).field_0x11;
  (this->UVRegion).bIsValid = (param_1->UVRegion).bIsValid;
  *(undefined3 *)&(this->UVRegion).field_0x11 = uVar14;
  bVar15 = (this->bIsDynamicallyLoaded ^ param_1->bIsDynamicallyLoaded) & 1 ^ this->field_0x94;
  this->field_0x94 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x94) & 2 ^ bVar15;
  this->field_0x94 = bVar15;
  this->field_0x94 = (bVar15 ^ param_1->field_0x94) & 4 ^ bVar15;
  (this->ResourceHandle).Data.Object = (param_1->ResourceHandle).Data.Object;
  pTVar2 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  (this->ResourceHandle).Data.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ResourceName = param_1->ResourceName;
  return this;
}

// FSlateBrush @ 142545820

FSlateBrush * __thiscall FSlateBrush::FSlateBrush(FSlateBrush *this)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  FVar2 = FLinearColor::White;
  (this->TintColor).ColorUseRule = UseColor_Specified;
  (this->TintColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->DrawAs = '\x03';
  this->Tiling = '\0';
  this->Mirroring = '\0';
  this->ImageType = '\0';
  *(undefined4 *)&this->ImageSize = 0x42000000;
  *(undefined8 *)&(this->ImageSize).field_0x4 = 0x42000000;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  (this->ResourceObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z = 0.0;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W = 0.0;
  FVar2 = FLinearColor::Transparent;
  (this->OutlineSettings).Color.ColorUseRule = UseColor_Specified;
  (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->OutlineSettings).Width = 0.0;
  (this->OutlineSettings).RoundingType = '\x01';
  (this->OutlineSettings).bUseBrushTransparency = false;
  (this->UVRegion).Min.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->UVRegion).Max.field0_0x0 = (TVector2<float>_u_0)0x0;
  *(undefined4 *)&(this->UVRegion).bIsValid = 0;
  this->bIsDynamicallyLoaded = '\0';
  this->bHasUObject_DEPRECATED = '\0';
  this->bIsSet = '\x01';
  FSlateResourceHandle::FSlateResourceHandle(&this->ResourceHandle);
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
  return this;
}

// operator= @ 14254de90

FSlateBrush * __thiscall FSlateBrush::operator=(FSlateBrush *this,FSlateBrush *param_1)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateSharedHandleData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  double dVar6;
  TVector2<float>_u_0 TVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar13;
  bool bVar14;
  undefined6 uVar15;
  undefined3 uVar16;
  byte bVar17;
  
  uVar5 = *(undefined8 *)((longlong)&(param_1->TintColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TintColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TintColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TintColor).SpecifiedColor.field0_0x0 + 8) = uVar5;
  EVar8 = (param_1->TintColor).ColorTableId;
  uVar9 = *(undefined2 *)&(param_1->TintColor).field_0x12;
  (this->TintColor).ColorUseRule = (param_1->TintColor).ColorUseRule;
  (this->TintColor).ColorTableId = EVar8;
  *(undefined2 *)&(this->TintColor).field_0x12 = uVar9;
  (this->DrawAs).Value = (param_1->DrawAs).Value;
  (this->Tiling).Value = (param_1->Tiling).Value;
  (this->Mirroring).Value = (param_1->Mirroring).Value;
  (this->ImageType).Value = (param_1->ImageType).Value;
  this->ImageSize = param_1->ImageSize;
  fVar10 = (param_1->Margin).Top;
  fVar11 = (param_1->Margin).Right;
  fVar12 = (param_1->Margin).Bottom;
  (this->Margin).Left = (param_1->Margin).Left;
  (this->Margin).Top = fVar10;
  (this->Margin).Right = fVar11;
  (this->Margin).Bottom = fVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ResourceObject).field0_0x0 = (param_1->ResourceObject).field0_0x0;
  dVar6 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
  (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W = dVar6;
  uVar5 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->OutlineSettings).Color.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8) = uVar5;
  TVar13.Value = (param_1->OutlineSettings).RoundingType.Value;
  bVar14 = (param_1->OutlineSettings).bUseBrushTransparency;
  uVar15 = *(undefined6 *)&(param_1->OutlineSettings).field_0x3a;
  *(undefined8 *)&(this->OutlineSettings).Color.ColorUseRule =
       *(undefined8 *)&(param_1->OutlineSettings).Color.ColorUseRule;
  (this->OutlineSettings).RoundingType = (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar13.Value;
  (this->OutlineSettings).bUseBrushTransparency = bVar14;
  *(undefined6 *)&(this->OutlineSettings).field_0x3a = uVar15;
  TVar7 = (param_1->UVRegion).Max.field0_0x0;
  (this->UVRegion).Min.field0_0x0 = (param_1->UVRegion).Min.field0_0x0;
  (this->UVRegion).Max.field0_0x0 = TVar7;
  uVar16 = *(undefined3 *)&(param_1->UVRegion).field_0x11;
  (this->UVRegion).bIsValid = (param_1->UVRegion).bIsValid;
  *(undefined3 *)&(this->UVRegion).field_0x11 = uVar16;
  bVar17 = (this->bIsDynamicallyLoaded ^ param_1->bIsDynamicallyLoaded) & 1 ^ this->field_0x94;
  this->field_0x94 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x94) & 2 ^ bVar17;
  this->field_0x94 = bVar17;
  this->field_0x94 = (bVar17 ^ param_1->field_0x94) & 4 ^ bVar17;
  pTVar2 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->ResourceHandle).Data.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  (this->ResourceHandle).Data.Object = pFVar3;
  (this->ResourceHandle).Data.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->ResourceName = param_1->ResourceName;
  return this;
}

// CanRenderResourceObject @ 1425686c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateBrush::CanRenderResourceObject(FSlateBrush *this,UObject *param_1)

{
  FSlateRenderer *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((param_1 != (UObject *)0x0) &&
     (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object;
                    /* WARNING: Could not recover jumptable at 0x000142568754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1);
    return (bool)uVar4;
  }
  return true;
}

// GetRenderingResource @ 142582f50

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateResourceHandle * __thiscall FSlateBrush::GetRenderingResource(FSlateBrush *this)

{
  if (((this->ImageType).Value == '\x03') && (2 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  UpdateRenderingResource
            (this,(TVector2<float>)*(TVector2<float>_u_0 *)&this->ImageSize,__real_3f800000);
  return &this->ResourceHandle;
}

// SetResourceObject @ 142591d80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateBrush::SetResourceObject(FSlateBrush *this,UObject *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSlateResourceHandle *pFVar5;
  FSlateResourceHandle local_18;
  
  bVar3 = IsThreadSafeForSlateRendering();
  if (((bVar3) && (param_1 != (UObject *)0x0)) &&
     (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)) {
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBaseApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                           ,0x22a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)((((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object)
                         ->_padding_ + 0x90))();
    if (cVar4 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3437263933306568508>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateBrush.cpp"
                         ,0xc4,
                         "!IsThreadSafeForSlateRendering() || CanRenderResourceObject(InResourceObject)"
                        );
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar3 = param_1 == (UObject *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_1;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    (this->ResourceObject).field0_0x0.DebugPtr = param_1;
    pFVar5 = FSlateResourceHandle::FSlateResourceHandle(&local_18);
    if (&this->ResourceHandle != pFVar5) {
      (this->ResourceHandle).Data.Object = (pFVar5->Data).Object;
      (pFVar5->Data).Object = (FSlateSharedHandleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ResourceHandle).Data.SharedReferenceCount,
                 &(pFVar5->Data).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UTextureIdentifier @ 1425a9a10

FString * __cdecl FSlateBrush::UTextureIdentifier(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"texture:/");
  return __return_storage_ptr__;
}

// UnlinkColors @ 1425aa780

void __thiscall FSlateBrush::UnlinkColors(FSlateBrush *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *this_00;
  
  if ((this->TintColor).ColorUseRule == UseColor_ColorTable) {
    this_00 = USlateThemeManager::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    puVar1 = (undefined8 *)
             (&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->TintColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->TintColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TintColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->TintColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  return;
}

// UpdateRenderingResource @ 1425ab6a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateBrush::UpdateRenderingResource(FSlateBrush *this,TVector2<float> param_1,float param_2)

{
  FSlateResourceHandle *this_00;
  FSlateRenderer *pFVar1;
  bool bVar2;
  char cVar3;
  FSlateShaderResourceProxy *pFVar4;
  FSlateApplicationBase *pFVar5;
  FSlateResourceHandle *pFVar6;
  undefined8 *puVar7;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if ((this->DrawAs).Value == '\0') {
    return;
  }
  if ((this->ResourceName == (FName)0x0) &&
     ((this->ResourceObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    return;
  }
  this_00 = &this->ResourceHandle;
  bVar2 = FSlateResourceHandle::IsValid(this_00);
  if ((bVar2) && ((this->ImageType).Value != '\x03')) {
    bVar2 = FSlateResourceHandle::IsValid(this_00);
    if (!bVar2) {
      return;
    }
    pFVar4 = FSlateResourceHandle::GetResourceProxy(this_00);
    if (pFVar4->Resource == (FSlateShaderResource *)0x0) {
      return;
    }
    cVar3 = (**(code **)(pFVar4->Resource->_padding_ + 0x18))();
    if (cVar3 != '\0') {
      return;
    }
    pFVar5 = FSlateApplicationBase::Get();
    pFVar1 = (pFVar5->Renderer).Object;
    pFVar6 = (FSlateResourceHandle *)
             (**(code **)(pFVar1->_padding_ + 0x88))
                       (pFVar1,local_28,this,param_1.field0_0x0,param_2);
    FSlateResourceHandle::operator=(this_00,pFVar6);
  }
  else {
    pFVar5 = FSlateApplicationBase::Get();
    pFVar1 = (pFVar5->Renderer).Object;
    puVar7 = (undefined8 *)
             (**(code **)(pFVar1->_padding_ + 0x88))
                       (pFVar1,local_28,this,param_1.field0_0x0,param_2);
    if (this_00 != (FSlateResourceHandle *)puVar7) {
      (this_00->Data).Object = (FSlateSharedHandleData *)*puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ResourceHandle).Data.SharedReferenceCount,
                 (FSharedReferencer<1> *)(puVar7 + 1));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// GetTint @ 1425e3ad0

FLinearColor * __thiscall
FSlateBrush::GetTint(FSlateBrush *this,FLinearColor *__return_storage_ptr__,FWidgetStyle *param_1)

{
  ESlateColorStylingMode EVar1;
  undefined8 uVar2;
  FSlateColor *this_00;
  
  this_00 = &this->TintColor;
  EVar1 = (this->TintColor).ColorUseRule;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 != UseColor_ColorTable) {
      if ((EVar1 != UseColor_Foreground) && (EVar1 == UseColor_Foreground_Subdued)) {
        uVar2 = *(undefined8 *)((longlong)&(param_1->SubduedForeground).field0_0x0 + 8);
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             *(undefined8 *)&(param_1->SubduedForeground).field0_0x0;
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
        return __return_storage_ptr__;
      }
      uVar2 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(param_1->ForegroundColor).field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
      return __return_storage_ptr__;
    }
    this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
  }
  uVar2 = *(undefined8 *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this_00->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

