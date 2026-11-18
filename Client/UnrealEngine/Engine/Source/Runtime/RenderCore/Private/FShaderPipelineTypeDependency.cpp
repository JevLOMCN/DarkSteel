// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// RefreshCachedSourceHash @ 145e20180

/* WARNING: Removing unreachable block (ram,0x000145e20364) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineTypeDependency::RefreshCachedSourceHash
          (FShaderPipelineTypeDependency *this,EShaderPlatform param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  TMap<FHashedName,FShaderPipelineType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>_>
  *pTVar9;
  FSHAHash *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined1 local_68 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  
  pTVar9 = FShaderPipelineType::GetNameToTypeMap();
  uVar2 = (this->ShaderPipelineTypeName).Hash;
  if (*(int *)&pTVar9->field_0x8 != *(int *)&pTVar9->field_0x34) {
    puVar14 = *(undefined1 **)&pTVar9->field_0x40;
    if (*(undefined1 **)&pTVar9->field_0x40 == (undefined1 *)0x0) {
      puVar14 = &pTVar9->field_0x38;
    }
    iVar6 = *(int *)(puVar14 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)(*(int *)&pTVar9->field_0x48 - 1))
                    * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)pTVar9 + (longlong)iVar6 * 0x18;
        if (*(ulonglong *)(*(longlong *)pTVar9 + (longlong)iVar6 * 0x18) == uVar2) {
          plVar11 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar11 = (longlong *)0x0;
          }
          if ((plVar11 != (longlong *)0x0) && (lVar1 = *plVar11, lVar1 != 0)) {
            plVar13 = *(longlong **)(lVar1 + 0x20);
            iVar6 = *(int *)(lVar1 + 0x28);
            local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_60.ArrayNum = 0;
            local_60.ArrayMax = 0;
            plVar11 = plVar13 + iVar6;
            while( true ) {
              if (*(int *)(lVar1 + 0x28) != iVar6) {
                local_68[0] = 0;
                `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_68);
              }
              if (plVar13 == plVar11) break;
              ::FString::FString(&local_50,*(wchar_t **)(*plVar13 + 0x38));
              if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_50) &&
                  ((FScriptContainerElement *)&local_50 <
                   local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar8 = local_60.ArrayNum;
              if (local_60.ArrayNum == local_60.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_60.AllocatorInstance,&local_60.ArrayMax);
              }
              local_60.ArrayNum = iVar8 + 1;
              pFVar12 = local_60.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
              *(undefined8 *)pFVar12 = 0;
              *(FScriptContainerElement **)pFVar12 = local_50.Data.AllocatorInstance.Data;
              local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar12 + 8) = local_50.Data.ArrayNum;
              *(int *)(pFVar12 + 0xc) = local_50.Data.ArrayMax;
              local_50.Data.ArrayNum = 0;
              local_50.Data.ArrayMax = 0;
              plVar13 = plVar13 + 1;
            }
            pFVar10 = GetShaderFilesHash(&local_60,param_1);
            DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum)
            ;
            if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.AllocatorInstance.Data);
            }
            uVar4 = *(undefined8 *)(pFVar10->Hash + 8);
            *(undefined8 *)(this->StagesSourceHash).Hash = *(undefined8 *)pFVar10->Hash;
            *(undefined8 *)((this->StagesSourceHash).Hash + 8) = uVar4;
            uVar7 = *(undefined4 *)(pFVar10->Hash + 0x10);
            goto LAB_145e20211;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar7 = 0;
  (this->StagesSourceHash).Hash[0] = '\0';
  (this->StagesSourceHash).Hash[1] = '\0';
  (this->StagesSourceHash).Hash[2] = '\0';
  (this->StagesSourceHash).Hash[3] = '\0';
  (this->StagesSourceHash).Hash[4] = '\0';
  (this->StagesSourceHash).Hash[5] = '\0';
  (this->StagesSourceHash).Hash[6] = '\0';
  (this->StagesSourceHash).Hash[7] = '\0';
  (this->StagesSourceHash).Hash[8] = '\0';
  (this->StagesSourceHash).Hash[9] = '\0';
  (this->StagesSourceHash).Hash[10] = '\0';
  (this->StagesSourceHash).Hash[0xb] = '\0';
  (this->StagesSourceHash).Hash[0xc] = '\0';
  (this->StagesSourceHash).Hash[0xd] = '\0';
  (this->StagesSourceHash).Hash[0xe] = '\0';
  (this->StagesSourceHash).Hash[0xf] = '\0';
LAB_145e20211:
  *(undefined4 *)((this->StagesSourceHash).Hash + 0x10) = uVar7;
  return;
}

