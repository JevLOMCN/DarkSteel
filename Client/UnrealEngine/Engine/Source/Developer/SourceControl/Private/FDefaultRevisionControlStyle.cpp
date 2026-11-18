// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 3

// FDefaultRevisionControlStyle @ 146afbdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDefaultRevisionControlStyle * __thiscall
FDefaultRevisionControlStyle::FDefaultRevisionControlStyle(FDefaultRevisionControlStyle *this)

{
  FSlateColor *pFVar1;
  FSlateColor *pFVar2;
  byte bVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  FColor FVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FSlateImageBrush *pFVar13;
  FString *pFVar14;
  FName *pFVar15;
  FSlateImageBrush *pFVar16;
  uint uVar17;
  FSlateImageBrush *pFVar18;
  bool bVar19;
  undefined1 local_res8 [16];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint local_58;
  byte *pbVar12;
  
  local_res8._0_8_ = local_res8._0_8_ & 0xffffffff00000000;
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,&StyleName);
  pFVar1 = &this->StatusCheckedOutColor;
  pFVar2 = &this->StatusCheckedOutByOtherUserColor;
  this->_padding_ = (longlong)&___7FDefaultRevisionControlStyle__6B_;
  *(undefined8 *)&(this->BranchedColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BranchedColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BranchedColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->BranchedColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(pFVar1->SpecifiedColor).field0_0x0 = 0x3f800000;
  (this->StatusCheckedOutColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->StatusCheckedOutColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->StatusCheckedOutColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(pFVar2->SpecifiedColor).field0_0x0 = 0x3f800000;
  (this->StatusCheckedOutByOtherUserColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->StatusCheckedOutByOtherUserColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->StatusCheckedOutByOtherUserColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->StatusNotAtHeadRevisionColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->SnapshotHistoryAdded).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SnapshotHistoryAdded).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SnapshotHistoryAdded).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->SnapshotHistoryAdded).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->SnapshotHistoryModified).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SnapshotHistoryModified).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SnapshotHistoryModified).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->SnapshotHistoryModified).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->SnapshotHistoryRemoved).ColorUseRule = UseColor_Specified;
  pTVar11 = &FPaths::EngineContentDir((FString *)&local_68)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,pTVar11,7 - (uint)(pTVar11->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_78,L"Slate",5);
  FSlateStyleSet::SetCoreContentRoot((FSlateStyleSet *)this,(FString *)&local_78);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)_local_68);
  }
  ::FString::FString((FString *)&local_78,"#00E4A0");
  FVar10 = FColor::FromHex((FString *)local_res8);
  fVar4 = __real_3b808081;
  pbVar12 = (byte *)CONCAT44(extraout_var,FVar10.field0_0x0);
  local_58 = local_58 & 0xffffff00;
  local_68 = FLinearColor::sRGBToLinearTable[pbVar12[2]];
  fStack_64 = FLinearColor::sRGBToLinearTable[pbVar12[1]];
  fStack_60 = FLinearColor::sRGBToLinearTable[*pbVar12];
  fStack_5c = (float)pbVar12[3] * __real_3b808081;
  (this->BranchedColor).SpecifiedColor.field0_0x0._s_0.R = local_68;
  (this->BranchedColor).SpecifiedColor.field0_0x0._s_0.G = fStack_64;
  (this->BranchedColor).SpecifiedColor.field0_0x0._s_0.B = fStack_60;
  (this->BranchedColor).SpecifiedColor.field0_0x0._s_0.A = fStack_5c;
  (this->BranchedColor).ColorUseRule = (undefined1)local_58;
  (this->BranchedColor).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->BranchedColor).field_0x12 = local_58._2_2_;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_78,"#1FE44B");
  FVar10 = FColor::FromHex((FString *)local_res8);
  pbVar12 = (byte *)CONCAT44(extraout_var_00,FVar10.field0_0x0);
  local_58 = local_58 & 0xffffff00;
  local_68 = FLinearColor::sRGBToLinearTable[pbVar12[2]];
  fStack_64 = FLinearColor::sRGBToLinearTable[pbVar12[1]];
  bVar3 = pbVar12[3];
  fStack_60 = FLinearColor::sRGBToLinearTable[*pbVar12];
  (pFVar1->SpecifiedColor).field0_0x0._s_0.R = local_68;
  (this->StatusCheckedOutColor).SpecifiedColor.field0_0x0._s_0.G = fStack_64;
  (this->StatusCheckedOutColor).SpecifiedColor.field0_0x0._s_0.B = fStack_60;
  (this->StatusCheckedOutColor).SpecifiedColor.field0_0x0._s_0.A = (float)bVar3 * fVar4;
  (this->StatusCheckedOutColor).ColorUseRule = (undefined1)local_58;
  (this->StatusCheckedOutColor).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->StatusCheckedOutColor).field_0x12 = local_58._2_2_;
  fStack_5c = (float)bVar3 * fVar4;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_78,"#EF3535");
  FVar10 = FColor::FromHex((FString *)local_res8);
  pbVar12 = (byte *)CONCAT44(extraout_var_01,FVar10.field0_0x0);
  local_58 = local_58 & 0xffffff00;
  local_68 = FLinearColor::sRGBToLinearTable[pbVar12[2]];
  fStack_64 = FLinearColor::sRGBToLinearTable[pbVar12[1]];
  bVar3 = pbVar12[3];
  fStack_60 = FLinearColor::sRGBToLinearTable[*pbVar12];
  (pFVar2->SpecifiedColor).field0_0x0._s_0.R = local_68;
  (this->StatusCheckedOutByOtherUserColor).SpecifiedColor.field0_0x0._s_0.G = fStack_64;
  (this->StatusCheckedOutByOtherUserColor).SpecifiedColor.field0_0x0._s_0.B = fStack_60;
  (this->StatusCheckedOutByOtherUserColor).SpecifiedColor.field0_0x0._s_0.A = (float)bVar3 * fVar4;
  (this->StatusCheckedOutByOtherUserColor).ColorUseRule = (undefined1)local_58;
  (this->StatusCheckedOutByOtherUserColor).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->StatusCheckedOutByOtherUserColor).field_0x12 = local_58._2_2_;
  fStack_5c = (float)bVar3 * fVar4;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_78,"#E1FF3D");
  FVar10 = FColor::FromHex((FString *)local_res8);
  pbVar12 = (byte *)CONCAT44(extraout_var_02,FVar10.field0_0x0);
  local_58 = local_58 & 0xffffff00;
  local_68 = FLinearColor::sRGBToLinearTable[pbVar12[2]];
  fStack_64 = FLinearColor::sRGBToLinearTable[pbVar12[1]];
  bVar3 = pbVar12[3];
  fStack_60 = FLinearColor::sRGBToLinearTable[*pbVar12];
  (this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0._s_0.R = local_68;
  (this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0._s_0.G = fStack_64;
  (this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0._s_0.B = fStack_60;
  (this->StatusNotAtHeadRevisionColor).SpecifiedColor.field0_0x0._s_0.A = (float)bVar3 * fVar4;
  (this->StatusNotAtHeadRevisionColor).ColorUseRule = (undefined1)local_58;
  (this->StatusNotAtHeadRevisionColor).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->StatusNotAtHeadRevisionColor).field_0x12 = local_58._2_2_;
  fStack_5c = (float)bVar3 * fVar4;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  (this->SnapshotHistoryAdded).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentBlue.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::AccentBlue.ColorTableId;
  uVar9 = FStyleColors::AccentBlue._18_2_;
  (this->SnapshotHistoryAdded).ColorUseRule = FStyleColors::AccentBlue.ColorUseRule;
  (this->SnapshotHistoryAdded).ColorTableId = EVar8;
  *(undefined2 *)&(this->SnapshotHistoryAdded).field_0x12 = uVar9;
  ::FString::FString((FString *)&local_78,"#F0AD4E");
  FVar10 = FColor::FromHex((FString *)local_res8);
  pbVar12 = (byte *)CONCAT44(extraout_var_03,FVar10.field0_0x0);
  local_58 = local_58 & 0xffffff00;
  local_68 = FLinearColor::sRGBToLinearTable[pbVar12[2]];
  fStack_64 = FLinearColor::sRGBToLinearTable[pbVar12[1]];
  bVar3 = pbVar12[3];
  fStack_60 = FLinearColor::sRGBToLinearTable[*pbVar12];
  (this->SnapshotHistoryModified).SpecifiedColor.field0_0x0._s_0.R = local_68;
  (this->SnapshotHistoryModified).SpecifiedColor.field0_0x0._s_0.G = fStack_64;
  (this->SnapshotHistoryModified).SpecifiedColor.field0_0x0._s_0.B = fStack_60;
  (this->SnapshotHistoryModified).SpecifiedColor.field0_0x0._s_0.A = (float)bVar3 * fVar4;
  (this->SnapshotHistoryModified).ColorUseRule = (undefined1)local_58;
  (this->SnapshotHistoryModified).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->SnapshotHistoryModified).field_0x12 = local_58._2_2_;
  fStack_5c = (float)bVar3 * fVar4;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_78,"#CD3642");
  FVar10 = FColor::FromHex((FString *)local_res8);
  pbVar12 = (byte *)CONCAT44(extraout_var_04,FVar10.field0_0x0);
  local_58 = local_58 & 0xffffff00;
  local_68 = FLinearColor::sRGBToLinearTable[pbVar12[2]];
  fStack_64 = FLinearColor::sRGBToLinearTable[pbVar12[1]];
  bVar3 = pbVar12[3];
  fStack_60 = FLinearColor::sRGBToLinearTable[*pbVar12];
  (this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0._s_0.R = local_68;
  (this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0._s_0.G = fStack_64;
  (this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0._s_0.B = fStack_60;
  (this->SnapshotHistoryRemoved).SpecifiedColor.field0_0x0._s_0.A = (float)bVar3 * fVar4;
  (this->SnapshotHistoryRemoved).ColorUseRule = (undefined1)local_58;
  (this->SnapshotHistoryRemoved).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->SnapshotHistoryRemoved).field_0x12 = local_58._2_2_;
  fStack_5c = (float)bVar3 * fVar4;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar6 = _UNK_15076b1f8;
  pFVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  bVar19 = pFVar13 == (FSlateImageBrush *)0x0;
  if (bVar19) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = ___xmm_3f8000003f8000003f8000003f800000;
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/Status/RevisionControl",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  bVar19 = !bVar19;
  uVar17 = (uint)bVar19;
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Icon");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((bVar19) && (uVar17 = 0, local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 2;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/Status/RevisionControlBadgeConnected",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Success,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Icon.ConnectedBadge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 2) != 0) &&
     (uVar17 = uVar17 & 0xfffffffd,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 4;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/Status/RevisionControlBadgeWarning",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Icon.WarningBadge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 4) != 0) &&
     (uVar17 = uVar17 & 0xfffffffb,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 8;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Sync",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Sync");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 8) != 0) &&
     (uVar17 = uVar17 & 0xfffffff7,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x10;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/check-circle",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.CheckOut");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 0x10) != 0) &&
     (uVar17 = uVar17 & 0xffffffef,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x20;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_SyncAndCheckOut",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.SyncAndCheckOut");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 0x20) != 0) &&
     (uVar17 = uVar17 & 0xffffffdf,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x40;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/edit",L".svg")
    ;
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.MakeWritable");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 0x40) != 0) &&
     (uVar17 = uVar17 & 0xffffffbf,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x80;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_MarkedForAdd",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Add");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((char)uVar17 < '\0') &&
     (uVar17 = uVar17 & 0xffffff7f,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x100;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_CheckIn",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Submit");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 8 != 0) &&
     (uVar17 = uVar17 & 0xfffffeff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x200;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/Status/RevisionControl",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Connect");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 9 != 0) &&
     (uVar17 = uVar17 & 0xfffffdff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x400;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/Recent",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.History");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 10 != 0) &&
     (uVar17 = uVar17 & 0xfffffbff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x800;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Diff",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Diff");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xb != 0) &&
     (uVar17 = uVar17 & 0xfffff7ff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x1000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/icon_SCC_Revert",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Revert");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xc != 0) &&
     (uVar17 = uVar17 & 0xffffefff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x2000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/Merge",L".svg"
                        );
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Merge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xd != 0) &&
     (uVar17 = uVar17 & 0xffffdfff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x4000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/Update",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Refresh");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xe != 0) &&
     (uVar17 = uVar17 & 0xffffbfff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x8000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/icon_SCC_Change_Source_Control_Settings",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.ChangeSettings");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xf != 0) &&
     (uVar17 = uVar17 & 0xffff7fff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x10000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Rewind",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Actions.Rewind");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x10 != 0) &&
     (uVar17 = uVar17 & 0xfffeffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x20000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/lock",L".svg")
    ;
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Locked");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x11 != 0) &&
     (uVar17 = uVar17 & 0xfffdffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x40000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/lock-unlocked"
                         ,L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Unlocked");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x12 != 0) &&
     (uVar17 = uVar17 & 0xfffbffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x80000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/SCC_Shelved",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Shelved");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x13 != 0) &&
     (uVar17 = uVar17 & 0xfff7ffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x100000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/SCC_CheckedOut",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,pFVar1,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar18 = (FSlateImageBrush *)0x0;
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.CheckedOut");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x14 != 0) &&
     (uVar17 = uVar17 & 0xffefffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x200000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_MarkedForAdd",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::AccentBlue,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.OpenForAdd");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x15 != 0) &&
     (uVar17 = uVar17 & 0xffdfffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x400000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/SCC_MarkedForDelete",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Error,NoTile
               ,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar18 = pFVar13;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.MarkedForDelete");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar18);
  if ((uVar17 >> 0x16 != 0) &&
     (uVar17 = uVar17 & 0xffbfffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x800000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_CheckedOther",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,pFVar2,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar18 = (FSlateImageBrush *)0x0;
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.CheckedOutByOtherUser");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x17 != 0) &&
     (uVar17 = uVar17 & 0xff7fffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x1000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_CheckedOtherBadge",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::AccentBlue,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.CheckedOutByOtherUserBadge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x18 != 0) &&
     (uVar17 = uVar17 & 0xfeffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x2000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_CheckedBranch",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&this->BranchedColor,NoTile
               ,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),
                           "RevisionControl.CheckedOutByOtherUserOtherBranch");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x19 != 0) &&
     (uVar17 = uVar17 & 0xfdffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x4000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_CheckedOtherBadge",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),
                           "RevisionControl.CheckedOutByOtherUserOtherBranchBadge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1a != 0) &&
     (uVar17 = uVar17 & 0xfbffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x8000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/SCC_ModifiedOtherBranch",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&this->BranchedColor,NoTile
               ,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ModifiedOtherBranch");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1b != 0) &&
     (uVar17 = uVar17 & 0xf7ffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x10000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_BranchModifiedBadge",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ModifiedBadge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1c != 0) &&
     (uVar17 = uVar17 & 0xefffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x20000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_ModifiedLocally",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Foreground,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ModifiedLocally");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1d != 0) &&
     (uVar17 = uVar17 & 0xdfffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x40000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_NewerVersion",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,
               &this->StatusNotAtHeadRevisionColor,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar18 = pFVar13;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.NotAtHeadRevision");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar18);
  if ((uVar17 >> 0x1e != 0) &&
     (uVar17 = uVar17 & 0xbfffffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 == (FSlateImageBrush *)0x0) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x80000000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/SCC_NotInDepot",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.NotInDepot");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((int)uVar17 < 0) && ((FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0))
  {
    FMemory::Free((void *)_local_68);
  }
  pFVar13 = ::operator_new(0xb0);
  bVar19 = pFVar13 == (FSlateImageBrush *)0x0;
  if (bVar19) {
    pFVar13 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/SCC_Branched",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,&this->BranchedColor,NoTile
               ,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar18 = (FSlateImageBrush *)0x0;
  bVar19 = !bVar19;
  uVar17 = (uint)bVar19;
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Branched");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((bVar19) &&
     (uVar17 = 0, (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 2;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_Conflicted",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Conflicted");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 2) != 0) &&
     (uVar17 = uVar17 & 0xfffffffd,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 4;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_Merged",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::AccentPurple
               ,NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Merged");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 4) != 0) &&
     (uVar17 = uVar17 & 0xfffffffb,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 8;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,"Starship/Common/check-circle",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ChangelistsTab");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 8) != 0) &&
     (uVar17 = uVar17 & 0xfffffff7,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x10;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Conflicted",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ConflictResolutionTab");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 0x10) != 0) &&
     (uVar17 = uVar17 & 0xffffffef,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x20;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Rewind",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.SnapshotHistoryTab");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 0x20) != 0) &&
     (uVar17 = uVar17 & 0xffffffdf,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x40;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_StatusRemoteUpToDate",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.AtLatestRevision");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((uVar17 & 0x40) != 0) &&
     (uVar17 = uVar17 & 0xffffffbf,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x80;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_StatusRemoteDownload",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,
               &this->StatusNotAtHeadRevisionColor,NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.NotAtLatestRevision"
                          );
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((char)uVar17 < '\0') &&
     (uVar17 = uVar17 & 0xffffff7f,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x100;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_StatusLocalUpToDate",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.NoLocalChanges");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 8 != 0) &&
     (uVar17 = uVar17 & 0xfffffeff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x200;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_StatusLocalUpload",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::AccentBlue,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.HasLocalChanges");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 9 != 0) &&
     (uVar17 = uVar17 & 0xfffffdff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x400;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_Conflicted",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.Conflict");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 10 != 0) &&
     (uVar17 = uVar17 & 0xfffffbff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    uVar17 = uVar17 | 0x800;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/Common/alert-triangle",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&FStyleColors::Warning,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.ConflictUpcoming");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xb != 0) &&
     (uVar17 = uVar17 & 0xfffff7ff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x1000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Promote",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.StatusBar.Promote");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xc != 0) &&
     (uVar17 = uVar17 & 0xffffefff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x2000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/SCC_CheckedOut",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ShowMenu.CheckedOut");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xd != 0) &&
     (uVar17 = uVar17 & 0xffffdfff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x4000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_MarkedForAdd",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ShowMenu.OpenForAdd");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xe != 0) &&
     (uVar17 = uVar17 & 0xffffbfff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x8000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_CheckedOther",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),
                           "RevisionControl.ShowMenu.CheckedOutByOtherUser");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0xf != 0) &&
     (uVar17 = uVar17 & 0xffff7fff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x10000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_NewerVersion",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ShowMenu.NotAtHeadRevision");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x10 != 0) &&
     (uVar17 = uVar17 & 0xfffeffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon32x32;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x20000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Promote_Large",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Promote.Large");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x11 != 0) &&
     (uVar17 = uVar17 & 0xfffdffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x40000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_ConflictResolution_OpenExternal",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),
                           "RevisionControl.ConflictResolution.OpenExternal");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x12 != 0) &&
     (uVar17 = uVar17 & 0xfffbffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon16x16;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x80000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_ConflictResolution_Clear",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ConflictResolution.Clear");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x13 != 0) &&
     (uVar17 = uVar17 & 0xfff7ffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon14x14;
    uVar17 = uVar17 | 0x100000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_Added",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,&this->SnapshotHistoryAdded
               ,NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.SnapshotHistory.Added");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x14 != 0) &&
     (uVar17 = uVar17 & 0xffefffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon14x14;
    uVar17 = uVar17 | 0x200000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_Modified",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,
               &this->SnapshotHistoryModified,NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.SnapshotHistory.Modified");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x15 != 0) &&
     (uVar17 = uVar17 & 0xffdfffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon14x14;
    uVar17 = uVar17 | 0x400000;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_68,
                         "Starship/SourceControl/RC_Removed",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,
               &this->SnapshotHistoryRemoved,NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.SnapshotHistory.Removed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x16 != 0) &&
     (uVar17 = uVar17 & 0xffbfffff,
     (FScriptContainerElement *)_local_68 != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)_local_68);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon14x14;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x800000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Added",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.SnapshotHistory.ToolTip.Added"
                          );
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x17 != 0) &&
     (uVar17 = uVar17 & 0xff7fffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon14x14;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x1000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Modified",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),
                           "RevisionControl.SnapshotHistory.ToolTip.Modified");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x18 != 0) &&
     (uVar17 = uVar17 & 0xfeffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon14x14;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x2000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Removed",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),
                           "RevisionControl.SnapshotHistory.ToolTip.Removed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x19 != 0) &&
     (uVar17 = uVar17 & 0xfdffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x4000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_VerticalLine",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.VerticalLine");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1a != 0) &&
     (uVar17 = uVar17 & 0xfbffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x8000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_VerticalLineStart",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.VerticalLineStart");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1b != 0) &&
     (uVar17 = uVar17 & 0xf7ffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x10000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_VerticalLineDashed",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.VerticalLineDashed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1c != 0) &&
     (uVar17 = uVar17 & 0xefffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x20000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_CheckCircleLine",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.CheckCircleLine");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1d != 0) &&
     (uVar17 = uVar17 & 0xdfffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x40000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_LineCircle",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.LineCircle");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((uVar17 >> 0x1e != 0) &&
     (uVar17 = uVar17 & 0xbfffffff,
     local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    uVar17 = uVar17 | 0x80000000;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_CheckInAvailable",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.CheckInAvailable");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if (((int)uVar17 < 0) && (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_Rewound",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.Rewound");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar16 != (FSlateImageBrush *)0x0) &&
     (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_CheckInAvailableRewound",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.CheckInAvailableRewound");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar16 != (FSlateImageBrush *)0x0) &&
     (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon26x26;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_ConflictedState",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.ConflictedState");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar16 != (FSlateImageBrush *)0x0) &&
     (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  pFVar13 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon6x8;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_File",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar16,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar16 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar16;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.File");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar16 != (FSlateImageBrush *)0x0) &&
     (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._0_8_ = CoreStyleConstants::Icon8x8;
    _local_68 = pFVar5;
    _UNK_15076b1f8 = (int)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    fStack_60 = (float)_UNK_15076b1f8;
    fStack_5c = (float)_UNK_15076b1fc;
    _UNK_15076b1f8 = uVar7;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)&local_78,
                         "Starship/SourceControl/RC_DiskSize",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)local_res8,(FLinearColor *)&local_68,
               NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar18 = pFVar13;
  }
  pFVar15 = ::FName::FName((FName *)(local_res8 + 8),"RevisionControl.DiskSize");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar15,(FSlateVectorImageBrush *)pFVar18);
  if ((pFVar13 != (FSlateImageBrush *)0x0) &&
     (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return this;
}

// ~FDefaultRevisionControlStyle @ 146b00c50

void __thiscall
FDefaultRevisionControlStyle::~FDefaultRevisionControlStyle(FDefaultRevisionControlStyle *this)

{
  this->_padding_ = (longlong)&___7FDefaultRevisionControlStyle__6B_;
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  return;
}

// GetStyleSetName @ 146b1ada0

FName * __thiscall FDefaultRevisionControlStyle::GetStyleSetName(FDefaultRevisionControlStyle *this)

{
  return &StyleName;
}

