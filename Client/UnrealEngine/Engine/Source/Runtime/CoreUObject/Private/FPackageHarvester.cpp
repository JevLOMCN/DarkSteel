// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 43

// FPackageHarvester @ 1421ff280

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FPackageHarvester * __thiscall
FPackageHarvester::FPackageHarvester(FPackageHarvester *this,FSaveContext *param_1)

{
  byte *pbVar1;
  byte bVar2;
  atomic<unsigned_int> aVar3;
  FArchiveCookData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FExportWithContext *pFVar7;
  bool bVar8;
  FPackageHarvester *pFVar9;
  TNode *pTVar10;
  TNode *pTVar11;
  FSaveContext *pFVar12;
  undefined7 uVar13;
  undefined8 uVar14;
  
  pFVar4 = (param_1->SaveArgs).ArchiveCookData;
  if ((((param_1->SaveArgs).SaveFlags & 0x4000) == 0) ||
     (param_1->bCanUseUnversionedPropertySerialization == false)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  aVar3 = param_1->Package->PackageFlagsPrivate;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pFVar12 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)this);
  uVar13 = (undefined7)((ulonglong)pFVar12 >> 8);
  this->_padding_ = (longlong)&___7FArchiveSavePackageCollector_Private_SavePackageUtilities_UE__6B_
  ;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,CONCAT71(uVar13,1));
  lVar5 = this->_padding_;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xdf;
  pcVar6 = *(code **)(lVar5 + 0x80);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | (pFVar4 != (FArchiveCookData *)0x0) << 5;
  *(byte *)((longlong)&this->_padding_ + 3) = bVar2 | 9;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x600;
  if (pcVar6 == FArchiveState::SetFilterEditorOnly) {
    *(byte *)((longlong)&this->_padding_ + 3) = (aVar3._3_1_ >> 7) << 4 | bVar2 & 0xef | 9;
  }
  else {
    (*pcVar6)(this,(uint)aVar3 >> 0x1f);
  }
  if (&param_1->ArchiveSavePackageData == (FArchiveSavePackageData *)0x0) {
    if ((this->_padding_ != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(InSavePackageData == nullptr && SavePackageData)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                           ,0x28e,L"Can\'t turn off cooking once you turn it on!"), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPackageHarvester *)(*pcVar6)();
      return pFVar9;
    }
  }
  else {
    if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 4) == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLoading() && !IsTransacting() && IsSaving()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                           ,0x292,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPackageHarvester *)(*pcVar6)();
      return pFVar9;
    }
    this->_padding_ = (longlong)&param_1->ArchiveSavePackageData;
  }
  (**(code **)(this->_padding_ + 0xf8))(this,uVar14);
  this->SaveContext = param_1;
  this->_padding_ = (longlong)&___7FPackageHarvester__6B_;
  pTVar10 = ::operator_new(0x30);
  pTVar11 = (TNode *)0x0;
  if (pTVar10 != (TNode *)0x0) {
    pTVar10->NextNode = (TNode *)0x0;
    (pTVar10->Item).Export = (UObject *)0x0;
    (pTVar10->Item).CellExport = (VCell *)0x0;
    pFVar7 = &pTVar10->Item;
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[0] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[1] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[2] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[3] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[4] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[5] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[6] = '\0';
    (pFVar7->HarvestedFromRealms).AllocatorInstance.InlineData[7] = '\0';
    (pTVar10->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData =
         (ForElementType<ESaveRealm>)0x0;
    (pTVar10->Item).HarvestedFromRealms.ArrayNum = 0;
    (pTVar10->Item).HarvestedFromRealms.ArrayMax = 0;
    pTVar10->NextNode = (TNode *)0x0;
    (pTVar10->Item).Export = (UObject *)0x0;
    (pTVar10->Item).CellExport = (VCell *)0x0;
    (pTVar10->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData =
         (ForElementType<ESaveRealm>)0x0;
    (pTVar10->Item).HarvestedFromRealms.ArrayNum = 0;
    (pTVar10->Item).HarvestedFromRealms.ArrayMax = 2;
    pTVar11 = pTVar10;
  }
  (this->ExportsToProcess).Tail = pTVar11;
  (this->ExportsToProcess).Head = pTVar11;
  *(undefined8 *)&(this->CurrentExportDependencies).ObjectReferences.Elements = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).ObjectReferences.Elements.field_0x20 = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).ObjectReferences.Elements.field_0x8 = 0;
  (this->CurrentExportDependencies).CurrentExport = (UObject *)0x0;
  (this->CurrentExportDependencies).CurrentCellExport = (VCell *)0x0;
  *(undefined4 *)&(this->CurrentExportDependencies).ObjectReferences.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).ObjectReferences.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExportDependencies).ObjectReferences.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).ObjectReferences.Elements.field_0x30 =
       0xffffffff;
  (this->CurrentExportDependencies).ObjectReferences.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->CurrentExportDependencies).ObjectReferences.HashSize = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements.field_0x20 = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements.field_0x8 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements.field_0x2c =
       0x80;
  *(undefined4 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).NativeObjectReferences.Elements.field_0x30 =
       0xffffffff;
  (this->CurrentExportDependencies).NativeObjectReferences.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->CurrentExportDependencies).NativeObjectReferences.HashSize = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).CellReferences.Elements = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).CellReferences.Elements.field_0x20 = 0;
  *(undefined8 *)&(this->CurrentExportDependencies).CellReferences.Elements.field_0x8 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).CellReferences.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).CellReferences.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExportDependencies).CellReferences.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentExportDependencies).CellReferences.Elements.field_0x30 = 0xffffffff;
  (this->CurrentExportDependencies).CellReferences.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->CurrentExportDependencies).CellReferences.HashSize = 0;
  (this->CurrentExportDependencies).ProcessImportDepth = 0;
  (this->CurrentExportDependencies).bIgnoreDependencies = false;
  *(undefined8 *)&this->TransientPropertyOverrides = 0;
  *(undefined8 *)&(this->TransientPropertyOverrides).field_0x20 = 0;
  *(undefined8 *)&(this->TransientPropertyOverrides).field_0x8 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TransientPropertyOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x48 = 0;
  (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData =
       (ForElementType<ESaveRealm>)0x0;
  (this->CurrentExportHarvestingRealms).ArrayNum = 0;
  (this->CurrentExportHarvestingRealms).ArrayMax = 2;
  ResolveOverrides(this);
  FSaveContext::ClearSaveableCache(this->SaveContext);
  return this;
}

// operator<< @ 142201970

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FPackageHarvester::operator<<(FPackageHarvester *this,UObject **param_1)

{
  FArchive *pFVar1;
  UObject *local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  pFVar1 = (FArchive *)(**(code **)(this->_padding_ + 0x150))(this,local_res8);
  return pFVar1;
}

// operator<< @ 1422019c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FPackageHarvester::operator<<(FPackageHarvester *this,FLazyObjectPtr *param_1)

{
  FGuid local_18;
  
  local_18.A = *(uint *)&param_1->field_0x8;
  local_18.B = *(uint *)&param_1->field_0xc;
  local_18.C = *(uint *)&param_1->field_0x10;
  local_18.D = *(uint *)&param_1->field_0x14;
  ::operator<<((FArchive *)this,&local_18);
  return (FArchive *)this;
}

// operator<< @ 1422019f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FArchive * __thiscall FPackageHarvester::operator<<(FPackageHarvester *this,FObjectPtr *param_1)

{
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int *piVar1;
  FObjectPtr_u_0 FVar2;
  FSaveContext *pFVar3;
  UPackage *pUVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  FNameEntryId FVar8;
  FObjectStatus *this_01;
  UObject *pUVar9;
  UClass *pUVar10;
  undefined4 extraout_var;
  ForElementType<ESaveRealm> _Dst;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *this_02;
  ForElementType<ESaveRealm> _Src;
  longlong lVar11;
  undefined1 auStackY_138 [32];
  FObjectPtr_u_0 local_f8;
  FObjectPtr_u_0 local_f0;
  FObjectPtr_u_0 local_e8;
  FObjectPtr_u_0 local_e0;
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_d8;
  FHarvestScope local_c0;
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_98;
  FHarvestScope local_80;
  FHarvestScope local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar2 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  if ((FPackageHarvester *)FVar2.Handle == (FPackageHarvester *)0x0) {
    return (FArchive *)this;
  }
  if (((UE::GC::GIsIncrementalReachabilityPending) &&
      (UE::GC::MarkAsReachable(FVar2.Handle), UE::GC::GIsIncrementalReachabilityPending != false))
     && (UE::GC::MarkAsReachable(FVar2.Handle), UE::GC::GIsIncrementalReachabilityPending != false))
  {
    UE::GC::MarkAsReachable(FVar2.Handle);
  }
  FHarvestScope::FHarvestScope(&local_58,this);
  this_00 = &this->CurrentExportHarvestingRealms;
  local_e8 = (FObjectPtr_u_0)this;
  local_e0 = FVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar2.Handle);
  }
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterNotPreviouslyExcludedScope_::__l2::<lambda_1>_>
            (this_00,(<lambda_1> *)&local_e8,No);
  if (((local_58.Harvester)->CurrentExportHarvestingRealms).ArrayNum == 0) goto LAB_142201ec3;
  if ((FPackageHarvester *)FVar2.Handle == (FPackageHarvester *)this->SaveContext->Package) {
    HarvestPackageHeaderName(this,*(FName *)&(FVar2.Handle)->field_0x18);
    goto LAB_142201ec3;
  }
  local_98.AllocatorInstance.SecondaryData = (ForElementType<ESaveRealm>)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 2;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<ESaveRealm>)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 2;
  local_e8 = FVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar2.Handle);
  }
  GetPreviouslyIncludedRealms(this,(TObjectPtr<UObject>)&local_e8,&local_98,&local_d8);
  pFVar3 = this->SaveContext;
  local_e8 = FVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar2.Handle);
  }
  this_01 = FSaveContext::GetCachedObjectStatus(pFVar3,(TObjectPtr<UObject>)&local_e8);
  if (local_d8.ArrayNum != 0) {
    FHarvestScope::FHarvestScope(&local_c0,this);
    iVar6 = local_d8.ArrayNum;
    if (this_00 != &local_d8) {
      piVar1 = &(this->CurrentExportHarvestingRealms).ArrayMax;
      lVar11 = (longlong)local_d8.ArrayNum;
      _Src = (ForElementType<ESaveRealm>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
        _Src = local_d8.AllocatorInstance.SecondaryData;
      }
      (this->CurrentExportHarvestingRealms).ArrayNum = local_d8.ArrayNum;
      if ((local_d8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                  (4,4,local_d8.ArrayNum,*piVar1,&this_00->AllocatorInstance,local_d8.ArrayNum,
                   piVar1);
        _Dst = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
        if (iVar6 != 0) {
          if (_Dst == (ForElementType<ESaveRealm>)0x0) {
            _Dst = (ForElementType<ESaveRealm>)this_00;
          }
          memcpy((void *)_Dst,(void *)_Src,lVar11 << 2);
        }
      }
    }
    pUVar4 = this->SaveContext->Package;
    local_f8 = FVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(FVar2.Handle);
    }
    bVar7 = UE::SavePackageUtilities::FObjectStatus::IsInSavePackage
                      (this_01,(TObjectPtr<UObject>)&local_f8,pUVar4);
    if (bVar7) {
      TryHarvestExportInternal(this,FVar2.Handle,this_01);
    }
    else {
      local_f8 = FVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(FVar2.Handle);
      }
      TryHarvestImport(this,(TObjectPtr<UObject>)&local_f8,this_01);
    }
    if (local_c0.bActive != false) {
      TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
                (&(local_c0.Harvester)->CurrentExportHarvestingRealms,
                 &local_c0.PreviousExportHarvestingRealms);
    }
    if (local_c0.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
        (ForElementType<ESaveRealm>)0x0) {
      FMemory::Free((void *)local_c0.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData)
      ;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar2.Handle);
  }
  FHarvestScope::FHarvestScope(&local_80,this);
  local_f8 = (FObjectPtr_u_0)this;
  local_f0 = FVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar2.Handle);
  }
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterIncludedScope_::__l2::<lambda_1>_>
            (this_00,(<lambda_1>_conflict *)&local_f8,No);
  if (((local_80.Harvester)->CurrentExportHarvestingRealms).ArrayNum != 0) {
    pFVar3 = this->SaveContext;
    local_f8 = FVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(FVar2.Handle);
    }
    pUVar9 = FSaveContext::ResolveForSave(pFVar3,(TObjectPtr<UObject>)&local_f8,this_01);
    bVar7 = IsObjNative(pUVar9);
    local_e8 = FVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(FVar2.Handle);
    }
    if (((this->CurrentExportDependencies).ProcessImportDepth < 1) &&
       ((this->CurrentExportDependencies).bIgnoreDependencies == false)) {
      pUVar9 = UE::CoreUObject::Private::GetOuter(FVar2.Handle);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142201dae:
        if (pUVar9 == (UObject *)0x0) {
LAB_142201db3:
          pUVar10 = UE::CoreUObject::Private::GetClass(FVar2.Handle);
          uVar5 = pUVar10->_padding_;
          FVar8 = FNameEntryId::FromValidEName((EName)&local_f8);
          if (uVar5 == *(uint *)CONCAT44(extraout_var,FVar8.Value)) goto LAB_142201e1d;
        }
      }
      else {
        if (pUVar9 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142201dae;
        if (pUVar9 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142201dae;
        if (pUVar9 == (UObject *)0x0) goto LAB_142201db3;
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((this->CurrentExportDependencies).CurrentExport == (UObject *)0x0) {
        if ((this->CurrentExportDependencies).CurrentCellExport != (VCell *)0x0) goto LAB_142201e11;
      }
      else {
        if (bVar7) {
          this_02 = &(this->CurrentExportDependencies).NativeObjectReferences;
        }
        else {
LAB_142201e11:
          this_02 = &(this->CurrentExportDependencies).ObjectReferences;
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_const_&>
                  (this_02,(TObjectPtr<UObject> *)&local_f8,(bool *)&local_e8);
      }
    }
LAB_142201e1d:
    local_e8 = FVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(FVar2.Handle);
    }
    EnterConditionalOptionalObjectScope(this,&local_c0,(TObjectPtr<UObject>)&local_e8);
    if (local_c0.bActive != false) {
      TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
                (&(local_c0.Harvester)->CurrentExportHarvestingRealms,
                 &local_c0.PreviousExportHarvestingRealms);
    }
    if (local_c0.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
        (ForElementType<ESaveRealm>)0x0) {
      FMemory::Free((void *)local_c0.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData)
      ;
    }
  }
  if (local_80.bActive != false) {
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&(local_80.Harvester)->CurrentExportHarvestingRealms,
               &local_80.PreviousExportHarvestingRealms);
  }
  if (local_80.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_80.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
LAB_142201ec3:
  if (local_58.bActive != false) {
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&(local_58.Harvester)->CurrentExportHarvestingRealms,
               &local_58.PreviousExportHarvestingRealms);
  }
  if (local_58.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_58.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData);
  }
  return (FArchive *)this;
}

// operator<< @ 142201f20

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall
FPackageHarvester::operator<<(FPackageHarvester *this,FSoftObjectPath *param_1)

{
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  ForElementType<ESaveRealm> FVar2;
  int iVar3;
  FHarvestedRealm *pFVar4;
  FSoftObjectPathThreadContext *this_00;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForElementType<ESaveRealm> FVar7;
  char local_res8 [8];
  ESoftObjectPathCollectType local_res10 [8];
  FName local_res18;
  ESoftObjectPathSerializeType local_res20 [8];
  FName local_88;
  FName local_80;
  FString local_78;
  FPackageHarvester *local_68;
  FName local_60;
  char *local_58;
  FString local_50;
  
  FSoftObjectPath::SerializePathWithoutFixup(param_1,(FArchive *)this);
  FVar7 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  pTVar1 = &this->CurrentExportHarvestingRealms;
  iVar3 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar7 == (ForElementType<ESaveRealm>)0x0) {
    FVar7 = (ForElementType<ESaveRealm>)pTVar1;
  }
  FVar2 = (ForElementType<ESaveRealm>)((longlong)FVar7 + (longlong)iVar3 * 4);
  while( true ) {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7 == FVar2) break;
    pFVar4 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar7);
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
    Emplace<FSoftObjectPath_const_&>
              (&pFVar4->SoftObjectPathList,(FSoftObjectPath *)local_res10,(bool *)param_1);
    FVar7 = (ForElementType<ESaveRealm>)((longlong)FVar7 + 4);
  }
  if ((param_1->AssetPath).PackageName != (FName)0x0) {
    local_60 = (FName)&local_res18;
    local_68 = (FPackageHarvester *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FSoftObjectPathThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this_00 = (FSoftObjectPathThreadContext *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,&::TlsSlot);
    local_res10[0] = AlwaysCollect;
    FSoftObjectPath::ToString(param_1,&local_50);
    pFVar5 = FPackageName::ObjectPathToPackageName(&local_78,&local_50);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_88,pwVar6);
    if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_res8[0] = '\0';
    FSoftObjectPathThreadContext::GetSerializationOptions
              (this_00,(FName *)&local_78,&local_80,local_res10,local_res20,(FArchive *)this);
    if (local_res10[0] != NonPackage &&
        (local_res10[0] != NeverCollect && local_res10[0] != PackageHeader)) {
      HarvestPackageHeaderName(this,local_88);
      FVar7 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
      iVar3 = (this->CurrentExportHarvestingRealms).ArrayNum;
      if (FVar7 == (ForElementType<ESaveRealm>)0x0) {
        FVar7 = (ForElementType<ESaveRealm>)pTVar1;
      }
      local_60 = local_88;
      local_58 = local_res8;
      FVar2 = (ForElementType<ESaveRealm>)((longlong)FVar7 + (longlong)iVar3 * 4);
      local_68 = this;
      while( true ) {
        if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar3) {
          `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar7 == FVar2) break;
        pFVar4 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar7);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&pFVar4->SoftPackageReferenceList,&local_res18,(bool *)&local_60);
        FVar7 = (ForElementType<ESaveRealm>)((longlong)FVar7 + 4);
        local_res8[0] = '\x01';
      }
    }
    if (local_res8[0] == '\0') {
      FVar7 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
      iVar3 = (this->CurrentExportHarvestingRealms).ArrayNum;
      if (FVar7 == (ForElementType<ESaveRealm>)0x0) {
        FVar7 = (ForElementType<ESaveRealm>)pTVar1;
      }
      local_60 = local_88;
      FVar2 = (ForElementType<ESaveRealm>)((longlong)FVar7 + (longlong)iVar3 * 4);
      local_68 = this;
      while( true ) {
        if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar3) {
          `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar7 == FVar2) break;
        pFVar4 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar7);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&pFVar4->UntrackedSoftPackageReferenceList,&local_res18,(bool *)&local_60);
        FVar7 = (ForElementType<ESaveRealm>)((longlong)FVar7 + 4);
      }
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 142202170

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FPackageHarvester::operator<<(FPackageHarvester *this,FWeakObjectPtr *param_1)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = FWeakObjectPtr::Get(param_1,true);
  this_00 = (UObjectBaseUtility *)(this->CurrentExportDependencies).CurrentExport;
  if ((this->_padding_ != 0) && (*(longlong *)(this->_padding_ + 0x10) != 0)) {
LAB_1422021e4:
    (**(code **)(this->_padding_ + 0x168))(this,&local_res8);
    return (FArchive *)this;
  }
  if (local_res8 != (UObject *)0x0) {
    bVar1 = UObjectBaseUtility::IsInPackage
                      ((UObjectBaseUtility *)local_res8,this->SaveContext->Package);
    if (!bVar1) {
      pUVar2 = UObjectBaseUtility::GetOutermostObject(this_00);
      pUVar3 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)local_res8);
      if (pUVar3 == pUVar2) goto LAB_1422021e4;
    }
  }
  FArchiveUObject::SerializeWeakObjectPtr((FArchive *)this,param_1);
  return (FArchive *)this;
}

// operator<< @ 142202230

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FArchive * __thiscall FPackageHarvester::operator<<(FPackageHarvester *this,FName *param_1)

{
  HarvestExportDataName(this,*param_1);
  return (FArchive *)this;
}

// AppendCurrentExportDependencies @ 142203ff0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FPackageHarvester::AppendCurrentExportDependencies(FPackageHarvester *this)

{
  VCell **ppVVar1;
  ForElementType<ESaveRealm> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FHarvestedRealm *pFVar6;
  ForElementType<ESaveRealm> FVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<TObjectPtr<UObject>_&&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>
  local_res18;
  undefined1 local_a8 [8];
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_a0;
  UObject *local_98;
  TObjectPtr<UObject>_u_0 local_90;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> **local_88;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_80;
  UObject **local_78;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_70;
  VCell **local_68;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_60;
  VCell **local_58;
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *local_50;
  
  if (((this->CurrentExportDependencies).CurrentExport == (UObject *)0x0) &&
     ((this->CurrentExportDependencies).CurrentCellExport == (VCell *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentExportDependencies.CurrentExport || CurrentExportDependencies.CurrentCellExport"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                       ,0x5a3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->CurrentExportDependencies).CurrentExport == (UObject *)0x0) {
    ppVVar1 = &(this->CurrentExportDependencies).CurrentCellExport;
    if (*ppVVar1 != (VCell *)0x0) {
      FVar7 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
      iVar3 = (this->CurrentExportHarvestingRealms).ArrayNum;
      if (FVar7 == (ForElementType<ESaveRealm>)0x0) {
        FVar7 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
      }
      FVar2 = (ForElementType<ESaveRealm>)((longlong)FVar7 + (longlong)iVar3 * 4);
      while( true ) {
        if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar3) {
          `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar7 == FVar2) break;
        pFVar6 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar7);
        local_60 = &(this->CurrentExportDependencies).ObjectReferences;
        local_68 = ppVVar1;
        TSet<TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Verse::VCell_*_const_&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>_>
                  ((TSet<TTuple<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    *)&pFVar6->CellExportObjectDependencies,
                   (TPairInitializer<Verse::VCell_*_const_&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>
                    *)local_a8,(bool *)&local_68);
        local_50 = &(this->CurrentExportDependencies).CellReferences;
        local_58 = ppVVar1;
        TSet<TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Verse::VCell_*_const_&,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_&&>_>
                  ((TSet<TTuple<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    *)&pFVar6->CellExportCellDependencies,
                   (TPairInitializer<Verse::VCell_*_const_&,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_&&>
                    *)(local_a8 + 4),(bool *)&local_58);
        FVar7 = (ForElementType<ESaveRealm>)((longlong)FVar7 + 4);
      }
      *ppVVar1 = (VCell *)0x0;
    }
  }
  else {
    FVar7 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
    iVar3 = (this->CurrentExportHarvestingRealms).ArrayNum;
    if (FVar7 == (ForElementType<ESaveRealm>)0x0) {
      FVar7 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
    }
    FVar2 = (ForElementType<ESaveRealm>)((longlong)FVar7 + (longlong)iVar3 * 4);
    while( true ) {
      if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar7 == FVar2) break;
      pFVar6 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar7);
      local_a0 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  *)(this->CurrentExportDependencies).CurrentExport;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_a0 !=
          (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
          0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_a0);
      }
      local_88 = &local_a0;
      local_80 = &(this->CurrentExportDependencies).ObjectReferences;
      TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TObjectPtr<UObject>_&&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>_>
                ((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)&pFVar6->ExportObjectDependencies,&local_res18,(bool *)&local_88);
      local_98 = (this->CurrentExportDependencies).CurrentExport;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_98);
      }
      local_78 = &local_98;
      local_70 = &(this->CurrentExportDependencies).NativeObjectReferences;
      TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TObjectPtr<UObject>_&&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>_>
                ((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)&pFVar6->ExportNativeObjectDependencies,
                 (TPairInitializer<TObjectPtr<UObject>_&&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>
                  *)&local_res18.Value,(bool *)&local_78);
      local_90 = (TObjectPtr<UObject>_u_0)(this->CurrentExportDependencies).CurrentExport;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_90.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_90.DebugPtr);
      }
      TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
      ::
      Emplace<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
                ((TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
                  *)&pFVar6->ExportCellDependencies,(TObjectPtr<UObject> *)&local_90.ObjectPtr,
                 &(this->CurrentExportDependencies).CellReferences);
      FVar7 = (ForElementType<ESaveRealm>)((longlong)FVar7 + 4);
    }
    (this->CurrentExportDependencies).CurrentExport = (UObject *)0x0;
  }
  return;
}

// CurrentExportHasDependency @ 1422093d0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall
FPackageHarvester::CurrentExportHasDependency
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,ESaveRealm param_2)

{
  TObjectPtr<UObject_const_>_u_0 TVar1;
  int iVar2;
  FHarvestedRealm *pFVar3;
  uint uVar4;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  pFVar3 = FSaveContext::GetHarvestedRealm(this->SaveContext,param_2);
  TVar1 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                    ((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&pFVar3->ExportObjectDependencies,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  if (iVar2 == -1) {
    TVar1 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    local_res8 = TVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UObject *)0x0) {
        UE::GC::MarkAsReachable(TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar1.DebugPtr);
      }
    }
    uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    iVar2 = TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                      ((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&pFVar3->ExportNativeObjectDependencies,uVar4 >> 0x10 ^ uVar4,
                       (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
    if (iVar2 == -1) {
      return false;
    }
  }
  return true;
}

// EnterConditionalEditorOnlyScope @ 14220a1c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterConditionalEditorOnlyScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,bool param_1)

{
  FArchiveCookData *pFVar1;
  ITargetPlatform *pIVar2;
  char cVar3;
  ESaveRealm local_res18 [4];
  
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  if (param_1) {
    pFVar1 = (this->SaveContext->SaveArgs).ArchiveCookData;
    if (((pFVar1 != (FArchiveCookData *)0x0) &&
        (pIVar2 = pFVar1->TargetPlatform, pIVar2 != (ITargetPlatform *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)&pIVar2->field_0x8 + 0x88))(&pIVar2->field_0x8),
       cVar3 != '\0')) {
      return __return_storage_ptr__;
    }
    local_res18[0] = Game;
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::RemoveSwap
              (&this->CurrentExportHarvestingRealms,local_res18,No);
  }
  return __return_storage_ptr__;
}

// EnterConditionalOptionalObjectScope @ 14220a250

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterConditionalOptionalObjectScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,TObjectPtr<UObject> param_1
          )

{
  int *piVar1;
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<ESaveRealm> FVar3;
  FSaveContext *pFVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  FHarvestScope *pFVar12;
  ForElementType<ESaveRealm> FVar13;
  undefined1 local_res8 [8];
  FHarvestScope *local_res10;
  undefined4 local_58 [2];
  FString local_50;
  
  pUVar11 = (UClass *)0x0;
  local_res10 = __return_storage_ptr__;
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  pTVar2 = &this->CurrentExportHarvestingRealms;
  if ((this->CurrentExportHarvestingRealms).ArrayNum != 0) {
    pFVar4 = this->SaveContext;
    pUVar5 = *(UObject **)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((pFVar4->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
      if (pUVar5 != (UObject *)0x0) {
        pUVar11 = UE::CoreUObject::Private::GetClass(pUVar5);
      }
      if ((pUVar11->ClassFlags & CLASS_Optional) != CLASS_None) {
        pUVar5 = (this->CurrentExportDependencies).CurrentExport;
        if (((pUVar5 != (UObject *)0x0) &&
            (cVar8 = (**(code **)(*(longlong *)pUVar5 + 0x120))(pUVar5), cVar8 == '\0')) &&
           ((cVar8 = (**(code **)(*(longlong *)pUVar5 + 0x100))(pUVar5), cVar8 != '\0' ||
            (cVar8 = (**(code **)(*(longlong *)pUVar5 + 0x108))(pUVar5), cVar8 != '\0')))) {
          pUVar6 = *(UObject **)param_1.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FVar13 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
          iVar10 = (this->CurrentExportHarvestingRealms).ArrayNum;
          if (FVar13 == (ForElementType<ESaveRealm>)0x0) {
            FVar13 = (ForElementType<ESaveRealm>)pTVar2;
          }
          FVar3 = (ForElementType<ESaveRealm>)((longlong)FVar13 + (longlong)iVar10 * 4);
          while( true ) {
            if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar10) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            __return_storage_ptr__ = local_res10;
            if (FVar13 == FVar3) break;
            if (*(int *)FVar13 != 1) {
              local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_50.Data.ArrayNum = 0;
              local_50.Data.ArrayMax = 0;
              FSaveContext::RecordIllegalReference
                        (this->SaveContext,pUVar5,pUVar6,ReferenceToOptional,&local_50);
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
            FVar13 = (ForElementType<ESaveRealm>)((longlong)FVar13 + 4);
          }
        }
        iVar10 = (this->CurrentExportHarvestingRealms).ArrayMax;
        piVar1 = &(this->CurrentExportHarvestingRealms).ArrayMax;
        (this->CurrentExportHarvestingRealms).ArrayNum = 0;
        if (iVar10 < 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                    (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
          iVar10 = *piVar1;
        }
        FVar13 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
        local_58[0] = 1;
        if (FVar13 == (ForElementType<ESaveRealm>)0x0) {
          FVar13 = (ForElementType<ESaveRealm>)pTVar2;
        }
        if ((((ulonglong)FVar13 <= local_58) &&
            (local_58 < (undefined4 *)((longlong)FVar13 + (longlong)iVar10 * 4))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FHarvestScope *)(*pcVar7)();
          return pFVar12;
        }
        iVar10 = (this->CurrentExportHarvestingRealms).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->CurrentExportHarvestingRealms).ArrayNum = iVar10 + 1;
        FVar13 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<ESaveRealm>)0x0) {
          FVar13 = (ForElementType<ESaveRealm>)pTVar2;
        }
        *(undefined4 *)((longlong)FVar13 + (longlong)iVar10 * 4) = local_58[0];
      }
    }
  }
  return __return_storage_ptr__;
}

// EnterIncludedScope @ 14220a4c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterIncludedScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,VCell *param_1)

{
  <lambda_1> local_18;
  
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  local_18.__this = this;
  local_18.Cell = param_1;
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterIncludedScope_::__l2::<lambda_1>_>
            (&this->CurrentExportHarvestingRealms,&local_18,No);
  return __return_storage_ptr__;
}

// EnterIncludedScope @ 14220a520

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterIncludedScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,TObjectPtr<UObject> param_1
          )

{
  <lambda_1>_conflict local_18;
  
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  local_18.Object.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)param_1.field0_0x0;
  local_18.__this = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18.Object.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18.Object.field0_0x0);
  }
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterIncludedScope_::__l2::<lambda_1>_>
            (&this->CurrentExportHarvestingRealms,&local_18,No);
  return __return_storage_ptr__;
}

// EnterNewExportOnlyScope @ 14220a590

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterNewExportOnlyScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,UObject *param_1)

{
  <lambda_1> local_18;
  
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  local_18.__this = this;
  local_18.Export = param_1;
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterNewExportOnlyScope_::__l2::<lambda_1>_>
            (&this->CurrentExportHarvestingRealms,&local_18,No);
  return __return_storage_ptr__;
}

// EnterNotExcludedScope @ 14220a5f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterNotExcludedScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,TObjectPtr<UObject> param_1
          ,FObjectStatus *param_2)

{
  <lambda_1> local_28;
  
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  local_28.Object.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)param_1.field0_0x0;
  local_28.__this = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.Object.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.Object.field0_0x0);
  }
  local_28.ObjectStatus = param_2;
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterNotExcludedScope_::__l2::<lambda_1>_>
            (&this->CurrentExportHarvestingRealms,&local_28,No);
  return __return_storage_ptr__;
}

// EnterNotPreviouslyExcludedScope @ 14220a680

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterNotPreviouslyExcludedScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,TObjectPtr<UObject> param_1
          )

{
  <lambda_1> local_18;
  
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  local_18.Object.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)param_1.field0_0x0;
  local_18.__this = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18.Object.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18.Object.field0_0x0);
  }
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterNotPreviouslyExcludedScope_::__l2::<lambda_1>_>
            (&this->CurrentExportHarvestingRealms,&local_18,No);
  return __return_storage_ptr__;
}

// EnterRealmsArrayScope @ 14220a6f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterRealmsArrayScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__,
          TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->CurrentExportHarvestingRealms,param_1);
  return __return_storage_ptr__;
}

// EnterRootReferencesScope @ 14220a740

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::EnterRootReferencesScope
          (FPackageHarvester *this,FHarvestScope *__return_storage_ptr__)

{
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FHarvestScope *pFVar5;
  ForElementType<ESaveRealm> FVar6;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  pTVar1 = &this->CurrentExportHarvestingRealms;
  if ((this->CurrentExportHarvestingRealms).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyExportHarvestingRealms()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                       ,0x141,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHarvestScope *)(*pcVar2)();
      return pFVar5;
    }
  }
  FHarvestScope::FHarvestScope(__return_storage_ptr__,this);
  FVar6 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  local_18 = 0;
  if (FVar6 == (ForElementType<ESaveRealm>)0x0) {
    FVar6 = (ForElementType<ESaveRealm>)pTVar1;
  }
  if (((ulonglong)FVar6 <= &local_18) &&
     (&local_18 <
      (undefined4 *)((longlong)FVar6 + (longlong)(this->CurrentExportHarvestingRealms).ArrayMax * 4)
     )) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHarvestScope *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (iVar4 == (this->CurrentExportHarvestingRealms).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                      (0x404,&pTVar1->AllocatorInstance,
                       &(this->CurrentExportHarvestingRealms).ArrayMax);
  }
  (this->CurrentExportHarvestingRealms).ArrayNum = iVar4 + 1;
  FVar6 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<ESaveRealm>)0x0) {
    FVar6 = (ForElementType<ESaveRealm>)pTVar1;
  }
  *(undefined4 *)((longlong)FVar6 + (longlong)iVar4 * 4) = local_18;
  if ((this->SaveContext->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
    FVar6 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
    local_14[0] = 2;
    if (FVar6 == (ForElementType<ESaveRealm>)0x0) {
      FVar6 = (ForElementType<ESaveRealm>)pTVar1;
    }
    if (((ulonglong)FVar6 <= local_14) &&
       (local_14 <
        (undefined4 *)
        ((longlong)FVar6 + (longlong)(this->CurrentExportHarvestingRealms).ArrayMax * 4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FHarvestScope *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->CurrentExportHarvestingRealms).ArrayNum;
    if (iVar4 == (this->CurrentExportHarvestingRealms).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                        (0x404,&pTVar1->AllocatorInstance,
                         &(this->CurrentExportHarvestingRealms).ArrayMax);
    }
    (this->CurrentExportHarvestingRealms).ArrayNum = iVar4 + 1;
    FVar6 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<ESaveRealm>)0x0) {
      FVar6 = (ForElementType<ESaveRealm>)pTVar1;
    }
    *(undefined4 *)((longlong)FVar6 + (longlong)iVar4 * 4) = local_14[0];
  }
  return __return_storage_ptr__;
}

// GetArchiveName @ 14220cf00

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FString * __thiscall
FPackageHarvester::GetArchiveName(FPackageHarvester *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = (FName)this->SaveContext->Package->_padding_;
  ::FName::ToString(local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"PackageHarvester (%s)");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPreviouslyIncludedRealms @ 14220de60

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::GetPreviouslyIncludedRealms
          (FPackageHarvester *this,VCell *param_1,
          TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FSaveContext *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<ESaveRealm> FVar8;
  uint uVar9;
  ForElementType<ESaveRealm> FVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ESaveRealm EVar13;
  ForElementType<ESaveRealm> FVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  ESaveRealm local_58 [2];
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *local_50;
  ForElementType<ESaveRealm> local_48;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,0,&param_3->AllocatorInstance,0,piVar2);
  }
  FVar14 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  local_50 = &this->CurrentExportHarvestingRealms;
  local_res20 = (this->CurrentExportHarvestingRealms).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  if (FVar14 == (ForElementType<ESaveRealm>)0x0) {
    FVar14 = (ForElementType<ESaveRealm>)local_50;
  }
  local_48 = (ForElementType<ESaveRealm>)((longlong)FVar14 + uVar11 * 4);
LAB_14220df10:
  FVar10 = local_48;
  if (local_50->ArrayNum != (int)uVar11) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (FVar14 == FVar10) {
    return;
  }
  local_58[0] = *(ESaveRealm *)FVar14;
  pFVar3 = this->SaveContext;
  EVar13 = local_58[0];
  if (local_58[0] == None) {
    EVar13 = pFVar3->CurrentHarvestingRealm;
  }
  uVar9 = 0;
  if ((int)EVar13 < (pFVar3->HarvestedRealms).ArrayNum) {
    uVar9 = ~EVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (pFVar3->HarvestedRealms).AllocatorInstance.Data;
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  if (*(int *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x238) !=
      *(int *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x264)) {
    pFVar12 = pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x268;
    if (*(FScriptContainerElement **)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x270) !=
        (FScriptContainerElement *)0x0) {
      pFVar12 = *(FScriptContainerElement **)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x270);
    }
    iVar7 = *(int *)(pFVar12 +
                    (ulonglong)
                    (*(int *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x278) - 1U & uVar9) * 4);
    if (iVar7 != -1) {
      do {
        if (*(VCell **)
             (*(longlong *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x230) + (longlong)iVar7 * 0x10
             ) == param_1) goto LAB_14220e17c;
        iVar7 = *(int *)(*(longlong *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x230) + 8 +
                        (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (*(int *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x1e8) !=
      *(int *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x214)) {
    pFVar12 = pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x218;
    if (*(FScriptContainerElement **)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x220) !=
        (FScriptContainerElement *)0x0) {
      pFVar12 = *(FScriptContainerElement **)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x220);
    }
    iVar7 = *(int *)(pFVar12 +
                    (ulonglong)
                    (*(int *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x228) - 1U & uVar9) * 4);
    if (iVar7 != -1) {
      do {
        if (*(VCell **)
             (*(longlong *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x1e0) + (longlong)iVar7 * 0x10
             ) == param_1) goto LAB_14220e17c;
        iVar7 = *(int *)(*(longlong *)(pFVar4 + (longlong)(int)EVar13 * 0x5f0 + 0x1e0) + 8 +
                        (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  FVar10 = (param_3->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<ESaveRealm>)param_3;
  if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
    FVar8 = FVar10;
  }
  if ((ulonglong)FVar8 <= local_58) {
    FVar8 = (ForElementType<ESaveRealm>)param_3;
    if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
      FVar8 = FVar10;
    }
    if ((local_58 < (ESaveRealm *)((longlong)FVar8 + (longlong)*piVar2 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_3->ArrayNum;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                      (0x404,&param_3->AllocatorInstance,piVar2);
  }
  param_3->ArrayNum = iVar7 + 1;
  FVar10 = (param_3->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<ESaveRealm>)param_3;
  goto LAB_14220e149;
LAB_14220e17c:
  FVar10 = (param_2->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<ESaveRealm>)param_2;
  if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
    FVar8 = FVar10;
  }
  if ((ulonglong)FVar8 <= local_58) {
    FVar8 = (ForElementType<ESaveRealm>)param_2;
    if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
      FVar8 = FVar10;
    }
    if ((local_58 < (ESaveRealm *)((longlong)FVar8 + (longlong)*piVar1 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                      (0x404,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar7 + 1;
  FVar10 = (param_2->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<ESaveRealm>)param_2;
LAB_14220e149:
  if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
    FVar8 = FVar10;
  }
  FVar14 = (ForElementType<ESaveRealm>)((longlong)FVar14 + 4);
  *(ESaveRealm *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_58[0];
  uVar11 = (ulonglong)local_res20;
  goto LAB_14220df10;
}

// GetPreviouslyIncludedRealms @ 14220e250

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::GetPreviouslyIncludedRealms
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,
          TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FSaveContext *pFVar3;
  TObjectPtr<UObject_const_>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<ESaveRealm> FVar8;
  uint uVar9;
  ForElementType<ESaveRealm> FVar10;
  ulonglong uVar11;
  ESaveRealm EVar12;
  FHarvestedRealm *this_00;
  ForElementType<ESaveRealm> FVar13;
  undefined1 local_res18 [8];
  uint local_res20;
  ESaveRealm local_78 [2];
  TObjectPtr<UObject_const_>_u_0 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *local_60;
  ForElementType<ESaveRealm> local_58;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,0,&param_3->AllocatorInstance,0,piVar2);
  }
  FVar13 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  local_60 = &this->CurrentExportHarvestingRealms;
  local_res20 = (this->CurrentExportHarvestingRealms).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  if (FVar13 == (ForElementType<ESaveRealm>)0x0) {
    FVar13 = (ForElementType<ESaveRealm>)local_60;
  }
  local_58 = (ForElementType<ESaveRealm>)((longlong)FVar13 + uVar11 * 4);
  do {
    FVar10 = local_58;
    if (local_60->ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar13 == FVar10) {
      return;
    }
    local_78[0] = *(ESaveRealm *)FVar13;
    pFVar3 = this->SaveContext;
    EVar12 = local_78[0];
    if (local_78[0] == None) {
      EVar12 = pFVar3->CurrentHarvestingRealm;
    }
    uVar9 = 0;
    if ((int)EVar12 < (pFVar3->HarvestedRealms).ArrayNum) {
      uVar9 = ~EVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (FHarvestedRealm *)
              ((pFVar3->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar12 * 0x5f0);
    TVar4 = *(TObjectPtr<UObject_const_>_u_0 *)param_1.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar4.DebugPtr != (UObject *)0x0) {
        UE::GC::MarkAsReachable(TVar4.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar4.DebugPtr);
      }
    }
    local_70 = TVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar4.DebugPtr != (UObject *)0x0) {
        UE::GC::MarkAsReachable(TVar4.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar4.DebugPtr);
      }
    }
    uVar9 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    iVar7 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            FindIndexByHash<TObjectPtr<UObject_const_>_>
                      (&this_00->Imports,uVar9 >> 0x10 ^ uVar9,
                       (TObjectPtr<UObject_const_> *)&local_70.ObjectPtr);
    if (iVar7 == -1) {
      local_68 = TVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar4.DebugPtr);
      }
      bVar6 = FHarvestedRealm::IsExport(this_00,(TObjectPtr<UObject>)&local_68);
      if (bVar6) goto LAB_14220e540;
      FVar10 = (param_3->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<ESaveRealm>)param_3;
      if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
        FVar8 = FVar10;
      }
      if ((ulonglong)FVar8 <= local_78) {
        FVar8 = (ForElementType<ESaveRealm>)param_3;
        if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
          FVar8 = FVar10;
        }
        if ((local_78 < (ESaveRealm *)((longlong)FVar8 + (longlong)*piVar2 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                          (0x404,&param_3->AllocatorInstance,piVar2);
      }
      param_3->ArrayNum = iVar7 + 1;
      FVar10 = (param_3->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<ESaveRealm>)param_3;
    }
    else {
LAB_14220e540:
      FVar10 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<ESaveRealm>)param_2;
      if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
        FVar8 = FVar10;
      }
      if ((ulonglong)FVar8 <= local_78) {
        FVar8 = (ForElementType<ESaveRealm>)param_2;
        if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
          FVar8 = FVar10;
        }
        if ((local_78 < (ESaveRealm *)((longlong)FVar8 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar7 + 1;
      FVar10 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<ESaveRealm>)param_2;
    }
    if (FVar10 != (ForElementType<ESaveRealm>)0x0) {
      FVar8 = FVar10;
    }
    FVar13 = (ForElementType<ESaveRealm>)((longlong)FVar13 + 4);
    *(ESaveRealm *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_78[0];
    uVar11 = (ulonglong)local_res20;
  } while( true );
}

// GetSaveableStatusForRealm @ 14220e660

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESaveableStatus __thiscall
FPackageHarvester::GetSaveableStatusForRealm
          (FPackageHarvester *this,UObject *param_1,ESaveRealm param_2,TObjectPtr<UObject> *param_3,
          FString *param_4)

{
  int iVar1;
  longlong lVar2;
  FSaveContext *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ESaveableStatus EVar7;
  EObjectMark EVar8;
  EObjectMark EVar9;
  ESaveableStatus EVar10;
  UPackage *pUVar11;
  FObjectStatus *pFVar12;
  wchar_t *pwVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  ITargetPlatform *pIVar16;
  longlong local_res10;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  UObject *local_c8;
  UObject *local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (param_1 != (UObject *)0x0) {
    pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
    lVar2 = pUVar11->_padding_;
    FLazyName::Resolve(&GLongCoreUObjectPackageName);
    if (lVar2 != local_res10) {
      pFVar3 = this->SaveContext;
      local_c8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      pFVar12 = FSaveContext::GetCachedObjectStatus(pFVar3,(TObjectPtr<UObject>)&local_c8);
      pFVar3 = this->SaveContext;
      local_c0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FSaveContext::UpdateSaveableStatus(pFVar3,(TObjectPtr<UObject>)&local_c0,pFVar12);
      if (pFVar12->SaveableStatus != Success) {
        if (pFVar12->SaveableStatus == OuterUnsaveable) {
          if (((pFVar12->SaveableStatusCulprit == (UObject *)0x0) ||
              (pFVar12->SaveableStatusCulpritStatus == Success)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectStatus.SaveableStatusCulprit != nullptr && ObjectStatus.SaveableStatusCulpritStatus != ESaveableStatus::Success"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                                 ,0x5e7,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            EVar7 = (*pcVar5)();
            return EVar7;
          }
          pUVar15 = pFVar12->SaveableStatusCulprit;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar15);
          }
          (param_3->field0_0x0).DebugPtr = pUVar15;
          ::LexToString(pFVar12->SaveableStatusCulpritStatus);
          FObjectPtr::GetPathName((FObjectPtr *)param_3,&local_a0);
          ::FString::PrintfImpl(&local_118,L"has outer %s which %s");
          if (param_4 != &local_118) {
            pFVar4 = (param_4->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (param_4->Data).AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
            (param_4->Data).ArrayNum = local_118.Data.ArrayNum;
            (param_4->Data).ArrayMax = local_118.Data.ArrayMax;
            local_118.Data.ArrayNum = 0;
            local_118.Data.ArrayMax = 0;
            local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          (param_3->field0_0x0).DebugPtr = param_1;
          pwVar13 = ::LexToString(pFVar12->SaveableStatus);
          ::FString::operator=(param_4,pwVar13);
        }
        return pFVar12->SaveableStatus;
      }
      EVar8 = FSaveContext::GetExcludedObjectMarks(this->SaveContext,param_2);
      EVar9 = GenerateMarksForObject(param_1,this->SaveContext);
      if ((EVar9 & EVar8) != OBJECTMARK_NOMARKS) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        (param_3->field0_0x0).DebugPtr = param_1;
        ::FString::PrintfImpl
                  (&local_108,
                   L"has ObjectMarks 0x%x that are excluded for the current cooking target");
        if (param_4 != &local_108) {
          pFVar4 = (param_4->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (param_4->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
          (param_4->Data).ArrayNum = local_108.Data.ArrayNum;
          (param_4->Data).ArrayMax = local_108.Data.ArrayMax;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        return ExcludedByPlatform;
      }
      pIVar16 = (ITargetPlatform *)0x0;
      EVar7 = Success;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      if ((*(UObject **)&param_1->field_0x20 == (UObject *)0x0) ||
         (EVar10 = GetSaveableStatusForRealm
                             (this,*(UObject **)&param_1->field_0x20,param_2,param_3,&local_128),
         EVar10 == Success)) {
        pUVar15 = *(UObject **)&param_1->field_0x10;
        if ((pUVar15 == (UObject *)0x0) ||
           (EVar10 = GetSaveableStatusForRealm(this,pUVar15,param_2,param_3,&local_128),
           EVar10 == Success)) {
          pUVar14 = Z_Construct_UClass_UStruct_NoRegister();
          iVar1 = (int)pUVar14->_padding_;
          if ((((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar14->_padding_)) ||
              (pUVar15 = *(UObject **)&param_1[1].field_0x18, pUVar15 == (UObject *)0x0)) ||
             (EVar10 = GetSaveableStatusForRealm(this,pUVar15,param_2,param_3,&local_128),
             EVar10 == Success)) {
            pUVar15 = UObject::GetArchetype(param_1);
            if ((pUVar15 == (UObject *)0x0) ||
               (EVar10 = GetSaveableStatusForRealm(this,pUVar15,param_2,param_3,&local_128),
               EVar10 == Success)) {
              bVar6 = UObjectBaseUtility::IsInPackage
                                ((UObjectBaseUtility *)param_1,this->SaveContext->Package);
              if ((!bVar6) &&
                 (bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                     &FCoreUObjectDelegates::ShouldCookPackageForPlatform), bVar6))
              {
                if (this->_padding_ != 0) {
                  pIVar16 = *(ITargetPlatform **)(this->_padding_ + 8);
                }
                pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
                bVar6 = TDelegate<bool___cdecl(UPackage_const_*,ITargetPlatform_const_*),FDefaultDelegateUserPolicy>
                        ::Execute(&FCoreUObjectDelegates::ShouldCookPackageForPlatform,pUVar11,
                                  pIVar16);
                if (!bVar6) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(param_1);
                  }
                  (param_3->field0_0x0).DebugPtr = param_1;
                  pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
                  local_b8 = (FName)pUVar11->_padding_;
                  ::FName::ToString(&local_b8,&local_b0);
                  ::FString::PrintfImpl
                            (&local_d8,
                             L"is in package %s which is excluded from the cook by FCoreUObjectDelegates::ShouldCookPackageForPlatform."
                            );
                  if (param_4 != &local_d8) {
                    pFVar4 = (param_4->Data).AllocatorInstance.Data;
                    if (pFVar4 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar4);
                    }
                    (param_4->Data).AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
                    (param_4->Data).ArrayNum = local_d8.Data.ArrayNum;
                    (param_4->Data).ArrayMax = local_d8.Data.ArrayMax;
                    local_d8.Data.ArrayNum = 0;
                    local_d8.Data.ArrayMax = 0;
                    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  }
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                  EVar7 = ExcludedByPlatform;
                }
              }
              goto LAB_14220ee04;
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar15);
            }
            (param_3->field0_0x0).DebugPtr = pUVar15;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar15,&local_40,(UObject *)0x0);
            ::FString::PrintfImpl(&local_e8,L"has archetype %s which %s");
            if (param_4 != &local_e8) {
              pFVar4 = (param_4->Data).AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              (param_4->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
              (param_4->Data).ArrayNum = local_e8.Data.ArrayNum;
              (param_4->Data).ArrayMax = local_e8.Data.ArrayMax;
              local_e8.Data.ArrayNum = 0;
              local_e8.Data.ArrayMax = 0;
              local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
            }
          }
          else {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar15);
            }
            (param_3->field0_0x0).DebugPtr = pUVar15;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar15,&local_50,(UObject *)0x0);
            ::FString::PrintfImpl(&local_f8,L"has superclass %s which %s");
            if (param_4 != &local_f8) {
              pFVar4 = (param_4->Data).AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              (param_4->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
              (param_4->Data).ArrayNum = local_f8.Data.ArrayNum;
              (param_4->Data).ArrayMax = local_f8.Data.ArrayMax;
              local_f8.Data.ArrayNum = 0;
              local_f8.Data.ArrayMax = 0;
              local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar15);
          }
          (param_3->field0_0x0).DebugPtr = pUVar15;
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar15,&local_60,(UObject *)0x0);
          ::FString::PrintfImpl(&local_80,L"has class %s which %s");
          ::FString::operator=(param_4,&local_80);
          local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
            local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
          }
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        EVar7 = ClassUnsaveable;
      }
      else {
        if (((param_3->field0_0x0).DebugPtr == (UObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutCulprit",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                               ,0x607,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
        if (EVar10 == OuterUnsaveable) {
          if (param_4 != &local_128) {
            pFVar4 = (param_4->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (param_4->Data).AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
            (param_4->Data).ArrayNum = local_128.Data.ArrayNum;
            iVar1 = local_128.Data.ArrayMax;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            EVar7 = OuterUnsaveable;
            (param_4->Data).ArrayMax = iVar1;
            goto LAB_14220ee04;
          }
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)(param_3->field0_0x0).DebugPtr,&local_70,(UObject *)0x0);
          ::FString::PrintfImpl(&local_90,L"has outer %s which %s");
          ::FString::operator=(param_4,&local_90);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        EVar7 = OuterUnsaveable;
      }
LAB_14220ee04:
      if (local_128.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar7;
      }
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
      return EVar7;
    }
  }
  return Success;
}

// GetUnsaveableReason @ 14220fd60

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FString * __thiscall
FPackageHarvester::GetUnsaveableReason
          (FPackageHarvester *this,FString *__return_storage_ptr__,UObject *param_1,
          ESaveRealm param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ESaveableStatus EVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  TObjectPtr<UObject>_u_0 local_38;
  FString local_30;
  FString local_20;
  
  local_38.DebugPtr = (UObject *)0x0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  EVar3 = GetSaveableStatusForRealm
                    (this,param_1,param_2,(TObjectPtr<UObject> *)&local_38.ObjectPtr,&local_30);
  if (EVar3 == Success) {
    bVar2 = UObjectBaseUtility::IsInPackage
                      ((UObjectBaseUtility *)param_1,this->SaveContext->Package);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pwVar5 = L"It should be an export but was excluded for an unknown reason.";
    if (!bVar2) {
      pwVar5 = L"It should be an import but was excluded for an unknown reason.";
    }
    pFVar4 = ::FString::ConstructFromPtrSize(&local_20,pwVar5,0x3e);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::PrintfImpl(__return_storage_ptr__,L"It %s.");
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HarvestDependency @ 14220feb0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::HarvestDependency
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,bool param_2)

{
  ulonglong uVar1;
  FNameEntryId FVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  undefined4 extraout_var;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *this_00;
  TObjectPtr<UObject> local_res8;
  
  if (0 < (this->CurrentExportDependencies).ProcessImportDepth) {
    return;
  }
  if ((this->CurrentExportDependencies).bIgnoreDependencies != false) {
    return;
  }
  pUVar4 = (UClass *)0x0;
  if (*(UObject **)param_1.field0_0x0 == (UObject *)0x0) {
    pUVar3 = (UObject *)0x0;
LAB_14220ff14:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14220ff42;
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14220ff42;
    if (pUVar3 == (UObject *)0x0) goto LAB_14220ff47;
    UE::GC::MarkAsReachable(pUVar3);
  }
  else {
    pUVar3 = UE::CoreUObject::Private::GetOuter(*(UObject **)param_1.field0_0x0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      goto LAB_14220ff14;
    }
LAB_14220ff42:
    if (pUVar3 == (UObject *)0x0) {
LAB_14220ff47:
      if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
        pUVar4 = UE::CoreUObject::Private::GetClass(*(UObject **)param_1.field0_0x0);
      }
      uVar1 = pUVar4->_padding_;
      FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
      if (uVar1 == *(uint *)CONCAT44(extraout_var,FVar2.Value)) {
        return;
      }
    }
  }
  if ((this->CurrentExportDependencies).CurrentExport == (UObject *)0x0) {
    if ((this->CurrentExportDependencies).CurrentCellExport == (VCell *)0x0) {
      return;
    }
  }
  else if (param_2) {
    this_00 = &(this->CurrentExportDependencies).NativeObjectReferences;
    goto LAB_14220ffb0;
  }
  this_00 = &(this->CurrentExportDependencies).ObjectReferences;
LAB_14220ffb0:
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UObject>_const_&>(this_00,&local_res8,(bool *)param_1.field0_0x0);
  return;
}

// HarvestExport @ 14220ffd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::HarvestExport(FPackageHarvester *this,UObject *param_1,FObjectStatus *param_2)

{
  ESaveRealm EVar1;
  UObject *pUVar2;
  TNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  FHarvestedRealm *pFVar8;
  undefined8 *puVar9;
  TNode *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ForElementType<ESaveRealm> FVar13;
  FRealmInstigator *pFVar14;
  ForElementType<ESaveRealm> FVar15;
  longlong lVar16;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [8];
  FObjectStatus *local_a0;
  ForElementType<ESaveRealm> local_98;
  UObject *local_90;
  uint local_88;
  uint local_78;
  UObject *local_70;
  VCell *local_68;
  ForElementType<ESaveRealm> local_60;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar2 = (this->CurrentExportDependencies).CurrentExport;
  if ((pUVar2 == (UObject *)0x0) ||
     ((*(byte *)(*(longlong *)&pUVar2->field_0x10 + 0xd4) & 0x10) == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 4;
  }
  local_a0 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                         ,0xbd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar6 = '\0';
  pUVar2 = param_1;
  while ((pUVar2 != (UObject *)0x0 && (cVar6 == '\0'))) {
    cVar6 = (**(code **)(*(longlong *)pUVar2 + 0x118))(pUVar2);
    pUVar2 = *(UObject **)&pUVar2->field_0x20;
  }
  if (((*(uint *)&param_1->field_0x8 & 0x10) != 0) &&
     ((cVar6 != '\0' ||
      (cVar7 = (**(code **)(**(longlong **)&param_1->field_0x10 + 0x118))(), cVar7 != '\0')))) {
    cVar6 = '\x01';
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (UE::GC::MarkAsReachable(param_1), UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FVar15 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  local_b4 = (uint)(cVar6 == '\0') | local_78 & 0xfffffff8 | uVar11;
  local_ac = (this->CurrentExportHarvestingRealms).ArrayNum;
  uVar12 = (ulonglong)(int)local_ac;
  if (FVar15 == (ForElementType<ESaveRealm>)0x0) {
    FVar15 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  }
  local_98 = (ForElementType<ESaveRealm>)((longlong)FVar15 + uVar12 * 4);
  uVar11 = local_88;
  do {
    while( true ) {
      FVar13 = local_98;
      if ((this->CurrentExportHarvestingRealms).ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b8);
      }
      if (FVar15 == FVar13) {
        local_50 = (this->CurrentExportHarvestingRealms).ArrayNum;
        lVar16 = (longlong)local_50;
        FVar15 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
        local_68 = (VCell *)0x0;
        local_60.SecondaryData = (ForElementType<ESaveRealm>)0x0;
        if (FVar15 == (ForElementType<ESaveRealm>)0x0) {
          FVar15 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
        }
        local_70 = param_1;
        if (local_50 == 0) {
          local_4c = 2;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                    (4,4,local_50,0,&local_60,local_50,&local_4c);
          FVar13 = (ForElementType<ESaveRealm>)&local_60;
          if (local_60.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
            FVar13 = local_60.SecondaryData;
          }
          memcpy((void *)FVar13,(void *)FVar15,lVar16 << 2);
        }
        pTVar10 = ::operator_new(0x30);
        if (pTVar10 != (TNode *)0x0) {
          pTVar10->NextNode = (TNode *)0x0;
          (pTVar10->Item).Export = local_70;
          (pTVar10->Item).CellExport = local_68;
          (pTVar10->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData =
               (ForElementType<ESaveRealm>)0x0;
          if (local_60.SecondaryData == (ForElementType<ESaveRealm>)0x0) {
            *&(pTVar10->Item).HarvestedFromRealms.AllocatorInstance.InlineData = local_60.InlineData
            ;
          }
          (pTVar10->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData =
               local_60.SecondaryData;
          local_60.SecondaryData = (ForElementType<ESaveRealm>)0x0;
          (pTVar10->Item).HarvestedFromRealms.ArrayNum = local_50;
          (pTVar10->Item).HarvestedFromRealms.ArrayMax = local_4c;
          pTVar3 = (this->ExportsToProcess).Head;
          local_50 = 0;
          local_4c = 2;
          (this->ExportsToProcess).Head = pTVar10;
          pTVar3->NextNode = pTVar10;
        }
        if (local_60.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
          FMemory::Free((void *)local_60.SecondaryData);
        }
        return;
      }
      EVar1 = *(ESaveRealm *)FVar15;
      pFVar8 = FSaveContext::GetHarvestedRealm(this->SaveContext,EVar1);
      local_90 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      uVar11 = (uVar11 ^ local_b4) & 1 ^ uVar11;
      uVar11 = (local_b4 ^ uVar11) & 2 ^ uVar11;
      uVar11 = (local_b4 ^ uVar11) & 4 ^ uVar11;
      local_88 = uVar11;
      TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>::
      Emplace<FTaggedExport>(&pFVar8->Exports,(FTaggedExport *)local_a8,(bool *)&local_90);
      local_b0 = (undefined4)*(undefined8 *)&param_1->field_0x18;
      TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Emplace<FNameEntryId>
                (&pFVar8->NamesReferencedFromPackageHeader,(FNameEntryId *)(local_a8 + 4),
                 (bool *)&local_b0);
      pFVar14 = local_a0->RealmInstigator + EVar1;
      if (pFVar14->Object == (UObject *)0x0) break;
LAB_142210214:
      uVar12 = (ulonglong)local_ac;
      FVar15 = (ForElementType<ESaveRealm>)((longlong)FVar15 + 4);
    }
    pFVar14->Property = (FProperty *)0x0;
    pUVar2 = (this->CurrentExportDependencies).CurrentExport;
    if (pUVar2 == (UObject *)0x0) {
      pFVar14->Object = (UObject *)this->SaveContext->Package;
      goto LAB_142210214;
    }
    pFVar14->Object = pUVar2;
    puVar9 = (undefined8 *)this->_padding_;
    if ((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 9) < 1)) goto LAB_142210214;
    if ((undefined8 *)puVar9[8] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puVar9[8];
    }
    FVar15 = (ForElementType<ESaveRealm>)((longlong)FVar15 + 4);
    pFVar14->Property = (FProperty *)*puVar9;
    uVar12 = (ulonglong)local_ac;
  } while( true );
}

// HarvestExportDataName @ 142210350

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FPackageHarvester::HarvestExportDataName(FPackageHarvester *this,FName param_1)

{
  ForElementType<ESaveRealm> FVar1;
  int iVar2;
  FHarvestedRealm *pFVar3;
  ForElementType<ESaveRealm> FVar4;
  uint local_res8 [2];
  FNameEntryId local_res10 [2];
  
  FVar4 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar2 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar4 == (ForElementType<ESaveRealm>)0x0) {
    FVar4 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  }
  FVar1 = (ForElementType<ESaveRealm>)((longlong)FVar4 + (longlong)iVar2 * 4);
  while( true ) {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4 == FVar1) break;
    pFVar3 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar4);
    local_res8[0] = (uint)param_1.ComparisonIndex.Value;
    TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Emplace<FNameEntryId>
              (&pFVar3->NamesReferencedFromExportData,local_res10,(bool *)local_res8);
    FVar4 = (ForElementType<ESaveRealm>)((longlong)FVar4 + 4);
  }
  return;
}

// HarvestImport @ 1422103e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::HarvestImport
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  ForElementType<ESaveRealm> FVar1;
  int iVar2;
  ESaveRealm EVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FHarvestedRealm *pFVar6;
  undefined8 *puVar7;
  FRealmInstigator *pFVar8;
  ForElementType<ESaveRealm> FVar9;
  UObject *local_res8;
  TObjectPtr<UObject> local_res10;
  FObjectStatus *local_res18;
  TObjectPtr<UObject> local_res20;
  
  pUVar4 = *(UObject **)param_1.field0_0x0;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FVar9 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar2 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar9 == (ForElementType<ESaveRealm>)0x0) {
    FVar9 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  }
  FVar1 = (ForElementType<ESaveRealm>)((longlong)FVar9 + (longlong)iVar2 * 4);
LAB_142210435:
  do {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar9 == FVar1) {
      return;
    }
    EVar3 = *(ESaveRealm *)FVar9;
    pFVar6 = FSaveContext::GetHarvestedRealm(this->SaveContext,EVar3);
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_const_&>(&pFVar6->Imports,&local_res10,(bool *)&local_res8);
    if ((this->CurrentExportDependencies).ProcessImportDepth == 0) {
      pFVar6 = FSaveContext::GetHarvestedRealm(this->SaveContext,EVar3);
      local_res8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_const_&>(&pFVar6->DirectImports,&local_res20,(bool *)&local_res8);
    }
    pFVar8 = local_res18->RealmInstigator + EVar3;
    if (pFVar8->Object == (UObject *)0x0) {
      pFVar8->Property = (FProperty *)0x0;
      pUVar5 = (this->CurrentExportDependencies).CurrentExport;
      if (pUVar5 == (UObject *)0x0) {
        pFVar8->Object = (UObject *)this->SaveContext->Package;
      }
      else {
        pFVar8->Object = pUVar5;
        puVar7 = (undefined8 *)this->_padding_;
        if ((puVar7 != (undefined8 *)0x0) && (0 < *(int *)(puVar7 + 9))) {
          if ((undefined8 *)puVar7[8] != (undefined8 *)0x0) {
            puVar7 = (undefined8 *)puVar7[8];
          }
          FVar9 = (ForElementType<ESaveRealm>)((longlong)FVar9 + 4);
          pFVar8->Property = (FProperty *)*puVar7;
          goto LAB_142210435;
        }
      }
    }
    FVar9 = (ForElementType<ESaveRealm>)((longlong)FVar9 + 4);
  } while( true );
}

// HarvestPackageHeaderName @ 142210580

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FPackageHarvester::HarvestPackageHeaderName(FPackageHarvester *this,FName param_1)

{
  ForElementType<ESaveRealm> FVar1;
  int iVar2;
  FHarvestedRealm *pFVar3;
  ForElementType<ESaveRealm> FVar4;
  uint local_res8 [2];
  FNameEntryId local_res10 [2];
  
  FVar4 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar2 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar4 == (ForElementType<ESaveRealm>)0x0) {
    FVar4 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  }
  FVar1 = (ForElementType<ESaveRealm>)((longlong)FVar4 + (longlong)iVar2 * 4);
  while( true ) {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4 == FVar1) break;
    pFVar3 = FSaveContext::GetHarvestedRealm(this->SaveContext,*(ESaveRealm *)FVar4);
    local_res8[0] = (uint)param_1.ComparisonIndex.Value;
    TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::Emplace<FNameEntryId>
              (&pFVar3->NamesReferencedFromPackageHeader,local_res10,(bool *)local_res8);
    FVar4 = (ForElementType<ESaveRealm>)((longlong)FVar4 + 4);
  }
  return;
}

// HarvestSearchableName @ 142210610

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::HarvestSearchableName
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,FName param_2)

{
  ForElementType<ESaveRealm> FVar1;
  int iVar2;
  bool *pbVar3;
  FHarvestedRealm *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar5;
  ForElementType<ESaveRealm> FVar6;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  <lambda_1> local_48;
  
  local_48.bAlreadyTrackedInAllHarvestingRealms = local_res8;
  local_48.TypeObject.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)param_1.field0_0x0;
  local_res8[0] = true;
  local_48.__this = this;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_48.TypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.TypeObject.field0_0x0);
  }
  ForEachExportHarvestingRealm<_FPackageHarvester::HarvestSearchableName_::__l2::<lambda_1>_>
            (this,&local_48);
  if (local_res8[0] == false) {
    (**(code **)(this->_padding_ + 0x150))(this,param_1.field0_0x0);
  }
  HarvestPackageHeaderName(this,param_2);
  local_48.bAlreadyTrackedInAllHarvestingRealms = *(bool **)param_1.field0_0x0;
  local_48.__this = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_48.bAlreadyTrackedInAllHarvestingRealms != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.bAlreadyTrackedInAllHarvestingRealms);
  }
  FVar6 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar2 = (this->CurrentExportHarvestingRealms).ArrayNum;
  if (FVar6 == (ForElementType<ESaveRealm>)0x0) {
    FVar6 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  }
  FVar1 = (ForElementType<ESaveRealm>)((longlong)FVar6 + (longlong)iVar2 * 4);
  local_48.TypeObject.field0_0x0 = (TObjectPtr<UObject>_u_0)param_2;
  while( true ) {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar6 == FVar1) break;
    pFVar4 = FSaveContext::GetHarvestedRealm((local_48.__this)->SaveContext,*(ESaveRealm *)FVar6);
    pbVar3 = local_48.bAlreadyTrackedInAllHarvestingRealms;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_48.bAlreadyTrackedInAllHarvestingRealms != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48.bAlreadyTrackedInAllHarvestingRealms);
    }
    uVar5 = ((uint)((ulonglong)pbVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pbVar3 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    this_00 = TMapBase<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<TObjectPtr<UObject>_const_&>
                        ((TMapBase<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                          *)&pFVar4->SearchableNamesObjectMap,uVar5 >> 0x10 ^ uVar5,
                         (TObjectPtr<UObject> *)&local_48.bAlreadyTrackedInAllHarvestingRealms);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (this_00,(FName *)&local_48.TypeObject);
    FVar6 = (ForElementType<ESaveRealm>)((longlong)FVar6 + 4);
  }
  return;
}

// HasAnyExportHarvestingRealms @ 142210790

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FPackageHarvester::HasAnyExportHarvestingRealms(FPackageHarvester *this)

{
  return (this->CurrentExportHarvestingRealms).ArrayNum != 0;
}

// IsObjNative @ 142212570

bool __cdecl FPackageHarvester::IsObjNative(UObject *param_1)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  FUObjectItem *pFVar4;
  UClass *pUVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  lVar8 = *(longlong *)&param_1->field_0x20;
  uVar2 = (ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19;
  bVar6 = (bool)((byte)uVar2 & 1);
  bVar7 = bVar6;
  if ((uVar2 & 1) == 0) {
    do {
      if (lVar8 == 0) {
        return bVar6;
      }
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8)
           != &pUVar5->_padding_)) ||
         (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar8 + 0xc)),
         ((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0)) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      bVar7 = (bool)(bVar6 | bVar3);
      lVar8 = *(longlong *)(lVar8 + 0x20);
      bVar6 = false;
    } while (bVar7 == false);
  }
  return bVar7;
}

// MarkSearchableName @ 142214490

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::MarkSearchableName
          (FPackageHarvester *this,TObjectPtr<UObject_const_> *param_1,FName *param_2)

{
  ForElementType<ESaveRealm> FVar1;
  int iVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  FName FVar4;
  bool *pbVar5;
  FHarvestedRealm *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar7;
  ForElementType<ESaveRealm> FVar8;
  bool local_res10 [16];
  undefined1 local_res20 [8];
  TObjectPtr<UObject>_u_0 local_48;
  <lambda_1> local_40;
  
  TVar3 = (TObjectPtr<UObject>_u_0)(param_1->field0_0x0).DebugPtr;
  if (TVar3.DebugPtr != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable(TVar3.DebugPtr), UE::GC::GIsIncrementalReachabilityPending != false)
       ) {
      UE::GC::MarkAsReachable(TVar3.DebugPtr);
    }
    FVar4 = *param_2;
    local_48 = TVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(TVar3.DebugPtr);
    }
    local_res10[0] = true;
    local_40.bAlreadyTrackedInAllHarvestingRealms = local_res10;
    local_40.__this = this;
    local_40.TypeObject.field0_0x0 = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48.DebugPtr);
    }
    ForEachExportHarvestingRealm<_FPackageHarvester::HarvestSearchableName_::__l2::<lambda_1>_>
              (this,&local_40);
    if (local_res10[0] == false) {
      (**(code **)(this->_padding_ + 0x150))(this,&local_48);
    }
    HarvestPackageHeaderName(this,FVar4);
    local_40.bAlreadyTrackedInAllHarvestingRealms = (bool *)local_48;
    local_40.__this = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48.DebugPtr);
    }
    FVar8 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
    iVar2 = (this->CurrentExportHarvestingRealms).ArrayNum;
    if (FVar8 == (ForElementType<ESaveRealm>)0x0) {
      FVar8 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
    }
    FVar1 = (ForElementType<ESaveRealm>)((longlong)FVar8 + (longlong)iVar2 * 4);
    local_40.TypeObject.field0_0x0 = (TObjectPtr<UObject>_u_0)FVar4;
    while( true ) {
      if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar8 == FVar1) break;
      pFVar6 = FSaveContext::GetHarvestedRealm((local_40.__this)->SaveContext,*(ESaveRealm *)FVar8);
      pbVar5 = local_40.bAlreadyTrackedInAllHarvestingRealms;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_40.bAlreadyTrackedInAllHarvestingRealms != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_40.bAlreadyTrackedInAllHarvestingRealms);
      }
      uVar7 = ((uint)((ulonglong)pbVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pbVar5 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      this_00 = TMapBase<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<TObjectPtr<UObject>_const_&>
                          ((TMapBase<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                            *)&pFVar6->SearchableNamesObjectMap,uVar7 >> 0x10 ^ uVar7,
                           (TObjectPtr<UObject> *)&local_40.bAlreadyTrackedInAllHarvestingRealms);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (this_00,(FName *)&local_40.TypeObject);
      FVar8 = (ForElementType<ESaveRealm>)((longlong)FVar8 + 4);
    }
  }
  return;
}

// PopExportToProcess @ 142215a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FExportWithContext * __thiscall
FPackageHarvester::PopExportToProcess
          (FPackageHarvester *this,FExportWithContext *__return_storage_ptr__)

{
  TNode *pTVar1;
  TNode *pTVar2;
  ForElementType<ESaveRealm> FVar3;
  undefined1 auStack_78 [32];
  FExportWithContext local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  __return_storage_ptr__->Export = (UObject *)0x0;
  __return_storage_ptr__->CellExport = (VCell *)0x0;
  (__return_storage_ptr__->HarvestedFromRealms).AllocatorInstance.SecondaryData =
       (ForElementType<ESaveRealm>)0x0;
  (__return_storage_ptr__->HarvestedFromRealms).ArrayNum = 0;
  (__return_storage_ptr__->HarvestedFromRealms).ArrayMax = 2;
  pTVar1 = ((this->ExportsToProcess).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    FExportWithContext::operator=(__return_storage_ptr__,&pTVar1->Item);
    pTVar2 = (this->ExportsToProcess).Tail;
    (this->ExportsToProcess).Tail = pTVar1;
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[0] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[1] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[2] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[3] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[4] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[5] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[6] = '\0';
    local_58.HarvestedFromRealms.AllocatorInstance.InlineData[7] = '\0';
    local_58.Export = (UObject *)0x0;
    local_58.CellExport = (VCell *)0x0;
    local_58.HarvestedFromRealms.AllocatorInstance.SecondaryData = (ForElementType<ESaveRealm>)0x0;
    local_58.HarvestedFromRealms.ArrayNum = 0;
    local_58.HarvestedFromRealms.ArrayMax = 2;
    FExportWithContext::operator=(&pTVar1->Item,&local_58);
    if (local_58.HarvestedFromRealms.AllocatorInstance.SecondaryData !=
        (ForElementType<ESaveRealm>)0x0) {
      FMemory::Free((void *)local_58.HarvestedFromRealms.AllocatorInstance.SecondaryData);
    }
    if (pTVar2 != (TNode *)0x0) {
      FVar3 = (pTVar2->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<ESaveRealm>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      ::operator_delete(pTVar2,0x30);
    }
  }
  return __return_storage_ptr__;
}

// ProcessExport @ 142217470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::ProcessExport(FPackageHarvester *this,FExportWithContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ESaveRealm EVar3;
  UObject *this_00;
  FSaveContext *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FChannel *pFVar7;
  uint uVar8;
  UClass *pUVar9;
  bool bVar10;
  bool bVar11;
  FHarvestedRealm *this_01;
  FString *pFVar12;
  FStructuredArchiveFromArchive *this_02;
  FStructuredArchiveSlot FVar13;
  FName this_03;
  UPackage *pUVar14;
  ForElementType<ESaveRealm> FVar15;
  ForElementType<ESaveRealm> FVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6 [6];
  ForElementType<ESaveRealm> local_3c0;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  UClass *local_3a8;
  TObjectPtr<UObject>_u_0 local_3a0;
  undefined1 local_398 [8];
  UClass *local_390;
  UObject *local_388;
  longlong local_380;
  UObjectBaseUtility *local_378;
  UPackage *local_370;
  FScopedObjectSerializeContext local_368;
  <lambda_3> local_360;
  undefined1 local_340 [8];
  FString local_338;
  FExportScope local_328;
  TStringBuilderBase<wchar_t> local_2f8;
  wchar_t local_2d8 [128];
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  if (((param_1->Export == (UObject *)0x0) || (param_1->CellExport != (VCell *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InProcessContext.Export && !InProcessContext.CellExport",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                          ,0x21d,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = param_1->Export;
  FExportScope::FExportScope(&local_328,this,param_1);
  UE::FScopedObjectSerializeContext::FScopedObjectSerializeContext
            (&local_368,this_00,(FArchive *)this);
  local_3a8 = *(UClass **)&this_00->field_0x10;
  (**(code **)(this->_padding_ + 0x168))(this,&local_3a8);
  pUVar9 = local_3a8;
  iVar2 = (this->CurrentExportHarvestingRealms).ArrayNum;
  FVar16 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
  FVar15 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  if (FVar15 != (ForElementType<ESaveRealm>)0x0) {
    FVar16 = FVar15;
  }
  FVar15 = (ForElementType<ESaveRealm>)((longlong)FVar16 + (longlong)iVar2 * 4);
  local_3c0 = FVar15;
  while( true ) {
    if ((this->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
      local_3c8 = 0;
      `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_3c8);
    }
    if (FVar16 == FVar15) break;
    EVar3 = *(ESaveRealm *)FVar16;
    if ((EVar3 != Game) ||
       ((this->SaveContext->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0)) {
      this_01 = FSaveContext::GetHarvestedRealm(this->SaveContext,EVar3);
      local_390 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      bVar10 = FHarvestedRealm::IsIncluded(this_01,(TObjectPtr<UObject>)&local_390);
      FVar15 = local_3c0;
      if (!bVar10) {
        pFVar4 = this->SaveContext;
        pFVar12 = GetUnsaveableReason(this,&local_338,(UObject *)pUVar9,EVar3);
        FSaveContext::RecordIllegalReference
                  (pFVar4,this_00,(UObject *)pUVar9,UnsaveableClass,pFVar12);
        FVar15 = local_3c0;
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
          FVar15 = local_3c0;
        }
      }
    }
    FVar16 = (ForElementType<ESaveRealm>)((longlong)FVar16 + 4);
  }
  local_3c0 = *(ForElementType<ESaveRealm> *)&this_00->field_0x20;
  if (local_3c0 != (ForElementType<ESaveRealm>)0x0) {
    bVar10 = UObjectBaseUtility::IsInPackage
                       ((UObjectBaseUtility *)local_3c0,this->SaveContext->Package);
    FVar16 = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<ESaveRealm>)0x0) {
      FVar16 = (ForElementType<ESaveRealm>)&this->CurrentExportHarvestingRealms;
    }
    FVar15 = (ForElementType<ESaveRealm>)
             ((longlong)FVar16 + (longlong)(this->CurrentExportHarvestingRealms).ArrayNum * 4);
    for (; FVar16 != FVar15; FVar16 = (ForElementType<ESaveRealm>)((longlong)FVar16 + 4)) {
      if (*(int *)FVar16 == 1) {
        if (((this->CurrentExportHarvestingRealms).ArrayNum != 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentExportHarvestingRealms.Num() == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                                ,0x252,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (!bVar10) goto LAB_1422176de;
        if ((*(uint *)(*(longlong *)&this_00->field_0x10 + 0xd4) >> 4 & 1) == 0) goto LAB_1422176f1;
        bVar10 = (*(uint *)(*(longlong *)((longlong)local_3c0 + 0x10) + 0xd4) >> 4 & 1) == 0;
        goto LAB_1422176dc;
      }
    }
    bVar10 = !bVar10;
LAB_1422176dc:
    if (bVar10) {
LAB_1422176de:
      (**(code **)(this->_padding_ + 0x168))(this,&local_3c0);
    }
    else {
LAB_1422176f1:
      bVar10 = (this->CurrentExportDependencies).bIgnoreDependencies;
      (this->CurrentExportDependencies).bIgnoreDependencies = true;
      (**(code **)(this->_padding_ + 0x168))(this,&local_3c0);
      (this->CurrentExportDependencies).bIgnoreDependencies = bVar10;
    }
    local_360.Outer = (UObject *)local_3c0;
    local_360.__this = this;
    local_360.Export = this_00;
    ForEachExportHarvestingRealm<_FPackageHarvester::ProcessExport_::__l12::<lambda_3>_>
              (this,&local_360);
  }
  local_3a0.DebugPtr = UObject::GetArchetype(this_00);
  pUVar9 = local_3a8;
  if (local_3a0.DebugPtr != (UObject *)0x0) {
    if ((local_3a8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(local_3a8);
    }
    if ((local_3a0.DebugPtr != (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr) ||
       ((this->SaveContext->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0)) {
      (**(code **)(this->_padding_ + 0x168))(this,&local_3a0);
    }
  }
  Z_Construct_UClass_UClass_NoRegister();
  pUVar9 = local_3a8;
  if ((*(uint *)&this_00->field_0x8 >> 4 & 1) != 0) {
    pcVar6 = *(code **)(local_3a8->_padding_ + 0x3c0);
    this_02 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_1d8,(FArchive *)this);
    FVar13 = FStructuredArchiveFromArchive::GetSlot(this_02);
    (*pcVar6)(pUVar9,this_00,*(undefined8 *)FVar13);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
  }
  pFVar7 = SaveTimeChannel;
  this_03 = GetClassTraceScope((UObjectBaseUtility *)local_340);
  local_2f8.Base = local_2d8;
  local_2f8.bIsDynamic = false;
  local_2f8.bIsExternal = false;
  local_2f8.CurPos = local_2d8;
  local_2f8.End = (wchar_t *)&local_1d8;
  ::FName::AppendString((FName *)this_03,&local_2f8);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_2f8,L"_SaveSerialize",0xe);
  if (local_2f8.End < (FStructuredArchiveFromArchive *)(local_2f8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
  }
  *local_2f8.CurPos = L'\0';
  if ((CpuChannel->Enabled < 0) || (pFVar7->Enabled < 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f8);
    (**(code **)(*(longlong *)this_00 + 200))(this_00,this);
  }
  else {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (local_2f8.Base,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
               ,0x281);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f8);
    (**(code **)(*(longlong *)this_00 + 200))(this_00,this);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar4 = this->SaveContext;
  if ((pFVar4->ObjectSaveContext).bRequestPostSaveSerialization != false) {
    local_388 = this_00;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (&pFVar4->PostSaveObjectsToSerialize,(UObject **)local_398,(bool *)&local_388);
    (pFVar4->ObjectSaveContext).bRequestPostSaveSerialization = false;
  }
  if ((this->SaveContext->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
    bVar10 = (this->CurrentExportDependencies).bIgnoreDependencies;
    (this->CurrentExportDependencies).bIgnoreDependencies = true;
    local_3b8.Data = (FScriptContainerElement *)0x0;
    local_3b0 = 0;
    (**(code **)(*(longlong *)this_00 + 0x140))(this_00,&local_3b8);
    iVar2 = (int)local_3b0;
    pFVar1 = local_3b8.Data + (longlong)(int)local_3b0 * 8;
    FVar17.Data = local_3b8.Data;
    while( true ) {
      if ((int)local_3b0 != iVar2) {
        local_3c7 = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3c7);
      }
      if (FVar17.Data == pFVar1) break;
      local_378 = *(UObjectBaseUtility **)FVar17.Data;
      if (local_378 != (UObjectBaseUtility *)0x0) {
        pUVar14 = UObjectBaseUtility::GetOutermost(local_378);
        lVar5 = pUVar14->_padding_;
        FLazyName::Resolve(&GLongCoreUObjectPackageName);
        if (lVar5 != local_380) {
          (**(code **)(this->_padding_ + 0x168))(this,&local_378);
        }
      }
      FVar17.Data = FVar17.Data + 8;
    }
    (this->CurrentExportDependencies).bIgnoreDependencies = bVar10;
    if (this->SaveContext->bIsProcessingPrestreamPackages != false) {
      uVar8 = local_3b0._4_4_;
      if (local_3b0 < 0) {
        local_3b0 = (ulonglong)local_3b0._4_4_ << 0x20;
        if (uVar8 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_3b8,0,(int *)((longlong)&local_3b0 + 4));
        }
      }
      else {
        local_3b0 = (ulonglong)local_3b0._4_4_ << 0x20;
      }
      (**(code **)(*(longlong *)this_00 + 0x148))(this_00,&local_3b8);
      iVar2 = (int)local_3b0;
      pFVar1 = local_3b8.Data + (longlong)(int)local_3b0 * 8;
      FVar17.Data = local_3b8.Data;
      while( true ) {
        if ((int)local_3b0 != iVar2) {
          local_3c6[0] = 0;
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3c6);
        }
        if (FVar17.Data == pFVar1) break;
        if (*(UObjectBaseUtility **)FVar17.Data != (UObjectBaseUtility *)0x0) {
          pUVar14 = UObjectBaseUtility::GetOutermost(*(UObjectBaseUtility **)FVar17.Data);
          if (((uint)pUVar14->PackageFlagsPrivate >> 4 & 1) == 0) {
            pFVar4 = this->SaveContext;
            local_370 = pUVar14;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UPackage *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)pUVar14);
            }
            TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<UPackage>_>
                      (&pFVar4->PrestreamPackages,(TObjectPtr<UPackage> *)(local_398 + 4),
                       (bool *)&local_370);
          }
          else {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5692099846488456533>,true,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                                ,0x2ab,"!Pkg->HasAnyPackageFlags(PKG_CompiledIn)");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        FVar17.Data = FVar17.Data + 8;
      }
    }
    if (local_3b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data);
    }
  }
  UE::FScopedObjectSerializeContext::~FScopedObjectSerializeContext(&local_368);
  AppendCurrentExportDependencies(local_328.Harvester);
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&(local_328.Harvester)->CurrentExportHarvestingRealms,
             &local_328.PreviousExportHarvestingRealms);
  (**(code **)((local_328.Harvester)->_padding_ + 0x80))
            (local_328.Harvester,local_328.bPreviousFilterEditorOnly);
  (**(code **)((local_328.Harvester)->_padding_ + 0x88))
            (local_328.Harvester,local_328.bPreviousSavingOptionalObject);
  if (local_328.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_328.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData);
  }
  return;
}

// ProcessImport @ 142217b80

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageHarvester::ProcessImport
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FSaveContext *pFVar3;
  FName FVar4;
  UObject *pUVar5;
  bool bVar6;
  int iVar7;
  UClass *this_00;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  UObject *local_res8;
  TObjectPtr<UObject>_u_0 local_res10;
  UObjectBaseUtility *local_res20;
  longlong local_88;
  UClass *local_80;
  UObject *local_78;
  FName local_70;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  piVar1 = &(this->CurrentExportDependencies).ProcessImportDepth;
  *piVar1 = *piVar1 + 1;
  pFVar3 = this->SaveContext;
  local_res8 = *(UObject **)param_1.field0_0x0;
  local_res10 = param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  this_00 = (UClass *)FSaveContext::ResolveForSave(pFVar3,(TObjectPtr<UObject>)&local_res8,param_2);
  bVar6 = IsObjNative((UObject *)this_00);
  local_78 = (UObject *)this_00->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  local_88 = this_00->_padding_;
  FVar4 = (FName)this_00->_padding_;
  if ((((this->SaveContext->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) && (!bVar6)) &&
     ((this->CurrentExportDependencies).bIgnoreDependencies == false)) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if (((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
         &pUVar8->_padding_)) && (this_00 != (UClass *)0x0)) {
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar5 != (UObject *)0x0) {
        local_res8 = (UObject *)
                     CONCAT71(local_res8._1_7_,(this->CurrentExportDependencies).bIgnoreDependencies
                             );
        (this->CurrentExportDependencies).bIgnoreDependencies = true;
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 0;
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_68.AllocatorInstance,&local_68.ArrayMax);
        local_68.ArrayNum = iVar7 + 1;
        *(UObject **)(local_68.AllocatorInstance.Data + (longlong)iVar7 * 8) = pUVar5;
        UE::SavePackageUtilities::GetCDOSubobjects(pUVar5,&local_68);
        iVar7 = local_68.ArrayNum;
        uVar10 = (ulonglong)local_68.ArrayNum;
        pFVar2 = local_68.AllocatorInstance.Data + uVar10 * 8;
        FVar11.Data = local_68.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar10 != iVar7) {
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res20);
          }
          if (FVar11.Data == pFVar2) break;
          local_res20 = *(UObjectBaseUtility **)FVar11.Data;
          if ((*(uint *)&local_res20->field_0x8 & 1) == 0) {
            if (2 < (byte)LogSavePackage._0_1_) {
              UObjectBaseUtility::GetPathName(local_res20,&local_48,(UObject *)0x0);
              local_70 = (FName)this->SaveContext->Package->_padding_;
              ::FName::ToString(&local_70,&local_58);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            uVar10 = local_68._8_8_ & 0xffffffff;
            FVar11.Data = FVar11.Data + 8;
          }
          else {
            (**(code **)(this->_padding_ + 0x168))(this,&local_res20);
            uVar10 = local_68._8_8_ & 0xffffffff;
            FVar11.Data = FVar11.Data + 8;
          }
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        (this->CurrentExportDependencies).bIgnoreDependencies = local_res8._0_1_;
        param_1.field0_0x0 = local_res10;
      }
    }
  }
  HarvestPackageHeaderName(this,FVar4);
  if (local_78 != (UObject *)0x0) {
    (**(code **)(this->_padding_ + 0x150))(this,&local_78);
  }
  local_80 = (UClass *)UObjectBase::GetExternalPackage((UObjectBase *)this_00);
  if ((local_80 == (UClass *)0x0) || (local_80 == this_00)) {
    if ((this->_padding_ & 0x10000000) == 0) {
      local_res10.DebugPtr = (UObject *)0x0;
      HarvestPackageHeaderName(this,(FName)0x0);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x168))(this,&local_80);
                    /* WARNING: Load size is inaccurate */
    local_res10.DebugPtr = *param_1.field0_0x0.DebugPtr;
    pFVar3 = this->SaveContext;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_res10.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_res10.DebugPtr);
    }
    bVar6 = FSaveContext::IsIncluded(pFVar3,(TObjectPtr<UObject>)&local_res10);
    if (bVar6) {
      pFVar3 = this->SaveContext;
      local_res10.DebugPtr = (UObject *)local_80;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_80);
      }
      bVar6 = FSaveContext::IsIncluded(pFVar3,(TObjectPtr<UObject>)&local_res10);
      if (!bVar6) {
        pFVar3 = this->SaveContext;
        local_res10 = (TObjectPtr<UObject>_u_0)local_80->_padding_;
        ::FName::ToString((FName *)&local_res10.ObjectPtr,&local_58);
        FSaveContext::RecordIllegalReference
                  (pFVar3,(this->CurrentExportDependencies).CurrentExport,
                   *(UObject **)param_1.field0_0x0,ExternalPackage,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_88 + 0xc));
  if (((ulonglong)((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0) {
    (**(code **)(this->_padding_ + 0x168))(this,&local_88);
    piVar1 = &(this->CurrentExportDependencies).ProcessImportDepth;
    *piVar1 = *piVar1 + -1;
    return;
  }
  HarvestPackageHeaderName(this,*(FName *)(local_88 + 0x18));
  HarvestPackageHeaderName(this,*(FName *)(*(longlong *)(local_88 + 0x20) + 0x18));
  piVar1 = &(this->CurrentExportDependencies).ProcessImportDepth;
  *piVar1 = *piVar1 + -1;
  return;
}

// ReleaseTransientPropertyOverrides @ 14221a7c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FPackageHarvester::ReleaseTransientPropertyOverrides
          (FPackageHarvester *this,
          TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,
             (TSet<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&this->TransientPropertyOverrides);
  return __return_storage_ptr__;
}

// ResolveOverrides @ 14221bfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FPackageHarvester::ResolveOverrides(FPackageHarvester *this)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FSaveContext *pFVar4;
  FFieldClass *pFVar5;
  UPackage *pUVar6;
  ForElementType<ESaveRealm> FVar7;
  code *pcVar8;
  FPackageHarvester *pFVar9;
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *pTVar10;
  bool bVar11;
  FFieldClass *pFVar12;
  FField *pFVar13;
  FHarvestedRealm *pFVar14;
  UObject *pUVar15;
  TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
  *pTVar16;
  FObjectStatus *pFVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  FFieldPath *pFVar22;
  ForAnyElementType FVar23;
  UObject *pUVar24;
  TObjectPtr<UObject>_u_0 TVar25;
  FObjectStatus *pFVar26;
  uint uVar27;
  longlong *plVar28;
  uint uVar29;
  ForAnyElementType FVar30;
  ForElementType<ESaveRealm> FVar31;
  undefined1 *puVar32;
  uint *puVar33;
  int iVar34;
  FFieldPath *pFVar35;
  FObjectStatus *pFVar36;
  FPackageHarvester *pFVar37;
  undefined4 uVar38;
  undefined1 auStack_238 [32];
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  FPackageHarvester *local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  FName local_1e0;
  FObjectStatus *local_1d8;
  FObjectStatus *local_1d0;
  longlong *local_1c8;
  FFieldPath *local_1c0;
  int local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FFieldPath *local_198;
  TObjectPtr<UObject>_u_0 local_190;
  FString local_188;
  FString local_178;
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  FNameEntryId local_130;
  undefined1 local_12c [8];
  undefined1 local_124 [12];
  FString local_118;
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
  local_c8;
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *local_c0;
  undefined8 uStack_b8;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined8 uStack_a8;
  int iStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  undefined8 uStack_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pFVar4 = this->SaveContext;
  iStack_160 = 0;
  local_148 = 0;
  uStack_15c = 1;
  puVar1 = &(pFVar4->ObjectSaveContext).SaveOverrides.field_0x10;
  iVar2 = *(int *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x28;
  local_168 = &(pFVar4->ObjectSaveContext).SaveOverrides;
  iStack_14c = 0;
  if (iVar2 != 0) {
    puVar33 = *(uint **)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar1;
    }
    uVar19 = *puVar33;
    while (uVar19 == 0) {
      lVar20 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      iStack_14c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160) goto LAB_14221c07d;
      uVar19 = puVar33[lVar20 + 1];
    }
    uStack_15c = -uVar19 & uVar19;
    uVar21 = (ulonglong)uStack_15c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_138 = (int)lVar20;
    iStack_14c = local_148 + -1 + local_138;
    if (iVar2 < iStack_14c) {
      iStack_14c = iVar2;
    }
  }
LAB_14221c07d:
  uVar19 = *(uint *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x28;
  bVar18 = (byte)uVar19 & 0x1f;
  iStack_140 = *(int *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x8 -
               *(int *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x34;
  uVar29 = uVar19 & 0xffffffe0;
  iVar34 = (int)uVar19 >> 5;
  uStack_1b4 = 1 << bVar18;
  uVar27 = -1 << bVar18;
  uStack_150 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_15c,iStack_160);
  TStack_100.CurrentBitIndex = iStack_14c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._28_4_ = iStack_14c;
  TStack_100.BaseBitIndex = local_148;
  uStack_e0 = CONCAT44(uStack_13c,iStack_140);
  local_1f0 = this;
  local_1b8 = iVar34;
  pTStack_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_1a8 = uVar27;
  uStack_1a4 = uVar19;
  uStack_1a0 = uVar29;
  local_158 = puVar1;
  iStack_144 = iStack_14c;
  local_108 = local_168;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar2 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar3 = *(uint *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x28;
  if (uVar19 != uVar3) {
    puVar32 = *(undefined1 **)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar1;
    }
    uVar27 = uVar27 & *(uint *)(puVar32 + (longlong)iVar34 * 4);
    while (uVar27 == 0) {
      uStack_1a0 = uVar29 + 0x20;
      local_1b8 = iVar34 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1b8)
      goto LAB_14221c1b8;
      uVar27 = *(uint *)(puVar32 + (longlong)iVar34 * 4 + 4);
      local_1a8 = 0xffffffff;
      uVar29 = uStack_1a0;
      iVar34 = local_1b8;
    }
    uStack_1b4 = -uVar27 & uVar27;
    uVar21 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_134 = (int)lVar20;
    uStack_1a4 = local_134 + -1 + uVar29;
    if ((int)uVar3 < (int)uStack_1a4) {
LAB_14221c1b8:
      uStack_1a4 = uVar3;
    }
  }
  uStack_b8._4_4_ = uStack_1b4;
  uStack_b8._0_4_ = local_1b8;
  local_c0 = &(pFVar4->ObjectSaveContext).SaveOverrides;
  iStack_a4 = uStack_1a4;
  uStack_a8._0_4_ = local_1a8;
  local_a0._4_4_ = uStack_19c;
  local_a0._0_4_ = uStack_1a0;
  local_60 = *(int *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x8 -
             *(int *)&(pFVar4->ObjectSaveContext).SaveOverrides.field_0x34;
  local_88._16_8_ = pTStack_1b0;
  uStack_98 = CONCAT44(local_5c,local_60);
  local_b0 = pTStack_1b0;
  local_88._0_8_ = local_c0;
  local_88._8_8_ = uStack_b8;
  local_88._24_8_ = uStack_a8;
  uStack_68 = local_a0;
  do {
    pTVar10 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_1f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectSaveOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    if (((TStack_100.CurrentBitIndex == iStack_a4) && (TStack_100.Array == local_b0)) &&
       (pTVar10 == local_c0)) {
      return;
    }
    lVar20 = *(longlong *)pTVar10;
    local_1e4 = *(uint *)(lVar20 + 0x10 + (longlong)TStack_100.CurrentBitIndex * 0x28);
    uVar21 = (ulonglong)(int)local_1e4;
    local_1c8 = (longlong *)(lVar20 + (longlong)TStack_100.CurrentBitIndex * 0x28);
    pFVar35 = (FFieldPath *)local_1c8[1];
    local_88._0_8_ =
         (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
          *)0x0;
    local_1c0 = (FFieldPath *)((longlong)pFVar35 + uVar21 * 0x28);
    local_88._8_8_ = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    pFVar22 = local_1c0;
    plVar28 = local_1c8;
    pFVar37 = local_1f0;
    while( true ) {
      pFVar36 = (FObjectStatus *)0x0;
      local_198 = pFVar35;
      if ((int)plVar28[2] != (int)uVar21) {
        local_1f7 = 0;
        `TCheckedPointerIterator<FPropertySaveOverride,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1f7);
      }
      pFVar9 = local_1f0;
      uVar38 = 0;
      if (pFVar35 == pFVar22) break;
      if (*(char *)&pFVar35[1].ResolvedField == '\0') {
        uVar21 = (ulonglong)local_1e4;
        pFVar35 = (FFieldPath *)&pFVar35[1].ResolvedOwner;
        local_1d0 = (FObjectStatus *)0x0;
      }
      else {
        pFVar12 = FProperty::StaticClass();
        if (((pFVar35->ResolvedField == (FField *)0x0) ||
            (bVar11 = FWeakObjectPtr::IsValid(&(pFVar35->ResolvedOwner).WeakPtr), !bVar11)) &&
           ((pFVar35->Path).ArrayNum != 0)) {
          pFVar13 = FFieldPath::TryToResolvePath(pFVar35,(UStruct *)0x0,UseStructIfOuterNotFound);
          if (pFVar13 != (FField *)0x0) {
            if ((pFVar12 == (FFieldClass *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FieldType",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                    ,0x2dd,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar5 = pFVar13->ClassPrivate;
            if (pFVar12->Id == CASTCLASS_None) {
              for (; pFVar5 != (FFieldClass *)0x0; pFVar5 = pFVar5->SuperClass) {
                if (pFVar5 == pFVar12) {
                  bVar11 = true;
                  goto LAB_14221c3a1;
                }
              }
              bVar11 = false;
            }
            else {
              bVar11 = (pFVar5->CastFlags & pFVar12->Id) != CASTCLASS_None;
            }
LAB_14221c3a1:
            if (bVar11) {
              pFVar35->ResolvedField = pFVar13;
              goto LAB_14221c3c6;
            }
          }
          if (pFVar35->ResolvedField != (FField *)0x0) {
            (pFVar35->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
            pFVar35->ResolvedField = (FField *)0x0;
          }
        }
LAB_14221c3c6:
        pFVar26 = (FObjectStatus *)pFVar35->ResolvedField;
        if ((pFVar26 == (FObjectStatus *)0x0) ||
           (((uint)(pFVar26->RealmInstigator[0].Property)->_padding_ >> 0xf & 1) == 0)) {
          pFVar26 = pFVar36;
        }
        local_1d0 = pFVar26;
        if (pFVar26 == (FObjectStatus *)0x0) {
LAB_14221c6ca:
          pFVar35 = (FFieldPath *)&pFVar35[1].ResolvedOwner;
          uVar21 = (ulonglong)local_1e4;
          pFVar22 = local_1c0;
          plVar28 = local_1c8;
        }
        else {
          pFVar36 = pFVar26;
          local_1d8 = pFVar26;
          if ((((uint)(pFVar26->RealmInstigator[0].Property)->_padding_ >> 0x15 & 1) != 0) &&
             (pFVar36 = (FObjectStatus *)pFVar26[1].SaveableStatusCulprit, local_1d8 = pFVar36,
             pFVar36 == (FObjectStatus *)0x0)) {
            pUVar6 = pFVar37->SaveContext->Package;
            if (pUVar6 == (UPackage *)0x0) {
              ::FString::FString(&local_178,L"None");
            }
            else {
              local_124._4_8_ = pUVar6->_padding_;
              ::FName::ToString((FName *)(local_124 + 4),&local_178);
            }
            FVar23.Data = (FScriptContainerElement *)L"";
            if (local_178.Data.ArrayNum != 0) {
              FVar23.Data = local_178.Data.AllocatorInstance.Data;
            }
            ::FName::ToString((FName *)pFVar26->RealmInstigator[0].Property,&local_118);
            FVar30.Data = (FScriptContainerElement *)L"";
            if (local_118.Data.ArrayNum != 0) {
              FVar30.Data = local_118.Data.AllocatorInstance.Data;
            }
            bVar11 = IsThisNotNull(pFVar26,"FField::GetName");
            if (bVar11) {
              ::FName::ToString((FName *)(pFVar26->RealmInstigator + 2),&local_188);
            }
            else {
              ::FString::FString(&local_188,L"None");
            }
            local_218 = (FScriptContainerElement *)L"";
            if (local_188.Data.ArrayNum != 0) {
              local_218 = local_188.Data.AllocatorInstance.Data;
            }
            local_210 = FVar30.Data;
            local_208 = FVar23.Data;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                                ,0x4c2,
                                L"Missing InnerProp for ArrayProperty.Name: %s, Type: %s. Package: %s"
                               );
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          bVar11 = IsThisNotNull(pFVar26,"FField::GetFName");
          pFVar37 = local_1f0;
          if (bVar11) {
            uVar38 = SUB84(pFVar26->RealmInstigator[2].Object,0);
          }
          iVar2 = (local_1f0->CurrentExportHarvestingRealms).ArrayNum;
          FVar31 = (ForElementType<ESaveRealm>)&local_1f0->CurrentExportHarvestingRealms;
          FVar7 = (local_1f0->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
          if (FVar7 != (ForElementType<ESaveRealm>)0x0) {
            FVar31 = FVar7;
          }
          FVar7 = (ForElementType<ESaveRealm>)((longlong)FVar31 + (longlong)iVar2 * 4);
          while( true ) {
            if ((pFVar37->CurrentExportHarvestingRealms).ArrayNum != iVar2) {
              local_1f6[0] = 0;
              `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1f6);
            }
            if (FVar31 == FVar7) break;
            pFVar14 = FSaveContext::GetHarvestedRealm(pFVar37->SaveContext,*(ESaveRealm *)FVar31);
            local_1e8 = uVar38;
            TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator>::
            Emplace<FNameEntryId>
                      (&pFVar14->NamesReferencedFromExportData,&local_130,(bool *)&local_1e8);
            FVar31 = (ForElementType<ESaveRealm>)((longlong)FVar31 + 4);
          }
          TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>::
          Emplace<FProperty_*_const_&>
                    ((TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)
                     local_88,(FProperty **)local_12c,(bool *)&local_1d0);
          pFVar35 = local_198;
          pFVar37 = local_1f0;
          if (pFVar26 == pFVar36) goto LAB_14221c6ca;
          bVar11 = IsThisNotNull(pFVar36,"FField::GetFName");
          pUVar15 = (UObject *)0x0;
          pUVar24 = pUVar15;
          if (bVar11) {
            pUVar24 = pFVar36->RealmInstigator[2].Object;
          }
          bVar11 = IsThisNotNull(pFVar26,"FField::GetFName");
          if (bVar11) {
            pUVar15 = pFVar26->RealmInstigator[2].Object;
          }
          pFVar37 = local_1f0;
          if (pUVar15 != pUVar24) {
            bVar11 = IsThisNotNull(pFVar36,"FField::GetFName");
            pFVar37 = local_1f0;
            if (bVar11) {
              local_1e0 = *(FName *)(pFVar36->RealmInstigator + 2);
              HarvestExportDataName(local_1f0,local_1e0);
            }
            else {
              local_1e0.ComparisonIndex.Value = 0;
              local_1e0.Number = 0;
              HarvestExportDataName(local_1f0,(FName)0x0);
            }
          }
          TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>::
          Emplace<FProperty_*_const_&>
                    ((TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)
                     local_88,(FProperty **)(local_12c + 4),(bool *)&local_1d8);
          uVar21 = (ulonglong)local_1e4;
          pFVar35 = (FFieldPath *)&pFVar35[1].ResolvedOwner;
          pFVar22 = local_1c0;
          plVar28 = local_1c8;
        }
      }
    }
    if (local_88._8_4_ != local_54) {
      local_d0 = local_88;
      local_d8 = plVar28;
      TSet<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UObject_*_const_&,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_&&>_>
                ((TSet<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)&local_1f0->TransientPropertyOverrides,
                 (TPairInitializer<UObject_*_const_&,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_&&>
                  *)local_124,(bool *)&local_d8);
    }
    if (((*(uint *)(*plVar28 + 8) & 0x40) == 0) && ((char)plVar28[3] != '\0')) {
      pFVar4 = pFVar9->SaveContext;
      TVar25.DebugPtr = (UObject *)*plVar28;
      local_190.DebugPtr = TVar25.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar25.DebugPtr != (UObject *)0x0) {
          UE::GC::MarkAsReachable(TVar25.DebugPtr);
        }
        TVar25 = local_190;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_190.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190.DebugPtr);
        }
      }
      uVar19 = ((uint)((ulonglong)TVar25.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar25.DebugPtr >> 4)) * -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      pTVar16 = TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
                ::FindOrAddImpl<TObjectPtr<UObject>_const_&>
                          ((TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
                            *)&pFVar4->ObjectStatusCache,uVar19 >> 0x10 ^ uVar19,
                           (TObjectPtr<UObject> *)&local_190.ObjectPtr);
      if (pTVar16->Ptr == (FObjectStatus *)0x0) {
        pFVar17 = ::operator_new(0x48);
        pFVar26 = pFVar36;
        if (pFVar17 != (FObjectStatus *)0x0) {
          pFVar17->RealmInstigator[0].Object = (UObject *)0x0;
          pFVar17->RealmInstigator[0].Property = (FProperty *)0x0;
          pFVar17->RealmInstigator[1].Object = (UObject *)0x0;
          pFVar17->RealmInstigator[1].Property = (FProperty *)0x0;
          pFVar17->RealmInstigator[2].Object = (UObject *)0x0;
          pFVar17->RealmInstigator[2].Property = (FProperty *)0x0;
          pFVar17->SaveableStatusCulprit = (UObject *)0x0;
          pFVar17->SaveableStatus = Success;
          pFVar17->SaveableStatusCulpritStatus = Success;
          puVar1 = &pFVar17->field_0x40;
          pFVar17->bSaveOverrideForcedTransient = false;
          pFVar17->bDeclaredSaveBuildDependency = false;
          pFVar17->bIsInSavePackage = false;
          pFVar17->bIsInSavePackageValid = false;
          pFVar17->bAttemptedExport = false;
          pFVar17->bEditorOnly = false;
          pFVar17->bEditorOnlyValid = false;
          pFVar17->bSaveableStatusValid = false;
          pFVar26 = pFVar17;
        }
        if (pTVar16 != &local_c8) {
          pFVar17 = pTVar16->Ptr;
          pTVar16->Ptr = pFVar26;
          ::operator_delete(pFVar17,0x48);
          pFVar26 = pFVar36;
        }
        ::operator_delete(pFVar26,0x48);
      }
      pTVar16->Ptr->bSaveOverrideForcedTransient = true;
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FProperty_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FProperty_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FProperty_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

// SetInstigatorFromProcessingStack @ 14222aba0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::SetInstigatorFromProcessingStack
          (FPackageHarvester *this,FObjectStatus *param_1,ESaveRealm param_2)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FRealmInstigator *pFVar4;
  
  pFVar4 = param_1->RealmInstigator + param_2;
  if (pFVar4->Object == (UObject *)0x0) {
    pFVar4->Property = (FProperty *)0x0;
    pUVar1 = (this->CurrentExportDependencies).CurrentExport;
    if (pUVar1 == (UObject *)0x0) {
      pFVar4->Object = (UObject *)this->SaveContext->Package;
    }
    else {
      pFVar4->Object = pUVar1;
      puVar2 = (undefined8 *)this->_padding_;
      if ((puVar2 != (undefined8 *)0x0) && (0 < *(int *)(puVar2 + 9))) {
        puVar3 = (undefined8 *)puVar2[8];
        if ((undefined8 *)puVar2[8] == (undefined8 *)0x0) {
          puVar3 = puVar2;
        }
        pFVar4->Property = (FProperty *)*puVar3;
        return;
      }
    }
  }
  return;
}

// ShouldObjectBeHarvestedInOptionalRealm @ 14222bff0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __cdecl
FPackageHarvester::ShouldObjectBeHarvestedInOptionalRealm
          (TObjectPtr<UObject> param_1,FSaveContext *param_2)

{
  UClass *pUVar1;
  
  if ((param_2->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
    return false;
  }
  if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
    pUVar1 = UE::CoreUObject::Private::GetClass(*(UObject **)param_1.field0_0x0);
    return (bool)((byte)(pUVar1->ClassFlags >> 4) & 1);
  }
  return (bool)((byte)(uRam00000000000000d4 >> 4) & 1);
}

// ShouldSkipProperty @ 14222c040

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FPackageHarvester::ShouldSkipProperty(FPackageHarvester *this,FProperty *param_1)

{
  int iVar1;
  TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  pTVar2 = TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
                   *)&this->TransientPropertyOverrides,
                  (this->CurrentExportDependencies).CurrentExport);
  if ((pTVar2 != (TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)0x0) &&
     (uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595, uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb,
     *(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34)) {
    FVar4 = (pTVar2->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)(pTVar2->HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(FProperty **)(*(longlong *)&pTVar2->Elements + (longlong)iVar1 * 0x10) == param_1) {
          return true;
        }
        iVar1 = *(int *)(*(longlong *)&pTVar2->Elements + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// TryHarvestExport @ 142231f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FPackageHarvester::TryHarvestExport(FPackageHarvester *this,UObject *param_1,FObjectStatus *param_2)

{
  TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  FSaveContext *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  UClass *pUVar8;
  ForElementType<ESaveRealm> FVar9;
  longlong lVar10;
  ForElementType<ESaveRealm> _Dst;
  undefined1 auStackY_e8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  ForElementType<ESaveRealm> local_88;
  int local_78;
  int local_74;
  FHarvestScope local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (((this->CurrentExportHarvestingRealms).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyExportHarvestingRealms()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                         ,0x2b7,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FHarvestScope::FHarvestScope(&local_70,this);
  pFVar3 = this->SaveContext;
  local_88.SecondaryData = (ForElementType<ESaveRealm>)0x0;
  local_78 = 0;
  local_74 = 2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  if ((pFVar3->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
LAB_142232138:
    if (this->SaveContext->CurrentHarvestingRealm == Optional) {
      local_94 = 1;
      FVar9 = (ForElementType<ESaveRealm>)&local_88;
      if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
        FVar9 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_94) {
        FVar9 = (ForElementType<ESaveRealm>)&local_88;
        if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
          FVar9 = local_88.SecondaryData;
        }
        if ((&local_94 < (undefined4 *)((longlong)FVar9 + (longlong)local_74 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_78 == local_74) {
        local_78 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                             (0x404,&local_88,&local_74);
      }
      lVar10 = (longlong)local_78;
      uVar7 = local_94;
      local_78 = local_78 + 1;
    }
    else {
      local_90 = 0;
      FVar9 = (ForElementType<ESaveRealm>)&local_88;
      if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
        FVar9 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_90) {
        FVar9 = (ForElementType<ESaveRealm>)&local_88;
        if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
          FVar9 = local_88.SecondaryData;
        }
        if ((&local_90 < (undefined4 *)((longlong)FVar9 + (longlong)local_74 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_78 == local_74) {
        local_78 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                             (0x404,&local_88,&local_74);
      }
      lVar10 = (longlong)local_78;
      FVar9 = (ForElementType<ESaveRealm>)&local_88;
      if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
        FVar9 = local_88.SecondaryData;
      }
      local_78 = local_78 + 1;
      *(undefined4 *)((longlong)FVar9 + lVar10 * 4) = local_90;
      if ((this->SaveContext->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0)
      goto LAB_1422323bd;
      local_8c = 2;
      FVar9 = (ForElementType<ESaveRealm>)&local_88;
      if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
        FVar9 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_8c) {
        FVar9 = (ForElementType<ESaveRealm>)&local_88;
        if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
          FVar9 = local_88.SecondaryData;
        }
        if ((&local_8c < (undefined4 *)((longlong)FVar9 + (longlong)local_74 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_78 == local_74) {
        local_78 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                             (0x404,&local_88,&local_74);
      }
      lVar10 = (longlong)local_78;
      uVar7 = local_8c;
      local_78 = local_78 + 1;
    }
  }
  else {
    if (param_1 == (UObject *)0x0) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = UE::CoreUObject::Private::GetClass(param_1);
    }
    if ((pUVar8->ClassFlags & CLASS_Optional) == CLASS_None) goto LAB_142232138;
    local_98 = 1;
    FVar9 = (ForElementType<ESaveRealm>)&local_88;
    if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
      FVar9 = local_88.SecondaryData;
    }
    if ((ulonglong)FVar9 <= &local_98) {
      FVar9 = (ForElementType<ESaveRealm>)&local_88;
      if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
        FVar9 = local_88.SecondaryData;
      }
      if ((&local_98 < (undefined4 *)((longlong)FVar9 + (longlong)local_74 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_78 == local_74) {
      local_78 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                           (0x404,&local_88,&local_74);
    }
    lVar10 = (longlong)local_78;
    uVar7 = local_98;
    local_78 = local_78 + 1;
  }
  FVar9 = (ForElementType<ESaveRealm>)&local_88;
  if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
    FVar9 = local_88.SecondaryData;
  }
  *(undefined4 *)((longlong)FVar9 + lVar10 * 4) = uVar7;
LAB_1422323bd:
  iVar5 = local_78;
  pTVar1 = &this->CurrentExportHarvestingRealms;
  if (pTVar1 != (TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                &local_88) {
    piVar2 = &(this->CurrentExportHarvestingRealms).ArrayMax;
    lVar10 = (longlong)local_78;
    FVar9 = (ForElementType<ESaveRealm>)&local_88;
    if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
      FVar9 = local_88.SecondaryData;
    }
    (this->CurrentExportHarvestingRealms).ArrayNum = local_78;
    if ((local_78 == 0) && (*piVar2 == 0)) {
      *piVar2 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,local_78,*piVar2,&pTVar1->AllocatorInstance,local_78,piVar2);
      _Dst = (this->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
      if (iVar5 != 0) {
        if (_Dst == (ForElementType<ESaveRealm>)0x0) {
          _Dst = (ForElementType<ESaveRealm>)pTVar1;
        }
        memcpy((void *)_Dst,(void *)FVar9,lVar10 << 2);
      }
    }
  }
  TryHarvestExportInternal(this,param_1,param_2);
  if (local_88.SecondaryData != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  if (local_70.bActive != false) {
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&(local_70.Harvester)->CurrentExportHarvestingRealms,
               &local_70.PreviousExportHarvestingRealms);
  }
  if (local_70.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_70.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData);
  }
  return;
}

// TryHarvestExportInternal @ 1422324e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPackageHarvester::TryHarvestExportInternal
          (FPackageHarvester *this,UObject *param_1,FObjectStatus *param_2)

{
  byte bVar1;
  UPackage *pUVar2;
  FSaveContext *pFVar3;
  UStruct *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  FFieldClass *pFVar9;
  TTuple<FProperty_const_*,void_const_*> *pTVar10;
  UObjectBaseUtility *this_00;
  FObjectStatus *pFVar11;
  UPackage *pUVar12;
  byte bVar13;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar14;
  undefined1 auStackY_858 [32];
  UObject *local_828;
  UObject *local_820;
  UObject *local_818;
  UObjectBaseUtility *local_810;
  <lambda_1> local_808;
  <lambda_1> local_7f8;
  FHarvestScope local_7e0;
  FHarvestScope local_7b8;
  FHarvestScope local_790;
  FPropertyValueIterator local_768;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_858;
  if (param_1 != (UObject *)0x0) {
    pUVar2 = this->SaveContext->Package;
    local_828 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    bVar7 = UE::SavePackageUtilities::FObjectStatus::IsInSavePackage
                      (param_2,(TObjectPtr<UObject>)&local_828,pUVar2);
    if (bVar7) goto LAB_142232578;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("InObject && ObjectStatus.IsInSavePackage(InObject, SaveContext.GetPackage())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                     ,0x2da,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_142232578:
  local_820 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  EnterConditionalOptionalObjectScope(this,&local_790,(TObjectPtr<UObject>)&local_820);
  FHarvestScope::FHarvestScope(&local_7b8,this);
  local_808.__this = this;
  local_808.Export = param_1;
  TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  RemoveAllSwap<_FPackageHarvester::EnterNewExportOnlyScope_::__l2::<lambda_1>_>
            (&this->CurrentExportHarvestingRealms,&local_808,No);
  if (((local_7b8.Harvester)->CurrentExportHarvestingRealms).ArrayNum != 0) {
    param_2->bAttemptedExport = true;
    pFVar3 = this->SaveContext;
    local_818 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    bVar7 = FSaveContext::IsUnsaveable(pFVar3,(TObjectPtr<UObject>)&local_818,param_2,true);
    if (!bVar7) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FHarvestScope::FHarvestScope(&local_7e0,this);
      local_7f8.__this = this;
      local_7f8.Object.field0_0x0 = (TObjectPtr<UObject>_u_0)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_7f8.ObjectStatus = param_2;
      TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
      RemoveAllSwap<_FPackageHarvester::EnterNotExcludedScope_::__l2::<lambda_1>_>
                (&this->CurrentExportHarvestingRealms,&local_7f8,No);
      if (((local_7e0.Harvester)->CurrentExportHarvestingRealms).ArrayNum != 0) {
        HarvestExport(this,param_1,param_2);
        bVar7 = FOverridableSerializationLogic::HasCapabilities(SubObjectsShadowSerialization);
        if (!bVar7) {
          if (FOverridableManager::OverridableManager == (FOverridableManager *)0x0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OverridableManager",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                               ,0x43,L"Expected the overridable manager to be created.");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (param_1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          bVar7 = FOverridableManager::IsEnabled
                            (FOverridableManager::OverridableManager,
                             (TNotNull<UObject_const_*>)param_1);
          if (bVar7) {
            pUVar4 = *(UStruct **)&param_1->field_0x10;
            pFVar9 = FObjectProperty::StaticClass();
            FPropertyValueIterator::FPropertyValueIterator
                      (&local_768,pFVar9,pUVar4,param_1,FullRecursion,IncludeDeprecated);
            while( true ) {
              if (local_768.PropertyIteratorStack.ArrayNum < 1) break;
              pTVar10 = FPropertyValueIterator::operator->(&local_768);
              plVar5 = *(longlong **)pTVar10;
              cVar8 = (**(code **)(this->_padding_ + 0x98))(this,plVar5);
              if (cVar8 == '\0') {
                pcVar6 = *(code **)(*plVar5 + 0x1f8);
                pTVar10 = FPropertyValueIterator::operator->(&local_768);
                this_00 = (UObjectBaseUtility *)(*pcVar6)(plVar5,*(undefined8 *)&pTVar10->field_0x8)
                ;
                if (this_00 != (UObjectBaseUtility *)0x0) {
                  bVar7 = UObjectBaseUtility::IsInOuter(this_00,param_1);
                  if (bVar7) {
                    pFVar3 = this->SaveContext;
                    local_810 = this_00;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this_00);
                    }
                    pFVar11 = FSaveContext::GetCachedObjectStatus
                                        (pFVar3,(TObjectPtr<UObject>)&local_810);
                    pUVar2 = this->SaveContext->Package;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this_00);
                    }
                    bVar13 = pFVar11->field_0x40;
                    if (!pFVar11->bIsInSavePackageValid) {
                      pUVar12 = UE::CoreUObject::Private::GetPackage((UObject *)this_00);
                      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142232869:
                        if (pUVar12 != (UPackage *)0x0) goto LAB_14223282e;
LAB_14223286e:
                        bVar7 = pUVar2 == (UPackage *)0x0;
                      }
                      else {
                        if (pUVar12 != (UPackage *)0x0) {
                          UE::GC::MarkAsReachable((UObject *)pUVar12);
                        }
                        if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142232869;
                        if (pUVar12 == (UPackage *)0x0) goto LAB_14223286e;
                        UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14223282e:
                        bVar7 = pUVar12 == pUVar2;
                      }
                      bVar1 = pFVar11->field_0x40;
                      bVar13 = bVar1 & 0xbf | bVar7 << 6 | 0x20;
                      pFVar11->bIsInSavePackageValid = true;
                      pFVar11->bIsInSavePackage = bVar7;
                    }
                    if ((bVar13 & 0x40) != 0) {
                      TryHarvestExportInternal(this,(UObject *)this_00,pFVar11);
                    }
                  }
                }
              }
              FPropertyValueIterator::IterateToNext(&local_768);
            }
            FVar14 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_768;
            if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
                (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
              FVar14 = local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData;
            }
            DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                      ((FPropertyValueStackEntry *)FVar14,local_768.PropertyIteratorStack.ArrayNum);
            if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
                (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
              FMemory::Free((void *)local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData)
              ;
            }
          }
        }
      }
      if (local_7e0.bActive != false) {
        TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
                  (&(local_7e0.Harvester)->CurrentExportHarvestingRealms,
                   &local_7e0.PreviousExportHarvestingRealms);
      }
      if (local_7e0.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
          (ForElementType<ESaveRealm>)0x0) {
        FMemory::Free((void *)local_7e0.PreviousExportHarvestingRealms.AllocatorInstance.
                              SecondaryData);
      }
    }
  }
  if (local_7b8.bActive != false) {
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&(local_7b8.Harvester)->CurrentExportHarvestingRealms,
               &local_7b8.PreviousExportHarvestingRealms);
  }
  if (local_7b8.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_7b8.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData);
  }
  if (local_790.bActive != false) {
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&(local_790.Harvester)->CurrentExportHarvestingRealms,
               &local_790.PreviousExportHarvestingRealms);
  }
  if (local_790.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_790.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData);
  }
  return;
}

// TryHarvestImport @ 142232950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPackageHarvester::TryHarvestImport
          (FPackageHarvester *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  UObject *pUVar1;
  FSaveContext *this_00;
  TObjectPtr<UObject>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UPackage *pUVar6;
  UPackage *pUVar7;
  undefined1 auStack_e8 [32];
  UObject *local_c8;
  UObject *local_c0;
  UObject *local_b8;
  UObject *local_b0;
  <lambda_1> local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FHarvestScope local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if (pUVar1 != (UObject *)0x0) {
    pUVar6 = this->SaveContext->Package;
    local_c8 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    bVar4 = UE::SavePackageUtilities::FObjectStatus::IsInSavePackage
                      (param_2,(TObjectPtr<UObject>)&local_c8,pUVar6);
    if (!bVar4) goto LAB_1422329dc;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("InObject && !ObjectStatus.IsInSavePackage(InObject, SaveContext.GetPackage())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\PackageHarvester.cpp"
                     ,0x341,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1422329dc:
  local_c0 = *(UObject **)param_1.field0_0x0;
  if (local_c0 != (UObject *)0x0) {
    this_00 = this->SaveContext;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_c0);
    }
    bVar4 = FSaveContext::IsUnsaveable(this_00,(TObjectPtr<UObject>)&local_c0,param_2,true);
    if (!bVar4) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreUObjectDelegates::ShouldCookPackageForPlatform,&local_90);
      if (((FCoreUObjectDelegates::ShouldCookPackageForPlatform._16_4_ == 0) ||
          (FCoreUObjectDelegates::ShouldCookPackageForPlatform._8_8_ == 0)) ||
         (cVar5 = (**(code **)(*(longlong *)
                                FCoreUObjectDelegates::ShouldCookPackageForPlatform._8_8_ + 0x38))()
         , cVar5 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_90);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_90);
        pUVar6 = (UPackage *)0x0;
        if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
          pUVar6 = UE::CoreUObject::Private::GetPackage(*(UObject **)param_1.field0_0x0);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar6 != (UPackage *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPackage *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreUObjectDelegates::ShouldCookPackageForPlatform,&local_78);
        pUVar7 = (UPackage *)0x0;
        if (FCoreUObjectDelegates::ShouldCookPackageForPlatform._16_4_ != 0) {
          pUVar7 = (UPackage *)FCoreUObjectDelegates::ShouldCookPackageForPlatform._8_8_;
        }
        cVar5 = (**(code **)(pUVar7->_padding_ + 0x60))(pUVar7,pUVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_78);
        if (cVar5 == '\0') {
          return;
        }
      }
                    /* WARNING: Load size is inaccurate */
      TVar2.DebugPtr = *param_1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar2.DebugPtr);
      }
      FHarvestScope::FHarvestScope(&local_60,this);
      local_a8.__this = this;
      local_a8.Object.field0_0x0 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar2.DebugPtr);
      }
      local_a8.ObjectStatus = param_2;
      TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
      RemoveAllSwap<_FPackageHarvester::EnterNotExcludedScope_::__l2::<lambda_1>_>
                (&this->CurrentExportHarvestingRealms,&local_a8,No);
      if (((local_60.Harvester)->CurrentExportHarvestingRealms).ArrayNum != 0) {
        local_b8 = *(UObject **)param_1.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_b8);
        }
        HarvestImport(this,(TObjectPtr<UObject>)&local_b8,param_2);
        local_b0 = *(UObject **)param_1.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_b0);
        }
        ProcessImport(this,(TObjectPtr<UObject>)&local_b0,param_2);
      }
      if (local_60.bActive != false) {
        TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
                  (&(local_60.Harvester)->CurrentExportHarvestingRealms,
                   &local_60.PreviousExportHarvestingRealms);
      }
      if (local_60.PreviousExportHarvestingRealms.AllocatorInstance.SecondaryData !=
          (ForElementType<ESaveRealm>)0x0) {
        FMemory::Free((void *)local_60.PreviousExportHarvestingRealms.AllocatorInstance.
                              SecondaryData);
      }
    }
  }
  return;
}

