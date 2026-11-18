// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// GetFriendlyName @ 14e0e9c50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
FNDIHairStrandsBuffer::GetFriendlyName(FNDIHairStrandsBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNDIHairStrandsBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 14e0f2610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FNDIHairStrandsBuffer::InitRHI(FNDIHairStrandsBuffer *this,FRHICommandListBase *param_1)

{
  byte *pbVar1;
  FNiagaraPooledRWBuffer *this_00;
  code *pcVar2;
  undefined8 uVar3;
  EShaderPlatform EVar4;
  bool bVar5;
  FRDGBuffer *pFVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  TStaticArray<float,128,4294967295> *pTVar9;
  longlong lVar10;
  undefined1 auStackY_868 [32];
  FRDGEventName local_828;
  undefined1 local_808 [1464];
  ForElementType<FRDGBuilder::FUploadedBuffer> local_250;
  int local_248;
  int local_244 [79];
  FRDGUserValidation local_108;
  ulonglong local_38;
  
  EVar4 = GMaxRHIShaderPlatform;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_868;
  if (this->bNeedResouces != false) {
    local_828.EventFormat = L"";
    local_828.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_828.FormattedEventName.Data.ArrayNum = 0;
    local_828.FormattedEventName.Data.ArrayMax = 0;
    if ((param_1->PersistentState).bImmediate == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImmediate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0x17,L"This operation expects the immediate command list.");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FRDGBuilder::FRDGBuilder
              ((FRDGBuilder *)local_808,(FRHICommandListImmediate *)param_1,&local_828,None,EVar4);
    lVar10 = 4;
    FNiagaraPooledRWBuffer::InitializeInternal
              (&this->BoundingBoxBuffer,(FRDGBuilder *)local_808,L"BoundingBoxBuffer",PF_R32_UINT,4,
               0x18,None);
    pFVar6 = FNiagaraPooledRWBuffer::GetOrCreateBuffer
                       (&this->BoundingBoxBuffer,(FRDGBuilder *)local_808);
    FRDGUserValidation::ValidateUploadBuffer(&local_108,pFVar6,ZeroData,0x60);
    if (local_248 == local_244[0]) {
      local_248 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                            (0x10e0,&local_250,local_244);
    }
    local_250.Data[local_248].bUseDataCallbacks = false;
    local_250.Data[local_248].bUseFreeCallbacks = false;
    local_250.Data[local_248].Buffer = pFVar6;
    local_250.Data[local_248].Data = ZeroData;
    local_250.Data[local_248].DataSize = 0x60;
    *(undefined8 *)&local_250.Data[local_248].DataCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataCallback.field_0x28 = 0;
    *(undefined8 *)&local_250.Data[local_248].DataSizeCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataSizeCallback.field_0x28 = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFreeCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFreeCallback.field_0x28 = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFillCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFillCallback.field_0x28 = 0;
    pbVar1 = (byte *)((longlong)&pFVar6->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    local_248 = local_248 + 1;
    FNiagaraPooledRWBuffer::EndGraphUsage(&this->BoundingBoxBuffer);
    this_00 = &this->ParamsScaleBuffer;
    FNiagaraPooledRWBuffer::InitializeInternal
              (this_00,(FRDGBuilder *)local_808,L"ParamsScaleBuffer",PF_R32_FLOAT,4,0x80,None);
    pFVar6 = FNiagaraPooledRWBuffer::GetOrCreateBuffer(this_00,(FRDGBuilder *)local_808);
    FRDGUserValidation::ValidateUploadBuffer(&local_108,pFVar6,&this->ParamsScale,0x200);
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)(local_808 + 0x18),0x200,0x10);
    puVar8 = puVar7;
    pTVar9 = &this->ParamsScale;
    do {
      uVar3 = *(undefined8 *)(pTVar9->Elements + 2);
      *puVar8 = *(undefined8 *)pTVar9->Elements;
      puVar8[1] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 6);
      puVar8[2] = *(undefined8 *)(pTVar9->Elements + 4);
      puVar8[3] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 10);
      puVar8[4] = *(undefined8 *)(pTVar9->Elements + 8);
      puVar8[5] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 0xe);
      puVar8[6] = *(undefined8 *)(pTVar9->Elements + 0xc);
      puVar8[7] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 0x12);
      puVar8[8] = *(undefined8 *)(pTVar9->Elements + 0x10);
      puVar8[9] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 0x16);
      puVar8[10] = *(undefined8 *)(pTVar9->Elements + 0x14);
      puVar8[0xb] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 0x1a);
      puVar8[0xc] = *(undefined8 *)(pTVar9->Elements + 0x18);
      puVar8[0xd] = uVar3;
      uVar3 = *(undefined8 *)(pTVar9->Elements + 0x1e);
      puVar8[0xe] = *(undefined8 *)(pTVar9->Elements + 0x1c);
      puVar8[0xf] = uVar3;
      lVar10 = lVar10 + -1;
      puVar8 = puVar8 + 0x10;
      pTVar9 = (TStaticArray<float,128,4294967295> *)(pTVar9->Elements + 0x20);
    } while (lVar10 != 0);
    if (local_248 == local_244[0]) {
      local_248 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                            (0x10e0,&local_250,local_244);
    }
    local_250.Data[local_248].bUseDataCallbacks = false;
    local_250.Data[local_248].bUseFreeCallbacks = false;
    local_250.Data[local_248].Buffer = pFVar6;
    local_250.Data[local_248].Data = puVar7;
    local_250.Data[local_248].DataSize = 0x200;
    *(undefined8 *)&local_250.Data[local_248].DataCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataCallback.field_0x28 = 0;
    *(undefined8 *)&local_250.Data[local_248].DataSizeCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataSizeCallback.field_0x28 = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFreeCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFreeCallback.field_0x28 = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFillCallback = 0;
    *(undefined8 *)&local_250.Data[local_248].DataFillCallback.field_0x28 = 0;
    pbVar1 = (byte *)((longlong)&pFVar6->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    local_248 = local_248 + 1;
    FNiagaraPooledRWBuffer::EndGraphUsage(this_00);
    FRDGBuilder::Execute((FRDGBuilder *)local_808);
    FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_808);
  }
  return;
}

// Initialize @ 14e0f2bd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNDIHairStrandsBuffer::Initialize
          (FNDIHairStrandsBuffer *this,FNDIHairStrandsInfo *param_1,
          TStaticArray<float,128,4294967295> *param_2)

{
  FNDIHairStrandsBuffer *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 4;
  this->bNeedResouces = param_1->bHasValidResources;
  pFVar1 = this;
  do {
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)(pFVar1->ParamsScale).Elements = *(undefined8 *)param_2;
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 2) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 4) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 6) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 8) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 10) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0xc) =
         *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0xe) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x10) =
         *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x12) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x14) =
         *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x16) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x18) =
         *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x1a) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x1c) =
         *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((pFVar1->ParamsScale).Elements + 0x1e) = uVar2;
    lVar3 = lVar3 + -1;
    param_2 = (TStaticArray<float,128,4294967295> *)((longlong)param_2 + 0x80);
    pFVar1 = (FNDIHairStrandsBuffer *)&pFVar1->ParamsScale;
  } while (lVar3 != 0);
  this->bValidGeometryType = false;
  return;
}

// ReleaseRHI @ 14e0f5490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNDIHairStrandsBuffer::ReleaseRHI(FNDIHairStrandsBuffer *this)

{
  if (this->bNeedResouces != false) {
    FNiagaraPooledRWBuffer::Release(&this->BoundingBoxBuffer);
    FNiagaraPooledRWBuffer::Release(&this->ParamsScaleBuffer);
    return;
  }
  return;
}

// Transfer @ 14e0f8540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIHairStrandsBuffer::Transfer
          (FNDIHairStrandsBuffer *this,FRDGBuilder *param_1,
          TStaticArray<float,128,4294967295> *param_2)

{
  FRDGBuffer *pFVar1;
  
  if ((this->bNeedResouces != false) &&
     ((this->ParamsScaleBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0)) {
    FNiagaraPooledRWBuffer::InitializeInternal
              (&this->ParamsScaleBuffer,param_1,L"ParamsScaleBuffer",PF_R32_FLOAT,4,0x80,None);
    pFVar1 = FNiagaraPooledRWBuffer::GetOrCreateBuffer(&this->ParamsScaleBuffer,param_1);
    FRDGBuilder::QueueBufferUpload(param_1,pFVar1,&this->ParamsScale,0x200,None);
  }
  return;
}

