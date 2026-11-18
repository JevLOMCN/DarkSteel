// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// InitRHI @ 14923fe60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshConnectivityProxy::InitRHI
          (FSkeletalMeshConnectivityProxy *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ERHIAccess EVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar11;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  byte bVar12;
  uchar auVar13 [8];
  uint local_res8;
  uint uStackX_c;
  FRHIResource *local_res18;
  FName local_res20;
  FStatMessage local_80;
  FName local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  TResourceArray<unsigned_char,0> *pTStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = (**(code **)((this->AdjacencyResource)._padding_ + 0x10))(&this->AdjacencyResource);
  auVar13 = (uchar  [8])(longlong)(int)uVar6;
  bVar12 = (byte)GNumExplicitGPUsForRendering;
  EVar7 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_68 = (ulonglong)uVar6;
  uStack_60 = CONCAT44((1 << (bVar12 & 0x1f)) + -1,0x4101);
  local_48 = CONCAT44(2,EVar7);
  local_58 = L"FSkeletalMeshConnectivityProxy_AdjacencyBuffer";
  uStack_40 = 0;
  local_38 = 0;
  pTStack_50 = &this->AdjacencyResource;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar1 = &this->AdjacencyBuffer;
  if ((FRHIBuffer *)pTVar1 != TVar8.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)CONCAT44(uStackX_c,local_res8) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(uStackX_c,local_res8));
  }
  TVar9 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)pTVar1->Reference);
  pTVar2 = &this->AdjacencySrv;
  if ((FRHIShaderResourceView *)pTVar2 != TVar9.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (this->GpuMemoryUsage != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GpuMemoryUsage == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                       ,0x1a3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->GpuMemoryUsage = (long64)auVar13;
  if (uVar6 != 0) {
    FVar11 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar10 = ::FName::FName(&local_70,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar10,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar11;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3.ComparisonIndex.Value.Value;
      uStackX_c = FVar3.Number;
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_80.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res20 = FVar3;
      local_80.StatData.Pad = auVar13;
      local_80.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_02,&local_80);
      FStatsTrace::Add(&local_res20,(long64)auVar13);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// Initialize @ 149242590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSkeletalMeshConnectivityProxy::Initialize
          (FSkeletalMeshConnectivityProxy *this,FSkeletalMeshConnectivity *param_1)

{
  TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *this_00;
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  USkeletalMesh *pUVar6;
  FSkeletalMeshLODRenderData *pFVar7;
  UClass *this_01;
  UEnum *this_02;
  UObject *pUVar8;
  int local_res10 [2];
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = &param_1->MeshObject;
  pUVar6 = (USkeletalMesh *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  if ((pUVar6 == (USkeletalMesh *)0x0) ||
     (pFVar7 = FSkeletalMeshConnectivity::GetLodRenderData(pUVar6,param_1->LodIndex),
     pFVar7 == (FSkeletalMeshLODRenderData *)0x0)) {
    return false;
  }
  bVar3 = false;
  local_res10[0] = 0;
  this_01 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  cVar1 = *(char *)((this_01->ClassDefaultObject).field0_0x0.DebugPtr + 6);
  if (cVar1 == '\0') {
    bVar3 = BuildAdjacencyBuffer<unsigned_int,1>
                      (pFVar7,this->MaxAdjacentTriangleCount,&this->AdjacencyResource,local_res10);
LAB_149242655:
    if (bVar3 != false) goto LAB_14924274e;
  }
  else if (cVar1 == '\x01') {
    bVar3 = BuildAdjacencyBuffer<unsigned_short,1>
                      (pFVar7,this->MaxAdjacentTriangleCount,&this->AdjacencyResource,local_res10);
    goto LAB_149242655;
  }
  if (2 < (byte)LogNiagara._0_1_) {
    StaticEnum<enum_ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>();
    this_02 = StaticEnum<enum_ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>();
    if ((this_02 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    UEnum::GetNameByValue(this_02,(long64)&local_res18);
    ::FName::ToString(&local_res18,&local_38);
    pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_58,L"<none>");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar8,&local_58,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14924274e:
  if ((this->MaxAdjacentTriangleCount < 0) && (2 < (byte)LogNiagara._0_1_)) {
    pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"<none>");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar8,&local_48,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// ReleaseRHI @ 14924a9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSkeletalMeshConnectivityProxy::ReleaseRHI(FSkeletalMeshConnectivityProxy *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  uchar auVar1 [8];
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar4;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName local_res8;
  FStatMessage local_28;
  
  this_00 = (this->AdjacencyBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->AdjacencySrv).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  auVar1 = (uchar  [8])this->GpuMemoryUsage;
  if (auVar1 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar3,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_02,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  this->GpuMemoryUsage = 0;
  return;
}

