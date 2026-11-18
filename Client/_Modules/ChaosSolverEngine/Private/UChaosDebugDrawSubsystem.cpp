// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 19

// StaticClass @ 1463004d0

UClass * __cdecl UChaosDebugDrawSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosDebugDrawSubsystem",
               &Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.InnerSingleton,
               StaticRegisterNativesUChaosDebugDrawSubsystem,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosDebugDrawSubsystem>,
               InternalVTableHelperCtorCaller<UChaosDebugDrawSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.InnerSingleton;
}

// UChaosDebugDrawSubsystem @ 146309e90

UChaosDebugDrawSubsystem * __thiscall
UChaosDebugDrawSubsystem::UChaosDebugDrawSubsystem
          (UChaosDebugDrawSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosDebugDrawSubsystem__6B_;
  (this->CDDScene).Object = (FChaosDDScene *)0x0;
  (this->CDDScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimeline).Object = (FChaosDDTimeline *)0x0;
  (this->CDDWorldTimeline).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimelineContext).Timeline.Object = (FChaosDDTimeline *)0x0;
  (this->CDDWorldTimelineContext).Timeline.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimelineContext).PreviousFrame.Object = (FChaosDDFrame *)0x0;
  (this->CDDWorldTimelineContext).PreviousFrame.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimelineContext).bInContext = false;
  return this;
}

// UChaosDebugDrawSubsystem @ 146309ee0

UChaosDebugDrawSubsystem * __thiscall
UChaosDebugDrawSubsystem::UChaosDebugDrawSubsystem(UChaosDebugDrawSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UChaosDebugDrawSubsystem__6B_;
  (this->CDDScene).Object = (FChaosDDScene *)0x0;
  (this->CDDScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimeline).Object = (FChaosDDTimeline *)0x0;
  (this->CDDWorldTimeline).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimelineContext).Timeline.Object = (FChaosDDTimeline *)0x0;
  (this->CDDWorldTimelineContext).Timeline.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimelineContext).PreviousFrame.Object = (FChaosDDFrame *)0x0;
  (this->CDDWorldTimelineContext).PreviousFrame.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CDDWorldTimelineContext).bInContext = false;
  return this;
}

// ~UChaosDebugDrawSubsystem @ 14630b250

void __thiscall UChaosDebugDrawSubsystem::~UChaosDebugDrawSubsystem(UChaosDebugDrawSubsystem *this)

{
  this->_padding_ = (longlong)&___7UChaosDebugDrawSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDWorldTimelineContext).PreviousFrame.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDWorldTimelineContext).Timeline.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDWorldTimeline).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDScene).SharedReferenceCount.ReferenceController);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// Deinitialize @ 146310020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosDebugDrawSubsystem::Deinitialize(UChaosDebugDrawSubsystem *this)

{
  FChaosDDScene *this_00;
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UWorld *pUVar3;
  FChaosDDWorldManager *lpCriticalSection;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar3 != (UWorld *)0x0) &&
     (this_00 = (this->CDDScene).Object, this_00 != (FChaosDDScene *)0x0)) {
    bVar2 = ChaosDD::Private::FChaosDDScene::IsServer(this_00);
    if (bVar2) {
      lpCriticalSection = FChaosDDWorldManager::Get();
      if (lpCriticalSection != (FChaosDDWorldManager *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pTVar1 = (lpCriticalSection->CDDServerScene).SharedReferenceCount.ReferenceController;
        (lpCriticalSection->CDDServerScene).Object = (FChaosDDScene *)0x0;
        (lpCriticalSection->CDDServerScene).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  return;
}

// GetPrivateStaticClass @ 146313630

UClass * __cdecl UChaosDebugDrawSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosDebugDrawSubsystem",
               &Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.InnerSingleton,
               StaticRegisterNativesUChaosDebugDrawSubsystem,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosDebugDrawSubsystem>,
               InternalVTableHelperCtorCaller<UChaosDebugDrawSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.InnerSingleton;
}

// OnWorldTickEnd @ 1463191e0

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
UChaosDebugDrawSubsystem::OnWorldTickEnd
          (UChaosDebugDrawSubsystem *this,ELevelTick param_1,float param_2)

{
  FChaosDDScene *this_00;
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar1 != (UWorld *)0x0) {
    ChaosDD::Private::FChaosDDTimelineContext::EndFrame(&this->CDDWorldTimelineContext);
    this_00 = (this->CDDScene).Object;
    if (this_00 != (FChaosDDScene *)0x0) {
      ChaosDD::Private::FChaosDDScene::SetCommandBudget(this_00,ChaosDebugDraw_MaxElements);
    }
    UpdateDrawRegion(this);
    RenderScene(this);
    return;
  }
  return;
}

// OnWorldTickStart @ 146319240

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
UChaosDebugDrawSubsystem::OnWorldTickStart
          (UChaosDebugDrawSubsystem *this,ELevelTick param_1,float param_2)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar1 != (UWorld *)0x0) {
    ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled = bChaosDebugDraw_Enabled;
    ChaosDD::Private::FChaosDDTimelineContext::BeginFrame
              (&this->CDDWorldTimelineContext,&this->CDDWorldTimeline,pUVar1->TimeSeconds,
               (double)param_2);
  }
  return;
}

// PostInitialize @ 146319340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosDebugDrawSubsystem::PostInitialize(UChaosDebugDrawSubsystem *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FChaosDDScene *pFVar10;
  undefined1 auStackY_1a8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FChaosDDScene *local_148;
  FSharedReferencer<1> local_140;
  FName local_138;
  FName local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> local_e8;
  FStringFormatArg local_d8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar6 == (UWorld *)0x0) {
    return;
  }
  local_138 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_138,&local_108);
  FStringFormatArg::FStringFormatArg(&local_d8,&local_108);
  FStringFormatArg::FStringFormatArg(&local_b8,L"Client");
  local_168.ArrayNum = 2;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_168.AllocatorInstance,2,&local_168.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_168.AllocatorInstance.Data,&local_d8,2);
  ::FString::FormatImpl(&local_118,L"{0} {1}",&local_168);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  pTVar7 = ::operator_new(0x90);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FChaosDDScene *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFChaosDDScene_Private_ChaosDD___00_SharedPointerInternals__6B_
    ;
    ChaosDD::Private::FChaosDDScene::FChaosDDScene((FChaosDDScene *)(pTVar7 + 1),&local_118,false);
    pFVar10 = (FChaosDDScene *)(pTVar7 + 1);
    pTVar9 = pTVar7;
    if (pFVar10 == (FChaosDDScene *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146319566;
    }
  }
  if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar10->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_146319566:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_148 = pFVar10;
  local_140.ReferenceController = pTVar9;
  if (&this->CDDScene != (TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *)&local_148) {
    (this->CDDScene).Object = pFVar10;
    local_148 = (FChaosDDScene *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CDDScene).SharedReferenceCount,&local_140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_130 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_130,&local_f8);
  FStringFormatArg::FStringFormatArg(&local_98,&local_f8);
  FStringFormatArg::FStringFormatArg(&local_78,L"Client");
  FStringFormatArg::FStringFormatArg(&local_58,L"Game Frame");
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_158.AllocatorInstance,3,&local_158.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_158.AllocatorInstance.Data,&local_98,3);
  ::FString::FormatImpl(&local_128,L"{0} {1} {2}",&local_158);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
  if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
  }
  if (((this->CDDScene).Object == (FChaosDDScene *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = ChaosDD::Private::FChaosDDScene::CreateTimeline
                     ((this->CDDScene).Object,&local_e8,&local_128);
  if (&this->CDDWorldTimeline != pTVar8) {
    (this->CDDWorldTimeline).Object = pTVar8->Object;
    pTVar8->Object = (FChaosDDTimeline *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CDDWorldTimeline).SharedReferenceCount,&pTVar8->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (pUVar6->PhysicsScene != (FPhysScene_Chaos *)0x0) {
    FChaosScene::SetDebugDrawScene((FChaosScene *)pUVar6->PhysicsScene,&this->CDDScene);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderFrame @ 14631ccf0

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
UChaosDebugDrawSubsystem::RenderFrame
          (UChaosDebugDrawSubsystem *this,FChaosDDRenderer *param_1,
          TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FChaosDDFrame *pFVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FLatentDrawCommand *pFVar10;
  FLatentDrawCommand *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34;
  int local_30 [2];
  
  if ((!ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) ||
     (pFVar6 = param_2->Object, pFVar6 == (FChaosDDFrame *)0x0)) {
    return;
  }
  pFVar1 = &pFVar6->CommandsCS;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    iVar2 = (pFVar6->Commands).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if ((param_2->Object == (FChaosDDFrame *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar6 = param_2->Object;
    pFVar1 = &pFVar6->CommandsCS;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      iVar3 = (pFVar6->LatentCommands).ArrayNum;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if (iVar3 + iVar2 < 1) {
        return;
      }
      if (6 < (byte)LogChaosDD._0_1_) {
        if ((param_2->Object == (FChaosDDFrame *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = param_2->Object;
        pFVar1 = &pFVar6->CommandsCS;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14631d014:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        iVar2 = (pFVar6->LatentCommands).ArrayNum;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        local_34 = iVar2;
        if ((param_2->Object == (FChaosDDFrame *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = param_2->Object;
        pFVar1 = &pFVar6->CommandsCS;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14631d014;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        iVar2 = (pFVar6->Commands).ArrayNum;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        local_30[0] = iVar2;
        if ((param_2->Object == (FChaosDDFrame *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,int,int>
                  ((FLogCategoryBase *)&LogChaosDD,&::LOG_Static,&param_2->Object->Name,local_30,
                   &local_34);
      }
      pFVar6 = TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>::operator->(param_2);
      pFVar1 = &pFVar6->CommandsCS;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        iVar2 = (pFVar6->LatentCommands).ArrayNum;
        pFVar10 = (FLatentDrawCommand *)(pFVar6->LatentCommands).AllocatorInstance.Data;
        pFVar11 = pFVar10 + iVar2;
        while( true ) {
          if ((pFVar6->LatentCommands).ArrayNum != iVar2) {
            `TCheckedPointerIterator<Chaos::FLatentDrawCommand,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res20);
          }
          if (pFVar10 == pFVar11) break;
          if (bChaosDebugDraw_DrawMode != 1) {
            DebugDrawChaosCommand(param_1->World,pFVar10);
          }
          if (bChaosDebugDraw_DrawMode != 0) {
            VisLogChaosCommand(pFVar10->TestBaseActor,pFVar10);
          }
          pFVar10 = pFVar10 + 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        pFVar6 = TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>::operator->(param_2);
        pFVar1 = &pFVar6->CommandsCS;
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          iVar2 = (pFVar6->Commands).ArrayNum;
          pFVar9 = (pFVar6->Commands).AllocatorInstance.Data;
          pFVar12 = pFVar9 + (longlong)iVar2 * 0x30;
          while( true ) {
            if ((pFVar6->Commands).ArrayNum != iVar2) {
              `TCheckedPointerIterator<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_38);
            }
            if (pFVar9 == pFVar12) break;
            UE::Core::Private::Function::CheckCallable(*(void **)pFVar9);
            pcVar4 = *(code **)pFVar9;
            pFVar8 = pFVar9 + 0x10;
            if (*(FScriptContainerElement **)(pFVar9 + 0x28) != (FScriptContainerElement *)0x0) {
              pFVar8 = *(FScriptContainerElement **)(pFVar9 + 0x28);
            }
            uVar7 = (**(code **)(*(longlong *)pFVar8 + 8))();
            (*pcVar4)(uVar7,param_1);
            pFVar9 = pFVar9 + 0x30;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RenderScene @ 14631d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UChaosDebugDrawSubsystem::RenderScene
          (UChaosDebugDrawSubsystem *this,FChaosDDRenderer *param_1,
          TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *param_2)

{
  FChaosDDFrame *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  atomic<int> aVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  TReferenceControllerBase<1> *pTVar10;
  FChaosDDTimeline *pFVar11;
  ForAnyElementType FVar12;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar13;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_110;
  TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_> local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((param_2->Object != (FChaosDDScene *)0x0) &&
     (bVar6 = ChaosDD::Private::FChaosDDScene::IsRenderEnabled(param_2->Object), bVar6)) {
    if ((param_2->Object == (FChaosDDScene *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ChaosDD::Private::FChaosDDScene::GetLatestFrames(param_2->Object,&local_100);
    iVar5 = local_100.ArrayNum;
    fVar4 = __real_3f800000;
    pTVar13 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)
              (local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 0x10);
    FVar12.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      if (local_100.ArrayNum != iVar5) {
        local_118[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_118);
      }
      if ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data == pTVar13) break;
      RenderFrame(this,param_1,(TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data);
      if ((((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object ==
           (FChaosDDFrame *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object;
      if ((pFVar1->CommandBudget < pFVar1->CommandCost) && (0 < pFVar1->CommandBudget)) {
        if ((pFVar1 == (FChaosDDFrame *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object;
        pFVar11 = (FChaosDDTimeline *)0x0;
        pTVar10 = (pFVar1->Timeline).WeakReferenceCount.ReferenceController;
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14631d434:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          aVar3 = pTVar10->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar10 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14631d434;
            }
            LOCK();
            aVar7 = pTVar10->SharedReferenceCount;
            bVar6 = aVar3 == aVar7;
            if (bVar6) {
              pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar7 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar7;
          } while (!bVar6);
          pFVar11 = (pFVar1->Timeline).Object;
          if (pFVar11 == (FChaosDDTimeline *)0x0) goto LAB_14631d434;
        }
        pFVar8 = ::FString::FString(&local_d0,&pFVar11->Name);
        FStringFormatArg::FStringFormatArg(&local_b8,pFVar8);
        if ((((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object ==
             (FChaosDDFrame *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FStringFormatArg::FStringFormatArg
                  (&local_98,
                   ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object->
                   CommandCost);
        if ((((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object ==
             (FChaosDDFrame *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FStringFormatArg::FStringFormatArg
                  (&local_78,
                   ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)FVar12.Data)->Object->
                   CommandBudget);
        local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.ArrayNum = 3;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,3,0,&local_110.AllocatorInstance,3,&local_110.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_110.AllocatorInstance.Data,&local_b8,3);
        ::FString::FormatImpl
                  (&local_f0,L"Debug Draw Capture Budget Exceeded for {0} [{1} / {2}]",&local_110);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
        if ((FStringFormatArg *)local_110.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar9.Data = local_f0.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_e0,(wchar_t *)FVar9.Data);
        UEngine::AddOnScreenDebugMessage
                  (GEngine,0x526af6d,fVar4,FColor::Red,&local_e0,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,int>
              ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)local_100.AllocatorInstance.Data,
               local_100.ArrayNum);
    if ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)local_100.AllocatorInstance.Data !=
        (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  return;
}

// RenderScene @ 14631d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosDebugDrawSubsystem::RenderScene(UChaosDebugDrawSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UWorld *this_00;
  TSphere<double> *pTVar4;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar5;
  FChaosDDWorldManager *lpCriticalSection;
  FChaosDDScene *pFVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_158 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_118;
  FChaosDDRenderer local_108;
  FString local_c8;
  FString local_b8;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> local_a8;
  FString local_98;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((((this_00 != (UWorld *)0x0) &&
       (pFVar6 = (this->CDDScene).Object, pFVar6 != (FChaosDDScene *)0x0)) &&
      (bVar2 = ChaosDD::Private::FChaosDDScene::IsServer(pFVar6), !bVar2)) &&
     (bVar2 = UWorld::IsPaused(this_00), !bVar2)) {
    if (((this->CDDScene).Object == (FChaosDDScene *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = ChaosDD::Private::FChaosDDScene::GetCommandBudget((this->CDDScene).Object);
    if (((this->CDDScene).Object == (FChaosDDScene *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar4 = ChaosDD::Private::FChaosDDScene::GetDrawRegion((this->CDDScene).Object);
    local_108._padding_ = (longlong)&___7FChaosDDRenderer__6B_;
    local_108.DrawRegion.Center.field0_0x0._s_0.X = (pTVar4->Center).field0_0x0._s_0.X;
    local_108.DrawRegion.Center.field0_0x0._s_0.Y = (pTVar4->Center).field0_0x0._s_0.Y;
    local_108.DrawRegion.Center.field0_0x0._s_0.Z = (pTVar4->Center).field0_0x0._s_0.Z;
    local_108.DrawRegion.W = pTVar4->W;
    local_108.RenderCost = 0;
    local_108.SphereSegments = 8;
    local_108.DepthPriority = '\n';
    local_108.bIsServer = false;
    local_108.World = this_00;
    local_108.RenderBudget = iVar3;
    pTVar5 = ChaosDD::Private::FChaosDDContext::ExtractGlobalFrame(&local_a8);
    RenderFrame(this,&local_108,pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    RenderScene(this,&local_108,&this->CDDScene);
    local_108.bIsServer = true;
    lpCriticalSection = FChaosDDWorldManager::Get();
    if (lpCriticalSection == (FChaosDDWorldManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    RenderScene(this,&local_108,&lpCriticalSection->CDDServerScene);
    local_108._60_2_ = local_108._60_2_ & 0xff;
    if ((local_108.RenderBudget < local_108.RenderCost) && (0 < local_108.RenderBudget)) {
      pFVar6 = TSharedPtr<ChaosDD::Private::FChaosDDScene,1>::operator->(&this->CDDScene);
      pFVar7 = ::FString::FString(&local_98,&pFVar6->Name);
      FStringFormatArg::FStringFormatArg(&local_88,pFVar7);
      FStringFormatArg::FStringFormatArg(&local_68,local_108.RenderCost);
      FStringFormatArg::FStringFormatArg(&local_48,local_108.RenderBudget);
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,0,&local_118.AllocatorInstance,3,&local_118.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_118.AllocatorInstance.Data,&local_88,3);
      ::FString::FormatImpl
                (&local_c8,L"Debug Draw Render Budget Exceeded for {0} [{1} / {2}]",&local_118);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if ((FStringFormatArg *)local_118.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar8.Data = local_c8.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_b8,(wchar_t *)FVar8.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,0x526af6e,__real_3f800000,FColor::Red,&local_b8,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14631f8a0

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
UChaosDebugDrawSubsystem::ShouldCreateSubsystem(UChaosDebugDrawSubsystem *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  char cVar4;
  FStaticLogRecord *pFVar5;
  FName local_res10 [3];
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
LAB_14631f991:
    bVar2 = UWorldSubsystem::ShouldCreateSubsystem((UWorldSubsystem *)this,param_1);
    return bVar2;
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) goto LAB_14631f991;
  bVar2 = UWorld::IsPreviewWorld((UWorld *)param_1);
  if (PRIVATE_GIsRunningCommandlet == false) {
    cVar4 = '\x01';
    if (bVar2) {
      cVar4 = Chaos::CVars::bChaosDebugDraw_PreviewWorldsEnabled;
    }
    if (cVar4 != '\0') {
      bVar2 = true;
      if ((byte)LogChaosDD._0_1_ < 5) {
        return true;
      }
      local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
      pFVar5 = &::LOG_Static;
      goto LAB_14631f962;
    }
  }
  bVar2 = false;
  if ((byte)LogChaosDD._0_1_ < 6) {
    return false;
  }
  local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res10[0].Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(local_res10,&local_18);
  pFVar5 = &::LOG_Static;
LAB_14631f962:
  UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString>
            ((FLogCategoryBase *)&LogChaosDD,pFVar5,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Shutdown @ 14631f9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UChaosDebugDrawSubsystem::Shutdown(void)

{
  if (4 < (byte)LogChaosDD._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
              ((FLogCategoryBase *)&LogChaosDD,&::LOG_Static);
  }
  if (OnTickWorldStartDelegate.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPreActorTick,OnTickWorldStartDelegate);
  }
  if (OnTickWorldEndDelegate.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPostActorTick,OnTickWorldEndDelegate);
    return;
  }
  return;
}

// Startup @ 1463200e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UChaosDebugDrawSubsystem::Startup(void)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  if (4 < (byte)LogChaosDD._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
              ((FLogCategoryBase *)&LogChaosDD,&::LOG_Static);
  }
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldPreActorTick,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnTickWorldStartDelegate.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldPostActorTick,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnTickWorldEndDelegate.ID = *FVar1.ID;
  return;
}

// StaticOnWorldTickEnd @ 146320160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosDebugDrawSubsystem::StaticOnWorldTickEnd(UWorld *param_1,ELevelTick param_2,float param_3)

{
  FChaosDDScene *this;
  UChaosDebugDrawSubsystem *this_00;
  UWorld *pUVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId574,"UChaosDebugDrawSubsystem::StaticOnWorldTickEnd",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosDebugDrawSubsystem.cpp"
               ,0x23e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
  }
  this_00 = UWorld::GetSubsystem<UChaosDebugDrawSubsystem>(param_1);
  if ((this_00 != (UChaosDebugDrawSubsystem *)0x0) &&
     (pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00), pUVar1 != (UWorld *)0x0)) {
    ChaosDD::Private::FChaosDDTimelineContext::EndFrame(&this_00->CDDWorldTimelineContext);
    this = (this_00->CDDScene).Object;
    if (this != (FChaosDDScene *)0x0) {
      ChaosDD::Private::FChaosDDScene::SetCommandBudget(this,ChaosDebugDraw_MaxElements);
    }
    UpdateDrawRegion(this_00);
    RenderScene(this_00);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StaticOnWorldTickStart @ 146320220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosDebugDrawSubsystem::StaticOnWorldTickStart(UWorld *param_1,ELevelTick param_2,float param_3)

{
  UChaosDebugDrawSubsystem *this;
  UWorld *pUVar1;
  
  this = UWorld::GetSubsystem<UChaosDebugDrawSubsystem>(param_1);
  if (this != (UChaosDebugDrawSubsystem *)0x0) {
    pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (pUVar1 != (UWorld *)0x0) {
      ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled = bChaosDebugDraw_Enabled;
      ChaosDD::Private::FChaosDDTimelineContext::BeginFrame
                (&this->CDDWorldTimelineContext,&this->CDDWorldTimeline,pUVar1->TimeSeconds,
                 (double)param_3);
    }
  }
  return;
}

// StaticRegisterNativesUChaosDebugDrawSubsystem @ 1463202e0

void __cdecl UChaosDebugDrawSubsystem::StaticRegisterNativesUChaosDebugDrawSubsystem(void)

{
  return;
}

// UpdateDrawRegion @ 146321ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosDebugDrawSubsystem::UpdateDrawRegion(UChaosDebugDrawSubsystem *this)

{
  FChaosDDScene *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  UWorld *this_00;
  TSphere<double> *pTVar14;
  APlayerController *pAVar15;
  TVector<double> *pTVar16;
  FName *pFVar17;
  AActor *pAVar18;
  FChaosDDWorldManager *lpCriticalSection;
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_4b8 [32];
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_440;
  double local_428;
  double local_420;
  double local_418;
  TVector<double>_u_0 local_410;
  double dStack_3f8;
  TStatId local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined1 uStack_3cc;
  undefined2 uStack_3cb;
  undefined1 uStack_3c9;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  TVector<double>_u_0 local_3b0;
  double local_398;
  double local_390;
  FName local_388;
  FName local_380;
  TVector<double>_u_0 local_378;
  TRotator<double> local_360;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  TVector<double> local_2c8;
  FHitResult local_2a8;
  TMatrix<double> local_1a8;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_00 == (UWorld *)0x0) {
    return;
  }
  ChaosDD::Private::FChaosDDTimelineContext::EndFrame(&this->CDDWorldTimelineContext);
  pFVar1 = (this->CDDScene).Object;
  if (pFVar1 == (FChaosDDScene *)0x0) {
    return;
  }
  pTVar14 = ChaosDD::Private::FChaosDDScene::GetDrawRegion(pFVar1);
  uVar24 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
  uVar23 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
  uVar22 = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
  uVar21 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
  local_410._s_0.X = (pTVar14->Center).field0_0x0._s_0.X;
  local_410._s_0.Y = (pTVar14->Center).field0_0x0._s_0.Y;
  local_410._s_0.Z = (pTVar14->Center).field0_0x0._s_0.Z;
  dStack_3f8 = pTVar14->W;
  if (bChaosDebugDraw_SingleActor == false) {
    dStack_3f8 = (double)ChaosDebugDraw_Radius;
    if (0 < (this_00->ViewLocationsRenderedLastFrame).ArrayNum) {
      pFVar2 = (this_00->ViewLocationsRenderedLastFrame).AllocatorInstance.Data;
      local_410._s_0.X = (double)*(undefined8 *)pFVar2;
      local_410._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
      local_410._s_0.Z = (double)*(undefined8 *)(pFVar2 + 0x10);
    }
  }
  else {
    local_440._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_440._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_440._s_0.Z = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    bVar13 = false;
    local_418 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    pAVar15 = UEngine::GetFirstLocalPlayerController(GEngine,this_00);
    pAVar18 = (AActor *)0x0;
    if (pAVar15 != (APlayerController *)0x0) {
      (**(code **)(pAVar15->_padding_ + 0x840))(pAVar15,&local_440,&local_360);
      pTVar16 = UE::Math::TRotator<double>::Vector(&local_360,&local_2c8);
      bVar13 = true;
      local_418 = (pTVar16->field0_0x0)._s_0.Z;
      uVar21 = *(undefined4 *)&pTVar16->field0_0x0;
      uVar22 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 4);
      uVar23 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 8);
      uVar24 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 0xc);
      pAVar18 = (AActor *)0x0;
      if ((AActor *)pAVar15->_padding_ != (AActor *)0x0) {
        pAVar18 = (AActor *)pAVar15->_padding_;
      }
    }
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar8 = CONCAT44(uVar24,uVar23);
    uVar6 = CONCAT44(uVar22,uVar21);
    if ((this_00->CachedViewInfoRenderedLastFrame).ArrayNum < 1) {
      if (!bVar13) goto LAB_14632210d;
      uVar23 = SUB84(local_440._s_0.Z,0);
      uVar24 = (undefined4)((ulonglong)local_440._16_8_ >> 0x20);
      uVar21 = local_440._8_4_;
      uVar22 = local_440._12_4_;
    }
    else {
      pFVar2 = (this_00->CachedViewInfoRenderedLastFrame).AllocatorInstance.Data;
      uVar6 = *(undefined8 *)(pFVar2 + 0x1c0);
      uVar8 = *(undefined8 *)(pFVar2 + 0x1c8);
      uVar7 = *(undefined8 *)(pFVar2 + 0x1d0);
      uStack_2f0 = *(undefined8 *)(pFVar2 + 0x1d8);
      local_348 = *(undefined8 *)(pFVar2 + 0x180);
      uStack_340 = *(undefined8 *)(pFVar2 + 0x188);
      local_338 = *(undefined8 *)(pFVar2 + 400);
      uStack_330 = *(undefined8 *)(pFVar2 + 0x198);
      auVar20 = *(undefined1 (*) [16])(pFVar2 + 0x1e0);
      uVar21 = auVar20._8_4_;
      uVar22 = auVar20._12_4_;
      uVar23 = *(undefined4 *)(pFVar2 + 0x1f0);
      uVar24 = *(undefined4 *)(pFVar2 + 500);
      dVar9 = *(double *)(pFVar2 + 0x1f0);
      uStack_2d0 = *(undefined4 *)(pFVar2 + 0x1f8);
      uStack_2cc = *(undefined4 *)(pFVar2 + 0x1fc);
      local_328 = *(undefined8 *)(pFVar2 + 0x1a0);
      uStack_320 = *(undefined8 *)(pFVar2 + 0x1a8);
      local_318 = *(undefined8 *)(pFVar2 + 0x1b0);
      uStack_310 = *(undefined8 *)(pFVar2 + 0x1b8);
      dVar19 = (double)uVar6 * (double)uVar6 + (double)uVar8 * (double)uVar8 +
               (double)uVar7 * (double)uVar7;
      local_308 = (double)uVar6;
      dStack_300 = (double)uVar8;
      local_2f8 = (double)uVar7;
      local_2e8 = auVar20;
      local_2d8 = uVar23;
      uStack_2d4 = uVar24;
      if (dVar19 == __real_3ff0000000000000) {
        local_458._0_8_ = uVar6;
        local_458._8_8_ = uVar8;
        local_458._16_8_ = uVar7;
        UE::Math::TRotationMatrix<double>::MakeFromX(&local_1a8,(TVector<double> *)&local_458._s_0);
        local_3b8 = (double)uVar7;
      }
      else if (__real_3e45798ee0000000 <= dVar19) {
        local_398 = __real_3ff0000000000000 / SQRT(dVar19);
        local_458._s_0.X = (double)uVar6 * local_398;
        local_458._s_0.Z = (double)uVar7 * local_398;
        local_458._s_0.Y = (double)uVar8 * local_398;
        UE::Math::TRotationMatrix<double>::MakeFromX(&local_1a8,(TVector<double> *)&local_458._s_0);
        local_390 = __real_3ff0000000000000 / SQRT(dVar19);
        uVar6 = (double)uVar6 * local_390;
        uVar8 = (double)uVar8 * local_390;
        uVar7 = (double)uVar7 * local_390;
        local_3b8 = (double)uVar7;
      }
      else {
        local_458._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_458._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_458._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        UE::Math::TRotationMatrix<double>::MakeFromX(&local_1a8,(TVector<double> *)&local_458._s_0);
        uVar6 = uVar10;
        uVar7 = uVar12;
        uVar8 = uVar11;
      }
      local_440._s_0.X = (double)auVar20._0_8_;
      local_440._s_0.Z = dVar9;
      local_418 = (double)uVar7;
    }
    dVar19 = (double)ChaosDebugDraw_SingleActorTraceLength;
    local_440._8_4_ = uVar21;
    local_440._12_4_ = uVar22;
    local_378._8_4_ = uVar21;
    local_378._0_8_ = local_440._s_0.X;
    local_378._12_4_ = uVar22;
    local_378._s_0.Z = local_440._s_0.Z;
    local_3b0._s_0.X = (double)uVar6 * dVar19 + local_440._s_0.X;
    local_3b0._s_0.Y = (double)uVar8 * dVar19 + (double)CONCAT44(uVar22,uVar21);
    local_3b0._s_0.Z = local_418 * dVar19 + (double)CONCAT44(uVar24,uVar23);
    memset(&local_2a8,0,0x100);
    uStack_3cb = 0;
    uStack_3c9 = 0;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0xffffffff;
    uStack_3cc = 0;
    local_2a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_2a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_2a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_2a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_2a8.Time = 1.0;
    local_2a8.HitObjectHandle.InstanceIndex = -1;
    local_2a8.HitObjectHandle.ResolutionStatus = Invalid;
    local_2a8.HitObjectHandle._29_3_ = 0;
    local_2a8.MyItem = -1;
    local_2a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_ChaosDebugVisibilityTrace =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UChaosDebugDrawSubsystem::UpdateDrawRegion(void)_::_25_::<lambda_2>::operator()(void)const_::_2_::FStat_ChaosDebugVisibilityTrace>
            )0x0;
      pFVar17 = ::FName::FName(&local_388,"ChaosDebugVisibilityTrace");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ChaosDebugVisibilityTrace,*pFVar17,
                 L"ChaosDebugVisibilityTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_3f0.StatIdPtr = (TStatIdData *)StatPtr_ChaosDebugVisibilityTrace;
    if (StatPtr_ChaosDebugVisibilityTrace ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UChaosDebugDrawSubsystem::UpdateDrawRegion(void)_::_25_::<lambda_2>::operator()(void)const_::_2_::FStat_ChaosDebugVisibilityTrace>
         )0x0) {
      pFVar17 = ::FName::FName(&local_380,"ChaosDebugVisibilityTrace");
      local_3f0.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_ChaosDebugVisibilityTrace,*pFVar17,
                      L"ChaosDebugVisibilityTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"ChaosDebugVisibilityTrace");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_128,::StaticName,&local_3f0,true,pAVar18);
    bVar13 = UWorld::LineTraceSingleByChannel
                       (this_00,&local_2a8,(TVector<double> *)&local_378._s_0,
                        (TVector<double> *)&local_3b0._s_0,ECC_Visibility,&local_128,
                        &FCollisionResponseParams::DefaultResponseParam);
    if ((bVar13) &&
       (pAVar18 = FActorInstanceHandle::FetchActor(&local_2a8.HitObjectHandle),
       pAVar18 != (AActor *)0x0)) {
      pAVar18 = FActorInstanceHandle::FetchActor(&local_2a8.HitObjectHandle);
      (**(code **)(pAVar18->_padding_ + 0x358))(pAVar18,1,&local_3c8,&local_428);
      local_410._s_0.X = local_3c8;
      local_410._s_0.Y = dStack_3c0;
      local_410._s_0.Z = local_3b8;
      auVar20._0_8_ = local_428 * local_428 + local_420 * local_420 + local_418 * local_418;
      auVar20._8_8_ = 0;
      auVar20 = sqrtpd(auVar20,auVar20);
      dVar19 = auVar20._0_8_;
      if ((double)ChaosDebugDraw_SingleActorMaxRadius <= auVar20._0_8_) {
        dVar19 = (double)ChaosDebugDraw_SingleActorMaxRadius;
      }
      dStack_3f8 = (double)(float)dVar19;
    }
    if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
LAB_14632210d:
  if (((this->CDDScene).Object == (FChaosDDScene *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ChaosDD::Private::FChaosDDScene::SetDrawRegion
            ((this->CDDScene).Object,(TSphere<double> *)&local_410._s_0);
  lpCriticalSection = FChaosDDWorldManager::Get();
  if (lpCriticalSection != (FChaosDDWorldManager *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (lpCriticalSection->CDDServerScene).Object;
    pTVar4 = (lpCriticalSection->CDDServerScene).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FChaosDDScene *)0x0) {
      ChaosDD::Private::FChaosDDScene::SetDrawRegion(pFVar1,(TSphere<double> *)&local_410._s_0);
      ChaosDD::Private::FChaosDDScene::SetCommandBudget(pFVar1,ChaosDebugDraw_MaxElements);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

