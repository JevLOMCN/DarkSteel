// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ApplyOffsets @ 1493d7460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNiagaraConstantBufferToDataSetBinding::ApplyOffsets
          (FNiagaraParameterDataSetBindingCollection *param_1,uchar *param_2,
          FNiagaraDataSet *param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (param_3->DestinationData == (FNiagaraDataBuffer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x15e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar8 = (param_1->FloatOffsets).AllocatorInstance.Data;
  iVar3 = (param_1->FloatOffsets).ArrayNum;
  pFVar5 = param_3->DestinationData;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->FloatOffsets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraParameterDataSetBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    pFVar1 = pFVar8 + 4;
    iVar4 = *(int *)pFVar8;
    pFVar8 = pFVar8 + 8;
    *(undefined4 *)
     ((pFVar5->FloatData).AllocatorInstance.Data +
     (ulonglong)(*(int *)pFVar1 * pFVar5->FloatStride) + (ulonglong)(uint)param_4 * 4) =
         *(undefined4 *)(param_2 + iVar4);
  }
  pFVar8 = (param_1->Int32Offsets).AllocatorInstance.Data;
  iVar3 = (param_1->Int32Offsets).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->Int32Offsets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraParameterDataSetBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar2) break;
    pFVar1 = pFVar8 + 4;
    iVar4 = *(int *)pFVar8;
    pFVar8 = pFVar8 + 8;
    *(undefined4 *)
     ((pFVar5->Int32Data).AllocatorInstance.Data +
     (ulonglong)(*(int *)pFVar1 * pFVar5->Int32Stride) + (ulonglong)(uint)param_4 * 4) =
         *(undefined4 *)(param_2 + iVar4);
  }
  return;
}

// CopyToDataSets @ 1493dca70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FNiagaraConstantBufferToDataSetBinding::CopyToDataSets
          (FNiagaraSystemCompiledData *param_1,FNiagaraSystemInstance *param_2,
          FNiagaraDataSet *param_3,FNiagaraDataSet *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  longlong lVar10;
  
  ApplyOffsets(&param_1->SpawnInstanceGlobalBinding,
               (uchar *)(param_2->GlobalParameters + param_2->CurrentFrameIndex),param_3,param_5);
  ApplyOffsets(&param_1->UpdateInstanceGlobalBinding,
               (uchar *)(param_2->GlobalParameters + param_2->CurrentFrameIndex),param_4,param_5);
  uVar7 = param_2->CurrentFrameIndex;
  ApplyOffsets(&param_1->SpawnInstanceSystemBinding,(uchar *)(param_2->SystemParameters + uVar7),
               param_3,param_5);
  ApplyOffsets(&param_1->UpdateInstanceSystemBinding,(uchar *)(param_2->SystemParameters + uVar7),
               param_4,param_5);
  uVar7 = param_2->CurrentFrameIndex;
  ApplyOffsets(&param_1->SpawnInstanceOwnerBinding,(uchar *)(param_2->OwnerParameters + uVar7),
               param_3,param_5);
  ApplyOffsets(&param_1->UpdateInstanceOwnerBinding,(uchar *)(param_2->OwnerParameters + uVar7),
               param_4,param_5);
  iVar9 = (param_2->Emitters).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = (param_1->SpawnInstanceEmitterBindings).ArrayNum;
  if (iVar9 < iVar2) {
    iVar2 = iVar9;
  }
  uVar7 = 0;
  if (0 < iVar2) {
    iVar9 = 0;
    lVar10 = 0;
    do {
      uVar6 = param_2->CurrentFrameIndex + iVar9;
      uVar5 = 0;
      if ((int)uVar6 < (param_2->EmitterParameters).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (param_2->EmitterParameters).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->SpawnInstanceEmitterBindings).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ApplyOffsets((FNiagaraParameterDataSetBindingCollection *)
                   ((param_1->SpawnInstanceEmitterBindings).AllocatorInstance.Data + lVar10),
                   (uchar *)pFVar8,param_3,param_5);
      uVar5 = 0;
      if ((int)uVar7 < (param_1->UpdateInstanceEmitterBindings).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ApplyOffsets((FNiagaraParameterDataSetBindingCollection *)
                   ((param_1->UpdateInstanceEmitterBindings).AllocatorInstance.Data + lVar10),
                   (uchar *)pFVar8,param_4,param_5);
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 2;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar7 < iVar2);
  }
  return;
}

