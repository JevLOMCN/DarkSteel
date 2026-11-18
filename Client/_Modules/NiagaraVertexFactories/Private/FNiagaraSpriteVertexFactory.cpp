// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 7

// GetPSOPrecacheVertexFetchElements @ 148dce860

void __cdecl
FNiagaraSpriteVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148dce86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)GParticleSpriteVertexDeclaration._32_8_ + 0x10))();
  return;
}

// GetType @ 148dd0620

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
FNiagaraSpriteVertexFactory::GetType(FNiagaraSpriteVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 148dd1400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSpriteVertexFactory::InitRHI(FNiagaraSpriteVertexFactory *this,FRHICommandListBase *param_1)

{
  FVertexBuffer *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  undefined8 this_01;
  bool bVar3;
  longlong *plVar4;
  FVertexBuffer *pFVar5;
  longlong *plVar6;
  
  if (((int)this->_padding_ != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Streams.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraSpriteVertexFactory.cpp"
                         ,0x9e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  plVar6 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar6 = plVar4;
  }
  pFVar1 = this->VertexBufferOverride;
  *(undefined2 *)((longlong)plVar6 + 0xc) = 8;
  *(undefined4 *)(plVar6 + 1) = 0;
  pFVar5 = (FVertexBuffer *)&GParticleTexCoordVertexBuffer;
  if (pFVar1 != (FVertexBuffer *)0x0) {
    pFVar5 = pFVar1;
  }
  *plVar6 = (longlong)pFVar5;
  this_01 = GParticleSpriteVertexDeclaration._32_8_;
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)GParticleSpriteVertexDeclaration._32_8_) {
    this->_padding_ = GParticleSpriteVertexDeclaration._32_8_;
    if (this_01 != 0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// InitStreams @ 148dd14d0

void __thiscall FNiagaraSpriteVertexFactory::InitStreams(FNiagaraSpriteVertexFactory *this)

{
  FVertexBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FVertexBuffer *pFVar5;
  longlong *plVar6;
  
  if (((int)this->_padding_ != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Streams.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraSpriteVertexFactory.cpp"
                         ,0x9e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  plVar6 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar6 = plVar4;
  }
  pFVar1 = this->VertexBufferOverride;
  *(undefined2 *)((longlong)plVar6 + 0xc) = 8;
  pFVar5 = (FVertexBuffer *)&GParticleTexCoordVertexBuffer;
  if (pFVar1 != (FVertexBuffer *)0x0) {
    pFVar5 = pFVar1;
  }
  *(undefined4 *)(plVar6 + 1) = 0;
  *plVar6 = (longlong)pFVar5;
  return;
}

// ModifyCompilationEnvironment @ 148dd2000

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
FNiagaraSpriteVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_PARTICLE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NiagaraVFLooseParameters",L"NiagaraSpriteVFLooseParameters");
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_SPRITE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"RAY_TRACING_DYNAMIC_MESH_IN_WORLD_SPACE",L"1");
  return;
}

// SetTexCoordBuffer @ 148dd2320

void __thiscall
FNiagaraSpriteVertexFactory::SetTexCoordBuffer
          (FNiagaraSpriteVertexFactory *this,FVertexBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
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
  *plVar3 = (longlong)param_1;
  return;
}

// ShouldCompilePermutation @ 148dd2630

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
FNiagaraSpriteVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x10000002) != 0;
}

