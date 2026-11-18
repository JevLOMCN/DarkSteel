// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// FGameplayDebuggerCategory_EQS @ 146f29510

FGameplayDebuggerCategory_EQS * __thiscall
FGameplayDebuggerCategory_EQS::FGameplayDebuggerCategory_EQS(FGameplayDebuggerCategory_EQS *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10;
  FGameplayDebuggerInputHandlerConfig local_48;
  FGameplayDebuggerInputHandlerConfig local_38;
  code *local_28;
  undefined8 uStack_20;
  
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  this->MaxQueries = 5;
  this->MaxItemTableRows = 10;
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_EQS__6B_;
  (this->DataPack).QueryDebugData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).QueryDebugData.ArrayNum = 0;
  (this->DataPack).QueryDebugData.ArrayMax = 0;
  this->ShownQueryIndex = 0;
  *(float *)&this->_padding_ = UE::GameplayDebuggerCategory_EQS::Tweakables::RefreshInterval;
  pFVar2 = ::FName::FName(&local_res8,L"Multiply");
  FVar1 = *pFVar2;
  pFVar2 = ::FName::FName(&local_res10,L"CycleQueries");
  FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig(&local_48,*pFVar2,FVar1);
  pFVar2 = ::FName::FName(&local_res8,L"Divide");
  FVar1 = *pFVar2;
  pFVar2 = ::FName::FName(&local_res10,L"ToggleDetails");
  FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig(&local_38,*pFVar2,FVar1);
  uStack_20._0_4_ = 0;
  local_28 = CycleShownQueries;
  FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_EQS>
            ((FGameplayDebuggerAddonBase *)this,&local_48,this,(pmf_faa310ff *)&local_28,Local);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = ToggleDetailView;
  FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_EQS>
            ((FGameplayDebuggerAddonBase *)this,&local_38,this,(pmf_faa310ff *)&local_28,Local);
  FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>
            ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
  return this;
}

// CollectData @ 146f37160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_EQS::CollectData
          (FGameplayDebuggerCategory_EQS *this,APlayerController *param_1,AActor *param_2)

{
  FEQSDebugger *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FRepData *pFVar3;
  ulong64 uVar4;
  FEnvQueryInfo *pFVar5;
  UObject *pUVar6;
  FQueryData *pFVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  UWorld *pUVar14;
  UClass *pUVar15;
  TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> *pTVar16;
  UAISystemBase *pUVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  FIdentityFunctor local_res20 [8];
  TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> local_c8;
  FQueryData local_b8;
  
  pUVar14 = FGameplayDebuggerAddonBase::GetDataWorld
                      ((FGameplayDebuggerAddonBase *)this,param_1,param_2);
  if (pUVar14 == (UWorld *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("World",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\GameplayDebugger\\GameplayDebuggerCategory_EQS.cpp"
                        ,0x3d,L"");
    if (!bVar10) {
      return;
    }
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar17 = (pUVar14->AISystem).field0_0x0.DebugPtr;
  if (pUVar17 != (UAISystemBase *)0x0) {
    pUVar15 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) goto LAB_146f371f0;
  }
  pUVar17 = (UAISystemBase *)0x0;
LAB_146f371f0:
  if ((pUVar17 != (UAISystemBase *)0x0) && (uVar4 = pUVar17[2].OnMatchStateSetHandle.ID, uVar4 != 0)
     ) {
    this_00 = (FEQSDebugger *)(uVar4 + 0x40);
    pTVar16 = FEQSDebugger::GetAllQueriesForOwner(this_00,(UObject *)param_2);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = pTVar16->ArrayNum;
    pFVar5 = (FEnvQueryInfo *)(pTVar16->AllocatorInstance).Data;
    local_c8.ArrayNum = iVar13;
    if (iVar13 == 0) {
      local_c8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar13,0,&local_c8.AllocatorInstance,iVar13,&local_c8.ArrayMax);
      ConstructItems<FEQSDebugger::FEnvQueryInfo,FEQSDebugger::FEnvQueryInfo,int>
                (local_c8.AllocatorInstance.Data,pFVar5,iVar13);
    }
    uVar20 = 0;
    if (param_2 != (AActor *)0x0) {
      pUVar15 = Z_Construct_UClass_APawn_NoRegister();
      iVar13 = (int)pUVar15->_padding_;
      if (((iVar13 <= *(int *)(param_2->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
           &pUVar15->_padding_)) &&
         (pUVar6 = (UObject *)param_2[1].PrimaryActorTick._padding_, pUVar6 != (UObject *)0x0)) {
        pTVar16 = FEQSDebugger::GetAllQueriesForOwner(this_00,pUVar6);
        if ((&local_c8 == pTVar16) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = pTVar16->ArrayNum;
        if (iVar13 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,iVar13,&local_c8.AllocatorInstance,&local_c8.ArrayNum,
                              &local_c8.ArrayMax);
          ConstructItems<FEQSDebugger::FEnvQueryInfo,FEQSDebugger::FEnvQueryInfo,int>
                    (local_c8.AllocatorInstance.Data + (longlong)iVar11 * 0x18,
                     (FEnvQueryInfo *)(pTVar16->AllocatorInstance).Data,iVar13);
        }
      }
    }
    AlgoImpl::
    IntroSortInternal<FEQSDebugger::FEnvQueryInfo,int,FIdentityFunctor,TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,_FGameplayDebuggerCategory_EQS::CollectData_::__l2::FEnvQuerySortNewFirst>_>
              ((FEnvQueryInfo *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum,local_res20[0],
               (FEnvQuerySortNewFirst *)local_res20);
    uVar22 = uVar20;
    if (0 < local_c8.ArrayNum) {
      do {
        if (this->MaxQueries <= (this->DataPack).QueryDebugData.ArrayNum) break;
        uVar21 = (uint)uVar22;
        uVar12 = 0;
        if ((int)uVar21 < local_c8.ArrayNum) {
          uVar12 = ~uVar21 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(FEnvQueryInstance **)(local_c8.AllocatorInstance.Data + uVar20) !=
            (FEnvQueryInstance *)0x0) {
          local_b8.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Items.ArrayNum = 0;
          local_b8.Items.ArrayMax = 0;
          local_b8.Tests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Tests.ArrayNum = 0;
          local_b8.Tests.ArrayMax = 0;
          local_b8.SolidSpheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.SolidSpheres.ArrayNum = 0;
          local_b8.SolidSpheres.ArrayMax = 0;
          local_b8.Texts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Texts.ArrayNum = 0;
          local_b8.Texts.ArrayMax = 0;
          local_b8.RenderDebugHelpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.RenderDebugHelpers.ArrayNum = 0;
          local_b8.RenderDebugHelpers.ArrayMax = 0;
          local_b8.Options.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Options.ArrayNum = 0;
          local_b8.Options.ArrayMax = 0;
          local_b8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Name.Data.ArrayNum = 0;
          local_b8.Name.Data.ArrayMax = 0;
          UEnvQueryDebugHelpers::QueryToDebugData
                    (*(FEnvQueryInstance **)(local_c8.AllocatorInstance.Data + uVar20),&local_b8,
                     0x7fffffff);
          uVar12 = 0;
          if ((int)uVar21 < local_c8.ArrayNum) {
            uVar12 = ~uVar21 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar3 = &this->DataPack;
          pFVar7 = (FQueryData *)(pFVar3->QueryDebugData).AllocatorInstance.Data;
          local_b8.Timestamp = *(double *)(local_c8.AllocatorInstance.Data + uVar20 + 0x10);
          if (((pFVar7 <= &local_b8) &&
              (&local_b8 < pFVar7 + (this->DataPack).QueryDebugData.ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = (this->DataPack).QueryDebugData.ArrayNum;
          piVar1 = &(this->DataPack).QueryDebugData.ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x888,(ForAnyElementType *)pFVar3,piVar1);
          }
          FVar9.Data = local_b8.Items.AllocatorInstance.Data;
          (this->DataPack).QueryDebugData.ArrayNum = iVar13 + 1;
          pFVar18 = (pFVar3->QueryDebugData).AllocatorInstance.Data + (longlong)iVar13 * 0x88;
          *(undefined8 *)&pFVar18->field_0x0 = 0;
          iVar13 = local_b8.Items.ArrayNum;
          *(int *)&pFVar18[8].field_0x0 = local_b8.Items.ArrayNum;
          if (local_b8.Items.ArrayNum == 0) {
            *(int *)(pFVar18 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,local_b8.Items.ArrayNum,0,(ForAnyElementType *)pFVar18,
                       local_b8.Items.ArrayNum,(int *)(pFVar18 + 0xc));
            ConstructItems<EQSDebug::FItemData,EQSDebug::FItemData,int>
                      (*(void **)&pFVar18->field_0x0,(FItemData *)FVar9.Data,iVar13);
          }
          FVar9.Data = local_b8.Tests.AllocatorInstance.Data;
          pFVar2 = pFVar18 + 0x10;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar13 = local_b8.Tests.ArrayNum;
          *(int *)&pFVar18[0x18].field_0x0 = local_b8.Tests.ArrayNum;
          if (local_b8.Tests.ArrayNum == 0) {
            *(int *)(pFVar18 + 0x1c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,local_b8.Tests.ArrayNum,0,(ForAnyElementType *)pFVar2,
                       local_b8.Tests.ArrayNum,(int *)(pFVar18 + 0x1c));
            ConstructItems<EQSDebug::FTestData,EQSDebug::FTestData,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FTestData *)FVar9.Data,
                       iVar13);
          }
          FVar9.Data = local_b8.SolidSpheres.AllocatorInstance.Data;
          pFVar2 = pFVar18 + 0x20;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          lVar19 = (longlong)local_b8.SolidSpheres.ArrayNum;
          *(int *)&pFVar18[0x28].field_0x0 = local_b8.SolidSpheres.ArrayNum;
          if (local_b8.SolidSpheres.ArrayNum == 0) {
            *(int *)(pFVar18 + 0x2c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,local_b8.SolidSpheres.ArrayNum,0,(ForAnyElementType *)pFVar2,
                       local_b8.SolidSpheres.ArrayNum,(int *)(pFVar18 + 0x2c));
            memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar9.Data,lVar19 * 0x28);
          }
          FVar9.Data = local_b8.Texts.AllocatorInstance.Data;
          pFVar2 = pFVar18 + 0x30;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar13 = local_b8.Texts.ArrayNum;
          *(int *)&pFVar18[0x38].field_0x0 = local_b8.Texts.ArrayNum;
          if (local_b8.Texts.ArrayNum == 0) {
            *(int *)(pFVar18 + 0x3c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,local_b8.Texts.ArrayNum,0,(ForAnyElementType *)pFVar2,
                       local_b8.Texts.ArrayNum,(int *)(pFVar18 + 0x3c));
            ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FText3d *)FVar9.Data,iVar13)
            ;
          }
          FVar9.Data = local_b8.RenderDebugHelpers.AllocatorInstance.Data;
          pFVar2 = pFVar18 + 0x40;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar13 = local_b8.RenderDebugHelpers.ArrayNum;
          *(int *)&pFVar18[0x48].field_0x0 = local_b8.RenderDebugHelpers.ArrayNum;
          if (local_b8.RenderDebugHelpers.ArrayNum == 0) {
            *(int *)(pFVar18 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,local_b8.RenderDebugHelpers.ArrayNum,0,(ForAnyElementType *)pFVar2,
                       local_b8.RenderDebugHelpers.ArrayNum,(int *)(pFVar18 + 0x4c));
            ConstructItems<EQSDebug::FDebugHelper,EQSDebug::FDebugHelper,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FDebugHelper *)FVar9.Data,
                       iVar13);
          }
          FVar9.Data = local_b8.Options.AllocatorInstance.Data;
          pFVar2 = pFVar18 + 0x50;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar13 = local_b8.Options.ArrayNum;
          *(int *)&pFVar18[0x58].field_0x0 = local_b8.Options.ArrayNum;
          if (local_b8.Options.ArrayNum == 0) {
            *(int *)(pFVar18 + 0x5c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_b8.Options.ArrayNum,0,(ForAnyElementType *)pFVar2,
                       local_b8.Options.ArrayNum,(int *)(pFVar18 + 0x5c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar9.Data,iVar13)
            ;
          }
          FVar9.Data = local_b8.Name.Data.AllocatorInstance.Data;
          pFVar2 = pFVar18 + 0x70;
          *(int *)&pFVar18[0x60].field_0x0 = local_b8.UsedOption;
          *(int *)(pFVar18 + 100) = local_b8.NumValidItems;
          *(int *)&pFVar18[0x68].field_0x0 = local_b8.Id;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          lVar19 = (longlong)local_b8.Name.Data.ArrayNum;
          *(int *)&pFVar18[0x78].field_0x0 = local_b8.Name.Data.ArrayNum;
          if (local_b8.Name.Data.ArrayNum == 0) {
            *(int *)(pFVar18 + 0x7c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_b8.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,
                       local_b8.Name.Data.ArrayNum,(int *)(pFVar18 + 0x7c));
            memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar9.Data,lVar19 * 2);
          }
          *(double *)&pFVar18[0x80].field_0x0 = local_b8.Timestamp;
          if (local_b8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Name.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_b8.Options.AllocatorInstance.Data,local_b8.Options.ArrayNum);
          if (local_b8.Options.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Options.AllocatorInstance.Data);
          }
          DestructItems<EQSDebug::FDebugHelper,int>
                    ((FDebugHelper *)local_b8.RenderDebugHelpers.AllocatorInstance.Data,
                     local_b8.RenderDebugHelpers.ArrayNum);
          if ((FDebugHelper *)local_b8.RenderDebugHelpers.AllocatorInstance.Data !=
              (FDebugHelper *)0x0) {
            FMemory::Free(local_b8.RenderDebugHelpers.AllocatorInstance.Data);
          }
          DestructItems<FDebugRenderSceneProxy::FText3d,int>
                    ((FText3d *)local_b8.Texts.AllocatorInstance.Data,local_b8.Texts.ArrayNum);
          if ((FText3d *)local_b8.Texts.AllocatorInstance.Data != (FText3d *)0x0) {
            FMemory::Free(local_b8.Texts.AllocatorInstance.Data);
          }
          if (local_b8.SolidSpheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.SolidSpheres.AllocatorInstance.Data);
          }
          DestructItems<EQSDebug::FTestData,int>
                    ((FTestData *)local_b8.Tests.AllocatorInstance.Data,local_b8.Tests.ArrayNum);
          if ((FTestData *)local_b8.Tests.AllocatorInstance.Data != (FTestData *)0x0) {
            FMemory::Free(local_b8.Tests.AllocatorInstance.Data);
          }
          DestructItems<EQSDebug::FItemData,int>
                    ((FItemData *)local_b8.Items.AllocatorInstance.Data,local_b8.Items.ArrayNum);
          if ((FItemData *)local_b8.Items.AllocatorInstance.Data != (FItemData *)0x0) {
            FMemory::Free(local_b8.Items.AllocatorInstance.Data);
          }
        }
        uVar20 = uVar20 + 0x18;
        uVar22 = (ulonglong)(uVar21 + 1);
      } while ((int)(uVar21 + 1) < local_c8.ArrayNum);
    }
    DestructItems<FEQSDebugger::FEnvQueryInfo,int>
              ((FEnvQueryInfo *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FEnvQueryInfo *)local_c8.AllocatorInstance.Data != (FEnvQueryInfo *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateDebugSceneProxy @ 146f3c980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
FGameplayDebuggerCategory_EQS::CreateDebugSceneProxy
          (FGameplayDebuggerCategory_EQS *this,UPrimitiveComponent *param_1,
          FDebugDrawDelegateHelper **param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDebugRenderSceneProxy *pFVar6;
  FEQSSceneProxy *pFVar7;
  FDebugDrawDelegateHelper *this_00;
  uint uVar8;
  FString local_18;
  
  uVar2 = this->ShownQueryIndex;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (this->DataPack).QueryDebugData.ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar2 < (this->DataPack).QueryDebugData.ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDebugRenderSceneProxy *)(*pcVar4)();
      return pFVar6;
    }
    if (*(int *)((this->DataPack).QueryDebugData.AllocatorInstance.Data +
                (longlong)(int)uVar2 * 0x88 + 0x28) < 1) {
      uVar2 = this->ShownQueryIndex;
      uVar8 = 0;
      if ((int)uVar2 < (this->DataPack).QueryDebugData.ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FDebugRenderSceneProxy *)(*pcVar4)();
        return pFVar6;
      }
      if (*(int *)((this->DataPack).QueryDebugData.AllocatorInstance.Data +
                  (longlong)(int)uVar2 * 0x88 + 0x38) < 1) goto LAB_146f3cbae;
    }
    if (param_1 != (UPrimitiveComponent *)0x0) {
      uVar2 = this->ShownQueryIndex;
      uVar8 = 0;
      if ((int)uVar2 < (this->DataPack).QueryDebugData.ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FDebugRenderSceneProxy *)(*pcVar4)();
        return pFVar6;
      }
      pFVar3 = (this->DataPack).QueryDebugData.AllocatorInstance.Data;
      FGameplayDebuggerCategory::GetSceneProxyViewFlag((FGameplayDebuggerCategory *)this,&local_18);
      pFVar7 = ::operator_new(0x400);
      if (pFVar7 == (FEQSSceneProxy *)0x0) {
        pFVar7 = (FEQSSceneProxy *)0x0;
      }
      else {
        pFVar7 = FEQSSceneProxy::FEQSSceneProxy
                           (pFVar7,param_1,&local_18,
                            (TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *)
                            (pFVar3 + (longlong)(int)uVar2 * 0x88 + 0x20),
                            (TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *)
                            (pFVar3 + (longlong)(int)uVar2 * 0x88 + 0x30));
      }
      this_00 = ::operator_new(0x80);
      if (this_00 == (FDebugDrawDelegateHelper *)0x0) {
        this_00 = (FDebugDrawDelegateHelper *)0x0;
      }
      else {
        FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(this_00);
        puVar1 = &this_00[1].DebugTextDrawingDelegate.field_0x8;
        *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
        this_00->_padding_ = (longlong)&___7FEQSRenderingDebugDrawDelegateHelper__6B_;
        this_00[1]._padding_ = 0;
        *(undefined8 *)&this_00[1].DebugTextDrawingDelegate = 0;
      }
      uVar2 = *(uint *)&this_00[1].DebugTextDrawingDelegate.field_0x8;
      this_00[1]._padding_ = (longlong)pFVar7->ActorOwner;
      *(IEQSQueryResultSourceInterface **)&this_00[1].DebugTextDrawingDelegate =
           pFVar7->QueryDataSource;
      puVar1 = &this_00[1].DebugTextDrawingDelegate.field_0x8;
      *(uint *)puVar1 = *(uint *)puVar1 ^ (uVar2 ^ pFVar7->bDrawOnlyWhenSelected) & 1;
      FDebugDrawDelegateHelper::InitDelegateHelper(this_00,(FDebugRenderSceneProxy *)pFVar7);
      *param_2 = this_00;
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (FDebugRenderSceneProxy *)pFVar7;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return (FDebugRenderSceneProxy *)pFVar7;
    }
  }
LAB_146f3cbae:
  *param_2 = (FDebugDrawDelegateHelper *)0x0;
  return (FDebugRenderSceneProxy *)0x0;
}

// CycleShownQueries @ 146f3f4e0

void __thiscall
FGameplayDebuggerCategory_EQS::CycleShownQueries(FGameplayDebuggerCategory_EQS *this)

{
  int iVar1;
  
  iVar1 = (this->DataPack).QueryDebugData.ArrayNum;
  if (0 < iVar1) {
    this->ShownQueryIndex = (this->ShownQueryIndex + 1) % iVar1;
    FGameplayDebuggerCategory::MarkRenderStateDirty((FGameplayDebuggerCategory *)this);
    return;
  }
  this->ShownQueryIndex = 0;
  FGameplayDebuggerCategory::MarkRenderStateDirty((FGameplayDebuggerCategory *)this);
  return;
}

// DrawData @ 146f42620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_EQS::DrawData
          (FGameplayDebuggerCategory_EQS *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UWorld *pUVar7;
  size_t sVar8;
  FString *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  FQueryData *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  uVar15 = 0;
  pUVar7 = FGameplayDebuggerCanvasContext::GetWorld(param_2);
  if (pUVar7 != (UWorld *)0x0) {
    bVar4 = (this->DataPack).QueryDebugData.ArrayNum < 2;
    if (bVar4) {
      ::FString::PrintfImpl(&local_78,L"Queries: {yellow}%d");
      pFVar9 = &local_78;
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
    else {
      FGameplayDebuggerAddonBase::GetInputHandlerDescription
                ((FGameplayDebuggerAddonBase *)this,local_58,0);
      ::FString::PrintfImpl
                (&local_68,L"Queries: {yellow}%d{white}, press {yellow}[%s]{white} to cycle through"
                );
      pFVar9 = &local_68;
      local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_88.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if ((bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) && (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    FGameplayDebuggerCanvasContext::Print(param_2,&local_88);
    fVar3 = __real_3f800000;
    iVar6 = (this->DataPack).QueryDebugData.ArrayNum;
    if (iVar6 != 0) {
      uVar11 = uVar15;
      if (0 < iVar6) {
        do {
          uVar10 = (uint)uVar11;
          uVar14 = 0;
          if ((int)uVar10 < (this->DataPack).QueryDebugData.ArrayNum) {
            uVar14 = ~uVar10 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FGameplayDebuggerCanvasContext::PrintfImpl(param_2,&FColor::White,fVar3,L"{%s}[%d] %s");
          iVar6 = (this->DataPack).QueryDebugData.ArrayNum;
          uVar11 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < iVar6);
      }
      uVar14 = this->ShownQueryIndex;
      if ((-1 < (int)uVar14) && ((int)uVar14 < iVar6)) {
        uVar5 = 0;
        uVar10 = uVar5;
        if ((int)uVar14 < (this->DataPack).QueryDebugData.ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = (FQueryData *)
                  ((this->DataPack).QueryDebugData.AllocatorInstance.Data +
                  (longlong)(int)uVar14 * 0x88);
        FGameplayDebuggerCanvasContext::MoveToNewLine(param_2);
        FGameplayDebuggerCanvasContext::PrintfImpl
                  (param_2,&FColor::White,fVar3,L"Timestamp: {yellow}%.3f (~ %.2fs ago)");
        ::FString::FString(&local_98,L"Options: ");
        uVar11 = uVar15;
        if (0 < (pFVar13->Options).ArrayNum) {
          do {
            uVar14 = (uint)uVar15;
            pwVar12 = L"[";
            if (uVar14 == pFVar13->UsedOption) {
              pwVar12 = L"[{green}";
            }
            sVar8 = wcslen(pwVar12);
            ::FString::AppendChars(&local_98,pwVar12,(int)sVar8);
            uVar10 = uVar5;
            if ((int)uVar14 < (pFVar13->Options).ArrayNum) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (pFVar13->Options).AllocatorInstance.Data;
            iVar6 = *(int *)(pFVar1 + uVar11 + 8);
            uVar10 = iVar6 - 1;
            if (iVar6 == 0) {
              uVar10 = uVar5;
            }
            ::FString::AppendChars(&local_98,*(wchar_t **)(pFVar1 + uVar11),uVar10);
            pwVar12 = L"] ";
            if (uVar14 == pFVar13->UsedOption) {
              pwVar12 = L"{white}] ";
            }
            sVar8 = wcslen(pwVar12);
            ::FString::AppendChars(&local_98,pwVar12,(int)sVar8);
            uVar15 = (ulonglong)(uVar14 + 1);
            uVar11 = uVar11 + 0x10;
          } while ((int)(uVar14 + 1) < (pFVar13->Options).ArrayNum);
        }
        FGameplayDebuggerCanvasContext::Print(param_2,&local_98);
        iVar6 = DrawLookedAtItem(this,pFVar13,param_1,param_2);
        DrawDetailedItemTable(this,pFVar13,iVar6,param_2);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawDetailedItemRow @ 146f42b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGameplayDebuggerCategory_EQS::DrawDetailedItemRow
          (FGameplayDebuggerCategory_EQS *this,FItemData *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          FGameplayDebuggerCanvasContext *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FColor_u_0 local_res10 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_res18;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_318;
  float local_314;
  FString local_310;
  float local_300;
  uint local_2fc;
  longlong local_2f8;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  TVector2<double>_u_0 local_290;
  TVector2<double>_u_0 local_280;
  FString local_270;
  TVector2<double>_u_0 local_260;
  FLinearColor_u_0 local_250;
  TVector2<double>_u_0 local_240;
  FString local_230;
  undefined1 local_218 [64];
  TVector2<double>_u_0 local_1d8 [7];
  undefined1 local_168 [64];
  TVector2<double>_u_0 local_128 [15];
  
  fVar4 = __real_3f800000;
  uVar13 = 0;
  local_310.Data.ArrayNum = (param_1->Desc).Data.ArrayNum;
  lVar12 = (longlong)local_310.Data.ArrayNum;
  pFVar2 = (param_1->Desc).Data.AllocatorInstance.Data;
  fVar19 = param_4->CursorX;
  local_2fc = 0;
  fVar20 = param_4->CursorY + __real_3f800000;
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18 = param_2;
  if (local_310.Data.ArrayNum == 0) {
    local_310.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_310,local_310.Data.ArrayNum
               ,&local_310.Data.ArrayMax);
    memcpy(local_310.Data.AllocatorInstance.Data,pFVar2,lVar12 * 2);
  }
  local_314 = 0.0;
  local_300 = 0.0;
  FGameplayDebuggerCanvasContext::MeasureString(param_4,&param_1->Desc,&local_314,&local_300);
  fVar18 = __real_439c0000;
  iVar6 = (param_1->Desc).Data.ArrayNum;
  iVar10 = iVar6 + -2;
  if (iVar6 == 0) {
    iVar10 = -1;
  }
  while ((0 < iVar10 && (fVar18 < local_314))) {
    iVar1 = (param_1->Desc).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (iVar10 < iVar6) {
      iVar6 = iVar10;
    }
    iVar15 = 0;
    if (0 < iVar6) {
      iVar15 = iVar6;
    }
    if (iVar1 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Desc).Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_2a0,pwVar9,iVar15);
    ::FString::ConcatFC(&local_2f0,&local_2a0,L"...");
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    local_310.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
    local_310.Data.ArrayNum = local_2f0.Data.ArrayNum;
    local_310.Data.ArrayMax = local_2f0.Data.ArrayMax;
    local_2f0.Data.ArrayNum = 0;
    local_2f0.Data.ArrayMax = 0;
    local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    FGameplayDebuggerCanvasContext::MeasureString(param_4,&local_310,&local_314,&local_300);
    iVar10 = iVar10 + -1;
  }
  FGameplayDebuggerCanvasContext::PrintAt(param_4,fVar19,fVar20,&FColor::White,&local_310);
  lVar12 = (longlong)(param_1->TestScores).ArrayNum;
  fVar19 = fVar19 + fVar18;
  fVar18 = 0.0;
  local_2f8 = lVar12;
  uVar16 = uVar13;
  if (0 < lVar12) {
    lVar14 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_2->AllocatorInstance).Data[lVar14] != (FScriptContainerElement)0x0) {
        uVar16 = 0;
        if ((int)uVar13 < (param_1->TestScores).ArrayNum) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar18 = fVar18 + *(float *)((param_1->TestScores).AllocatorInstance.Data + lVar14 * 4);
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
      uVar16 = local_2fc;
    } while (lVar14 < lVar12);
  }
  lVar12 = local_2f8;
  local_260._s_0.X = ___xmm_40000000000000000000000000000000;
  local_260._s_0.Y = _UNK_15076b998;
  fVar17 = fVar20 + __real_41700000;
  local_290._s_0.X = 0.0;
  local_290._s_0.Y = (double)fVar17;
  FCanvasTileItem::FCanvasTileItem
            ((FCanvasTileItem *)local_168,(TVector2<double> *)&local_290._s_0,GWhiteTexture,
             (TVector2<double> *)&local_260._s_0,&FLinearColor::Yellow);
  local_250._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  local_250._8_8_ = _UNK_1509252c8;
  local_240._s_0.X = ___xmm_40000000000000000000000000000000;
  local_240._s_0.Y = _UNK_15076b998;
  local_280._s_0.X = 0.0;
  local_280._s_0.Y = (double)fVar17;
  FCanvasTileItem::FCanvasTileItem
            ((FCanvasTileItem *)local_218,(TVector2<double> *)&local_280._s_0,GWhiteTexture,
             (TVector2<double> *)&local_240._s_0,(FLinearColor *)&local_250._s_0);
  if (param_3 <= __real_38d1b717) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar18 / param_3;
  }
  local_168._8_8_ = (undefined8)fVar19;
  local_128[0]._0_8_ = (undefined8)(fVar18 * __real_42400000);
  local_218._8_8_ = (double)local_128[0]._0_8_ + (double)local_168._8_8_;
  fVar18 = (fVar4 - fVar18) * __real_42400000;
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  local_1d8[0]._0_8_ = (undefined8)fVar18;
  FGameplayDebuggerCanvasContext::DrawItem
            (param_4,(FCanvasItem *)local_168,fVar19,(float)(double)local_168._16_8_);
  FGameplayDebuggerCanvasContext::DrawItem
            (param_4,(FCanvasItem *)local_218,(float)(double)local_218._8_8_,
             (float)(double)local_218._16_8_);
  FGameplayDebuggerCanvasContext::PrintfAtImpl(param_4,fVar19,fVar20,&FColor::Yellow,fVar4,L"%.2f");
  fVar19 = fVar19 + __real_42480000;
  ::FString::FString(&local_2b0,L"green");
  local_res20[0].Bits = 0xff006000;
  FColor::ToString((FColor *)&local_res20[0]._s_0,&local_2c0);
  local_res10[0].Bits = 0xffc0c0c0;
  FColor::ToString((FColor *)&local_res10[0]._s_0,&local_2d0);
  local_318.Bits = 0xff606060;
  FColor::ToString((FColor *)&local_318._s_0,&local_2e0);
  fVar17 = __real_ff7fffff;
  fVar18 = __real_42c80000;
  uVar13 = 0;
  if (0 < lVar12) {
    lVar12 = 0;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_2->AllocatorInstance).Data[lVar12] != (FScriptContainerElement)0x0) {
        uVar7 = 0;
        if ((int)uVar13 < (param_1->TestScores).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar13 < (param_1->TestValues).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(float *)((param_1->TestValues).AllocatorInstance.Data + lVar12 * 4) == fVar17) {
          uVar16 = uVar16 | 1;
          pFVar8 = ::FString::FString(&local_230,L"SKIP");
        }
        else {
          uVar16 = uVar16 | 2;
          ::FString::PrintfImpl(&local_270,L"%.2f");
          pFVar8 = &local_270;
        }
        pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
        if (((uVar16 & 2) != 0) &&
           (uVar16 = uVar16 & 0xfffffffd,
           local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (((uVar16 & 1) != 0) &&
           (uVar16 = uVar16 & 0xfffffffe,
           local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        FGameplayDebuggerCanvasContext::PrintfAtImpl
                  (param_4,fVar19,fVar20,&FColor::White,fVar4,L"{%s}%.2f {%s}%s");
        fVar19 = fVar19 + fVar18;
        param_2 = local_res18;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
          param_2 = local_res18;
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < local_2f8);
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  local_218._0_8_ = &___7FCanvasItem__6B_;
  local_168._0_8_ = &___7FCanvasItem__6B_;
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  return;
}

// DrawDetailedItemTable @ 146f43310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGameplayDebuggerCategory_EQS::DrawDetailedItemTable
          (FGameplayDebuggerCategory_EQS *this,FQueryData *param_1,int param_2,
          FGameplayDebuggerCanvasContext *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FScriptContainerElement local_308 [4];
  int local_304;
  ForAnyElementType local_300;
  int local_2f8;
  int iStack_2f4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_2f0;
  int local_2e0;
  longlong local_2d8;
  TVector2<double>_u_0 local_2d0;
  FString local_2c0;
  longlong local_2b0;
  longlong lStack_2a8;
  TVector2<double>_u_0 local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  TVector2<double>_u_0 local_260;
  longlong local_250;
  undefined8 uStack_248;
  longlong local_240;
  undefined8 uStack_238;
  FLinearColor_u_0 local_230;
  TVector2<double>_u_0 local_220;
  undefined1 local_208 [176];
  FCanvasTileItem local_158;
  
  FGameplayDebuggerAddonBase::GetInputHandlerDescription
            ((FGameplayDebuggerAddonBase *)this,&local_270,1);
  fVar3 = __real_3f800000;
  FGameplayDebuggerCanvasContext::PrintfImpl
            (param_3,&FColor::White,__real_3f800000,
             L"Detailed table view: {%s}%s{white}, press {yellow}[%s]{white} to toggle");
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (this->bShowDetails != 0) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_3);
    local_2d0._s_0.X = (double)*(int *)&pUVar10[1].field_0x18;
    local_2d0._s_0.Y = __real_4034000000000000;
    local_260._s_0.X = 0.0;
    local_260._s_0.Y = 0.0;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_208,(TVector2<double> *)&local_260._s_0,GWhiteTexture,
               (TVector2<double> *)&local_2d0._s_0,&FLinearColor::Black);
    iVar8 = (param_1->Items).ArrayNum;
    if (this->MaxItemTableRows < iVar8) {
      iVar8 = this->MaxItemTableRows;
    }
    local_208._28_4_ = SE_BLEND_Translucent;
    local_2b0 = ___xmm_3f19999a000000000000000000000000;
    lStack_2a8 = _UNK_150fba348;
    local_240 = ___xmm_3ecccccd3ecccccd0000000000000000;
    uStack_238 = _UNK_1514fd328;
    local_250 = ___xmm_3ecccccd000000003e4ccccd3e4ccccd;
    uStack_248 = _UNK_1514fd318;
    if (iVar8 == 0) {
      fVar18 = param_3->CursorY + __real_40a00000;
      local_208._48_8_ = ___xmm_3f19999a000000000000000000000000;
      local_208._56_8_ = _UNK_150fba348;
      param_3->CursorY = fVar18;
      FGameplayDebuggerCanvasContext::DrawItem(param_3,(FCanvasItem *)local_208,0.0,fVar18);
      param_3->CursorY = param_3->CursorY + __real_40400000;
      FGameplayDebuggerCanvasContext::PrintfImpl(param_3,&FColor::Yellow,fVar3,L"Num items: %d");
    }
    else {
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      iStack_2f4 = 0;
      local_304 = 0;
      if (0 < iVar8) {
        do {
          if (((local_300.Data <= (FScriptContainerElement *)&local_304) &&
              ((FScriptContainerElement *)&local_304 < local_300.Data + (longlong)iStack_2f4 * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = local_2f8;
          if (local_2f8 == iStack_2f4) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_300,&iStack_2f4);
          }
          local_2f8 = iVar7 + 1;
          *(int *)(local_300.Data + (longlong)iVar7 * 4) = local_304;
          local_304 = local_304 + 1;
        } while (local_304 < iVar8);
      }
      if (param_2 != -1) {
        iVar7 = (param_1->Items).ArrayNum;
        uVar12 = 0;
        if (0 < iVar7) {
          lVar15 = 0;
          do {
            uVar13 = 0;
            if ((int)uVar12 < iVar7) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)((param_1->Items).AllocatorInstance.Data + lVar15 + 0x10) == param_2) {
              if (iVar8 <= (int)uVar12) {
                uVar14 = iVar8 - 1;
                uVar13 = 0;
                if ((int)uVar14 < local_2f8) {
                  uVar13 = ~uVar14 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(uint *)(local_300.Data + (longlong)(int)uVar14 * 4) = uVar12;
              }
              break;
            }
            iVar7 = (param_1->Items).ArrayNum;
            uVar12 = uVar12 + 1;
            lVar15 = lVar15 + 0x38;
          } while ((int)uVar12 < iVar7);
        }
      }
      iVar7 = (param_1->Tests).ArrayNum;
      lVar15 = (longlong)iVar8;
      uVar12 = 0;
      local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f0.ArrayNum = 0;
      local_2f0.ArrayMax = 0;
      local_2e0 = 0;
      local_2d8 = lVar15;
      if (0 < iVar7) {
        lVar17 = 0;
        iVar8 = 0;
        do {
          local_308[0] = (FScriptContainerElement)0x0;
          if ((local_2f0.AllocatorInstance.Data <= local_308) &&
             (local_308 < local_2f0.AllocatorInstance.Data + local_2f0.ArrayMax)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar8 = local_2f0.ArrayNum;
          }
          if (iVar8 == local_2f0.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax);
          }
          local_2f0.ArrayNum = iVar8 + 1;
          uVar13 = 0;
          lVar16 = 0;
          local_2f0.AllocatorInstance.Data[iVar8] = local_308[0];
          if (0 < lVar15) {
            do {
              uVar14 = 0;
              if ((int)uVar13 < local_2f8) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar14 = *(uint *)(local_300.Data + lVar16 * 4);
              uVar9 = 0;
              if ((int)uVar14 < (param_1->Items).ArrayNum) {
                uVar9 = ~uVar14 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (param_1->Items).AllocatorInstance.Data;
              if ((-1 < (int)uVar12) &&
                 ((int)uVar12 < *(int *)(pFVar1 + (longlong)(int)uVar14 * 0x38 + 0x20))) {
                uVar9 = 0;
                if ((int)uVar12 < *(int *)(pFVar1 + (longlong)(int)uVar14 * 0x38 + 0x30)) {
                  uVar9 = ~uVar12 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar15 = local_2d8;
                if (*(float *)(*(longlong *)(pFVar1 + (longlong)(int)uVar14 * 0x38 + 0x28) +
                              lVar17 * 4) != 0.0) {
                  local_2e0 = local_2e0 + 1;
                  uVar13 = 0;
                  if ((int)uVar12 < local_2f0.ArrayNum) {
                    uVar13 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  local_2f0.AllocatorInstance.Data[lVar17] = (FScriptContainerElement)0x1;
                  lVar15 = local_2d8;
                  break;
                }
              }
              uVar13 = uVar13 + 1;
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar15);
          }
          iVar7 = (param_1->Tests).ArrayNum;
          uVar12 = uVar12 + 1;
          lVar17 = lVar17 + 1;
          if (iVar7 <= (int)uVar12) break;
          iVar8 = local_2f0.ArrayNum;
        } while( true );
      }
      uVar12 = 0;
      fVar18 = 0.0;
      if (0 < iVar7) {
        lVar17 = 0;
        do {
          if (((param_1->Items).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->Items).AllocatorInstance.Data;
          if (((int)uVar12 < 0) || (*(int *)(pFVar1 + 0x20) <= (int)uVar12)) {
            fVar19 = 0.0;
          }
          else {
            uVar13 = 0;
            if ((int)uVar12 < *(int *)(pFVar1 + 0x30)) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            fVar19 = *(float *)(lVar17 + *(longlong *)(pFVar1 + 0x28));
          }
          uVar12 = uVar12 + 1;
          fVar18 = fVar18 + fVar19;
          lVar17 = lVar17 + 4;
        } while ((int)uVar12 < (param_1->Tests).ArrayNum);
      }
      fVar4 = __real_40a00000;
      fVar19 = param_3->CursorY + __real_40a00000;
      local_208._48_8_ = local_2b0;
      local_208._56_8_ = lStack_2a8;
      param_3->CursorY = fVar19;
      fVar20 = fVar19 + __real_40400000;
      FGameplayDebuggerCanvasContext::DrawItem(param_3,(FCanvasItem *)local_208,0.0,fVar19);
      fVar19 = param_3->CursorX;
      FGameplayDebuggerCanvasContext::PrintfAtImpl
                (param_3,fVar19,fVar20,&FColor::Yellow,fVar3,L"Num items: %d");
      fVar19 = fVar19 + __real_439c0000;
      ::FString::FString(&local_2c0,L"Score");
      FGameplayDebuggerCanvasContext::PrintAt(param_3,fVar19,fVar20,&FColor::White,&local_2c0);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      fVar5 = __real_42c80000;
      fVar19 = fVar19 + __real_42480000;
      uVar12 = 0;
      if (0 < (param_1->Tests).ArrayNum) {
        lVar17 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar12 < local_2f0.ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_2f0.AllocatorInstance.Data[lVar17] != (FScriptContainerElement)0x0) {
            FGameplayDebuggerCanvasContext::PrintfAtImpl
                      (param_3,fVar19,fVar20,&FColor::White,fVar3,L"Test %d");
            fVar19 = fVar19 + fVar5;
          }
          uVar12 = uVar12 + 1;
          lVar17 = lVar17 + 1;
        } while ((int)uVar12 < (param_1->Tests).ArrayNum);
      }
      lVar17 = local_2d8;
      fVar19 = __real_41a00000;
      uVar12 = 0;
      param_3->CursorY = param_3->CursorY + __real_41a00000;
      if (0 < lVar15) {
        lVar15 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar12 < local_2f8) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar13 = *(uint *)(local_300.Data + lVar15 * 4);
          uVar14 = 0;
          if ((int)uVar13 < (param_1->Items).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((param_1->Items).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x38 + 0x10
                      ) == param_2) {
            plVar11 = &local_250;
          }
          else {
            plVar11 = &local_2b0;
            if ((uVar12 & 1) == 0) {
              plVar11 = &local_240;
            }
          }
          local_208._48_8_ = *plVar11;
          local_208._56_8_ = plVar11[1];
          FGameplayDebuggerCanvasContext::DrawItem
                    (param_3,(FCanvasItem *)local_208,0.0,param_3->CursorY);
          uVar13 = 0;
          if ((int)uVar12 < local_2f8) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar13 = *(uint *)(local_300.Data + lVar15 * 4);
          uVar14 = 0;
          if ((int)uVar13 < (param_1->Items).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          DrawDetailedItemRow(this,(FItemData *)
                                   ((param_1->Items).AllocatorInstance.Data +
                                   (longlong)(int)uVar13 * 0x38),&local_2f0,fVar18,param_3);
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 1;
          param_3->CursorY = param_3->CursorY + fVar19;
        } while (lVar15 < lVar17);
      }
      local_230._0_8_ = ___xmm_3e4ccccd000000000000000000000000;
      local_230._8_8_ = _UNK_15146ec78;
      fVar18 = FGameplayDebuggerCanvasContext::GetLineHeight(param_3);
      iVar8 = local_2e0;
      fVar18 = fVar18 * (float)(local_2e0 + 1) + __real_41200000;
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_3);
      local_2a0._s_0.X = (double)*(int *)&pUVar10[1].field_0x18;
      local_220._s_0.X = 0.0;
      local_220._s_0.Y = 0.0;
      local_2a0._s_0.Y = (double)fVar18;
      FCanvasTileItem::FCanvasTileItem
                (&local_158,(TVector2<double> *)&local_220._s_0,GWhiteTexture,
                 (TVector2<double> *)&local_2a0._s_0,(FLinearColor *)&local_230._s_0);
      local_158._padding_._4_4_ = 2;
      FGameplayDebuggerCanvasContext::DrawItem
                (param_3,(FCanvasItem *)&local_158,0.0,param_3->CursorY);
      param_3->CursorY = param_3->CursorY + fVar4;
      if (iVar8 == 0) {
        ::FString::FString(&local_280,L"No relevant tests in used option.");
        FGameplayDebuggerCanvasContext::Print(param_3,&local_280);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::FString(&local_290,L"Relevant tests from used option:");
        FGameplayDebuggerCanvasContext::Print(param_3,&local_290);
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        uVar12 = 0;
        if (0 < (param_1->Tests).ArrayNum) {
          lVar15 = 0;
          do {
            uVar14 = ~uVar12 >> 0x1f;
            uVar13 = 0;
            if ((int)uVar12 < local_2f0.ArrayNum) {
              uVar13 = uVar14;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_2f0.AllocatorInstance.Data[lVar15] != (FScriptContainerElement)0x0) {
              uVar13 = 0;
              if ((int)uVar12 < (param_1->Tests).ArrayNum) {
                uVar13 = uVar14;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar13 = 0;
              if ((int)uVar12 < (param_1->Tests).ArrayNum) {
                uVar13 = uVar14;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FGameplayDebuggerCanvasContext::PrintfImpl
                        (param_3,&FColor::White,fVar3,L"Test %d = {yellow}%s {LightBlue}(%s)");
            }
            uVar12 = uVar12 + 1;
            lVar15 = lVar15 + 1;
          } while ((int)uVar12 < (param_1->Tests).ArrayNum);
        }
      }
      local_158._padding_ = (longlong)&___7FCanvasItem__6B_;
      if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.AllocatorInstance.Data);
      }
      if (local_300.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data);
      }
    }
  }
  return;
}

// DrawLookedAtItem @ 146f44660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FGameplayDebuggerCategory_EQS::DrawLookedAtItem
          (FGameplayDebuggerCategory_EQS *this,FQueryData *param_1,APlayerController *param_2,
          FGameplayDebuggerCanvasContext *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UWorld *pUVar14;
  UObject *pUVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  TVector2<double>_u_0 local_1c0;
  double local_1b0;
  TVector2<double>_u_0 local_1a8;
  FLinearColor_u_0 local_198;
  TVector<double>_u_0 local_188;
  FCanvasTileItem local_168;
  
  pUVar14 = FGameplayDebuggerCanvasContext::GetWorld(param_3);
  bVar11 = TWeakObjectPtr<UCanvas,FWeakObjectPtr>::UEOpEquals(&param_3->Canvas,(void *)0x0);
  if ((bVar11) || (pUVar14 == (UWorld *)0x0)) {
    return -1;
  }
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_3);
  lVar19 = *(longlong *)&pUVar15[0x12].field_0x20;
  local_1c0._s_0.X = *(double *)(lVar19 + 0xbc8);
  local_1c0._s_0.Y = *(double *)(lVar19 + 0xbd0);
  local_1b0 = *(double *)(lVar19 + 0xbd8);
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_3);
  dVar10 = local_1b0;
  uVar9 = local_1c0._s_0.Y;
  uVar8 = local_1c0._s_0.X;
  dVar7 = __real_3e45798ee2308c3a;
  dVar6 = __real_3ff0000000000000;
  uVar16 = 0;
  uVar17 = 0xffffffff;
  lVar19 = *(longlong *)&pUVar15[0x12].field_0x20;
  dVar1 = *(double *)(lVar19 + 0x540);
  dVar2 = *(double *)(lVar19 + 0x560);
  dVar3 = *(double *)(lVar19 + 0x580);
  if (0 < (param_1->RenderDebugHelpers).ArrayNum) {
    lVar19 = 0;
    dVar5 = __real_0010000000000000;
    uVar17 = 0xffffffff;
    do {
      uVar12 = 0;
      if ((int)uVar16 < (param_1->RenderDebugHelpers).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        iVar13 = (*pcVar4)();
        return iVar13;
      }
      pFVar18 = (param_1->RenderDebugHelpers).AllocatorInstance.Data;
      dVar23 = *(double *)(pFVar18 + lVar19) - (double)uVar8;
      dVar25 = *(double *)(pFVar18 + lVar19 + 8) - (double)uVar9;
      dVar26 = *(double *)(pFVar18 + lVar19 + 0x10) - dVar10;
      auVar21._0_8_ = dVar23 * dVar23;
      auVar21._8_8_ = 0;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar25 * dVar25 + auVar21._0_8_ + dVar26 * dVar26;
      auVar22 = sqrtpd(auVar21,auVar22);
      dVar24 = auVar22._0_8_;
      if (auVar22._0_8_ <= dVar7) {
        dVar24 = dVar6;
      }
      dVar24 = (dVar23 * dVar1 + dVar25 * dVar2 + dVar26 * dVar3) / dVar24;
      if (dVar5 < dVar24) {
        dVar5 = dVar24;
        uVar17 = uVar16;
      }
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x38;
    } while ((int)uVar16 < (param_1->RenderDebugHelpers).ArrayNum);
    if (uVar17 != 0xffffffff) {
      uVar16 = 0;
      if ((int)uVar17 < (param_1->RenderDebugHelpers).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        iVar13 = (*pcVar4)();
        return iVar13;
      }
      fVar20 = __real_bf800000;
      pFVar18 = (param_1->RenderDebugHelpers).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x38;
      DrawDebugSphere(pUVar14,(TVector<double> *)pFVar18,*(float *)&pFVar18[0x18].field_0x0,8,
                      &FColor::Red,false,__real_bf800000,'\0',0.0);
      local_188._s_0.X = 0.0;
      local_188._s_0.Y = 0.0;
      local_188._s_0.Z = dVar6;
      DrawDebugCone(pUVar14,(TVector<double> *)pFVar18,(TVector<double> *)&local_188._s_0,
                    __real_42c80000,__real_3dcccccd,__real_3dcccccd,8,&FColor::Red,false,fVar20,'\0'
                    ,0.0);
      uVar16 = *(uint *)(pFVar18 + 0x1c);
      if (uVar16 == 0xffffffff) {
        FGameplayDebuggerCanvasContext::PrintfImpl
                  (param_3,&FColor::White,__real_3f800000,L"Selected item: {yellow}%d");
        FGameplayDebuggerCanvasContext::MoveToNewLine(param_3);
      }
      else {
        local_198._0_8_ = ___xmm_3f19999a000000000000000000000000;
        local_198._8_8_ = _UNK_150fba348;
        fVar20 = FGameplayDebuggerCanvasContext::GetLineHeight(param_3);
        pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_3);
        local_1a8._s_0.X = (double)*(int *)&pUVar15[1].field_0x18;
        local_1c0._s_0.X = 0.0;
        local_1c0._s_0.Y = 0.0;
        local_1a8._s_0.Y = (double)(fVar20 + fVar20 + __real_40000000);
        FCanvasTileItem::FCanvasTileItem
                  (&local_168,(TVector2<double> *)&local_1c0._s_0,GWhiteTexture,
                   (TVector2<double> *)&local_1a8._s_0,(FLinearColor *)&local_198._s_0);
        fVar20 = __real_3f800000;
        local_168._padding_._4_4_ = 2;
        FGameplayDebuggerCanvasContext::DrawItem
                  (param_3,(FCanvasItem *)&local_168,0.0,param_3->CursorY - __real_3f800000);
        uVar12 = 0;
        if ((int)uVar16 < (param_1->Tests).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        uVar12 = 0;
        if ((int)uVar16 < (param_1->Tests).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        if ((((-1 < (int)uVar17) && ((int)uVar17 < (param_1->Items).ArrayNum)) && ((int)uVar17 < 0))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
              bVar11)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        FGameplayDebuggerCanvasContext::PrintfImpl
                  (param_3,&FColor::Red,fVar20,
                   L"Selected item (#%d, %s) failed test [%d]: {yellow}%s {LightBlue}(%s)");
        FGameplayDebuggerCanvasContext::PrintfImpl
                  (param_3,&FColor::White,fVar20,L"\t\'%s\' with score: %3.3f");
      }
    }
  }
  return uVar17;
}

// MakeInstance @ 146f5d450

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_EQS::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FGameplayDebuggerCategory_EQS *this;
  FName *pFVar4;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar5;
  TRawPtrProxy<FGameplayDebuggerCategory_EQS> local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FGameplayDebuggerInputHandlerConfig local_70;
  FGameplayDebuggerInputHandlerConfig local_60 [2];
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  this = ::operator_new(0xa0);
  if (this == (FGameplayDebuggerCategory_EQS *)0x0) {
    this = (FGameplayDebuggerCategory_EQS *)0x0;
  }
  else {
    FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
    this->MaxQueries = 5;
    this->MaxItemTableRows = 10;
    this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_EQS__6B_;
    (this->DataPack).QueryDebugData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).QueryDebugData.ArrayNum = 0;
    (this->DataPack).QueryDebugData.ArrayMax = 0;
    this->ShownQueryIndex = 0;
    *(float *)&this->_padding_ = UE::GameplayDebuggerCategory_EQS::Tweakables::RefreshInterval;
    pFVar4 = ::FName::FName(&local_res10,L"Multiply");
    FVar1 = *pFVar4;
    pFVar4 = ::FName::FName(&local_res18,L"CycleQueries");
    FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig
              (&local_70,*pFVar4,FVar1);
    pFVar4 = ::FName::FName(&local_res20,L"Divide");
    FVar1 = *pFVar4;
    pFVar4 = ::FName::FName(&local_78,L"ToggleDetails");
    FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig(local_60,*pFVar4,FVar1)
    ;
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    local_48 = CycleShownQueries;
    local_38 = CycleShownQueries;
    uStack_30 = uStack_40;
    FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_EQS>
              ((FGameplayDebuggerAddonBase *)this,&local_70,this,(pmf_faa310ff *)&local_38,Local);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = ToggleDetailView;
    FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_EQS>
              ((FGameplayDebuggerAddonBase *)this,local_60,this,(pmf_faa310ff *)&local_48,Local);
    FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>
              ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
    if (((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  local_res8.Object = this;
  TSharedRef<FGameplayDebuggerCategory,1>::
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_EQS>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnDataPackReplicated @ 146f5e3a0

void __thiscall
FGameplayDebuggerCategory_EQS::OnDataPackReplicated(FGameplayDebuggerCategory_EQS *this,int param_1)

{
  FGameplayDebuggerCategory::MarkRenderStateDirty((FGameplayDebuggerCategory *)this);
  if ((this->ShownQueryIndex < 0) ||
     ((this->DataPack).QueryDebugData.ArrayNum <= this->ShownQueryIndex)) {
    this->ShownQueryIndex = 0;
  }
  return;
}

// ToggleDetailView @ 146f7c0f0

void __thiscall FGameplayDebuggerCategory_EQS::ToggleDetailView(FGameplayDebuggerCategory_EQS *this)

{
  *(uint *)&this->field_0x90 = *(uint *)&this->field_0x90 ^ 4;
  return;
}

