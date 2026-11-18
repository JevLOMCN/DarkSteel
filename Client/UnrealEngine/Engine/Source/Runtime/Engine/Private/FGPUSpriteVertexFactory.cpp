// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetPSOPrecacheVertexFetchElements @ 148117a10

void __cdecl
FGPUSpriteVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148117a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)GGPUSpriteVertexDeclaration._32_8_ + 0x10))();
  return;
}

// GetType @ 14811c470

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

FVertexFactoryType * __thiscall FGPUSpriteVertexFactory::GetType(FGPUSpriteVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 1481209a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSpriteVertexFactory::InitRHI(FGPUSpriteVertexFactory *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int *piVar2;
  FRHIResource *this_00;
  code *pcVar3;
  undefined8 this_01;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  TGlobalResource<FParticleTexCoordVertexBuffer,1> *local_18;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  plVar1 = &this->_padding_;
  uStack_a = 0;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x38e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = &GParticleTexCoordVertexBuffer;
  uStack_10 = 0;
  uStack_c = 8;
  plVar6 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar6 = plVar1;
  }
  if ((plVar6 <= &local_18) &&
     (&local_18 < plVar6 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
                      (0x810,(ForElementType<FVertexFactory::FVertexStream> *)plVar1,piVar2);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  plVar6 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar6 = plVar1;
  }
  plVar6[(longlong)iVar5 * 2] = (longlong)local_18;
  (plVar6 + (longlong)iVar5 * 2)[1] = CONCAT26(uStack_a,CONCAT24(uStack_c,uStack_10));
  this_01 = GGPUSpriteVertexDeclaration._32_8_;
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)GGPUSpriteVertexDeclaration._32_8_) {
    this->_padding_ = GGPUSpriteVertexDeclaration._32_8_;
    if (this_01 != 0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ModifyCompilationEnvironment @ 1481243d0

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
FGPUSpriteVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLES_PER_INSTANCE",0x10);
  FShaderCompilerEnvironment::SetDefine(param_2,L"PARTICLE_SPRITE_FACTORY",L"1");
  return;
}

// RendersPrimitivesAsCameraFacingSprites @ 148129f60

bool __thiscall
FGPUSpriteVertexFactory::RendersPrimitivesAsCameraFacingSprites(FGPUSpriteVertexFactory *this)

{
  return true;
}

// ShouldCompilePermutation @ 1481322b0

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
FGPUSpriteVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x4000002) != 0;
}

