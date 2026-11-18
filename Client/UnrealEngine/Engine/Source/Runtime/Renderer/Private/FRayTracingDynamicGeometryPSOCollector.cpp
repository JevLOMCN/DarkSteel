// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CollectPSOInitializers @ 1453131b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryPSOCollector::CollectPSOInitializers
          (FRayTracingDynamicGeometryPSOCollector *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  FShaderMapResource *this_00;
  FPSOPrecacheData *pFVar3;
  code *pcVar4;
  FShaderMapBase *pFVar5;
  FShader *this_01;
  bool bVar6;
  EPSOPrecacheMode EVar7;
  int iVar8;
  FShaderType *pFVar9;
  longlong lVar10;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar11;
  atomic<FRHIShader_*> aVar12;
  undefined1 auStack_2e8 [32];
  FPSOPrecacheData *local_2c8;
  FPSOPrecacheData *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  FMaterialShaders local_298;
  FPSOPrecacheData local_228;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if ((param_3->VertexFactoryType->Flags & SupportsRayTracingDynamicGeometry) != None) {
    aVar12 = (atomic<FRHIShader_*>)0x0;
    local_e8.PipelineType = (FShaderPipelineType *)0x0;
    local_e8.ShaderType[0] = (FShaderType *)0x0;
    local_e8.ShaderType[1] = (FShaderType *)0x0;
    local_e8.ShaderType[2] = (FShaderType *)0x0;
    local_e8.ShaderType[3] = (FShaderType *)0x0;
    local_e8.ShaderType[4] = (FShaderType *)0x0;
    local_e8.ShaderType[5] = (FShaderType *)0x0;
    local_e8.ShaderType[6] = (FShaderType *)0x0;
    local_e8.ShaderType[7] = (FShaderType *)0x0;
    local_e8.ShaderType[8] = (FShaderType *)0x0;
    local_e8.ShaderType[9] = (FShaderType *)0x0;
    local_e8.ShaderType[10] = (FShaderType *)0x0;
    local_e8.ShaderType[0xb] = (FShaderType *)0x0;
    local_e8.PermutationId[0] = 0;
    local_e8.PermutationId[1] = 0;
    local_e8.PermutationId[2] = 0;
    local_e8.PermutationId[3] = 0;
    local_e8.PermutationId[4] = 0;
    local_e8.PermutationId[5] = 0;
    local_e8.PermutationId[6] = 0;
    local_e8.PermutationId[7] = 0;
    local_e8.PermutationId[8] = 0;
    local_e8.PermutationId[9] = 0;
    local_e8.PermutationId[10] = 0;
    local_e8.PermutationId[0xb] = 0;
    pFVar9 = (FShaderType *)FRayTracingDynamicGeometryConverterCS::GetStaticType();
    bVar1 = (byte)pFVar9->Frequency;
    if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderType[Frequency] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0xd0,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = param_3->VertexFactoryType;
    local_e8.ShaderType[bVar1] = pFVar9;
    local_e8.PermutationId[bVar1] = 0;
    local_298.ShaderMap = (FShaderMapBase *)0x0;
    local_298.Pipeline = (FShaderPipeline *)0x0;
    local_298.Shaders[0] = (FShader *)0x0;
    local_298.Shaders[1] = (FShader *)0x0;
    local_298.Shaders[2] = (FShader *)0x0;
    local_298.Shaders[3] = (FShader *)0x0;
    local_298.Shaders[4] = (FShader *)0x0;
    local_298.Shaders[5] = (FShader *)0x0;
    local_298.Shaders[6] = (FShader *)0x0;
    local_298.Shaders[7] = (FShader *)0x0;
    local_298.Shaders[8] = (FShader *)0x0;
    local_298.Shaders[9] = (FShader *)0x0;
    local_298.Shaders[10] = (FShader *)0x0;
    local_298.Shaders[0xb] = (FShader *)0x0;
    bVar6 = FMaterial::TryGetShaders(param_2,&local_e8,pFVar2,&local_298);
    this_01 = local_298.Shaders[5];
    pFVar5 = local_298.ShaderMap;
    if ((bVar6) && (local_298.Shaders[5] != (FShader *)0x0)) {
      local_228.Type = Compute;
      local_228.bRequired = true;
      local_228.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData =
           (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
      local_228.ShaderPreloadData.Shaders.ArrayNum = 0;
      local_228.ShaderPreloadData.Shaders.ArrayMax = 3;
      local_228.bDefaultMaterial = 0;
      local_228.PSOCollectorIndex = -1;
      local_228.VertexFactoryType = (FVertexFactoryType *)0x0;
      EVar7 = GetPSOPrecacheMode();
      if (EVar7 == PreloadShader) {
        if (local_228.ShaderPreloadData.Shaders.ArrayNum ==
            local_228.ShaderPreloadData.Shaders.ArrayMax) {
          local_228.ShaderPreloadData.Shaders.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                         (0x810,(ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)
                                &local_228.ShaderPreloadData,
                          &local_228.ShaderPreloadData.Shaders.ArrayMax);
        }
        lVar10 = (longlong)local_228.ShaderPreloadData.Shaders.ArrayNum;
        FVar11 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
                 &local_228.ShaderPreloadData;
        if (local_228.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
            (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
          FVar11 = local_228.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData;
        }
        local_228.ShaderPreloadData.Shaders.ArrayNum =
             local_228.ShaderPreloadData.Shaders.ArrayNum + 1;
        *(FShader **)((longlong)FVar11 + lVar10 * 0x10) = this_01;
        *(FShaderMapBase **)((uchar *)((longlong)FVar11 + 8) + lVar10 * 0x10) = pFVar5;
      }
      else {
        local_228.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
             (FRHIVertexDeclaration *)aVar12;
        if (this_01 != (FShader *)0x0) {
          this_00 = (pFVar5->Resource).Reference;
          if ((this_00 == (FShaderMapResource *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Resource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x426,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_228.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
               (FRHIVertexDeclaration *)(this_00->RHIShaders).Ptr[this_01->ResourceIndex];
          if ((((atomic<FRHIShader_*>)
                local_228.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI ==
                (atomic<FRHIShader_*>)0x0) &&
              (local_228.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
                    (FRHIVertexDeclaration *)
                    FShaderMapResource::CreateShaderOrCrash(this_00,this_01->ResourceIndex,true),
              (atomic<FRHIShader_*>)
              local_228.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI ==
              (atomic<FRHIShader_*>)0x0)) &&
             (local_228.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
                   (FRHIVertexDeclaration *)aVar12, 4 < (byte)LogShaders._0_1_)) {
            if ((pFVar5->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PointerTable",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                   ,0x9b4,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FShader::GetType(this_01,pFVar5->PointerTable);
            UE::Logging::Private::BasicLog<5>
                      (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
        }
      }
      local_228.PSOCollectorIndex = this->_padding_;
      local_228.VertexFactoryType = param_3->VertexFactoryType;
      pFVar3 = (FPSOPrecacheData *)(param_5->AllocatorInstance).Data;
      if ((pFVar3 <= &local_228) && (&local_228 < pFVar3 + param_5->ArrayMax)) {
        local_2b0 = (longlong)param_5->ArrayNum;
        local_2a8 = 0x138;
        local_2c8 = &local_228;
        local_2c0 = pFVar3;
        local_2b8 = (longlong)param_5->ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = param_5->ArrayNum;
      if (iVar8 == param_5->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x138,8,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar8 + 1;
      FPSOPrecacheData::FPSOPrecacheData
                ((FPSOPrecacheData *)((param_5->AllocatorInstance).Data + (longlong)iVar8 * 0x138),
                 &local_228);
      if (local_228.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
          (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FMemory::Free((void *)local_228.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

