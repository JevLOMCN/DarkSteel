// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticClass @ 14907d570

UClass * __cdecl UNiagaraDataChannelHandler_Global::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_Global",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_Global,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannelHandler_Global>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_Global>,local_res8,
               UNiagaraDataChannelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.InnerSingleton;
}

// UNiagaraDataChannelHandler_Global @ 1490b2740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelHandler_Global * __thiscall
UNiagaraDataChannelHandler_Global::UNiagaraDataChannelHandler_Global
          (UNiagaraDataChannelHandler_Global *this,FVTableHelper *param_1)

{
  UNiagaraDataChannelHandler::UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_Global__6B_;
  (this->Data).Object = (FNiagaraDataChannelData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNiagaraDataChannelHandler_Global @ 1490b2780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelHandler_Global * __thiscall
UNiagaraDataChannelHandler_Global::UNiagaraDataChannelHandler_Global
          (UNiagaraDataChannelHandler_Global *this,FObjectInitializer *param_1)

{
  UNiagaraDataChannelHandler::UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_Global__6B_;
  (this->Data).Object = (FNiagaraDataChannelData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNiagaraDataChannelHandler_Global @ 1490b8650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Global::~UNiagaraDataChannelHandler_Global
          (UNiagaraDataChannelHandler_Global *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_Global__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  UNiagaraDataChannelHandler::~UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this);
  return;
}

// BeginFrame @ 1490cdc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Global::BeginFrame(UNiagaraDataChannelHandler_Global *this,float param_1)

{
  FNiagaraDataChannelData *this_00;
  
  UNiagaraDataChannelHandler::BeginFrame((UNiagaraDataChannelHandler *)this,param_1);
  this_00 = (this->Data).Object;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::BeginFrame(this_00,(UNiagaraDataChannelHandler *)this);
    return;
  }
  return;
}

// Cleanup @ 1490d2f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraDataChannelHandler_Global::Cleanup(UNiagaraDataChannelHandler_Global *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Data != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_18) {
    (this->Data).Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UNiagaraDataChannelHandler::Cleanup((UNiagaraDataChannelHandler *)this);
  return;
}

// EndFrame @ 1490f0630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Global::EndFrame(UNiagaraDataChannelHandler_Global *this,float param_1)

{
  FNiagaraDataChannelData *this_00;
  
  this_00 = (this->Data).Object;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::EndFrame(this_00,(UNiagaraDataChannelHandler *)this);
    return;
  }
  return;
}

// FindData @ 1490f92d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TSharedPtr<FNiagaraDataChannelData,1> * __thiscall
UNiagaraDataChannelHandler_Global::FindData
          (UNiagaraDataChannelHandler_Global *this,
          TSharedPtr<FNiagaraDataChannelData,1> *__return_storage_ptr__,
          FNiagaraDataChannelSearchParameters *param_1,ENiagaraResourceAccess param_2)

{
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar3;
  TSharedPtr<FNiagaraDataChannelData,1> local_18;
  
  pTVar1 = &this->Data;
  if (pTVar1->Object == (FNiagaraDataChannelData *)0x0) {
    pTVar3 = UNiagaraDataChannelHandler::CreateData((UNiagaraDataChannelHandler *)this,&local_18);
    if (pTVar1 != pTVar3) {
      pTVar1->Object = pTVar3->Object;
      pTVar3->Object = (FNiagaraDataChannelData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Data).SharedReferenceCount,&pTVar3->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = pTVar1->Object;
  pTVar2 = (this->Data).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149108300

UClass * __cdecl UNiagaraDataChannelHandler_Global::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_Global",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_Global,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannelHandler_Global>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_Global>,local_res8,
               UNiagaraDataChannelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.InnerSingleton;
}

// Init @ 149113ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Global::Init
          (UNiagaraDataChannelHandler_Global *this,UNiagaraDataChannel *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  UNiagaraDataChannel *local_res8;
  undefined1 local_res10 [8];
  
  if (param_1 == (UNiagaraDataChannel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelHandler.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_res10);
  this->_padding_ = *plVar3;
  return;
}

// StaticRegisterNativesUNiagaraDataChannelHandler_Global @ 149139cf0

void __cdecl
UNiagaraDataChannelHandler_Global::StaticRegisterNativesUNiagaraDataChannelHandler_Global(void)

{
  return;
}

// Tick @ 14913b000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Global::Tick
          (UNiagaraDataChannelHandler_Global *this,float param_1,ETickingGroup param_2)

{
  int *piVar1;
  FNiagaraDataChannelData *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_DataChannelHandler_Global_Tick> FVar6;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  LARGE_INTEGER local_res8;
  ETickingGroup local_res18 [2];
  FName local_res20;
  FStatMessage local_38;
  
  FVar6 = StatPtr_STAT_DataChannelHandler_Global_Tick;
  local_res18[0] = param_2;
  if (StatPtr_STAT_DataChannelHandler_Global_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_DataChannelHandler_Global_Tick>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_DataChannelHandler_Global_Tick");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_DataChannelHandler_Global_Tick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DataChannelHandler_Global_Tick,
                       *pFVar5,L"UNiagaraDataChannelHandler_Global::Tick",
                       "STATGROUP_NiagaraDataChannels","STATCAT_Niagara",L"Niagara Data Channels",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Global.cpp"
                   ,0x49);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_14913b15f;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14913b15f:
  this_00 = (this->Data).Object;
  *(ETickingGroup *)&this->_padding_ = param_2;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::ConsumePublishRequests
              (this_00,(UNiagaraDataChannelHandler *)this,local_res18);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

