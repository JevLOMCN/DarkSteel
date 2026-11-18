// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149d76920

UClass * __cdecl UPCGMeshSelectorWeighted::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorWeighted",
               &Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorWeighted,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMeshSelectorWeighted>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorWeighted>,local_res8,
               UPCGMeshSelectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.InnerSingleton;
}

// UPCGMeshSelectorWeighted @ 149e36180

UPCGMeshSelectorWeighted * __thiscall
UPCGMeshSelectorWeighted::UPCGMeshSelectorWeighted
          (UPCGMeshSelectorWeighted *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorWeighted__6B_;
  (this->MeshEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEntries).ArrayNum = 0;
  (this->MeshEntries).ArrayMax = 0;
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// UPCGMeshSelectorWeighted @ 149e361c0

UPCGMeshSelectorWeighted * __thiscall
UPCGMeshSelectorWeighted::UPCGMeshSelectorWeighted
          (UPCGMeshSelectorWeighted *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorWeighted__6B_;
  (this->MeshEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEntries).ArrayNum = 0;
  (this->MeshEntries).ArrayMax = 0;
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// ~UPCGMeshSelectorWeighted @ 149e37650

void __thiscall UPCGMeshSelectorWeighted::~UPCGMeshSelectorWeighted(UPCGMeshSelectorWeighted *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMeshSelectorWeighted__6B_;
  pFVar1 = (this->MaterialOverrideAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGMeshSelectorWeightedEntry,int>
            ((FPCGMeshSelectorWeightedEntry *)(this->MeshEntries).AllocatorInstance.Data,
             (this->MeshEntries).ArrayNum);
  pFVar1 = (this->MeshEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGMeshSelectorBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149e5d7e0

UClass * __cdecl UPCGMeshSelectorWeighted::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorWeighted",
               &Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorWeighted,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMeshSelectorWeighted>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorWeighted>,local_res8,
               UPCGMeshSelectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorWeighted.InnerSingleton;
}

// PostDuplicate @ 149e7a2c0

void __thiscall UPCGMeshSelectorWeighted::PostDuplicate(UPCGMeshSelectorWeighted *this,bool param_1)

{
  return;
}

// PostEditImport @ 149e7a2e0

void __thiscall UPCGMeshSelectorWeighted::PostEditImport(UPCGMeshSelectorWeighted *this)

{
  return;
}

// PostLoad @ 149e7a330

void __thiscall UPCGMeshSelectorWeighted::PostLoad(UPCGMeshSelectorWeighted *this)

{
  int iVar1;
  FISMComponentDescriptorBase *this_00;
  FISMComponentDescriptorBase *pFVar2;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  iVar1 = (this->MeshEntries).ArrayNum;
  this_00 = (FISMComponentDescriptorBase *)(this->MeshEntries).AllocatorInstance.Data;
  pFVar2 = (FISMComponentDescriptorBase *)((longlong)this_00 + (longlong)iVar1 * 0x288);
  while( true ) {
    if ((this->MeshEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FISMComponentDescriptorBase::PostLoadFixup(this_00,(UObject *)this);
    this_00 = (FISMComponentDescriptorBase *)
              ((longlong)&this_00[1].BodyInstance.CollisionResponses.ResponseToChannels.field0_0x0 +
              8);
  }
  return;
}

// SelectMeshInstances @ 149e89770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPCGMeshSelectorWeighted::SelectMeshInstances
          (UPCGMeshSelectorWeighted *this,FPCGStaticMeshSpawnerContext *param_1,
          UPCGStaticMeshSpawnerSettings *param_2,UPCGBasePointData *param_3,
          TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_4,
          UPCGBasePointData *param_5)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this_00;
  code *pcVar4;
  undefined1 auVar5 [12];
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  FPCGStaticMeshSpawnerContext *pFVar10;
  FPCGPointValueRanges *pFVar11;
  FPCGMetadataAttribute<FString> *pFVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  FText *pFVar20;
  FPCGPointValueRanges *pFVar21;
  FPCGPointValueRanges *pFVar22;
  FText *pFVar23;
  FTextFormat *pFVar24;
  FPCGMetadataAttribute<FString> *pFVar25;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar26;
  FPCGMeshInstanceList *pFVar27;
  int *piVar28;
  FString *pFVar29;
  FPCGMetadataDomain *this_01;
  long64 lVar30;
  TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar31;
  TArray<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar32;
  FPCGPointValueRanges *pFVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  FPCGSoftISMComponentDescriptor *this_03;
  uint *puVar38;
  FPCGSoftISMComponentDescriptor *pFVar39;
  UPCGBasePointData *pUVar40;
  FPCGMeshInstanceList *pFVar41;
  FPCGSoftISMComponentDescriptor *pFVar42;
  long64 *plVar43;
  FScriptContainerElement *pFVar44;
  bool bVar45;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar46 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_828 [32];
  undefined1 local_7d7 [3];
  int local_7d4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_7d0;
  UPCGBasePointData *local_7c8;
  undefined1 local_7c0;
  undefined1 local_7bf [7];
  UPCGBasePointData *local_7b8;
  uint local_7b0;
  uint local_7ac;
  UPCGMeshSelectorWeighted *local_7a8;
  FPCGMetadataAttribute<FString> *local_7a0;
  FPCGStaticMeshSpawnerContext *local_798;
  int local_790;
  int local_78c;
  TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,int_const_&> local_788;
  undefined1 local_778 [4];
  uint local_774;
  double *local_770;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *local_768;
  UPCGBasePointData *local_760;
  longlong local_758;
  TArray<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_750;
  longlong *local_748;
  int *local_740;
  FString local_738;
  FString local_728;
  FText local_718;
  FString local_708;
  FString local_6f8;
  FText local_6e8;
  FString local_6d8;
  FString local_6c8;
  FText local_6b8;
  FString local_6a8;
  FString local_698;
  FText local_688;
  FText local_678;
  FString local_668;
  FString local_658;
  FText local_648;
  FString local_638;
  FString local_628;
  FName local_618;
  FPCGMetadataDomainID FStack_610;
  FPCGAttributeIdentifier local_5f8;
  FName local_5d8;
  FPCGMetadataDomainID FStack_5d0;
  FPCGAttributeIdentifier local_5b8;
  longlong local_598;
  FSoftObjectPath local_590;
  undefined1 local_570 [40];
  FText local_548;
  FTextFormat local_538;
  FPCGPointValueRanges local_528;
  FConstPCGPointValueRanges local_398;
  FPCGPointValueRanges local_208;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_828;
  local_768 = param_4;
  local_7c8 = param_5;
  local_7d0 = (TArray<int,TSizedDefaultAllocator<32>_> *)((ulonglong)local_7d0 & 0xffffffff00000000)
  ;
  local_7b8 = param_3;
  local_7a8 = this;
  local_798 = param_1;
  local_788.Value = (int *)param_2;
  if (param_3 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_718,L"PCGMeshSelectorWeighted",L"MissingInputData",
                           L"Missing input data");
      FText::ToString(pFVar20);
      bVar45 = param_1 != (FPCGStaticMeshSpawnerContext *)0x0;
      if (bVar45) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_728);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_738);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar45) && (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_738.Data.AllocatorInstance.Data);
      }
      if ((bVar45) && (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      if (local_718.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_718.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    local_750 = &param_1->WeightedMeshInstances;
    pTVar31 = &param_1->CumulativeWeights;
    local_7d0 = pTVar31;
    if (((param_2->StaticMeshComponentPropertyOverrides).ArrayNum != 0) && (4 < (byte)LogPCG._0_1_))
    {
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_6e8,L"PCGMeshSelectorWeighted",
                           L"AttributeToPropertyOverrideUnavailable",
                           L"Attribute to Property Overrides are only currently available with the \'By Attribute\' Selector"
                          );
      FText::ToString(pFVar20);
      bVar45 = param_1 != (FPCGStaticMeshSpawnerContext *)0x0;
      if (bVar45) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_6f8);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_708);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar45) && (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_708.Data.AllocatorInstance.Data);
      }
      if ((bVar45) && (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      if (local_6e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
      }
    }
    pFVar10 = local_798;
    if (param_1->CurrentPointIndex == 0) {
      iVar17 = (local_7a8->MeshEntries).ArrayNum;
      pFVar39 = (FPCGSoftISMComponentDescriptor *)(local_7a8->MeshEntries).AllocatorInstance.Data;
      local_7d4 = 0;
      pFVar42 = (FPCGSoftISMComponentDescriptor *)((longlong)pFVar39 + (longlong)iVar17 * 0x288);
      while( true ) {
        if ((local_7a8->MeshEntries).ArrayNum != iVar17) {
          local_7d7[0] = 0;
          `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_7d7);
        }
        if (pFVar39 == pFVar42) break;
        if ((int)pFVar39[1]._padding_ < 1) {
          if (5 < (byte)LogPCG._0_1_) {
            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                (&local_6b8,L"PCGMeshSelectorWeighted",L"EntryWithNegativeWeight",
                                 L"Entry found with weight <= 0");
            FText::ToString(pFVar20);
            FPCGContext::GetTaskName((FPCGContext *)pFVar10,&local_6c8);
            FPCGContext::GetExecutionSourceName((FPCGContext *)pFVar10,&local_6d8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
            }
            if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
            }
            pTVar31 = local_7d0;
            if (local_6b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_6b8.TextData.Reference + 0x10))();
              pTVar31 = local_7d0;
            }
          }
        }
        else {
          iVar16 = (pFVar10->WeightedMeshInstances).ArrayNum;
          piVar28 = &(pFVar10->WeightedMeshInstances).ArrayMax;
          if (iVar16 == *piVar28) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(pFVar10->WeightedMeshInstances).AllocatorInstance,piVar28);
          }
          pFVar37 = (pFVar10->WeightedMeshInstances).AllocatorInstance.Data;
          (pFVar10->WeightedMeshInstances).ArrayNum = iVar16 + 1;
          pFVar37 = pFVar37 + (longlong)iVar16 * 0x10;
          *(undefined8 *)&pFVar37->field_0x0 = 0;
          *(int *)(pFVar37 + 0xc) = 0;
          *(undefined4 *)&pFVar37[8].field_0x0 = 0;
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x2b0,8,(ForAnyElementType *)pFVar37,(int *)(pFVar37 + 0xc));
          *(int *)&pFVar37[8].field_0x0 = iVar16 + 1;
          this_03 = (FPCGSoftISMComponentDescriptor *)
                    (*(longlong *)&pFVar37->field_0x0 + (longlong)iVar16 * 0x2b0);
          FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(this_03,pFVar39);
          this_03[1]._padding_ = -1;
          this_03[1]._padding_ = 0;
          this_03[1]._padding_ = 0;
          this_03[1]._padding_ = 0;
          this_03[1]._padding_ = 0;
          this_03[1]._padding_ = 0;
          local_760 = local_7b8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)local_7b8);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_03[1]._padding_,(FObjectPtr)&local_760);
          pTVar31 = local_7d0;
          local_7d4 = local_7d4 + (int)pFVar39[1]._padding_;
          pFVar37 = (local_7d0->AllocatorInstance).Data;
          if (((pFVar37 <= (FScriptContainerElement *)&local_7d4) &&
              ((FScriptContainerElement *)&local_7d4 < pFVar37 + (longlong)local_7d0->ArrayMax * 4))
             && (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar45)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          iVar16 = pTVar31->ArrayNum;
          if (iVar16 == pTVar31->ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar31->AllocatorInstance,&pTVar31->ArrayMax);
          }
          pTVar31->ArrayNum = iVar16 + 1;
          *(int *)((pTVar31->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_7d4;
        }
        pFVar39 = (FPCGSoftISMComponentDescriptor *)&pFVar39[1]._padding_;
      }
      param_3 = local_7b8;
      param_1 = local_798;
      param_4 = local_768;
      if (local_7d4 < 1) {
        return true;
      }
    }
    if ((param_1->MaterialOverrideHelper).bIsInitialized == false) {
      FPCGMeshMaterialOverrideHelper::Initialize
                (&param_1->MaterialOverrideHelper,(FPCGContext *)param_1,
                 local_7a8->bUseAttributeMaterialOverrides,&local_7a8->MaterialOverrideAttributes,
                 (UPCGMetadata *)param_3->_padding_);
    }
    if ((param_1->MaterialOverrideHelper).bIsValid != false) {
      local_7a0 = (FPCGMetadataAttribute<FString> *)0x0;
      FPCGPointValueRanges::FPCGPointValueRanges(&local_208);
      pFVar12 = local_7a0;
      if (local_7c8 != (UPCGBasePointData *)0x0) {
        pFVar21 = FPCGPointValueRanges::FPCGPointValueRanges(&local_528,local_7c8,true);
        lVar35 = 3;
        pFVar11 = &local_208;
        do {
          pFVar33 = pFVar11;
          pFVar22 = pFVar21;
          iVar17 = (pFVar22->TransformRange).ElementView.BytesBetweenElements;
          iVar16 = (pFVar22->TransformRange).ElementView.NumElements;
          (pFVar33->TransformRange).ElementView.FirstElementPtr =
               (pFVar22->TransformRange).ElementView.FirstElementPtr;
          (pFVar33->TransformRange).ElementView.BytesBetweenElements = iVar17;
          (pFVar33->TransformRange).ElementView.NumElements = iVar16;
          uVar8 = *(undefined4 *)&(pFVar22->TransformRange).field_0x14;
          lVar6 = (pFVar22->TransformRange)._padding_;
          (pFVar33->TransformRange).NumElements = (pFVar22->TransformRange).NumElements;
          *(undefined4 *)&(pFVar33->TransformRange).field_0x14 = uVar8;
          (pFVar33->TransformRange)._padding_ = lVar6;
          dVar2 = (pFVar22->TransformRange).StubValue.Rotation.XY.m128d_f64[1];
          (pFVar33->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
               (pFVar22->TransformRange).StubValue.Rotation.XY.m128d_f64[0];
          (pFVar33->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar2;
          dVar2 = (pFVar22->TransformRange).StubValue.Rotation.ZW.m128d_f64[1];
          (pFVar33->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] =
               (pFVar22->TransformRange).StubValue.Rotation.ZW.m128d_f64[0];
          (pFVar33->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar2;
          dVar2 = (pFVar22->TransformRange).StubValue.Translation.XY.m128d_f64[1];
          (pFVar33->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
               (pFVar22->TransformRange).StubValue.Translation.XY.m128d_f64[0];
          (pFVar33->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar2;
          dVar2 = (pFVar22->TransformRange).StubValue.Translation.ZW.m128d_f64[1];
          (pFVar33->TransformRange).StubValue.Translation.ZW.m128d_f64[0] =
               (pFVar22->TransformRange).StubValue.Translation.ZW.m128d_f64[0];
          (pFVar33->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar2;
          dVar2 = (pFVar22->TransformRange).StubValue.Scale3D.XY.m128d_f64[1];
          (pFVar33->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
               (pFVar22->TransformRange).StubValue.Scale3D.XY.m128d_f64[0];
          (pFVar33->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = dVar2;
          dVar2 = (pFVar22->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1];
          (pFVar33->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] =
               (pFVar22->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0];
          (pFVar33->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar2;
          lVar35 = lVar35 + -1;
          pFVar21 = (FPCGPointValueRanges *)&pFVar22->DensityRange;
          pFVar11 = (FPCGPointValueRanges *)&pFVar33->DensityRange;
        } while (lVar35 != 0);
        iVar17 = (pFVar22->DensityRange).ElementView.BytesBetweenElements;
        iVar16 = (pFVar22->DensityRange).ElementView.NumElements;
        (pFVar33->DensityRange).ElementView.FirstElementPtr =
             (pFVar22->DensityRange).ElementView.FirstElementPtr;
        (pFVar33->DensityRange).ElementView.BytesBetweenElements = iVar17;
        (pFVar33->DensityRange).ElementView.NumElements = iVar16;
        if ((local_7c8->_padding_ == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutPointData->Metadata",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeighted.cpp"
                                ,0xb4,L""), bVar45)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        piVar28 = local_788.Value;
        auVar46._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
        auVar46[0] = PCGMetadataDomainID::Default.Flag;
        local_618 = *(FName *)((longlong)local_788.Value + 0x100);
        FStack_610._0_8_ = auVar46._0_8_;
        local_5f8.MetadataDomain.Flag = FStack_610.Flag;
        local_5f8.MetadataDomain._1_3_ = FStack_610._1_3_;
        local_5f8.MetadataDomain.CustomFlag = FStack_610.CustomFlag;
        local_5f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        FStack_610 = (FPCGMetadataDomainID)auVar46;
        local_5f8.Name = local_618;
        bVar45 = UPCGMetadata::HasAttribute((UPCGMetadata *)local_7c8->_padding_,&local_5f8);
        if ((!bVar45) && (1 < (byte)LogPCG._0_1_)) {
          pFVar20 = FText::FromName(&local_548,(FName *)((longlong)piVar28 + 0x100));
          pFVar23 = FText::AsLocalizable_Advanced_LocText
                              (&local_678,L"PCGMeshSelectorWeighted",L"AttributeNotInMetadata",
                               L"Out attribute \'{0}\' is not in the metadata");
          pFVar24 = FTextFormat::FTextFormat(&local_538,pFVar23,Default);
          pFVar20 = FText::Format<FText>(&local_688,pFVar24,pFVar20);
          FText::ToString(pFVar20);
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_698);
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_6a8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
          }
          if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_698.Data.AllocatorInstance.Data);
          }
          if (local_688.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_688.TextData.Reference + 0x10))();
          }
          if (local_678.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
          }
        }
        auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
        auVar3[0] = PCGMetadataDomainID::Default.Flag;
        local_5d8 = *(FName *)((longlong)piVar28 + 0x100);
        FStack_5d0._0_8_ = auVar3._0_8_;
        local_5b8.MetadataDomain.Flag = FStack_5d0.Flag;
        local_5b8.MetadataDomain._1_3_ = FStack_5d0._1_3_;
        local_5b8.MetadataDomain.CustomFlag = FStack_5d0.CustomFlag;
        local_5b8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        FStack_5d0 = (FPCGMetadataDomainID)auVar3;
        local_5b8.Name = local_5d8;
        pFVar25 = (FPCGMetadataAttribute<FString> *)
                  UPCGMetadata::GetMutableAttribute((UPCGMetadata *)local_7c8->_padding_,&local_5b8)
        ;
        pTVar31 = local_7d0;
        pFVar12 = local_7a0;
        if (((pFVar25 != (FPCGMetadataAttribute<FString> *)0x0) &&
            (pFVar12 = pFVar25, (short)pFVar25->_padding_ != 9)) &&
           (pFVar12 = local_7a0, 1 < (byte)LogPCG._0_1_)) {
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_648,L"PCGMeshSelectorWeighted",L"AttributeNotFString",
                               L"Out attribute is not of valid type FString");
          FText::ToString(pFVar20);
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_658);
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_668);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_668.Data.AllocatorInstance.Data);
          }
          if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.Data.AllocatorInstance.Data);
          }
          pTVar31 = local_7d0;
          pFVar12 = local_7a0;
          if (local_648.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_648.TextData.Reference + 0x10))();
            pTVar31 = local_7d0;
            pFVar12 = local_7a0;
          }
        }
      }
      local_7a0 = pFVar12;
      bVar45 = -1 < CpuChannel->Enabled;
      if (bVar45) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&DAT_15529085c,"FPCGStaticMeshSpawnerElement::Execute::SelectEntries",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeighted.cpp"
                   ,0xcc);
        FCpuProfilerTrace::OutputBeginEvent(DAT_15529085c);
      }
      pUVar40 = local_7b8;
      FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_398,local_7b8);
      uVar18 = param_1->CurrentPointIndex;
      uVar34 = pTVar31->ArrayNum - 1;
      uVar36 = 0;
      if ((int)uVar34 < pTVar31->ArrayNum) {
        uVar36 = ~uVar34 >> 0x1f;
      }
      local_7ac = uVar18;
      if ((uVar36 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_790 = *(int *)((pTVar31->AllocatorInstance).Data + (longlong)pTVar31->ArrayNum * 4 + -4)
      ;
      iVar17 = (**(code **)(pUVar40->_padding_ + 0x488))(pUVar40);
      pFVar10 = local_798;
      fVar9 = __real_3f800000;
      if ((int)uVar18 < iVar17) {
        do {
          uVar34 = ~uVar18 >> 0x1f;
          local_7d0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(local_7d0._4_4_,uVar18 + 1);
          uVar36 = 0;
          if ((int)uVar18 < local_398.TransformRange.NumElements) {
            uVar36 = uVar34;
          }
          local_7b0 = uVar18;
          if ((uVar36 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          local_770 = (double *)
                      ((longlong)
                       ((local_398.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)((int)uVar18 % local_398.TransformRange.ElementView.NumElements) *
                      (longlong)local_398.TransformRange.ElementView.BytesBetweenElements);
          uVar36 = 0;
          if ((int)uVar18 < local_398.MetadataEntryRange.NumElements) {
            uVar36 = uVar34;
          }
          if ((uVar36 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          plVar43 = (long64 *)
                    ((longlong)((int)uVar18 % local_398.MetadataEntryRange.ElementView.NumElements)
                     * (longlong)local_398.MetadataEntryRange.ElementView.BytesBetweenElements +
                    (longlong)local_398.MetadataEntryRange.ElementView.FirstElementPtr);
          uVar36 = 0;
          if ((int)uVar18 < local_398.SeedRange.NumElements) {
            uVar36 = uVar34;
          }
          if ((uVar36 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          puVar38 = (uint *)((longlong)((int)uVar18 % local_398.SeedRange.ElementView.NumElements) *
                             (longlong)local_398.SeedRange.ElementView.BytesBetweenElements +
                            (longlong)local_398.SeedRange.ElementView.FirstElementPtr);
          if (pFVar10->_padding_ != 0) {
            FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar10->_padding_);
          }
          PCGHelpers::GetRandomStreamFromSeed
                    ((int)local_778,(UPCGSettings *)(ulonglong)*puVar38,
                     (IPCGGraphExecutionSource *)local_788.Value);
          if (local_790 < 1) {
            iVar17 = 0;
            auVar46 = extraout_XMM0;
          }
          else {
            auVar46 = ZEXT416((uint)(float)local_790);
            local_774 = local_774 * 0xbb38435 + 0x3619636b;
            iVar17 = (int)(((float)(local_774 >> 9 | 0x3f800000) - fVar9) * (float)local_790);
          }
          uVar36 = 0;
          if (0 < (pFVar10->WeightedMeshInstances).ArrayNum) {
            lVar35 = 0;
            do {
              uVar34 = 0;
              if ((int)uVar36 < (pFVar10->CumulativeWeights).ArrayNum) {
                uVar34 = ~uVar36 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , auVar46 = extraout_XMM0_00, bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              if (iVar17 < *(int *)((pFVar10->CumulativeWeights).AllocatorInstance.Data + lVar35))
              break;
              uVar36 = uVar36 + 1;
              lVar35 = lVar35 + 4;
            } while ((int)uVar36 < (pFVar10->WeightedMeshInstances).ArrayNum);
            if ((int)uVar36 < (pFVar10->WeightedMeshInstances).ArrayNum) {
              auVar3 = *(undefined1 (*) [16])(local_770 + 8);
              auVar5._4_8_ = auVar46._8_8_;
              auVar5._0_4_ = auVar3._4_4_;
              auVar47._0_8_ = auVar5._0_8_ << 0x20;
              auVar47._8_4_ = auVar3._8_4_;
              auVar47._12_4_ = auVar3._12_4_;
              dVar2 = local_770[10];
              pTVar26 = FPCGMeshMaterialOverrideHelper::GetMaterialOverrides
                                  (&pFVar10->MaterialOverrideHelper,*plVar43);
              bVar14 = local_7a8->bUseAttributeMaterialOverrides;
              uVar34 = 0;
              if ((int)uVar36 < (pFVar10->WeightedMeshInstances).ArrayNum) {
                uVar34 = ~uVar36 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              pFVar27 = PCGMeshSelectorWeighted::GetInstanceList
                                  ((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)
                                   ((pFVar10->WeightedMeshInstances).AllocatorInstance.Data +
                                   (longlong)(int)uVar36 * 0x10),bVar14,pTVar26,
                                   auVar47._8_8_ * auVar3._0_8_ * dVar2 < 0.0,local_7b8);
              piVar28 = &(pFVar27->Instances).ArrayMax;
              iVar17 = (pFVar27->Instances).ArrayNum;
              if (iVar17 == *piVar28) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&(pFVar27->Instances).AllocatorInstance,piVar28);
              }
              (pFVar27->Instances).ArrayNum = iVar17 + 1;
              piVar28 = &(pFVar27->InstancesIndices).ArrayMax;
              dVar2 = local_770[1];
              pFVar37 = (pFVar27->Instances).AllocatorInstance.Data;
              lVar35 = (longlong)iVar17 * 0x60;
              *(double *)(pFVar37 + lVar35) = *local_770;
              *(double *)(pFVar37 + lVar35 + 8) = dVar2;
              uVar7 = local_770[3];
              *(double *)(pFVar37 + lVar35 + 0x10) = local_770[2];
              *(undefined8 *)(pFVar37 + lVar35 + 0x10 + 8) = uVar7;
              uVar7 = local_770[5];
              *(double *)(pFVar37 + lVar35 + 0x20) = local_770[4];
              *(undefined8 *)(pFVar37 + lVar35 + 0x20 + 8) = uVar7;
              uVar7 = local_770[7];
              *(double *)(pFVar37 + lVar35 + 0x30) = local_770[6];
              *(undefined8 *)(pFVar37 + lVar35 + 0x30 + 8) = uVar7;
              uVar7 = local_770[9];
              *(double *)(pFVar37 + lVar35 + 0x40) = local_770[8];
              *(undefined8 *)(pFVar37 + lVar35 + 0x40 + 8) = uVar7;
              uVar7 = local_770[0xb];
              *(double *)(pFVar37 + lVar35 + 0x50) = local_770[10];
              *(undefined8 *)(pFVar37 + lVar35 + 0x50 + 8) = uVar7;
              iVar17 = (pFVar27->InstancesIndices).ArrayNum;
              if (iVar17 == *piVar28) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&(pFVar27->InstancesIndices).AllocatorInstance,piVar28);
              }
              pFVar12 = local_7a0;
              (pFVar27->InstancesIndices).ArrayNum = iVar17 + 1;
              plVar1 = &(pFVar27->Descriptor)._padding_;
              *(uint *)((pFVar27->InstancesIndices).AllocatorInstance.Data + (longlong)iVar17 * 4) =
                   local_7b0;
              if ((local_7c8 != (UPCGBasePointData *)0x0) &&
                 (local_7a0 != (FPCGMetadataAttribute<FString> *)0x0)) {
                FPCGPointValueRanges::SetFromValueRanges
                          (&local_208,pFVar10->CurrentWriteIndex,&local_398,uVar18);
                local_570._0_8_ = *plVar1;
                FSoftObjectPath::FSoftObjectPath
                          ((FSoftObjectPath *)(local_570 + 8),
                           (FSoftObjectPath *)&(pFVar27->Descriptor)._padding_);
                piVar28 = TMapBase<TSoftObjectPtr<UStaticMesh>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>_>
                          ::Find((TMapBase<TSoftObjectPtr<UStaticMesh>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>_>
                                  *)&pFVar10->MeshToValueKey,
                                 (TSoftObjectPtr<UStaticMesh_const_> *)local_570);
                if (piVar28 == (int *)0x0) {
                  pFVar29 = FSoftObjectPath::ToString
                                      ((FSoftObjectPath *)&(pFVar27->Descriptor)._padding_,
                                       &local_638);
                  local_78c = FPCGMetadataAttribute<FString>::AddValue(pFVar12,pFVar29);
                  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_638.Data.AllocatorInstance.Data);
                  }
                  local_740 = &local_78c;
                  local_748 = plVar1;
                  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,int_const_&>_>
                            ((TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
                              *)&pFVar10->MeshToValueKey,&local_788,(bool *)&local_748);
                  piVar28 = (int *)(*(longlong *)&pFVar10->MeshToValueKey +
                                   (longlong)(int)local_788.Key * 0x38 + 0x28);
                  if ((piVar28 == (int *)0x0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("OutValueKey",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorWeighted.cpp"
                                          ,0xfb,L""), bVar14)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                }
                uVar18 = pFVar10->CurrentWriteIndex;
                this_00 = (UPCGMetadata *)local_7c8->_padding_;
                uVar36 = 0;
                if ((int)uVar18 < local_208.MetadataEntryRange.NumElements) {
                  uVar36 = ~uVar18 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                if (uVar18 == (int)uVar18 % local_208.MetadataEntryRange.ElementView.NumElements) {
                  plVar43 = (long64 *)
                            ((longlong)
                             ((int)uVar18 % local_208.MetadataEntryRange.ElementView.NumElements) *
                             (longlong)local_208.MetadataEntryRange.ElementView.BytesBetweenElements
                            + (longlong)local_208.MetadataEntryRange.ElementView.FirstElementPtr);
                }
                else {
                  plVar43 = &local_208.MetadataEntryRange.StubValue;
                }
                if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
                   (this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                                        (this_00,&PCGMetadataDomainID::Default),
                   this_01 == (FPCGMetadataDomain *)0x0)) {
                  if (1 < (byte)LogPCG._0_1_) {
                    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_628);
                    UE::Logging::Private::BasicLog<2>
                              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_628.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  lVar35 = *plVar43;
                  if (lVar35 == -1) {
                    lVar30 = FPCGMetadataDomain::AddEntry(this_01,-1);
                    *plVar43 = lVar30;
                  }
                  else if (lVar35 < this_01->ItemKeyOffset) {
                    lVar30 = FPCGMetadataDomain::AddEntry(this_01,lVar35);
                    *plVar43 = lVar30;
                  }
                }
                uVar18 = pFVar10->CurrentWriteIndex;
                iVar17 = *piVar28;
                uVar36 = 0;
                if ((int)uVar18 < local_208.MetadataEntryRange.NumElements) {
                  uVar36 = ~uVar18 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                pFVar12 = local_7a0;
                if (uVar18 == (int)uVar18 % local_208.MetadataEntryRange.ElementView.NumElements) {
                  plVar43 = (long64 *)
                            ((longlong)
                             ((int)uVar18 % local_208.MetadataEntryRange.ElementView.NumElements) *
                             (longlong)local_208.MetadataEntryRange.ElementView.BytesBetweenElements
                            + (longlong)local_208.MetadataEntryRange.ElementView.FirstElementPtr);
                }
                else {
                  plVar43 = &local_208.MetadataEntryRange.StubValue;
                }
                lVar35 = *plVar43;
                AcquireSRWLockExclusive((PSRWLOCK)&local_7a0->_padding_);
                local_758 = lVar35;
                if (lVar35 == -1) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bAllowInvalidEntries",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                                      ,0x57,L"");
                  if (bVar14) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                }
                else {
                  piVar28 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                            ::FindOrAddImpl<__int64_const_&>
                                      ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                        *)&pFVar12->_padding_,
                                       (int)((ulonglong)lVar35 >> 0x20) * 0x17 + (int)lVar35,
                                       &local_758);
                  *piVar28 = iVar17;
                }
                ReleaseSRWLockExclusive((PSRWLOCK)&pFVar12->_padding_);
                pFVar10->CurrentWriteIndex = pFVar10->CurrentWriteIndex + 1;
                if (*(bool *)((longlong)local_788.Value + 0x108) != false) {
                  local_598 = *plVar1;
                  FSoftObjectPath::FSoftObjectPath
                            (&local_590,(FSoftObjectPath *)&(pFVar27->Descriptor)._padding_);
                  uVar18 = ::GetTypeHash(&local_590);
                  if (local_590.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_590.SubPathString.Data.AllocatorInstance.Data);
                  }
                  this_02 = TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                            ::FindOrAddImpl<TSoftObjectPtr<UStaticMesh>_const_&>
                                      ((TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                                        *)&pFVar10->MeshToOutPoints,uVar18,
                                       (TSoftObjectPtr<UStaticMesh> *)plVar1);
                  uVar18 = ((uint)((ulonglong)local_7c8 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)local_7c8 >> 4)) * -0x7a143595;
                  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                  pTVar31 = TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            ::FindOrAddImpl<UPCGBasePointData_*_const_&>
                                      ((TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                        *)this_02,uVar18 >> 0x10 ^ uVar18,&local_7c8);
                  iVar17 = pTVar31->ArrayNum;
                  if (iVar17 == pTVar31->ArrayMax) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar31->AllocatorInstance,&pTVar31->ArrayMax);
                  }
                  pTVar31->ArrayNum = iVar17 + 1;
                  *(uint *)((pTVar31->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_7b0;
                }
              }
            }
          }
          uVar18 = (uint)local_7d0;
          if (0x3ff < (int)((uint)local_7d0 - local_7ac)) {
            bVar14 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&pFVar10->_padding_);
            pUVar40 = local_7b8;
            param_1 = local_798;
            param_4 = local_768;
            if (bVar14) break;
            local_7ac = uVar18;
          }
          pUVar40 = local_7b8;
          iVar17 = (**(code **)(local_7b8->_padding_ + 0x488))(local_7b8);
          param_1 = local_798;
          param_4 = local_768;
        } while ((int)uVar18 < iVar17);
      }
      param_1->CurrentPointIndex = uVar18;
      if (bVar45) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar17 = param_1->CurrentPointIndex;
      iVar16 = (**(code **)(pUVar40->_padding_ + 0x488))(pUVar40);
      if (iVar17 != iVar16) {
        return false;
      }
      if (local_7c8 != (UPCGBasePointData *)0x0) {
        (**(code **)(local_7c8->_padding_ + 0x490))(local_7c8,param_1->CurrentWriteIndex,1);
      }
      iVar17 = (param_1->WeightedMeshInstances).ArrayNum;
      pFVar37 = (param_1->WeightedMeshInstances).AllocatorInstance.Data;
      pFVar44 = pFVar37 + (longlong)iVar17 * 0x10;
      pTVar32 = &param_1->WeightedMeshInstances;
      while( true ) {
        if (pTVar32->ArrayNum != iVar17) {
          `TCheckedPointerIterator<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_7c0);
        }
        if (pFVar37 == pFVar44) break;
        iVar16 = *(int *)(pFVar37 + 8);
        pFVar27 = *(FPCGMeshInstanceList **)pFVar37;
        pFVar41 = pFVar27 + iVar16;
        while( true ) {
          if (*(int *)(pFVar37 + 8) != iVar16) {
            `TCheckedPointerIterator<FPCGMeshInstanceList,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_7bf);
          }
          if (pFVar27 == pFVar41) break;
          iVar19 = param_4->ArrayNum;
          if (iVar19 == param_4->ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x2b0,8,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar19 + 1;
          FPCGMeshInstanceList::FPCGMeshInstanceList
                    ((FPCGMeshInstanceList *)
                     ((param_4->AllocatorInstance).Data + (longlong)iVar19 * 0x2b0),pFVar27);
          pFVar27 = pFVar27 + 1;
        }
        pFVar37 = pFVar37 + 0x10;
        pTVar32 = local_750;
      }
    }
  }
  return true;
}

// StaticRegisterNativesUPCGMeshSelectorWeighted @ 149ec1df0

void __cdecl UPCGMeshSelectorWeighted::StaticRegisterNativesUPCGMeshSelectorWeighted(void)

{
  return;
}

