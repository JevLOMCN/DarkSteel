// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// InitializeMappingForAllDomains @ 149d57400

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
PCGMetadataHelpers::FPCGCopyAllAttributesParams::InitializeMappingForAllDomains
          (FPCGCopyAllAttributesParams *this)

{
  UPCGData *pUVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [16];
  undefined8 *local_48 [2];
  FPCGMetadataDomainID local_38;
  FPCGMetadataDomainID *local_28;
  FPCGMetadataDomainID *local_20;
  
  TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
           *)&this->DomainMapping);
  pUVar1 = this->SourceData;
  if ((pUVar1 != (UPCGData *)0x0) && (this->TargetData != (UPCGData *)0x0)) {
    (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,local_48);
    iVar3 = (int)local_48[1];
    puVar5 = local_48[0] + (longlong)iVar3 * 2;
    puVar4 = local_48[0];
    while( true ) {
      if ((int)local_48[1] != iVar3) {
        `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      local_38._0_8_ = *puVar4;
      local_38.DebugName = *(FName *)(puVar4 + 1);
      bVar2 = UPCGData::IsSupportedMetadataDomainID(this->TargetData,&local_38);
      if (bVar2) {
        local_28 = &local_38;
        local_20 = &local_38;
        TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
                  ((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                    *)&this->DomainMapping,
                   (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
                   (local_res8 + 8),(bool *)&local_28);
      }
      puVar4 = puVar4 + 2;
    }
    if (local_48[0] != (undefined8 *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return;
}

// InitializeMappingFromDomainNames @ 149d57500

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
PCGMetadataHelpers::FPCGCopyAllAttributesParams::InitializeMappingFromDomainNames
          (FPCGCopyAllAttributesParams *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_res18 [16];
  FPCGAttributePropertySelector local_138;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined1 local_c4 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FPCGMetadataDomainID *local_88;
  FPCGMetadataDomainID *pFStack_80;
  char local_78 [16];
  char local_68 [16];
  char *local_58;
  char *local_50;
  FPCGMetadataDomainID *local_48;
  FPCGMetadataDomainID *pFStack_40;
  
  if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
    bVar14 = *(int *)&(this->DomainMapping).field_0x48 != 1;
    if (!bVar14) {
      TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                        *)&this->DomainMapping);
    }
    puVar1 = &(this->DomainMapping).field_0xc;
    *(undefined4 *)&(this->DomainMapping).field_0x8 = 0;
    if (*(int *)puVar1 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,1,(ForAnyElementType *)&this->DomainMapping,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->DomainMapping).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->DomainMapping).field_0x34 = 0;
    iVar3 = *(int *)&(this->DomainMapping).field_0x2c;
    *(undefined4 *)&(this->DomainMapping).field_0x28 = 0;
    if ((iVar3 < 0x20) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->DomainMapping).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DomainMapping).field_0x10,0);
    }
    if (bVar14) {
      *(undefined4 *)&(this->DomainMapping).field_0x48 = 1;
      TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                *)&this->DomainMapping);
    }
    local_88 = &PCGMetadataDomainID::Default;
    pFStack_80 = &PCGMetadataDomainID::Default;
    TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
             *)&this->DomainMapping,1);
    local_48 = local_88;
    pFStack_40 = pFStack_80;
    TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
              ((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                *)&this->DomainMapping,
               (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
               (local_res18 + 8),(bool *)&local_48);
    return;
  }
  TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
           *)&this->DomainMapping,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  if ((this->SourceData == (UPCGData *)0x0) || (this->TargetData == (UPCGData *)0x0)) {
    return;
  }
  local_138.PropertyName.Number = 0;
  local_138._36_4_ = 0;
  puVar1 = &param_1->field_0x10;
  iStack_f0 = 0;
  local_138._57_4_ = 0;
  local_138._61_2_ = 0;
  uStack_ec = 1;
  local_138._63_1_ = 0;
  local_138._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_d8 = 0;
  local_138.Selection = Attribute;
  local_138.DomainName.ComparisonIndex.Value = 0;
  local_138.DomainName.Number = 0;
  local_138.AttributeName.ComparisonIndex.Value = 0;
  local_138.AttributeName.Number = 0;
  local_138.PropertyName.ComparisonIndex.Value = 0;
  local_138.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ExtraNames.ArrayNum = 0;
  local_138.ExtraNames.ArrayMax = 0;
  local_138.ExtraProperty = Index;
  iVar3 = *(int *)&param_1->field_0x28;
  iStack_dc = iStack_f0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar10 = *puVar12;
    local_d8 = 0;
    iStack_f0 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_149d576fd;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_ec = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_ec * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_c8 = (int)lVar8;
    iStack_dc = local_d8 + -1 + local_c8;
    if (iVar3 < iStack_dc) {
      iStack_dc = iVar3;
    }
  }
LAB_149d576fd:
  uVar10 = *(uint *)&param_1->field_0x28;
  TStack_b8._padding_ = CONCAT44(uStack_ec,iStack_f0);
  iStack_d0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e0 = 0xffffffff;
  uVar13 = uVar10 & 0xffffffe0;
  TStack_b8.CurrentBitIndex = iStack_dc;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar10 >> 5;
  TStack_b8._28_4_ = iStack_dc;
  TStack_b8.BaseBitIndex = local_d8;
  uStack_98 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = param_1;
  local_e8 = puVar1;
  iStack_d4 = iStack_dc;
  local_c4._4_8_ = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149d57800;
      uVar10 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_149d57800:
  do {
    uVar7 = local_c4._4_8_;
    if (*(int *)(local_c4._4_8_ + 8) - *(int *)(local_c4._4_8_ + 0x34) != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar8 = (longlong)TStack_b8.CurrentBitIndex;
    if (((TStack_b8.CurrentBitIndex == uVar10) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       ((TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *)uVar7
        == param_1)) {
      DestructItems<FString,int>
                ((FString *)local_138.ExtraNames.AllocatorInstance.Data,
                 local_138.ExtraNames.ArrayNum);
      if (local_138.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_138.ExtraNames.AllocatorInstance.Data);
      return;
    }
    lVar5 = *(longlong *)uVar7;
    FPCGAttributePropertySelector::SetDomainName(&local_138,*(FName *)(lVar5 + lVar8 * 0x18),true);
    (**(code **)(this->SourceData->_padding_ + 0x348))(this->SourceData,local_78,&local_138);
    if (local_78[0] == -2) {
LAB_149d578c0:
      PCGLog::Metadata::LogInvalidMetadataDomain(&local_138,(FPCGContext *)0x0);
    }
    else {
      FPCGAttributePropertySelector::SetDomainName
                (&local_138,*(FName *)(lVar5 + lVar8 * 0x18 + 8),true);
      (**(code **)(this->TargetData->_padding_ + 0x348))(this->TargetData,local_68,&local_138);
      if (local_68[0] == -2) goto LAB_149d578c0;
      local_58 = local_78;
      local_50 = local_68;
      TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
                ((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                  *)&this->DomainMapping,
                 (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
                 local_c4,(bool *)&local_58);
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

