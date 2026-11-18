// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// CollectPSOInitializers @ 145ff77b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FSlateMaterialPSOCollector::CollectPSOInitializers
          (FSlateMaterialPSOCollector *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  FShaderMapResource *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  atomic<FRHIShader_*> aVar7;
  atomic<FRHIShader_*> aVar8;
  ulonglong uVar9;
  TRefCountPtr<FRHIBlendState> TVar10;
  ForAnyElementType FVar11;
  FShader *this_00;
  FShaderMapBase *pFVar12;
  int iVar13;
  FShaderMapBase *pFVar14;
  FShader *this_01;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188;
  bool local_187;
  FScriptContainerElement local_186;
  FMaterial *local_180;
  int local_178;
  uint local_174;
  FScriptContainerElement *local_170;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_168;
  FSlateMaterialPSOCollector *local_160;
  FSceneTexturesConfig *local_158;
  FScriptContainerElement *local_150;
  FMaterialShaders local_148;
  FMaterialShaderTypes local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168 = param_5;
  local_180 = param_2;
  local_160 = this;
  local_158 = param_1;
  cVar4 = (**(code **)(param_2->_padding_ + 0xe8))(param_2);
  if ((cVar4 != '\0') && (GSlateMaterialPSOPrecache != 0)) {
    local_174 = SlateShaderTypesToPrecache.ArrayNum;
    uVar9 = (ulonglong)(int)local_174;
    local_150 = SlateShaderTypesToPrecache.AllocatorInstance.Data + uVar9;
    FVar11 = SlateShaderTypesToPrecache.AllocatorInstance;
    while( true ) {
      pFVar3 = local_150;
      local_170 = FVar11.Data;
      if (SlateShaderTypesToPrecache.ArrayNum != (int)uVar9) {
        local_188 = 0;
        `TCheckedPointerIterator<enum_ESlateShader,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_188);
      }
      if (FVar11.Data == pFVar3) break;
      local_186 = *FVar11.Data;
      local_178 = (local_186 == (FScriptContainerElement)0x5) + 1;
      iVar13 = 0;
      do {
        local_d8.PipelineType = (FShaderPipelineType *)0x0;
        local_d8.ShaderType[0] = (FShaderType *)0x0;
        local_d8.ShaderType[1] = (FShaderType *)0x0;
        local_187 = 0 < iVar13;
        local_d8.ShaderType[2] = (FShaderType *)0x0;
        local_d8.ShaderType[3] = (FShaderType *)0x0;
        local_d8.ShaderType[4] = (FShaderType *)0x0;
        local_d8.ShaderType[5] = (FShaderType *)0x0;
        local_d8.ShaderType[6] = (FShaderType *)0x0;
        local_d8.ShaderType[7] = (FShaderType *)0x0;
        local_d8.ShaderType[8] = (FShaderType *)0x0;
        local_d8.ShaderType[9] = (FShaderType *)0x0;
        local_d8.ShaderType[10] = (FShaderType *)0x0;
        local_d8.ShaderType[0xb] = (FShaderType *)0x0;
        local_d8.PermutationId[0] = 0;
        local_d8.PermutationId[1] = 0;
        local_d8.PermutationId[2] = 0;
        local_d8.PermutationId[3] = 0;
        local_d8.PermutationId[4] = 0;
        local_d8.PermutationId[5] = 0;
        local_d8.PermutationId[6] = 0;
        local_d8.PermutationId[7] = 0;
        local_d8.PermutationId[8] = 0;
        local_d8.PermutationId[9] = 0;
        local_d8.PermutationId[10] = 0;
        local_d8.PermutationId[0xb] = 0;
        bVar5 = ChooseMaterialShaderTypes((ESlateShader)local_186,local_187,&local_d8);
        if (bVar5) {
          local_148.ShaderMap = (FShaderMapBase *)0x0;
          local_148.Pipeline = (FShaderPipeline *)0x0;
          local_148.Shaders[0] = (FShader *)0x0;
          local_148.Shaders[1] = (FShader *)0x0;
          local_148.Shaders[2] = (FShader *)0x0;
          local_148.Shaders[3] = (FShader *)0x0;
          local_148.Shaders[4] = (FShader *)0x0;
          local_148.Shaders[5] = (FShader *)0x0;
          local_148.Shaders[6] = (FShader *)0x0;
          local_148.Shaders[7] = (FShader *)0x0;
          local_148.Shaders[8] = (FShader *)0x0;
          local_148.Shaders[9] = (FShader *)0x0;
          local_148.Shaders[10] = (FShader *)0x0;
          local_148.Shaders[0xb] = (FShader *)0x0;
          bVar5 = FMaterial::TryGetShaders(param_2,&local_d8,(FVertexFactoryType *)0x0,&local_148);
          if (bVar5) {
            this_00 = (FShader *)0x0;
            pFVar12 = (FShaderMapBase *)0x0;
            if (local_148.Shaders[0] != (FShader *)0x0) {
              this_00 = local_148.Shaders[0];
              pFVar12 = local_148.ShaderMap;
            }
            pFVar14 = (FShaderMapBase *)0x0;
            this_01 = (FShader *)0x0;
            if (local_148.Shaders[3] != (FShader *)0x0) {
              pFVar14 = local_148.ShaderMap;
              this_01 = local_148.Shaders[3];
            }
            param_2 = local_180;
            if ((local_148.Shaders[0] != (FShader *)0x0) && (this_01 != (FShader *)0x0)) {
              pFVar1 = (pFVar12->Resource).Reference;
              if ((pFVar1 == (FShaderMapResource *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Resource",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                     ,0x426,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              aVar7 = (pFVar1->RHIShaders).Ptr[this_00->ResourceIndex];
              if ((aVar7 == (atomic<FRHIShader_*>)0x0) &&
                 (aVar7 = (atomic<FRHIShader_*>)
                          FShaderMapResource::CreateShaderOrCrash
                                    (pFVar1,this_00->ResourceIndex,false),
                 aVar7 == (atomic<FRHIShader_*>)0x0)) {
                if (4 < (byte)LogShaders._0_1_) {
                  if ((pFVar12->PointerTable == (FShaderMapPointerTable *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PointerTable",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                         ,0x9b4,L""), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FShader::GetType(this_00,pFVar12->PointerTable);
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)
                             &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSlateMaterialShaderVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                              ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
                }
                aVar7 = (atomic<FRHIShader_*>)0x0;
              }
              pFVar1 = (pFVar14->Resource).Reference;
              if ((pFVar1 == (FShaderMapResource *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Resource",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                     ,0x426,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              aVar8 = (pFVar1->RHIShaders).Ptr[this_01->ResourceIndex];
              if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
                 (aVar8 = (atomic<FRHIShader_*>)
                          FShaderMapResource::CreateShaderOrCrash
                                    (pFVar1,this_01->ResourceIndex,false),
                 aVar8 == (atomic<FRHIShader_*>)0x0)) {
                if (4 < (byte)LogShaders._0_1_) {
                  if ((pFVar14->PointerTable == (FShaderMapPointerTable *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PointerTable",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                         ,0x9b4,L""), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FShader::GetType(this_01,pFVar14->PointerTable);
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)
                             &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSlateMaterialShaderPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                              ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
                }
                aVar8 = (atomic<FRHIShader_*>)0x0;
              }
              param_2 = local_180;
              if ((aVar7 != (atomic<FRHIShader_*>)0x0) && (aVar8 != (atomic<FRHIShader_*>)0x0)) {
                uVar6 = (**(code **)(local_180->_padding_ + 0x268))(local_180);
                switch(uVar6) {
                default:
                  TVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                           ::StaticResource.StateRHI;
                  break;
                case 2:
                  TVar10 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                           ::StaticResource.StateRHI;
                  break;
                case 3:
                  TVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                           ::StaticResource.StateRHI;
                  break;
                case 4:
                  TVar10 = TStaticStateRHI<TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                           ::StaticResource.StateRHI;
                  break;
                case 5:
                  TVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                           ::StaticResource.StateRHI;
                  break;
                case 6:
                  TVar10 = TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                           ::StaticResource.StateRHI;
                }
                AddSlatePSOInitializer
                          (TVar10.Reference,local_187,TriangleList,(FRHIVertexShader *)aVar7,
                           (FRHIPixelShader *)aVar8,local_158,*(int *)&local_160->field_0x8,
                           local_168);
              }
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_178);
      FVar11.Data = local_170 + 1;
      uVar9 = (ulonglong)local_174;
    }
  }
  return;
}

