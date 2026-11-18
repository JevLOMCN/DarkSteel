// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// GetAnalysisService @ 14d491620

TSharedPtr<TraceServices::IAnalysisService,1> * __thiscall
FTraceServicesModule::GetAnalysisService
          (FTraceServicesModule *this,
          TSharedPtr<TraceServices::IAnalysisService,1> *__return_storage_ptr__)

{
  TSharedPtr<TraceServices::FAnalysisService,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<TraceServices::FAnalysisService,1> *pTVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FAnalysisService *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<TraceServices::FAnalysisService,1> local_28;
  
  pTVar1 = &this->AnalysisService;
  if ((this->AnalysisService).Object == (FAnalysisService *)0x0) {
    (**(code **)(this->_padding_ + 0x48))(this,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FLLMScope::FLLMScope
              (local_res8,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,
               true);
    local_res10 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
    FMemScope::FMemScope(local_res18,&local_res10,true);
    pTVar3 = MakeShared<TraceServices::FAnalysisService,1,TraceServices::FModuleService_&>
                       (&local_28,(this->ModuleService).Object);
    local_30.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
    local_38 = pTVar3->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<TraceServices::FAnalysisService,1> *)&local_38) {
      pTVar1->Object = local_38;
      local_38 = (FAnalysisService *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AnalysisService).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  __return_storage_ptr__->Object = (IAnalysisService *)pTVar1->Object;
  pTVar2 = (this->AnalysisService).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetModuleService @ 14d491740

TSharedPtr<TraceServices::IModuleService,1> * __thiscall
FTraceServicesModule::GetModuleService
          (FTraceServicesModule *this,
          TSharedPtr<TraceServices::IModuleService,1> *__return_storage_ptr__)

{
  TSharedPtr<TraceServices::FModuleService,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<TraceServices::FModuleService,1> *pTVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  FModuleService *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<TraceServices::FModuleService,1> local_18;
  
  pTVar1 = &this->ModuleService;
  if ((this->ModuleService).Object == (FModuleService *)0x0) {
    FLLMScope::FLLMScope
              (local_res8,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,
               true);
    local_res10 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
    FMemScope::FMemScope(&local_res18,&local_res10,true);
    pTVar3 = MakeShared<TraceServices::FModuleService,1>(&local_18);
    local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
    local_28 = pTVar3->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<TraceServices::FModuleService,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FModuleService *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ModuleService).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  __return_storage_ptr__->Object = (IModuleService *)pTVar1->Object;
  pTVar2 = (this->ModuleService).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// CreateAnalysisService @ 14d491840

TSharedPtr<TraceServices::IAnalysisService,1> * __thiscall
FTraceServicesModule::CreateAnalysisService
          (FTraceServicesModule *this,
          TSharedPtr<TraceServices::IAnalysisService,1> *__return_storage_ptr__)

{
  TSharedPtr<TraceServices::FAnalysisService,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<TraceServices::IAnalysisService,1> *pTVar5;
  TSharedRef<TraceServices::FAnalysisService,1> *pTVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FAnalysisService *local_48;
  FSharedReferencer<1> local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TSharedRef<TraceServices::FAnalysisService,1> local_28;
  
  pTVar1 = &this->AnalysisService;
  if ((this->AnalysisService).Object != (FAnalysisService *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AnalysisService.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\TraceServicesModule.cpp"
                       ,0x4e,L"A AnalysisService already exists.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<TraceServices::IAnalysisService,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (**(code **)(this->_padding_ + 0x48))(this,local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,true)
  ;
  local_res10 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  pTVar6 = MakeShared<TraceServices::FAnalysisService,1,TraceServices::FModuleService_&>
                     (&local_28,(this->ModuleService).Object);
  local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_48 = pTVar6->Object;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<TraceServices::FAnalysisService,1> *)&local_48) {
    pTVar1->Object = local_48;
    local_48 = (FAnalysisService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AnalysisService).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  __return_storage_ptr__->Object = (IAnalysisService *)pTVar1->Object;
  pTVar2 = (this->AnalysisService).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// CreateModuleService @ 14d491990

TSharedPtr<TraceServices::IModuleService,1> * __thiscall
FTraceServicesModule::CreateModuleService
          (FTraceServicesModule *this,
          TSharedPtr<TraceServices::IModuleService,1> *__return_storage_ptr__)

{
  TSharedPtr<TraceServices::FModuleService,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<TraceServices::IModuleService,1> *pTVar5;
  TSharedRef<TraceServices::FModuleService,1> *pTVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  FModuleService *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<TraceServices::FModuleService,1> local_18;
  
  pTVar1 = &this->ModuleService;
  if ((this->ModuleService).Object != (FModuleService *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ModuleService.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\TraceServicesModule.cpp"
                       ,0x5b,L"A ModuleService already exists.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<TraceServices::IModuleService,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,true)
  ;
  local_res10 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  pTVar6 = MakeShared<TraceServices::FModuleService,1>(&local_18);
  local_20.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_28 = pTVar6->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<TraceServices::FModuleService,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FModuleService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModuleService).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  __return_storage_ptr__->Object = (IModuleService *)pTVar1->Object;
  pTVar2 = (this->ModuleService).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// StartupModule @ 14d491ab0

void __thiscall FTraceServicesModule::StartupModule(FTraceServicesModule *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModularFeatures *pIVar3;
  FTraceServicesModule *pFVar4;
  FTraceServicesModule *pFVar5;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,true)
  ;
  local_res10 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  pFVar2 = ::FName::FName(&local_res10,"TraceAnalysis");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  pIVar3 = IModularFeatures::Get();
  pFVar4 = (FTraceServicesModule *)0x0;
  pFVar5 = (FTraceServicesModule *)&this->LoadTimeProfilerModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffd8) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->CountersModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffc0) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->NetProfilerModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffb8) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->MemoryModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffb0) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->PlatformEventsModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffa0) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->TasksModule;
  if (this == (FTraceServicesModule *)0xffffffffffffff98) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->CsvProfilerModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffc8) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->StatsModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffd0) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->DiagnosticsModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffa8) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = (FTraceServicesModule *)&this->CookProfilingModule;
  if (this == (FTraceServicesModule *)0xffffffffffffff90) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  pIVar3 = IModularFeatures::Get();
  pFVar5 = this + 1;
  if (this == (FTraceServicesModule *)0xffffffffffffff88) {
    pFVar5 = pFVar4;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,TraceServices::ModuleFeatureName,pFVar5);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShutdownModule @ 14d491d00

void __thiscall FTraceServicesModule::ShutdownModule(FTraceServicesModule *this)

{
  IModularFeatures *pIVar1;
  FTraceServicesModule *pFVar2;
  FTraceServicesModule *pFVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Insights_TraceServices.UniqueName,false,None,Default,true)
  ;
  local_res10 = LLMTagDeclaration_Insights_TraceServices.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  pIVar1 = IModularFeatures::Get();
  pFVar2 = (FTraceServicesModule *)0x0;
  pFVar3 = this + 1;
  if (this == (FTraceServicesModule *)0xffffffffffffff88) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->CookProfilingModule;
  if (this == (FTraceServicesModule *)0xffffffffffffff90) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->DiagnosticsModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffa8) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->StatsModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffd0) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->CsvProfilerModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffc8) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->TasksModule;
  if (this == (FTraceServicesModule *)0xffffffffffffff98) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->PlatformEventsModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffa0) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->MemoryModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffb0) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->NetProfilerModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffb8) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->CountersModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffc0) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  pIVar1 = IModularFeatures::Get();
  pFVar3 = (FTraceServicesModule *)&this->LoadTimeProfilerModule;
  if (this == (FTraceServicesModule *)0xffffffffffffffd8) {
    pFVar3 = pFVar2;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,TraceServices::ModuleFeatureName,pFVar3);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AnalysisService != (TSharedPtr<TraceServices::FAnalysisService,1> *)&local_28) {
    (this->AnalysisService).Object = (FAnalysisService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AnalysisService).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ModuleService != (TSharedPtr<TraceServices::FModuleService,1> *)&local_18) {
    (this->ModuleService).Object = (FModuleService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModuleService).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

