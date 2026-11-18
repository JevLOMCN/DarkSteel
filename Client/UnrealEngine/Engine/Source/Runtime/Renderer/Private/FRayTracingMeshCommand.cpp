// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FRayTracingMeshCommand @ 1450b0760

FRayTracingMeshCommand * __thiscall
FRayTracingMeshCommand::FRayTracingMeshCommand(FRayTracingMeshCommand *this)

{
  undefined1 *puVar1;
  
  (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->ShaderBindings).ShaderLayouts.ArrayNum = 0;
  (this->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[1] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[2] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[3] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[4] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[5] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[6] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[7] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[8] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[9] = (uchar *)0x0;
  (this->ShaderBindings).ShaderFrequencyBits = 0;
  (this->ShaderBindings).Size = 0;
  this->bNaniteRayTracing = false;
  this->bCanBeCached = false;
  this->MaterialShader = (FRHIRayTracingShader *)0x0;
  (this->NaniteUniformBufferParameter).BaseIndex = 0xffff;
  this->MaterialShaderIndex = 0xffffffff;
  this->GeometrySegmentIndex = 0xffffffff;
  *(undefined2 *)&this->InstanceMask = 0x3ff;
  this->ViewUniformBufferParameter = 0xffff;
  this->SceneUniformBufferParameter = 0xffff;
  return this;
}

// ~FRayTracingMeshCommand @ 1450b14a0

void __thiscall FRayTracingMeshCommand::~FRayTracingMeshCommand(FRayTracingMeshCommand *this)

{
  ForElementType<FMeshDrawShaderBindingsLayout> FVar1;
  
  if (0x50 < (this->ShaderBindings).Size) {
    operator_delete__((this->ShaderBindings).Data.InlineStorage[0]);
  }
  (this->ShaderBindings).Size = 0;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  FVar1 = (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// FRayTracingMeshCommand @ 145295c20

FRayTracingMeshCommand * __thiscall
FRayTracingMeshCommand::FRayTracingMeshCommand
          (FRayTracingMeshCommand *this,FRayTracingMeshCommand *param_1)

{
  byte bVar1;
  
  (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->ShaderBindings).ShaderLayouts.ArrayNum = 0;
  (this->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[1] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[2] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[3] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[4] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[5] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[6] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[7] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[8] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[9] = (uchar *)0x0;
  (this->ShaderBindings).ShaderFrequencyBits = 0;
  (this->ShaderBindings).Size = 0;
  FMeshDrawShaderBindings::CopyFrom(&this->ShaderBindings,&param_1->ShaderBindings);
  this->MaterialShader = param_1->MaterialShader;
  this->MaterialShaderIndex = param_1->MaterialShaderIndex;
  this->GeometrySegmentIndex = param_1->GeometrySegmentIndex;
  this->InstanceMask = param_1->InstanceMask;
  bVar1 = (this->bCastRayTracedShadows ^ param_1->bCastRayTracedShadows) & 1U ^ this->field_0x89;
  this->field_0x89 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x89) & 2 ^ bVar1;
  this->field_0x89 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x89) & 4 ^ bVar1;
  this->field_0x89 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x89) & 8 ^ bVar1;
  this->field_0x89 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x89) & 0x10 ^ bVar1;
  this->field_0x89 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x89) & 0x20 ^ bVar1;
  this->field_0x89 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x89) & 0x40 ^ bVar1;
  this->field_0x89 = bVar1;
  this->field_0x89 = (bVar1 ^ param_1->field_0x89) & 0x7f ^ param_1->field_0x89;
  bVar1 = (this->bNaniteRayTracing ^ param_1->bNaniteRayTracing) & 1U ^ this->field_0x8a;
  this->field_0x8a = bVar1;
  this->field_0x8a = (bVar1 ^ param_1->field_0x8a) & 2 ^ bVar1;
  (this->ViewUniformBufferParameter).BaseIndex = (param_1->ViewUniformBufferParameter).BaseIndex;
  (this->SceneUniformBufferParameter).BaseIndex = (param_1->SceneUniformBufferParameter).BaseIndex;
  (this->NaniteUniformBufferParameter).BaseIndex = (param_1->NaniteUniformBufferParameter).BaseIndex
  ;
  return this;
}

// IsUsingNaniteRayTracing @ 14539c810

bool __thiscall FRayTracingMeshCommand::IsUsingNaniteRayTracing(FRayTracingMeshCommand *this)

{
  return this->bNaniteRayTracing;
}

// SetRayTracingShaderBindingsForHitGroup @ 1453a83f0

void __thiscall
FRayTracingMeshCommand::SetRayTracingShaderBindingsForHitGroup
          (FRayTracingMeshCommand *this,FRayTracingLocalShaderBindingWriter *param_1,
          TUniformBufferRef<FViewUniformShaderParameters> *param_2,FRHIUniformBuffer *param_3,
          FRHIUniformBuffer *param_4,uint param_5,FRHIRayTracingGeometry *param_6,uint param_7,
          uint param_8,ERayTracingLocalShaderBindingType param_9)

{
  TUniformBufferRef<FViewUniformShaderParameters> TVar1;
  FRHIUniformBuffer **ppFVar2;
  code *pcVar3;
  bool bVar4;
  FRayTracingLocalShaderBindings *pFVar5;
  
  pFVar5 = FMeshDrawShaderBindings::SetRayTracingShaderBindingsForHitGroup
                     (&this->ShaderBindings,param_1,param_5,param_6,param_7,param_8,param_9);
  if ((this->ViewUniformBufferParameter).BaseIndex != 0xffff) {
    if (*param_2 == (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x36,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TVar1 = *param_2;
    ppFVar2 = pFVar5->UniformBuffers;
    if ((this->ViewUniformBufferParameter).BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(TUniformBufferRef<FViewUniformShaderParameters> *)
     (ppFVar2 + (this->ViewUniformBufferParameter).BaseIndex) = TVar1;
  }
  if ((this->SceneUniformBufferParameter).BaseIndex != 0xffff) {
    if (param_3 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x3c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2 = pFVar5->UniformBuffers;
    if ((this->SceneUniformBufferParameter).BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2[(this->SceneUniformBufferParameter).BaseIndex] = param_3;
  }
  if ((this->NaniteUniformBufferParameter).BaseIndex != 0xffff) {
    if (param_4 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NaniteUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x42,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2 = pFVar5->UniformBuffers;
    if ((this->NaniteUniformBufferParameter).BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2[(this->NaniteUniformBufferParameter).BaseIndex] = param_4;
  }
  return;
}

// SetShader @ 1453a85f0

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

void __thiscall
FRayTracingMeshCommand::SetShader
          (FRayTracingMeshCommand *this,TShaderRefBase<FShader,FShaderMapPointerTable> *param_1)

{
  uint uVar1;
  FShaderMapResource *this_00;
  FShader *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRHIRayTracingShader *pFVar6;
  FShaderParametersMetadata *pFVar7;
  FHashedName FVar8;
  FShaderUniformBufferParameter *pFVar9;
  FHashedName local_res8;
  FHashedName local_res10;
  FHashedName local_res18;
  FHashedName local_res20;
  FHashedName local_38;
  FHashedName local_30;
  
  if (param_1->ShaderContent == (FShader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = TShaderRefBase<FShader,FShaderMapPointerTable>::GetRayTracingShader(param_1);
  this->MaterialShader = pFVar6;
  this_00 = (param_1->ShaderMap->Resource).Reference;
  if (this_00 == (FShaderMapResource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x426,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = param_1->ShaderContent->ResourceIndex;
  if ((this_00->RHIShaders).Ptr[(int)uVar1] == (atomic<FRHIShader_*>)0x0) {
    FShaderMapResource::CreateShaderOrCrash(this_00,uVar1,true);
  }
  uVar5 = 0;
  if ((int)uVar1 < (this_00->RayTracingLibraryIndices).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->MaterialShaderIndex =
       *(uint *)((this_00->RayTracingLibraryIndices).AllocatorInstance.Data +
                (longlong)(int)uVar1 * 4);
  pFVar2 = param_1->ShaderContent;
  pFVar7 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar9 = FShader::GetUniformBufferParameter(pFVar2,FVar8);
  (this->ViewUniformBufferParameter).BaseIndex = pFVar9->BaseIndex;
  pFVar2 = param_1->ShaderContent;
  pFVar7 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  FHashedName::FHashedName(&local_res10,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_38,&local_res10);
  pFVar9 = FShader::GetUniformBufferParameter(pFVar2,FVar8);
  (this->SceneUniformBufferParameter).BaseIndex = pFVar9->BaseIndex;
  pFVar2 = param_1->ShaderContent;
  pFVar7 = FNaniteRayTracingUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res18,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_30,&local_res18);
  pFVar9 = FShader::GetUniformBufferParameter(pFVar2,FVar8);
  (this->NaniteUniformBufferParameter).BaseIndex = pFVar9->BaseIndex;
  FMeshDrawShaderBindings::Initialize(&this->ShaderBindings,param_1);
  if (((this->NaniteUniformBufferParameter).BaseIndex != 0xffff) && (!this->bNaniteRayTracing)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bNaniteRayTracing",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// UpdateFlags @ 1453b68c0

void __thiscall
FRayTracingMeshCommand::UpdateFlags
          (FRayTracingMeshCommand *this,FRayTracingCachedMeshCommandFlags *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  (param_1->field1_0x8)._s_0.InstanceMask =
       (param_1->field1_0x8)._s_0.InstanceMask | this->InstanceMask;
  pbVar1 = (byte *)((longlong)&param_1->field1_0x8 + 1);
  *pbVar1 = *pbVar1 & ((byte)this->field_0x89 >> 1 | 0xfe);
  bVar2 = (this->field_0x89 * '\x02' | 0xfdU) & *(byte *)((longlong)&param_1->field1_0x8 + 1);
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = bVar2;
  bVar2 = (this->field_0x89 << 2 | bVar2) & 4 ^ bVar2 & 0xfb;
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = bVar2;
  bVar2 = (bVar2 | this->field_0x89) & 8 ^ bVar2 & 0xf7;
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = bVar2;
  bVar2 = (this->field_0x89 * '\x02' | 0xefU) & bVar2;
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = bVar2;
  bVar2 = ((byte)this->field_0x89 >> 1 | bVar2) & 0x20 ^ bVar2 & 0xdf;
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = bVar2;
  bVar2 = (this->field_0x89 << 2 | bVar2) & 0x40 ^ bVar2 & 0xbf;
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = bVar2;
  *(byte *)((longlong)&param_1->field1_0x8 + 1) = (this->field_0x89 << 2 | 0x7f) & bVar2;
  pbVar1 = (byte *)((longlong)&param_1->field1_0x8 + 2);
  *pbVar1 = *pbVar1 & (this->bReverseCulling | 0xfeU);
  return;
}

