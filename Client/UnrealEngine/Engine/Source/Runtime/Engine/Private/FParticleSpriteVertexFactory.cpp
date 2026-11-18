// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// GetPSOPrecacheVertexDeclaration @ 1481fcbd0

FRHIVertexDeclaration * __cdecl
FParticleSpriteVertexFactory::GetPSOPrecacheVertexDeclaration(bool param_1)

{
  FRHIVertexDeclaration *pFVar1;
  
  pFVar1 = (FRHIVertexDeclaration *)GParticleSpriteVertexDeclarationInstancedDynamic._32_8_;
  if (!param_1) {
    pFVar1 = (FRHIVertexDeclaration *)GParticleSpriteVertexDeclarationInstanced._32_8_;
  }
  return pFVar1;
}

// GetPSOPrecacheVertexFetchElements @ 1481fcbf0

void __cdecl
FParticleSpriteVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001481fcbfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)GParticleSpriteVertexDeclarationInstanced._32_8_ + 0x10))();
  return;
}

// GetType @ 1481ffad0

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
FParticleSpriteVertexFactory::GetType(FParticleSpriteVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 1482041f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleSpriteVertexFactory::InitRHI
          (FParticleSpriteVertexFactory *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FRHIResource *this_01;
  undefined8 *puVar6;
  
  if (((int)this->_padding_ != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Streams.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0x107,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar4 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  puVar6 = (undefined8 *)0x0;
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar4 + 0xe) = 0;
    puVar5 = puVar4;
  }
  *(undefined2 *)((longlong)puVar5 + 0xc) = 8;
  *puVar5 = &GParticleTexCoordVertexBuffer;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  puVar4 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar5 = puVar4;
  }
  if (this->bUsesDynamicParameter != false) {
    puVar6 = (undefined8 *)(ulonglong)this->DynamicParameterStride;
  }
  *(short *)((longlong)puVar5 + 0xc) = (short)puVar6;
  bVar2 = this->bUsesDynamicParameter;
  if (((this->NumVertsInInstanceBuffer != 4) && (this->NumVertsInInstanceBuffer != 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumVertsInInstanceBuffer == 4 || NumVertsInInstanceBuffer == 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (FRHIResource *)this->_padding_;
  this_01 = (FRHIResource *)GParticleSpriteVertexDeclarationInstancedDynamic._32_8_;
  if (bVar2 == false) {
    this_01 = (FRHIResource *)GParticleSpriteVertexDeclarationInstanced._32_8_;
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
  return;
}

// InitStreams @ 148204f70

void __thiscall FParticleSpriteVertexFactory::InitStreams(FParticleSpriteVertexFactory *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((int)this->_padding_ != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Streams.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0x107,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar3 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar3 + 0xe) = 0;
    puVar4 = puVar3;
  }
  *(undefined2 *)((longlong)puVar4 + 0xc) = 8;
  *puVar4 = &GParticleTexCoordVertexBuffer;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  puVar4 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)&this->_padding_);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar5 = puVar4;
  }
  if (this->bUsesDynamicParameter == false) {
    *(undefined2 *)((longlong)puVar5 + 0xc) = 0;
    return;
  }
  *(short *)((longlong)puVar5 + 0xc) = (short)this->DynamicParameterStride;
  return;
}

// ModifyCompilationEnvironment @ 1482070c0

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
FParticleSpriteVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_SPRITE_FACTORY",L"1");
  return;
}

// RendersPrimitivesAsCameraFacingSprites @ 148212d20

bool __thiscall
FParticleSpriteVertexFactory::RendersPrimitivesAsCameraFacingSprites
          (FParticleSpriteVertexFactory *this)

{
  return true;
}

// SetDynamicParameterBuffer @ 148216ee0

void __thiscall
FParticleSpriteVertexFactory::SetDynamicParameterBuffer
          (FParticleSpriteVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((int)this->_padding_ != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)this->_padding_ < 3) {
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
    if (this->bUsesDynamicParameter != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1634486397614161619>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0x12d,"!bUsesDynamicParameter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    plVar3[4] = (longlong)&GNullDynamicParameterVertexBuffer;
    if (*(short *)((longlong)plVar3 + 0x2c) != 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1634486397614161617>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0x12f,"DynamicParameterStream.Stride == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)(plVar3 + 5) = 0;
  }
  else {
    if (this->bUsesDynamicParameter == false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1634486397614161626>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0x126,"bUsesDynamicParameter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    plVar3[4] = (longlong)param_1;
    if (*(ushort *)((longlong)plVar3 + 0x2c) != param_3) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1634486397614161624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                         ,0x128,"DynamicParameterStream.Stride == Stride");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)(plVar3 + 5) = param_2;
  }
  return;
}

// SetInstanceBuffer @ 1482177a0

void __thiscall
FParticleSpriteVertexFactory::SetInstanceBuffer
          (FParticleSpriteVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((int)this->_padding_ != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                       ,0x113,L"");
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
  *(short *)((longlong)plVar3 + 0x1c) = (short)param_3;
  *(uint *)(plVar3 + 3) = param_2;
  plVar3[2] = (longlong)param_1;
  return;
}

// SetTexCoordBuffer @ 148219160

void __thiscall
FParticleSpriteVertexFactory::SetTexCoordBuffer
          (FParticleSpriteVertexFactory *this,FVertexBuffer *param_1)

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

// ShouldCompilePermutation @ 14821a1c0

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
FParticleSpriteVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x4000002) != 0;
}

