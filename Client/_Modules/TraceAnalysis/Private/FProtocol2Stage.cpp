// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 7

// FProtocol2Stage @ 14d38f840

FProtocol2Stage * __thiscall
UE::Trace::FProtocol2Stage::FProtocol2Stage(FProtocol2Stage *this,uint param_1,FTransport *param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  FDispatch *pFVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FDispatchBuilder local_48;
  FDispatchBuilder local_28;
  
  this->Transport = param_2;
  (this->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FProtocol2Stage_Trace_UE__6B_;
  (this->TypeRegistry).TypeInfos.ArrayNum = 0;
  (this->TypeRegistry).TypeInfos.ArrayMax = 0;
  this->ProtocolVersion = param_1;
  this->SerialInertia = 0xffffffff;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    local_28.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Buffer.ArrayNum = 0;
    local_28.Buffer.ArrayMax = 0;
    local_28.NameBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.NameBuffer.ArrayNum = 0;
    local_28.NameBuffer.ArrayMax = 0;
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x10,(ForAnyElementType *)&local_28,&local_28.Buffer.ArrayNum,
                       &local_28.Buffer.ArrayMax);
    FVar4.Data = local_28.Buffer.AllocatorInstance.Data;
    *(undefined8 *)(local_28.Buffer.AllocatorInstance.Data + iVar2) = 0;
    *(undefined8 *)(local_28.Buffer.AllocatorInstance.Data + iVar2 + 8) = 0;
    *(undefined4 *)(local_28.Buffer.AllocatorInstance.Data + 0xc) = 0;
    *(undefined4 *)local_28.Buffer.AllocatorInstance.Data = 0;
    *(undefined2 *)(local_28.Buffer.AllocatorInstance.Data + 4) = 0;
    *(undefined4 *)(local_28.Buffer.AllocatorInstance.Data + 6) = 0;
    *(undefined2 *)(local_28.Buffer.AllocatorInstance.Data + 10) = 0;
    *(undefined2 *)(local_28.Buffer.AllocatorInstance.Data + 4) = 0;
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,7,&local_28.NameBuffer.AllocatorInstance,&local_28.NameBuffer.ArrayNum,
                       &local_28.NameBuffer.ArrayMax);
    FVar1.Data = local_28.Buffer.AllocatorInstance.Data;
    pFVar5 = local_28.NameBuffer.AllocatorInstance.Data + iVar2;
    *(undefined4 *)pFVar5 = s__Trace._0_4_;
    *(undefined2 *)(pFVar5 + 4) = s__Trace._4_2_;
    pFVar5[6] = (FScriptContainerElement)0x0;
    *(short *)(FVar4.Data + 10) = *(short *)(FVar4.Data + 10) + (short)iVar2;
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,9,&local_28.NameBuffer.AllocatorInstance,&local_28.NameBuffer.ArrayNum,
                       &local_28.NameBuffer.ArrayMax);
    *(undefined8 *)(local_28.NameBuffer.AllocatorInstance.Data + iVar2) = s_NewEvent._0_8_;
    (local_28.NameBuffer.AllocatorInstance.Data + iVar2)[8] = (FScriptContainerElement)0x0;
    *(short *)(FVar1.Data + 0xc) = (short)iVar2;
    pFVar3 = FDispatchBuilder::Finalize(&local_28);
    FTypeRegistry::Add(&this->TypeRegistry,pFVar3);
    FVar4.Data = local_28.Buffer.AllocatorInstance.Data;
    if (local_28.NameBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.NameBuffer.AllocatorInstance.Data);
      FVar4.Data = local_28.Buffer.AllocatorInstance.Data;
    }
  }
  else {
    if (param_1 != 3) {
      return this;
    }
    local_48.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Buffer.ArrayNum = 0;
    local_48.Buffer.ArrayMax = 0;
    local_48.NameBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.NameBuffer.ArrayNum = 0;
    local_48.NameBuffer.ArrayMax = 0;
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x10,(ForAnyElementType *)&local_48,&local_48.Buffer.ArrayNum,
                       &local_48.Buffer.ArrayMax);
    FVar4.Data = local_48.Buffer.AllocatorInstance.Data;
    *(undefined8 *)(local_48.Buffer.AllocatorInstance.Data + iVar2) = 0;
    *(undefined8 *)(local_48.Buffer.AllocatorInstance.Data + iVar2 + 8) = 0;
    *(undefined4 *)(local_48.Buffer.AllocatorInstance.Data + 0xc) = 0;
    *(undefined4 *)local_48.Buffer.AllocatorInstance.Data = 0;
    *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 4) = 0;
    *(undefined4 *)(local_48.Buffer.AllocatorInstance.Data + 6) = 0;
    *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 10) = 0;
    *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 4) = 0;
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,7,&local_48.NameBuffer.AllocatorInstance,&local_48.NameBuffer.ArrayNum,
                       &local_48.NameBuffer.ArrayMax);
    FVar1.Data = local_48.Buffer.AllocatorInstance.Data;
    pFVar5 = local_48.NameBuffer.AllocatorInstance.Data + iVar2;
    *(undefined4 *)pFVar5 = s__Trace._0_4_;
    *(undefined2 *)(pFVar5 + 4) = s__Trace._4_2_;
    pFVar5[6] = (FScriptContainerElement)0x0;
    *(short *)(FVar4.Data + 10) = *(short *)(FVar4.Data + 10) + (short)iVar2;
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,9,&local_48.NameBuffer.AllocatorInstance,&local_48.NameBuffer.ArrayNum,
                       &local_48.NameBuffer.ArrayMax);
    *(undefined8 *)(local_48.NameBuffer.AllocatorInstance.Data + iVar2) = s_NewEvent._0_8_;
    (local_48.NameBuffer.AllocatorInstance.Data + iVar2)[8] = (FScriptContainerElement)0x0;
    *(short *)(FVar1.Data + 0xc) = (short)iVar2;
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 4);
    pFVar3 = FDispatchBuilder::Finalize(&local_48);
    FTypeRegistry::Add(&this->TypeRegistry,pFVar3);
    FVar4.Data = local_48.Buffer.AllocatorInstance.Data;
    if (local_48.NameBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.NameBuffer.AllocatorInstance.Data);
      FVar4.Data = local_48.Buffer.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return this;
}

// ~FProtocol2Stage @ 14d392520

void __thiscall UE::Trace::FProtocol2Stage::~FProtocol2Stage(FProtocol2Stage *this)

{
  FTransport *pFVar1;
  
  this->_padding_ = (longlong)&___7FProtocol2Stage_Trace_UE__6B_;
  pFVar1 = this->Transport;
  if (pFVar1 != (FTransport *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FTypeRegistry::~FTypeRegistry(&this->TypeRegistry);
  this->_padding_ = (longlong)&___7FStage_FAnalysisMachine_Trace_UE__6B_;
  return;
}

// EnterStage @ 14d39bb50

void __thiscall
UE::Trace::FProtocol2Stage::EnterStage(FProtocol2Stage *this,FMachineContext *param_1)

{
  uint uVar1;
  
  uVar1 = 0xffff;
  if (this->ProtocolVersion != 1) {
    uVar1 = 0xffffff;
  }
  (param_1->Bridge->State).Serial.Mask = uVar1;
  return;
}

// ExitStage @ 14d39bc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Trace::FProtocol2Stage::ExitStage(FProtocol2Stage *this,FMachineContext *param_1)

{
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined4 uStack_160;
  FReadAccessScope local_158;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  cVar2 = (**(code **)(this->Transport->_padding_ + 0x10))();
  if (cVar2 == '\0') {
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.End = (wchar_t *)local_18;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_138,L"Transport buffers are not empty at end of analysis (protocol %u)!");
    this_00 = param_1->OnMessage;
    uStack_160 = (undefined4)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1);
    local_168 = local_138.Base;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_158);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,1,&local_168);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_158);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  return;
}

// OnData @ 14d3a1540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Trace::FProtocol2Stage::OnData
          (FProtocol2Stage *this,FStreamReader *param_1,FAnalysisBridge *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  FDispatch *pFVar8;
  uint uVar9;
  ForElementType<UE::Trace::FAuxData> FVar10;
  ushort *puVar11;
  ForElementType<UE::Trace::FAuxData> FVar12;
  uint uVar13;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  FProtocol2Stage *local_100;
  FEventDataInfo local_f8;
  undefined1 local_d8 [128];
  ForElementType<UE::Trace::FAuxData> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_100 = this;
  while( true ) {
    uVar6 = param_1->Cursor;
    if (param_1->End < uVar6 + 4) {
      uVar6 = 4;
      if (4 < param_1->DemandHint) {
        uVar6 = param_1->DemandHint;
      }
      param_1->DemandHint = uVar6;
      return -1;
    }
    puVar11 = (ushort *)(param_1->Buffer + uVar6);
    if (puVar11 == (ushort *)0x0) {
      return -1;
    }
    uVar1 = *puVar11;
    uVar9 = (local_100->TypeRegistry).TypeInfos.ArrayNum;
    uVar13 = uVar1 & 0x7fff;
    if (uVar9 <= uVar13) {
      return -1;
    }
    if (((int)uVar9 <= (int)uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pFVar8 = *(FDispatch **)
              ((local_100->TypeRegistry).TypeInfos.AllocatorInstance.Data + (ulonglong)uVar13 * 8);
    if (pFVar8 == (FDispatch *)0x0) {
      return -1;
    }
    uVar9 = (uint)puVar11[1];
    if ((pFVar8->Flags & 4) == 0) {
      uVar13 = local_100->ProtocolVersion;
      if (uVar13 == 1) {
        if ((uint)puVar11[2] != ((param_2->State).Serial.Mask & (param_2->State).Serial.Value)) {
          return (uint)puVar11[2];
        }
        uVar9 = uVar9 + 6;
      }
      else if ((uVar13 == 2) || (uVar13 == 3)) {
        if ((uint)*(uint3 *)(puVar11 + 2) !=
            ((param_2->State).Serial.Mask & (param_2->State).Serial.Value)) {
          return (uint)*(uint3 *)(puVar11 + 2);
        }
        uVar9 = puVar11[1] + 7;
      }
    }
    else {
      uVar9 = uVar9 + 4;
    }
    uVar13 = param_1->Cursor + uVar9;
    if (param_1->End < uVar13) {
      if (uVar9 < param_1->DemandHint) {
        uVar9 = param_1->DemandHint;
      }
      param_1->DemandHint = uVar9;
      return -1;
    }
    if (param_1->Buffer + param_1->Cursor == (uchar *)0x0) {
      return -1;
    }
    param_1->Cursor = uVar13;
    local_58 = (ForElementType<UE::Trace::FAuxData>)0x0;
    local_50 = 0;
    local_4c = 8;
    if (((pFVar8->Flags & 2) != 0) &&
       (iVar5 = OnDataAux(local_100,param_1,(FAuxDataCollector *)local_d8), iVar4 = local_50,
       iVar5 == 0)) break;
    if ((pFVar8->Flags & 4) == 0) {
      (param_2->State).Serial.Value = (param_2->State).Serial.Value + 1 & 0x3fffffff;
    }
    puVar7 = (uchar *)(((ulonglong)uVar9 - (ulonglong)puVar11[1]) + (longlong)puVar11);
    if ((uVar1 & 0x7fff) == 0) {
      pFVar8 = FTypeRegistry::AddVersion4(&local_100->TypeRegistry,puVar7);
      FAnalyzerHub::OnNewType(&param_2->AnalyzerHub,pFVar8);
    }
    else {
      local_f8.AuxCollector = (FAuxDataCollector *)local_d8;
      local_f8.Ptr = puVar7;
      local_f8.Dispatch = pFVar8;
      local_f8.Size = puVar11[1];
      FAnalysisBridge::OnEvent(param_2,&local_f8);
    }
    iVar4 = local_50;
    FVar10 = (ForElementType<UE::Trace::FAuxData>)local_d8;
    if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
      FVar10 = local_58;
    }
    FVar12 = (ForElementType<UE::Trace::FAuxData>)((longlong)local_50 * 0x10 + (longlong)FVar10);
    while( true ) {
      if (local_50 != iVar4) {
        local_108 = 0;
        `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (FVar10 == FVar12) break;
      if ((*(byte *)((longlong)FVar10 + 0xf) & 4) != 0) {
        FMemory::Free(*(void **)FVar10);
      }
      FVar10 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar10 + 0x10);
    }
    local_50 = 0;
    if ((local_4c < 0) && (local_4c != 0)) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                (0x10,8,0,(ForElementType<UE::Trace::FAuxData> *)local_d8,0,&local_4c);
    }
    if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
      FMemory::Free((void *)local_58);
    }
  }
  param_1->Cursor = uVar6;
  if (param_1->End < uVar6) {
    param_1->Cursor = param_1->End;
  }
  FVar10 = (ForElementType<UE::Trace::FAuxData>)local_d8;
  if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
    FVar10 = local_58;
  }
  FVar12 = (ForElementType<UE::Trace::FAuxData>)((longlong)local_50 * 0x10 + (longlong)FVar10);
  while( true ) {
    if (local_50 != iVar4) {
      `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_107);
    }
    if (FVar10 == FVar12) break;
    if ((*(byte *)((longlong)FVar10 + 0xf) & 4) != 0) {
      FMemory::Free(*(void **)FVar10);
    }
    FVar10 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar10 + 0x10);
  }
  local_50 = 0;
  if ((local_4c < 0) && (local_4c != 0)) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
              (0x10,8,0,(ForElementType<UE::Trace::FAuxData> *)local_d8,0,&local_4c);
  }
  if (local_58 == (ForElementType<UE::Trace::FAuxData>)0x0) {
    return -1;
  }
  FMemory::Free((void *)local_58);
  return -1;
}

// OnData @ 14d3a18c0

EStatus __thiscall
UE::Trace::FProtocol2Stage::OnData
          (FProtocol2Stage *this,FStreamReader *param_1,FMachineContext *param_2)

{
  FTidPacketTransport *this_00;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_01;
  longlong *plVar1;
  FAnalysisBridge *pFVar2;
  FAnalysisBridge *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FStreamReader *pFVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  ETransportResult EVar9;
  bool bVar10;
  EStatus EVar11;
  FInfo *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FStreamReader *pFVar22;
  FIdentityFunctor local_res8;
  ForAnyElementType local_d0;
  uint local_c8;
  uint uStack_c4;
  FRotaItem local_c0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FReadAccessScope local_78 [2];
  
  this_00 = (FTidPacketTransport *)this->Transport;
  this_00->_padding_ = (longlong)param_1;
  EVar9 = FTidPacketTransport::Update(this_00);
  if (EVar9 == Error) {
    this_01 = param_2->OnMessage;
    local_a8 = 
    L"An error was detected in the transport layer, most likely due to a corrupt trace file. See log for details."
    ;
    uStack_a0 = 0x6b;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,local_78);
    if ((*(int *)&this_01->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&this_01->field_0x8, plVar1 != (longlong *)0x0)) {
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      (**(code **)(*plVar1 + 0x68))(plVar1,2,&local_88);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_78);
    return Error;
  }
  uVar16 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  uStack_c4 = 0;
  uVar18 = (this_00->Threads).ArrayNum;
  if (uVar18 != 0) {
    do {
      uVar17 = 0;
      if ((int)uVar16 < (this_00->Threads).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      pFVar22 = (FStreamReader *)
                ((this_00->Threads).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x28);
      uVar17 = 0;
      if ((int)uVar16 < (this_00->Threads).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      local_c0.Serial = 0xffffffff;
      local_c0.ThreadId =
           *(uint *)((this_00->Threads).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x28 + 0x20
                    );
      local_c0.Reader = pFVar22;
      if (((local_d0.Data <= &local_c0) &&
          (&local_c0 < (FRotaItem *)(local_d0.Data + (longlong)(int)uStack_c4 * 0x10))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      if (local_c8 == uStack_c4) {
        local_c8 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_d0,(int *)&uStack_c4);
      }
      lVar13 = (longlong)(int)local_c8;
      uVar16 = uVar16 + 1;
      local_c8 = local_c8 + 1;
      *(ulonglong *)(local_d0.Data + lVar13 * 0x10) = CONCAT44(local_c0.ThreadId,local_c0.Serial);
      *(FStreamReader **)(local_d0.Data + lVar13 * 0x10 + 8) = local_c0.Reader;
    } while (uVar16 < uVar18);
  }
  local_res8 = SUB81(this,0);
  pFVar2 = param_2->Bridge;
LAB_14d3a1b50:
  do {
    puVar15 = &(pFVar2->State).Serial.Mask;
    uVar16 = 0;
    uVar18 = local_c8;
    if (local_c8 != 0) {
      uVar17 = local_c8 - 1;
      do {
        uVar14 = 0;
        if ((int)uVar16 < (int)local_c8) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          EVar11 = (*pcVar4)();
          return EVar11;
        }
        pFVar21 = local_d0.Data + (longlong)(int)uVar16 * 0x10;
        if ((int)((pFVar2->State).Serial.Value & *puVar15) < *(int *)&pFVar21->field_0x0) {
          uVar16 = uVar16 + 1;
        }
        else {
          pFVar3 = param_2->Bridge;
          pFVar12 = FThreads::GetInfo(&(pFVar3->State).Threads,*(uint *)(pFVar21 + 4));
          pFVar3->ThreadInfo = pFVar12;
          uVar14 = (**(code **)(this->_padding_ + 0x20))
                             (this,*(undefined8 *)(pFVar21 + 8),param_2->Bridge);
          if ((int)uVar14 < 0) {
            uStack_90 = *(undefined8 *)(pFVar21 + 8);
            local_98 = CONCAT44((int)((ulonglong)*(undefined8 *)pFVar21 >> 0x20),0xffffffff);
            uVar14 = uVar16;
            while (uVar14 < uVar17) {
              uVar19 = uVar14 + 1;
              uVar20 = 0;
              if ((int)uVar19 < (int)local_c8) {
                uVar20 = ~uVar19 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                EVar11 = (*pcVar4)();
                return EVar11;
              }
              uVar5 = *(undefined8 *)(local_d0.Data + (longlong)(int)uVar19 * 0x10);
              uVar7 = *(undefined8 *)(local_d0.Data + (longlong)(int)uVar19 * 0x10 + 8);
              uVar20 = 0;
              if ((int)uVar14 < (int)local_c8) {
                uVar20 = ~uVar14 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                EVar11 = (*pcVar4)();
                return EVar11;
              }
              *(undefined8 *)(local_d0.Data + (longlong)(int)uVar14 * 0x10) = uVar5;
              *(undefined8 *)(local_d0.Data + (longlong)(int)uVar14 * 0x10 + 8) = uVar7;
              uVar14 = uVar19;
            }
            uVar14 = 0;
            if ((int)uVar17 < (int)local_c8) {
              uVar14 = -uVar18 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            uVar18 = uVar18 - 1;
            lVar13 = (longlong)(int)uVar17;
            uVar17 = uVar17 - 1;
            *(undefined8 *)(local_d0.Data + lVar13 * 0x10) = local_98;
            *(undefined8 *)(local_d0.Data + lVar13 * 0x10 + 8) = uStack_90;
          }
          else {
            *(uint *)&pFVar21->field_0x0 = uVar14;
            if (((int)local_c8 < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            if (uVar14 < *(uint *)local_d0.Data) {
              if (((int)local_c8 < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                EVar11 = (*pcVar4)();
                return EVar11;
              }
              pFVar22 = *(FStreamReader **)(pFVar21 + 8);
              uVar5 = *(undefined8 *)local_d0.Data;
              pFVar6 = *(FStreamReader **)(local_d0.Data + 8);
              *(undefined8 *)local_d0.Data = *(undefined8 *)pFVar21;
              *(FStreamReader **)(local_d0.Data + 8) = pFVar22;
              *(undefined8 *)pFVar21 = uVar5;
              *(FStreamReader **)(pFVar21 + 8) = pFVar6;
            }
            uVar16 = uVar16 + 1;
          }
          if (((int)local_c8 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            EVar11 = (*pcVar4)();
            return EVar11;
          }
          if ((*puVar15 & *(uint *)local_d0.Data - (pFVar2->State).Serial.Value) == 0) {
            uVar16 = 0;
          }
        }
      } while (uVar16 < uVar18);
    }
    FVar8.Data = local_d0.Data;
    if (uVar18 == 0) break;
    if (((int)uVar18 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    AlgoImpl::
    IntroSortInternal<_UE::Trace::FProtocol2Stage::OnData_::__l2::FRotaItem,int,FIdentityFunctor,TLess<void>_>
              ((FRotaItem *)FVar8.Data,uVar18,local_res8,(TLess<void>)local_res8);
    if (((int)local_c8 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar16 = *(uint *)local_d0.Data;
    uVar17 = uVar16;
    if (1 < uVar18) {
      uVar14 = uVar18 - 1;
      uVar20 = 0;
      if ((int)uVar14 < (int)local_c8) {
        uVar20 = ~uVar14 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      if ((*puVar15 & uVar16 - (pFVar2->State).Serial.Value) == 0) goto LAB_14d3a1b50;
      uVar20 = *puVar15 >> 1;
      if ((int)uVar20 <=
          (int)(*(int *)&local_d0.Data[(longlong)(int)uVar14 * 0x10].field_0x0 - uVar16)) {
        uVar14 = 0;
        do {
          uVar17 = 0;
          if ((int)uVar14 < (int)local_c8) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            EVar11 = (*pcVar4)();
            return EVar11;
          }
          uVar17 = *(uint *)&local_d0.Data[(longlong)(int)uVar14 * 0x10].field_0x0;
        } while (((int)*(uint *)&local_d0.Data[(longlong)(int)uVar14 * 0x10].field_0x0 < (int)uVar20
                 ) && (uVar14 = uVar14 + 1, uVar17 = uVar16, uVar14 < uVar18));
      }
    }
    uVar18 = (pFVar2->State).Serial.Value;
    uVar16 = (pFVar2->State).Serial.Mask;
    if ((int)uVar18 < -0x40000000) {
      (pFVar2->State).Serial.Value = uVar16 & uVar17;
      goto LAB_14d3a1b50;
    }
  } while ((uVar16 & uVar17 - uVar18) == 0);
  if ((0 < (int)local_c8) && (uVar18 = *(uint *)local_d0.Data, -1 < (int)uVar18)) {
    if (this->SerialInertia == 0xffffffff) {
      this->SerialInertia = uVar18 + 0xbe000000;
    }
    else {
      uVar16 = this->SerialInertia + 0x2000000;
      this->SerialInertia = uVar16;
      if ((-1 < (int)uVar16) && (this->SerialInertia = 0xffffffff, uVar16 == uVar18)) {
        (pFVar2->State).Serial.Value = uVar18;
        EVar11 = (**(code **)(this->_padding_ + 8))(this,param_1,param_2);
        goto LAB_14d3a2099;
      }
    }
  }
  EVar11 = EndOfStream - (param_1->Cursor < param_1->End);
LAB_14d3a2099:
  if ((FRotaItem *)local_d0.Data != (FRotaItem *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return EVar11;
}

// OnDataAux @ 14d3a2890

int __thiscall
UE::Trace::FProtocol2Stage::OnDataAux
          (FProtocol2Stage *this,FStreamReader *param_1,FAuxDataCollector *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAuxDataCollector *pFVar5;
  uint uVar6;
  uint *puVar7;
  FAuxDataCollector *pFVar8;
  uint uVar9;
  uint *local_18;
  uint uStack_10;
  ushort uStack_c;
  undefined2 uStack_a;
  
  while( true ) {
    uVar6 = param_1->Cursor;
    uVar1 = param_1->End;
    if (uVar1 < uVar6 + 1) {
      uVar6 = 1;
      if (1 < param_1->DemandHint) {
        uVar6 = param_1->DemandHint;
      }
      param_1->DemandHint = uVar6;
      return 0;
    }
    puVar7 = (uint *)(param_1->Buffer + uVar6);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((byte)*puVar7 == 0) {
      param_1->Cursor = uVar6 + 1;
      return 1;
    }
    if (uVar1 < uVar6 + 4) break;
    uStack_10 = *puVar7 >> 8;
    uVar9 = uStack_10 + 4;
    if (uVar1 < uVar9 + uVar6) {
      if (uVar9 < param_1->DemandHint) {
        uVar9 = param_1->DemandHint;
      }
      param_1->DemandHint = uVar9;
      return 0;
    }
    local_18 = puVar7 + 1;
    uStack_a = 0;
    pFVar8 = *(FAuxDataCollector **)&param_2->field_0x80;
    uStack_c = (ushort)((byte)*puVar7 & 0x7f);
    pFVar5 = param_2;
    if (pFVar8 != (FAuxDataCollector *)0x0) {
      pFVar5 = pFVar8;
    }
    if (pFVar5 <= (FAuxDataCollector *)&stack0xffffffffffffffe8) {
      pFVar5 = param_2;
      if (pFVar8 != (FAuxDataCollector *)0x0) {
        pFVar5 = pFVar8;
      }
      if ((&stack0xffffffffffffffe8 <
           &pFVar5->field_0x0 + (longlong)*(int *)&param_2->field_0x8c * 0x10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = *(int *)&param_2->field_0x88;
    if (iVar4 == *(int *)&param_2->field_0x8c) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                        (0x810,(ForElementType<UE::Trace::FAuxData> *)param_2,
                         (int *)&param_2->field_0x8c);
    }
    *(int *)&param_2->field_0x88 = iVar4 + 1;
    pFVar8 = param_2;
    if (*(FAuxDataCollector **)&param_2->field_0x80 != (FAuxDataCollector *)0x0) {
      pFVar8 = *(FAuxDataCollector **)&param_2->field_0x80;
    }
    *(uint **)(&pFVar8->field_0x0 + (longlong)iVar4 * 0x10) = local_18;
    *(longlong *)((longlong)(&pFVar8->field_0x0 + (longlong)iVar4 * 0x10) + 8) =
         CONCAT26(uStack_a,CONCAT24(uStack_c,uStack_10));
    param_1->Cursor = param_1->Cursor + uVar9;
  }
  uVar6 = 4;
  if (4 < param_1->DemandHint) {
    uVar6 = param_1->DemandHint;
  }
  param_1->DemandHint = uVar6;
  return 0;
}

