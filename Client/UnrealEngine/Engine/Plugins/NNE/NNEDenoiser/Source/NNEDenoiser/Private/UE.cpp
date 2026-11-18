// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 70

// Construct<FNNEDenoiserTemporalInputMappingData> @ 14ead90a0

void __cdecl
UE::CoreUObject::Private::Construct<FNNEDenoiserTemporalInputMappingData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserTemporalInputMappingData__6B_;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// ConstructForTests<FNNEDenoiserTemporalInputMappingData> @ 14ead90d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserTemporalInputMappingData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserTemporalInputMappingData__6B_;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// Destruct<FNNEDenoiserTemporalInputMappingData> @ 14ead90f0

void __cdecl UE::CoreUObject::Private::Destruct<FNNEDenoiserTemporalInputMappingData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FNNEDenoiserTemporalInputMappingData> @ 14ead9110

bool __cdecl
UE::CoreUObject::Private::Copy<FNNEDenoiserTemporalInputMappingData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FNNEDenoiserOutputMappingData> @ 14ead92b0

void __cdecl UE::CoreUObject::Private::Construct<FNNEDenoiserOutputMappingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserOutputMappingData__6B_;
  return;
}

// ConstructForTests<FNNEDenoiserOutputMappingData> @ 14ead9310

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserOutputMappingData>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserOutputMappingData__6B_;
  return;
}

// Destruct<FNNEDenoiserOutputMappingData> @ 14ead9330

void __cdecl UE::CoreUObject::Private::Destruct<FNNEDenoiserOutputMappingData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FNNEDenoiserOutputMappingData> @ 14ead9350

bool __cdecl
UE::CoreUObject::Private::Copy<FNNEDenoiserOutputMappingData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FNNEDenoiserInputMappingData> @ 14ead9470

void __cdecl UE::CoreUObject::Private::Construct<FNNEDenoiserInputMappingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserInputMappingData__6B_;
  return;
}

// ConstructForTests<FNNEDenoiserInputMappingData> @ 14ead9490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserInputMappingData>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserInputMappingData__6B_;
  return;
}

// Destruct<FNNEDenoiserInputMappingData> @ 14ead94b0

void __cdecl UE::CoreUObject::Private::Destruct<FNNEDenoiserInputMappingData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FNNEDenoiserInputMappingData> @ 14ead94d0

bool __cdecl
UE::CoreUObject::Private::Copy<FNNEDenoiserInputMappingData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FNNEDenoiserBaseMappingData> @ 14ead9a20

void __cdecl UE::CoreUObject::Private::Construct<FNNEDenoiserBaseMappingData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserBaseMappingData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNNEDenoiserBaseMappingData> @ 14ead9a40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserBaseMappingData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNNEDenoiserBaseMappingData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FNNEDenoiserBaseMappingData> @ 14ead9a60

void __cdecl UE::CoreUObject::Private::Destruct<FNNEDenoiserBaseMappingData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FNNEDenoiserBaseMappingData> @ 14ead9ac0

bool __cdecl
UE::CoreUObject::Private::Copy<FNNEDenoiserBaseMappingData>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FTilingConfig> @ 14eadaf20

void __cdecl UE::CoreUObject::Private::Construct<FTilingConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FTilingConfig> @ 14eadaf40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTilingConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FTilingConfig> @ 14eadaf60

void __cdecl UE::CoreUObject::Private::Destruct<FTilingConfig>(void *param_1)

{
  return;
}

// Copy<FTilingConfig> @ 14eadaf70

bool __cdecl UE::CoreUObject::Private::Copy<FTilingConfig>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNNEDenoiserTemporalOutputMappingData> @ 14eadb060

void __cdecl
UE::CoreUObject::Private::Construct<FNNEDenoiserTemporalOutputMappingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserTemporalOutputMappingData__6B_;
  return;
}

// ConstructForTests<FNNEDenoiserTemporalOutputMappingData> @ 14eadb080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserTemporalOutputMappingData>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FNNEDenoiserTemporalOutputMappingData__6B_;
  return;
}

// Destruct<FNNEDenoiserTemporalOutputMappingData> @ 14eadb0a0

void __cdecl
UE::CoreUObject::Private::Destruct<FNNEDenoiserTemporalOutputMappingData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FNNEDenoiserTemporalOutputMappingData> @ 14eadb0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNNEDenoiserTemporalOutputMappingData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// CeilDiv<int,int> @ 14eae0470

int __cdecl UE::NNEDenoiser::Private::CeilDiv<int,int>(int param_1,int param_2)

{
  return (param_2 + -1 + param_1) / param_2;
}

// CopyBufferFromCPUToGPU<unsigned_char> @ 14eae0910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<unsigned_char>
          (FRHICommandListImmediate *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,int param_3,FRHIBuffer *param_4
          )

{
  void *_Dst;
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyBufferFromCPUToGPU");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<unsigned_char>(FRHICommandListImmediate&___ptr64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64,int,FRHIBuffer*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId114,"NNEDenoiser.CopyBufferFromCPUToGPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<unsigned_char>(FRHICommandListImmediate&___ptr64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64,int,FRHIBuffer*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId114);
  }
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,param_4,0,param_3,RLM_WriteOnly);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(longlong)param_3);
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,param_4);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CopyBufferFromCPUToGPU<float> @ 14eae09f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<float>
          (FRHICommandListImmediate *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,FRHIBuffer *param_4)

{
  void *_Dst;
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyBufferFromCPUToGPU");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<float>(FRHICommandListImmediate&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,int,FRHIBuffer*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId114,"NNEDenoiser.CopyBufferFromCPUToGPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<float>(FRHICommandListImmediate&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,int,FRHIBuffer*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId114);
  }
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,param_4,0,param_3 * 4,RLM_WriteOnly);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(longlong)param_3 << 2);
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,param_4);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CopyBufferFromGPUToCPU<unsigned_char> @ 14eae0ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<unsigned_char>
          (FRHICommandListImmediate *param_1,FRHIBuffer *param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 *puVar1;
  FName *pFVar2;
  void *_Src;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  FRHIGPUBufferReadback local_98;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyBufferFromGPUToCPU");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<unsigned_char>(FRHICommandListImmediate&___ptr64,FRHIBuffer*___ptr64,int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId94,"NNEDenoiser.CopyBufferFromGPUToCPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x5e);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<unsigned_char>(FRHICommandListImmediate&___ptr64,FRHIBuffer*___ptr64,int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId94);
  }
  pFVar2 = ::FName::FName(local_a8,L"NNEDenoiser.CopyBufferFromGPUToCPU");
  FRHIGPUBufferReadback::FRHIGPUBufferReadback(&local_98,*pFVar2);
  FRHIGPUBufferReadback::EnqueueCopy(&local_98,(FRHICommandList *)param_1,param_2,param_3);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  _Src = FRHIGPUBufferReadback::Lock(&local_98,param_3);
  memcpy((param_4->AllocatorInstance).Data,_Src,(longlong)param_3);
  FRHIGPUBufferReadback::Unlock(&local_98);
  puVar3 = local_40;
  lVar4 = 8;
  do {
    puVar1 = (undefined8 *)(puVar3 + -8);
    puVar3 = puVar3 + -8;
    lVar4 = lVar4 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
  } while (lVar4 != 0);
  local_98._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  if ((FRHIResource *)local_98._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98._padding_);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CopyBufferFromGPUToCPU<float> @ 14eae0c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<float>
          (FRHICommandListImmediate *param_1,FRHIBuffer *param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 *puVar1;
  FName *pFVar2;
  void *_Src;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  FRHIGPUBufferReadback local_98;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyBufferFromGPUToCPU");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<float>(FRHICommandListImmediate&___ptr64,FRHIBuffer*___ptr64,int,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId94,"NNEDenoiser.CopyBufferFromGPUToCPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x5e);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<float>(FRHICommandListImmediate&___ptr64,FRHIBuffer*___ptr64,int,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId94);
  }
  uVar4 = param_3 * 4;
  pFVar2 = ::FName::FName(local_a8,L"NNEDenoiser.CopyBufferFromGPUToCPU");
  FRHIGPUBufferReadback::FRHIGPUBufferReadback(&local_98,*pFVar2);
  FRHIGPUBufferReadback::EnqueueCopy(&local_98,(FRHICommandList *)param_1,param_2,uVar4);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  _Src = FRHIGPUBufferReadback::Lock(&local_98,uVar4);
  memcpy((param_4->AllocatorInstance).Data,_Src,(longlong)(int)uVar4);
  FRHIGPUBufferReadback::Unlock(&local_98);
  puVar3 = local_40;
  lVar5 = 8;
  do {
    puVar1 = (undefined8 *)(puVar3 + -8);
    puVar3 = puVar3 + -8;
    lVar5 = lVar5 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
  } while (lVar5 != 0);
  local_98._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  if ((FRHIResource *)local_98._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98._padding_);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CopyTextureFromCPUToGPU<FLinearColor> @ 14eae0db0

void __cdecl
UE::NNEDenoiser::Private::CopyTextureFromCPUToGPU<FLinearColor>
          (FRHICommandListImmediate *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2,TIntPoint<int> param_3,
          FRHITexture *param_4)

{
  size_t _Size;
  FScriptContainerElement *_Src;
  void *_Dst;
  ulonglong uVar1;
  bool bVar2;
  FMemScope local_res10;
  TIntPoint<int>_u_0 local_res18;
  FLLMScope local_res20 [2];
  FMemScope local_98;
  FMemScope local_90;
  void *local_88 [2];
  uint local_78;
  FRHITexture *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  local_res18 = param_3.field0_0x0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyTextureFromCPUToGPU");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyTextureFromCPUToGPU<FLinearColor>(FRHICommandListImmediate&___ptr64,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Math::TIntPoint<int>,FRHITexture*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId78,"NNEDenoiser.CopyTextureFromCPUToGPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x4e);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyTextureFromCPUToGPU<FLinearColor>(FRHICommandListImmediate&___ptr64,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Math::TIntPoint<int>,FRHITexture*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId78);
  }
  FLLMScope::FLLMScope(local_res20,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_90,Textures,true);
  local_68 = 0;
  local_60 = 0;
  local_58 = 1;
  local_54 = 0x100;
  local_70 = param_4;
  FLLMScope::FLLMScope((FLLMScope *)&local_res10,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_98,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_88);
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res20);
  _Src = (param_2->AllocatorInstance).Data;
  if (0 < local_res18._s_0.Y) {
    uVar1 = (ulonglong)(uint)local_res18._s_0.Y;
    _Size = (longlong)param_3.field0_0x0._0_4_ * 0x10;
    _Dst = local_88[0];
    do {
      memcpy(_Dst,_Src,_Size);
      _Src = _Src + _Size;
      _Dst = (void *)((longlong)_Dst + (ulonglong)(local_78 >> 4) * 0x10);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 3;
  local_54 = 0x100;
  local_70 = param_4;
  FLLMScope::FLLMScope((FLLMScope *)&local_res18._s_0,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,&local_70);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18._s_0);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CopyTextureFromGPUToCPU<FLinearColor> @ 14eae0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::NNEDenoiser::Private::CopyTextureFromGPUToCPU<FLinearColor>
          (FRHICommandListImmediate *param_1,FRHITexture *param_2,TIntPoint<int> param_3,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 *puVar1;
  FName *pFVar2;
  void *_Src;
  FScriptContainerElement *_Dst;
  undefined1 *puVar3;
  size_t _Size;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uStackX_1c;
  undefined1 auStackY_f8 [32];
  int local_c8 [2];
  TIntVector3<int>_u_0 local_c0 [2];
  FRHIGPUTextureReadback local_a8;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyTextureFromGPUToCPU");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyTextureFromGPUToCPU<FLinearColor>(FRHICommandListImmediate&___ptr64,FRHITexture*___ptr64,UE::Math::TIntPoint<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId56,"NNEDenoiser.CopyTextureFromGPUToCPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyTextureFromGPUToCPU<FLinearColor>(FRHICommandListImmediate&___ptr64,FRHITexture*___ptr64,UE::Math::TIntPoint<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId56);
  }
  pFVar2 = ::FName::FName((FName *)&local_c0[0]._s_0,L"NNEDenoiser.CopyTextureFromGPUToCPU");
  FRHIGPUTextureReadback::FRHIGPUTextureReadback(&local_a8,*pFVar2);
  uStackX_1c = param_3.field0_0x0._4_4_;
  uVar5 = (ulonglong)uStackX_1c;
  local_c0[0]._s_0.Y = uStackX_1c;
  local_c0[0]._s_0.Z = 1;
  local_c0[0]._0_4_ = param_3.field0_0x0._0_4_;
  FRHIGPUTextureReadback::EnqueueCopy
            (&local_a8,(FRHICommandList *)param_1,param_2,&UE::Math::TIntVector3<int>::ZeroValue,0,
             (TIntVector3<int> *)&local_c0[0]._s_0);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  local_c8[0] = 0;
  _Src = FRHIGPUTextureReadback::Lock(&local_a8,local_c8,(int *)0x0);
  _Dst = (param_4->AllocatorInstance).Data;
  if (0 < (int)uStackX_1c) {
    _Size = (longlong)param_3.field0_0x0._0_4_ * 0x10;
    do {
      memcpy(_Dst,_Src,_Size);
      _Dst = _Dst + _Size;
      _Src = (void *)((longlong)_Src + (longlong)local_c8[0] * 0x10);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FRHIGPUTextureReadback::Unlock(&local_a8);
  puVar3 = local_50;
  lVar4 = 8;
  do {
    puVar1 = (undefined8 *)(puVar3 + -8);
    puVar3 = puVar3 + -8;
    lVar4 = lVar4 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
  } while (lVar4 != 0);
  local_a8._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._padding_);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData> @ 14eae1190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
 __cdecl UE::NNEDenoiser::Private::
         CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>
                   (FString *param_1,EDenoiserRuntimeType param_2,FString *param_3,int param_4)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  UNNEModelData *pUVar6;
  int iVar7;
  size_t sVar8;
  UClass *pUVar9;
  UNNEDenoiserAsset *pUVar10;
  UDataTable *this;
  UDataTable *this_00;
  ITransferFunction *pIVar11;
  TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *pTVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  FParameters *pFVar15;
  FStaticBasicLogRecord *pFVar16;
  undefined7 in_register_00000011;
  FString *this_01;
  ForAnyElementType FVar17;
  ITransferFunction *pIVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined4 in_register_0000008c;
  undefined1 auVar21 [8];
  undefined1 auVar22 [8];
  FSharedReferencer<1> FVar23;
  int in_stack_00000028;
  undefined1 auStackY_1c8 [32];
  undefined1 local_170 [8];
  FSharedReferencer<1> local_168;
  int local_160;
  int local_15c;
  undefined1 local_148 [8];
  FSharedReferencer<1> FStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [12];
  int iStack_11c;
  FString local_118;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *pTStack_100;
  TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1> local_f8;
  TUniquePtr<UE::NNEDenoiser::Private::IInputProcess,TDefaultDelete<UE::NNEDenoiser::Private::IInputProcess>_>
  local_e8;
  UNNEModelData *local_e0;
  FParameters local_d8;
  void *local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_e8.Ptr = (IInputProcess *)CONCAT44(in_register_0000008c,param_4);
  this_01 = (FString *)CONCAT71(in_register_00000011,param_2);
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pIVar18 = (ITransferFunction *)0x0;
  local_e0 = (UNNEModelData *)param_1;
  if ((this_01->Data).ArrayNum < 2) {
    if ((byte)LogNNEDenoiser._0_1_ < 2) goto LAB_14eae1293;
    pFVar16 = &`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
               ::__l6::LOG_Static;
  }
  else {
    local_f8.Object = (ITransferFunction *)(this_01->Data).AllocatorInstance.Data;
    local_f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTStack_100 = (TReferenceControllerBase<1> *)0x0;
    local_108 = (undefined1  [8])0x0;
    if (local_f8.Object != (ITransferFunction *)0x0) {
      sVar8 = wcslen((wchar_t *)local_f8.Object);
      local_f8.SharedReferenceCount.ReferenceController._0_4_ = (int)sVar8;
    }
    pUVar9 = UNNEDenoiserAsset::StaticClass();
    uVar4._4_4_ = local_f8.SharedReferenceCount.ReferenceController._4_4_;
    uVar4._0_4_ = (int)local_f8.SharedReferenceCount.ReferenceController;
    local_128._0_8_ = local_108;
    stack0xfffffffffffffee0 = pTStack_100;
    local_108 = (undefined1  [8])local_f8.Object;
    pTStack_100 = (TReferenceControllerBase<1> *)uVar4;
    pUVar10 = (UNNEDenoiserAsset *)
              StaticLoadObject(pUVar9,(UObject *)0x0,(TStringView<wchar_t> *)local_108,
                               (TStringView<wchar_t> *)local_128,0,(UPackageMap *)0x0,true,
                               (FLinkerInstancingContext *)0x0);
    local_f8.Object = (ITransferFunction *)pUVar10;
    if (pUVar10 == (UNNEDenoiserAsset *)0x0) {
      if ((byte)LogNNEDenoiser._0_1_ < 2) goto LAB_14eae1293;
      pFVar16 = &`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                 ::__l18::LOG_Static;
    }
    else {
      local_108 = (undefined1  [8])
                  TSoftObjectPtr<UNNEModelData>::LoadSynchronous(&pUVar10->ModelData);
      if (local_108 != (undefined1  [8])0x0) {
        this = TSoftObjectPtr<UDataTable>::LoadSynchronous(&pUVar10->InputMapping);
        pwVar20 = L"";
        if ((this != (UDataTable *)0x0) && (4 < (byte)LogNNEDenoiser._0_1_)) {
          FSoftObjectPath::GetAssetName
                    ((FSoftObjectPath *)&(pUVar10->InputMapping).SoftObjectPtr.field_0x8,
                     (FString *)local_170);
          auVar21 = local_170;
          Logging::Private::BasicLog<5>
                    (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          if (auVar21 != (undefined1  [8])0x0) {
            FMemory::Free((void *)auVar21);
          }
        }
        this_00 = TSoftObjectPtr<UDataTable>::LoadSynchronous(&pUVar10->OutputMapping);
        if ((this_00 != (UDataTable *)0x0) && (4 < (byte)LogNNEDenoiser._0_1_)) {
          FSoftObjectPath::GetAssetName
                    ((FSoftObjectPath *)&(pUVar10->OutputMapping).SoftObjectPtr.field_0x8,
                     (FString *)local_170);
          auVar21 = local_170;
          Logging::Private::BasicLog<5>
                    (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                      ::__l54::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          if (auVar21 != (undefined1  [8])0x0) {
            FMemory::Free((void *)auVar21);
          }
        }
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_15c = 0;
        auVar21 = (undefined1  [8])pIVar18;
        if (this != (UDataTable *)0x0) {
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_b8.NumBits = 0;
          local_b8.MaxBits = 0x80;
          local_98 = 0xffffffff;
          local_94 = 0;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_148 = (undefined1  [8])&local_c8;
          ::FString::FString(&local_118,"FResourceLayout");
          local_138._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserInputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserInputMappingData_const_&>
               ::Call;
          local_138._8_8_ = local_148;
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_118.Data.ArrayNum != 0) {
            FVar17.Data = local_118.Data.AllocatorInstance.Data;
          }
          UDataTable::ForeachRow<FNNEDenoiserInputMappingData>
                    (this,(wchar_t *)FVar17.Data,
                     (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserInputMappingData_const_&)>
                      *)local_138);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          Detail::MakeTensorLayout
                    ((FResourceMappingList *)local_170,
                     (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                      *)&local_c8);
          local_80 = 0;
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&local_c8,0,(int)local_c0);
          uVar5 = local_c0 >> 0x20;
          local_c0 = local_c0 & 0xffffffff00000000;
          if ((int)uVar5 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,0,(ForAnyElementType *)&local_c8,0,(int *)((longlong)&local_c0 + 4));
          }
          local_98 = 0xffffffff;
          local_94 = 0;
          local_b8.NumBits = 0;
          if (0x80 < (uint)local_b8.MaxBits) {
            local_b8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
          }
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          auVar21 = local_170;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_170;
          local_15c = (int)local_168.ReferenceController;
          local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_170 = (undefined1  [8])0x0;
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          if (local_170 != (undefined1  [8])0x0) {
            FMemory::Free((void *)local_170);
          }
        }
        local_138._0_8_ = (FScriptContainerElement *)0x0;
        local_160 = 0;
        if (this_00 != (UDataTable *)0x0) {
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_b8.NumBits = 0;
          local_b8.MaxBits = 0x80;
          local_98 = 0xffffffff;
          local_94 = 0;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_148 = (undefined1  [8])&local_c8;
          ::FString::FString((FString *)local_138,"FResourceLayout");
          local_128._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserOutputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserOutputMappingData_const_&>
               ::Call;
          if (local_138._8_4_ != 0) {
            pwVar20 = (wchar_t *)local_138._0_8_;
          }
          unique0x00008e00 = (TReferenceControllerBase<1> *)local_148;
          UDataTable::ForeachRow<FNNEDenoiserOutputMappingData>
                    (this_00,pwVar20,
                     (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserOutputMappingData_const_&)>
                      *)local_128);
          if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_138._0_8_);
          }
          Detail::MakeTensorLayout
                    ((FResourceMappingList *)local_170,
                     (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                      *)&local_c8);
          local_80 = 0;
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&local_c8,0,(int)local_c0);
          uVar5 = local_c0 >> 0x20;
          local_c0 = local_c0 & 0xffffffff00000000;
          if ((int)uVar5 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,0,(ForAnyElementType *)&local_c8,0,(int *)((longlong)&local_c0 + 4));
          }
          local_98 = 0xffffffff;
          local_94 = 0;
          local_b8.NumBits = 0;
          if (0x80 < (uint)local_b8.MaxBits) {
            local_b8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
          }
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          local_138._0_8_ = local_170;
          local_160 = (int)local_168.ReferenceController;
          local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_170 = (undefined1  [8])0x0;
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          if (local_170 != (undefined1  [8])0x0) {
            FMemory::Free((void *)local_170);
          }
        }
        local_148 = (undefined1  [8])0x0;
        FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        iVar7 = ::FString::Find(this_01,L"oidn2",5,IgnoreCase,FromStart,-1);
        auVar22 = (undefined1  [8])(FTransferFunction *)0x0;
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (iVar7 != -1) {
          pIVar11 = ::operator_new(8);
          if (pIVar11 != (ITransferFunction *)0x0) {
            *pIVar11 = (ITransferFunction)&___7FAutoExposure_Private_NNEDenoiser_UE__6B_;
            pIVar18 = pIVar11;
          }
          pTVar12 = MakeShared<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1>
                              ((TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *)
                               local_128);
          local_168.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
          local_148 = (undefined1  [8])pTVar12->Object;
          if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_168.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_170 = (undefined1  [8])0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_140,&local_168);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (stack0xfffffffffffffee0);
          auVar22 = local_148;
          FVar23.ReferenceController = FStack_140.ReferenceController;
        }
        puVar13 = ::operator_new(0x28);
        iVar7 = local_15c;
        local_148 = auVar22;
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar1 = (ForAnyElementType *)(puVar13 + 1);
          pFVar1->Data = (FScriptContainerElement *)0x0;
          *puVar13 = &___7FInputProcessBase_Private_NNEDenoiser_UE__6B_;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar13 + 2) = local_15c;
          local_15c = 0;
          if (iVar7 == 0) {
            *(int *)((longlong)puVar13 + 0x14) = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,0,pFVar1,iVar7,(int *)((longlong)puVar13 + 0x14));
            ConstructItems<UE::NNEDenoiser::Private::FResourceMapping,UE::NNEDenoiser::Private::FResourceMapping,int>
                      (pFVar1->Data,(FResourceMapping *)auVar21,iVar7);
          }
          puVar13[3] = local_148;
          puVar13[4] = FVar23.ReferenceController;
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                    ((FResourceMapping *)auVar21,iVar7);
          if (auVar21 != (undefined1  [8])0x0) {
            FMemory::Free((void *)auVar21);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
        }
        pFVar14 = ::operator_new(0x28);
        uVar4 = local_138._0_8_;
        iVar7 = local_160;
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = (FScriptContainerElement *)0x0;
        }
        else {
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar2 = pFVar14 + 8;
          *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
          local_138._0_8_ = (FScriptContainerElement *)0x0;
          *(undefined ***)pFVar14 = &___7FOutputProcessBase_Private_NNEDenoiser_UE__6B_;
          *(int *)(pFVar14 + 0x10) = local_160;
          local_160 = 0;
          if (iVar7 == 0) {
            *(int *)(pFVar14 + 0x14) = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,0,(ForAnyElementType *)pFVar2,iVar7,(int *)(pFVar14 + 0x14));
                    /* WARNING: Load size is inaccurate */
            ConstructItems<UE::NNEDenoiser::Private::FResourceMapping,UE::NNEDenoiser::Private::FResourceMapping,int>
                      (*pFVar2,(FResourceMapping *)uVar4,iVar7);
          }
          *(undefined1 (*) [8])(pFVar14 + 0x18) = local_148;
          *(TReferenceControllerBase<1> **)(pFVar14 + 0x20) = FVar23.ReferenceController;
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                    ((FResourceMapping *)uVar4,iVar7);
          if ((FScriptContainerElement *)uVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)uVar4);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
        }
        pFVar15 = GetParametersValidated<UNNEDenoiserAsset>
                            (&local_d8,(UNNEDenoiserAsset *)local_f8.Object);
        local_d8.TilingConfig.Alignment = (pFVar15->TilingConfig).Alignment;
        local_d8.TilingConfig.Overlap = (pFVar15->TilingConfig).Overlap;
        local_128._0_8_ = *(undefined8 *)&pFVar15->TilingConfig;
        piVar3 = &(pFVar15->TilingConfig).MaxSize;
        local_d8.TilingConfig.MaxSize = *piVar3;
        local_d8.TilingConfig.MinSize = (pFVar15->TilingConfig).MinSize;
        unique0x1000097d = *(TReferenceControllerBase<1> **)piVar3;
        if ((-1 < in_stack_00000028) && (in_stack_00000028 < local_d8.TilingConfig.MaxSize)) {
          if ((in_stack_00000028 < local_d8.TilingConfig.MinSize) &&
             (3 < (byte)LogNNEDenoiser._0_1_)) {
            Logging::Private::BasicLog<4>
                      (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          }
          iVar7 = local_d8.TilingConfig.MaxSize;
          if (in_stack_00000028 < local_d8.TilingConfig.MaxSize) {
            iVar7 = in_stack_00000028;
          }
          iVar19 = local_d8.TilingConfig.MinSize;
          if (local_d8.TilingConfig.MinSize < iVar7) {
            iVar19 = iVar7;
          }
          if (iVar19 < local_d8.TilingConfig.MaxSize) {
            if (4 < (byte)LogNNEDenoiser._0_1_) {
              Logging::Private::BasicLog<5>
                        (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                          ::__l93::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
            }
            local_d8.TilingConfig.Alignment = local_128._0_4_;
            local_d8.TilingConfig.Overlap = local_128._4_4_;
            local_d8.TilingConfig.MaxSize = iVar19;
            local_d8.TilingConfig.MinSize = iStack_11c;
          }
        }
        pUVar6 = local_e0;
        if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar23.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_170 = (undefined1  [8])pFVar14;
        local_148 = (undefined1  [8])puVar13;
        local_128._0_8_ = auVar22;
        unique0x10000da2 = FVar23.ReferenceController;
        local_f8.Object = pIVar18;
        CreateNNEDenoiser(local_e0,local_108[0],(FString *)((ulonglong)param_3 & 0xff),local_e8,
                          (IOutputProcess *)local_148,(FParameters *)local_170,
                          (IAutoExposure *)&local_d8,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar23.ReferenceController);
        uVar4 = local_138._0_8_;
        DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                  ((FResourceMapping *)local_138._0_8_,local_160);
        if ((FScriptContainerElement *)uVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)uVar4);
        }
        FVar17.Data = local_118.Data.AllocatorInstance.Data;
        DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                  ((FResourceMapping *)local_118.Data.AllocatorInstance.Data,local_15c);
        if (FVar17.Data == (FScriptContainerElement *)0x0) {
          return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                  )(FGenericDenoiser *)pUVar6;
        }
        FMemory::Free(FVar17.Data);
        return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                )(FGenericDenoiser *)pUVar6;
      }
      if ((byte)LogNNEDenoiser._0_1_ < 2) goto LAB_14eae1293;
      pFVar16 = &`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                 ::__l30::LOG_Static;
      local_108 = (undefined1  [8])0x0;
    }
  }
  Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&LogNNEDenoiser);
LAB_14eae1293:
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
          )(FGenericDenoiser *)param_1;
}

// CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData> @ 14eae1a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
 __cdecl UE::NNEDenoiser::Private::
         CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>
                   (FString *param_1,EDenoiserRuntimeType param_2,FString *param_3,int param_4)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  UNNEModelData *pUVar6;
  int iVar7;
  size_t sVar8;
  UClass *pUVar9;
  UNNEDenoiserTemporalAsset *pUVar10;
  UDataTable *this;
  UDataTable *this_00;
  ITransferFunction *pIVar11;
  TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *pTVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  FParameters *pFVar15;
  FStaticBasicLogRecord *pFVar16;
  undefined7 in_register_00000011;
  FString *this_01;
  ForAnyElementType FVar17;
  ITransferFunction *pIVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined4 in_register_0000008c;
  undefined1 auVar21 [8];
  undefined1 auVar22 [8];
  FSharedReferencer<1> FVar23;
  int in_stack_00000028;
  undefined1 auStackY_1c8 [32];
  undefined1 local_170 [8];
  FSharedReferencer<1> local_168;
  int local_160;
  int local_15c;
  undefined1 local_148 [8];
  FSharedReferencer<1> FStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [12];
  int iStack_11c;
  FString local_118;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *pTStack_100;
  TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1> local_f8;
  TUniquePtr<UE::NNEDenoiser::Private::IInputProcess,TDefaultDelete<UE::NNEDenoiser::Private::IInputProcess>_>
  local_e8;
  UNNEModelData *local_e0;
  FParameters local_d8;
  void *local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_e8.Ptr = (IInputProcess *)CONCAT44(in_register_0000008c,param_4);
  this_01 = (FString *)CONCAT71(in_register_00000011,param_2);
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pIVar18 = (ITransferFunction *)0x0;
  local_e0 = (UNNEModelData *)param_1;
  if ((this_01->Data).ArrayNum < 2) {
    if ((byte)LogNNEDenoiser._0_1_ < 2) goto LAB_14eae1b63;
    pFVar16 = &`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
               ::__l6::LOG_Static;
  }
  else {
    local_f8.Object = (ITransferFunction *)(this_01->Data).AllocatorInstance.Data;
    local_f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTStack_100 = (TReferenceControllerBase<1> *)0x0;
    local_108 = (undefined1  [8])0x0;
    if (local_f8.Object != (ITransferFunction *)0x0) {
      sVar8 = wcslen((wchar_t *)local_f8.Object);
      local_f8.SharedReferenceCount.ReferenceController._0_4_ = (int)sVar8;
    }
    pUVar9 = UNNEDenoiserTemporalAsset::StaticClass();
    uVar4._4_4_ = local_f8.SharedReferenceCount.ReferenceController._4_4_;
    uVar4._0_4_ = (int)local_f8.SharedReferenceCount.ReferenceController;
    local_128._0_8_ = local_108;
    stack0xfffffffffffffee0 = pTStack_100;
    local_108 = (undefined1  [8])local_f8.Object;
    pTStack_100 = (TReferenceControllerBase<1> *)uVar4;
    pUVar10 = (UNNEDenoiserTemporalAsset *)
              StaticLoadObject(pUVar9,(UObject *)0x0,(TStringView<wchar_t> *)local_108,
                               (TStringView<wchar_t> *)local_128,0,(UPackageMap *)0x0,true,
                               (FLinkerInstancingContext *)0x0);
    local_f8.Object = (ITransferFunction *)pUVar10;
    if (pUVar10 == (UNNEDenoiserTemporalAsset *)0x0) {
      if ((byte)LogNNEDenoiser._0_1_ < 2) goto LAB_14eae1b63;
      pFVar16 = &`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                 ::__l18::LOG_Static;
    }
    else {
      local_108 = (undefined1  [8])
                  TSoftObjectPtr<UNNEModelData>::LoadSynchronous(&pUVar10->ModelData);
      if (local_108 != (undefined1  [8])0x0) {
        this = TSoftObjectPtr<UDataTable>::LoadSynchronous(&pUVar10->InputMapping);
        pwVar20 = L"";
        if ((this != (UDataTable *)0x0) && (4 < (byte)LogNNEDenoiser._0_1_)) {
          FSoftObjectPath::GetAssetName
                    ((FSoftObjectPath *)&(pUVar10->InputMapping).SoftObjectPtr.field_0x8,
                     (FString *)local_170);
          auVar21 = local_170;
          Logging::Private::BasicLog<5>
                    (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          if (auVar21 != (undefined1  [8])0x0) {
            FMemory::Free((void *)auVar21);
          }
        }
        this_00 = TSoftObjectPtr<UDataTable>::LoadSynchronous(&pUVar10->OutputMapping);
        if ((this_00 != (UDataTable *)0x0) && (4 < (byte)LogNNEDenoiser._0_1_)) {
          FSoftObjectPath::GetAssetName
                    ((FSoftObjectPath *)&(pUVar10->OutputMapping).SoftObjectPtr.field_0x8,
                     (FString *)local_170);
          auVar21 = local_170;
          Logging::Private::BasicLog<5>
                    (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                      ::__l54::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          if (auVar21 != (undefined1  [8])0x0) {
            FMemory::Free((void *)auVar21);
          }
        }
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_15c = 0;
        auVar21 = (undefined1  [8])pIVar18;
        if (this != (UDataTable *)0x0) {
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_b8.NumBits = 0;
          local_b8.MaxBits = 0x80;
          local_98 = 0xffffffff;
          local_94 = 0;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_148 = (undefined1  [8])&local_c8;
          ::FString::FString(&local_118,"FResourceLayout");
          local_138._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalInputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserTemporalInputMappingData_const_&>
               ::Call;
          local_138._8_8_ = local_148;
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_118.Data.ArrayNum != 0) {
            FVar17.Data = local_118.Data.AllocatorInstance.Data;
          }
          UDataTable::ForeachRow<FNNEDenoiserTemporalInputMappingData>
                    (this,(wchar_t *)FVar17.Data,
                     (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserTemporalInputMappingData_const_&)>
                      *)local_138);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          Detail::MakeTensorLayout
                    ((FResourceMappingList *)local_170,
                     (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                      *)&local_c8);
          local_80 = 0;
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&local_c8,0,(int)local_c0);
          uVar5 = local_c0 >> 0x20;
          local_c0 = local_c0 & 0xffffffff00000000;
          if ((int)uVar5 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,0,(ForAnyElementType *)&local_c8,0,(int *)((longlong)&local_c0 + 4));
          }
          local_98 = 0xffffffff;
          local_94 = 0;
          local_b8.NumBits = 0;
          if (0x80 < (uint)local_b8.MaxBits) {
            local_b8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
          }
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          auVar21 = local_170;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_170;
          local_15c = (int)local_168.ReferenceController;
          local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_170 = (undefined1  [8])0x0;
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          if (local_170 != (undefined1  [8])0x0) {
            FMemory::Free((void *)local_170);
          }
        }
        local_138._0_8_ = (FScriptContainerElement *)0x0;
        local_160 = 0;
        if (this_00 != (UDataTable *)0x0) {
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_b8.NumBits = 0;
          local_b8.MaxBits = 0x80;
          local_98 = 0xffffffff;
          local_94 = 0;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_148 = (undefined1  [8])&local_c8;
          ::FString::FString((FString *)local_138,"FResourceLayout");
          local_128._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalOutputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserTemporalOutputMappingData_const_&>
               ::Call;
          if (local_138._8_4_ != 0) {
            pwVar20 = (wchar_t *)local_138._0_8_;
          }
          unique0x00008e00 = (TReferenceControllerBase<1> *)local_148;
          UDataTable::ForeachRow<FNNEDenoiserTemporalOutputMappingData>
                    (this_00,pwVar20,
                     (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserTemporalOutputMappingData_const_&)>
                      *)local_128);
          if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_138._0_8_);
          }
          Detail::MakeTensorLayout
                    ((FResourceMappingList *)local_170,
                     (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                      *)&local_c8);
          local_80 = 0;
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&local_c8,0,(int)local_c0);
          uVar5 = local_c0 >> 0x20;
          local_c0 = local_c0 & 0xffffffff00000000;
          if ((int)uVar5 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,0,(ForAnyElementType *)&local_c8,0,(int *)((longlong)&local_c0 + 4));
          }
          local_98 = 0xffffffff;
          local_94 = 0;
          local_b8.NumBits = 0;
          if (0x80 < (uint)local_b8.MaxBits) {
            local_b8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
          }
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          local_138._0_8_ = local_170;
          local_160 = (int)local_168.ReferenceController;
          local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_170 = (undefined1  [8])0x0;
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>((FResourceMapping *)0x0,0);
          if (local_170 != (undefined1  [8])0x0) {
            FMemory::Free((void *)local_170);
          }
        }
        local_148 = (undefined1  [8])0x0;
        FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        iVar7 = ::FString::Find(this_01,L"oidn2",5,IgnoreCase,FromStart,-1);
        auVar22 = (undefined1  [8])(FTransferFunction *)0x0;
        FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (iVar7 != -1) {
          pIVar11 = ::operator_new(8);
          if (pIVar11 != (ITransferFunction *)0x0) {
            *pIVar11 = (ITransferFunction)&___7FAutoExposure_Private_NNEDenoiser_UE__6B_;
            pIVar18 = pIVar11;
          }
          pTVar12 = MakeShared<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1>
                              ((TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *)
                               local_128);
          local_168.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
          local_148 = (undefined1  [8])pTVar12->Object;
          if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_168.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_170 = (undefined1  [8])0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_140,&local_168);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (stack0xfffffffffffffee0);
          auVar22 = local_148;
          FVar23.ReferenceController = FStack_140.ReferenceController;
        }
        puVar13 = ::operator_new(0x28);
        iVar7 = local_15c;
        local_148 = auVar22;
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar1 = (ForAnyElementType *)(puVar13 + 1);
          pFVar1->Data = (FScriptContainerElement *)0x0;
          *puVar13 = &___7FInputProcessBase_Private_NNEDenoiser_UE__6B_;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar13 + 2) = local_15c;
          local_15c = 0;
          if (iVar7 == 0) {
            *(int *)((longlong)puVar13 + 0x14) = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,0,pFVar1,iVar7,(int *)((longlong)puVar13 + 0x14));
            ConstructItems<UE::NNEDenoiser::Private::FResourceMapping,UE::NNEDenoiser::Private::FResourceMapping,int>
                      (pFVar1->Data,(FResourceMapping *)auVar21,iVar7);
          }
          puVar13[3] = local_148;
          puVar13[4] = FVar23.ReferenceController;
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                    ((FResourceMapping *)auVar21,iVar7);
          if (auVar21 != (undefined1  [8])0x0) {
            FMemory::Free((void *)auVar21);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
        }
        pFVar14 = ::operator_new(0x28);
        uVar4 = local_138._0_8_;
        iVar7 = local_160;
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = (FScriptContainerElement *)0x0;
        }
        else {
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar2 = pFVar14 + 8;
          *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
          local_138._0_8_ = (FScriptContainerElement *)0x0;
          *(undefined ***)pFVar14 = &___7FOutputProcessBase_Private_NNEDenoiser_UE__6B_;
          *(int *)(pFVar14 + 0x10) = local_160;
          local_160 = 0;
          if (iVar7 == 0) {
            *(int *)(pFVar14 + 0x14) = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,0,(ForAnyElementType *)pFVar2,iVar7,(int *)(pFVar14 + 0x14));
                    /* WARNING: Load size is inaccurate */
            ConstructItems<UE::NNEDenoiser::Private::FResourceMapping,UE::NNEDenoiser::Private::FResourceMapping,int>
                      (*pFVar2,(FResourceMapping *)uVar4,iVar7);
          }
          *(undefined1 (*) [8])(pFVar14 + 0x18) = local_148;
          *(TReferenceControllerBase<1> **)(pFVar14 + 0x20) = FVar23.ReferenceController;
          if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar23.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                    ((FResourceMapping *)uVar4,iVar7);
          if ((FScriptContainerElement *)uVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)uVar4);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
        }
        pFVar15 = GetParametersValidated<UNNEDenoiserTemporalAsset>
                            (&local_d8,(UNNEDenoiserTemporalAsset *)local_f8.Object);
        local_d8.TilingConfig.Alignment = (pFVar15->TilingConfig).Alignment;
        local_d8.TilingConfig.Overlap = (pFVar15->TilingConfig).Overlap;
        local_128._0_8_ = *(undefined8 *)&pFVar15->TilingConfig;
        piVar3 = &(pFVar15->TilingConfig).MaxSize;
        local_d8.TilingConfig.MaxSize = *piVar3;
        local_d8.TilingConfig.MinSize = (pFVar15->TilingConfig).MinSize;
        unique0x1000097d = *(TReferenceControllerBase<1> **)piVar3;
        if ((-1 < in_stack_00000028) && (in_stack_00000028 < local_d8.TilingConfig.MaxSize)) {
          if ((in_stack_00000028 < local_d8.TilingConfig.MinSize) &&
             (3 < (byte)LogNNEDenoiser._0_1_)) {
            Logging::Private::BasicLog<4>
                      (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                        ::__l81::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          }
          iVar7 = local_d8.TilingConfig.MaxSize;
          if (in_stack_00000028 < local_d8.TilingConfig.MaxSize) {
            iVar7 = in_stack_00000028;
          }
          iVar19 = local_d8.TilingConfig.MinSize;
          if (local_d8.TilingConfig.MinSize < iVar7) {
            iVar19 = iVar7;
          }
          if (iVar19 < local_d8.TilingConfig.MaxSize) {
            if (4 < (byte)LogNNEDenoiser._0_1_) {
              Logging::Private::BasicLog<5>
                        (&`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                          ::__l93::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
            }
            local_d8.TilingConfig.Alignment = local_128._0_4_;
            local_d8.TilingConfig.Overlap = local_128._4_4_;
            local_d8.TilingConfig.MaxSize = iVar19;
            local_d8.TilingConfig.MinSize = iStack_11c;
          }
        }
        pUVar6 = local_e0;
        if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar23.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_170 = (undefined1  [8])pFVar14;
        local_148 = (undefined1  [8])puVar13;
        local_128._0_8_ = auVar22;
        unique0x10000da2 = FVar23.ReferenceController;
        local_f8.Object = pIVar18;
        CreateNNEDenoiser(local_e0,local_108[0],(FString *)((ulonglong)param_3 & 0xff),local_e8,
                          (IOutputProcess *)local_148,(FParameters *)local_170,
                          (IAutoExposure *)&local_d8,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar23.ReferenceController);
        uVar4 = local_138._0_8_;
        DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                  ((FResourceMapping *)local_138._0_8_,local_160);
        if ((FScriptContainerElement *)uVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)uVar4);
        }
        FVar17.Data = local_118.Data.AllocatorInstance.Data;
        DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
                  ((FResourceMapping *)local_118.Data.AllocatorInstance.Data,local_15c);
        if (FVar17.Data == (FScriptContainerElement *)0x0) {
          return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                  )(FGenericDenoiser *)pUVar6;
        }
        FMemory::Free(FVar17.Data);
        return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                )(FGenericDenoiser *)pUVar6;
      }
      if ((byte)LogNNEDenoiser._0_1_ < 2) goto LAB_14eae1b63;
      pFVar16 = &`class_TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>___cdecl_UE::NNEDenoiser::Private::CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>(FString_const&___ptr64,EDenoiserRuntimeType,FString_const&___ptr64,int)'
                 ::__l30::LOG_Static;
      local_108 = (undefined1  [8])0x0;
    }
  }
  Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&LogNNEDenoiser);
LAB_14eae1b63:
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
          )(FGenericDenoiser *)param_1;
}

// GetAllRuntimeNames<INNERuntimeCPU> @ 14eae3f20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNE::GetAllRuntimeNames<INNERuntimeCPU>
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TWeakInterfacePtr<INNERuntimeCPU> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TWeakInterfacePtr<INNERuntimeCPU> local_28;
  TWeakInterfacePtr<INNERuntimeCPU> local_18;
  
  GetAllRuntimeNames(__return_storage_ptr__);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)__return_storage_ptr__->ArrayNum * 0x10;
  pFVar4 = pFVar1;
LAB_14eae3f56:
  if (pFVar4 == pFVar5) {
LAB_14eae3fd4:
    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
              (__return_storage_ptr__,(int)((longlong)pFVar4 - (longlong)pFVar1 >> 4),Default);
    return __return_storage_ptr__;
  }
  pTVar3 = GetRuntime<INNERuntimeCPU>(&local_28,(FString *)pFVar4);
  if (pTVar3->InterfaceInstance != (INNERuntimeCPU *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
    if (bVar2) {
      pFVar4 = pFVar4 + 0x10;
      goto LAB_14eae3f56;
    }
  }
  do {
    do {
      pFVar6 = pFVar5;
      pFVar5 = pFVar6 + -0x10;
      if (pFVar4 == pFVar5) goto LAB_14eae3fd4;
      pTVar3 = GetRuntime<INNERuntimeCPU>(&local_18,(FString *)pFVar5);
    } while (pTVar3->InterfaceInstance == (INNERuntimeCPU *)0x0);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
  } while (!bVar2);
  if (*(void **)&pFVar4->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&pFVar4->field_0x0);
  }
  *(undefined8 *)&pFVar4->field_0x0 = *(undefined8 *)&pFVar5->field_0x0;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(pFVar6 + -8);
  *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)(pFVar6 + -4);
  pFVar4 = pFVar4 + 0x10;
  *(undefined8 *)(pFVar6 + -8) = 0;
  goto LAB_14eae3f56;
}

// GetAllRuntimeNames<INNERuntimeGPU> @ 14eae4010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNE::GetAllRuntimeNames<INNERuntimeGPU>
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TWeakInterfacePtr<INNERuntimeGPU> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TWeakInterfacePtr<INNERuntimeGPU> local_28;
  TWeakInterfacePtr<INNERuntimeGPU> local_18;
  
  GetAllRuntimeNames(__return_storage_ptr__);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)__return_storage_ptr__->ArrayNum * 0x10;
  pFVar4 = pFVar1;
LAB_14eae4046:
  if (pFVar4 == pFVar5) {
LAB_14eae40c4:
    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
              (__return_storage_ptr__,(int)((longlong)pFVar4 - (longlong)pFVar1 >> 4),Default);
    return __return_storage_ptr__;
  }
  pTVar3 = GetRuntime<INNERuntimeGPU>(&local_28,(FString *)pFVar4);
  if (pTVar3->InterfaceInstance != (INNERuntimeGPU *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
    if (bVar2) {
      pFVar4 = pFVar4 + 0x10;
      goto LAB_14eae4046;
    }
  }
  do {
    do {
      pFVar6 = pFVar5;
      pFVar5 = pFVar6 + -0x10;
      if (pFVar4 == pFVar5) goto LAB_14eae40c4;
      pTVar3 = GetRuntime<INNERuntimeGPU>(&local_18,(FString *)pFVar5);
    } while (pTVar3->InterfaceInstance == (INNERuntimeGPU *)0x0);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
  } while (!bVar2);
  if (*(void **)&pFVar4->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&pFVar4->field_0x0);
  }
  *(undefined8 *)&pFVar4->field_0x0 = *(undefined8 *)&pFVar5->field_0x0;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(pFVar6 + -8);
  *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)(pFVar6 + -4);
  pFVar4 = pFVar4 + 0x10;
  *(undefined8 *)(pFVar6 + -8) = 0;
  goto LAB_14eae4046;
}

// GetAllRuntimeNames<INNERuntimeRDG> @ 14eae4100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNE::GetAllRuntimeNames<INNERuntimeRDG>
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TWeakInterfacePtr<INNERuntimeRDG> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TWeakInterfacePtr<INNERuntimeRDG> local_28;
  TWeakInterfacePtr<INNERuntimeRDG> local_18;
  
  GetAllRuntimeNames(__return_storage_ptr__);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)__return_storage_ptr__->ArrayNum * 0x10;
  pFVar4 = pFVar1;
LAB_14eae4136:
  if (pFVar4 == pFVar5) {
LAB_14eae41b4:
    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
              (__return_storage_ptr__,(int)((longlong)pFVar4 - (longlong)pFVar1 >> 4),Default);
    return __return_storage_ptr__;
  }
  pTVar3 = GetRuntime<INNERuntimeRDG>(&local_28,(FString *)pFVar4);
  if (pTVar3->InterfaceInstance != (INNERuntimeRDG *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
    if (bVar2) {
      pFVar4 = pFVar4 + 0x10;
      goto LAB_14eae4136;
    }
  }
  do {
    do {
      pFVar6 = pFVar5;
      pFVar5 = pFVar6 + -0x10;
      if (pFVar4 == pFVar5) goto LAB_14eae41b4;
      pTVar3 = GetRuntime<INNERuntimeRDG>(&local_18,(FString *)pFVar5);
    } while (pTVar3->InterfaceInstance == (INNERuntimeRDG *)0x0);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
  } while (!bVar2);
  if (*(void **)&pFVar4->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&pFVar4->field_0x0);
  }
  *(undefined8 *)&pFVar4->field_0x0 = *(undefined8 *)&pFVar5->field_0x0;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(pFVar6 + -8);
  *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)(pFVar6 + -4);
  pFVar4 = pFVar4 + 0x10;
  *(undefined8 *)(pFVar6 + -8) = 0;
  goto LAB_14eae4136;
}

// GetParametersValidated<UNNEDenoiserAsset> @ 14eae41f0

/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __cdecl
UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>
          (FParameters *__return_storage_ptr__,UNNEDenoiserAsset *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1->TilingConfig).Overlap;
  iVar2 = (param_1->TilingConfig).Alignment;
  iVar1 = (param_1->TilingConfig).MaxSize;
  iVar3 = (param_1->TilingConfig).MinSize;
  (__return_storage_ptr__->TilingConfig).Alignment = iVar2;
  (__return_storage_ptr__->TilingConfig).Overlap = iVar4;
  (__return_storage_ptr__->TilingConfig).MaxSize = iVar1;
  (__return_storage_ptr__->TilingConfig).MinSize = iVar3;
  if (iVar2 < 1) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>(UNNEDenoiserAsset_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      iVar4 = (__return_storage_ptr__->TilingConfig).Overlap;
      iVar3 = (__return_storage_ptr__->TilingConfig).MinSize;
    }
    iVar2 = 1;
    (__return_storage_ptr__->TilingConfig).Alignment = 1;
  }
  if (iVar4 % iVar2 != 0) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>(UNNEDenoiserAsset_const&___ptr64)'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      iVar3 = (__return_storage_ptr__->TilingConfig).MinSize;
    }
    iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    iVar4 = (__return_storage_ptr__->TilingConfig).Overlap + -1 + iVar2;
    iVar4 = iVar4 - iVar4 % iVar2;
    (__return_storage_ptr__->TilingConfig).Overlap = iVar4;
  }
  if (iVar3 < iVar4 + iVar2) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>(UNNEDenoiserAsset_const&___ptr64)'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    iVar3 = (__return_storage_ptr__->TilingConfig).Overlap + iVar2;
    (__return_storage_ptr__->TilingConfig).MinSize = iVar3;
  }
  if (iVar3 % iVar2 != 0) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>(UNNEDenoiserAsset_const&___ptr64)'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    iVar3 = (__return_storage_ptr__->TilingConfig).MinSize + -1 + iVar2;
    iVar3 = iVar3 - iVar3 % iVar2;
    (__return_storage_ptr__->TilingConfig).MinSize = iVar3;
  }
  iVar4 = (__return_storage_ptr__->TilingConfig).MaxSize;
  if ((0 < iVar4) && (iVar4 < iVar3)) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>(UNNEDenoiserAsset_const&___ptr64)'
                  ::__l54::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    }
    iVar4 = (__return_storage_ptr__->TilingConfig).MinSize;
    (__return_storage_ptr__->TilingConfig).MaxSize = iVar4;
  }
  if (iVar4 % iVar2 != 0) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserAsset>(UNNEDenoiserAsset_const&___ptr64)'
                  ::__l66::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    iVar4 = (__return_storage_ptr__->TilingConfig).MaxSize + -1 +
            (__return_storage_ptr__->TilingConfig).Alignment;
    (__return_storage_ptr__->TilingConfig).MaxSize =
         iVar4 - iVar4 % (__return_storage_ptr__->TilingConfig).Alignment;
  }
  return __return_storage_ptr__;
}

// GetParametersValidated<UNNEDenoiserTemporalAsset> @ 14eae4390

/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __cdecl
UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>
          (FParameters *__return_storage_ptr__,UNNEDenoiserTemporalAsset *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1->TilingConfig).Overlap;
  iVar2 = (param_1->TilingConfig).Alignment;
  iVar1 = (param_1->TilingConfig).MaxSize;
  iVar3 = (param_1->TilingConfig).MinSize;
  (__return_storage_ptr__->TilingConfig).Alignment = iVar2;
  (__return_storage_ptr__->TilingConfig).Overlap = iVar4;
  (__return_storage_ptr__->TilingConfig).MaxSize = iVar1;
  (__return_storage_ptr__->TilingConfig).MinSize = iVar3;
  if (iVar2 < 1) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>(UNNEDenoiserTemporalAsset_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      iVar4 = (__return_storage_ptr__->TilingConfig).Overlap;
      iVar3 = (__return_storage_ptr__->TilingConfig).MinSize;
    }
    iVar2 = 1;
    (__return_storage_ptr__->TilingConfig).Alignment = 1;
  }
  if (iVar4 % iVar2 != 0) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>(UNNEDenoiserTemporalAsset_const&___ptr64)'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      iVar3 = (__return_storage_ptr__->TilingConfig).MinSize;
    }
    iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    iVar4 = (__return_storage_ptr__->TilingConfig).Overlap + -1 + iVar2;
    iVar4 = iVar4 - iVar4 % iVar2;
    (__return_storage_ptr__->TilingConfig).Overlap = iVar4;
  }
  if (iVar3 < iVar4 + iVar2) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>(UNNEDenoiserTemporalAsset_const&___ptr64)'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    iVar3 = (__return_storage_ptr__->TilingConfig).Overlap + iVar2;
    (__return_storage_ptr__->TilingConfig).MinSize = iVar3;
  }
  if (iVar3 % iVar2 != 0) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>(UNNEDenoiserTemporalAsset_const&___ptr64)'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    iVar3 = (__return_storage_ptr__->TilingConfig).MinSize + -1 + iVar2;
    iVar3 = iVar3 - iVar3 % iVar2;
    (__return_storage_ptr__->TilingConfig).MinSize = iVar3;
  }
  iVar4 = (__return_storage_ptr__->TilingConfig).MaxSize;
  if ((0 < iVar4) && (iVar4 < iVar3)) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>(UNNEDenoiserTemporalAsset_const&___ptr64)'
                  ::__l54::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      iVar2 = (__return_storage_ptr__->TilingConfig).Alignment;
    }
    iVar4 = (__return_storage_ptr__->TilingConfig).MinSize;
    (__return_storage_ptr__->TilingConfig).MaxSize = iVar4;
  }
  if (iVar4 % iVar2 != 0) {
    if (2 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<3>
                (&`struct_UE::NNEDenoiser::Private::FParameters___cdecl_UE::NNEDenoiser::Private::GetParametersValidated<UNNEDenoiserTemporalAsset>(UNNEDenoiserTemporalAsset_const&___ptr64)'
                  ::__l66::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    iVar4 = (__return_storage_ptr__->TilingConfig).MaxSize + -1 +
            (__return_storage_ptr__->TilingConfig).Alignment;
    (__return_storage_ptr__->TilingConfig).MaxSize =
         iVar4 - iVar4 % (__return_storage_ptr__->TilingConfig).Alignment;
  }
  return __return_storage_ptr__;
}

// GetRuntime<INNERuntimeGPU> @ 14eae4530

TWeakInterfacePtr<INNERuntimeGPU> * __cdecl
UE::NNE::GetRuntime<INNERuntimeGPU>
          (TWeakInterfacePtr<INNERuntimeGPU> *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  INNERuntimeGPU *pIVar3;
  UObject *local_res8;
  TWeakInterfacePtr<INNERuntime> local_18;
  
  GetRuntime(&local_18,param_1);
  if ((((local_18.InterfaceInstance == (INNERuntime *)0x0) ||
       (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_18), !bVar1)) ||
      (local_18.InterfaceInstance == (INNERuntime *)0x0)) ||
     (this = (UObjectBaseUtility *)(**(code **)((longlong)*local_18.InterfaceInstance + 8))(),
     this == (UObjectBaseUtility *)0x0)) {
    pIVar3 = (INNERuntimeGPU *)0x0;
    (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
    __return_storage_ptr__->InterfaceInstance = (INNERuntimeGPU *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UNNERuntimeGPU_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
    (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
    __return_storage_ptr__->InterfaceInstance = (INNERuntimeGPU *)0x0;
    if ((pIVar3 != (INNERuntimeGPU *)0x0) &&
       (local_res8 = (UObject *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3),
       local_res8 != (UObject *)0x0)) goto LAB_14eae45c4;
  }
  local_res8 = (UObject *)0x0;
LAB_14eae45c4:
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    (&__return_storage_ptr__->ObjectInstance,(void *)0x0);
  if (!bVar1) {
    __return_storage_ptr__->InterfaceInstance = pIVar3;
  }
  return __return_storage_ptr__;
}

// GetRuntime<INNERuntimeRDG> @ 14eae4620

TWeakInterfacePtr<INNERuntimeRDG> * __cdecl
UE::NNE::GetRuntime<INNERuntimeRDG>
          (TWeakInterfacePtr<INNERuntimeRDG> *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  INNERuntimeRDG *pIVar3;
  UObject *local_res8;
  TWeakInterfacePtr<INNERuntime> local_18;
  
  GetRuntime(&local_18,param_1);
  if ((((local_18.InterfaceInstance == (INNERuntime *)0x0) ||
       (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_18), !bVar1)) ||
      (local_18.InterfaceInstance == (INNERuntime *)0x0)) ||
     (this = (UObjectBaseUtility *)(**(code **)((longlong)*local_18.InterfaceInstance + 8))(),
     this == (UObjectBaseUtility *)0x0)) {
    pIVar3 = (INNERuntimeRDG *)0x0;
    (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
    __return_storage_ptr__->InterfaceInstance = (INNERuntimeRDG *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UNNERuntimeRDG_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
    (__return_storage_ptr__->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
    __return_storage_ptr__->InterfaceInstance = (INNERuntimeRDG *)0x0;
    if ((pIVar3 != (INNERuntimeRDG *)0x0) &&
       (local_res8 = (UObject *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3),
       local_res8 != (UObject *)0x0)) goto LAB_14eae46b4;
  }
  local_res8 = (UObject *)0x0;
LAB_14eae46b4:
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    (&__return_storage_ptr__->ObjectInstance,(void *)0x0);
  if (!bVar1) {
    __return_storage_ptr__->InterfaceInstance = pIVar3;
  }
  return __return_storage_ptr__;
}

// IsTensorShapeValid<int> @ 14eae4c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNEDenoiser::Private::IsTensorShapeValid<int>
          (TArrayView<int_const_,int> *param_1,TArrayView<int_const_,int> *param_2,FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_2->ArrayNum;
  if (param_1->ArrayNum == iVar9) {
    uVar6 = 0;
    if (0 < iVar9) {
      lVar7 = 0;
      do {
        uVar8 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < iVar9) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (-1 < param_2->DataPtr[lVar7]) {
          uVar5 = 0;
          if ((int)uVar6 < param_1->ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          piVar1 = param_1->DataPtr;
          uVar5 = 0;
          if ((int)uVar6 < param_2->ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (piVar1[lVar7] != param_2->DataPtr[lVar7]) {
            if (1 < (byte)LogNNEDenoiser._0_1_) {
              TArrayView<int_const_,int>::operator[](param_1,uVar6);
              TArrayView<int_const_,int>::operator[](param_2,uVar6);
              Logging::Private::BasicLog<2>
                        (&`bool___cdecl_UE::NNEDenoiser::Private::IsTensorShapeValid<int>(TArrayView<int_const_,int>,TArrayView<int_const_,int>,FString_const&___ptr64)'
                          ::__l20::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
            }
            goto LAB_14eae4e1d;
          }
        }
        iVar9 = param_2->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar6 < iVar9);
    }
    bVar3 = true;
  }
  else if ((byte)LogNNEDenoiser._0_1_ < 2) {
LAB_14eae4e1d:
    bVar3 = false;
  }
  else if ((param_3->Data).ArrayNum == 0) {
    Logging::Private::BasicLog<2>
              (&`bool___cdecl_UE::NNEDenoiser::Private::IsTensorShapeValid<int>(TArrayView<int_const_,int>,TArrayView<int_const_,int>,FString_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    bVar3 = false;
  }
  else {
    Logging::Private::BasicLog<2>
              (&`bool___cdecl_UE::NNEDenoiser::Private::IsTensorShapeValid<int>(TArrayView<int_const_,int>,TArrayView<int_const_,int>,FString_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    bVar3 = false;
  }
  return bVar3;
}

// IsTensorShapeValid<unsigned_int> @ 14eae4e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::NNEDenoiser::Private::IsTensorShapeValid<unsigned_int>
          (TArrayView<unsigned_int_const_,int> *param_1,TArrayView<int_const_,int> *param_2,
          FString *param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_2->ArrayNum;
  if (param_1->ArrayNum == iVar9) {
    uVar6 = 0;
    if (0 < iVar9) {
      lVar7 = 0;
      do {
        uVar8 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < iVar9) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (-1 < param_2->DataPtr[lVar7]) {
          uVar5 = 0;
          if ((int)uVar6 < param_1->ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          puVar1 = param_1->DataPtr;
          uVar5 = 0;
          if ((int)uVar6 < param_2->ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (puVar1[lVar7] != param_2->DataPtr[lVar7]) {
            if (1 < (byte)LogNNEDenoiser._0_1_) {
              TArrayView<unsigned_int_const_,int>::operator[](param_1,uVar6);
              TArrayView<int_const_,int>::operator[](param_2,uVar6);
              Logging::Private::BasicLog<2>
                        (&`bool___cdecl_UE::NNEDenoiser::Private::IsTensorShapeValid<unsigned_int>(TArrayView<unsigned_int_const_,int>,TArrayView<int_const_,int>,FString_const&___ptr64)'
                          ::__l20::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
            }
            goto LAB_14eae503d;
          }
        }
        iVar9 = param_2->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar6 < iVar9);
    }
    bVar3 = true;
  }
  else if ((byte)LogNNEDenoiser._0_1_ < 2) {
LAB_14eae503d:
    bVar3 = false;
  }
  else if ((param_3->Data).ArrayNum == 0) {
    Logging::Private::BasicLog<2>
              (&`bool___cdecl_UE::NNEDenoiser::Private::IsTensorShapeValid<unsigned_int>(TArrayView<unsigned_int_const_,int>,TArrayView<int_const_,int>,FString_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    bVar3 = false;
  }
  else {
    Logging::Private::BasicLog<2>
              (&`bool___cdecl_UE::NNEDenoiser::Private::IsTensorShapeValid<unsigned_int>(TArrayView<unsigned_int_const_,int>,TArrayView<int_const_,int>,FString_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    bVar3 = false;
  }
  return bVar3;
}

// MakeTensorLayout<FNNEDenoiserInputMappingData> @ 14eae5110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResourceMappingList * __cdecl
UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserInputMappingData>
          (FResourceMappingList *__return_storage_ptr__,UDataTable *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined1 auStackY_d8 [32];
  undefined8 *local_a8;
  FString local_a0;
  code *local_90;
  undefined8 **local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_a8 = (undefined8 *)local_78;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  ::FString::FString(&local_a0,"FResourceLayout");
  local_90 = Core::Private::Function::
             TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserInputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserInputMappingData_const_&>
             ::Call;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar2.Data = local_a0.Data.AllocatorInstance.Data;
  }
  local_88 = &local_a8;
  UDataTable::ForeachRow<FNNEDenoiserInputMappingData>
            (param_1,(wchar_t *)FVar2.Data,
             (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserInputMappingData_const_&)> *)
             &local_90);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  Detail::MakeTensorLayout
            (__return_storage_ptr__,
             (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
              *)local_78);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// MakeTensorLayout<FNNEDenoiserOutputMappingData> @ 14eae5280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResourceMappingList * __cdecl
UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserOutputMappingData>
          (FResourceMappingList *__return_storage_ptr__,UDataTable *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined1 auStackY_d8 [32];
  undefined8 *local_a8;
  FString local_a0;
  code *local_90;
  undefined8 **local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_a8 = (undefined8 *)local_78;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  ::FString::FString(&local_a0,"FResourceLayout");
  local_90 = Core::Private::Function::
             TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserOutputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserOutputMappingData_const_&>
             ::Call;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar2.Data = local_a0.Data.AllocatorInstance.Data;
  }
  local_88 = &local_a8;
  UDataTable::ForeachRow<FNNEDenoiserOutputMappingData>
            (param_1,(wchar_t *)FVar2.Data,
             (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserOutputMappingData_const_&)> *)
             &local_90);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  Detail::MakeTensorLayout
            (__return_storage_ptr__,
             (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
              *)local_78);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// MakeTensorLayout<FNNEDenoiserTemporalInputMappingData> @ 14eae53f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResourceMappingList * __cdecl
UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalInputMappingData>
          (FResourceMappingList *__return_storage_ptr__,UDataTable *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined1 auStackY_d8 [32];
  undefined8 *local_a8;
  FString local_a0;
  code *local_90;
  undefined8 **local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_a8 = (undefined8 *)local_78;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  ::FString::FString(&local_a0,"FResourceLayout");
  local_90 = Core::Private::Function::
             TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalInputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserTemporalInputMappingData_const_&>
             ::Call;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar2.Data = local_a0.Data.AllocatorInstance.Data;
  }
  local_88 = &local_a8;
  UDataTable::ForeachRow<FNNEDenoiserTemporalInputMappingData>
            (param_1,(wchar_t *)FVar2.Data,
             (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserTemporalInputMappingData_const_&)>
              *)&local_90);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  Detail::MakeTensorLayout
            (__return_storage_ptr__,
             (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
              *)local_78);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// MakeTensorLayout<FNNEDenoiserTemporalOutputMappingData> @ 14eae5560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResourceMappingList * __cdecl
UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalOutputMappingData>
          (FResourceMappingList *__return_storage_ptr__,UDataTable *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined1 auStackY_d8 [32];
  undefined8 *local_a8;
  FString local_a0;
  code *local_90;
  undefined8 **local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_a8 = (undefined8 *)local_78;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  ::FString::FString(&local_a0,"FResourceLayout");
  local_90 = Core::Private::Function::
             TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalOutputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserTemporalOutputMappingData_const_&>
             ::Call;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar2.Data = local_a0.Data.AllocatorInstance.Data;
  }
  local_88 = &local_a8;
  UDataTable::ForeachRow<FNNEDenoiserTemporalOutputMappingData>
            (param_1,(wchar_t *)FVar2.Data,
             (TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserTemporalOutputMappingData_const_&)>
              *)&local_90);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  Detail::MakeTensorLayout
            (__return_storage_ptr__,
             (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
              *)local_78);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// RoundUp<int,int> @ 14eae5a50

int __cdecl UE::NNEDenoiser::Private::RoundUp<int,int>(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1 + param_1;
  return iVar1 - iVar1 % param_2;
}

// operator() @ 14eae7bb0

void __thiscall
`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserInputMappingData>'::__l2::<lambda_1>::
operator()(void *this,FName *param_1,FNNEDenoiserInputMappingData *param_2)

{
  EInputResourceName EVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  EResourceName EVar5;
  
  EVar1 = param_2->Resource;
  lVar3 = param_2->_padding_;
  if (EVar1 != Color) {
    if (EVar1 == Albedo) {
      EVar5 = Albedo;
      goto LAB_14eae7c0a;
    }
    if (EVar1 == Normal) {
      EVar5 = Normal;
      goto LAB_14eae7c0a;
    }
    if (EVar1 == Output) {
      EVar5 = Output;
      goto LAB_14eae7c0a;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x12,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = Color;
LAB_14eae7c0a:
  UE::NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)this,(int)param_2->_padding_,*(int *)((longlong)&param_2->_padding_ + 4),EVar5,
             (int)lVar3,0);
  return;
}

// operator() @ 14eae7c50

void __thiscall
`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserOutputMappingData>'::__l2::<lambda_1>::
operator()(void *this,FName *param_1,FNNEDenoiserOutputMappingData *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  EResourceName EVar4;
  
  lVar2 = param_2->_padding_;
  if (param_2->Resource == Output) {
    EVar4 = Output;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar4 = Color;
  }
  UE::NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)this,(int)param_2->_padding_,*(int *)((longlong)&param_2->_padding_ + 4),EVar4,
             (int)lVar2,0);
  return;
}

// operator() @ 14eae7cd0

void __thiscall
`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalInputMappingData>'::__l2::<lambda_1>
::operator()(void *this,FName *param_1,FNNEDenoiserTemporalInputMappingData *param_2)

{
  ETemporalInputResourceName EVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  EResourceName EVar6;
  
  EVar1 = param_2->Resource;
  iVar2 = param_2->FrameIndex;
  lVar4 = param_2->_padding_;
  if (EVar1 != Color) {
    if (EVar1 == Albedo) {
      EVar6 = Albedo;
      goto LAB_14eae7d38;
    }
    if (EVar1 == Normal) {
      EVar6 = Normal;
      goto LAB_14eae7d38;
    }
    if (EVar1 == Flow) {
      EVar6 = Flow;
      goto LAB_14eae7d38;
    }
    if (EVar1 == Output) {
      EVar6 = Output;
      goto LAB_14eae7d38;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x2a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar6 = Color;
LAB_14eae7d38:
  UE::NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)this,(int)param_2->_padding_,*(int *)((longlong)&param_2->_padding_ + 4),EVar6,
             (int)lVar4,iVar2);
  return;
}

// operator() @ 14eae7d80

void __thiscall
`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalOutputMappingData>'::__l2::
<lambda_1>::operator()(void *this,FName *param_1,FNNEDenoiserTemporalOutputMappingData *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  EResourceName EVar4;
  
  lVar2 = param_2->_padding_;
  if (param_2->Resource == Output) {
    EVar4 = Output;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x34,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar4 = Color;
  }
  UE::NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)this,(int)param_2->_padding_,*(int *)((longlong)&param_2->_padding_ + 4),EVar4,
             (int)lVar2,0);
  return;
}

// operator() @ 14eaea790

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`UE::NNEDenoiser::Private::CreateTiling'::__l2::<lambda_3>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int local_38 [4];
  
  iVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < param_1) {
    do {
      if (iVar6 < param_1 + -1) {
        local_38[0] = (param_2 - param_3) * iVar6;
      }
      else {
        local_38[0] = 0;
        if (0 < param_4 - param_2) {
          local_38[0] = param_4 - param_2;
        }
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      iVar6 = iVar6 + 1;
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_38[0]
      ;
    } while (iVar6 < param_1);
  }
  return __return_storage_ptr__;
}

// Add @ 14eaebd90

void __cdecl
UE::NNEDenoiser::Private::Detail::Add
          (TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
           *param_1,int param_2,int param_3,EResourceName param_4,int param_5,int param_6)

{
  ForElementType<FSetElementId> FVar1;
  int iVar2;
  TSet<TTuple<int,UE::NNEDenoiser::Private::FResourceInfo>,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>,FDefaultSetAllocator>
  *this;
  longlong lVar3;
  TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
  *this_00;
  FResourceInfo *pFVar4;
  ForElementType<FSetElementId> FVar5;
  uint local_res10 [2];
  uint local_res18 [4];
  uint local_38;
  int local_34;
  uint *local_30;
  undefined4 local_28;
  uint uStack_24;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 < 0) {
    local_38 = 0;
    if (0 < -param_3) {
      do {
        local_28 = CONCAT31(local_28._1_3_,param_4);
        uStack_24 = local_38;
        this = (TSet<TTuple<int,UE::NNEDenoiser::Private::FResourceInfo>,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>,FDefaultSetAllocator>
                *)TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                              *)param_1,local_res10[0],(int *)local_res10);
        if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
          FVar1 = (this->Hash).SecondaryData;
          FVar5 = (ForElementType<FSetElementId>)&this->Hash;
          if (FVar1 != (ForElementType<FSetElementId>)0x0) {
            FVar5 = FVar1;
          }
          iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & local_38) * 4);
          if (iVar2 != -1) {
            do {
              lVar3 = *(longlong *)&this->Elements + (longlong)iVar2 * 0x18;
              if (*(uint *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x18) == local_38) {
                if (lVar3 != 0) goto LAB_14eaebe70;
                break;
              }
              iVar2 = *(int *)(lVar3 + 0x10);
            } while (iVar2 != -1);
          }
        }
        local_30 = &local_38;
        TSet<TTuple<int,UE::NNEDenoiser::Private::FResourceInfo>,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  (this,(uint)&local_34,(TKeyInitializer<int_const_&> *)(ulonglong)local_38,
                   (bool *)&local_30);
        lVar3 = *(longlong *)&this->Elements + (longlong)local_34 * 0x18;
LAB_14eaebe70:
        *(ulonglong *)(lVar3 + 4) = CONCAT44(uStack_24,local_28);
        *(undefined4 *)(lVar3 + 0xc) = 0;
        local_38 = local_38 + 1;
        if ((int)-local_res18[0] <= (int)local_38) {
          return;
        }
      } while( true );
    }
  }
  else {
    uStack_24 = param_5;
    local_28 = CONCAT31(local_28._1_3_,param_4);
    this_00 = TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                          *)param_1,param_2,(int *)local_res10);
    pFVar4 = TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
                         *)this_00,local_res18[0],(int *)local_res18);
    pFVar4->Name = (char)local_28;
    *(int3 *)&pFVar4->field_0x1 = (int3)((uint)local_28 >> 8);
    pFVar4->Channel = uStack_24;
    pFVar4->Frame = 0;
  }
  return;
}

// AddTilePasses @ 14eaee9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::NNEDenoiser::Private::AddTilePasses
          (FRDGBuilder *param_1,IModelInstance *param_2,IInputProcess *param_3,
          IOutputProcess *param_4,FResourceManager *param_5,
          TArrayView<FRDGBuffer_*_const,int> *param_6,TArrayView<FRDGBuffer_*_const,int> *param_7)

{
  code *pcVar1;
  FRDGBuffer **ppFVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> *pTVar7;
  FRDGTexture *pFVar8;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined **local_178;
  FResourceManager *local_170;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> local_168;
  undefined8 local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  TArrayView<FRDGBuffer_*_const,int> local_f8;
  TArrayView<FRDGBuffer_*_const,int> local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> local_a8;
  FRDGBuffer **local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  local_170 = param_5;
  local_178 = &___7FResourceAccess_Private_NNEDenoiser_UE__6B_;
  pcVar1 = *(code **)((longlong)*param_3 + 0x20);
  puVar6 = (undefined4 *)(**(code **)((longlong)*param_2 + 0x18))(param_2,local_68);
  local_118 = *puVar6;
  uStack_114 = puVar6[1];
  uStack_110 = puVar6[2];
  uStack_10c = puVar6[3];
  local_128 = *(undefined4 *)&param_6->DataPtr;
  uStack_124 = *(undefined4 *)((longlong)&param_6->DataPtr + 4);
  iStack_120 = param_6->ArrayNum;
  uStack_11c = *(undefined4 *)&param_6->field_0xc;
  puVar6 = (undefined4 *)(**(code **)((longlong)*param_2 + 8))(param_2,local_58);
  local_108 = *puVar6;
  uStack_104 = puVar6[1];
  uStack_100 = puVar6[2];
  uStack_fc = puVar6[3];
  (*pcVar1)(param_3,param_1,&local_108,&local_118,&local_178,&local_128);
  pcVar1 = *(code **)((longlong)*param_2 + 0x30);
  local_f8.DataPtr = param_7->DataPtr;
  local_f8.ArrayNum = param_7->ArrayNum;
  local_f8._12_4_ = *(undefined4 *)&param_7->field_0xc;
  pTVar7 = GetBindingRDG(&local_a8,&local_f8);
  local_158 = (pTVar7->AllocatorInstance).Data;
  iStack_150 = pTVar7->ArrayNum;
  if (iStack_150 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e8.DataPtr = param_6->DataPtr;
  local_e8.ArrayNum = param_6->ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&param_6->field_0xc;
  pTVar7 = GetBindingRDG(&local_b8,&local_e8);
  local_148 = (pTVar7->AllocatorInstance).Data;
  iStack_140 = pTVar7->ArrayNum;
  if (iStack_140 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_c8 = (undefined4)local_148;
  uStack_c4 = local_148._4_4_;
  uStack_bc = uStack_13c;
  local_d8 = (undefined4)local_158;
  uStack_d4 = local_158._4_4_;
  iStack_d0 = iStack_150;
  uStack_cc = uStack_14c;
  iStack_c0 = iStack_140;
  cVar5 = (*pcVar1)(param_2,param_1);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (cVar5 != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status == NNE::IModelInstanceRDG::EEnqueueRDGStatus::Ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                       ,0x83,L"EnqueueRDG failed: %d");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar8 = FResourceManager::GetTexture(param_5,Output,0,false);
  pcVar1 = *(code **)((longlong)*param_4 + 0x10);
  ppFVar2 = param_7->DataPtr;
  uVar3 = *(undefined8 *)&param_7->ArrayNum;
  pTVar9 = GetOutputTensorShapes(&local_168,param_2);
  local_138 = (pTVar9->AllocatorInstance).Data;
  iStack_130 = pTVar9->ArrayNum;
  if (iStack_130 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88 = (undefined4)local_138;
  uStack_84 = local_138._4_4_;
  uStack_7c = uStack_12c;
  local_98 = ppFVar2;
  uStack_90 = uVar3;
  iStack_80 = iStack_130;
  puVar6 = (undefined4 *)(**(code **)((longlong)*param_2 + 0x10))(param_2,local_48);
  local_78 = *puVar6;
  uStack_74 = puVar6[1];
  uStack_70 = puVar6[2];
  uStack_6c = puVar6[3];
  (*pcVar1)(param_4,param_1,&local_78,&local_88,&local_178,&local_98,pFVar8);
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return;
}

// ApplyTransferFunction @ 14eaef4c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::NNEDenoiser::Private::Oidn::Helper::ApplyTransferFunction
          (FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3,FRDGBuffer *param_4,
          float param_5,float param_6,bool param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FRDGBufferSRV *pFVar9;
  FRDGTextureUAV *pFVar10;
  FGlobalShaderMap *this;
  FShaderType *pFVar11;
  FName this_00;
  FRDGScope *this_01;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  undefined8 *puVar14;
  undefined8 *local_148;
  int local_140;
  int iStack_13c;
  FRDGTextureUAVDesc local_130;
  TIntVector3<int>_u_0 local_118;
  TRDGEventScopeGuard<FRDGScope_RHI> local_108;
  undefined1 local_f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  FRDGBufferSRVDesc local_d8;
  FString local_b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_> local_a8;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS,FShaderMapPointerTable>
  local_98;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  FRDGEventName local_68;
  
  iVar3 = *(int *)&(param_2->Desc).field_0x28;
  iVar4 = *(int *)&(param_2->Desc).field_0x24;
  puVar14 = (undefined8 *)0x0;
  if ((((iVar4 != *(int *)&(param_3->Desc).field_0x24) ||
       (iVar3 != *(int *)&(param_3->Desc).field_0x28)) ||
      (*(short *)&(param_2->Desc).field_0x2c != *(short *)&(param_3->Desc).field_0x2c)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == OutputTexture->Desc.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserTransferFunctionOidn.cpp"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar8[3] = 0;
    *puVar8 = &
              ___7__TObject_VFParameters_FTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar8[4] = 0;
    puVar8[6] = 0;
    puVar14 = puVar8;
  }
  local_148 = puVar14;
  if ((((undefined8 **)param_1->_padding_ <= &local_148) &&
      (&local_148 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  local_d8._padding_._0_1_ = 0xd;
  local_d8._padding_._0_4_ = 0xffffffff;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_148;
  ((FParameters *)(puVar14 + 2))->Width = iVar4;
  *(int *)((longlong)puVar14 + 0x14) = iVar3;
  puVar14[3] = param_2;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_ = 0;
  local_d8.Buffer = param_4;
  pFVar9 = FRDGBuilder::CreateSRV(param_1,&local_d8);
  local_130._padding_._1_1_ = 0;
  puVar14[4] = pFVar9;
  *(float *)(puVar14 + 5) = param_5;
  *(float *)((longlong)puVar14 + 0x2c) = param_6;
  local_130._padding_._0_1_ = (param_3->Desc).field_0x34;
  local_130._padding_._2_4_ = 0;
  local_130._padding_._6_1_ = 0;
  local_130._padding_._0_1_ = 0;
  local_130.Texture = param_3;
  pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_130,None);
  puVar14[6] = pFVar10;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar11 = (FShaderType *)NNEDenoiserShaders::Internal::FTransferFunctionOidnCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_e8,pFVar11,param_7 ^ 1);
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_140);
    ::FName::ToString((FName *)this_00,&local_b8);
    NNEDenoiserShaders::Internal::FTransferFunctionOidnCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FTransferFunctionOidnCS::GetStaticType();
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar6 = false;
  local_98.ShaderContent = (FTransferFunctionOidnCS *)local_e8.ShaderContent;
  local_98.ShaderMap = local_e8.ShaderMap;
  local_f8 = 0;
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x57;
      local_78 = 0x54dc5780;
      uStack_74 = 1;
      ::Desc._padding_._0_4_ = 0x54dc5780;
      ::Desc._padding_._4_4_ = uStack_7c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Tra;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Tra;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::Oidn::Helper::ApplyTransferFunction'::__l14::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_a8._Myfirst._Val = &::Desc;
    local_108.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_108.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_a8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar6 = true;
    local_f8 = 1;
  }
  local_140 = (int)((iVar4 + 0xf >> 0x1f & 0xfU) + iVar4 + 0xf) >> 4;
  iStack_13c = (int)(iVar3 + 0xf + (iVar3 + 0xf >> 0x1f & 0xfU)) >> 4;
  pFVar12 = FRDGEventName::FRDGEventName(&local_68,1,L"NNEDenoiser.TransferFunctionOidn");
  pFVar13 = NNEDenoiserShaders::Internal::FTransferFunctionOidnCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_118._0_8_ = CONCAT44(iStack_13c,local_140);
  local_118._s_0.Z = 1;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>
            (param_1,pFVar12,NeverCull|Compute,&local_98,pFVar13,(FParameters *)(puVar14 + 2),
             (TIntVector3<int> *)&local_118._s_0);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_108);
  }
  return;
}

// CreateBufferRDG @ 14eaf07c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
UE::NNEDenoiser::Private::CreateBufferRDG
          (FRDGBuilder *param_1,FTensorDesc *param_2,FTensorShape *param_3)

{
  uint uVar1;
  ulong64 uVar2;
  FRDGBuffer *pFVar3;
  wchar_t *pwVar4;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  uVar1 = NNE::GetTensorDataTypeSizeInBytes(param_2->DataType);
  uVar2 = NNE::FTensorShape::Volume(param_3);
  local_20.NumElements = (uint)uVar2;
  local_20.BytesPerElement = uVar1;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = VertexBuffer|NNE|ShaderResource|UnorderedAccess|Static;
  if ((param_2->Name).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Name).Data.AllocatorInstance.Data;
  }
  pFVar3 = FRDGBuilder::CreateBuffer(param_1,&local_20,pwVar4,None);
  return pFVar3;
}

// CreateBuffersRDG @ 14eaf0860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNEDenoiser::Private::CreateBuffersRDG
          (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRDGBuilder *param_1,TArrayView<UE::NNE::FTensorDesc_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_3)

{
  FTensorShape *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *pTVar5;
  ulong64 uVar6;
  FRDGBuffer *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uchar *puVar11;
  uint uVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  longlong local_res8;
  undefined4 uStack_5c;
  FRDGBufferDesc local_50;
  
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TensorDescs.Num() == TensorShapes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                         ,0x32,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  uVar4 = param_2->ArrayNum;
  uVar9 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((int)uVar4 < 1) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&__return_storage_ptr__->AllocatorInstance,
               &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    local_res8 = 0;
    uVar10 = uVar9;
    uVar14 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar12 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      pFVar1 = param_3->DataPtr;
      uVar4 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      puVar11 = (param_2->DataPtr->Shape).Data.AllocatorInstance.InlineData + local_res8 + -0x18;
      uVar4 = NNE::GetTensorDataTypeSizeInBytes(puVar11[0x10]);
      uVar6 = NNE::FTensorShape::Volume
                        ((FTensorShape *)((pFVar1->Data).AllocatorInstance.InlineData + uVar14));
      local_50.NumElements = (uint)uVar6;
      local_50.BytesPerElement = uVar4;
      local_50.Metadata = (FShaderParametersMetadata *)0x0;
      local_50._12_4_ = uStack_5c;
      local_50.Usage = VertexBuffer|NNE|ShaderResource|UnorderedAccess|Static;
      if (*(int *)(puVar11 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)puVar11;
      }
      pFVar7 = FRDGBuilder::CreateBuffer(param_1,&local_50,pwVar13,None);
      uVar4 = 0;
      if ((int)uVar8 < __return_storage_ptr__->ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar14 = uVar14 + 0x30;
      *(FRDGBuffer **)((__return_storage_ptr__->AllocatorInstance).Data + uVar10 * 8) = pFVar7;
      uVar10 = uVar10 + 1;
      local_res8 = local_res8 + 0x48;
    } while ((int)(uVar8 + 1) < param_2->ArrayNum);
  }
  return __return_storage_ptr__;
}

// CreateNNEDenoiser @ 14eaf0c40

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
 __cdecl UE::NNEDenoiser::Private::CreateNNEDenoiser
                   (UNNEModelData *param_1,EDenoiserRuntimeType param_2,FString *param_3,
                   TUniquePtr<UE::NNEDenoiser::Private::IInputProcess,TDefaultDelete<UE::NNEDenoiser::Private::IInputProcess>_>
                   param_4,TUniquePtr<UE::NNEDenoiser::Private::IOutputProcess,TDefaultDelete<UE::NNEDenoiser::Private::IOutputProcess>_>
                           param_5,FParameters *param_6,
                   TUniquePtr<UE::NNEDenoiser::Private::IAutoExposure,TDefaultDelete<UE::NNEDenoiser::Private::IAutoExposure>_>
                   param_7,TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1> *param_8)

{
  TTuple<EDenoiserRuntimeType,FString> *pTVar1;
  byte bVar2;
  int iVar3;
  IOutputProcess IVar4;
  ITransferFunction *pIVar5;
  code *pcVar6;
  int iVar7;
  TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
  TVar8;
  longlong lVar9;
  FString *pFVar10;
  UPackage *pUVar11;
  UEnum *pUVar12;
  TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
  TVar13;
  TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
  TVar14;
  TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceRDG,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceRDG>_>
  TVar15;
  FGenericDenoiser *pFVar16;
  undefined8 *puVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined7 in_register_00000011;
  FString *pFVar19;
  int *piVar20;
  FScriptContainerElement *pFVar21;
  char *pcVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  FScriptContainerElement FVar25;
  bool bVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 *in_stack_00000048;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_197 [7];
  undefined1 local_190 [8];
  FString local_188;
  undefined1 local_178 [8];
  FString local_170;
  undefined1 local_160 [8];
  FString local_158;
  undefined1 local_148 [8];
  FString local_140;
  undefined1 local_130 [8];
  TPairInitializer<EDenoiserRuntimeType_&&,wchar_t_const_(&)[17]> local_128;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 local_108 [48];
  FString local_d8;
  FString local_c8;
  undefined1 *local_b8;
  wchar_t *local_b0;
  undefined1 *local_a8;
  wchar_t *local_a0;
  undefined1 *local_98;
  wchar_t *local_90;
  TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1> local_88;
  undefined1 local_78 [8];
  FString local_70;
  IAutoExposure local_58;
  IAutoExposure IStack_50;
  
  pFVar19 = (FString *)CONCAT71(in_register_00000011,param_2);
  piVar20 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar20 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::NNEDenoiser::Private::CreateNNEDenoiser'::__l2::
           _dynamic_atexit_destructor_for__DefaultRuntimeNames__);
    _Init_thread_footer(&::_TSS0);
  }
  local_b8 = local_res18;
  local_res18[0] = 0;
  local_b0 = L"NNERuntimeORTCpu";
  TSet<TTuple<enum_EDenoiserRuntimeType,FString>,TDefaultMapHashableKeyFuncs<enum_EDenoiserRuntimeType,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDenoiserRuntimeType_&&,wchar_t_const_(&)[17]>_>
            (&DefaultRuntimeNames,
             (TPairInitializer<EDenoiserRuntimeType_&&,wchar_t_const_(&)[17]> *)local_130,
             (bool *)&local_b8);
  local_a8 = local_res20;
  local_res20[0] = 1;
  local_a0 = L"NNERuntimeORTDml";
  TSet<TTuple<enum_EDenoiserRuntimeType,FString>,TDefaultMapHashableKeyFuncs<enum_EDenoiserRuntimeType,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDenoiserRuntimeType_&&,wchar_t_const_(&)[17]>_>
            (&DefaultRuntimeNames,
             (TPairInitializer<EDenoiserRuntimeType_&&,wchar_t_const_(&)[17]> *)(local_130 + 4),
             (bool *)&local_a8);
  local_98 = &local_198;
  local_198 = 2;
  local_90 = L"NNERuntimeORTDml";
  TSet<TTuple<enum_EDenoiserRuntimeType,FString>,TDefaultMapHashableKeyFuncs<enum_EDenoiserRuntimeType,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDenoiserRuntimeType_&&,wchar_t_const_(&)[17]>_>
            (&DefaultRuntimeNames,&local_128,(bool *)&local_98);
  if ((*piVar20 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&FallbackRuntimeNameRDG,L"NNERuntimeRDGHlsl");
    atexit(`UE::NNEDenoiser::Private::CreateNNEDenoiser'::__l2::
           _dynamic_atexit_destructor_for__FallbackRuntimeNameRDG__);
    _Init_thread_footer(&::_TSS1);
  }
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  FVar25 = SUB81(param_3,0);
  if (1 < *(int *)(param_4.Ptr + 1)) {
    local_190[0] = FVar25;
    ::FString::FString(&local_188,(FString *)param_4.Ptr);
    FVar24.Data = local_1a8.Data;
    pTVar1 = (TTuple<EDenoiserRuntimeType,FString> *)
             (local_1a8.Data + (longlong)(int)local_1a0 * 0x18);
    if ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data != pTVar1) {
      FVar23.Data = local_1a8.Data;
      iVar7 = local_188.Data.ArrayNum;
      do {
        if (*FVar23.Data == local_190[0]) {
          iVar3 = *(int *)&((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x10;
          if (iVar3 == iVar7) {
            if (1 < iVar3) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)
                                  &((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x8,
                                 (wchar_t *)local_188.Data.AllocatorInstance.Data);
              bVar26 = iVar7 == 0;
              iVar7 = local_188.Data.ArrayNum;
              goto LAB_14eaf0db7;
            }
          }
          else {
            bVar26 = iVar3 + iVar7 == 1;
LAB_14eaf0db7:
            if (!bVar26) goto LAB_14eaf0dbe;
          }
          if ((int)(((longlong)FVar23.Data - (longlong)FVar24.Data) / 0x18) != -1)
          goto LAB_14eaf0ecf;
          break;
        }
LAB_14eaf0dbe:
        FVar23.Data = FVar23.Data + 0x18;
      } while ((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data != pTVar1);
    }
    iVar7 = (int)local_1a0;
    if ((local_1a8.Data <= (TTuple<EDenoiserRuntimeType,FString> *)local_190) &&
       ((FScriptContainerElement *)local_190 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x18)) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar26) {
        pcVar6 = (code *)swi(3);
        TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                )TVar8.Ptr;
      }
      iVar7 = (int)local_1a0;
    }
    if (iVar7 == local_1a0._4_4_) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_1a8,(int *)((longlong)&local_1a0 + 4));
    }
    lVar9 = (longlong)iVar7;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
    local_1a8.Data[lVar9 * 0x18] = local_190[0];
    *(undefined8 *)(local_1a8.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_1a8.Data + lVar9 * 0x18 + 8) =
         local_188.Data.AllocatorInstance.Data;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x10) = local_188.Data.ArrayNum;
    *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x14) = local_188.Data.ArrayMax;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
LAB_14eaf0ecf:
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  pFVar21 = (FScriptContainerElement *)0x0;
  if (DefaultRuntimeNames._8_4_ != DefaultRuntimeNames._52_4_) {
    lVar9 = 0x154dc4ec8;
    if (DefaultRuntimeNames._64_8_ != 0) {
      lVar9 = DefaultRuntimeNames._64_8_;
    }
    iVar7 = *(int *)(lVar9 + ((ulonglong)(DefaultRuntimeNames._72_4_ - 1) &
                             (ulonglong)param_3 & 0xff) * 4);
    while (pFVar21 = (FScriptContainerElement *)0x0, iVar7 != -1) {
      pFVar21 = (FScriptContainerElement *)((longlong)iVar7 * 0x20 + DefaultRuntimeNames._0_8_);
      if (*pFVar21 == FVar25) {
        if (pFVar21 != (FScriptContainerElement *)0x0) goto LAB_14eaf0f61;
        break;
      }
      iVar7 = *(int *)(pFVar21 + 0x18);
    }
  }
  bVar26 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar26) {
    pcVar6 = (code *)swi(3);
    TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
            )TVar8.Ptr;
  }
LAB_14eaf0f61:
  iVar7 = *(int *)(param_4.Ptr + 1);
  if (iVar7 == *(int *)(pFVar21 + 0x10)) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)*param_4.Ptr,*(wchar_t **)(pFVar21 + 8));
      bVar26 = iVar7 == 0;
      goto LAB_14eaf0f91;
    }
  }
  else {
    bVar26 = iVar7 + *(int *)(pFVar21 + 0x10) == 1;
LAB_14eaf0f91:
    if (!bVar26) {
      local_178[0] = FVar25;
      ::FString::FString(&local_170,(FString *)(pFVar21 + 8));
      FVar24.Data = local_1a8.Data;
      pTVar1 = (TTuple<EDenoiserRuntimeType,FString> *)
               (local_1a8.Data + (longlong)(int)local_1a0 * 0x18);
      if ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data != pTVar1) {
        FVar23.Data = local_1a8.Data;
        iVar7 = local_170.Data.ArrayNum;
        do {
          if (*FVar23.Data == local_178[0]) {
            iVar3 = *(int *)&((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x10;
            if (iVar3 == iVar7) {
              if (1 < iVar3) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)
                                    &((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->
                                     field_0x8,(wchar_t *)local_170.Data.AllocatorInstance.Data);
                bVar26 = iVar7 == 0;
                iVar7 = local_170.Data.ArrayNum;
                goto LAB_14eaf0ffd;
              }
            }
            else {
              bVar26 = iVar3 + iVar7 == 1;
LAB_14eaf0ffd:
              if (!bVar26) goto LAB_14eaf1004;
            }
            if ((int)(((longlong)FVar23.Data - (longlong)FVar24.Data) / 0x18) != -1)
            goto LAB_14eaf110d;
            break;
          }
LAB_14eaf1004:
          FVar23.Data = FVar23.Data + 0x18;
        } while ((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data != pTVar1);
      }
      iVar7 = (int)local_1a0;
      if ((local_1a8.Data <= (TTuple<EDenoiserRuntimeType,FString> *)local_178) &&
         ((FScriptContainerElement *)local_178 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x18))
      {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                  )TVar8.Ptr;
        }
        iVar7 = (int)local_1a0;
      }
      if (iVar7 == local_1a0._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_1a8,(int *)((longlong)&local_1a0 + 4));
      }
      lVar9 = (longlong)iVar7;
      local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
      local_1a8.Data[lVar9 * 0x18] = local_178[0];
      *(undefined8 *)(local_1a8.Data + lVar9 * 0x18 + 8) = 0;
      *(FScriptContainerElement **)(local_1a8.Data + lVar9 * 0x18 + 8) =
           local_170.Data.AllocatorInstance.Data;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x10) = local_170.Data.ArrayNum;
      *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x14) = local_170.Data.ArrayMax;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
LAB_14eaf110d:
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((byte)FVar25 < 2) {
    if (FVar25 == (FScriptContainerElement)0x0) goto LAB_14eaf1512;
  }
  else {
    iVar7 = *(int *)(param_4.Ptr + 1);
    if (iVar7 == FallbackRuntimeNameRDG.Data.ArrayNum) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*param_4.Ptr,
                           (wchar_t *)FallbackRuntimeNameRDG.Data.AllocatorInstance.Data);
        bVar26 = iVar7 == 0;
        goto LAB_14eaf1151;
      }
    }
    else {
      bVar26 = iVar7 + FallbackRuntimeNameRDG.Data.ArrayNum == 1;
LAB_14eaf1151:
      if (!bVar26) {
        local_78[0] = 2;
        ::FString::FString(&local_70,&FallbackRuntimeNameRDG);
        TArray<TTuple<enum_EDenoiserRuntimeType,FString>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TTuple<enum_EDenoiserRuntimeType,FString>_>
                  (&local_1a8,(TTuple<EDenoiserRuntimeType,FString> *)local_78);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar10 = TMapBase<enum_EDenoiserRuntimeType,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDenoiserRuntimeType,FString,0>_>
              ::FindChecked(&DefaultRuntimeNames,GPU);
    local_160[0] = (FScriptContainerElement)0x1;
    ::FString::FString(&local_158,pFVar10);
    FVar24.Data = local_1a8.Data;
    pTVar1 = (TTuple<EDenoiserRuntimeType,FString> *)
             (local_1a8.Data + (longlong)(int)local_1a0 * 0x18);
    if ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data != pTVar1) {
      FVar23.Data = local_1a8.Data;
      iVar7 = local_158.Data.ArrayNum;
      do {
        if (*FVar23.Data == local_160[0]) {
          iVar3 = *(int *)&((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x10;
          if (iVar3 == iVar7) {
            if (1 < iVar3) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)
                                  &((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x8,
                                 (wchar_t *)local_158.Data.AllocatorInstance.Data);
              bVar26 = iVar7 == 0;
              iVar7 = local_158.Data.ArrayNum;
              goto LAB_14eaf11fd;
            }
          }
          else {
            bVar26 = iVar3 + iVar7 == 1;
LAB_14eaf11fd:
            if (!bVar26) goto LAB_14eaf1204;
          }
          if ((int)(((longlong)FVar23.Data - (longlong)FVar24.Data) / 0x18) != -1)
          goto LAB_14eaf130d;
          break;
        }
LAB_14eaf1204:
        FVar23.Data = FVar23.Data + 0x18;
      } while ((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data != pTVar1);
    }
    iVar7 = (int)local_1a0;
    if ((local_1a8.Data <= (TTuple<EDenoiserRuntimeType,FString> *)local_160) &&
       ((FScriptContainerElement *)local_160 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x18)) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar26) {
        pcVar6 = (code *)swi(3);
        TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                )TVar8.Ptr;
      }
      iVar7 = (int)local_1a0;
    }
    if (iVar7 == local_1a0._4_4_) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_1a8,(int *)((longlong)&local_1a0 + 4));
    }
    lVar9 = (longlong)iVar7;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
    local_1a8.Data[lVar9 * 0x18] = local_160[0];
    *(undefined8 *)(local_1a8.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_1a8.Data + lVar9 * 0x18 + 8) =
         local_158.Data.AllocatorInstance.Data;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x10) = local_158.Data.ArrayNum;
    *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x14) = local_158.Data.ArrayMax;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
LAB_14eaf130d:
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if (DefaultRuntimeNames._8_4_ != DefaultRuntimeNames._52_4_) {
    piVar20 = (int *)&DefaultRuntimeNames.field_0x38;
    if (DefaultRuntimeNames._64_8_ != 0) {
      piVar20 = (int *)DefaultRuntimeNames._64_8_;
    }
    iVar7 = *piVar20;
    while (iVar7 != -1) {
      pcVar22 = (char *)((longlong)iVar7 * 0x20 + DefaultRuntimeNames._0_8_);
      if (*pcVar22 == '\0') {
        if (pcVar22 != (char *)0x0) goto LAB_14eaf138f;
        goto LAB_14eaf136d;
      }
      iVar7 = *(int *)(pcVar22 + 0x18);
    }
  }
  pcVar22 = (char *)0x0;
LAB_14eaf136d:
  bVar26 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar26) {
    pcVar6 = (code *)swi(3);
    TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
            )TVar8.Ptr;
  }
LAB_14eaf138f:
  local_148[0] = (FScriptContainerElement)0x0;
  ::FString::FString(&local_140,(FString *)(pcVar22 + 8));
  FVar24.Data = local_1a8.Data;
  pTVar1 = (TTuple<EDenoiserRuntimeType,FString> *)
           (local_1a8.Data + (longlong)(int)local_1a0 * 0x18);
  if ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data != pTVar1) {
    FVar23.Data = local_1a8.Data;
    iVar7 = local_140.Data.ArrayNum;
    do {
      if (*FVar23.Data == local_148[0]) {
        iVar3 = *(int *)&((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x10;
        if (iVar3 == iVar7) {
          if (1 < iVar3) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)
                                &((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data)->field_0x8,
                               (wchar_t *)local_140.Data.AllocatorInstance.Data);
            bVar26 = iVar7 == 0;
            iVar7 = local_140.Data.ArrayNum;
            goto LAB_14eaf13f4;
          }
        }
        else {
          bVar26 = iVar3 + iVar7 == 1;
LAB_14eaf13f4:
          if (!bVar26) goto LAB_14eaf13fb;
        }
        if ((int)(((longlong)FVar23.Data - (longlong)FVar24.Data) / 0x18) != -1) goto LAB_14eaf1504;
        break;
      }
LAB_14eaf13fb:
      FVar23.Data = FVar23.Data + 0x18;
    } while ((TTuple<EDenoiserRuntimeType,FString> *)FVar23.Data != pTVar1);
  }
  iVar7 = (int)local_1a0;
  if ((local_1a8.Data <= (TTuple<EDenoiserRuntimeType,FString> *)local_148) &&
     ((FScriptContainerElement *)local_148 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x18)) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar26) {
      pcVar6 = (code *)swi(3);
      TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
      return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
              )TVar8.Ptr;
    }
    iVar7 = (int)local_1a0;
  }
  if (iVar7 == local_1a0._4_4_) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  lVar9 = (longlong)iVar7;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
  local_1a8.Data[lVar9 * 0x18] = local_148[0];
  *(undefined8 *)(local_1a8.Data + lVar9 * 0x18 + 8) = 0;
  *(FScriptContainerElement **)(local_1a8.Data + lVar9 * 0x18 + 8) =
       local_140.Data.AllocatorInstance.Data;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x10) = local_140.Data.ArrayNum;
  *(int *)(local_1a8.Data + lVar9 * 0x18 + 0x14) = local_140.Data.ArrayMax;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
LAB_14eaf1504:
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
LAB_14eaf1512:
  iVar7 = (int)local_1a0;
  pTVar1 = (TTuple<EDenoiserRuntimeType,FString> *)
           (local_1a8.Data + (longlong)(int)local_1a0 * 0x18);
  FVar24.Data = local_1a8.Data;
  do {
    if ((int)local_1a0 != iVar7) {
      local_197[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_EDenoiserRuntimeType,FString>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_197);
    }
    if ((TTuple<EDenoiserRuntimeType,FString> *)FVar24.Data == pTVar1) {
      if (1 < (byte)LogNNEDenoiser._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      }
      param_1->_padding_ = 0;
      DestructItems<TTuple<enum_EDenoiserRuntimeType,FString>,int>
                ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data,(int)local_1a0);
      if ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data !=
          (TTuple<EDenoiserRuntimeType,FString> *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      IVar4 = *param_5.Ptr;
      if (IVar4 != (IOutputProcess)0x0) {
        (*(code *)**(undefined8 **)IVar4)(IVar4,1);
      }
      puVar17 = *(undefined8 **)&param_6->TilingConfig;
      if (puVar17 != (undefined8 *)0x0) {
        (**(code **)*puVar17)(puVar17,1);
      }
      pIVar5 = param_8->Object;
      if (pIVar5 != (ITransferFunction *)0x0) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
      pTVar18 = (TReferenceControllerBase<1> *)in_stack_00000048[1];
      goto LAB_14eaf1931;
    }
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      pUVar12 = Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton;
      if (Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton == (UEnum *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_NNEDenoiser();
        pUVar12 = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType,
                                (UObject *)pUVar11,L"EDenoiserRuntimeType");
        Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton = pUVar12;
        if ((pUVar12 == (UEnum *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumClass != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0xca4,L""), bVar26)) {
          pcVar6 = (code *)swi(3);
          TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                  )TVar8.Ptr;
        }
      }
      UEnum::GetNameByValue(pUVar12,(long64)((longlong)&local_128.Key + 4));
      ::FName::ToString((FName *)((longlong)&local_128.Key + 4),&local_d8);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = *(byte *)FVar24.Data;
    if (bVar2 == 0) {
      TVar13 = FModelInstanceCPU::Make((UNNEModelData *)&local_118,pFVar19);
      pFVar21 = (FScriptContainerElement *)(TVar13.Ptr)->_padding_;
      (TVar13.Ptr)->_padding_ = 0;
      puVar17 = local_118;
LAB_14eaf167d:
      if (puVar17 != (undefined8 *)0x0) {
        (**(code **)*puVar17)(puVar17,1);
      }
      if (pFVar21 != (FScriptContainerElement *)0x0) {
        if (3 < (byte)LogNNEDenoiser._0_1_) {
          pUVar12 = Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton;
          if (Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton == (UEnum *)0x0) {
            pUVar11 = Z_Construct_UPackage__Script_NNEDenoiser();
            pUVar12 = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType,
                                    (UObject *)pUVar11,L"EDenoiserRuntimeType");
            Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton = pUVar12;
            if ((pUVar12 == (UEnum *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EnumClass != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                    ,0xca4,L""), bVar26)) {
              pcVar6 = (code *)swi(3);
              TVar8.Ptr = (FGenericDenoiser *)(*pcVar6)();
              return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                      )TVar8.Ptr;
            }
          }
          UEnum::GetNameByValue(pUVar12,(long64)(local_108 + 8));
          ::FName::ToString((FName *)(local_108 + 8),&local_c8);
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        pFVar16 = ::operator_new(0x68);
        if (pFVar16 == (FGenericDenoiser *)0x0) {
          puVar17 = *(undefined8 **)pFVar21;
          param_1->_padding_ = 0;
          (*(code *)*puVar17)(pFVar21,1);
        }
        else {
          local_88.Object = (ITransferFunction *)*in_stack_00000048;
          local_88.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_stack_00000048[1];
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_108._16_8_ = param_8->Object;
          param_8->Object = (ITransferFunction *)0x0;
          local_108._24_8_ = *(undefined8 *)&param_6->TilingConfig;
          (param_6->TilingConfig).Alignment = 0;
          (param_6->TilingConfig).Overlap = 0;
          local_108._32_8_ = *param_5.Ptr;
          *param_5.Ptr = (IOutputProcess)0x0;
          local_58 = *param_7.Ptr;
          IStack_50 = param_7.Ptr[1];
          local_108._40_8_ = pFVar21;
          pFVar16 = FGenericDenoiser::FGenericDenoiser
                              (pFVar16,(IModelInstance *)(local_108 + 0x28),
                               (IInputProcess *)(local_108 + 0x20),
                               (IOutputProcess *)(local_108 + 0x18),(FParameters *)&local_58,
                               (IAutoExposure *)(local_108 + 0x10),&local_88);
          param_1->_padding_ = (longlong)pFVar16;
        }
        DestructItems<TTuple<enum_EDenoiserRuntimeType,FString>,int>
                  ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data,(int)local_1a0);
        if ((TTuple<EDenoiserRuntimeType,FString> *)local_1a8.Data !=
            (TTuple<EDenoiserRuntimeType,FString> *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        IVar4 = *param_5.Ptr;
        if (IVar4 != (IOutputProcess)0x0) {
          (*(code *)**(undefined8 **)IVar4)(IVar4,1);
        }
        puVar17 = *(undefined8 **)&param_6->TilingConfig;
        if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)(puVar17,1);
        }
        pIVar5 = param_8->Object;
        if (pIVar5 != (ITransferFunction *)0x0) {
          (**(code **)*pIVar5)(pIVar5,1);
        }
        pTVar18 = (TReferenceControllerBase<1> *)in_stack_00000048[1];
LAB_14eaf1931:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        return (TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
                )(FGenericDenoiser *)param_1;
      }
    }
    else {
      if (bVar2 == 1) {
        TVar14 = FModelInstanceGPU::Make((UNNEModelData *)&local_110,pFVar19);
        pFVar21 = (FScriptContainerElement *)(TVar14.Ptr)->_padding_;
        (TVar14.Ptr)->_padding_ = 0;
        puVar17 = local_110;
        goto LAB_14eaf167d;
      }
      if (bVar2 == 2) {
        TVar15 = FModelInstanceRDG::Make((UNNEModelData *)local_108,pFVar19);
        pFVar21 = (FScriptContainerElement *)(TVar15.Ptr)->_padding_;
        (TVar15.Ptr)->_padding_ = 0;
        puVar17 = (undefined8 *)local_108._0_8_;
        goto LAB_14eaf167d;
      }
    }
    FVar24.Data = FVar24.Data + 0x18;
  } while( true );
}

// CreateTiling @ 14eaf19e0

FTiling * __cdecl
UE::NNEDenoiser::Private::CreateTiling
          (FTiling *__return_storage_ptr__,TIntPoint<int> param_1,TIntPoint<int> param_2,
          TIntPoint<int> param_3,int param_4,TIntPoint<int> param_5,TIntPoint<int> param_6)

{
  TArray<UE::NNEDenoiser::Private::FTile,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TIntPoint<int>_u_0 TVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FTiling *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  TIntPoint<int>_u_0 TVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int iStackX_14;
  int iStackX_1c;
  int iStackX_24;
  uint local_e4;
  longlong local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  TIntPoint<int>_u_0 local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  uVar2 = param_6.field0_0x0._s_0.X;
  uVar6 = param_6.field0_0x0._s_0.Y;
  pTVar1 = &__return_storage_ptr__->Tiles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Tiles).ArrayNum = 0;
  (__return_storage_ptr__->Tiles).ArrayMax = 0;
  uVar24 = 1;
  iVar22 = 1;
  iVar18 = param_5.field0_0x0._0_4_;
  TVar19 = param_1.field0_0x0;
  if (param_1.field0_0x0._0_4_ < 1) {
    uVar21 = param_3.field0_0x0._0_4_;
    TVar19 = param_3.field0_0x0 & 0xffffffff;
    iVar12 = param_4 + -1 + param_6.field0_0x0._s_0.X;
    iVar25 = 1;
    uVar13 = iVar12 - iVar12 % param_4;
    if ((int)uVar21 < (int)uVar13) {
      TVar19._s_0.Y = 0;
      TVar19._s_0.X = uVar13;
    }
    iVar12 = param_2.field0_0x0._0_4_;
    if (0 < iVar12) {
      iVar15 = 1;
      if (1 < param_4) {
        iVar15 = param_4;
      }
      uVar13 = iVar15 + iVar18;
      if (iVar15 + iVar18 < (int)uVar21) {
        uVar13 = uVar21;
      }
      if (iVar12 < TVar19._s_0.X) {
        do {
          if (TVar19._s_0.X <= (int)uVar13) break;
          iVar25 = iVar25 + 1;
          iVar14 = iVar15 + -1 + ((param_6.field0_0x0._s_0.X - iVar18) + -1 + iVar25) / iVar25;
          uVar8 = (iVar14 - iVar14 % iVar15) + iVar18;
          uVar21 = uVar13;
          if ((int)uVar13 < (int)uVar8) {
            uVar21 = uVar8;
          }
          TVar19._s_0.Y = 0;
          TVar19._s_0.X = uVar21;
        } while (iVar12 < (int)uVar21);
      }
    }
  }
  iStackX_14 = param_1.field0_0x0._4_4_;
  if (iStackX_14 < 1) {
    iStackX_1c = param_2.field0_0x0._4_4_;
    iVar12 = param_6.field0_0x0._s_0.Y + -1 + param_4;
    iStackX_24 = param_3.field0_0x0._4_4_;
    iVar12 = iVar12 - iVar12 % param_4;
    iStackX_14 = iStackX_24;
    if (iStackX_24 < iVar12) {
      iStackX_14 = iVar12;
    }
    if (0 < iStackX_1c) {
      iVar12 = 1;
      if (1 < param_4) {
        iVar12 = param_4;
      }
      iVar25 = iVar12 + param_5.field0_0x0._s_0.Y;
      if (iVar12 + param_5.field0_0x0._s_0.Y < iStackX_24) {
        iVar25 = iStackX_24;
      }
      if (iStackX_1c < iStackX_14) {
        do {
          if (iStackX_14 <= iVar25) break;
          iVar22 = iVar22 + 1;
          iVar15 = iVar12 + -1 +
                   ((param_6.field0_0x0._s_0.Y - param_5.field0_0x0._4_4_) + -1 + iVar22) / iVar22;
          iVar15 = (iVar15 - iVar15 % iVar12) + param_5.field0_0x0._s_0.Y;
          iStackX_14 = iVar25;
          if (iVar25 < iVar15) {
            iStackX_14 = iVar15;
          }
        } while (iStackX_1c < iStackX_14);
      }
    }
  }
  iVar22 = TVar19._s_0.X;
  TVar5._s_0.Y = iStackX_14;
  TVar5._s_0.X = iVar22;
  (__return_storage_ptr__->TileSize).field0_0x0 = TVar5;
  if (iVar22 < (int)param_6.field0_0x0._0_4_) {
    uVar20 = (longlong)(((iVar22 - iVar18) - iVar18) + -1 + param_6.field0_0x0._s_0.X) /
             (longlong)(iVar22 - iVar18) & 0xffffffff;
  }
  else {
    uVar20 = 1;
  }
  if (iStackX_14 < param_6.field0_0x0._s_0.Y) {
    uVar24 = (longlong)
             (((iStackX_14 - param_5.field0_0x0._4_4_) - param_5.field0_0x0._4_4_) + -1 +
             param_6.field0_0x0._s_0.Y) / (longlong)(iStackX_14 - param_5.field0_0x0._4_4_) &
             0xffffffff;
  }
  iVar12 = (int)uVar24;
  local_78 = (TIntPoint<int>_u_0)(uVar24 << 0x20 | uVar20);
  iVar18 = (int)uVar20;
  (__return_storage_ptr__->Count).field0_0x0 = local_78;
  if (iVar18 == 1) {
    iVar25 = 0;
  }
  else {
    iVar25 = (iVar22 * iVar18 - param_6.field0_0x0._0_4_) / (iVar18 + -1);
  }
  if (iVar12 == 1) {
    iVar12 = 0;
  }
  else {
    iVar12 = (iStackX_14 * iVar12 - param_6.field0_0x0._4_4_) / (iVar12 + -1);
  }
  iVar15 = (int)ROUND((float)iVar25 - __real_3f000000) >> 1;
  iVar14 = (int)ROUND((float)iVar12 - __real_3f000000) >> 1;
  `UE::NNEDenoiser::Private::CreateTiling'::__l2::<lambda_3>::operator()
            (&param_6,local_60,iVar18,iVar22,iVar25,param_6.field0_0x0._s_0.X);
  `UE::NNEDenoiser::Private::CreateTiling'::__l2::<lambda_3>::operator()
            (&param_6,&local_70,(__return_storage_ptr__->Count).field0_0x0._s_0.Y,
             (__return_storage_ptr__->TileSize).field0_0x0._s_0.Y,iVar12,uVar6);
  iVar22 = (__return_storage_ptr__->TileSize).field0_0x0._s_0.X - uVar2;
  iVar18 = 0;
  if (0 < iVar22) {
    iVar18 = iVar22;
  }
  iVar12 = (__return_storage_ptr__->TileSize).field0_0x0._s_0.Y - uVar6;
  iVar22 = 0;
  if (0 < iVar12) {
    iVar22 = iVar12;
  }
  local_e4 = 0;
  if (0 < (__return_storage_ptr__->Count).field0_0x0._s_0.Y) {
    local_c8 = 0;
    do {
      uVar13 = 0;
      if ((int)local_e4 < local_70.ArrayNum) {
        uVar13 = ~local_e4 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FTiling *)(*pcVar4)();
        return pFVar10;
      }
      iVar23 = 0;
      uVar2 = *(undefined4 *)(local_70.AllocatorInstance.Data + local_c8);
      iVar12 = (__return_storage_ptr__->Count).field0_0x0._s_0.Y;
      iVar25 = -iVar22;
      if (iVar12 != 1) {
        if (0 < (int)local_e4) {
          iVar23 = iVar14;
        }
        if ((int)local_e4 < iVar12 + -1) {
          iVar25 = -iVar14;
        }
        else {
          iVar25 = 0;
        }
      }
      uVar13 = 0;
      if (0 < (__return_storage_ptr__->Count).field0_0x0._s_0.X) {
        lVar17 = 0;
        do {
          uVar21 = 0;
          if ((int)uVar13 < local_60[0].ArrayNum) {
            uVar21 = ~uVar13 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTiling *)(*pcVar4)();
            return pFVar10;
          }
          iVar16 = 0;
          iVar12 = (__return_storage_ptr__->Count).field0_0x0._s_0.X;
          iVar9 = -iVar18;
          if (iVar12 != 1) {
            iVar16 = 0;
            if (0 < (int)uVar13) {
              iVar16 = iVar15;
            }
            if ((int)uVar13 < iVar12 + -1) {
              iVar9 = -iVar15;
            }
            else {
              iVar9 = 0;
            }
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          local_a0 = CONCAT44(uVar2,*(undefined4 *)(local_60[0].AllocatorInstance.Data + lVar17));
          local_98 = 0;
          local_90 = CONCAT44(-iVar22,-iVar18);
          local_88 = CONCAT44(iVar23,iVar16);
          local_80 = CONCAT44(iVar25,iVar9);
          if (((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
              ((FScriptContainerElement *)&local_a0 <
               pFVar3 + (longlong)(__return_storage_ptr__->Tiles).ArrayMax * 0x28)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTiling *)(*pcVar4)();
            return pFVar10;
          }
          iVar12 = (__return_storage_ptr__->Tiles).ArrayNum;
          if (iVar12 == (__return_storage_ptr__->Tiles).ArrayMax) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x428,&pTVar1->AllocatorInstance,
                                &(__return_storage_ptr__->Tiles).ArrayMax);
          }
          (__return_storage_ptr__->Tiles).ArrayNum = iVar12 + 1;
          uVar13 = uVar13 + 1;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          lVar17 = lVar17 + 4;
          lVar11 = (longlong)iVar12;
          *(undefined8 *)(pFVar3 + lVar11 * 0x28) = local_a0;
          *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 8) = local_98;
          *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x10) = local_90;
          *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x18) = local_88;
          *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x20) = local_80;
        } while ((int)uVar13 < (__return_storage_ptr__->Count).field0_0x0._s_0.X);
      }
      local_e4 = local_e4 + 1;
      local_c8 = local_c8 + 4;
    } while ((int)local_e4 < (__return_storage_ptr__->Count).field0_0x0._s_0.Y);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBindingRDG @ 14eaf8190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNEDenoiser::Private::GetBindingRDG
          (TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FRDGBuffer_*_const,int> *param_1)

{
  int *piVar1;
  FRDGBuffer **ppFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> *pTVar8;
  FRDGBuffer **ppFVar9;
  FRDGBuffer *local_18 [2];
  
  uVar3 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  ppFVar9 = param_1->DataPtr;
  ppFVar2 = ppFVar9 + (int)uVar3;
  while( true ) {
    if (ppFVar9 == ppFVar2) {
      return __return_storage_ptr__;
    }
    local_18[0] = *ppFVar9;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    ppFVar9 = ppFVar9 + 1;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(FRDGBuffer **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_18[0];
  }
  pcVar5 = (code *)swi(3);
  pTVar8 = (TArray<UE::NNE::FTensorBindingRDG,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar8;
}

// GetDenoiserAssetNameFromCVarAndSettings @ 14eaf8e40

FString * __cdecl
UE::NNEDenoiser::Private::GetDenoiserAssetNameFromCVarAndSettings
          (FString *__return_storage_ptr__,UNNEDenoiserSettings *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  pTVar2 = CVarNNEDenoiserAsset.Ref;
  FVar6.Data = (FScriptContainerElement *)0x0;
  bVar3 = IsInParallelGameThread();
  if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  iVar7 = 6;
  if (pTVar2->ShadowedValue[0] < 6) {
    iVar7 = pTVar2->ShadowedValue[0];
  }
  iVar4 = 0;
  if (0 < iVar7) {
    iVar4 = iVar7;
  }
  switch(iVar4) {
  case 0:
    bVar3 = *(longlong *)&(param_1->DenoiserAsset).SoftObjectPtr.field_0x8 == 0;
    if (bVar3) {
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      pFVar5 = &local_28;
    }
    else {
      FSoftObjectPath::ToString
                ((FSoftObjectPath *)&(param_1->DenoiserAsset).SoftObjectPtr.field_0x8,&local_18);
      pFVar5 = &local_18;
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar6.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((!bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    break;
  case 1:
    ::FString::FString(__return_storage_ptr__,L"/NNEDenoiser/NNED_Oidn2-3_Fast.NNED_Oidn2-3_Fast");
    break;
  case 2:
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNED_Oidn2-3_Balanced.NNED_Oidn2-3_Balanced");
    break;
  case 3:
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNED_Oidn2-3_HighQuality.NNED_Oidn2-3_HighQuality");
    break;
  case 4:
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNED_Oidn2-3_Fast_Alpha.NNED_Oidn2-3_Fast_Alpha");
    break;
  case 5:
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNED_Oidn2-3_Balanced_Alpha.NNED_Oidn2-3_Balanced_Alpha");
    break;
  case 6:
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNED_Oidn2-3_HighQuality_Alpha.NNED_Oidn2-3_HighQuality_Alpha"
                      );
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserViewExtension.cpp"
                       ,0x60,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetDenoiserRuntimeTypeFromCVar @ 14eaf9030

EDenoiserRuntimeType __cdecl UE::NNEDenoiser::Private::GetDenoiserRuntimeTypeFromCVar(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  EDenoiserRuntimeType EVar4;
  int iVar5;
  
  pTVar2 = CVarNNEDenoiserRuntimeType.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
    }
  }
  iVar5 = 2;
  if (pTVar2->ShadowedValue[0] < 2) {
    iVar5 = pTVar2->ShadowedValue[0];
  }
  EVar4 = CPU;
  if (0 < iVar5) {
    EVar4 = (EDenoiserRuntimeType)iVar5;
  }
  return EVar4;
}

// GetDenoiserTemporalAssetNameFromCVarAndSettings @ 14eaf90a0

FString * __cdecl
UE::NNEDenoiser::Private::GetDenoiserTemporalAssetNameFromCVarAndSettings
          (FString *__return_storage_ptr__,UNNEDenoiserSettings *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  pTVar2 = CVarNNEDenoiserTemporalAsset.Ref;
  FVar5.Data = (FScriptContainerElement *)0x0;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  iVar6 = 6;
  if (pTVar2->ShadowedValue[0] < 6) {
    iVar6 = pTVar2->ShadowedValue[0];
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  if (iVar7 == 0) {
    bVar3 = *(longlong *)&(param_1->TemporalDenoiserAsset).SoftObjectPtr.field_0x8 == 0;
    if (bVar3) {
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      pFVar4 = &local_28;
    }
    else {
      FSoftObjectPath::ToString
                ((FSoftObjectPath *)&(param_1->TemporalDenoiserAsset).SoftObjectPtr.field_0x8,
                 &local_18);
      pFVar4 = &local_18;
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    if (bVar3) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else if (iVar7 == 1) {
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNEDT_Oidn2-3_Balanced.NNEDT_Oidn2-3_Balanced");
  }
  else if (iVar7 == 2) {
    ::FString::FString(__return_storage_ptr__,
                       L"/NNEDenoiser/NNEDT_Oidn2-3_Balanced_Alpha.NNEDT_Oidn2-3_Balanced_Alpha");
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserViewExtension.cpp"
                       ,0x70,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eaf9690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> * __cdecl
UE::NNEDenoiser::Private::GetOutputTensorShapes
          (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          IModelInstance *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_f8;
  int local_f0 [2];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  FTensorShape *local_a8;
  int local_a0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<unsigned_int_const_,int> local_88;
  FTensorShape local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_b8);
  bVar4 = false;
  if (local_b0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InputShapes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                       ,0x57,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    bVar4 = local_b0 == 0;
  }
  if ((bVar4 || local_b0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar8;
  }
  iVar7 = *(int *)(local_b8 + 0x28);
  lVar14 = *(longlong *)(local_b8 + 0x20);
  if (*(longlong *)(local_b8 + 0x20) == 0) {
    lVar14 = local_b8;
  }
  if (iVar7 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
  }
  else if (3 < iVar7) goto LAB_14eaf97a6;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar8;
  }
LAB_14eaf97a6:
  local_c4 = *(undefined4 *)(lVar14 + 0xc);
  if ((iVar7 < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar8;
  }
  local_c8 = *(undefined4 *)(lVar14 + 8);
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_d8);
  (**(code **)((longlong)*param_1 + 0x20))();
  if (local_d0 == local_a0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = local_a0;
    if (local_a0 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_a0,0,&__return_storage_ptr__->AllocatorInstance,local_a0,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,local_a8,local_a0);
    }
  }
  else {
    local_e0._0_4_ = 0;
    local_e0._4_4_ = 0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    uVar16 = 0;
    local_e0 = 0;
    FVar10.Data = (FScriptContainerElement *)0x0;
    if (0 < local_d0) {
      local_c0 = 0;
      lVar14 = 0;
      do {
        lVar13 = local_c0;
        uVar12 = ~uVar16 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar16 < local_d0) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        if ((*(int *)(lVar14 + 0x40 + local_d8) != 4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputDescs[i].GetShape().Rank() == 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                               ,0x69,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        uVar5 = 0;
        if ((int)uVar16 < local_d0) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        puVar2 = *(undefined4 **)(local_d8 + 0x38 + lVar14);
        iVar7 = *(int *)(local_d8 + 0x40 + lVar14);
        puVar15 = (undefined4 *)(local_d8 + 0x18 + lVar14);
        if (puVar2 != (undefined4 *)0x0) {
          puVar15 = puVar2;
        }
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0[0] = 0;
        local_f0[1] = 0;
        uVar5 = 0;
        if ((int)uVar16 < local_d0) {
          uVar5 = uVar12;
        }
        iVar11 = 0;
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          iVar11 = local_f0[0];
        }
        uVar5 = *(uint *)(lVar14 + 0x40 + local_d8);
        if (iVar11 < (int)uVar5) {
          Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar5 - iVar11,&local_f8,local_f0,local_f0 + 1);
          iVar11 = local_f0[0];
        }
        else {
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
          }
          if ((int)uVar5 < iVar11) {
            uVar12 = iVar11 - uVar5;
            if ((int)(uVar5 | uVar12) < 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar8;
              }
              iVar11 = local_f0[0];
            }
            lVar13 = local_c0;
            if (uVar12 != 0) {
              iVar6 = (iVar11 - uVar5) - uVar12;
              if (iVar6 != 0) {
                memmove(local_f8.Data + (longlong)(int)uVar5 * 4,
                        local_f8.Data + (longlong)(int)uVar5 * 4 + (longlong)(int)uVar12 * 4,
                        (longlong)iVar6 << 2);
                iVar11 = local_f0[0];
              }
              local_f0[0] = iVar11 - uVar12;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_f8,iVar11 - uVar12,local_f0 + 1);
              lVar13 = local_c0;
              iVar11 = local_f0[0];
            }
          }
        }
        if (iVar7 < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          iVar11 = local_f0[0];
        }
        uVar1 = *puVar15;
        if ((iVar11 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        *(undefined4 *)local_f8.Data = uVar1;
        if ((iVar7 < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        uVar1 = puVar15[1];
        if ((local_f0[0] < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        *(undefined4 *)(local_f8.Data + 4) = uVar1;
        if ((local_f0[0] < 3) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        *(undefined4 *)(local_f8.Data + 8) = local_c8;
        if ((local_f0[0] < 4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        *(undefined4 *)(local_f8.Data + 0xc) = local_c4;
        iVar7 = local_f0[0];
        local_98 = local_f8.Data;
        if ((local_f0[0] < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iStack_90 = iVar7;
        local_88._12_4_ = uStack_8c;
        local_88.ArrayNum = iVar7;
        local_88.DataPtr = (uint *)local_98;
        pFVar9 = (FScriptContainerElement *)NNE::FTensorShape::Make(&local_78,&local_88);
        if (((local_e8.Data <= pFVar9) && (pFVar9 < local_e8.Data + (longlong)local_e0._4_4_ * 0x30)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar7 = (int)local_e0;
        if ((int)local_e0 == local_e0._4_4_) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
        NNE::FTensorShape::FTensorShape
                  ((FTensorShape *)(local_e8.Data + (longlong)iVar7 * 0x30),(FTensorShape *)pFVar9);
        if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
        local_c0 = lVar13 + 1;
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 0x48;
      } while ((int)uVar16 < local_d0);
      FVar10.Data = local_e8.Data;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = FVar10.Data;
    __return_storage_ptr__->ArrayNum = (int)local_e0;
    __return_storage_ptr__->ArrayMax = local_e0._4_4_;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = 0;
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)0x0,0);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  return __return_storage_ptr__;
}

// MakeTensorLayout @ 14eafbc50

/* WARNING: Removing unreachable block (ram,0x00014eafbdeb) */

FResourceMappingList * __cdecl
UE::NNEDenoiser::Private::Detail::MakeTensorLayout
          (FResourceMappingList *__return_storage_ptr__,
          TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
          *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FResourceMappingList *pFVar5;
  TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
  *this;
  FResourceInfo *pFVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar10 = 0;
  (__return_storage_ptr__->InputMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InputMapping).ArrayNum = 0;
  (__return_storage_ptr__->InputMapping).ArrayMax = 0;
  iVar4 = *(int *)&param_1->field_0x8;
  iVar7 = *(int *)&param_1->field_0x34;
  if (0 < iVar4 - iVar7) {
    do {
      uVar11 = 0;
      iVar12 = (int)uVar10;
      if (iVar4 != iVar7) {
        puVar8 = &param_1->field_0x38;
        if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&param_1->field_0x40;
        }
        iVar4 = *(int *)(puVar8 + (*(int *)&param_1->field_0x48 - 1 & uVar10) * 4);
        if (iVar4 != -1) {
          do {
            if (*(int *)((longlong)iVar4 * 0x60 + *(longlong *)param_1) == iVar12)
            goto LAB_14eafbd02;
            iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *(longlong *)param_1);
          } while (iVar4 != -1);
        }
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceMap.Contains(I)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                         ,0x11,L"Missing intput/output %d, must be continuous!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResourceMappingList *)(*pcVar2)();
        return pFVar5;
      }
LAB_14eafbd02:
      this = TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
                            *)param_1,iVar12);
      pFVar13 = (__return_storage_ptr__->InputMapping).AllocatorInstance.Data;
      local_38 = 0;
      local_30 = 0;
      if (((pFVar13 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar13 + (longlong)(__return_storage_ptr__->InputMapping).ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResourceMappingList *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = (__return_storage_ptr__->InputMapping).ArrayNum;
      if (iVar4 == (__return_storage_ptr__->InputMapping).ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->InputMapping).ArrayMax);
      }
      (__return_storage_ptr__->InputMapping).ArrayNum = iVar4 + 1;
      pFVar13 = (__return_storage_ptr__->InputMapping).AllocatorInstance.Data +
                (longlong)iVar4 * 0x10;
      *(undefined8 *)&pFVar13->field_0x0 = 0;
      *(undefined8 *)&pFVar13->field_0x0 = local_38;
      *(undefined4 *)&pFVar13[8].field_0x0 = (undefined4)local_30;
      *(undefined4 *)(pFVar13 + 0xc) = local_30._4_4_;
      local_30 = 0;
      local_38 = 0;
      iVar4 = *(int *)&this->field_0x8;
      iVar7 = *(int *)&this->field_0x34;
      if (0 < iVar4 - iVar7) {
        do {
          iVar9 = (int)uVar11;
          if (iVar4 != iVar7) {
            puVar8 = &this->field_0x38;
            if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&this->field_0x40;
            }
            iVar4 = *(int *)(puVar8 + (*(int *)&this->field_0x48 - 1 & uVar11) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)(*(longlong *)this + (longlong)iVar4 * 0x18) == iVar9)
                goto LAB_14eafbe6f;
                iVar4 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar4 * 0x18);
              } while (iVar4 != -1);
            }
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerMap.Contains(J)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                             ,0x18,L"Missing tensor info for channel %d, must be continuous!");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FResourceMappingList *)(*pcVar2)();
            return pFVar5;
          }
LAB_14eafbe6f:
          pFVar6 = TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
                   ::FindChecked((TMapBase<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>
                                  *)this,iVar9);
          local_48._0_1_ = pFVar6->Name;
          local_48._1_3_ = *(undefined3 *)&pFVar6->field_0x1;
          local_48._4_4_ = pFVar6->Channel;
          local_40 = pFVar6->Frame;
          if (((*(undefined8 **)&pFVar13->field_0x0 <= &local_48) &&
              (&local_48 <
               (undefined8 *)
               ((longlong)*(undefined8 **)&pFVar13->field_0x0 +
               (longlong)*(int *)(pFVar13 + 0xc) * 0xc))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FResourceMappingList *)(*pcVar2)();
            return pFVar5;
          }
          iVar4 = *(int *)&pFVar13[8].field_0x0;
          if (iVar4 == *(int *)(pFVar13 + 0xc)) {
            iVar4 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
          }
          uVar11 = (ulonglong)(iVar9 + 1U);
          *(int *)&pFVar13[8].field_0x0 = iVar4 + 1;
          lVar1 = *(longlong *)&pFVar13->field_0x0;
          *(undefined8 *)(lVar1 + (longlong)iVar4 * 0xc) = local_48;
          *(int *)(lVar1 + (longlong)iVar4 * 0xc + 8) = local_40;
          iVar4 = *(int *)&this->field_0x8;
          iVar7 = *(int *)&this->field_0x34;
        } while ((int)(iVar9 + 1U) < iVar4 - iVar7);
      }
      iVar4 = *(int *)&param_1->field_0x8;
      uVar10 = (ulonglong)(iVar12 + 1U);
      iVar7 = *(int *)&param_1->field_0x34;
    } while ((int)(iVar12 + 1U) < iVar4 - iVar7);
  }
  return __return_storage_ptr__;
}

// RegisterTextureIfNeeded @ 14eafcfc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::NNEDenoiser::Private::RegisterTextureIfNeeded
          (FResourceManager *param_1,FRDGTexture *param_2,EResourceName param_3,
          IInputProcess *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)((longlong)*param_4 + 0x18))(param_4,param_3);
  uVar2 = (uint)(param_3 == Output);
  if ((int)(uint)(param_3 == Output) < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (0 < (int)uVar2) {
    FResourceManager::AddTexture(param_1,param_3,param_2,uVar2);
  }
  return;
}

// ToResourceName @ 14eafe2f0

EResourceName __cdecl UE::NNEDenoiser::ToResourceName(EInputResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  EResourceName EVar3;
  
  if (param_1 != Color) {
    if (param_1 == Albedo) {
      return Albedo;
    }
    if (param_1 == Normal) {
      return Normal;
    }
    if (param_1 == Output) {
      return Output;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x12,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Color;
}

// ToResourceName @ 14eafe360

EResourceName __cdecl UE::NNEDenoiser::ToResourceName(EOutputResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  EResourceName EVar3;
  
  if (param_1 == Output) {
    return Output;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                     ,0x1c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Color;
}

// ToResourceName @ 14eafe3b0

EResourceName __cdecl UE::NNEDenoiser::ToResourceName(ETemporalInputResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  EResourceName EVar3;
  
  if (param_1 != Color) {
    if (param_1 == Albedo) {
      return Albedo;
    }
    if (param_1 == Normal) {
      return Normal;
    }
    if (param_1 == Flow) {
      return Flow;
    }
    if (param_1 == Output) {
      return Output;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Color;
}

// ToResourceName @ 14eafe420

EResourceName __cdecl UE::NNEDenoiser::ToResourceName(ETemporalOutputResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  EResourceName EVar3;
  
  if (param_1 == Output) {
    return Output;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                     ,0x34,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Color;
}

