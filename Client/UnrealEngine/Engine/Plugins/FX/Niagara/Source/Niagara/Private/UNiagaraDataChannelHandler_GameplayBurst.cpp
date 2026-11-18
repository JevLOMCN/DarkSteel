// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14907d190

UClass * __cdecl UNiagaraDataChannelHandler_GameplayBurst::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_GameplayBurst.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_GameplayBurst",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_GameplayBurst.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_GameplayBurst,0x1d8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataChannelHandler_GameplayBurst>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_GameplayBurst>,local_res8,
               UNiagaraDataChannelHandler_MapBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_GameplayBurst.InnerSingleton;
}

// UNiagaraDataChannelHandler_GameplayBurst @ 1490b2600

UNiagaraDataChannelHandler_GameplayBurst * __thiscall
UNiagaraDataChannelHandler_GameplayBurst::UNiagaraDataChannelHandler_GameplayBurst
          (UNiagaraDataChannelHandler_GameplayBurst *this,FVTableHelper *param_1)

{
  UNiagaraDataChannelHandler_MapBase::UNiagaraDataChannelHandler_MapBase
            ((UNiagaraDataChannelHandler_MapBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_GameplayBurst__6B_;
  (this->AttachmentSettings).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayMax = 0;
  (this->AttachmentSettings).ComponentTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).ComponentTypes.ArrayNum = 0;
  (this->AttachmentSettings).ComponentTypes.ArrayMax = 0;
  (this->DefaultCellSize).field0_0x0._s_0.X = 2500.0;
  (this->DefaultCellSize).field0_0x0._s_0.Y = 2500.0;
  (this->DefaultCellSize).field0_0x0._s_0.Z = 2500.0;
  (this->DefaultSystemBoundsPadding).field0_0x0._s_0.X = 250.0;
  (this->DefaultSystemBoundsPadding).field0_0x0._s_0.Y = 250.0;
  (this->DefaultSystemBoundsPadding).field0_0x0._s_0.Z = 250.0;
  (this->AttachmentSettings).SpeedThreshold = -1.0;
  return this;
}

// UNiagaraDataChannelHandler_GameplayBurst @ 1490b26a0

UNiagaraDataChannelHandler_GameplayBurst * __thiscall
UNiagaraDataChannelHandler_GameplayBurst::UNiagaraDataChannelHandler_GameplayBurst
          (UNiagaraDataChannelHandler_GameplayBurst *this,FObjectInitializer *param_1)

{
  UNiagaraDataChannelHandler_MapBase::UNiagaraDataChannelHandler_MapBase
            ((UNiagaraDataChannelHandler_MapBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_GameplayBurst__6B_;
  (this->AttachmentSettings).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayNum = 0;
  (this->AttachmentSettings).GameplayTags.ParentTags.ArrayMax = 0;
  (this->AttachmentSettings).ComponentTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSettings).ComponentTypes.ArrayNum = 0;
  (this->AttachmentSettings).ComponentTypes.ArrayMax = 0;
  (this->DefaultCellSize).field0_0x0._s_0.X = 2500.0;
  (this->DefaultCellSize).field0_0x0._s_0.Y = 2500.0;
  (this->DefaultCellSize).field0_0x0._s_0.Z = 2500.0;
  (this->DefaultSystemBoundsPadding).field0_0x0._s_0.X = 250.0;
  (this->DefaultSystemBoundsPadding).field0_0x0._s_0.Y = 250.0;
  (this->DefaultSystemBoundsPadding).field0_0x0._s_0.Z = 250.0;
  (this->AttachmentSettings).SpeedThreshold = -1.0;
  return this;
}

// ~UNiagaraDataChannelHandler_GameplayBurst @ 1490b85f0

void __thiscall
UNiagaraDataChannelHandler_GameplayBurst::~UNiagaraDataChannelHandler_GameplayBurst
          (UNiagaraDataChannelHandler_GameplayBurst *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_GameplayBurst__6B_;
  pFVar1 = (this->AttachmentSettings).ComponentTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttachmentSettings).GameplayTags.ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttachmentSettings).GameplayTags.GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataChannelHandler_MapBase::~UNiagaraDataChannelHandler_MapBase
            ((UNiagaraDataChannelHandler_MapBase *)this);
  return;
}

// GenerateKey @ 1490fad40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_GameplayBurst::GenerateKey
          (UNiagaraDataChannelHandler_GameplayBurst *this,FNDCAccessContextInst *param_1,
          FNDCMapKeyWriter *param_2)

{
  uchar *puVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FNDCAccessContext_GameplayBurst *pFVar8;
  UClass *pUVar9;
  TVector<double> *pTVar10;
  long64 lVar11;
  FNDCAccessContext_MapBase *pFVar12;
  FNDCMapKey *pFVar13;
  USceneComponent *this_00;
  uint uVar14;
  ForElementType<unsigned_char> *pFVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  pFVar8 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_GameplayBurst>(param_1);
  bVar7 = false;
  this_00 = (USceneComponent *)pFVar8->_padding_;
  if (this_00 == (USceneComponent *)0x0) {
LAB_1490fae13:
    bVar3 = pFVar8->field_0x48;
    pFVar8->bAttachedToOwningComponent = bVar7;
    pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
    if (bVar7 == false) {
      iVar4 = *(int *)(pFVar15->InlineData + 0x48);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,1,pFVar15,(int *)(pFVar15->InlineData + 0x48),
                 (int *)(pFVar15->InlineData + 0x4c));
      pFVar13 = *(FNDCMapKey **)
                 &(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
      if (pFVar13 == (FNDCMapKey *)0x0) {
        pFVar13 = param_2->DestKey;
      }
      (pFVar13->KeyData).AllocatorInstance.InlineData[iVar4] = bVar3 >> 1 & 2;
      lVar5 = pFVar8->_padding_;
      if ((lVar5 == 0) || ((pFVar8->_padding_ & 1) != 0)) {
        uVar24 = (undefined4)pFVar8->_padding_;
        uVar25 = *(undefined4 *)((longlong)&pFVar8->_padding_ + 4);
        uVar26 = (undefined4)pFVar8->_padding_;
        uVar27 = *(undefined4 *)((longlong)&pFVar8->_padding_ + 4);
        dVar16 = (double)pFVar8->_padding_;
      }
      else {
        uVar24 = *(undefined4 *)(lVar5 + 0x210);
        uVar25 = *(undefined4 *)(lVar5 + 0x214);
        uVar26 = *(undefined4 *)(lVar5 + 0x218);
        uVar27 = *(undefined4 *)(lVar5 + 0x21c);
        dVar16 = *(double *)(lVar5 + 0x220);
      }
      pTVar10 = &pFVar8->CellSizeOverride;
      if (pFVar8->bOverrideCellSize == '\0') {
        pTVar10 = &this->DefaultCellSize;
      }
      dVar2 = (pTVar10->field0_0x0)._s_0.Z;
      dVar20 = (pTVar10->field0_0x0)._s_0.X;
      dVar19 = (pTVar10->field0_0x0)._s_0.Y;
      dVar21 = __real_47eff933c0000000;
      if (dVar20 != 0.0) {
        dVar21 = __real_3ff0000000000000 / dVar20;
      }
      dVar20 = __real_47eff933c0000000;
      if (dVar19 != 0.0) {
        dVar20 = __real_3ff0000000000000 / dVar19;
      }
      dVar19 = __real_47eff933c0000000;
      if (dVar2 != 0.0) {
        dVar19 = __real_3ff0000000000000 / dVar2;
      }
      auVar18._0_8_ = dVar16 * dVar19;
      auVar18._8_8_ = 0;
      auVar23 = roundpd(unaff_XMM7,auVar18,1);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = (double)CONCAT44(uVar27,uVar26) * dVar20;
      auVar22 = roundpd(unaff_XMM6,auVar22,1);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (double)CONCAT44(uVar25,uVar24) * dVar21;
      auVar18 = roundpd(auVar17,auVar17,1);
      lVar11 = NDCGameplayBurst_Local::GetCellCoordAsInt64(auVar18._0_8_);
      pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
      iVar4 = *(int *)(pFVar15->InlineData + 0x48);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,8,pFVar15,(int *)(pFVar15->InlineData + 0x48),
                 (int *)(pFVar15->InlineData + 0x4c));
      pFVar13 = *(FNDCMapKey **)
                 &(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
      if (pFVar13 == (FNDCMapKey *)0x0) {
        pFVar13 = param_2->DestKey;
      }
      *(long64 *)((pFVar13->KeyData).AllocatorInstance.InlineData + iVar4) = lVar11;
      lVar11 = NDCGameplayBurst_Local::GetCellCoordAsInt64(auVar22._0_8_);
      pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
      iVar4 = *(int *)(pFVar15->InlineData + 0x48);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,8,pFVar15,(int *)(pFVar15->InlineData + 0x48),
                 (int *)(pFVar15->InlineData + 0x4c));
      pFVar13 = *(FNDCMapKey **)
                 &(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
      if (pFVar13 == (FNDCMapKey *)0x0) {
        pFVar13 = param_2->DestKey;
      }
      *(long64 *)((pFVar13->KeyData).AllocatorInstance.InlineData + iVar4) = lVar11;
      lVar11 = NDCGameplayBurst_Local::GetCellCoordAsInt64(auVar23._0_8_);
      pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
      iVar4 = *(int *)(pFVar15->InlineData + 0x48);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,8,pFVar15,(int *)(pFVar15->InlineData + 0x48),
                 (int *)(pFVar15->InlineData + 0x4c));
      pFVar13 = *(FNDCMapKey **)
                 &(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
      if (pFVar13 == (FNDCMapKey *)0x0) {
        pFVar13 = param_2->DestKey;
      }
      *(long64 *)((pFVar13->KeyData).AllocatorInstance.InlineData + iVar4) = lVar11;
      if (pFVar8->bOverrideCellSize != '\0') {
        pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
        iVar4 = *(int *)(pFVar15->InlineData + 0x48);
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,0x18,pFVar15,(int *)(pFVar15->InlineData + 0x48),
                   (int *)(pFVar15->InlineData + 0x4c));
        dVar16 = (pFVar8->CellSizeOverride).field0_0x0._s_0.Y;
        pFVar13 = *(FNDCMapKey **)
                   &(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
        if (pFVar13 == (FNDCMapKey *)0x0) {
          pFVar13 = param_2->DestKey;
        }
        puVar1 = (pFVar13->KeyData).AllocatorInstance.InlineData + iVar4;
        *(double *)puVar1 = (pFVar8->CellSizeOverride).field0_0x0._s_0.X;
        *(double *)(puVar1 + 8) = dVar16;
        *(double *)((pFVar13->KeyData).AllocatorInstance.InlineData + 0x10 + iVar4) =
             (pFVar8->CellSizeOverride).field0_0x0._s_0.Z;
      }
      uVar14 = (pFVar8->GameplayTag).TagName.ComparisonIndex.Value;
      goto LAB_1490fb0d8;
    }
  }
  else {
    bVar7 = UActorComponent::ComponentHasTag((UActorComponent *)this_00,AttachedComponentTag);
    if (!bVar7) {
      bVar7 = FNDCGameplayBurstAttachmentSettings::UseAttachedPathForComponent
                        (&this->AttachmentSettings,this_00,pFVar8->bForceAttachToOwningComponent);
      goto LAB_1490fae13;
    }
    pUVar9 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar4 = (int)pUVar9->_padding_;
    if (((*(int *)(this_00->_padding_ + 0x38) < iVar4) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
         &pUVar9->_padding_)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Comp->IsA<UNiagaraComponent>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_GameplayBurst.cpp"
                           ,0xea,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (this_00->AttachParent).field0_0x0.DebugPtr;
    bVar7 = true;
    pFVar8->bAttachedToOwningComponent = '\x01';
    pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
  }
  iVar4 = *(int *)pFVar15[1].InlineData;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,1,pFVar15,(int *)(pFVar15 + 1),(int *)(pFVar15[1].InlineData + 4));
  pFVar13 = *(FNDCMapKey **)&(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
  if (pFVar13 == (FNDCMapKey *)0x0) {
    pFVar13 = param_2->DestKey;
  }
  (pFVar13->KeyData).AllocatorInstance.InlineData[iVar4] = bVar7;
  uVar14 = *(uint *)((longlong)&this_00->_padding_ + 4);
LAB_1490fb0d8:
  pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
  iVar4 = *(int *)(pFVar15->InlineData + 0x48);
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,4,pFVar15,(int *)(pFVar15->InlineData + 0x48),(int *)(pFVar15->InlineData + 0x4c));
  pFVar13 = *(FNDCMapKey **)&(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
  if (pFVar13 == (FNDCMapKey *)0x0) {
    pFVar13 = param_2->DestKey;
  }
  *(uint *)((pFVar13->KeyData).AllocatorInstance.InlineData + iVar4) = uVar14;
  pFVar12 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
  if ((*(longlong *)&pFVar12->field_0x30 != 0) &&
     ((*(uint *)(*(longlong *)&pFVar12->field_0x30 + 8) >> 0x1e & 1) == 0)) {
    pFVar15 = (ForElementType<unsigned_char> *)param_2->DestKey;
    iVar4 = *(int *)(pFVar15->InlineData + 0x48);
    uVar24 = *(undefined4 *)(*(longlong *)&pFVar12->field_0x30 + 0x18);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,4,pFVar15,(int *)(pFVar15->InlineData + 0x48),(int *)(pFVar15->InlineData + 0x4c)
              );
    pFVar13 = *(FNDCMapKey **)&(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0
    ;
    if (pFVar13 == (FNDCMapKey *)0x0) {
      pFVar13 = param_2->DestKey;
    }
    *(undefined4 *)((pFVar13->KeyData).AllocatorInstance.InlineData + iVar4) = uVar24;
  }
  return;
}

// GetMapEntryType @ 149106060

TNDCMapEntryType __thiscall
UNiagaraDataChannelHandler_GameplayBurst::GetMapEntryType
          (UNiagaraDataChannelHandler_GameplayBurst *this)

{
  UPackage *pUVar1;
  UScriptStruct *in_RDX;
  
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntry_GameplayBurst.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntry_GameplayBurst.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntry_GameplayBurst,(UObject *)pUVar1,
                         L"NDCMapEntry_GameplayBurst");
  }
  TNDCMapEntryType::TNDCMapEntryType
            ((TNDCMapEntryType *)in_RDX,
             Z_Registration_Info_UScriptStruct_FNDCMapEntry_GameplayBurst.OuterSingleton);
  return (TNDCMapEntryType)in_RDX;
}

// GetPrivateStaticClass @ 149108240

UClass * __cdecl UNiagaraDataChannelHandler_GameplayBurst::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_GameplayBurst.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_GameplayBurst",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_GameplayBurst.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_GameplayBurst,0x1d8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataChannelHandler_GameplayBurst>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_GameplayBurst>,local_res8,
               UNiagaraDataChannelHandler_MapBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_GameplayBurst.InnerSingleton;
}

// Init @ 149113d10

void __thiscall
UNiagaraDataChannelHandler_GameplayBurst::Init
          (UNiagaraDataChannelHandler_GameplayBurst *this,UNiagaraDataChannel *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  longlong *plVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  UNiagaraDataChannel *local_res8;
  undefined1 local_res10 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar11 = L"";
  if (param_1 == (UNiagaraDataChannel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelHandler.cpp"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_res10);
  this->_padding_ = *plVar7;
  pUVar8 = UNiagaraDataChannel_MapBase::StaticClass();
  iVar1 = (int)pUVar8->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar8->_padding_)) && (param_1 != (UNiagaraDataChannel *)0x0)) {
    pUVar2 = (UObject *)param_1[1]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
    pUVar8 = UNiagaraDataChannel_GameplayBurst::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      dVar4 = (double)param_1[1]._padding_;
      (this->DefaultCellSize).field0_0x0._s_0.X = (double)param_1[1]._padding_;
      (this->DefaultCellSize).field0_0x0._s_0.Y = dVar4;
      (this->DefaultCellSize).field0_0x0._s_0.Z = (double)param_1[1]._padding_;
      pFVar5 = param_1[1].ChannelVariables.AllocatorInstance.Data;
      (this->DefaultSystemBoundsPadding).field0_0x0._s_0.X = (double)param_1[1]._padding_;
      (this->DefaultSystemBoundsPadding).field0_0x0._s_0.Y = (double)pFVar5;
      (this->DefaultSystemBoundsPadding).field0_0x0._s_0.Z =
           *(double *)&param_1[1].ChannelVariables.ArrayNum;
      FNDCGameplayBurstAttachmentSettings::operator=
                (&this->AttachmentSettings,
                 (FNDCGameplayBurstAttachmentSettings *)&param_1[1].bKeepPreviousFrameData);
      return;
    }
    pFVar9 = GetTypeName<UNiagaraDataChannel_GameplayBurst>(&local_58);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UNiagaraDataChannel_const_>(&local_48,param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar10);
  }
  pFVar9 = GetTypeName<UNiagaraDataChannel_MapBase>(&local_38);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UNiagaraDataChannel_const_>(&local_28,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar10);
}

// StaticRegisterNativesUNiagaraDataChannelHandler_GameplayBurst @ 149139ce0

void __cdecl
UNiagaraDataChannelHandler_GameplayBurst::
StaticRegisterNativesUNiagaraDataChannelHandler_GameplayBurst(void)

{
  return;
}

