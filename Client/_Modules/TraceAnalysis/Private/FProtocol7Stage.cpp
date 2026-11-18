// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// FProtocol7Stage @ 14d38fc00

FProtocol7Stage * __thiscall
UE::Trace::FProtocol7Stage::FProtocol7Stage(FProtocol7Stage *this,FTransport *param_1)

{
  FProtocol5Stage::FProtocol5Stage((FProtocol5Stage *)this,param_1);
  *(undefined4 *)&this->field_0x58 = 7;
  *(undefined ***)this = &___7FProtocol7Stage_Trace_UE__6B_;
  return this;
}

// DispatchKnownEvent @ 14d39b110

bool __thiscall
UE::Trace::FProtocol7Stage::DispatchKnownEvent
          (FProtocol7Stage *this,FMachineContext *param_1,uint param_2,FEventDesc *param_3)

{
  int *piVar1;
  FInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  FAnalysisBridge *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong local_18;
  ulonglong local_10;
  
  switch(param_2) {
  case 1:
  case 3:
    return true;
  default:
    return false;
  case 4:
    FAnalysisBridge::EnterScope(param_1->Bridge);
    return true;
  case 5:
    pFVar4 = param_1->Bridge;
    (pFVar4->State).Timing.EventTimestamp = 0;
    FAnalysisBridge::DispatchLeaveScope(pFVar4);
    return true;
  case 6:
    break;
  case 7:
    pFVar4 = param_1->Bridge;
    (pFVar4->State).Timing.EventTimestamp =
         *(longlong *)(param_3->field1_0x8).Data - (pFVar4->State).Timing.BaseTimestamp;
    FAnalysisBridge::DispatchLeaveScope(pFVar4);
    (pFVar4->State).Timing.EventTimestamp = 0;
    return true;
  case 8:
    pFVar2 = param_1->Bridge->ThreadInfo;
    local_10 = ~(*(ulonglong *)((param_3->field1_0x8).Data + -1) >> 8);
    pFVar3 = (pFVar2->ScopeRoutes).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_10) &&
        ((FScriptContainerElement *)&local_10 <
         pFVar3 + (longlong)(pFVar2->ScopeRoutes).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar8 = (pFVar2->ScopeRoutes).ArrayNum;
    piVar1 = &(pFVar2->ScopeRoutes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar2,piVar1);
    }
    (pFVar2->ScopeRoutes).ArrayNum = iVar8 + 1;
    *(ulonglong *)((pFVar2->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_10;
    return true;
  case 9:
    pFVar4 = param_1->Bridge;
    (pFVar4->State).Timing.EventTimestamp = *(ulonglong *)((param_3->field1_0x8).Data + -1) >> 8;
    FAnalysisBridge::DispatchLeaveScope(pFVar4);
    (pFVar4->State).Timing.EventTimestamp = 0;
    return true;
  }
  pFVar2 = param_1->Bridge->ThreadInfo;
  local_18 = ~(*(longlong *)(param_3->field1_0x8).Data -
              (param_1->Bridge->State).Timing.BaseTimestamp);
  pFVar3 = (pFVar2->ScopeRoutes).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(pFVar2->ScopeRoutes).ArrayMax * 8)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (pFVar2->ScopeRoutes).ArrayNum;
  piVar1 = &(pFVar2->ScopeRoutes).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,piVar1);
  }
  (pFVar2->ScopeRoutes).ArrayNum = iVar8 + 1;
  *(ulonglong *)((pFVar2->ScopeRoutes).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18;
  return true;
}

// ExitStage @ 14d39be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Trace::FProtocol7Stage::ExitStage(FProtocol7Stage *this,FMachineContext *param_1)

{
  int iVar1;
  int iVar2;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  wchar_t *local_198;
  undefined4 uStack_190;
  FReadAccessScope local_188;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1c8;
  cVar5 = (**(code **)(**(longlong **)&this->field_0x20 + 0x10))();
  if (cVar5 == '\0') {
    uVar11 = 0;
    iVar1 = *(int *)(*(longlong *)&this->field_0x20 + 0x20);
    if (0 < iVar1) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        lVar8 = *(longlong *)&this->field_0x20;
        iVar2 = *(int *)(lVar8 + 0x20);
        uVar7 = 0;
        if ((int)uVar11 < iVar2) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_1a8 = lVar9, local_1a0 = (longlong)iVar2,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar8 = *(longlong *)(lVar8 + 0x18) + lVar10;
        if ((*(uint *)(lVar8 + 0x10) < *(uint *)(lVar8 + 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("End >= Cursor",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                               ,0x1e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x28;
      } while ((int)uVar11 < iVar1);
    }
    local_168.Base = local_148;
    local_168.bIsDynamic = false;
    local_168.bIsExternal = false;
    local_168.CurPos = local_148;
    local_168.End = (wchar_t *)local_48;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_168,
               L"Transport buffers are not empty at end of analysis (%llu bytes; protocol 7)!");
    this_00 = param_1->OnMessage;
    uStack_190 = (undefined4)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
    local_198 = local_168.Base;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_188);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,1,&local_198);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  }
  return;
}

// SetSizeIfKnownEvent @ 14d3a7f00

void __thiscall
UE::Trace::FProtocol7Stage::SetSizeIfKnownEvent(FProtocol7Stage *this,uint param_1,uint *param_2)

{
  if ((param_1 == 6) || (param_1 == 7)) {
    *param_2 = 8;
  }
  else if ((param_1 == 8) || (param_1 == 9)) {
    *param_2 = 7;
    return;
  }
  return;
}

