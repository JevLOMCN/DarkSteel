// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetPSOPrecacheVertexDeclaration @ 1481179f0

FRHIVertexDeclaration * __cdecl
FParticleBeamTrailVertexFactory::GetPSOPrecacheVertexDeclaration(bool param_1)

{
  FRHIVertexDeclaration *pFVar1;
  
  pFVar1 = (FRHIVertexDeclaration *)GParticleBeamTrailVertexDeclaration._32_8_;
  if (param_1) {
    pFVar1 = (FRHIVertexDeclaration *)GParticleBeamTrailVertexDeclarationDynamic._32_8_;
  }
  return pFVar1;
}

// GetPSOPrecacheVertexFetchElements @ 148117a30

void __cdecl
FParticleBeamTrailVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148117a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)GParticleBeamTrailVertexDeclaration._32_8_ + 0x10))();
  return;
}

// GetType @ 14811c480

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
FParticleBeamTrailVertexFactory::GetType(FParticleBeamTrailVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 148120d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleBeamTrailVertexFactory::InitRHI
          (FParticleBeamTrailVertexFactory *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  undefined8 *puVar1;
  FRHIResource *this_01;
  
  this_00 = (FRHIResource *)this->_padding_;
  this_01 = (FRHIResource *)GParticleBeamTrailVertexDeclaration._32_8_;
  if (this->bUsesDynamicParameter != false) {
    this_01 = (FRHIResource *)GParticleBeamTrailVertexDeclarationDynamic._32_8_;
  }
  if (this_00 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  puVar1 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  puVar1 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

// ModifyCompilationEnvironment @ 148124430

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FParticleBeamTrailVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_BEAMTRAIL_FACTORY",L"1");
  return;
}

// SetDynamicParameterBuffer @ 14812fcb0

void __thiscall
FParticleBeamTrailVertexFactory::SetDynamicParameterBuffer
          (FParticleBeamTrailVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((int)this->_padding_ != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamTrailVertexFactory.cpp"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)this->_padding_ < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar3 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar3 = &this->_padding_;
  }
  if (param_1 == (FVertexBuffer *)0x0) {
    plVar3[2] = (longlong)&GNullDynamicParameterVertexBuffer;
    if (this->bUsesDynamicParameter != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3911949504181436584>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamTrailVertexFactory.cpp"
                         ,0xa8,"!bUsesDynamicParameter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined2 *)((longlong)plVar3 + 0x1c) = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
  }
  else {
    plVar3[2] = (longlong)param_1;
    if (this->bUsesDynamicParameter == false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3911949504181436577>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamTrailVertexFactory.cpp"
                         ,0xa1,"bUsesDynamicParameter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(short *)((longlong)plVar3 + 0x1c) = (short)param_3;
    *(uint *)(plVar3 + 3) = param_2;
  }
  return;
}

// SetVertexBuffer @ 148131a40

void __thiscall
FParticleBeamTrailVertexFactory::SetVertexBuffer
          (FParticleBeamTrailVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((int)this->_padding_ != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamTrailVertexFactory.cpp"
                       ,0x93,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)this->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar3 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar3 = &this->_padding_;
  }
  *(short *)((longlong)plVar3 + 0xc) = (short)param_3;
  *(uint *)(plVar3 + 1) = param_2;
  *plVar3 = (longlong)param_1;
  return;
}

// ShouldCompilePermutation @ 1481322d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FParticleBeamTrailVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x100000002U) != 0;
}

// SetBeamTrailUniformBuffer @ 148216130

void __thiscall
FParticleBeamTrailVertexFactory::SetBeamTrailUniformBuffer
          (FParticleBeamTrailVertexFactory *this,
          TUniformBufferRef<FParticleBeamTrailUniformParameters> param_1)

{
  TUniformBufferRef<FParticleBeamTrailUniformParameters> this_00;
  TUniformBufferRef<FParticleBeamTrailUniformParameters> this_01;
  
  this_00 = *(TUniformBufferRef<FParticleBeamTrailUniformParameters> *)param_1;
  this_01 = this->BeamTrailUniformBuffer;
  if (this_01 != this_00) {
    this->BeamTrailUniformBuffer = this_00;
    if (this_00 != (TUniformBufferRef<FParticleBeamTrailUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (TUniformBufferRef<FParticleBeamTrailUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (*(FRHIResource **)param_1 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)param_1);
  }
  return;
}

