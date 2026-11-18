// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149d77730

UClass * __cdecl UPCGMeshSelectorWeightedByCategory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorWeightedByCategory",
               &Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorWeightedByCategory,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSelectorWeightedByCategory>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorWeightedByCategory>,local_res8,
               UPCGMeshSelectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.InnerSingleton;
}

// UPCGMeshSelectorWeightedByCategory @ 149e36200

UPCGMeshSelectorWeightedByCategory * __thiscall
UPCGMeshSelectorWeightedByCategory::UPCGMeshSelectorWeightedByCategory
          (UPCGMeshSelectorWeightedByCategory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorWeightedByCategory__6B_;
  (this->CategoryAttribute).ComparisonIndex = 0;
  (this->CategoryAttribute).Number = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// UPCGMeshSelectorWeightedByCategory @ 149e36240

UPCGMeshSelectorWeightedByCategory * __thiscall
UPCGMeshSelectorWeightedByCategory::UPCGMeshSelectorWeightedByCategory
          (UPCGMeshSelectorWeightedByCategory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorWeightedByCategory__6B_;
  (this->CategoryAttribute).ComparisonIndex = 0;
  (this->CategoryAttribute).Number = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// ~UPCGMeshSelectorWeightedByCategory @ 149e376b0

void __thiscall
UPCGMeshSelectorWeightedByCategory::~UPCGMeshSelectorWeightedByCategory
          (UPCGMeshSelectorWeightedByCategory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMeshSelectorWeightedByCategory__6B_;
  pFVar1 = (this->MaterialOverrideAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGWeightedByCategoryEntryList,int>
            ((FPCGWeightedByCategoryEntryList *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGMeshSelectorBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149e5d8a0

UClass * __cdecl UPCGMeshSelectorWeightedByCategory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorWeightedByCategory",
               &Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorWeightedByCategory,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSelectorWeightedByCategory>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorWeightedByCategory>,local_res8,
               UPCGMeshSelectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorWeightedByCategory.InnerSingleton;
}

// PostDuplicate @ 149e7a2d0

void __thiscall
UPCGMeshSelectorWeightedByCategory::PostDuplicate
          (UPCGMeshSelectorWeightedByCategory *this,bool param_1)

{
  return;
}

// PostEditImport @ 149e7a2f0

void __thiscall
UPCGMeshSelectorWeightedByCategory::PostEditImport(UPCGMeshSelectorWeightedByCategory *this)

{
  return;
}

// PostLoad @ 149e7a3b0

void __thiscall
UPCGMeshSelectorWeightedByCategory::PostLoad(UPCGMeshSelectorWeightedByCategory *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FISMComponentDescriptorBase *this_00;
  FISMComponentDescriptorBase *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  pFVar6 = (this->Entries).AllocatorInstance.Data;
  iVar2 = (this->Entries).ArrayNum;
  pFVar5 = pFVar6 + 0x20;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGWeightedByCategoryEntryList,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    iVar3 = *(int *)pFVar5;
    this_00 = *(FISMComponentDescriptorBase **)(pFVar5 + -8);
    pFVar4 = (FISMComponentDescriptorBase *)((longlong)iVar3 * 0x288 + (longlong)this_00);
    while( true ) {
      if (*(int *)pFVar5 != iVar3) {
        `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (this_00 == pFVar4) break;
      FISMComponentDescriptorBase::PostLoadFixup(this_00,(UObject *)this);
      this_00 = (FISMComponentDescriptorBase *)
                ((longlong)&this_00[1].BodyInstance.CollisionResponses.ResponseToChannels.field0_0x0
                + 8);
    }
    pFVar6 = pFVar6 + 0x28;
    pFVar5 = pFVar5 + 0x28;
  }
  return;
}

// SelectMeshInstances @ 149e8aa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149e8b00c) */
/* WARNING: Removing unreachable block (ram,0x000149e8b01c) */
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
UPCGMeshSelectorWeightedByCategory::SelectMeshInstances
          (UPCGMeshSelectorWeightedByCategory *this,FPCGStaticMeshSpawnerContext *param_1,
          UPCGStaticMeshSpawnerSettings *param_2,UPCGBasePointData *param_3,
          TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_4,
          UPCGBasePointData *param_5)

{
  int *piVar1;
  double dVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  UPCGMetadata *this_00;
  code *pcVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  longlong lVar11;
  float fVar12;
  UPCGStaticMeshSpawnerSettings *pUVar13;
  FPCGPointValueRanges *pFVar14;
  undefined1 uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  FText *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  FPCGMetadataAttribute<FString> *pFVar24;
  FText *pFVar25;
  FPCGPointValueRanges *pFVar26;
  FPCGPointValueRanges *pFVar27;
  FPCGMetadataAttribute<FString> *pFVar28;
  uint *puVar29;
  uint *puVar30;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar31;
  FPCGMeshInstanceList *pFVar32;
  int *piVar33;
  FString *pFVar34;
  FPCGMetadataDomain *this_01;
  long64 lVar35;
  TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar36;
  TRefCountPtr<ITextData> TVar37;
  FPCGPointValueRanges *pFVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined1 *puVar41;
  uint *puVar42;
  ForElementType<FSetElementId> FVar43;
  uint uVar44;
  FScriptContainerElement *pFVar45;
  ForAnyElementType *pFVar46;
  FPCGSoftISMComponentDescriptor *this_03;
  long64 *plVar47;
  UPCGBasePointData *pUVar48;
  uint *puVar49;
  longlong *plVar50;
  longlong *plVar51;
  TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
  *pTVar52;
  longlong lVar53;
  FPCGSoftISMComponentDescriptor *pFVar54;
  FName *pFVar55;
  TBitArray<FDefaultBitArrayAllocator> *pTVar56;
  FScriptContainerElement *pFVar57;
  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
  *this_04;
  FPCGSoftISMComponentDescriptor *pFVar58;
  FPCGMeshInstanceList *pFVar59;
  bool bVar60;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar62 [16];
  undefined8 uVar64;
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar63 [16];
  undefined1 auStackY_c18 [32];
  undefined1 local_bb8;
  undefined1 local_bb7 [3];
  int local_bb4;
  FScriptContainerElement *local_bb0;
  FName *local_ba8;
  UPCGBasePointData *local_ba0;
  TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,int_const_&> local_b98;
  undefined1 local_b88;
  undefined1 local_b87;
  undefined1 local_b86 [2];
  uint local_b84;
  UPCGBasePointData *local_b80;
  TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
  *local_b78;
  uint local_b70 [2];
  FPCGMetadataAttribute<FString> *local_b68;
  UPCGMeshSelectorWeightedByCategory *local_b60;
  UPCGStaticMeshSpawnerSettings *local_b58;
  TPairInitializer<int_const_&,FPCGInstancesAndWeights_&&> local_b50;
  int local_b40 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_b38;
  longlong local_b30;
  undefined1 local_b28 [4];
  uint local_b24;
  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
  *local_b20;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *local_b18;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *local_b10;
  undefined8 local_b08;
  void *local_b00;
  undefined8 local_af8;
  int local_af0;
  UPCGBasePointData *local_ae8;
  TMap<int,FPCGInstancesAndWeights,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>_>
  *local_ae0;
  int iStack_ad8;
  uint uStack_ad4;
  undefined1 *local_ad0;
  undefined4 uStack_ac8;
  int iStack_ac4;
  int local_ac0;
  undefined4 uStack_abc;
  int iStack_ab8;
  undefined4 uStack_ab4;
  TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
  *local_ab0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_aa8;
  undefined8 uStack_a88;
  uint *local_a80;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> **local_a78;
  longlong *local_a70;
  int *local_a68;
  FString local_a60;
  FString local_a50;
  FText local_a40;
  FString local_a30;
  FString local_a20;
  FText local_a10;
  FText local_a00;
  FString local_9f0;
  FString local_9e0;
  FText local_9d0;
  FText local_9c0;
  FString local_9b0;
  FString local_9a0;
  FText local_990;
  FString local_980;
  FString local_970;
  FText local_960;
  FText local_950;
  FString local_940;
  FString local_930;
  FText local_920;
  FText local_910;
  FString local_900;
  FString local_8f0;
  FText local_8e0;
  FText local_8d0;
  FString local_8c0;
  FString local_8b0;
  FText local_8a0;
  FString local_890;
  FString local_880;
  FText local_870;
  FText local_860;
  FString local_850;
  FString local_840;
  FString local_830;
  FText local_820;
  FText local_810;
  FString local_800;
  FString local_7f0;
  FText local_7e0;
  FString local_7d0;
  FString local_7c0;
  FPCGAttributeIdentifier local_7a8;
  FName local_788;
  FPCGMetadataDomainID FStack_780;
  FPCGAttributeIdentifier local_768;
  FName local_748;
  FPCGMetadataDomainID FStack_740;
  FName local_730;
  FPCGMetadataDomainID FStack_728;
  FPCGAttributeIdentifier local_718;
  FName local_6f8;
  FPCGMetadataDomainID FStack_6f0;
  FPCGAttributeIdentifier local_6d8;
  FString local_6b8;
  FString local_6a8;
  FText local_698;
  longlong local_688;
  FSoftObjectPath local_680;
  undefined1 local_660 [40];
  FText local_638;
  FTextFormat local_628;
  FText local_618;
  FTextFormat local_608;
  FTextFormat local_5f8;
  FText local_5e8;
  FTextFormat local_5d8;
  FTextFormat local_5c8;
  FText local_5b8;
  FText local_5a8;
  FText local_598;
  FText local_588;
  FTextFormat local_578;
  FText local_568;
  FTextFormat local_558 [2];
  undefined4 local_52c;
  FPCGPointValueRanges local_528;
  FConstPCGPointValueRanges local_398;
  FPCGPointValueRanges local_208;
  ulonglong local_78;
  float fVar61;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_c18;
  local_b18 = param_4;
  local_ba0 = param_5;
  local_b98.Key._0_4_ = 0;
  local_b80 = param_3;
  local_b60 = this;
  local_b58 = param_2;
  if (param_3 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_698,L"PCGMeshSelectorWeightedByCategory",L"InputMissingData",
                           L"Missing input data");
      FText::ToString(pFVar21);
      bVar60 = param_1 != (FPCGStaticMeshSpawnerContext *)0x0;
      if (bVar60) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_6a8);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_6b8);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar60) && (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
      if ((bVar60) && (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
      }
      if (local_698.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_698.TextData.Reference + 0x10))();
        return true;
      }
    }
  }
  else if ((UPCGMetadata *)param_3->_padding_ == (UPCGMetadata *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_a40,L"PCGMeshSelectorWeightedByCategory",L"InputMissingMetadata",
                           L"Unable to get metadata from input");
      FText::ToString(pFVar21);
      bVar60 = param_1 != (FPCGStaticMeshSpawnerContext *)0x0;
      if (bVar60) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_a50);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_a60);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar60) && (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a60.Data.AllocatorInstance.Data);
      }
      if ((bVar60) && (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a50.Data.AllocatorInstance.Data);
      }
      if (local_a40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a40.TextData.Reference + 0x10))();
        return true;
      }
    }
  }
  else {
    auVar62._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
    auVar62[0] = PCGMetadataDomainID::Default.Flag;
    local_788 = this->CategoryAttribute;
    pFVar55 = &this->CategoryAttribute;
    FStack_780._0_8_ = auVar62._0_8_;
    local_768.MetadataDomain.Flag = FStack_780.Flag;
    local_768.MetadataDomain._1_3_ = FStack_780._1_3_;
    local_768.MetadataDomain.CustomFlag = FStack_780.CustomFlag;
    local_768.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_ba8 = pFVar55;
    FStack_780 = (FPCGMetadataDomainID)auVar62;
    local_768.Name = local_788;
    bVar60 = UPCGMetadata::HasAttribute((UPCGMetadata *)param_3->_padding_,&local_768);
    if (bVar60) {
      auVar7._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar7[0] = PCGMetadataDomainID::Default.Flag;
      local_7a8.Name = *pFVar55;
      FStack_740._0_8_ = auVar7._0_8_;
      local_7a8.MetadataDomain.Flag = FStack_740.Flag;
      local_7a8.MetadataDomain._1_3_ = FStack_740._1_3_;
      local_7a8.MetadataDomain.CustomFlag = FStack_740.CustomFlag;
      local_7a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_748 = local_7a8.Name;
      FStack_740 = (FPCGMetadataDomainID)auVar7;
      pFVar24 = (FPCGMetadataAttribute<FString> *)
                UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_3->_padding_,&local_7a8);
      local_b68 = pFVar24;
      if ((pFVar24 == (FPCGMetadataAttribute<FString> *)0x0) &&
         (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeBase",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeightedByCategory.cpp"
                              ,0x37,L""), bVar60)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      if ((short)pFVar24->_padding_ == 9) {
        local_b78 = (TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
                     *)&param_1->CategoryEntryToInstancesAndWeights;
        local_b84 = 0xffffffff;
        if (((local_b58->StaticMeshComponentPropertyOverrides).ArrayNum != 0) &&
           (4 < (byte)LogPCG._0_1_)) {
          pFVar21 = FText::AsLocalizable_Advanced_LocText
                              (&local_990,L"PCGMeshSelectorWeightedByCategory",
                               L"AttributeToPropertyOverrideUnavailable",
                               L"Attribute to Property Overrides are only currently available with the \'By Attribute\' Selector"
                              );
          FText::ToString(pFVar21);
          bVar60 = param_1 != (FPCGStaticMeshSpawnerContext *)0x0;
          if (bVar60) {
            FPCGContext::GetTaskName((FPCGContext *)param_1,&local_9a0);
            FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_9b0);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar60) && (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
          }
          if ((bVar60) && (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
          }
          pFVar24 = local_b68;
          if (local_990.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_990.TextData.Reference + 0x10))();
            pFVar24 = local_b68;
          }
        }
        if (param_1->CurrentPointIndex == 0) {
          FPCGMetadataAttribute<FString>::GetValue(pFVar24,&local_850,-1);
          local_b98.Key._4_4_ = (local_b60->Entries).ArrayNum;
          uVar40 = (ulonglong)(int)local_b98.Key._4_4_;
          pFVar45 = (local_b60->Entries).AllocatorInstance.Data;
          pFVar57 = pFVar45 + uVar40 * 0x28;
          local_b98.Value = (int *)pFVar57;
LAB_149e8b1c6:
          while( true ) {
            local_bb0 = pFVar45;
            if ((local_b60->Entries).ArrayNum != (int)uVar40) {
              local_bb8 = 0;
              `TCheckedPointerIterator<FPCGWeightedByCategoryEntryList_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_bb8);
            }
            param_4 = local_b18;
            if (pFVar45 == pFVar57) break;
            if (*(int *)&pFVar45[0x20].field_0x0 == 0) {
              if (5 < (byte)LogPCG._0_1_) {
                pFVar21 = FText::FromString(&local_5b8,(FString *)pFVar45);
                pFVar22 = FText::AsLocalizable_Advanced_LocText
                                    (&local_950,L"PCGMeshSelectorWeightedByCategory",
                                     L"EmptyEntryInCategory",
                                     L"Empty entry found in category \'{0}\'");
                pFVar23 = FTextFormat::FTextFormat(&local_5c8,pFVar22,Default);
                pFVar21 = FText::Format<FText>(&local_960,pFVar23,pFVar21);
                FText::ToString(pFVar21);
                FPCGContext::GetTaskName((FPCGContext *)param_1,&local_970);
                FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_980);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_980.Data.AllocatorInstance.Data);
                }
                if (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_970.Data.AllocatorInstance.Data);
                }
                TVar37.Reference = local_950.TextData.Reference;
                if (local_960.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_960.TextData.Reference + 0x10))();
                  TVar37.Reference = local_950.TextData.Reference;
                }
                goto LAB_149e8b30d;
              }
              goto LAB_149e8bae8;
            }
            local_b70[0] = FPCGMetadataAttribute<FString>::FindValue<FString,0>
                                     (local_b68,(FString *)pFVar45);
            if (local_b70[0] != 0xfffffffe) {
              pTVar52 = (TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
                         *)&param_1->CategoryEntryToInstancesAndWeights;
              if (*(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x8 !=
                  *(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x34) {
                puVar3 = *(undefined1 **)&(param_1->CategoryEntryToInstancesAndWeights).field_0x40;
                puVar41 = &(param_1->CategoryEntryToInstancesAndWeights).field_0x38;
                if (puVar3 != (undefined1 *)0x0) {
                  puVar41 = puVar3;
                }
                uVar20 = *(uint *)(puVar41 +
                                  (ulonglong)
                                  (*(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x48
                                   - 1U & local_b70[0]) * 4);
                if (uVar20 != 0xffffffff) {
                  do {
                    puVar42 = (uint *)((longlong)(int)uVar20 * 0x30 +
                                      *(longlong *)
                                       &((TMap<int,FPCGInstancesAndWeights,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>_>
                                          *)pTVar52)->field_0x0);
                    if (*puVar42 == local_b70[0]) {
                      puVar29 = puVar42 + 2;
                      if (puVar42 == (uint *)0x0) {
                        puVar29 = (uint *)0x0;
                      }
                      if (puVar29 != (uint *)0x0) {
                        if ((byte)LogPCG._0_1_ < 3) goto LAB_149e8bae8;
                        pFVar21 = FText::FromString(&local_568,(FString *)pFVar45);
                        pFVar22 = FText::AsLocalizable_Advanced_LocText
                                            (&local_8d0,L"PCGMeshSelectorWeightedByCategory",
                                             L"DuplicateEntry",
                                             L"Duplicate entry found in category \'{0}\'. Subsequent entries are ignored."
                                            );
                        pFVar23 = FTextFormat::FTextFormat(local_558,pFVar22,Default);
                        pFVar21 = FText::Format<FText>(&local_8e0,pFVar23,pFVar21);
                        FText::ToString(pFVar21);
                        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_8f0);
                        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_900);
                        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG)
                        ;
                        if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_900.Data.AllocatorInstance.Data);
                        }
                        if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
                        }
                        TVar37.Reference = local_8d0.TextData.Reference;
                        if (local_8e0.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
                          TVar37.Reference = local_8d0.TextData.Reference;
                        }
                        goto LAB_149e8b30d;
                      }
                      break;
                    }
                    uVar20 = puVar42[10];
                  } while (uVar20 != 0xffffffff);
                }
              }
              uVar20 = local_b84;
              if (((pFVar45[0x10] != (FScriptContainerElement)0x0) &&
                  (uVar20 = local_b70[0], local_b84 != 0xffffffff)) &&
                 (uVar20 = local_b84, 2 < (byte)LogPCG._0_1_)) {
                pFVar21 = FText::AsLocalizable_Advanced_LocText
                                    (&local_8a0,L"PCGMeshSelectorWeightedByCategory",
                                     L"DuplicateDefaultEntry",
                                     L"Duplicate default entry found. Subsequent default entries are ignored."
                                    );
                FText::ToString(pFVar21);
                FPCGContext::GetTaskName((FPCGContext *)param_1,&local_8b0);
                FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_8c0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
                }
                if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
                }
                pFVar45 = local_bb0;
                pTVar52 = local_b78;
                uVar20 = local_b84;
                if (local_8a0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_8a0.TextData.Reference + 0x10))();
                  pFVar45 = local_bb0;
                  pTVar52 = local_b78;
                  uVar20 = local_b84;
                }
              }
              local_b84 = uVar20;
              local_a80 = local_b70;
              local_b10 = (TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)0x0;
              local_a78 = &local_b10;
              local_b08 = 0;
              local_b00 = (void *)0x0;
              local_af8 = 0;
              TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_const_&,FPCGInstancesAndWeights_&&>_>
                        (pTVar52,&local_b50,(bool *)&local_a80);
              lVar53 = (longlong)(int)local_b50.Key * 0x30 + *(longlong *)&local_b78->Elements;
              if (local_b00 != (void *)0x0) {
                FMemory::Free(local_b00);
              }
              DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
                        (local_b10,(int)local_b08);
              if (local_b10 != (TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_b10);
              }
              iVar19 = *(int *)(pFVar45 + 0x20);
              pFVar58 = *(FPCGSoftISMComponentDescriptor **)(pFVar45 + 0x18);
              local_bb4 = 0;
              pFVar54 = (FPCGSoftISMComponentDescriptor *)
                        ((longlong)iVar19 * 0x288 + (longlong)pFVar58);
LAB_149e8b7a3:
              do {
                if (*(int *)(pFVar45 + 0x20) != iVar19) {
                  local_bb7[0] = 0;
                  `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry_const_,int,0>::operator!='
                  ::__l2::<lambda_1>::operator()(local_bb7);
                }
                if (pFVar58 == pFVar54) goto LAB_149e8baab;
                if ((int)pFVar58[1]._padding_ < 1) {
                  if (5 < (byte)LogPCG._0_1_) {
                    pFVar21 = FText::FromString(&local_638,(FString *)pFVar45);
                    pFVar22 = FText::AsLocalizable_Advanced_LocText
                                        (&local_860,L"PCGMeshSelectorWeightedByCategory",
                                         L"ZeroOrNegativeWeight",
                                         L"Entry found with weight <= 0 in category \'{0}\'");
                    pFVar23 = FTextFormat::FTextFormat(&local_628,pFVar22,Default);
                    pFVar21 = FText::Format<FText>(&local_870,pFVar23,pFVar21);
                    FText::ToString(pFVar21);
                    FPCGContext::GetTaskName((FPCGContext *)param_1,&local_880);
                    FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_890);
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_890.Data.AllocatorInstance.Data);
                    }
                    if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_880.Data.AllocatorInstance.Data);
                    }
                    if (local_870.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_870.TextData.Reference + 0x10))();
                    }
                    pFVar45 = local_bb0;
                    if (local_860.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_860.TextData.Reference + 0x10))();
                      pFVar58 = (FPCGSoftISMComponentDescriptor *)&pFVar58[1]._padding_;
                      pFVar45 = local_bb0;
                      goto LAB_149e8b7a3;
                    }
                  }
                }
                else {
                  iVar18 = *(int *)(lVar53 + 0x10);
                  if (iVar18 == *(int *)(lVar53 + 0x14)) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,(ForAnyElementType *)(lVar53 + 8),
                                        (int *)(lVar53 + 0x14));
                  }
                  *(int *)(lVar53 + 0x10) = iVar18 + 1;
                  pFVar46 = (ForAnyElementType *)
                            ((longlong)iVar18 * 0x10 + *(longlong *)(lVar53 + 8));
                  pFVar46->Data = (FScriptContainerElement *)0x0;
                  piVar1 = (int *)((longlong)&pFVar46[1].Data + 4);
                  *piVar1 = 0;
                  *(undefined4 *)&pFVar46[1].Data = 0;
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x2b0,8,pFVar46,piVar1);
                  *(int *)&pFVar46[1].Data = iVar18 + 1;
                  this_03 = (FPCGSoftISMComponentDescriptor *)
                            (pFVar46->Data + (longlong)iVar18 * 0x2b0);
                  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(this_03,pFVar58);
                  this_03[1]._padding_ = 0;
                  this_03[1]._padding_ = 0;
                  this_03[1]._padding_ = 0;
                  this_03[1]._padding_ = 0;
                  this_03[1]._padding_ = 0;
                  this_03[1]._padding_ = -1;
                  local_ae8 = local_b80;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)local_b80);
                  }
                  FWeakObjectPtr::operator=
                            ((FWeakObjectPtr *)&this_03[1]._padding_,(FObjectPtr)&local_ae8);
                  local_bb4 = local_bb4 + (int)pFVar58[1]._padding_;
                  if (((*(int **)(lVar53 + 0x18) <= &local_bb4) &&
                      (&local_bb4 < *(int **)(lVar53 + 0x18) + *(int *)(lVar53 + 0x24))) &&
                     (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar60)) {
                    pcVar5 = (code *)swi(3);
                    uVar15 = (*pcVar5)();
                    return (bool)uVar15;
                  }
                  iVar18 = *(int *)(lVar53 + 0x20);
                  if (iVar18 == *(int *)(lVar53 + 0x24)) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)(lVar53 + 0x18),
                                        (int *)(lVar53 + 0x24));
                  }
                  *(int *)(lVar53 + 0x20) = iVar18 + 1;
                  *(int *)(*(longlong *)(lVar53 + 0x18) + (longlong)iVar18 * 4) = local_bb4;
                  pFVar45 = local_bb0;
                }
                pFVar58 = (FPCGSoftISMComponentDescriptor *)&pFVar58[1]._padding_;
              } while( true );
            }
            if ((byte)LogPCG._0_1_ < 6) goto LAB_149e8bae8;
            pFVar21 = FText::FromName(&local_598,pFVar55);
            pFVar22 = FText::FromString(&local_588,(FString *)pFVar45);
            pFVar25 = FText::AsLocalizable_Advanced_LocText
                                (&local_910,L"PCGMeshSelectorWeightedByCategory",L"UnusedCategory",
                                 L"Unused category \'{0}\'. Not a valid value for attribute \'{1}\'."
                                );
            pFVar23 = FTextFormat::FTextFormat(&local_578,pFVar25,Default);
            pFVar21 = FText::Format<FText,FText>(&local_920,pFVar23,pFVar22,pFVar21);
            FText::ToString(pFVar21);
            FPCGContext::GetTaskName((FPCGContext *)param_1,&local_930);
            FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_940);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_940.Data.AllocatorInstance.Data);
            }
            if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_930.Data.AllocatorInstance.Data);
            }
            TVar37.Reference = local_910.TextData.Reference;
            if (local_920.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_920.TextData.Reference + 0x10))();
              TVar37.Reference = local_910.TextData.Reference;
            }
LAB_149e8b30d:
            if (TVar37.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar37.Reference + 0x10))();
            }
            uVar40 = (ulonglong)local_b98.Key._4_4_;
            pFVar45 = local_bb0 + 0x28;
          }
          if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_850.Data.AllocatorInstance.Data);
          }
        }
        if ((param_1->MaterialOverrideHelper).bIsInitialized == false) {
          FPCGMeshMaterialOverrideHelper::Initialize
                    (&param_1->MaterialOverrideHelper,(FPCGContext *)param_1,
                     local_b60->bUseAttributeMaterialOverrides,
                     &local_b60->MaterialOverrideAttributes,(UPCGMetadata *)local_b80->_padding_);
        }
        if ((param_1->MaterialOverrideHelper).bIsValid != false) {
          local_b98.Value = (int *)0x0;
          FPCGPointValueRanges::FPCGPointValueRanges(&local_208);
          pFVar24 = (FPCGMetadataAttribute<FString> *)local_b98.Value;
          if (local_ba0 != (UPCGBasePointData *)0x0) {
            pFVar26 = FPCGPointValueRanges::FPCGPointValueRanges(&local_528,local_ba0,true);
            lVar53 = 3;
            pFVar14 = &local_208;
            do {
              pFVar38 = pFVar14;
              pFVar27 = pFVar26;
              iVar19 = (pFVar27->TransformRange).ElementView.BytesBetweenElements;
              iVar18 = (pFVar27->TransformRange).ElementView.NumElements;
              (pFVar38->TransformRange).ElementView.FirstElementPtr =
                   (pFVar27->TransformRange).ElementView.FirstElementPtr;
              (pFVar38->TransformRange).ElementView.BytesBetweenElements = iVar19;
              (pFVar38->TransformRange).ElementView.NumElements = iVar18;
              uVar10 = *(undefined4 *)&(pFVar27->TransformRange).field_0x14;
              lVar11 = (pFVar27->TransformRange)._padding_;
              (pFVar38->TransformRange).NumElements = (pFVar27->TransformRange).NumElements;
              *(undefined4 *)&(pFVar38->TransformRange).field_0x14 = uVar10;
              (pFVar38->TransformRange)._padding_ = lVar11;
              dVar2 = (pFVar27->TransformRange).StubValue.Rotation.XY.m128d_f64[1];
              (pFVar38->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
                   (pFVar27->TransformRange).StubValue.Rotation.XY.m128d_f64[0];
              (pFVar38->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar2;
              dVar2 = (pFVar27->TransformRange).StubValue.Rotation.ZW.m128d_f64[1];
              (pFVar38->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] =
                   (pFVar27->TransformRange).StubValue.Rotation.ZW.m128d_f64[0];
              (pFVar38->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar2;
              dVar2 = (pFVar27->TransformRange).StubValue.Translation.XY.m128d_f64[1];
              (pFVar38->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
                   (pFVar27->TransformRange).StubValue.Translation.XY.m128d_f64[0];
              (pFVar38->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar2;
              dVar2 = (pFVar27->TransformRange).StubValue.Translation.ZW.m128d_f64[1];
              (pFVar38->TransformRange).StubValue.Translation.ZW.m128d_f64[0] =
                   (pFVar27->TransformRange).StubValue.Translation.ZW.m128d_f64[0];
              (pFVar38->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar2;
              dVar2 = (pFVar27->TransformRange).StubValue.Scale3D.XY.m128d_f64[1];
              (pFVar38->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
                   (pFVar27->TransformRange).StubValue.Scale3D.XY.m128d_f64[0];
              (pFVar38->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = dVar2;
              dVar2 = (pFVar27->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1];
              (pFVar38->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] =
                   (pFVar27->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0];
              (pFVar38->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar2;
              lVar53 = lVar53 + -1;
              pFVar26 = (FPCGPointValueRanges *)&pFVar27->DensityRange;
              pFVar14 = (FPCGPointValueRanges *)&pFVar38->DensityRange;
            } while (lVar53 != 0);
            iVar19 = (pFVar27->DensityRange).ElementView.BytesBetweenElements;
            iVar18 = (pFVar27->DensityRange).ElementView.NumElements;
            (pFVar38->DensityRange).ElementView.FirstElementPtr =
                 (pFVar27->DensityRange).ElementView.FirstElementPtr;
            (pFVar38->DensityRange).ElementView.BytesBetweenElements = iVar19;
            (pFVar38->DensityRange).ElementView.NumElements = iVar18;
            if ((local_ba0->_padding_ == 0) &&
               (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutPointData->Metadata",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeightedByCategory.cpp"
                                    ,0xa7,L""), bVar60)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            pUVar13 = local_b58;
            auVar8._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
            auVar8[0] = PCGMetadataDomainID::Default.Flag;
            local_730 = local_b58->OutAttributeName;
            FStack_728._0_8_ = auVar8._0_8_;
            local_718.MetadataDomain.Flag = FStack_728.Flag;
            local_718.MetadataDomain._1_3_ = FStack_728._1_3_;
            local_718.MetadataDomain.CustomFlag = FStack_728.CustomFlag;
            local_718.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_728 = (FPCGMetadataDomainID)auVar8;
            local_718.Name = local_730;
            bVar60 = UPCGMetadata::HasAttribute((UPCGMetadata *)local_ba0->_padding_,&local_718);
            if ((!bVar60) && (1 < (byte)LogPCG._0_1_)) {
              pFVar21 = FText::FromName(&local_618,&pUVar13->OutAttributeName);
              pFVar22 = FText::AsLocalizable_Advanced_LocText
                                  (&local_810,L"PCGMeshSelectorWeightedByCategory",
                                   L"AttributeNotInMetadata",
                                   L"Out attribute \'{0}\' is not in the metadata");
              pFVar23 = FTextFormat::FTextFormat(&local_608,pFVar22,Default);
              pFVar21 = FText::Format<FText>(&local_820,pFVar23,pFVar21);
              FText::ToString(pFVar21);
              FPCGContext::GetTaskName((FPCGContext *)param_1,&local_830);
              FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_840);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_840.Data.AllocatorInstance.Data);
              }
              if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_830.Data.AllocatorInstance.Data);
              }
              if (local_820.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_820.TextData.Reference + 0x10))();
              }
              if (local_810.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_810.TextData.Reference + 0x10))();
              }
            }
            auVar9._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
            auVar9[0] = PCGMetadataDomainID::Default.Flag;
            local_6f8 = pUVar13->OutAttributeName;
            FStack_6f0._0_8_ = auVar9._0_8_;
            local_6d8.MetadataDomain.Flag = FStack_6f0.Flag;
            local_6d8.MetadataDomain._1_3_ = FStack_6f0._1_3_;
            local_6d8.MetadataDomain.CustomFlag = FStack_6f0.CustomFlag;
            local_6d8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_6f0 = (FPCGMetadataDomainID)auVar9;
            local_6d8.Name = local_6f8;
            pFVar28 = (FPCGMetadataAttribute<FString> *)
                      UPCGMetadata::GetMutableAttribute
                                ((UPCGMetadata *)local_ba0->_padding_,&local_6d8);
            pFVar24 = (FPCGMetadataAttribute<FString> *)local_b98.Value;
            if (((pFVar28 != (FPCGMetadataAttribute<FString> *)0x0) &&
                (pFVar24 = pFVar28, (short)pFVar28->_padding_ != 9)) &&
               (pFVar24 = (FPCGMetadataAttribute<FString> *)local_b98.Value, 1 < (byte)LogPCG._0_1_)
               ) {
              pFVar21 = FText::AsLocalizable_Advanced_LocText
                                  (&local_7e0,L"PCGMeshSelectorWeightedByCategory",L"TypeNotFString"
                                   ,L"Out attribute is not of valid type FString");
              FText::ToString(pFVar21);
              FPCGContext::GetTaskName((FPCGContext *)param_1,&local_7f0);
              FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_800);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_800.Data.AllocatorInstance.Data);
              }
              if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
              }
              pFVar24 = (FPCGMetadataAttribute<FString> *)local_b98.Value;
              if (local_7e0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_7e0.TextData.Reference + 0x10))();
                pFVar24 = (FPCGMetadataAttribute<FString> *)local_b98.Value;
              }
            }
          }
          local_b98.Value = (int *)pFVar24;
          bVar60 = -1 < CpuChannel->Enabled;
          if (bVar60) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId189,
                       "FPCGStaticMeshSpawnerElement::Execute::SelectEntries",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeightedByCategory.cpp"
                       ,0xbd);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId189);
          }
          pUVar48 = local_b80;
          uVar20 = param_1->CurrentPointIndex;
          local_b20 = (TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
                       *)&param_1->MeshToValueKey;
          local_b98.Key._4_4_ = uVar20;
          FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_398,local_b80);
          iVar19 = (**(code **)(pUVar48->_padding_ + 0x488))(pUVar48);
          piVar1 = local_b98.Value;
          fVar12 = __real_3f800000;
          this_04 = local_b20;
          if ((int)uVar20 < iVar19) {
            do {
              local_bb0 = (FScriptContainerElement *)CONCAT44(local_bb0._4_4_,uVar20);
              uVar44 = ~uVar20 >> 0x1f;
              local_ba8 = (FName *)CONCAT44(local_ba8._4_4_,uVar20 + 1);
              uVar39 = 0;
              if ((int)uVar20 < local_398.TransformRange.NumElements) {
                uVar39 = uVar44;
              }
              if ((uVar39 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)
                        ((longlong)
                         ((local_398.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                         m128d_f64 +
                        (longlong)((int)uVar20 % local_398.TransformRange.ElementView.NumElements) *
                        (longlong)local_398.TransformRange.ElementView.BytesBetweenElements);
              uVar39 = 0;
              if ((int)uVar20 < local_398.MetadataEntryRange.NumElements) {
                uVar39 = uVar44;
              }
              local_b38 = pTVar56;
              if ((uVar39 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              pFVar24 = (FPCGMetadataAttribute<FString> *)
                        ((longlong)
                         ((int)uVar20 % local_398.MetadataEntryRange.ElementView.NumElements) *
                         (longlong)local_398.MetadataEntryRange.ElementView.BytesBetweenElements +
                        (longlong)local_398.MetadataEntryRange.ElementView.FirstElementPtr);
              uVar39 = 0;
              if ((int)uVar20 < local_398.SeedRange.NumElements) {
                uVar39 = uVar44;
              }
              local_b98.Value = (int *)pFVar24;
              if ((uVar39 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              puVar42 = (uint *)((longlong)
                                 ((int)uVar20 % local_398.SeedRange.ElementView.NumElements) *
                                 (longlong)local_398.SeedRange.ElementView.BytesBetweenElements +
                                (longlong)local_398.SeedRange.ElementView.FirstElementPtr);
              uVar20 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)local_b68,pFVar24->_padding_);
              iVar19 = *(int *)&(local_b78->Elements).field_0x8;
              iVar18 = *(int *)&(local_b78->Elements).field_0x34;
              if (iVar19 != iVar18) {
                FVar4 = (local_b78->Hash).SecondaryData;
                FVar43 = (ForElementType<FSetElementId>)&local_b78->Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar43 = FVar4;
                }
                uVar39 = *(uint *)((longlong)FVar43 +
                                  (ulonglong)(local_b78->HashSize - 1U & uVar20) * 4);
                if (uVar39 != 0xffffffff) {
                  do {
                    puVar29 = (uint *)((longlong)(int)uVar39 * 0x30 +
                                      *(longlong *)&local_b78->Elements);
                    if (*puVar29 == uVar20) {
                      puVar49 = puVar29 + 2;
                      if (puVar29 == (uint *)0x0) {
                        puVar49 = (uint *)0x0;
                      }
                      if (puVar49 != (uint *)0x0) goto LAB_149e8c1b7;
                      break;
                    }
                    uVar39 = puVar29[10];
                  } while (uVar39 != 0xffffffff);
                }
              }
              puVar29 = (uint *)0x0;
              if (local_b84 == 0xffffffff) {
                uVar20 = (uint)local_ba8;
                uVar39 = local_b98.Key._4_4_;
              }
              else {
                puVar49 = puVar29;
                if (iVar19 != iVar18) {
                  FVar4 = (local_b78->Hash).SecondaryData;
                  FVar43 = (ForElementType<FSetElementId>)&local_b78->Hash;
                  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                    FVar43 = FVar4;
                  }
                  uVar20 = *(uint *)((longlong)FVar43 +
                                    (ulonglong)(local_b78->HashSize - 1U & local_b84) * 4);
                  if (uVar20 != 0xffffffff) {
                    do {
                      puVar30 = (uint *)((longlong)(int)uVar20 * 0x30 +
                                        *(longlong *)&local_b78->Elements);
                      if (*puVar30 == local_b84) {
                        puVar49 = puVar30 + 2;
                        if (puVar30 == (uint *)0x0) {
                          puVar49 = puVar29;
                        }
                        if (puVar49 != (uint *)0x0) goto LAB_149e8c1b7;
                        break;
                      }
                      uVar20 = puVar30[10];
                    } while (uVar20 != 0xffffffff);
                  }
                }
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InstancesAndWeights",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeightedByCategory.cpp"
                                    ,0xd8,L"");
                if (bVar16) {
                  pcVar5 = (code *)swi(3);
                  uVar15 = (*pcVar5)();
                  return (bool)uVar15;
                }
LAB_149e8c1b7:
                uVar39 = puVar49[6] - 1;
                uVar20 = 0;
                if ((int)uVar39 < (int)puVar49[6]) {
                  uVar20 = ~uVar39 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar5 = (code *)swi(3);
                  uVar15 = (*pcVar5)();
                  return (bool)uVar15;
                }
                iVar19 = *(int *)(*(longlong *)(puVar49 + 4) + -4 + (longlong)(int)puVar49[6] * 4);
                if (param_1->_padding_ != 0) {
                  FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->_padding_);
                }
                uVar20 = 0;
                PCGHelpers::GetRandomStreamFromSeed
                          ((int)local_b28,(UPCGSettings *)(ulonglong)*puVar42,
                           (IPCGGraphExecutionSource *)local_b58);
                if (iVar19 < 1) {
                  iVar19 = 0;
                  auVar62 = extraout_XMM0;
                }
                else {
                  fVar61 = (float)iVar19;
                  auVar62 = ZEXT416((uint)fVar61);
                  local_b24 = local_b24 * 0xbb38435 + 0x3619636b;
                  iVar19 = (int)(((float)(local_b24 >> 9 | 0x3f800000) - fVar12) * fVar61);
                }
                uVar64 = auVar62._8_8_;
                if (0 < (int)puVar49[2]) {
                  lVar53 = 0;
                  do {
                    uVar39 = 0;
                    if ((int)uVar20 < (int)puVar49[6]) {
                      uVar39 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar39 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), auVar62 = extraout_XMM0_00, bVar16)) {
                      pcVar5 = (code *)swi(3);
                      uVar15 = (*pcVar5)();
                      return (bool)uVar15;
                    }
                    uVar64 = auVar62._8_8_;
                    this_04 = local_b20;
                    if (iVar19 < *(int *)(lVar53 + *(longlong *)(puVar49 + 4))) break;
                    uVar20 = uVar20 + 1;
                    lVar53 = lVar53 + 4;
                  } while ((int)uVar20 < (int)puVar49[2]);
                }
                if ((int)uVar20 < (int)puVar49[2]) {
                  auVar62 = *(undefined1 (*) [16])pTVar56[2].AllocatorInstance.InlineData;
                  auVar6._4_8_ = uVar64;
                  auVar6._0_4_ = auVar62._4_4_;
                  auVar63._0_8_ = auVar6._0_8_ << 0x20;
                  auVar63._8_4_ = auVar62._8_4_;
                  auVar63._12_4_ = auVar62._12_4_;
                  dVar2 = *(double *)&pTVar56[2].AllocatorInstance.SecondaryData.field_0x0;
                  pTVar31 = FPCGMeshMaterialOverrideHelper::GetMaterialOverrides
                                      (&param_1->MaterialOverrideHelper,*(longlong *)local_b98.Value
                                      );
                  bVar16 = local_b60->bUseAttributeMaterialOverrides;
                  uVar39 = 0;
                  if ((int)uVar20 < (int)puVar49[2]) {
                    uVar39 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar5 = (code *)swi(3);
                    uVar15 = (*pcVar5)();
                    return (bool)uVar15;
                  }
                  pFVar32 = PCGMeshSelectorWeighted::GetInstanceList
                                      ((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)
                                       ((longlong)(int)uVar20 * 0x10 + *(longlong *)puVar49),bVar16,
                                       pTVar31,auVar63._8_8_ * auVar62._0_8_ * dVar2 < 0.0,local_b80
                                      );
                  piVar33 = &(pFVar32->Instances).ArrayMax;
                  iVar19 = (pFVar32->Instances).ArrayNum;
                  if (iVar19 == *piVar33) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1060,&(pFVar32->Instances).AllocatorInstance,piVar33);
                  }
                  uVar20 = (uint)local_ba8;
                  piVar33 = &(pFVar32->InstancesIndices).ArrayMax;
                  (pFVar32->Instances).ArrayNum = iVar19 + 1;
                  dVar2 = *(double *)((longlong)(local_b38->AllocatorInstance).InlineData + 8);
                  iVar18 = (uint)local_ba8 - 1;
                  pFVar57 = (pFVar32->Instances).AllocatorInstance.Data;
                  lVar53 = (longlong)iVar19 * 0x60;
                  *(double *)(pFVar57 + lVar53) =
                       *(double *)(local_b38->AllocatorInstance).InlineData;
                  *(double *)(pFVar57 + lVar53 + 8) = dVar2;
                  uVar64 = *(undefined8 *)(&local_b38->AllocatorInstance + 1);
                  *(undefined8 *)(pFVar57 + lVar53 + 0x10) =
                       *(undefined8 *)&(local_b38->AllocatorInstance).SecondaryData.field_0x0;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x10 + 8) = uVar64;
                  uVar64 = *(undefined8 *)(local_b38[1].AllocatorInstance.InlineData + 8);
                  *(undefined8 *)(pFVar57 + lVar53 + 0x20) =
                       *(undefined8 *)local_b38[1].AllocatorInstance.InlineData;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x20 + 8) = uVar64;
                  uVar64 = *(undefined8 *)&local_b38[1].NumBits;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x30) =
                       *(undefined8 *)&local_b38[1].AllocatorInstance.SecondaryData.field_0x0;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x30 + 8) = uVar64;
                  uVar64 = *(undefined8 *)(local_b38[2].AllocatorInstance.InlineData + 8);
                  *(undefined8 *)(pFVar57 + lVar53 + 0x40) =
                       *(undefined8 *)local_b38[2].AllocatorInstance.InlineData;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x40 + 8) = uVar64;
                  uVar64 = *(undefined8 *)&local_b38[2].NumBits;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x50) =
                       *(undefined8 *)&local_b38[2].AllocatorInstance.SecondaryData.field_0x0;
                  *(undefined8 *)(pFVar57 + lVar53 + 0x50 + 8) = uVar64;
                  iVar19 = (pFVar32->InstancesIndices).ArrayNum;
                  if (iVar19 == *piVar33) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(pFVar32->InstancesIndices).AllocatorInstance,piVar33
                                       );
                  }
                  (pFVar32->InstancesIndices).ArrayNum = iVar19 + 1;
                  plVar50 = &(pFVar32->Descriptor)._padding_;
                  *(int *)((pFVar32->InstancesIndices).AllocatorInstance.Data + (longlong)iVar19 * 4
                          ) = iVar18;
                  if ((local_ba0 != (UPCGBasePointData *)0x0) &&
                     ((FPCGMetadataAttribute<FString> *)piVar1 !=
                      (FPCGMetadataAttribute<FString> *)0x0)) {
                    FPCGPointValueRanges::SetFromValueRanges
                              (&local_208,param_1->CurrentWriteIndex,&local_398,(int)local_bb0);
                    local_660._0_8_ = *plVar50;
                    FSoftObjectPath::FSoftObjectPath
                              ((FSoftObjectPath *)(local_660 + 8),
                               (FSoftObjectPath *)&(pFVar32->Descriptor)._padding_);
                    piVar33 = TMapBase<TSoftObjectPtr<UStaticMesh>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>_>
                              ::Find((TMapBase<TSoftObjectPtr<UStaticMesh>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>_>
                                      *)this_04,(TSoftObjectPtr<UStaticMesh_const_> *)local_660);
                    if (piVar33 == (int *)0x0) {
                      pFVar34 = FSoftObjectPath::ToString
                                          ((FSoftObjectPath *)&(pFVar32->Descriptor)._padding_,
                                           &local_7d0);
                      local_b40[0] = FPCGMetadataAttribute<FString>::AddValue
                                               ((FPCGMetadataAttribute<FString> *)piVar1,pFVar34);
                      if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
                      }
                      local_a68 = local_b40;
                      local_a70 = plVar50;
                      TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,int_const_&>_>
                                (this_04,&local_b98,(bool *)&local_a70);
                      piVar33 = (int *)(*(longlong *)&this_04->Elements +
                                       (longlong)(int)(uint)local_b98.Key * 0x38 + 0x28);
                      if ((piVar33 == (int *)0x0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("OutValueKey",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeightedByCategory.cpp"
                                              ,0xff,L""), bVar16)) {
                        pcVar5 = (code *)swi(3);
                        uVar15 = (*pcVar5)();
                        return (bool)uVar15;
                      }
                    }
                    this_00 = (UPCGMetadata *)local_ba0->_padding_;
                    uVar39 = param_1->CurrentWriteIndex;
                    uVar44 = 0;
                    if ((int)uVar39 < local_208.MetadataEntryRange.NumElements) {
                      uVar44 = ~uVar39 >> 0x1f;
                    }
                    if ((uVar44 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < NumElements)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                            ,0x8b,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar16)) {
                      pcVar5 = (code *)swi(3);
                      uVar15 = (*pcVar5)();
                      return (bool)uVar15;
                    }
                    if (uVar39 == (int)uVar39 % local_208.MetadataEntryRange.ElementView.NumElements
                       ) {
                      plVar47 = (long64 *)
                                ((longlong)
                                 local_208.MetadataEntryRange.ElementView.BytesBetweenElements *
                                 (longlong)
                                 ((int)uVar39 % local_208.MetadataEntryRange.ElementView.NumElements
                                 ) + (longlong)
                                     local_208.MetadataEntryRange.ElementView.FirstElementPtr);
                    }
                    else {
                      plVar47 = &local_208.MetadataEntryRange.StubValue;
                    }
                    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
                       (this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                                            (this_00,&PCGMetadataDomainID::Default),
                       this_01 == (FPCGMetadataDomain *)0x0)) {
                      if (1 < (byte)LogPCG._0_1_) {
                        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_7c0);
                        UE::Logging::Private::BasicLog<2>
                                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
                        if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
                        }
                      }
                    }
                    else {
                      lVar53 = *plVar47;
                      if (lVar53 == -1) {
                        lVar35 = FPCGMetadataDomain::AddEntry(this_01,-1);
                        *plVar47 = lVar35;
                      }
                      else if (lVar53 < this_01->ItemKeyOffset) {
                        lVar35 = FPCGMetadataDomain::AddEntry(this_01,lVar53);
                        *plVar47 = lVar35;
                      }
                    }
                    iVar19 = *piVar33;
                    uVar39 = param_1->CurrentWriteIndex;
                    uVar44 = 0;
                    if ((int)uVar39 < local_208.MetadataEntryRange.NumElements) {
                      uVar44 = ~uVar39 >> 0x1f;
                    }
                    if ((uVar44 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < NumElements)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                            ,0x8b,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar16)) {
                      pcVar5 = (code *)swi(3);
                      uVar15 = (*pcVar5)();
                      return (bool)uVar15;
                    }
                    if (uVar39 == (int)uVar39 % local_208.MetadataEntryRange.ElementView.NumElements
                       ) {
                      plVar47 = (long64 *)
                                ((longlong)
                                 local_208.MetadataEntryRange.ElementView.BytesBetweenElements *
                                 (longlong)
                                 ((int)uVar39 % local_208.MetadataEntryRange.ElementView.NumElements
                                 ) + (longlong)
                                     local_208.MetadataEntryRange.ElementView.FirstElementPtr);
                    }
                    else {
                      plVar47 = &local_208.MetadataEntryRange.StubValue;
                    }
                    lVar53 = *plVar47;
                    AcquireSRWLockExclusive((PSRWLOCK)((longlong)piVar1 + 0x58));
                    local_b30 = lVar53;
                    if (lVar53 == -1) {
                      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("bAllowInvalidEntries",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                                          ,0x57,L"");
                      if (bVar16) {
                        pcVar5 = (code *)swi(3);
                        uVar15 = (*pcVar5)();
                        return (bool)uVar15;
                      }
                    }
                    else {
                      piVar33 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                ::FindOrAddImpl<__int64_const_&>
                                          ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                            *)((longlong)piVar1 + 8),
                                           (int)((ulonglong)lVar53 >> 0x20) * 0x17 + (int)lVar53,
                                           &local_b30);
                      *piVar33 = iVar19;
                    }
                    ReleaseSRWLockExclusive((PSRWLOCK)((longlong)piVar1 + 0x58));
                    param_1->CurrentWriteIndex = param_1->CurrentWriteIndex + 1;
                    if (local_b58->bApplyMeshBoundsToPoints != false) {
                      local_688 = *plVar50;
                      FSoftObjectPath::FSoftObjectPath
                                (&local_680,(FSoftObjectPath *)&(pFVar32->Descriptor)._padding_);
                      uVar39 = ::GetTypeHash(&local_680);
                      if (local_680.SubPathString.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_680.SubPathString.Data.AllocatorInstance.Data);
                      }
                      this_02 = TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                                ::FindOrAddImpl<TSoftObjectPtr<UStaticMesh>_const_&>
                                          ((TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                                            *)&param_1->MeshToOutPoints,uVar39,
                                           (TSoftObjectPtr<UStaticMesh> *)plVar50);
                      uVar39 = ((uint)((ulonglong)local_ba0 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)local_ba0 >> 4)) * -0x7a143595;
                      uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
                      pTVar36 = TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                ::FindOrAddImpl<UPCGBasePointData_*_const_&>
                                          ((TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                            *)this_02,uVar39 >> 0x10 ^ uVar39,&local_ba0);
                      iVar19 = pTVar36->ArrayNum;
                      if (iVar19 == pTVar36->ArrayMax) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar36->AllocatorInstance,&pTVar36->ArrayMax);
                      }
                      pTVar36->ArrayNum = iVar19 + 1;
                      *(uint *)((pTVar36->AllocatorInstance).Data + (longlong)iVar19 * 4) =
                           uVar20 - 1;
                    }
                  }
                }
                else {
                  uVar20 = (uint)local_ba8;
                }
                uVar39 = local_b98.Key._4_4_;
                if ((0x3ff < (int)(uVar20 - local_b98.Key._4_4_)) &&
                   (bVar16 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_),
                   pUVar48 = local_b80, param_4 = local_b18, uVar39 = uVar20, bVar16)) break;
              }
              local_b98.Key._4_4_ = uVar39;
              pUVar48 = local_b80;
              iVar19 = (**(code **)(local_b80->_padding_ + 0x488))(local_b80);
              param_4 = local_b18;
            } while ((int)uVar20 < iVar19);
          }
          param_1->CurrentPointIndex = uVar20;
          uVar39 = (**(code **)(pUVar48->_padding_ + 0x488))(pUVar48);
          if (uVar20 == uVar39) {
            if (local_ba0 != (UPCGBasePointData *)0x0) {
              (**(code **)(local_ba0->_padding_ + 0x490))(local_ba0,param_1->CurrentWriteIndex,1);
            }
            local_ae0 = &param_1->CategoryEntryToInstancesAndWeights;
            uStack_ad4 = 1;
            iVar19 = *(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x28;
            local_ad0 = &(param_1->CategoryEntryToInstancesAndWeights).field_0x10;
            iStack_ad8 = 0;
            local_ac0 = 0;
            iStack_ac4 = 0;
            if (iVar19 != 0) {
              puVar42 = *(uint **)&(param_1->CategoryEntryToInstancesAndWeights).field_0x20;
              if (puVar42 == (uint *)0x0) {
                puVar42 = (uint *)local_ad0;
              }
              uVar20 = *puVar42;
              while (uVar20 == 0) {
                lVar53 = (longlong)iStack_ad8;
                local_ac0 = local_ac0 + 0x20;
                iStack_ad8 = iStack_ad8 + 1;
                iStack_ac4 = iVar19;
                if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_ad8)
                goto LAB_149e8c9bd;
                uVar20 = puVar42[lVar53 + 1];
              }
              uStack_ad4 = -uVar20 & uVar20;
              uVar40 = (ulonglong)uStack_ad4 * 2 + 1;
              lVar53 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar53 == 0; lVar53 = lVar53 + -1) {
                }
              }
              local_af0 = (int)lVar53;
              iStack_ac4 = local_ac0 + -1 + local_af0;
              if (iVar19 < iStack_ac4) {
                iStack_ac4 = iVar19;
              }
            }
LAB_149e8c9bd:
            uVar20 = *(uint *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x28;
            uStack_abc = local_52c;
            iStack_ab8 = *(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x8 -
                         *(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x34;
            uVar39 = uVar20 & 0xffffffe0;
            TStack_aa8._padding_ = CONCAT44(uStack_ad4,iStack_ad8);
            uStack_ac8 = 0xffffffff;
            pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)
                      &(param_1->CategoryEntryToInstancesAndWeights).field_0x10;
            TStack_aa8.CurrentBitIndex = iStack_ac4;
            TStack_aa8.UnvisitedBitMask = 0xffffffff;
            iVar19 = (int)uVar20 >> 5;
            TStack_aa8._28_4_ = local_52c;
            TStack_aa8.BaseBitIndex = local_ac0;
            uStack_a88 = CONCAT44(uStack_ab4,iStack_ab8);
            local_ba8 = (FName *)CONCAT44(local_ba8._4_4_,uVar20);
            local_b38 = pTVar56;
            local_ab0 = (TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
                         *)local_ae0;
            TStack_aa8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_ad0;
            if (((int)uVar20 < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            uVar44 = *(uint *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x28;
            if (uVar20 != uVar44) {
              puVar3 = *(undefined1 **)&(param_1->CategoryEntryToInstancesAndWeights).field_0x20;
              local_ba8 = (FName *)CONCAT44(local_ba8._4_4_,uVar44);
              puVar41 = (undefined1 *)pTVar56;
              if (puVar3 != (undefined1 *)0x0) {
                puVar41 = puVar3;
              }
              uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar19 * 4);
              while (uVar20 == 0) {
                lVar53 = (longlong)iVar19;
                uVar39 = uVar39 + 0x20;
                iVar19 = iVar19 + 1;
                uVar20 = uVar44;
                if ((int)((uVar44 - 1) + ((int)(uVar44 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
                goto LAB_149e8cad0;
                uVar20 = *(uint *)(puVar41 + lVar53 * 4 + 4);
              }
              uVar40 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
              lVar53 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar53 == 0; lVar53 = lVar53 + -1) {
                }
              }
              uVar20 = (int)lVar53 + -1 + uVar39;
              if ((int)uVar44 < (int)uVar20) {
                uVar20 = uVar44;
              }
              local_ba8 = (FName *)CONCAT44(local_ba8._4_4_,uVar20);
            }
LAB_149e8cad0:
            while( true ) {
              pTVar52 = local_ab0;
              if (*(int *)&(local_ab0->Elements).field_0x8 -
                  *(int *)&(local_ab0->Elements).field_0x34 != (int)uStack_a88) {
                `TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b88);
              }
              lVar53 = (longlong)TStack_aa8.CurrentBitIndex;
              if (((TStack_aa8.CurrentBitIndex == uVar20) && (TStack_aa8.Array == pTVar56)) &&
                 (pTVar52 == local_b78)) break;
              local_b30 = *(longlong *)&pTVar52->Elements;
              local_b98.Key._0_4_ = *(uint *)(local_b30 + 0x10 + lVar53 * 0x30);
              uVar40 = (ulonglong)(int)(uint)local_b98.Key;
              plVar50 = *(longlong **)(local_b30 + 8 + lVar53 * 0x30);
              plVar51 = plVar50 + uVar40 * 2;
              while( true ) {
                if (*(int *)(local_b30 + 0x10 + lVar53 * 0x30) != (int)uVar40) {
                  `TCheckedPointerIterator<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_b87);
                }
                if (plVar50 == plVar51) break;
                lVar11 = plVar50[1];
                pFVar32 = (FPCGMeshInstanceList *)*plVar50;
                pFVar59 = pFVar32 + (int)lVar11;
                while( true ) {
                  if ((int)plVar50[1] != (int)lVar11) {
                    `TCheckedPointerIterator<FPCGMeshInstanceList,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_b86);
                  }
                  if (pFVar32 == pFVar59) break;
                  iVar19 = param_4->ArrayNum;
                  if (iVar19 == param_4->ArrayMax) {
                    iVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x2b0,8,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar19 + 1;
                  FPCGMeshInstanceList::FPCGMeshInstanceList
                            ((FPCGMeshInstanceList *)
                             ((param_4->AllocatorInstance).Data + (longlong)iVar19 * 0x2b0),pFVar32)
                  ;
                  pFVar32 = pFVar32 + 1;
                }
                plVar50 = plVar50 + 2;
                uVar40 = (ulonglong)(uint)local_b98.Key;
              }
              TStack_aa8.UnvisitedBitMask =
                   TStack_aa8.UnvisitedBitMask & ~TStack_aa8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_aa8);
              pTVar56 = local_b38;
              uVar20 = (uint)local_ba8;
            }
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          if (!bVar60) {
            return bVar16;
          }
          FCpuProfilerTrace::OutputEndEvent();
          return bVar16;
        }
      }
      else if (1 < (byte)LogPCG._0_1_) {
        pFVar21 = FText::FromName(&local_5e8,pFVar55);
        pFVar22 = FText::AsLocalizable_Advanced_LocText
                            (&local_9c0,L"PCGMeshSelectorWeightedByCategory",L"AttributeInvalidType"
                             ,L"Attribute \'{0}\' is not of valid type FString");
        pFVar23 = FTextFormat::FTextFormat(&local_5d8,pFVar22,Default);
        pFVar21 = FText::Format<FText>(&local_9d0,pFVar23,pFVar21);
        FText::ToString(pFVar21);
        if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_9e0);
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_9f0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((param_1 != (FPCGStaticMeshSpawnerContext *)0x0) &&
           (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
        }
        if (local_9d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_9d0.TextData.Reference + 0x10))();
        }
        if (local_9c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_9c0.TextData.Reference + 0x10))();
          return true;
        }
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      pFVar21 = FText::FromName(&local_5a8,pFVar55);
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_a00,L"PCGMeshSelectorWeightedByCategory",L"InputMissingAttribute",
                           L"Attribute \'{0}\' is not in the metadata");
      pFVar23 = FTextFormat::FTextFormat(&local_5f8,pFVar22,Default);
      pFVar21 = FText::Format<FText>(&local_a10,pFVar23,pFVar21);
      FText::ToString(pFVar21);
      bVar60 = param_1 != (FPCGStaticMeshSpawnerContext *)0x0;
      if (bVar60) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_a20);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_a30);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar60) && (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a30.Data.AllocatorInstance.Data);
      }
      if ((bVar60) && (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a20.Data.AllocatorInstance.Data);
      }
      if (local_a10.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a10.TextData.Reference + 0x10))();
      }
      if (local_a00.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a00.TextData.Reference + 0x10))();
        return true;
      }
    }
  }
  return true;
LAB_149e8baab:
  pFVar55 = local_ba8;
  pFVar57 = (FScriptContainerElement *)local_b98.Value;
  if ((*(int *)(lVar53 + 0x20) == 0) &&
     (local_b50.Value._0_4_ = local_b70[0],
     *(int *)&(local_b78->Elements).field_0x8 != *(int *)&(local_b78->Elements).field_0x34)) {
    TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>(local_b78,local_b70[0],(int *)&local_b50.Value);
    pFVar55 = local_ba8;
    pFVar57 = (FScriptContainerElement *)local_b98.Value;
  }
LAB_149e8bae8:
  uVar40 = (ulonglong)local_b98.Key._4_4_;
  pFVar45 = pFVar45 + 0x28;
  goto LAB_149e8b1c6;
}

// StaticRegisterNativesUPCGMeshSelectorWeightedByCategory @ 149ec1e00

void __cdecl
UPCGMeshSelectorWeightedByCategory::StaticRegisterNativesUPCGMeshSelectorWeightedByCategory(void)

{
  return;
}

