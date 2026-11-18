// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FExportScope @ 1421fe010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FExportScope * __thiscall
FPackageHarvester::FExportScope::FExportScope
          (FExportScope *this,FPackageHarvester *param_1,FExportWithContext *param_2)

{
  int *piVar1;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar2;
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *pTVar3;
  int iVar4;
  VCell *pVVar5;
  FPackageHarvester *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  FExportScope *pFVar10;
  ForElementType<ESaveRealm> FVar11;
  ForElementType<ESaveRealm> FVar12;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [24];
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ForElementType<FSetElementId> FStack_110;
  ulonglong uStack_100;
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ForElementType<FSetElementId> FStack_c0;
  ulonglong uStack_b0;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ForElementType<FSetElementId> FStack_70;
  ulonglong uStack_60;
  int local_58;
  bool local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this->Harvester = param_1;
  (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData =
       (ForElementType<ESaveRealm>)0x0;
  FVar12 = (param_1->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar4 = (param_1->CurrentExportHarvestingRealms).ArrayNum;
  (this->PreviousExportHarvestingRealms).ArrayNum = iVar4;
  if (FVar12 == (ForElementType<ESaveRealm>)0x0) {
    FVar12 = (ForElementType<ESaveRealm>)&param_1->CurrentExportHarvestingRealms;
  }
  piVar1 = &(this->PreviousExportHarvestingRealms).ArrayMax;
  if (iVar4 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,iVar4,0,&(this->PreviousExportHarvestingRealms).AllocatorInstance,iVar4,piVar1);
    FVar11 = (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<ESaveRealm>)0x0) {
      FVar11 = (ForElementType<ESaveRealm>)&this->PreviousExportHarvestingRealms;
    }
    memcpy((void *)FVar11,(void *)FVar12,(longlong)iVar4 << 2);
  }
  this->bPreviousFilterEditorOnly = (bool)(*(byte *)((longlong)&param_1->_padding_ + 3) >> 4 & 1);
  this->bPreviousSavingOptionalObject =
       (bool)(*(byte *)((longlong)&param_1->_padding_ + 3) >> 5 & 1);
  if (((this->Harvester->CurrentExportHarvestingRealms).ArrayNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Harvester.HasAnyExportHarvestingRealms()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                         ,0xf4,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FExportScope *)(*pcVar7)();
    return pFVar10;
  }
  pVVar5 = param_2->CellExport;
  pFVar6 = this->Harvester;
  local_128 = (void *)0x0;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  FStack_110.InlineData[0] = '\0';
  FStack_110.InlineData[1] = '\0';
  FStack_110.InlineData[2] = '\0';
  FStack_110.InlineData[3] = '\0';
  FStack_110._padding_ = 0;
  local_148._8_8_ = 0;
  uStack_120 = 0x8000000000;
  FStack_c0.InlineData[0] = '\0';
  FStack_c0.InlineData[1] = '\0';
  FStack_c0.InlineData[2] = '\0';
  FStack_c0.InlineData[3] = '\0';
  FStack_c0._padding_ = 0;
  local_118 = 0xffffffff;
  FStack_110.SecondaryData = (ForElementType<FSetElementId>)0x0;
  FStack_70.InlineData[0] = '\0';
  FStack_70.InlineData[1] = '\0';
  FStack_70.InlineData[2] = '\0';
  FStack_70.InlineData[3] = '\0';
  FStack_70._padding_ = 0;
  uStack_100 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_148._16_8_ = 0;
  uStack_130 = 0;
  local_f8._8_8_ = 0;
  local_f8._16_8_ = 0;
  uStack_e0 = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0x8000000000;
  local_c8 = 0xffffffff;
  FStack_c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_b0 = 0;
  local_a8._16_8_ = 0;
  uStack_90 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  uStack_80 = 0x8000000000;
  local_78 = 0xffffffff;
  FStack_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_54 = false;
  (pFVar6->CurrentExportDependencies).CurrentExport = param_2->Export;
  pTVar2 = &(pFVar6->CurrentExportDependencies).ObjectReferences;
  (pFVar6->CurrentExportDependencies).CurrentCellExport = pVVar5;
  if (pTVar2 != (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)local_148) {
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Move<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
              (pTVar2,(TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                       *)local_148);
  }
  pTVar2 = &(pFVar6->CurrentExportDependencies).NativeObjectReferences;
  if (pTVar2 != (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)local_f8) {
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Move<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
              (pTVar2,(TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                       *)local_f8);
  }
  pTVar3 = &(pFVar6->CurrentExportDependencies).CellReferences;
  if (pTVar3 != (TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
                local_a8) {
    TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>::
    Move<TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
              (pTVar3,(TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *
                      )local_a8);
  }
  (pFVar6->CurrentExportDependencies).ProcessImportDepth = local_58;
  (pFVar6->CurrentExportDependencies).bIgnoreDependencies = local_54;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if (FStack_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_70.SecondaryData);
  }
  iVar4 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  uVar8 = uStack_80._4_4_;
  local_78 = 0xffffffff;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  if (0x80 < uVar8) {
    uStack_80 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if (FStack_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_c0.SecondaryData);
  }
  iVar4 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  uVar8 = uStack_d0._4_4_;
  local_c8 = 0xffffffff;
  uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
  if (0x80 < uVar8) {
    uStack_d0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  uStack_100 = uStack_100 & 0xffffffff00000000;
  if (FStack_110.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_110.SecondaryData);
  }
  iVar4 = SUB84(local_148._8_8_,4);
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
  }
  uVar8 = uStack_120._4_4_;
  local_118 = 0xffffffff;
  uStack_120 = (ulonglong)uStack_120._4_4_ << 0x20;
  if (0x80 < uVar8) {
    uStack_120 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->Harvester->CurrentExportHarvestingRealms,&param_2->HarvestedFromRealms);
  pFVar6 = this->Harvester;
  FVar12 = (pFVar6->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar4 = (pFVar6->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar12 == (ForElementType<ESaveRealm>)0x0) {
    FVar12 = (ForElementType<ESaveRealm>)&pFVar6->CurrentExportHarvestingRealms;
  }
  FVar11 = (ForElementType<ESaveRealm>)((longlong)FVar12 + (longlong)iVar4 * 4);
  while( true ) {
    if (FVar12 == FVar11) {
      return this;
    }
    if (*(int *)FVar12 == 1) break;
    FVar12 = (ForElementType<ESaveRealm>)((longlong)FVar12 + 4);
  }
  if ((iVar4 != 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Harvester.CurrentExportHarvestingRealms.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                         ,0xfb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FExportScope *)(*pcVar7)();
    return pFVar10;
  }
  pFVar6 = this->Harvester;
  if (pFVar6->SaveContext->bIsSaveAutoOptional != false) {
    (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6,0);
  }
  (**(code **)(this->Harvester->_padding_ + 0x88))(this->Harvester,1);
  if ((this->Harvester->CurrentExportHarvestingRealms).ArrayNum == 1) {
    return this;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Harvester.CurrentExportHarvestingRealms.Num() == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                     ,0x10b,
                     L"Expecting only 1 realm when it\'s optional - if this trips, we will have to manage marking \'AllowedInOptional\' object/fname properties to not bloat things"
                    );
  if (!bVar9) {
    return this;
  }
  pcVar7 = (code *)swi(3);
  pFVar10 = (FExportScope *)(*pcVar7)();
  return pFVar10;
}

// ~FExportScope @ 142200ce0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FPackageHarvester::FExportScope::~FExportScope(FExportScope *this)

{
  ForElementType<ESaveRealm> FVar1;
  
  AppendCurrentExportDependencies(this->Harvester);
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->Harvester->CurrentExportHarvestingRealms,&this->PreviousExportHarvestingRealms);
  (**(code **)(this->Harvester->_padding_ + 0x80))(this->Harvester,this->bPreviousFilterEditorOnly);
  (**(code **)(this->Harvester->_padding_ + 0x88))
            (this->Harvester,this->bPreviousSavingOptionalObject);
  FVar1 = (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

