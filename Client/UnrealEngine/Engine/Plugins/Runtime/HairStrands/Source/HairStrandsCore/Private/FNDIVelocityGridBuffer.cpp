// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// FNDIVelocityGridBuffer @ 14e0d0f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIVelocityGridBuffer * __thiscall
FNDIVelocityGridBuffer::FNDIVelocityGridBuffer(FNDIVelocityGridBuffer *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FNDIVelocityGridBuffer__6B_;
  (this->GridDataBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->GridDataBuffer).PixelFormat = PF_Unknown;
  (this->GridDataBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
  (this->GridDataBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
  (this->GridDataBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
  (this->GridDataBuffer).NumBytes = 0;
  return this;
}

// GetFriendlyName @ 14e0e9c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
FNDIVelocityGridBuffer::GetFriendlyName
          (FNDIVelocityGridBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNDIVelocityGridBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 14e0f2970

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
FNDIVelocityGridBuffer::InitRHI(FNDIVelocityGridBuffer *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  EShaderPlatform EVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FRHICommandListImmediate *pFVar6;
  undefined1 auStackY_8a8 [32];
  undefined1 local_868 [8];
  FMemMark local_860;
  FRDGEventName local_838;
  code *local_820;
  undefined1 *local_818;
  FRDGBuilder local_808;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  if ((((this->GridSize).field0_0x0._s_0.X != 0) && ((this->GridSize).field0_0x0._s_0.Y != 0)) &&
     ((this->GridSize).field0_0x0._s_0.Z != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NumComponents = this->NumAttributes;
      _Init_thread_footer(&::_TSS0);
    }
    puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_818 = local_868;
    local_820 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_820,puVar4);
    local_838.EventFormat = L"";
    local_838.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_860.Mem = (FMemStackBase *)(pFVar5 + 2);
    local_838.FormattedEventName.Data.ArrayNum = 0;
    local_838.FormattedEventName.Data.ArrayMax = 0;
    local_860.Top = (local_860.Mem)->Top;
    local_860.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
    local_860.bPopped = false;
    local_860.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
    pFVar5[5] = (FTlsAutoCleanup)&local_860;
    *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
    EVar2 = GMaxRHIShaderPlatform;
    pFVar6 = FRHICommandListBase::GetAsImmediate(param_1);
    FRDGBuilder::FRDGBuilder(&local_808,pFVar6,&local_838,None,EVar2);
    FNiagaraPooledRWBuffer::InitializeInternal
              (&this->GridDataBuffer,&local_808,L"FNDIVelocityGridBuffer",PF_R32_SINT,4,
               ((this->GridSize).field0_0x0._s_0.Z + 1) * ((this->GridSize).field0_0x0._s_0.Y + 1) *
               ((this->GridSize).field0_0x0._s_0.X + 1) * NumComponents,None);
    FNiagaraPooledRWBuffer::EndGraphUsage(&this->GridDataBuffer);
    FRDGBuilder::Execute(&local_808);
    FRDGBuilder::~FRDGBuilder(&local_808);
    if (local_860.bPopped == false) {
      if (((local_860.Mem)->TopMark != &local_860) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_860.bPopped = true;
      (local_860.Mem)->NumMarks = (local_860.Mem)->NumMarks + -1;
      if (local_860.SavedChunk != (local_860.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_860.Mem,local_860.SavedChunk);
      }
      (local_860.Mem)->Top = local_860.Top;
      (local_860.Mem)->TopMark = local_860.NextTopmostMark;
    }
  }
  return;
}

// Initialize @ 14e0f2c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNDIVelocityGridBuffer::Initialize
          (FNDIVelocityGridBuffer *this,TIntVector3<int> *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->GridSize).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->GridSize).field0_0x0._s_0.Z = iVar1;
  this->NumAttributes = param_2;
  return;
}

// ReleaseRHI @ 14e0f54d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNDIVelocityGridBuffer::ReleaseRHI(FNDIVelocityGridBuffer *this)

{
  FNiagaraPooledRWBuffer::Release(&this->GridDataBuffer);
  return;
}

