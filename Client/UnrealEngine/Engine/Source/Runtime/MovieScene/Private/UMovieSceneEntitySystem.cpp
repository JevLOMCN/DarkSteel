// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 39

// OnCleanTaggedGarbage @ 1460dad70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::OnCleanTaggedGarbage(UMovieSceneEntitySystem *this)

{
  return;
}

// OnLink @ 1460db200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::OnLink(UMovieSceneEntitySystem *this)

{
  return;
}

// OnRun @ 1460dc4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::OnRun
          (UMovieSceneEntitySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  return;
}

// OnSchedulePersistentTasks @ 1460dca40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::OnSchedulePersistentTasks
          (UMovieSceneEntitySystem *this,IEntitySystemScheduler *param_1)

{
  return;
}

// OnTagGarbage @ 1460dca50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::OnTagGarbage(UMovieSceneEntitySystem *this)

{
  return;
}

// OnUnlink @ 1460dca60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::OnUnlink(UMovieSceneEntitySystem *this)

{
  return;
}

// StaticClass @ 1460fa190

UClass * __cdecl UMovieSceneEntitySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntitySystem",
               &Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntitySystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEntitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntitySystem>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton;
}

// UMovieSceneEntitySystem @ 14611acb0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
UMovieSceneEntitySystem::UMovieSceneEntitySystem
          (UMovieSceneEntitySystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->RelevantComponent).Value = 0xffff;
  return this;
}

// UMovieSceneEntitySystem @ 14611acf0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
UMovieSceneEntitySystem::UMovieSceneEntitySystem
          (UMovieSceneEntitySystem *this,FObjectInitializer *param_1)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  TStatId local_68;
  FName local_60;
  FName local_58;
  undefined1 local_50 [16];
  FName *local_40;
  undefined4 *local_38;
  FName *local_30;
  undefined8 *local_28;
  
  UObject::UObject((UObject *)this,param_1);
  this->bSystemIsEnabled = true;
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  uVar3 = 0xffff;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->RelevantComponent).Value = 0xffff;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  this->SystemCategories = Unspecified;
  this->Phase = Evaluation;
  this->GraphID = 0xffff;
  if ((((UClass *)this->_padding_)->ClassFlags & CLASS_Abstract) == CLASS_None) {
    uVar3 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                      (&UE::MovieScene::GlobalDependencyGraph,(UClass *)this->_padding_);
  }
  this->GlobalDependencyGraphID = uVar3;
  lVar2 = *(longlong *)(this->_padding_ + 0x18);
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  if (UE::MovieScene::SystemStats._8_4_ != UE::MovieScene::SystemStats._52_4_) {
    lVar7 = 0x154bf0188;
    if (UE::MovieScene::SystemStats._64_8_ != 0) {
      lVar7 = UE::MovieScene::SystemStats._64_8_;
    }
    iVar1 = *(int *)(lVar7 + (ulonglong)
                             (UE::MovieScene::SystemStats._72_4_ - 1 &
                             (int)((ulonglong)lVar2 >> 0x20) + uVar4) * 4);
    while (iVar1 != -1) {
      lVar7 = UE::MovieScene::SystemStats._0_8_ + (longlong)iVar1 * 0x18;
      if (*(longlong *)(UE::MovieScene::SystemStats._0_8_ + (longlong)iVar1 * 0x18) == lVar2) {
        puVar6 = (undefined8 *)(lVar7 + 8);
        if (lVar7 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        if (puVar6 != (undefined8 *)0x0) {
          (this->StatID).StatIdPtr = (TStatIdData *)*puVar6;
          return this;
        }
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x10);
    }
  }
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,(FString *)local_50);
  local_res18 = CONCAT71(local_res18._1_7_,1);
  pFVar8 = (FScriptContainerElement *)L"";
  if (local_50._8_4_ != 0) {
    pFVar8 = (FScriptContainerElement *)local_50._0_8_;
  }
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_res20[0] = 2;
  pFVar5 = ::FName::FName(&local_58,(wchar_t *)pFVar8);
  local_60 = *pFVar5;
  local_40 = &local_60;
  local_38 = local_res20;
  local_30 = &local_res8;
  local_28 = &local_res18;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_40);
  if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_50._0_8_);
  }
  (this->StatID).StatIdPtr = local_68.StatIdPtr;
  local_res18 = *(undefined8 *)(this->_padding_ + 0x18);
  local_50._0_8_ = &local_res18;
  local_50._8_8_ = &local_68;
  TSet<TTuple<FName,TStatId>,TDefaultMapHashableKeyFuncs<FName,TStatId,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,TStatId_const_&>_>
            ((TSet<TTuple<FName,TStatId>,TDefaultMapHashableKeyFuncs<FName,TStatId,0>,FDefaultSetAllocator>
              *)&UE::MovieScene::SystemStats,
             (TPairInitializer<FName_&&,TStatId_const_&> *)&local_res8,(bool *)local_50);
  return this;
}

// ~UMovieSceneEntitySystem @ 14611e6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::~UMovieSceneEntitySystem(UMovieSceneEntitySystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Abandon @ 146122200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::Abandon(UMovieSceneEntitySystem *this)

{
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  this->GraphID = 0xffff;
  return;
}

// CleanTaggedGarbage @ 146126b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::CleanTaggedGarbage(UMovieSceneEntitySystem *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146126b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// ConditionalLinkSystem @ 146128b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::ConditionalLinkSystem
          (UMovieSceneEntitySystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->_padding_ & 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAnyFlags(RF_ClassDefaultObject)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x2af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146128bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this,param_1);
  return;
}

// ConditionalLinkSystemImpl @ 146128be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::ConditionalLinkSystemImpl
          (UMovieSceneEntitySystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  bool bVar1;
  UObject *local_res18 [2];
  
  bVar1 = IsRelevant(this,param_1);
  if (bVar1) {
    local_res18[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystemLinker::LinkSystem
              (param_1,(TSubclassOf<UMovieSceneEntitySystem>)local_res18);
  }
  return;
}

// DebugPrintGlobalDependencyGraph @ 14612ab80

void __cdecl UMovieSceneEntitySystem::DebugPrintGlobalDependencyGraph(bool param_1)

{
  FOutputDeviceRedirector *pFVar1;
  FString local_28;
  FString local_18;
  
  if (param_1) {
    UE::MovieScene::FSystemDependencyGraph::UpdateCache(&UE::MovieScene::GlobalDependencyGraph);
  }
  pFVar1 = GetGlobalLogSingleton();
  FOutputDevice::Log((FOutputDevice *)pFVar1,
                     L"Printing debug graph for Entity System Graph (in standard graphviz syntax):")
  ;
  pFVar1 = GetGlobalLogSingleton();
  UE::MovieScene::FSystemDependencyGraph::ToString(&UE::MovieScene::GlobalDependencyGraph,&local_18)
  ;
  ::FString::PrintfImpl
            (&local_28,
             L"----------------------------------------------------------------------------------\n%s\n----------------------------------------------------------------------------------\n"
            );
  FOutputDevice::Log((FOutputDevice *)pFVar1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DefineComponentConsumer @ 14612ac20

void __cdecl
UMovieSceneEntitySystem::DefineComponentConsumer
          (TSubclassOf<UMovieSceneEntitySystem> param_1,FComponentTypeID param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  UClass *pUVar6;
  
  uVar4 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                    (&UE::MovieScene::GlobalDependencyGraph,param_2);
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14612ac7b;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14612ac7b:
  uVar5 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                    (&UE::MovieScene::GlobalDependencyGraph,pUVar6);
  UE::MovieScene::FDirectedGraph::MakeEdge
            (&UE::MovieScene::GlobalDependencyGraph.ImplicitSubsequents,uVar4,uVar5);
  UE::MovieScene::FDirectedGraph::MakeEdge
            (&UE::MovieScene::GlobalDependencyGraph.ImplicitPrerequisites,uVar5,uVar4);
  UE::MovieScene::GlobalDependencyGraph.SerialNumber =
       UE::MovieScene::GlobalDependencyGraph.SerialNumber + 1;
  return;
}

// DefineComponentProducer @ 14612acd0

void __cdecl
UMovieSceneEntitySystem::DefineComponentProducer
          (TSubclassOf<UMovieSceneEntitySystem> param_1,FComponentTypeID param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  UClass *pUVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14612ad22;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14612ad22:
  uVar4 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                    (&UE::MovieScene::GlobalDependencyGraph,pUVar6);
  uVar5 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                    (&UE::MovieScene::GlobalDependencyGraph,param_2);
  UE::MovieScene::FDirectedGraph::MakeEdge
            (&UE::MovieScene::GlobalDependencyGraph.ImplicitSubsequents,uVar4,uVar5);
  UE::MovieScene::FDirectedGraph::MakeEdge
            (&UE::MovieScene::GlobalDependencyGraph.ImplicitPrerequisites,uVar5,uVar4);
  UE::MovieScene::GlobalDependencyGraph.SerialNumber =
       UE::MovieScene::GlobalDependencyGraph.SerialNumber + 1;
  return;
}

// DefineImplicitPrerequisite @ 14612ad90

void __cdecl
UMovieSceneEntitySystem::DefineImplicitPrerequisite
          (TSubclassOf<UMovieSceneEntitySystem> param_1,TSubclassOf<UMovieSceneEntitySystem> param_2
          )

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar8 = (UClass *)0x0;
  pUVar7 = pUVar8;
  if ((lVar2 != 0) && (pUVar6 = StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  uVar4 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                    (&UE::MovieScene::GlobalDependencyGraph,pUVar7);
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar7 = StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  uVar5 = UE::MovieScene::FSystemDependencyGraph::GetGraphID
                    (&UE::MovieScene::GlobalDependencyGraph,pUVar8);
  UE::MovieScene::FDirectedGraph::MakeEdge
            (&UE::MovieScene::GlobalDependencyGraph.ImplicitSubsequents,uVar4,uVar5);
  UE::MovieScene::FDirectedGraph::MakeEdge
            (&UE::MovieScene::GlobalDependencyGraph.ImplicitPrerequisites,uVar5,uVar4);
  UE::MovieScene::GlobalDependencyGraph.SerialNumber =
       UE::MovieScene::GlobalDependencyGraph.SerialNumber + 1;
  return;
}

// Disable @ 14612c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::Disable(UMovieSceneEntitySystem *this)

{
  this->bSystemIsEnabled = false;
  return;
}

// Enable @ 14612f6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::Enable(UMovieSceneEntitySystem *this)

{
  this->bSystemIsEnabled = true;
  return;
}

// FinishDestroy @ 146132a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::FinishDestroy(UMovieSceneEntitySystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Linker).field0_0x0.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Linker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x2dc,L"System being destroyed without Unlink being called");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14613c220

UClass * __cdecl UMovieSceneEntitySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntitySystem",
               &Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntitySystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEntitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntitySystem>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton;
}

// GetSubsequentSystems @ 14613cc00

void __cdecl
UMovieSceneEntitySystem::GetSubsequentSystems
          (ushort param_1,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDirectionalEdge *pFVar5;
  FDirectionalEdge local_28;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_20;
  
  UE::MovieScene::FSystemDependencyGraph::UpdateCache(&UE::MovieScene::GlobalDependencyGraph);
  UE::MovieScene::FDirectedGraph::GetEdgesFrom
            (&UE::MovieScene::GlobalDependencyGraph.FlowGraph,&local_20,param_1);
  pFVar5 = local_20.DataPtr;
  while( true ) {
    if (pFVar5 == local_20.DataPtr + local_20.ArrayNum) {
      return;
    }
    local_28 = *pFVar5;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_28.ToNode) &&
        (&local_28.ToNode < pFVar1 + (longlong)param_2->ArrayMax * 2)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    pFVar5 = pFVar5 + 1;
    param_2->ArrayNum = iVar4 + 1;
    *(ushort *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 2) = local_28.ToNode;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// IsCustomSchedulingEnabled @ 146140cb0

bool __cdecl UMovieSceneEntitySystem::IsCustomSchedulingEnabled(void)

{
  return UE::MovieScene::GSequencerCustomTaskScheduling;
}

// IsReadyForFinishDestroy @ 1461412c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneEntitySystem::IsReadyForFinishDestroy(UMovieSceneEntitySystem *this)

{
  return (this->Linker).field0_0x0.DebugPtr == (UMovieSceneEntitySystemLinker *)0x0;
}

// IsRelevant @ 1461412d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEntitySystem::IsRelevant
          (UMovieSceneEntitySystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  FComponentMask *pFVar3;
  
  uVar1 = (this->RelevantComponent).Value;
  if (uVar1 != 0xffff) {
    pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
    if (((int)(uint)uVar1 < (pFVar3->Bits).NumBits) &&
       ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        != 0)) {
      return true;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146141342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->_padding_ + 0x2d0))(this,param_1);
  return (bool)uVar2;
}

// IsRelevantImpl @ 1461413f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEntitySystem::IsRelevantImpl
          (UMovieSceneEntitySystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return false;
}

// Link @ 146141dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::Link(UMovieSceneEntitySystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSparseArrayAllocationInfo *pFVar3;
  FSparseArrayAllocationInfo local_18;
  
  if (this->GraphID == 0xffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphID != TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x311,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Linker).field0_0x0.DebugPtr = param_1;
  pFVar3 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                      &param_1->EntitySystemsByGlobalGraphID,&local_18,
                      (uint)this->GlobalDependencyGraphID);
  if (pFVar3->Pointer != (undefined8 *)0x0) {
    *(UMovieSceneEntitySystem **)pFVar3->Pointer = this;
  }
                    /* WARNING: Could not recover jumptable at 0x000146141e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// LinkAllSystems @ 146141e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneEntitySystem::LinkAllSystems(UMovieSceneEntitySystemLinker *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined1 *puVar5;
  ushort uVar6;
  FUObjectCppClassStaticFunctions local_res10;
  UClass *local_res18 [2];
  
  uVar6 = 0;
  if ((ushort)UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum != 0) {
    do {
      if ((int)(uint)uVar6 < *(int *)&(param_1->EntitySystemsByGlobalGraphID).field_0x28) {
        if ((*(int *)&(param_1->EntitySystemsByGlobalGraphID).field_0x28 <= (int)(uint)uVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1 = *(undefined1 **)&(param_1->EntitySystemsByGlobalGraphID).field_0x20;
        puVar5 = &(param_1->EntitySystemsByGlobalGraphID).field_0x10;
        if (puVar1 != (undefined1 *)0x0) {
          puVar5 = puVar1;
        }
        if ((*(uint *)(puVar5 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)
        goto LAB_146141f15;
      }
      else {
LAB_146141f15:
        if ((UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum <= (int)(uint)uVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Nodes.IsValidIndex(GraphID)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                               ,0x4d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum <= (int)(uint)uVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar4 = (UClass *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     (UE::MovieScene::GlobalDependencyGraph.Nodes.AllocatorInstance.
                                      Data + (ulonglong)uVar6 * 0xc));
        if (pUVar4 != (UClass *)0x0) {
          if (Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton == (UClass *)0x0) {
            local_res10.AddReferencedObjects = UObject::AddReferencedObjects;
            GetPrivateStaticClassBody
                      (L"/Script/MovieScene",L"MovieSceneEntitySystem",
                       &Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton,
                       StaticRegisterNativesUMovieSceneEntitySystem,0x48,8,CLASS_Intrinsic,
                       CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntitySystem>,
                       InternalVTableHelperCtorCaller<UMovieSceneEntitySystem>,&local_res10,
                       UObject::StaticClass,UObject::StaticClass);
          }
          if (pUVar4 != Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton) {
            local_res18[0] = pUVar4;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            UMovieSceneEntitySystemLinker::LinkSystemIfAllowed
                      (param_1,(TSubclassOf<UMovieSceneEntitySystem>)local_res18);
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ushort)UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum);
  }
  return;
}

// LinkCategorySystems @ 1461420b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneEntitySystem::LinkCategorySystems
          (UMovieSceneEntitySystemLinker *param_1,EEntitySystemCategory param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *this;
  UClass *pUVar5;
  ushort uVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  FUObjectCppClassStaticFunctions local_res18;
  UClass *local_res20;
  
  uVar6 = 0;
  iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
  if ((short)UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum != 0) {
    do {
      if ((int)(uint)uVar6 < *(int *)&(param_1->EntitySystemsByGlobalGraphID).field_0x28) {
        puVar1 = *(undefined1 **)&(param_1->EntitySystemsByGlobalGraphID).field_0x20;
        puVar8 = &(param_1->EntitySystemsByGlobalGraphID).field_0x10;
        if (puVar1 != (undefined1 *)0x0) {
          puVar8 = puVar1;
        }
        if ((*(uint *)(puVar8 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)
        goto LAB_146142139;
      }
      else {
LAB_146142139:
        if (iVar4 <= (int)(uint)uVar6) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(GraphID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                             ,0x4d,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum <= (int)(uint)uVar6) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        this = (UClass *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (UE::MovieScene::GlobalDependencyGraph.Nodes.AllocatorInstance.
                                    Data + (ulonglong)uVar6 * 0xc));
        if (Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton == (UClass *)0x0) {
          local_res18.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/MovieScene",L"MovieSceneEntitySystem",
                     &Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton,
                     StaticRegisterNativesUMovieSceneEntitySystem,0x48,8,CLASS_Intrinsic,
                     CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntitySystem>,
                     InternalVTableHelperCtorCaller<UMovieSceneEntitySystem>,&local_res18,
                     UObject::StaticClass,UObject::StaticClass);
        }
        iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
        if ((this != Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton) &&
           (this != (UClass *)0x0)) {
          if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(this);
          }
          pUVar7 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar7 == (UObject *)0x0) {
LAB_14614229c:
            pUVar7 = (UObject *)0x0;
          }
          else {
            pUVar5 = StaticClass();
            iVar4 = (int)pUVar5->_padding_;
            if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar5->_padding_)) goto LAB_14614229c;
          }
          iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
          if ((pUVar7 != (UObject *)0x0) &&
             ((*(EEntitySystemCategory *)&pUVar7[1].field_0x10 & param_2) != None)) {
            local_res20 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            UMovieSceneEntitySystemLinker::LinkSystemIfAllowed
                      (param_1,(TSubclassOf<UMovieSceneEntitySystem>)&local_res20);
            iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ushort)iVar4);
  }
  return;
}

// LinkRelevantSystems @ 146142320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneEntitySystem::LinkRelevantSystems(UMovieSceneEntitySystemLinker *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UMovieSceneEntitySystem *pUVar6;
  ushort uVar7;
  undefined1 *puVar8;
  
  uVar7 = 0;
  iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
  if ((short)UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum != 0) {
    do {
      if ((int)(uint)uVar7 < *(int *)&(param_1->EntitySystemsByGlobalGraphID).field_0x28) {
        puVar1 = *(undefined1 **)&(param_1->EntitySystemsByGlobalGraphID).field_0x20;
        puVar8 = &(param_1->EntitySystemsByGlobalGraphID).field_0x10;
        if (puVar1 != (undefined1 *)0x0) {
          puVar8 = puVar1;
        }
        if ((*(uint *)(puVar8 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
        goto LAB_14614238c;
      }
      else {
LAB_14614238c:
        if (iVar4 <= (int)(uint)uVar7) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(GraphID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                             ,0x4d,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum <= (int)(uint)uVar7) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pUVar5 = (UClass *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     (UE::MovieScene::GlobalDependencyGraph.Nodes.AllocatorInstance.
                                      Data + (ulonglong)uVar7 * 0xc));
        iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
        if (pUVar5 != (UClass *)0x0) {
          if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar5);
          }
          pUVar6 = (UMovieSceneEntitySystem *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar6 == (UMovieSceneEntitySystem *)0x0) {
LAB_146142456:
            pUVar6 = (UMovieSceneEntitySystem *)0x0;
          }
          else {
            pUVar5 = StaticClass();
            iVar4 = (int)pUVar5->_padding_;
            if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar5->_padding_)) goto LAB_146142456;
          }
          iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
          if ((pUVar6 != (UMovieSceneEntitySystem *)0x0) &&
             (bVar3 = UE::MovieScene::FSystemFilter::CheckSystem(&param_1->SystemFilter,pUVar6),
             iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum, bVar3)) {
            if ((((uint)pUVar6->_padding_ >> 4 & 1) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("HasAnyFlags(RF_ClassDefaultObject)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                                   ,0x2af,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6,param_1);
            iVar4 = UE::MovieScene::GlobalDependencyGraph.Nodes.ArrayNum;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ushort)iVar4);
  }
  return;
}

// PrintFilteredFlowGraph @ 14614a540

void __cdecl
UMovieSceneEntitySystem::PrintFilteredFlowGraph
          (TArrayView<TBitArray<FDefaultBitArrayAllocator>_const_,int> *param_1,
          TStringBuilderBase<wchar_t> *param_2)

{
  TArrayView<TBitArray<FDefaultBitArrayAllocator>_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UE::MovieScene::FSystemDependencyGraph::PrintFilteredFlowGraph
            (&UE::MovieScene::GlobalDependencyGraph,&local_18,param_2);
  return;
}

// RegisterCustomSystemCategory @ 14614be30

EEntitySystemCategory __cdecl UMovieSceneEntitySystem::RegisterCustomSystemCategory(void)

{
  code *pcVar1;
  bool bVar2;
  EEntitySystemCategory EVar3;
  
  EVar3 = NextCustomCategory;
  NextCustomCategory = NextCustomCategory * 2;
  if (NextCustomCategory == Last) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextCustomCategory != EEntitySystemCategory::Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x279,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return EVar3;
}

// Run @ 146152f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::Run
          (UMovieSceneEntitySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar9;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FString local_48;
  FStatMessage local_38;
  
  if (this->bSystemIsEnabled == false) {
    return;
  }
  pTVar3 = (this->StatID).StatIdPtr;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar9 = *(FName *)&pTVar3->Name;
  if ((FVar9.ComparisonIndex.Value.Value != 0) || (FVar9.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value;
        local_res20.Number = FVar9.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                   ,0x2fc);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar6 = true;
      goto LAB_14615300f;
    }
  }
  bVar6 = false;
  FVar9 = local_58;
LAB_14615300f:
  if (((this->Linker).field0_0x0.DebugPtr == (UMovieSceneEntitySystemLinker *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Linker != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                         ,0x2ff,L"Attempting to evaluate a system that has been unlinked!"), bVar8))
  {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar8 = UE::MovieScene::FSystemFilter::CheckSystem
                    (&((this->Linker).field0_0x0.DebugPtr)->SystemFilter,this);
  if (bVar8) {
    puVar2 = &(((this->Linker).field0_0x0.DebugPtr)->EntityManager).SystemSerialNumber;
    *puVar2 = *puVar2 + 1;
    if (5 < (byte)LogMovieSceneECS._0_1_) {
      local_68 = (FName)this->_padding_;
      ::FName::ToString(&local_68,&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SchedulePersistentTasks @ 1461532a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystem::SchedulePersistentTasks
          (UMovieSceneEntitySystem *this,IEntitySystemScheduler *param_1)

{
  ulong64 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bSystemIsEnabled != false) {
    if ((this->Linker).field0_0x0.DebugPtr == (UMovieSceneEntitySystemLinker *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Linker != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                         ,0x2e8,L"Attempting to evaluate a system that has been unlinked!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = UE::MovieScene::FSystemFilter::CheckSystem
                      (&((this->Linker).field0_0x0.DebugPtr)->SystemFilter,this);
    if (bVar3) {
      puVar1 = &(((this->Linker).field0_0x0.DebugPtr)->EntityManager).SystemSerialNumber;
      *puVar1 = *puVar1 + 1;
      (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
    }
  }
  return;
}

// SortByFlowOrder @ 1461551a0

void __cdecl
UMovieSceneEntitySystem::SortByFlowOrder
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder
            (&UE::MovieScene::GlobalDependencyGraph,param_1);
  return;
}

// StaticRegisterNativesUMovieSceneEntitySystem @ 1461557d0

void __cdecl UMovieSceneEntitySystem::StaticRegisterNativesUMovieSceneEntitySystem(void)

{
  return;
}

// TagGarbage @ 146156030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::TagGarbage(UMovieSceneEntitySystem *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146156033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))();
  return;
}

// Unlink @ 14615b780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystem::Unlink(UMovieSceneEntitySystem *this)

{
  uint *puVar1;
  ushort uVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  code *pcVar4;
  bool bVar5;
  ushort local_res8 [4];
  
  if (this->GraphID != 0xffff) {
    pUVar3 = (this->Linker).field0_0x0.DebugPtr;
    if ((pUVar3->SystemGraph).ReentrancyGuard != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReentrancyGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                         ,0x4a,L"Attempting to remove a system from the graph recursively.");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar1 = &(pUVar3->SystemGraph).ReentrancyGuard;
    *puVar1 = *puVar1 + 1;
    uVar2 = this->GraphID;
    if (uVar2 == 0xffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeID != TNumericLimits<uint16>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                         ,0x4f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    UE::MovieScene::FDirectedGraph::RemoveNode(&(pUVar3->SystemGraph).ReferenceGraph,uVar2);
    TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::RemoveAt
              (&(pUVar3->SystemGraph).Nodes.Array,(uint)uVar2,1);
    local_res8[0] = this->GlobalDependencyGraphID;
    this->GraphID = 0xffff;
    if (*(int *)&(pUVar3->SystemGraph).GlobalToLocalNodeIDs.field_0x8 !=
        *(int *)&(pUVar3->SystemGraph).GlobalToLocalNodeIDs.field_0x34) {
      TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_short>
                ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                  *)&(pUVar3->SystemGraph).GlobalToLocalNodeIDs,(uint)local_res8[0],local_res8);
    }
    puVar1 = &(pUVar3->SystemGraph).SerialNumber;
    *puVar1 = *puVar1 + 1;
    puVar1 = &(pUVar3->SystemGraph).ReentrancyGuard;
    *puVar1 = *puVar1 - 1;
    UE::MovieScene::FDirectedGraph::CleanUpDanglingEdges(&(pUVar3->SystemGraph).ReferenceGraph);
  }
  (**(code **)(this->_padding_ + 0x2c8))(this);
  UMovieSceneEntitySystemLinker::SystemUnlinked((this->Linker).field0_0x0.DebugPtr,this);
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  return;
}

