// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteLoad @ 1499f0d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGLoadDataTableElement::ExecuteLoad
          (FPCGLoadDataTableElement *this,FPCGExternalDataContext *param_1)

{
  undefined1 *this_00;
  FName *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FPCGMetadataDomainID FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  UPCGLoadDataTableSettings *pUVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  long64 lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  FPCGMetadataAttributeBase *local_148;
  undefined8 local_140;
  TArray<FName,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_118;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  int local_e0;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  FName local_a8;
  FPCGMetadataDomainID FStack_a0;
  FPCGAttributeIdentifier local_88 [2];
  undefined4 local_4c;
  
  if ((param_1 == (FPCGExternalDataContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                         ,0xd8,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->PointDataAccessorsMapping).ArrayNum == 0) {
    return true;
  }
  pUVar9 = FPCGContext::GetInputSettings<UPCGLoadDataTableSettings>((FPCGContext *)param_1);
  if ((pUVar9 == (UPCGLoadDataTableSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                         ,0xe0,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar9->DataTable);
  if (pUVar10 == (UObject *)0x0) {
    this_00 = &(pUVar9->DataTable).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar9->DataTable);
      goto LAB_1499f0df7;
    }
  }
  else {
LAB_1499f0df7:
    if (pUVar10 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_UDataTable_NoRegister();
      iVar8 = (int)pUVar11->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar11->_padding_)) goto LAB_1499f0e48;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataTable",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                     ,0xe4,L"");
  pUVar10 = (UObject *)0x0;
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
LAB_1499f0e48:
  if (((param_1->PointDataAccessorsMapping).ArrayNum != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->PointDataAccessorsMapping.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                         ,0xe7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (((param_1->PointDataAccessorsMapping).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar20 = (param_1->PointDataAccessorsMapping).AllocatorInstance.Data;
  lVar14 = *(longlong *)pFVar20;
  local_128 = pFVar20;
  if (lVar14 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                       ,0xec,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        == &pUVar11->_padding_)) {
      if ((*(longlong *)(lVar14 + 0x38) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParamData->Metadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                             ,0xf0,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      UPCGMetadata::GetAttributes(*(UPCGMetadata **)(lVar14 + 0x38),&local_138,&local_118);
      iVar8 = local_138.ArrayNum;
      uVar16 = (ulonglong)local_138.ArrayNum;
      local_158.Data = (FScriptContainerElement *)0x0;
      local_150 = 0;
      pFVar1 = (FName *)(local_138.AllocatorInstance.Data + uVar16 * 8);
      FVar17.Data = local_138.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar16 != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if ((FName *)FVar17.Data == pFVar1) break;
        local_a8 = *(FName *)FVar17.Data;
        FStack_a0 = PCGMetadataDomainID::Default;
        FVar4 = FStack_a0;
        FStack_a0._0_8_ = PCGMetadataDomainID::Default._0_8_;
        local_88[0].MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_88[0].MetadataDomain.Flag = FStack_a0.Flag;
        local_88[0].MetadataDomain._1_3_ = FStack_a0._1_3_;
        local_88[0].MetadataDomain.CustomFlag = FStack_a0.CustomFlag;
        FStack_a0 = FVar4;
        local_88[0].Name = local_a8;
        local_148 = UPCGMetadata::GetMutableAttribute(*(UPCGMetadata **)(lVar14 + 0x38),local_88);
        if (((local_158.Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 < local_158.Data + (longlong)local_150._4_4_ * 8)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (int)local_150;
        if ((int)local_150 == local_150._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_158,(int *)((longlong)&local_150 + 4));
        }
        FVar17.Data = FVar17.Data + 8;
        local_150 = CONCAT44(local_150._4_4_,iVar7 + 1);
        *(FPCGMetadataAttributeBase **)(local_158.Data + (longlong)iVar7 * 8) = local_148;
        uVar16 = local_138._8_8_ & 0xffffffff;
      }
      iVar8 = 0;
      lVar12 = (**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
      if (0 < *(int *)(lVar12 + 8) - *(int *)(lVar12 + 0x34)) {
        do {
          lVar13 = UPCGMetadata::AddEntry(*(UPCGMetadata **)(lVar14 + 0x38),-1);
          iVar7 = (int)local_150;
          uVar16 = (ulonglong)(int)local_150;
          pFVar20 = local_158.Data + uVar16 * 8;
          FVar17.Data = local_158.Data;
          while( true ) {
            if ((int)uVar16 != iVar7) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FPCGMetadataAttributeBase_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (FVar17.Data == pFVar20) break;
            FPCGMetadataAttributeBase::SetValueFromValueKey
                      (*(FPCGMetadataAttributeBase **)FVar17.Data,lVar13,-1,false);
            uVar16 = local_150 & 0xffffffff;
            FVar17.Data = FVar17.Data + 8;
          }
          iVar8 = iVar8 + 1;
          lVar12 = (**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
        } while (iVar8 < *(int *)(lVar12 + 8) - *(int *)(lVar12 + 0x34));
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      pFVar20 = local_128;
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
        pFVar20 = local_128;
      }
    }
  }
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  lVar14 = (**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
  uVar18 = *(int *)(lVar14 + 8) - *(int *)(lVar14 + 0x34);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (local_160._4_4_ < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&local_168,(int)local_160,(int *)((longlong)&local_160 + 4));
  }
  local_108 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
  local_b8 = 0;
  iStack_d0 = 0;
  uStack_cc = 1;
  local_c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 2);
  iVar8 = (int)local_108[5];
  TStack_100.CurrentBitIndex = 0;
  if (iVar8 != 0) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)local_108[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)local_108[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = local_c8;
    }
    uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    iStack_d0 = 0;
    while (uVar18 == 0) {
      iStack_d0 = iStack_d0 + 1;
      local_b8 = local_b8 + 0x20;
      TStack_100.CurrentBitIndex = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_1499f124b;
      uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iStack_d0 * 4);
    }
    uStack_cc = -uVar18 & uVar18;
    uVar16 = (ulonglong)uStack_cc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_e0 = (int)lVar14;
    TStack_100.CurrentBitIndex = local_e0 + -1 + local_b8;
    if (iVar8 < TStack_100.CurrentBitIndex) {
      TStack_100.CurrentBitIndex = iVar8;
    }
  }
LAB_1499f124b:
  uStack_b4 = local_4c;
  uStack_c0 = 0xffffffff;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_b8;
  local_d8 = local_108;
  iStack_bc = TStack_100.CurrentBitIndex;
  TStack_100.Array = local_c8;
  if (TStack_100.CurrentBitIndex < (int)local_108[5]) {
    do {
      local_140 = *(undefined8 *)(*local_108 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x18);
      if ((local_168.Data <= (FScriptContainerElement *)&local_140) &&
         ((FScriptContainerElement *)&local_140 < local_168.Data + (longlong)local_160._4_4_ * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      iVar8 = (int)local_160;
      if ((int)local_160 == local_160._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_168,(int *)((longlong)&local_160 + 4));
      }
      local_160 = CONCAT44(local_160._4_4_,iVar8 + 1);
      *(undefined8 *)(local_168.Data + (longlong)iVar8 * 8) = local_140;
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
  }
  puVar15 = ::operator_new(0x20);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    iVar8 = (int)local_160;
    local_128 = local_168.Data;
    if ((int)local_160 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iStack_120 = iVar8;
    *(undefined1 *)(puVar15 + 1) = 0;
    *puVar15 = &___7FPCGAttributeAccessorKeysGenericPtrs__6B_;
    *(undefined4 *)(puVar15 + 2) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar15 + 0x14) = local_128._4_4_;
    *(int *)(puVar15 + 3) = iVar8;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_11c;
  }
  puVar2 = *(undefined8 **)(pFVar20 + 0x20);
  *(undefined8 **)(pFVar20 + 0x20) = puVar15;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  bVar5 = FPCGExternalDataElement::ExecuteLoad((FPCGExternalDataElement *)this,param_1);
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  return bVar5;
}

// PrepareLoad @ 149a059c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGLoadDataTableElement::PrepareLoad
          (FPCGLoadDataTableElement *this,FPCGExternalDataContext *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FProperty *pFVar8;
  UPCGMetadata *pUVar9;
  ForAnyElementType FVar10;
  FPCGMetadataDomainID FVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  UPCGLoadDataTableSettings *pUVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  longlong lVar21;
  UPCGBasePointData *pUVar22;
  UPCGMetadata *pUVar23;
  FString *pFVar24;
  FText *pFVar25;
  FPCGAttributePropertySelector *pFVar26;
  FName this_00;
  longlong *plVar27;
  FName *pFVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  FPCGDataPtrWrapper *this_01;
  longlong lVar31;
  size_t _Size;
  int iVar32;
  int iVar33;
  uint *puVar34;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  undefined1 local_488 [16];
  int local_478;
  int local_474;
  UObject *local_470;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_468;
  FPCGCrc local_458;
  TObjectPtr<UPCGMetadata>_u_0 local_450;
  FProperty *local_448;
  undefined4 local_440;
  undefined2 local_43c;
  undefined1 local_43a;
  UPCGLoadDataTableSettings *local_438;
  FString local_430;
  UPCGMetadata *local_420;
  FString local_418;
  FPCGMetadataDomainID local_408;
  FText local_3f8;
  FText local_3e8;
  FPCGAttributePropertySelector local_3d8;
  FSoftObjectPath local_398;
  FString local_368;
  FString local_358;
  FText local_348;
  FText local_338;
  FString local_328;
  FText local_318;
  FText local_308;
  FString local_2f8;
  FString local_2e8;
  FText local_2d8;
  FString local_2c8;
  FString local_2b8;
  FText local_2a8;
  FText local_298;
  void *local_288 [2];
  FString local_278;
  FString local_268;
  FString local_258;
  FText local_248;
  FText local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FText local_1e8;
  FText local_1d8;
  FString local_1c8;
  FString local_1b8;
  FText local_1a8;
  FString local_198;
  FString local_188;
  FText local_178;
  FText local_168;
  FName local_158 [2];
  FName local_148;
  FPCGMetadataDomainID FStack_140;
  FPCGAttributeIdentifier local_128;
  FString local_108;
  FText local_f8;
  FTextFormat local_e8;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FTextFormat local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res10[0] = 0;
  if ((param_1 == (FPCGExternalDataContext *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                          ,0x49,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  pUVar15 = FPCGContext::GetInputSettings<UPCGLoadDataTableSettings>((FPCGContext *)param_1);
  local_438 = pUVar15;
  if ((pUVar15 == (UPCGLoadDataTableSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                          ,0x4b,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  local_458 = (FPCGCrc)&(pUVar15->DataTable).SoftObjectPtr.field_0x8;
  if (*(longlong *)local_458 == 0) {
    return true;
  }
  if ((char)param_1->_padding_ == '\0') {
    bVar12 = pUVar15->bSynchronousLoad;
    local_398.SubPathString.Data.ArrayNum = *(int *)&(pUVar15->DataTable).SoftObjectPtr.field_0x20;
    _Size = (size_t)local_398.SubPathString.Data.ArrayNum;
    local_398.AssetPath.PackageName.ComparisonIndex.Value =
         *(uint *)&(pUVar15->DataTable).SoftObjectPtr.field_0x8;
    local_398.AssetPath.PackageName.Number = *(uint *)&(pUVar15->DataTable).SoftObjectPtr.field_0xc;
    local_398.AssetPath.AssetName.ComparisonIndex.Value =
         *(uint *)&(pUVar15->DataTable).SoftObjectPtr.field_0x10;
    local_398.AssetPath.AssetName.Number = *(uint *)&(pUVar15->DataTable).SoftObjectPtr.field_0x14;
    pvVar5 = *(void **)&(pUVar15->DataTable).SoftObjectPtr.field_0x18;
    local_398.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_398.SubPathString.Data.ArrayNum == 0) {
      local_398.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_398.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_398.SubPathString,local_398.SubPathString.Data.ArrayNum
                 ,&local_398.SubPathString.Data.ArrayMax);
      memcpy(local_398.SubPathString.Data.AllocatorInstance.Data,pvVar5,_Size);
    }
    local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_468.AllocatorInstance,1,&local_468.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              (local_468.AllocatorInstance.Data,&local_398,1);
    bVar12 = IPCGAsyncLoadingContext::RequestResourceLoad
                       ((IPCGAsyncLoadingContext *)&param_1->_padding_,(FPCGContext *)param_1,
                        &local_468,bVar12 == false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_468.AllocatorInstance.Data,local_468.ArrayNum);
    if ((FSoftObjectPath *)local_468.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_468.AllocatorInstance.Data);
    }
    if (local_398.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar15 = local_438;
    if (!bVar12) {
      return false;
    }
  }
  pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar15->DataTable);
  local_470 = pUVar16;
  if (pUVar16 != (UObject *)0x0) {
    pUVar17 = Z_Construct_UClass_UDataTable_NoRegister();
    iVar14 = (int)pUVar17->_padding_;
    if ((iVar14 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
        &pUVar17->_padding_)) {
      local_420 = *(UPCGMetadata **)(pUVar16 + 1);
      if (local_420 == (UPCGMetadata *)0x0) {
        if ((byte)LogPCG._0_1_ < 2) {
          return true;
        }
        FSoftObjectPath::ToString((FSoftObjectPath *)local_458,&local_418);
        pFVar18 = FText::FromString(&local_c8,&local_418);
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_308,L"PCGLoadDataTable",L"DataTableNoRowStruct",
                             L"Provided Data Table (\'{0}\') does not have a valid row definition.")
        ;
        pFVar20 = FTextFormat::FTextFormat(&local_88,pFVar19,Default);
        pFVar18 = FText::Format<FText>(&local_318,pFVar20,pFVar18);
        FText::ToString(pFVar18);
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_328);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_108);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_318.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
        }
        local_368.Data.AllocatorInstance.Data = local_418.Data.AllocatorInstance.Data;
        if (local_308.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
          local_368.Data.AllocatorInstance.Data = local_418.Data.AllocatorInstance.Data;
        }
      }
      else {
        lVar21 = (**(code **)(*(longlong *)pUVar16 + 0x2c8))(pUVar16);
        if (*(int *)(lVar21 + 8) != *(int *)(lVar21 + 0x34)) {
          if (pUVar15->OutputType == Point) {
            pUVar22 = FPCGContext::NewPointData_AnyThread((FPCGContext *)param_1);
            pcVar7 = *(code **)(pUVar22->_padding_ + 0x490);
            lVar21 = (**(code **)(*(longlong *)pUVar16 + 0x2c8))(pUVar16);
            (*pcVar7)(pUVar22,*(int *)(lVar21 + 8) - *(int *)(lVar21 + 0x34),1);
          }
          else {
            if (pUVar15->OutputType != Param) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<424373855818088586>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                                  ,0x8a,"0");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              if ((byte)LogPCG._0_1_ < 2) {
                return true;
              }
              pFVar18 = FText::AsLocalizable_Advanced_LocText
                                  (&local_1a8,L"PCGLoadDataTable",L"Output format not supported",
                                   L"Unable to load data table to selected output type");
              FText::ToString(pFVar18);
              FPCGContext::GetTaskName((FPCGContext *)param_1,&local_1b8);
              FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_1c8);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if (local_1a8.TextData.Reference == (ITextData *)0x0) {
                return true;
              }
              (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
              return true;
            }
            pUVar22 = (UPCGBasePointData *)
                      FPCGContext::NewObject_AnyThread<UPCGParamData>((FPCGContext *)param_1);
            if ((pUVar22 == (UPCGBasePointData *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ParamData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                                    ,0x84,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
          }
          pUVar23 = (UPCGMetadata *)(**(code **)(pUVar22->_padding_ + 0x328))(pUVar22);
          iVar14 = (param_1->PointDataAccessorsMapping).ArrayNum;
          piVar1 = &(param_1->PointDataAccessorsMapping).ArrayMax;
          local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar23;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&(param_1->PointDataAccessorsMapping).AllocatorInstance,piVar1
                               );
          }
          pUVar9 = local_420;
          (param_1->PointDataAccessorsMapping).ArrayNum = iVar14 + 1;
          lVar21 = (longlong)iVar14;
          local_450.DebugPtr = local_420;
          local_440 = 0xffffffff;
          local_43c = 1;
          local_43a = 0;
          pFVar6 = (param_1->PointDataAccessorsMapping).AllocatorInstance.Data;
          *(undefined8 *)(pFVar6 + lVar21 * 0x28 + 0x10) = 0;
          local_418.Data.AllocatorInstance.Data = pFVar6 + lVar21 * 0x28 + 0x10;
          *(undefined8 *)(pFVar6 + lVar21 * 0x28 + 0x18) = 0;
          *(undefined8 *)(pFVar6 + lVar21 * 0x28 + 0x20) = 0;
          local_468.AllocatorInstance.Data = pFVar6 + lVar21 * 0x28 + 0x1c;
          *(UPCGBasePointData **)(pFVar6 + lVar21 * 0x28) = pUVar22;
          *(UPCGMetadata **)(pFVar6 + lVar21 * 0x28 + 8) = pUVar23;
          local_448 = *(FProperty **)&(local_420->OtherParents).Elements.field_0x20;
          TFieldIterator<FProperty_const_>::IterateToNext
                    ((TFieldIterator<FProperty_const_> *)&local_450.ObjectPtr);
          pFVar8 = local_448;
          do {
            local_448 = pFVar8;
            if (pFVar8 == (FProperty *)0x0) {
              if ((param_1->PointDataAccessorsMapping).ArrayNum == 0) {
                return true;
              }
              iVar14 = (int)param_1->_padding_;
              piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
              if (iVar14 == *piVar1) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)&param_1->_padding_,piVar1);
              }
              *(int *)&param_1->_padding_ = iVar14 + 1;
              this_01 = (FPCGDataPtrWrapper *)((longlong)iVar14 * 0x78 + param_1->_padding_);
              this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
              (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
              (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
              this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
              this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
              this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
              *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
              *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
              this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
              *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
              *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
              FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar22);
              param_1->bDataPrepared = true;
              return true;
            }
            (**(code **)(pUVar9->_padding_ + 0x328))(pUVar9,local_488 + 8);
            PCGAttributeAccessorHelpers::CreatePropertyAccessor((FProperty *)&local_res20);
            if (local_res20 == (undefined8 *)0x0) {
              if (1 < (byte)LogPCG._0_1_) {
                pFVar24 = (FString *)
                          (**(code **)(pUVar9->_padding_ + 0x328))(pUVar9,local_288,pFVar8);
                pFVar18 = FText::FromString(&local_58,pFVar24);
                FSoftObjectPath::ToString((FSoftObjectPath *)local_458,&local_358);
                pFVar19 = FText::FromString(&local_f8,&local_358);
                pFVar25 = FText::AsLocalizable_Advanced_LocText
                                    (&local_298,L"PCGLoadDataTable",
                                     L"DataTableFieldTypeNotSupported",
                                     L"Provided Data Table (\'{0}\') property \'{1}\' is not of a supported type."
                                    );
                pFVar20 = FTextFormat::FTextFormat(&local_e8,pFVar25,Default);
                pFVar18 = FText::Format<FText,FText>(&local_2a8,pFVar20,pFVar19,pFVar18);
                FText::ToString(pFVar18);
                FPCGContext::GetTaskName((FPCGContext *)param_1,&local_2b8);
                FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_2c8);
                UE::Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151f2bb98,
                           (FLogCategoryBase *)&LogPCG);
                if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                }
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
                if (local_2a8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
                }
                if (local_298.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
                }
                if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_358.Data.AllocatorInstance.Data);
                }
                pUVar16 = local_470;
                if (local_288[0] != (void *)0x0) {
                  FMemory::Free(local_288[0]);
                  pUVar16 = local_470;
                }
              }
            }
            else {
              FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                        ((FPCGAttributePropertyOutputSelector *)&local_3d8);
              pFVar26 = (FPCGAttributePropertySelector *)
                        TMapBase<FString,FPCGAttributePropertyInputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>_>
                        ::Find((TMapBase<FString,FPCGAttributePropertyInputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>_>
                                *)&local_438->_padding_,(FString *)(local_488 + 8));
              if (pFVar26 == (FPCGAttributePropertySelector *)0x0) {
                FPCGAttributePropertySelector::Update(&local_3d8,(FString *)(local_488 + 8));
              }
              else {
                FPCGAttributePropertySelector::ImportFromOtherSelector(&local_3d8,pFVar26);
                this_00 = FPCGAttributePropertySelector::GetName(&local_3d8);
                pFVar24 = ::FName::ToString((FName *)this_00,&local_278);
                if ((FString *)(local_488 + 8) != pFVar24) {
                  if ((FScriptContainerElement *)local_488._8_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_488._8_8_);
                  }
                  local_488._8_8_ = (pFVar24->Data).AllocatorInstance.Data;
                  (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_478 = (pFVar24->Data).ArrayNum;
                  local_474 = (pFVar24->Data).ArrayMax;
                  (pFVar24->Data).ArrayNum = 0;
                  (pFVar24->Data).ArrayMax = 0;
                }
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
              }
              if (local_3d8.Selection == Attribute) {
                plVar27 = (longlong *)(**(code **)(*(longlong *)pUVar16 + 0x2c8))(pUVar16);
                iVar32 = 0;
                iVar33 = 0;
                iVar14 = (int)plVar27[5];
                local_398.SubPathString.Data.ArrayMax = 0;
                if (iVar14 != 0) {
                  puVar34 = (uint *)(plVar27 + 2);
                  if ((uint *)plVar27[4] != (uint *)0x0) {
                    puVar34 = (uint *)plVar27[4];
                  }
                  uVar4 = *puVar34;
                  while (uVar4 == 0) {
                    iVar32 = iVar32 + 1;
                    iVar33 = iVar33 + 0x20;
                    local_398.SubPathString.Data.ArrayMax = iVar14;
                    if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32)
                    goto LAB_149a0626b;
                    uVar4 = puVar34[iVar32];
                  }
                  uVar2 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
                  lVar21 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                    }
                  }
                  local_398.SubPathString.Data.ArrayMax = (int)lVar21 + -1 + iVar33;
                  if (iVar14 < local_398.SubPathString.Data.ArrayMax) {
                    local_398.SubPathString.Data.ArrayMax = iVar14;
                  }
                }
LAB_149a0626b:
                local_398.SubPathString.Data.ArrayNum = -1;
                local_408 = PCGMetadataDomainID::Default;
                pvVar5 = *(void **)(*plVar27 + 8 +
                                   (longlong)local_398.SubPathString.Data.ArrayMax * 0x18);
                if (local_478 == 0) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = local_478 + -1;
                }
                pFVar28 = ::FName::FName(local_158,iVar14,(wchar_t *)local_488._8_8_,FNAME_Add);
                FVar11 = local_408;
                local_148 = *pFVar28;
                FStack_140.Flag = local_408.Flag;
                FStack_140._1_3_ = local_408._1_3_;
                FStack_140.CustomFlag = local_408.CustomFlag;
                FStack_140.DebugName = local_408.DebugName;
                local_128.MetadataDomain.Flag = local_408.Flag;
                local_128.MetadataDomain._1_3_ = local_408._1_3_;
                local_128.MetadataDomain.CustomFlag = local_408.CustomFlag;
                local_128.MetadataDomain.DebugName = local_408.DebugName;
                local_408 = FVar11;
                local_128.Name = local_148;
                UPCGMetadata::CreateAttributeFromDataProperty
                          ((UPCGMetadata *)local_430.Data.AllocatorInstance.Data,&local_128,pvVar5,
                           pFVar8);
              }
              PCGAttributeAccessorHelpers::CreateAccessor
                        ((UPCGData *)local_488,(FPCGAttributePropertySelector *)pUVar22,
                         SUB81(&local_3d8,0));
              FVar10.Data = local_418.Data.AllocatorInstance.Data;
              if ((undefined8 *)local_488._0_8_ == (undefined8 *)0x0) {
                if (1 < (byte)LogPCG._0_1_) {
                  pFVar18 = FText::FromString(&local_d8,(FString *)(local_488 + 8));
                  pFVar19 = FText::AsLocalizable_Advanced_LocText
                                      (&local_238,L"PCGLoadDataTable",L"UnableToCreatePointProperty"
                                       ,L"Unable to create/access point property/attribute \'{0}\'."
                                      );
                  pFVar20 = FTextFormat::FTextFormat(&local_48,pFVar19,Default);
                  pFVar18 = FText::Format<FText>(&local_248,pFVar20,pFVar18);
                  FText::ToString(pFVar18);
                  FPCGContext::GetTaskName((FPCGContext *)param_1,&local_258);
                  FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_268);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Data.AllocatorInstance.Data);
                  }
                  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_258.Data.AllocatorInstance.Data);
                  }
                  if (local_248.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
                  }
                  pUVar16 = local_470;
                  if (local_238.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
                    pUVar16 = local_470;
                  }
                }
                if ((undefined8 *)local_488._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_488._0_8_)(local_488._0_8_,1);
                }
              }
              else {
                uVar3 = *(ushort *)((longlong)local_res20 + 10);
                if (((uVar3 < 0xf) && (*(ushort *)(local_488._0_8_ + 10) < 0xf)) &&
                   (PCG::Private::BroadcastableTypes.Values[uVar3]
                    [*(ushort *)(local_488._0_8_ + 10)] != false)) {
                  iVar14 = *(int *)(local_418.Data.AllocatorInstance.Data + 8);
                  puVar29 = (undefined8 *)local_488._0_8_;
                  puVar30 = local_res20;
                  if (iVar14 == *(int *)local_468.AllocatorInstance.Data) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x850,(ForAnyElementType *)
                                              local_418.Data.AllocatorInstance.Data,
                                        (int *)local_468.AllocatorInstance.Data);
                    puVar29 = (undefined8 *)local_488._0_8_;
                    puVar30 = local_res20;
                  }
                  *(int *)(FVar10.Data + 8) = iVar14 + 1;
                  lVar31 = (longlong)iVar14;
                  local_488._0_8_ = (undefined8 *)0x0;
                  local_res20 = (undefined8 *)0x0;
                  lVar21 = *(longlong *)FVar10.Data;
                  *(undefined8 **)(lVar21 + lVar31 * 0x50) = puVar30;
                  *(undefined8 **)(lVar21 + lVar31 * 0x50 + 8) = puVar29;
                  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                            ((FPCGAttributePropertyOutputSelector *)(lVar21 + lVar31 * 0x50 + 0x10))
                  ;
                  FPCGAttributePropertySelector::ImportFromOtherSelector
                            ((FPCGAttributePropertySelector *)(lVar21 + lVar31 * 0x50 + 0x10),
                             &local_3d8);
                }
                else {
                  pFVar24 = PCG::Private::GetTypeName(&local_228,uVar3);
                  FText::FromString(&local_3e8,pFVar24);
                  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                  }
                  pFVar24 = PCG::Private::GetTypeName(&local_218,*(ushort *)(local_488._0_8_ + 10));
                  FText::FromString(&local_3f8,pFVar24);
                  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_218.Data.AllocatorInstance.Data);
                  }
                  if (1 < (byte)LogPCG._0_1_) {
                    local_348.TextData.Reference = local_3f8.TextData.Reference;
                    if (local_3f8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3f8.TextData.Reference + 8))
                                (local_3f8.TextData.Reference,local_res10);
                    }
                    local_348.Flags = local_3f8.Flags;
                    local_338.TextData.Reference = local_3e8.TextData.Reference;
                    if (local_3e8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3e8.TextData.Reference + 8))
                                (local_3e8.TextData.Reference,local_res18);
                    }
                    local_338.Flags = local_3e8.Flags;
                    pFVar18 = FText::AsLocalizable_Advanced_LocText
                                        (&local_1d8,L"PCGLoadDataTable",L"CannotBroadcastTypes",
                                         L"Cannot convert input type \'{0}\' into output type \'{1}\'"
                                        );
                    pFVar20 = FTextFormat::FTextFormat(&local_b8,pFVar18,Default);
                    pFVar18 = FText::Format<FText,FText>(&local_1e8,pFVar20,&local_338,&local_348);
                    FText::ToString(pFVar18);
                    FPCGContext::GetTaskName((FPCGContext *)param_1,&local_1f8);
                    FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_208);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_208.Data.AllocatorInstance.Data);
                    }
                    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                    }
                    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
                    }
                    pUVar16 = local_470;
                    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
                      pUVar16 = local_470;
                    }
                  }
                  if (local_3f8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
                  }
                  if (local_3e8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
                  }
                }
                if ((undefined8 *)local_488._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_488._0_8_)(local_488._0_8_,1);
                }
              }
              DestructItems<FString,int>
                        ((FString *)local_3d8.ExtraNames.AllocatorInstance.Data,
                         local_3d8.ExtraNames.ArrayNum);
              if (local_3d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d8.ExtraNames.AllocatorInstance.Data);
              }
            }
            if (local_res20 != (undefined8 *)0x0) {
              (**(code **)*local_res20)(local_res20,1);
            }
            if ((FScriptContainerElement *)local_488._8_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_488._8_8_);
            }
            local_448 = (FProperty *)pFVar8->_padding_;
            TFieldIterator<FProperty_const_>::IterateToNext
                      ((TFieldIterator<FProperty_const_> *)&local_450.ObjectPtr);
            pFVar8 = local_448;
            pUVar9 = local_420;
          } while( true );
        }
        if ((byte)LogPCG._0_1_ < 3) {
          return true;
        }
        FSoftObjectPath::ToString((FSoftObjectPath *)local_458,&local_430);
        pFVar18 = FText::FromString(&local_78,&local_430);
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)&local_408,L"PCGLoadDataTable",L"DataTableIsEmpty",
                             L"Provided Data Table (\'{0}\') is empty.");
        pFVar20 = FTextFormat::FTextFormat(&local_68,pFVar19,Default);
        pFVar18 = FText::Format<FText>(&local_2d8,pFVar20,pFVar18);
        FText::ToString(pFVar18);
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_2e8);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_2f8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        if (local_2d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
        }
        local_368.Data.AllocatorInstance.Data = local_430.Data.AllocatorInstance.Data;
        if ((longlong *)local_408._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_408._0_8_ + 0x10))();
          local_368.Data.AllocatorInstance.Data = local_430.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_149a06a4e;
    }
  }
  if ((byte)LogPCG._0_1_ < 2) {
    return true;
  }
  FSoftObjectPath::ToString((FSoftObjectPath *)local_458,&local_368);
  pFVar18 = FText::FromString(&local_a8,&local_368);
  pFVar19 = FText::AsLocalizable_Advanced_LocText
                      (&local_168,L"PCGLoadDataTable",L"DataTableNotLoaded",
                       L"Provided Data Table (\'{0}\') could not be loaded.");
  pFVar20 = FTextFormat::FTextFormat(&local_98,pFVar19,Default);
  pFVar18 = FText::Format<FText>(&local_178,pFVar20,pFVar18);
  FText::ToString(pFVar18);
  FPCGContext::GetTaskName((FPCGContext *)param_1,&local_188);
  FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_198);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
LAB_149a06a4e:
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  return true;
}

