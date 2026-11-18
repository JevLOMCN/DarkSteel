// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FVectorFieldVisualizationVertexFactory @ 14890a100

FVectorFieldVisualizationVertexFactory * __thiscall
FVectorFieldVisualizationVertexFactory::FVectorFieldVisualizationVertexFactory
          (FVectorFieldVisualizationVertexFactory *this,Type param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xac = 8;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined4 *)&this->field_0xd8 = 0;
  *(undefined4 *)&this->field_0xdc = 2;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined4 *)&this->field_0x11c = 3;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x138 = 0x1ffffff;
  *(undefined ***)this = &___7FVectorFieldVisualizationVertexFactory__6B_;
  return this;
}

// GetType @ 14895ed80

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
FVectorFieldVisualizationVertexFactory::GetType(FVectorFieldVisualizationVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 148962d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVectorFieldVisualizationVertexFactory::InitRHI
          (FVectorFieldVisualizationVertexFactory *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *this_00;
  code *pcVar2;
  undefined8 this_01;
  bool bVar3;
  int iVar4;
  TGlobalResource<FDummyVertexBuffer,1> **ppTVar5;
  undefined1 *puVar6;
  TGlobalResource<FDummyVertexBuffer,1> *local_18;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  puVar1 = &this->field_0x20;
  uStack_a = 0;
  if (*(int *)&this->field_0xa8 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorFieldVisualization.cpp"
                       ,0x70,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18 = &GDummyVertexBuffer;
  uStack_10 = 0;
  ppTVar5 = *(TGlobalResource<FDummyVertexBuffer,1> ***)&this->field_0xa0;
  if (*(TGlobalResource<FDummyVertexBuffer,1> ***)&this->field_0xa0 ==
      (TGlobalResource<FDummyVertexBuffer,1> **)0x0) {
    ppTVar5 = (TGlobalResource<FDummyVertexBuffer,1> **)puVar1;
  }
  uStack_c = 0x10;
  if ((ppTVar5 <= &local_18) && (&local_18 < ppTVar5 + (longlong)*(int *)&this->field_0xac * 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0xa8;
  if (iVar4 == *(int *)&this->field_0xac) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
                      (0x810,(ForElementType<FVertexFactory::FVertexStream> *)puVar1,
                       (int *)&this->field_0xac);
  }
  *(int *)&this->field_0xa8 = iVar4 + 1;
  puVar6 = *(undefined1 **)&this->field_0xa0;
  if (*(undefined1 **)&this->field_0xa0 == (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  *(TGlobalResource<FDummyVertexBuffer,1> **)(puVar6 + (longlong)iVar4 * 0x10) = local_18;
  *(ulonglong *)((longlong)(puVar6 + (longlong)iVar4 * 0x10) + 8) =
       CONCAT26(uStack_a,CONCAT24(uStack_c,uStack_10));
  if (GVectorFieldVisualizationVertexDeclaration._32_8_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(GVectorFieldVisualizationVertexDeclaration.VertexDeclarationRHI)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorFieldVisualization.cpp"
                       ,0x79,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_01 = GVectorFieldVisualizationVertexDeclaration._32_8_;
  this_00 = *(FRHIResource **)&this->field_0x120;
  if (this_00 != (FRHIResource *)GVectorFieldVisualizationVertexDeclaration._32_8_) {
    *(undefined8 *)&this->field_0x120 = GVectorFieldVisualizationVertexDeclaration._32_8_;
    if (this_01 != 0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ModifyCompilationEnvironment @ 148969d50

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
FVectorFieldVisualizationVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  return;
}

// ShouldCompilePermutation @ 148980600

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
FVectorFieldVisualizationVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (((param_1->MaterialParameters)._padding_ & 2) == 0) {
    return false;
  }
  bVar3 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
  if (!bVar3) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xf4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC == 0) {
      return false;
    }
  }
  return true;
}

