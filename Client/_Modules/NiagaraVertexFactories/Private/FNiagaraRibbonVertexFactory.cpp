// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 7

// GetPSOPrecacheVertexFetchElements @ 148dce840

void __cdecl
FNiagaraRibbonVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148dce84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)GNiagaraRibbonVertexDeclaration._32_8_ + 0x10))();
  return;
}

// GetType @ 148dd0610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
FNiagaraRibbonVertexFactory::GetType(FNiagaraRibbonVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 148dd1320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRibbonVertexFactory::InitRHI(FNiagaraRibbonVertexFactory *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  undefined8 this_01;
  undefined8 *puVar2;
  
  this_01 = GNiagaraRibbonVertexDeclaration._32_8_;
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)GNiagaraRibbonVertexDeclaration._32_8_) {
    this->_padding_ = GNiagaraRibbonVertexDeclaration._32_8_;
    if (this_01 != 0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  plVar1 = &this->_padding_;
  puVar2 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)plVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar2 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)plVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar2 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)plVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar2 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)plVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar2 = operator_new<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     (0x10,(TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)plVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  return;
}

// ModifyCompilationEnvironment @ 148dd1eb0

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
FNiagaraRibbonVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_PARTICLE_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NiagaraVFLooseParameters",L"NiagaraRibbonVFLooseParameters");
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_RIBBON_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"RAY_TRACING_DYNAMIC_MESH_IN_WORLD_SPACE",L"1");
  return;
}

// SetDynamicParameterBuffer @ 148dd2210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRibbonVertexFactory::SetDynamicParameterBuffer
          (FNiagaraRibbonVertexFactory *this,FVertexBuffer *param_1,int param_2,uint param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (((int)this->_padding_ != 5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Streams.Num() == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraRibbonVertexFactory.cpp"
                         ,0xac,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = param_2 + 1;
  uVar3 = 0;
  if ((int)uVar5 < (int)this->_padding_) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar4 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar4 = &this->_padding_;
  }
  plVar4 = plVar4 + (longlong)(int)uVar5 * 2;
  bVar2 = param_1 == (FVertexBuffer *)0x0;
  if (bVar2) {
    param_3 = 0;
    param_1 = (FVertexBuffer *)&GNullDynamicParameterVertexBuffer;
  }
  *plVar4 = (longlong)param_1;
  if (bVar2) {
    param_4._0_2_ = 0;
  }
  *(undefined2 *)((longlong)plVar4 + 0xc) = (undefined2)param_4;
  *(uint *)(plVar4 + 1) = param_3;
  return;
}

// SetVertexBuffer @ 148dd23a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRibbonVertexFactory::SetVertexBuffer
          (FNiagaraRibbonVertexFactory *this,FVertexBuffer *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((int)this->_padding_ != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 5",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraRibbonVertexFactory.cpp"
                       ,0xa3,L"");
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

// ShouldCompilePermutation @ 148dd2570

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
FNiagaraRibbonVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x40000002) != 0;
}

