// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// GetExternalData<TStateTreeExternalDataHandle<FCameraDirectorStateTreeEvaluationData,0>_> @ 14d581dc0

FCameraDirectorStateTreeEvaluationData * __thiscall
FStateTreeExecutionContext::
GetExternalData<TStateTreeExternalDataHandle<FCameraDirectorStateTreeEvaluationData,0>_>
          (FStateTreeExecutionContext *this,
          TStateTreeExternalDataHandle<FCameraDirectorStateTreeEvaluationData,0> param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  UStateTree *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FCameraDirectorStateTreeEvaluationData *pFVar8;
  UPackage *pUVar9;
  undefined2 in_register_00000016;
  char *pcVar10;
  FScriptContainerElement *pFVar11;
  
  pcVar10 = (char *)CONCAT26(in_register_00000016,param_1);
  if (*pcVar10 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x27f,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  if (*pcVar10 != '\f') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.DataHandle.GetSource() == EStateTreeDataSourceType::ExternalData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x280,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  if (this->CurrentlyProcessedFrame == (FStateTreeExecutionFrame *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentlyProcessedFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x281,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  uVar1 = *(ushort *)(pcVar10 + 2);
  pUVar4 = (this->CurrentlyProcessedFrame->StateTree).field0_0x0.DebugPtr;
  if ((pUVar4->ExternalDataDescs).ArrayNum <= (int)(uint)uVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  if ((pUVar4->ExternalDataDescs).AllocatorInstance.Data[(ulonglong)uVar1 * 0x18 + 0x16] ==
      (FScriptContainerElement)0x1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentlyProcessedFrame->StateTree->ExternalDataDescs[Handle.DataHandle.GetIndex()].Requirement != EStateTreeExternalDataRequirement::Optional"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x282,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  uVar1 = *(ushort *)(pcVar10 + 2);
  uVar2 = (this->CurrentlyProcessedFrame->ExternalDataBaseIndex).Value;
  if ((this->ContextAndExternalDataViews).ArrayNum <= (int)((uint)uVar2 + (uint)uVar1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar11 = (this->ContextAndExternalDataViews).AllocatorInstance.Data +
            ((ulonglong)uVar2 + (ulonglong)uVar1) * 0x10;
  if (*(longlong *)(pFVar11 + 8) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  if (*(longlong *)pFVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
      return pFVar8;
    }
  }
  lVar5 = *(longlong *)pFVar11;
  if (Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData,
                         (UObject *)pUVar9,L"CameraDirectorStateTreeEvaluationData");
    if (Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d581fca;
  }
  else {
LAB_14d581fca:
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton)->
         _padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14d582014;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FCameraDirectorStateTreeEvaluationData *)(*pcVar6)();
    return pFVar8;
  }
LAB_14d582014:
  return *(FCameraDirectorStateTreeEvaluationData **)(pFVar11 + 8);
}

