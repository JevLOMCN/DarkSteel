// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149ee05a0

UScriptStruct * __cdecl FPCGComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGComponentInstanceData,(UObject *)pUVar1,
                         L"PCGComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.OuterSingleton;
}

// ContainsData @ 149ee05e0

bool __thiscall FPCGComponentInstanceData::ContainsData(FPCGComponentInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 149ee05f0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FPCGComponentInstanceData::ApplyToComponent
          (FPCGComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  UPCGComponent *pUVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UWorld *pUVar10;
  UPCGSubsystem *this_00;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  UObject *local_b8;
  TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  FActorComponentInstanceData::ApplyToComponent((FActorComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_2 == PostUserConstructionScript) {
    if (param_1 == (UActorComponent *)0x0) {
      pFVar11 = GetTypeName<UPCGComponent>(&local_a0);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar12);
    }
    pUVar8 = UPCGComponent::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) {
      pFVar11 = GetTypeName<UPCGComponent>(&local_60);
      pwVar12 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<UActorComponent>(&local_50,param_1);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar13);
    }
    pUVar2 = (this->SourceComponent).field0_0x0.DebugPtr;
    if (pUVar2 != (UPCGComponent *)0x0) {
      pFVar4 = (FScriptContainerElement *)(pUVar2->LastGeneratedBounds).Min.field0_0x0._s_0.Y;
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(double *)&param_1[3].ComponentTags.ArrayNum =
           (pUVar2->LastGeneratedBounds).Min.field0_0x0._s_0.X;
      param_1[3].AssetUserData.AllocatorInstance.Data = pFVar4;
      local_b0.ArrayNum = 0;
      local_b0.ArrayMax = 0;
      dVar5 = (pUVar2->LastGeneratedBounds).Max.field0_0x0._s_0.X;
      *(double *)&param_1[3].AssetUserData.ArrayNum =
           (pUVar2->LastGeneratedBounds).Min.field0_0x0._s_0.Z;
      *(double *)&param_1[3].field_0x88 = dVar5;
      dVar5 = (pUVar2->LastGeneratedBounds).Max.field0_0x0._s_0.Z;
      *(double *)&param_1[3].UCSSerializationIndex =
           (pUVar2->LastGeneratedBounds).Max.field0_0x0._s_0.Y;
      *(double *)&param_1[3].field_0x98 = dVar5;
      param_1[3].PhysicsStateAsyncCreationScene =
           *(FPhysScene_Chaos **)&(pUVar2->LastGeneratedBounds).IsValid;
      pFVar14 = (pUVar2->GeneratedResources).AllocatorInstance.Data;
      iVar1 = (pUVar2->GeneratedResources).ArrayNum;
      pFVar4 = pFVar14 + (longlong)iVar1 * 8;
      while( true ) {
        if ((pUVar2->GeneratedResources).ArrayNum != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGManagedResource>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (pFVar14 == pFVar4) break;
        if (*(UObject **)pFVar14 != (UObject *)0x0) {
          local_res20 = 0;
          pUVar9 = StaticDuplicateObject
                             (*(UObject **)pFVar14,(UObject *)param_1,(FName)0x0,
                              RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                              RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                              RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                              RF_InheritableComponentTemplate|RF_LoadCompleted|
                              RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                              RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                              RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                              RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                              RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject
                              |RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                              (UClass *)0x0,Normal,
                              PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                              Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                              LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                              ReachabilityFlag1|ReachabilityFlag0);
          if (pUVar9 == (UObject *)0x0) {
            pFVar11 = GetTypeName<UPCGManagedResource>(&local_70);
            if ((pFVar11->Data).ArrayNum == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar12);
          }
          pUVar8 = Z_Construct_UClass_UPCGManagedResource_NoRegister();
          iVar7 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar8->_padding_)) {
            pFVar11 = GetTypeName<UPCGManagedResource>(&local_90);
            pwVar12 = L"";
            if ((pFVar11->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
            pFVar11 = GetFullNameForCastLogError<UObject>(&local_80,pUVar9);
            if ((pFVar11->Data).ArrayNum != 0) {
              pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar12,pwVar13);
          }
          (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9);
          local_b8 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          if (((local_b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 <
               local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_b0.ArrayNum;
          if (local_b0.ArrayNum == local_b0.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
          }
          local_b0.ArrayNum = iVar7 + 1;
          *(UObject **)(local_b0.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_b8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_b8);
          }
        }
        pFVar14 = pFVar14 + 8;
      }
      if (0 < local_b0.ArrayNum) {
        UPCGComponent::SetManagedResources((UPCGComponent *)param_1,&local_b0);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
    }
    if (((char)param_1[3]._padding_ != '\0') || (bVar6 = PCGHelpers::IsRuntimeOrPIE(), bVar6)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    UPCGComponent::RefreshSchedulingPolicy((UPCGComponent *)param_1);
    if (param_1->OwnerPrivate != (AActor *)0x0) {
      pUVar10 = AActor::GetWorld(param_1->OwnerPrivate);
      this_00 = UPCGSubsystem::GetInstance(pUVar10);
      if ((this_00 != (UPCGSubsystem *)0x0) && (pUVar2 != (UPCGComponent *)0x0)) {
        UPCGSubsystem::RemapPCGComponent(this_00,pUVar2,(UPCGComponent *)param_1,bVar6);
      }
    }
  }
  return;
}

// AddReferencedObjects @ 149ee09c0

void __thiscall
FPCGComponentInstanceData::AddReferencedObjects
          (FPCGComponentInstanceData *this,FReferenceCollector *param_1)

{
  FActorComponentInstanceData::AddReferencedObjects((FActorComponentInstanceData *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000149ee09ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SourceComponent,0,0);
  return;
}

// FPCGComponentInstanceData @ 149eed350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPCGComponentInstanceData * __thiscall
FPCGComponentInstanceData::FPCGComponentInstanceData
          (FPCGComponentInstanceData *this,UPCGComponent *param_1)

{
  FActorComponentInstanceData::FActorComponentInstanceData
            ((FActorComponentInstanceData *)this,(UActorComponent *)param_1);
  this->_padding_ = (longlong)&___7FPCGComponentInstanceData__6B_;
  (this->SourceComponent).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  return this;
}

