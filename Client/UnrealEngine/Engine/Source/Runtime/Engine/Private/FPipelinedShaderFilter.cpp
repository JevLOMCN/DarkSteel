// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPipelinedShaderFilter @ 147f662b0

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

FPipelinedShaderFilter * __thiscall
FPipelinedShaderFilter::FPipelinedShaderFilter
          (FPipelinedShaderFilter *this,EShaderPlatform param_1,
          TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FShaderPipelineType *this_00;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FPipelinedShaderFilter *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  EShaderPlatform local_res10;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  undefined4 local_60;
  int local_5c;
  FShaderType *local_58;
  FScriptContainerElement *local_50;
  
  *(undefined8 *)&(this->PipelinedShaderTypes).Elements = 0;
  *(undefined8 *)&(this->PipelinedShaderTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PipelinedShaderTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PipelinedShaderTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PipelinedShaderTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PipelinedShaderTypes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PipelinedShaderTypes).Elements.field_0x34 = 0;
  (this->PipelinedShaderTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PipelinedShaderTypes).HashSize = 0;
  this->bAnyTypesExcluded = false;
  local_res10 = param_1;
  local_res18 = param_2;
  bVar7 = ExcludeNonPipelinedShaderTypes(param_1);
  if (bVar7) {
    local_res20 = param_2->ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    pFVar19 = (param_2->AllocatorInstance).Data;
    local_50 = pFVar19 + uVar11 * 8;
    while( true ) {
      pFVar15 = local_50;
      if (param_2->ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FShaderPipelineType_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar19 == pFVar15) break;
      this_00 = *(FShaderPipelineType **)pFVar19;
      bVar7 = FShaderPipelineType::ShouldOptimizeUnusedOutputs(this_00,param_1);
      if (bVar7) {
        iVar2 = (this_00->Stages).ArrayNum;
        pFVar15 = (this_00->Stages).AllocatorInstance.Data;
        if ((iVar2 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FPipelinedShaderFilter *)(*pcVar6)();
          return pFVar9;
        }
        uVar8 = *(int *)&(this->PipelinedShaderTypes).Elements.field_0x8 -
                *(int *)&(this->PipelinedShaderTypes).Elements.field_0x34;
        uVar14 = uVar8 + iVar2;
        if (uVar8 < uVar14) {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,uVar14);
          if (uVar14 < 4) {
            uVar8 = 1;
          }
          else {
            uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_60 = (undefined4)lVar13;
            uVar8 = 1 << ((byte)lVar13 & 0x1f);
          }
          iVar3 = (this->PipelinedShaderTypes).HashSize;
          if ((iVar3 == 0) || (iVar3 < (int)uVar8)) {
            (this->PipelinedShaderTypes).HashSize = uVar8;
            if ((this->PipelinedShaderTypes).Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(this->PipelinedShaderTypes).Hash.SecondaryData,0,0,4
                        );
            }
            if (uVar8 != 0) {
              uVar14 = uVar8;
              if (uVar8 < 2) {
                if ((this->PipelinedShaderTypes).Hash.SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar14 = 0;
                  goto LAB_147f66426;
                }
              }
              else {
LAB_147f66426:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&(this->PipelinedShaderTypes).Hash.SecondaryData,0,
                           uVar14,4);
              }
              if (0 < (int)uVar8) {
                uVar16 = (ulonglong)uVar8;
                uVar11 = 0;
                do {
                  FVar4 = (this->PipelinedShaderTypes).Hash.SecondaryData;
                  FVar12 = (ForElementType<FSetElementId>)&(this->PipelinedShaderTypes).Hash;
                  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                    FVar12 = FVar4;
                  }
                  uVar10 = uVar11 & (longlong)(int)uVar8 - 1U;
                  uVar11 = uVar11 + 1;
                  *(undefined4 *)((longlong)FVar12 + uVar10 * 4) = 0xffffffff;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
            }
            param_1 = local_res10;
            if ((this->PipelinedShaderTypes).HashSize != 0) {
              iVar3 = *(int *)&(this->PipelinedShaderTypes).Elements.field_0x28;
              local_80.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->PipelinedShaderTypes).Elements.field_0x10;
              uStack_a4 = 1;
              local_a8 = 0;
              iStack_94 = 0;
              iStack_90 = 0;
              if (iVar3 != 0) {
                puVar5 = *(uint **)&(this->PipelinedShaderTypes).Elements.field_0x20;
                puVar17 = (uint *)local_80.Array;
                if (puVar5 != (uint *)0x0) {
                  puVar17 = puVar5;
                }
                uVar8 = *puVar17;
                local_a8 = 0;
                while (uVar8 == 0) {
                  iStack_90 = iStack_90 + 0x20;
                  lVar13 = (longlong)local_a8;
                  local_a8 = local_a8 + 1;
                  if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a8)
                  goto LAB_147f6651d;
                  uVar8 = puVar17[lVar13 + 1];
                }
                uStack_a4 = -uVar8 & uVar8;
                uVar11 = (ulonglong)uStack_a4 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                local_5c = (int)lVar13;
                iStack_94 = local_5c + -1 + iStack_90;
                if (iVar3 < iStack_94) {
LAB_147f6651d:
                  local_80._padding_ = CONCAT44(uStack_a4,local_a8);
                  local_80.CurrentBitIndex = iVar3;
                  local_80.UnvisitedBitMask = 0xffffffff;
                  local_80._28_4_ = uStack_8c;
                  local_80.BaseBitIndex = iStack_90;
                  goto LAB_147f6653a;
                }
              }
              local_80._padding_ = CONCAT44(uStack_a4,local_a8);
              local_80.CurrentBitIndex = iStack_94;
              local_80.UnvisitedBitMask = 0xffffffff;
              local_80._28_4_ = uStack_8c;
              local_80.BaseBitIndex = iStack_90;
              if (iStack_94 < iVar3) {
                do {
                  puVar18 = (ulonglong *)
                            ((longlong)iStack_94 * 0x10 +
                            *(longlong *)&(this->PipelinedShaderTypes).Elements);
                  uVar8 = ((uint)(*puVar18 >> 0x14) & 0xffff ^ (uint)(*puVar18 >> 4)) * -0x7a143595;
                  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
                  uVar8 = (uVar8 >> 0x10 ^ uVar8) & (this->PipelinedShaderTypes).HashSize - 1U;
                  *(uint *)((longlong)puVar18 + 0xc) = uVar8;
                  FVar4 = (this->PipelinedShaderTypes).Hash.SecondaryData;
                  FVar12 = (ForElementType<FSetElementId>)&(this->PipelinedShaderTypes).Hash;
                  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                    FVar12 = FVar4;
                  }
                  uVar11 = (longlong)(this->PipelinedShaderTypes).HashSize - 1U &
                           (longlong)(int)uVar8;
                  *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar12 + uVar11 * 4);
                  *(int *)((longlong)FVar12 + uVar11 * 4) = iStack_94;
                  local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
                  param_1 = local_res10;
                  iStack_94 = local_80.CurrentBitIndex;
                } while (local_80.CurrentBitIndex < (local_80.Array)->NumBits);
              }
            }
          }
        }
LAB_147f6653a:
        pFVar1 = pFVar15 + (longlong)iVar2 * 8;
        param_2 = local_res18;
        for (; local_res18 = param_2, pFVar15 != pFVar1; pFVar15 = pFVar15 + 8) {
          TSet<FShaderType_const_*,DefaultKeyFuncs<FShaderType_const_*,0>,FDefaultSetAllocator>::
          Emplace<FShaderType_const_*_const_&>
                    (&this->PipelinedShaderTypes,&local_58,(bool *)pFVar15);
          param_2 = local_res18;
        }
      }
      uVar11 = (ulonglong)local_res20;
      pFVar19 = pFVar19 + 8;
    }
    this->bAnyTypesExcluded =
         *(int *)&(this->PipelinedShaderTypes).Elements.field_0x8 !=
         *(int *)&(this->PipelinedShaderTypes).Elements.field_0x34;
  }
  pFVar19 = (param_2->AllocatorInstance).Data;
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar19);
  }
  return this;
}

