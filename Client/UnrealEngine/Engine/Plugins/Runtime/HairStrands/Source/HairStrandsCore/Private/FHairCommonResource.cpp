// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 14

// FHairCommonResource @ 14e03c250

FHairCommonResource * __thiscall
FHairCommonResource::FHairCommonResource
          (FHairCommonResource *this,EHairStrandsAllocationType param_1,FHairResourceName *param_2,
          FName *param_3,bool param_4)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->AllocationType = param_1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  this->bUseRenderGraph = param_4;
  this->bIsInitialized = false;
  this->OwnerName = *param_3;
  (this->StreamingRequest).IORequest = (FBulkDataBatchRequest)0x0;
  (this->StreamingRequest).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingRequest).Chunks.ArrayNum = 0;
  (this->StreamingRequest).Chunks.ArrayMax = 0;
  (this->StreamingRequest).CurveCount = 0;
  (this->StreamingRequest).PointCount = 0;
  (this->StreamingRequest).LODIndex = 0;
  (this->StreamingRequest).bSupportOffsetLoad = true;
  this->MaxAvailableCurveCount = 0x3fffff;
  return this;
}

// Allocate @ 14e048470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCommonResource::Allocate
          (FHairCommonResource *this,FRDGBuilder *param_1,EHairResourceLoadingType param_2)

{
  EHairResourceStatus local_res20;
  
  local_res20.Status = None;
  local_res20.AvailableCurveCount = 0x3fffff;
  Allocate(this,param_1,param_2,&local_res20,0x3fffff,0xffffff,true);
  return;
}

// Allocate @ 14e0484b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCommonResource::Allocate
          (FHairCommonResource *this,FRDGBuilder *param_1,EHairResourceLoadingType param_2,
          EHairResourceStatus *param_3)

{
  Allocate(this,param_1,param_2,param_3,0x3fffff,0xffffff,true);
  return;
}

// Allocate @ 14e0484e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCommonResource::Allocate
          (FHairCommonResource *this,FRDGBuilder *param_1,EHairResourceLoadingType param_2,
          EHairResourceStatus *param_3,uint param_4,uint param_5,bool param_6)

{
  longlong lVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  EStatus EVar5;
  char cVar6;
  FHairStrandsBulkCommon *this_00;
  uint uVar7;
  uint uVar8;
  EHairResourceStatus local_res8;
  FHairStreamingRequest local_78;
  FHairStreamingRequest local_50;
  
  if ((this->AllocationType != Deferred) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationType == EHairStrandsAllocationType::Deferred",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                         ,0x388,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 == Sync) {
    if (this->bIsInitialized == false) {
      FRenderResource::InitResource
                ((FRenderResource *)this,(FRHICommandListBase *)param_1->_padding_);
    }
    if (this->bIsInitialized == false) {
      (**(code **)(this->_padding_ + 0x30))(this,param_1,param_4,param_5);
    }
    this->bIsInitialized = true;
    this->MaxAvailableCurveCount = param_4;
    local_res8 = *param_3;
    EVar5 = local_res8.Status | Valid;
    goto LAB_14e04878d;
  }
  if (param_2 != Async) goto LAB_14e048797;
  if ((this->bIsInitialized == false) || (this->MaxAvailableCurveCount < param_4)) {
    cVar6 = (**(code **)(this->_padding_ + 0x50))(this,param_4,param_5);
    if (cVar6 == '\0') {
      local_res8 = *param_3;
      EVar5 = local_res8.Status | Loading;
    }
    else {
      if (this->bIsInitialized == false) {
        FRenderResource::InitResource
                  ((FRenderResource *)this,(FRHICommandListBase *)param_1->_padding_);
      }
      (**(code **)(this->_padding_ + 0x30))
                (this,param_1,(this->StreamingRequest).CurveCount,
                 (this->StreamingRequest).PointCount);
      this->MaxAvailableCurveCount = (this->StreamingRequest).CurveCount;
      this->bIsInitialized = true;
      local_50._37_2_ = 0;
      local_50._39_1_ = 0;
      local_50.Chunks.ArrayNum = 0;
      local_50.Chunks.ArrayMax = 0;
      local_50.CurveCount = 0;
      local_50.PointCount = 0;
      local_50.LODIndex = 0;
      local_50.IORequest = (FBulkDataBatchRequest)0x0;
      local_50.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.bSupportOffsetLoad = true;
      FHairStreamingRequest::operator=(&this->StreamingRequest,&local_50);
      FVar3.Data = local_50.Chunks.AllocatorInstance.Data;
      DestructItems<FHairStreamingRequest::FChunk,int>
                ((FChunk *)local_50.Chunks.AllocatorInstance.Data,local_50.Chunks.ArrayNum);
      if ((FChunk *)FVar3.Data != (FChunk *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      if (local_50.IORequest == (FBulkDataBatchRequest)0x0) goto LAB_14e0486c5;
      (**(code **)(*(longlong *)local_50.IORequest + 0x10))();
      local_res8 = *param_3;
      EVar5 = local_res8.Status | Valid;
    }
  }
  else {
    if ((param_6) && (0 < GHairStrands_Streaming)) {
      uVar7 = 0x8000;
      if ((uint)GHairStrands_Streaming_CurvePage < 0x8000) {
        uVar7 = GHairStrands_Streaming_CurvePage;
      }
      uVar8 = 1;
      if (1 < uVar7) {
        uVar8 = uVar7;
      }
      uVar7 = 2;
      if (2 < GHairStrands_Streaming_StreamOutThreshold) {
        uVar7 = GHairStrands_Streaming_StreamOutThreshold;
      }
      if ((uVar7 <= ((this->MaxAvailableCurveCount - 1) + uVar8) / uVar8 -
                    ((param_4 - 1) + uVar8) / uVar8) &&
         (bVar4 = FHairStreamingRequest::IsNone(&this->StreamingRequest), bVar4)) {
        lVar1 = this->_padding_;
        (this->StreamingRequest).CurveCount = param_4;
        (this->StreamingRequest).PointCount = param_5;
        this_00 = (FHairStrandsBulkCommon *)(**(code **)(lVar1 + 0x60))(this);
        if (this_00 != (FHairStrandsBulkCommon *)0x0) {
          FHairStrandsBulkCommon::Unload(this_00,&this->StreamingRequest);
        }
        (**(code **)(this->_padding_ + 0x30))(this,param_1,param_4,param_5);
        this->MaxAvailableCurveCount = (this->StreamingRequest).CurveCount;
        local_78.bSupportOffsetLoad = true;
        local_78._37_2_ = 0;
        local_78._39_1_ = 0;
        local_78.Chunks.ArrayNum = 0;
        local_78.Chunks.ArrayMax = 0;
        local_78.CurveCount = 0;
        local_78.PointCount = 0;
        local_78.LODIndex = 0;
        local_78.IORequest = (FBulkDataBatchRequest)0x0;
        local_78.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FHairStreamingRequest::operator=(&this->StreamingRequest,&local_78);
        FVar3.Data = local_78.Chunks.AllocatorInstance.Data;
        DestructItems<FHairStreamingRequest::FChunk,int>
                  ((FChunk *)local_78.Chunks.AllocatorInstance.Data,local_78.Chunks.ArrayNum);
        if ((FChunk *)FVar3.Data != (FChunk *)0x0) {
          FMemory::Free(FVar3.Data);
        }
        if (local_78.IORequest != (FBulkDataBatchRequest)0x0) {
          (**(code **)(*(longlong *)local_78.IORequest + 0x10))();
        }
      }
    }
LAB_14e0486c5:
    local_res8 = *param_3;
    EVar5 = local_res8.Status | Valid;
  }
LAB_14e04878d:
  local_res8.Status = EVar5;
  *param_3 = local_res8;
LAB_14e048797:
  uVar7 = this->MaxAvailableCurveCount;
  if (param_3->AvailableCurveCount < this->MaxAvailableCurveCount) {
    uVar7 = param_3->AvailableCurveCount;
  }
  param_3->AvailableCurveCount = uVar7;
  return;
}

// InitRHI @ 14e054a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall FHairCommonResource::InitRHI(FHairCommonResource *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  EShaderPlatform EVar2;
  char cVar3;
  bool bVar4;
  FRHICommandListImmediate *pFVar5;
  undefined1 auStackY_848 [32];
  FRDGEventName local_818;
  FRDGBuilder local_7f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_848;
  if (this->bIsInitialized == false) {
    (**(code **)(this->_padding_ + 0x58))();
  }
  if (((this->bIsInitialized == false) && (this->AllocationType != Deferred)) &&
     (GRHIGlobals.UsingNullRHI == false)) {
    cVar3 = (**(code **)(this->_padding_ + 0x50))(this,0x3fffff,0xffffff);
    if (cVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bReady",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                         ,0x359,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar2 = GMaxRHIShaderPlatform;
    if (this->bUseRenderGraph == false) {
      (**(code **)(this->_padding_ + 0x40))(this);
    }
    else {
      local_818.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_818.FormattedEventName.Data.ArrayNum = 0;
      local_818.FormattedEventName.Data.ArrayMax = 0;
      local_818.EventFormat = L"";
      pFVar5 = FRHICommandListBase::GetAsImmediate(param_1);
      FRDGBuilder::FRDGBuilder(&local_7f8,pFVar5,&local_818,None,EVar2);
      (**(code **)(this->_padding_ + 0x30))(this,&local_7f8,0x3fffff,0xffffff);
      FRDGBuilder::Execute(&local_7f8);
      FRDGBuilder::~FRDGBuilder(&local_7f8);
    }
    this->bIsInitialized = true;
  }
  return;
}

// InternalAllocate @ 14e055360

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCommonResource::InternalAllocate(FHairCommonResource *this,FRDGBuilder *param_1)

{
  return;
}

// InternalAllocate @ 14e055370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCommonResource::InternalAllocate
          (FHairCommonResource *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014e055373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// InternalAllocate @ 14e055380

void __thiscall FHairCommonResource::InternalAllocate(FHairCommonResource *this)

{
  return;
}

// InternalGetBulkData @ 14e058050

FHairStrandsBulkCommon * __thiscall
FHairCommonResource::InternalGetBulkData(FHairCommonResource *this)

{
  return (FHairStrandsBulkCommon *)0x0;
}

// InternalGetOrRequestData @ 14e0580a0

bool __thiscall
FHairCommonResource::InternalGetOrRequestData(FHairCommonResource *this,uint param_1,uint param_2)

{
  (this->StreamingRequest).CurveCount = param_1;
  (this->StreamingRequest).PointCount = param_2;
  return true;
}

// InternalRelease @ 14e0583a0

void __thiscall FHairCommonResource::InternalRelease(FHairCommonResource *this)

{
  return;
}

// InternalResetLoadedSize @ 14e058cc0

void __thiscall FHairCommonResource::InternalResetLoadedSize(FHairCommonResource *this)

{
  return;
}

// ReleaseRHI @ 14e059a20

void __thiscall FHairCommonResource::ReleaseRHI(FHairCommonResource *this)

{
  (**(code **)(this->_padding_ + 0x48))();
  this->bIsInitialized = false;
  return;
}

// StreamInData @ 14e064ce0

void __thiscall FHairCommonResource::StreamInData(FHairCommonResource *this)

{
  return;
}

