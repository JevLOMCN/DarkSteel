// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 19

// FProtocol5Stage @ 14d38fb40

FProtocol5Stage * __thiscall
UE::Trace::FProtocol5Stage::FProtocol5Stage(FProtocol5Stage *this,FTransport *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7FProtocol5Stage_Trace_UE__6B_;
  this->BaseTransport = param_1;
  this->Transport = (FTidPacketTransport *)param_1;
  piVar1 = &(this->EventDescs).ArrayMax;
  *piVar1 = 0;
  (this->TypeRegistry).TypeInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeRegistry).TypeInfos.ArrayNum = 0;
  (this->TypeRegistry).TypeInfos.ArrayMax = 0;
  (this->EventDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventDescs).ArrayNum = 0;
  (this->SerialGaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerialGaps).ArrayNum = 0;
  (this->SerialGaps).ArrayMax = 0;
  this->NextSerialWaitCount = 0;
  this->NextSerial = 0xffffffff;
  this->OldNextSerial = 0xffffffff;
  lVar2 = param_1[1]._padding_;
  this->bSkipSerialError = false;
  this->bSkipSerial = false;
  this->SyncCount = (uint)lVar2;
  this->EventVersion = 4;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,0x2000,&(this->EventDescs).AllocatorInstance,0,piVar1);
  return this;
}

// ~FProtocol5Stage @ 14d392570

void __thiscall UE::Trace::FProtocol5Stage::~FProtocol5Stage(FProtocol5Stage *this)

{
  FTransport *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FProtocol5Stage_Trace_UE__6B_;
  pFVar1 = this->BaseTransport;
  if (pFVar1 != (FTransport *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pFVar2 = (this->SerialGaps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EventDescs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FTypeRegistry::~FTypeRegistry(&this->TypeRegistry);
  this->_padding_ = (longlong)&___7FStage_FAnalysisMachine_Trace_UE__6B_;
  return;
}

// operator() @ 14d3945f0

bool __thiscall
`UE::Trace::FProtocol5Stage::DetectSerialGaps'::__l8::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)this;
  iVar2 = *(int *)(lVar1 + 0x40);
  if (iVar2 == *(int *)(lVar1 + 0x44)) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,(ForAnyElementType *)(lVar1 + 0x38),(int *)(lVar1 + 0x44));
  }
  *(int *)(lVar1 + 0x40) = iVar2 + 1;
  lVar3 = (longlong)iVar2;
  lVar1 = *(longlong *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + lVar3 * 0x10) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar3 * 0x10) = 0;
  *(int *)(lVar1 + lVar3 * 0x10) = param_1;
  *(uint *)(lVar1 + 8 + lVar3 * 0x10) = param_2 - param_1 & 0xffffff;
  return true;
}

// operator() @ 14d394740

bool __thiscall
`UE::Trace::FProtocol5Stage::DetectSerialGaps'::__l12::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  uVar1 = *(uint *)(lVar3 + 0x40);
  if (uVar1 != 0) {
    uVar2 = **(uint **)((longlong)this + 8);
    if (uVar2 < uVar1) {
      uVar7 = 0;
      if ((int)uVar2 < (int)uVar1) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(*(longlong *)(lVar3 + 0x38) + (longlong)(int)uVar2 * 0x10) == param_1) {
        **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
        return true;
      }
    }
  }
  return false;
}

// DetectSerialGaps @ 14d39a470

void __thiscall
UE::Trace::FProtocol5Stage::DetectSerialGaps
          (FProtocol5Stage *this,
          TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [4];
  FSerialDistancePredicate local_res18 [2];
  <lambda_1> local_res20;
  FEventDescStream local_48;
  <lambda_2> local_38;
  
  uVar5 = this->Transport->Synced;
  if (this->SyncCount != uVar5) {
    this->SyncCount = uVar5;
    if (uVar5 == 2) {
      local_res20.__this = this;
      ForEachSerialGap<_UE::Trace::FProtocol5Stage::DetectSerialGaps_::__l8::<lambda_1>_&>
                (this,param_1,&local_res20);
      return;
    }
    if (uVar5 == 3) {
      local_38.GapCount = local_res8;
      local_res8[0] = 0;
      local_38.__this = this;
      ForEachSerialGap<_UE::Trace::FProtocol5Stage::DetectSerialGaps_::__l12::<lambda_2>_&>
                (this,param_1,&local_38);
      if (local_res8[0] == 0) {
        piVar1 = &(this->SerialGaps).ArrayMax;
        (this->SerialGaps).ArrayNum = 0;
        if (*piVar1 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,0,&(this->SerialGaps).AllocatorInstance,0,piVar1);
        }
      }
      else {
        uVar5 = (this->SerialGaps).ArrayNum;
        if (local_res8[0] == uVar5) {
          if (uVar5 == (this->SerialGaps).ArrayMax) {
            uVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1010,&(this->SerialGaps).AllocatorInstance,
                               &(this->SerialGaps).ArrayMax);
          }
          (this->SerialGaps).ArrayNum = uVar5 + 1;
          pFVar2 = (this->SerialGaps).AllocatorInstance.Data;
          *(undefined8 *)(pFVar2 + (longlong)(int)uVar5 * 0x10) = 0;
          *(undefined8 *)(pFVar2 + (longlong)(int)uVar5 * 0x10 + 8) = 0;
        }
        uVar5 = local_res8[0];
        uVar6 = 0;
        if ((int)local_res8[0] < (this->SerialGaps).ArrayNum) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((this->SerialGaps).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10) =
             0x4000001;
        if ((param_1->ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_48.field2_0x8 = (FEventDescStream_u_8)(this->SerialGaps).AllocatorInstance.Data;
        local_res18[0].Origin = this->NextSerial;
        local_48.TransportIndex =
             (uint)((ulonglong)*(undefined8 *)(param_1->AllocatorInstance).Data >> 0x20);
        local_48.ThreadId = 0xffffffff;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPush<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>
                  (param_1,&local_48,local_res18);
      }
    }
  }
  return;
}

// DispatchEvents @ 14d39a730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Trace::FProtocol5Stage::DispatchEvents
          (FProtocol5Stage *this,FMachineContext *param_1,
          TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FEventDescStream_u_8 FVar3;
  FAnalysisBridge *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FInfo *pFVar10;
  FEventDescStream_u_8 FVar11;
  FSerialDistancePredicate local_res8 [2];
  FSerialDistancePredicate local_res18 [2];
  FSerialDistancePredicate local_res20 [2];
  FSerialDistancePredicate local_68;
  FSerialDistancePredicate local_64;
  FSerialDistancePredicate local_60 [2];
  FEventDescStream local_58;
  FEventDescStream local_48;
  
  iVar7 = 0;
  do {
    if ((param_2->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    FVar3 = (FEventDescStream_u_8)((FEventDescStream_u_8 *)(pFVar2 + 8))->EventDescs;
    if (*(uint *)pFVar2 == 0xffffffff) {
      FVar11.EventDescs = FVar3.EventDescs + 1;
      this->NextSerial =
           ((FVar3.EventDescs)->field1_0x8).GapLength + ((FVar3.EventDescs)->field0_0x0)._s_0.Serial
      ;
      *(undefined1 *)((longlong)&this->NextSerial + 3) = 0;
      if (((FVar11.EventDescs)->field0_0x0)._s_0.Serial == 0x4000001) {
        local_res20[0].Origin = this->NextSerial;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPopDiscard<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>(param_2,local_res20,No)
        ;
        uVar8 = (((FVar11.EventDescs)->field0_0x0)._s_0.Serial == 0x4000001) + 1;
      }
      else {
        local_58._0_8_ = *(undefined8 *)pFVar2;
        local_res8[0].Origin = this->NextSerial;
        local_58.field2_0x8.EventDescs = FVar11.EventDescs;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPopDiscard<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>(param_2,local_res8,No);
        local_res18[0].Origin = this->NextSerial;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPush<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>
                  (param_2,&local_58,local_res18);
        uVar8 = (((FVar11.EventDescs)->field0_0x0)._s_0.Serial == 0x4000001) + 1;
      }
    }
    else {
      uVar8 = this->NextSerial;
      FVar11 = FVar3;
      if (((FVar3.EventDescs)->field0_0x0)._s_0.Serial != uVar8) {
        return iVar7;
      }
      do {
        uVar8 = uVar8 + 1 & 0xffffff;
        this->NextSerial = uVar8;
        do {
          uVar1 = FVar11.EventDescs[1].field0_0x0._s_0.Serial;
          FVar11.EventDescs = FVar11.EventDescs + 1;
        } while (uVar1 == 0x4000000);
      } while (uVar1 == uVar8);
      pFVar4 = param_1->Bridge;
      pFVar10 = FThreads::GetInfo(&(pFVar4->State).Threads,*(uint *)pFVar2);
      pFVar4->ThreadInfo = pFVar10;
      uVar8 = (uint)((longlong)FVar11.EventDescs - (longlong)FVar3 >> 4);
      if (((int)uVar8 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DescNum > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                             ,0x10ee,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = iVar7 + uVar8;
      iVar9 = DispatchEvents(this,param_1,FVar3.EventDescs,uVar8);
      if (iVar9 < 0) {
        return -1;
      }
      if (((FVar11.EventDescs)->field0_0x0)._s_0.Serial == 0x4000001) {
        local_60[0].Origin = this->NextSerial;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPopDiscard<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>(param_2,local_60,No);
      }
      else {
        local_48._0_8_ = *(undefined8 *)pFVar2;
        local_68.Origin = this->NextSerial;
        local_48.field2_0x8.EventDescs = FVar11.EventDescs;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPopDiscard<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>(param_2,&local_68,No);
        local_64.Origin = this->NextSerial;
        TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
        HeapPush<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>(param_2,&local_48,&local_64);
      }
      uVar8 = (uint)(((FVar11.EventDescs)->field0_0x0)._s_0.Serial == 0x4000001);
    }
    iVar7 = iVar7 + uVar8;
    if (param_2->ArrayNum == 0) {
      return iVar7;
    }
  } while( true );
}

// DispatchEvents @ 14d39a980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Trace::FProtocol5Stage::DispatchEvents
          (FProtocol5Stage *this,FMachineContext *param_1,FEventDesc *param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  code *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ForElementType<UE::Trace::FAuxData> FVar10;
  ForElementType<UE::Trace::FAuxData> FVar11;
  ushort uVar12;
  FEventDesc *pFVar13;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [8];
  uchar *local_260;
  undefined8 uStack_258;
  undefined1 local_250 [8];
  wchar_t *local_248;
  undefined4 uStack_240;
  FEventDesc_u_8 local_238;
  FDispatch *local_230;
  ForElementType<UE::Trace::FAuxData> *local_228;
  ushort local_220;
  FReadAccessScope local_218;
  ForElementType<UE::Trace::FAuxData> local_200;
  int local_178;
  int local_174 [3];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar13 = param_2 + param_3;
  local_200.SecondaryData = (ForElementType<UE::Trace::FAuxData>)0x0;
  local_178 = 0;
  local_174[0] = 8;
  do {
    if (pFVar13 <= param_2) {
      iVar7 = 0;
LAB_14d39aeb3:
      iVar4 = local_178;
      FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
      if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
        FVar10 = local_200.SecondaryData;
      }
      FVar11 = (ForElementType<UE::Trace::FAuxData>)((longlong)local_178 * 0x10 + (longlong)FVar10);
      while( true ) {
        if (local_178 != iVar4) {
          `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_250);
        }
        if (FVar10 == FVar11) break;
        if ((*(uchar *)((longlong)FVar10 + 0xf) & 4) != 0) {
          FMemory::Free(*(void **)FVar10);
        }
        FVar10 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar10 + 0x10);
      }
      local_178 = 0;
      if ((local_174[0] < 0) && (local_174[0] != 0)) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                  (0x10,8,0,&local_200,0,local_174);
      }
      if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
        FMemory::Free((void *)local_200.SecondaryData);
      }
      return iVar7;
    }
    uVar9 = *(ushort *)((longlong)&param_2->field0_0x0 + 4) & 0x3fff;
    cVar5 = (**(code **)(this->_padding_ + 0x28))(this,param_1,uVar9,param_2);
    if (cVar5 == '\0') {
      uVar2 = (this->TypeRegistry).TypeInfos.ArrayNum;
      if (uVar9 < uVar2) {
        if (((int)uVar2 <= (int)uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        if (*(longlong *)
             ((this->TypeRegistry).TypeInfos.AllocatorInstance.Data + (ulonglong)uVar9 * 8) != 0) {
          local_230 = FTypeRegistry::Get(&this->TypeRegistry,uVar9);
          local_238 = param_2->field1_0x8;
          local_228 = &local_200;
          local_220 = local_230->EventSize;
          if (*(short *)((longlong)&param_2->field0_0x0 + 4) < 0) {
            uVar12 = *(ushort *)((longlong)&param_2[1].field0_0x0 + 4);
            while (param_2 = param_2 + 1, (uVar12 & 0x3fff) == 1) {
              local_260 = (param_2->field1_0x8).Data;
              uStack_258 = (ulonglong)
                           (CONCAT14(local_260[-3],*(uint *)(local_260 + -4) >> 0xd) & 0x1fffffffff)
              ;
              if (local_178 == 0) {
                FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                  FVar10 = local_200.SecondaryData;
                }
                if ((ulonglong)FVar10 <= &local_260) {
                  FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                  if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                    FVar10 = local_200.SecondaryData;
                  }
                  if ((&local_260 < (uchar **)((longlong)local_174[0] * 0x10 + (longlong)FVar10)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                }
                if (local_178 == local_174[0]) {
                  local_178 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                                        (0x810,&local_200,local_174);
                }
                lVar8 = (longlong)local_178;
                local_178 = local_178 + 1;
                FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                  FVar10 = local_200.SecondaryData;
                }
              }
              else {
                uVar9 = 0;
                if ((int)(local_178 - 1U) < local_178) {
                  uVar9 = ~(local_178 - 1U) >> 0x1f;
                }
                uVar12 = (ushort)(local_260[-3] & 0x1f);
                if (uVar9 == 0) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  uVar12 = uStack_258._4_2_;
                }
                FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                  FVar10 = local_200.SecondaryData;
                }
                FVar10 = (ForElementType<UE::Trace::FAuxData>)
                         ((longlong)(local_178 + -1) * 0x10 + (longlong)FVar10);
                if (*(ushort *)((longlong)FVar10 + 0xc) == uVar12) {
                  while( true ) {
                    FVar11 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                    if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                      FVar11 = local_200.SecondaryData;
                    }
                    if (((ulonglong)FVar10 <= (ulonglong)FVar11) ||
                       (*(ushort *)((longlong)FVar10 + -4) != uVar12)) break;
                    FVar10 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar10 + -0x10);
                  }
                  *(uchar *)((longlong)FVar10 + 0xf) = *(uchar *)((longlong)FVar10 + 0xf) | 2;
                  FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                  if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                    FVar10 = local_200.SecondaryData;
                  }
                  if ((ulonglong)FVar10 <= &local_260) {
                    FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                    if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                      FVar10 = local_200.SecondaryData;
                    }
                    if ((&local_260 < (uchar **)((longlong)local_174[0] * 0x10 + (longlong)FVar10))
                       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      iVar7 = (*pcVar3)();
                      return iVar7;
                    }
                  }
                  iVar7 = local_178;
                  if (local_178 == local_174[0]) {
                    iVar7 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                                      (0x810,&local_200,local_174);
                  }
                  local_178 = iVar7 + 1;
                  FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                  if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                    FVar10 = local_200.SecondaryData;
                  }
                  lVar8 = (longlong)iVar7;
                }
                else {
                  FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                  if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                    FVar10 = local_200.SecondaryData;
                  }
                  if ((ulonglong)FVar10 <= &local_260) {
                    FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                    if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                      FVar10 = local_200.SecondaryData;
                    }
                    if ((&local_260 < (uchar **)((longlong)local_174[0] * 0x10 + (longlong)FVar10))
                       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      iVar7 = (*pcVar3)();
                      return iVar7;
                    }
                  }
                  iVar7 = local_178;
                  if (local_178 == local_174[0]) {
                    iVar7 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                                      (0x810,&local_200,local_174);
                  }
                  local_178 = iVar7 + 1;
                  FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
                  if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
                    FVar10 = local_200.SecondaryData;
                  }
                  lVar8 = (longlong)iVar7;
                }
              }
              plVar1 = (longlong *)((longlong)FVar10 + lVar8 * 0x10);
              *plVar1 = (longlong)local_260;
              plVar1[1] = uStack_258;
              uVar12 = *(ushort *)((longlong)&param_2[1].field0_0x0 + 4);
            }
            param_2 = param_2 + -1;
          }
          FAnalysisBridge::OnEvent(param_1->Bridge,(FEventDataInfo *)&local_238);
          iVar7 = local_178;
          FVar10 = (ForElementType<UE::Trace::FAuxData>)&local_200;
          if (local_200.SecondaryData != (ForElementType<UE::Trace::FAuxData>)0x0) {
            FVar10 = local_200.SecondaryData;
          }
          FVar11 = (ForElementType<UE::Trace::FAuxData>)
                   ((longlong)local_178 * 0x10 + (longlong)FVar10);
          while( true ) {
            if (local_178 != iVar7) {
              local_268[0] = 0;
              `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_268);
            }
            if (FVar10 == FVar11) break;
            if ((*(uchar *)((longlong)FVar10 + 0xf) & 4) != 0) {
              FMemory::Free(*(void **)FVar10);
            }
            FVar10 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar10 + 0x10);
          }
          local_178 = 0;
          if ((local_174[0] < 0) && (local_174[0] != 0)) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                      (0x10,8,0,&local_200,0,local_174);
          }
          goto LAB_14d39ae9f;
        }
      }
      local_168.Base = local_148;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      local_168.CurPos = local_148;
      local_168.End = (wchar_t *)local_48;
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_168,L"An unknown event UID (%u) was encountered.");
      this_00 = param_1->OnMessage;
      uStack_240 = (undefined4)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
      local_248 = local_168.Base;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_218);
      if ((*(int *)&this_00->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_218);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      iVar7 = -1;
      goto LAB_14d39aeb3;
    }
LAB_14d39ae9f:
    param_2 = param_2 + 1;
  } while( true );
}

// DispatchKnownEvent @ 14d39b020

bool __thiscall
UE::Trace::FProtocol5Stage::DispatchKnownEvent
          (FProtocol5Stage *this,FMachineContext *param_1,uint param_2,FEventDesc *param_3)

{
  long64 *plVar1;
  FAnalysisBridge *pFVar2;
  FInfo *pFVar3;
  
  switch(param_2) {
  case 1:
  case 3:
    goto switchD_14d39b048_caseD_1;
  default:
    return false;
  case 4:
    FAnalysisBridge::EnterScope(param_1->Bridge);
switchD_14d39b048_caseD_1:
    return true;
  case 5:
    pFVar2 = param_1->Bridge;
    (pFVar2->State).Timing.EventTimestamp = 0;
    FAnalysisBridge::DispatchLeaveScope(pFVar2);
    return true;
  case 8:
    FAnalysisBridge::EnterScope
              (param_1->Bridge,*(ulonglong *)((param_3->field1_0x8).Data + -1) >> 8);
    return true;
  case 0xc:
    pFVar2 = param_1->Bridge;
    pFVar3 = pFVar2->ThreadInfo;
    plVar1 = &pFVar3->PrevTimestamp;
    *plVar1 = *plVar1 + (*(ulonglong *)((param_3->field1_0x8).Data + -1) >> 8);
    (pFVar2->State).Timing.EventTimestamp = pFVar3->PrevTimestamp;
    FAnalysisBridge::DispatchLeaveScope(pFVar2);
    (pFVar2->State).Timing.EventTimestamp = 0;
    return true;
  }
}

// DispatchNormalEvents @ 14d39b3f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Trace::FProtocol5Stage::DispatchNormalEvents
          (FProtocol5Stage *this,FMachineContext *param_1,
          TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_> *param_2)

{
  FEventDesc *pFVar1;
  FAnalysisBridge *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  FInfo *pFVar8;
  int iVar9;
  FEventDesc *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FIdentityFunctor local_res18 [8];
  int local_res20 [2];
  uint local_48 [4];
  
  local_48[0] = param_2->ArrayNum;
  uVar7 = (ulonglong)(int)local_48[0];
  iVar5 = 0;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar13 = pFVar12 + uVar7 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar7) {
      local_res18[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UE::Trace::FProtocol5Stage::FEventDescStream,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar13) break;
    pFVar1 = *(FEventDesc **)(pFVar12 + 8);
    iVar9 = (pFVar1->field0_0x0)._s_0.Serial;
    pFVar10 = pFVar1;
    while (iVar9 == 0x4000000) {
      pFVar10 = pFVar10 + 1;
      iVar9 = (pFVar10->field0_0x0)._s_0.Serial;
    }
    uVar11 = (uint)((longlong)pFVar10 - (longlong)pFVar1 >> 4);
    if (0 < (int)uVar11) {
      local_res20[0] = iVar5 + uVar11;
      pFVar2 = param_1->Bridge;
      pFVar8 = FThreads::GetInfo(&(pFVar2->State).Threads,*(uint *)pFVar12);
      pFVar2->ThreadInfo = pFVar8;
      iVar5 = DispatchEvents(this,param_1,pFVar1,uVar11);
      if (iVar5 < 0) {
        return -1;
      }
      *(FEventDesc **)(pFVar12 + 8) = pFVar10;
      iVar5 = local_res20[0];
    }
    uVar7 = (ulonglong)local_48[0];
    pFVar12 = pFVar12 + 0x10;
  }
  iVar9 = param_2->ArrayNum;
  TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UE::Trace::FProtocol5Stage::DispatchNormalEvents_::__l2::<lambda_1>_>
            (param_2,(<lambda_1> *)local_res20,Default);
  iVar6 = param_2->ArrayNum;
  iVar9 = iVar9 - iVar6;
  if (iVar6 == 0) {
    return iVar9 + iVar5;
  }
  local_48[0] = this->NextSerial;
  AlgoImpl::
  HeapifyInternal<UE::Trace::FProtocol5Stage::FEventDescStream,int,FIdentityFunctor,TDereferenceWrapper<UE::Trace::FProtocol5Stage::FEventDescStream,UE::Trace::FProtocol5Stage::FSerialDistancePredicate>_>
            ((FEventDescStream *)(param_2->AllocatorInstance).Data,iVar6,local_res18[0],
             (FSerialDistancePredicate *)local_48);
  if (this->bSkipSerial == false) {
    if (this->NextSerial == 0xffffffff) {
      if ((param_2->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      uVar11 = **(uint **)((param_2->AllocatorInstance).Data + 8);
      if ((this->Transport->Synced != 0) || (uVar11 == 0)) {
        this->NextSerial = uVar11;
      }
    }
  }
  else {
    if ((param_2->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    uVar11 = **(uint **)((param_2->AllocatorInstance).Data + 8);
    if (uVar11 != this->NextSerial) {
      this->NextSerial = uVar11;
    }
  }
  DetectSerialGaps(this,param_2);
  iVar6 = DispatchEvents(this,param_1,param_2);
  if (iVar6 < 0) {
    return -1;
  }
  return iVar6 + iVar9 + iVar5;
}

// ExitStage @ 14d39bd20

void __thiscall
UE::Trace::FProtocol5Stage::ExitStage(FProtocol5Stage *this,FMachineContext *param_1)

{
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar1;
  char cVar2;
  wchar_t *local_38;
  undefined4 uStack_30;
  FReadAccessScope local_28;
  
  cVar2 = (**(code **)(this->Transport->_padding_ + 0x10))();
  if (cVar2 == '\0') {
    this_00 = param_1->OnMessage;
    local_38 = L"Transport buffers are not empty at end of analysis (protocol 5)!";
    uStack_30 = 0x40;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnData @ 14d3a2510

EStatus __thiscall
UE::Trace::FProtocol5Stage::OnData
          (FProtocol5Stage *this,FStreamReader *param_1,FMachineContext *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar4;
  FAnalysisBridge *pFVar5;
  code *pcVar6;
  ETransportResult EVar7;
  bool bVar8;
  int iVar9;
  EStatus EVar10;
  FStreamReader *pFVar11;
  FDispatch *pFVar12;
  FInfo *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FStreamReader *local_res10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  FReadAccessScope local_58;
  
  this->Transport->_padding_ = (longlong)param_1;
  local_res10 = param_1;
  EVar7 = FTidPacketTransport::Update(this->Transport);
  if (EVar7 == Error) {
    this_00 = param_2->OnMessage;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar4 = *(longlong **)&this_00->field_0x8, plVar4 != (longlong *)0x0)) {
      local_68 = 0x52b06720;
      uStack_64 = 1;
      uStack_60 = 0x6b;
      (**(code **)(*plVar4 + 0x68))(plVar4,2,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    return Error;
  }
  piVar1 = &(this->EventDescs).ArrayMax;
  while( true ) {
    (this->EventDescs).ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&(this->EventDescs).AllocatorInstance,0,piVar1);
    }
    pFVar11 = FTidPacketTransport::GetThreadStream(this->Transport,0);
    if (pFVar11->Cursor < pFVar11->End) {
      iVar9 = ParseImportantEvents(this,pFVar11,&this->EventDescs,param_2);
      if (iVar9 < 0) {
        return Error;
      }
      iVar9 = (this->EventDescs).ArrayNum;
      pFVar15 = (this->EventDescs).AllocatorInstance.Data;
      pFVar16 = pFVar15 + (longlong)iVar9 * 0x10;
      while( true ) {
        if ((this->EventDescs).ArrayNum != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Trace::FProtocol5Stage::FEventDesc,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (pFVar15 == pFVar16) break;
        uVar2 = this->EventVersion;
        if ((uVar2 == 0) || (uVar2 == 4)) {
          pFVar12 = FTypeRegistry::AddVersion4(&this->TypeRegistry,*(void **)(pFVar15 + 8));
        }
        else if ((uVar2 == 6) || (uVar2 == 7)) {
          pFVar12 = FTypeRegistry::AddVersion6(&this->TypeRegistry,*(void **)(pFVar15 + 8));
        }
        else {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                             ,0x4d5,L"");
          pFVar12 = (FDispatch *)0x0;
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            EVar10 = (*pcVar6)();
            return EVar10;
          }
        }
        FAnalyzerHub::OnNewType(&param_2->Bridge->AnalyzerHub,pFVar12);
        pFVar15 = pFVar15 + 0x10;
      }
    }
    (this->EventDescs).ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&(this->EventDescs).AllocatorInstance,0,piVar1);
    }
    pFVar11 = FTidPacketTransport::GetThreadStream(this->Transport,1);
    if (pFVar11->Cursor < pFVar11->End) {
      iVar9 = ParseImportantEvents(this,pFVar11,&this->EventDescs,param_2);
      if (iVar9 < 0) {
        return Error;
      }
      iVar9 = (this->EventDescs).ArrayNum;
      uVar2 = pFVar11->End;
      uVar3 = pFVar11->Cursor;
      if (0 < iVar9) {
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(this->EventDescs).AllocatorInstance,piVar1);
        }
        (this->EventDescs).ArrayNum = iVar9 + 1;
        lVar14 = (longlong)iVar9;
        pFVar15 = (this->EventDescs).AllocatorInstance.Data;
        *(undefined8 *)(pFVar15 + lVar14 * 0x10) = 0;
        *(undefined4 *)(pFVar15 + lVar14 * 0x10) = 0x4000001;
        *(undefined8 *)(pFVar15 + lVar14 * 0x10 + 8) = 0;
        pFVar5 = param_2->Bridge;
        pFVar13 = FThreads::GetInfo(&(pFVar5->State).Threads,1);
        pFVar5->ThreadInfo = pFVar13;
        iVar9 = DispatchEvents(this,param_2,(FEventDesc *)(this->EventDescs).AllocatorInstance.Data,
                               (this->EventDescs).ArrayNum - 1);
        if (iVar9 < 0) {
          return Error;
        }
      }
      iVar9 = 3 - (uint)(uVar3 < uVar2);
    }
    else {
      iVar9 = 3;
    }
    EVar10 = OnDataNormal(this,param_2);
    pFVar11 = local_res10;
    if (EVar10 == Error) {
      return Error;
    }
    if (EVar10 == Sync) break;
    if (iVar9 == 2 || EVar10 == NotEnoughData) {
      if (this->bSkipSerial == false) {
        return NotEnoughData;
      }
    }
    else if (this->bSkipSerial == false) {
      if ((local_res10->End < local_res10->Cursor) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("End >= Cursor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                             ,0x1e,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar10 = (*pcVar6)();
        return EVar10;
      }
      return Continue - (pFVar11->End - pFVar11->Cursor < pFVar11->DemandHint);
    }
  }
  EVar10 = (**(code **)(this->_padding_ + 8))(this,local_res10,param_2);
  return EVar10;
}

// OnDataImportant @ 14d3a2de0

EStatus __thiscall
UE::Trace::FProtocol5Stage::OnDataImportant(FProtocol5Stage *this,FMachineContext *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FAnalysisBridge *pFVar5;
  int iVar6;
  EStatus EVar7;
  FStreamReader *pFVar8;
  FInfo *pFVar9;
  longlong lVar10;
  
  piVar1 = &(this->EventDescs).ArrayMax;
  (this->EventDescs).ArrayNum = 0;
  if ((this->EventDescs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->EventDescs).AllocatorInstance,0,piVar1);
  }
  pFVar8 = FTidPacketTransport::GetThreadStream(this->Transport,1);
  if (pFVar8->End <= pFVar8->Cursor) {
    return EndOfStream;
  }
  iVar6 = ParseImportantEvents(this,pFVar8,&this->EventDescs,param_1);
  if (iVar6 < 0) {
LAB_14d3a2efb:
    EVar7 = Error;
  }
  else {
    iVar6 = (this->EventDescs).ArrayNum;
    uVar2 = pFVar8->End;
    uVar3 = pFVar8->Cursor;
    if (0 < iVar6) {
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&(this->EventDescs).AllocatorInstance,piVar1);
      }
      (this->EventDescs).ArrayNum = iVar6 + 1;
      lVar10 = (longlong)iVar6;
      pFVar4 = (this->EventDescs).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + lVar10 * 0x10) = 0;
      *(undefined4 *)(pFVar4 + lVar10 * 0x10) = 0x4000001;
      *(undefined8 *)(pFVar4 + lVar10 * 0x10 + 8) = 0;
      pFVar5 = param_1->Bridge;
      pFVar9 = FThreads::GetInfo(&(pFVar5->State).Threads,1);
      pFVar5->ThreadInfo = pFVar9;
      iVar6 = DispatchEvents(this,param_1,(FEventDesc *)(this->EventDescs).AllocatorInstance.Data,
                             (this->EventDescs).ArrayNum - 1);
      if (iVar6 < 0) goto LAB_14d3a2efb;
    }
    EVar7 = EndOfStream - (uVar3 < uVar2);
  }
  return EVar7;
}

// OnDataNewEvents @ 14d3a3110

EStatus __thiscall
UE::Trace::FProtocol5Stage::OnDataNewEvents(FProtocol5Stage *this,FMachineContext *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EStatus EVar5;
  FStreamReader *pFVar6;
  FDispatch *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  (this->EventDescs).ArrayNum = 0;
  if ((this->EventDescs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->EventDescs).AllocatorInstance,0,&(this->EventDescs).ArrayMax);
  }
  pFVar6 = FTidPacketTransport::GetThreadStream(this->Transport,0);
  if (pFVar6->Cursor < pFVar6->End) {
    iVar4 = ParseImportantEvents(this,pFVar6,&this->EventDescs,param_1);
    if (iVar4 < 0) {
      return Error;
    }
    pFVar8 = (this->EventDescs).AllocatorInstance.Data;
    iVar4 = (this->EventDescs).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar4 * 0x10;
    while( true ) {
      if ((this->EventDescs).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Trace::FProtocol5Stage::FEventDesc,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar9) break;
      uVar1 = this->EventVersion;
      if ((uVar1 == 0) || (uVar1 == 4)) {
        pFVar7 = FTypeRegistry::AddVersion4(&this->TypeRegistry,*(void **)(pFVar8 + 8));
      }
      else if ((uVar1 == 6) || (uVar1 == 7)) {
        pFVar7 = FTypeRegistry::AddVersion6(&this->TypeRegistry,*(void **)(pFVar8 + 8));
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                           ,0x4d5,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        pFVar7 = (FDispatch *)0x0;
      }
      FAnalyzerHub::OnNewType(&param_1->Bridge->AnalyzerHub,pFVar7);
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return EndOfStream;
}

// OnDataNormal @ 14d3a3260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EStatus __thiscall
UE::Trace::FProtocol5Stage::OnDataNormal(FProtocol5Stage *this,FMachineContext *param_1)

{
  FStreamReader *pFVar1;
  ushort uVar2;
  FTidPacketTransport *pFVar3;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *pTVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  bool bVar10;
  EStatus EVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_388 [32];
  undefined1 local_337;
  undefined1 local_336 [6];
  TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_> local_330;
  uint local_320;
  uint local_31c;
  FMachineContext *local_318;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  uint local_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  FReadAccessScope local_2c8;
  FReadAccessScope local_2b0;
  TStringBuilderBase<wchar_t> local_298;
  wchar_t local_278 [128];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_388;
  EVar11 = Error;
  uVar15 = 0;
  (this->EventDescs).ArrayNum = 0;
  local_318 = param_1;
  if ((this->EventDescs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->EventDescs).AllocatorInstance,0,&(this->EventDescs).ArrayMax);
  }
  local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.ArrayNum = 0;
  local_330.ArrayMax = 0;
  bVar8 = false;
  uVar21 = (this->Transport->Threads).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0 < (int)uVar21) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar21,&local_330.AllocatorInstance,0,&local_330.ArrayMax);
  }
  uVar9 = uStack_2dc;
  uVar21 = 2;
  this->bSkipSerial = false;
  local_31c = (this->Transport->Threads).ArrayNum;
  if (2 < local_31c) {
    do {
      pFVar3 = this->Transport;
      uVar20 = (this->EventDescs).ArrayNum;
      uVar13 = uVar15;
      if ((int)uVar21 < (pFVar3->Threads).ArrayNum) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      local_320 = uVar20;
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      pFVar18 = (pFVar3->Threads).AllocatorInstance.Data;
      pFVar1 = (FStreamReader *)(pFVar18 + (longlong)(int)uVar21 * 0x28);
      if ((pFVar1->End < *(uint *)(pFVar18 + (longlong)(int)uVar21 * 0x28 + 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("End >= Cursor",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                              ,0x1e,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (2000000000 < pFVar1->End - pFVar1->Cursor) {
        if (this->bSkipSerialError == false) {
          this->bSkipSerialError = true;
          FTidPacketTransport::GetThreadId(this->Transport,uVar21);
          if ((pFVar1->End < pFVar1->Cursor) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("End >= Cursor",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                                  ,0x1e,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          local_298.bIsDynamic = false;
          local_298.bIsExternal = false;
          local_298.Base = local_278;
          local_298.CurPos = local_278;
          local_298.End = (wchar_t *)&local_178;
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_298,
                     L"Trace analysis accumulated too much data (%.2f MiB on thread %u) and will start to skip the missing serial sync events!"
                    );
          uStack_300 = (undefined4)((longlong)local_298.CurPos - (longlong)local_298.Base >> 1);
          local_308 = local_298.Base;
          pTVar4 = local_318->OnMessage;
          uStack_2fc = uVar9;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_2c8);
          if ((*(int *)&pTVar4->field_0x10 != 0) &&
             (plVar5 = *(longlong **)&pTVar4->field_0x8, plVar5 != (longlong *)0x0)) {
            local_2d8 = (undefined4)local_308;
            uStack_2d4 = local_308._4_4_;
            uStack_2d0 = uStack_300;
            uStack_2cc = uStack_2fc;
            (**(code **)(*plVar5 + 0x68))(plVar5,2,&local_2d8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_2c8);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_298);
          uVar20 = local_320;
        }
        this->bSkipSerial = true;
      }
      iVar12 = ParseEvents(this,pFVar1,&this->EventDescs,local_318);
      if (iVar12 < 0) goto LAB_14d3a394a;
      bVar8 = (bool)(bVar8 | pFVar1->Cursor < pFVar1->End);
      uVar13 = (this->EventDescs).ArrayNum;
      if (uVar13 != uVar20) {
        if (uVar13 == (this->EventDescs).ArrayMax) {
          uVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,&(this->EventDescs).AllocatorInstance,
                              &(this->EventDescs).ArrayMax);
        }
        (this->EventDescs).ArrayNum = uVar13 + 1;
        lVar16 = (longlong)(int)uVar13;
        pFVar18 = (this->EventDescs).AllocatorInstance.Data;
        *(undefined8 *)(pFVar18 + lVar16 * 0x10) = 0;
        *(undefined4 *)(pFVar18 + lVar16 * 0x10) = 0x4000001;
        *(undefined8 *)(pFVar18 + lVar16 * 0x10 + 8) = 0;
        local_2f8 = FTidPacketTransport::GetThreadId(this->Transport,uVar21);
        uStack_2f4 = uVar21;
        uStack_2f0 = uVar20;
        if (((local_330.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2f8) &&
            ((FScriptContainerElement *)&local_2f8 <
             local_330.AllocatorInstance.Data + (longlong)local_330.ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          EVar11 = (*pcVar7)();
          return EVar11;
        }
        iVar12 = local_330.ArrayNum;
        if (local_330.ArrayNum == local_330.ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,&local_330.AllocatorInstance,&local_330.ArrayMax);
        }
        local_330.ArrayNum = iVar12 + 1;
        *(ulonglong *)(local_330.AllocatorInstance.Data + (longlong)iVar12 * 0x10) =
             CONCAT44(uStack_2f4,local_2f8);
        *(ulonglong *)(local_330.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
             CONCAT44(uStack_2ec,uStack_2f0);
      }
      uVar21 = uVar21 + 1;
      param_1 = local_318;
    } while (uVar21 < local_31c);
  }
  iVar12 = local_330.ArrayNum;
  pFVar19 = local_330.AllocatorInstance.Data + (longlong)local_330.ArrayNum * 0x10;
  pFVar18 = local_330.AllocatorInstance.Data + 8;
  while( true ) {
    if (local_330.ArrayNum != iVar12) {
      local_337 = 0;
      `TCheckedPointerIterator<UE::Trace::FProtocol5Stage::FEventDescStream,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_337);
    }
    if (pFVar18 + -8 == pFVar19) break;
    *(FScriptContainerElement **)pFVar18 =
         (this->EventDescs).AllocatorInstance.Data + (ulonglong)*(uint *)pFVar18 * 0x10;
    pFVar18 = pFVar18 + 0x10;
  }
  iVar12 = (this->EventDescs).ArrayNum;
  local_318 = (FMachineContext *)CONCAT44(local_318._4_4_,this->Transport->Synced);
  local_320 = this->SyncCount;
  iVar14 = DispatchNormalEvents(this,param_1,&local_330);
  if (iVar14 < 0) goto LAB_14d3a394a;
  iVar12 = iVar12 + ((this->SerialGaps).ArrayNum - iVar14);
  if ((iVar12 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumAvailableEvents >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                          ,0xf72,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  if (this->OldNextSerial == this->NextSerial) {
    uVar15 = this->NextSerialWaitCount + 1;
    this->NextSerialWaitCount = uVar15;
  }
  else {
    this->OldNextSerial = this->NextSerial;
    this->NextSerialWaitCount = 0;
  }
  if (this->SyncCount == 0) {
LAB_14d3a3802:
    if (this->bSkipSerialError != false) goto joined_r0x00014d3a380e;
  }
  else {
    if (this->bSkipSerialError != false) goto joined_r0x00014d3a380e;
    if ((iVar12 < 0x55d4a81) || (uVar15 < 0x15)) goto LAB_14d3a3802;
    local_178.Base = local_158;
    this->bSkipSerialError = true;
    local_178.CurPos = local_158;
    local_178.bIsDynamic = false;
    local_178.bIsExternal = false;
    local_178.End = (wchar_t *)local_58;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_178,
               L"Trace analysis accumulated too much data (%d parsed events) and will start to skip the missing serial sync events!"
              );
    pTVar4 = param_1->OnMessage;
    uStack_300 = (undefined4)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
    local_308 = local_178.Base;
    uStack_2fc = uStack_2dc;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_2b0);
    if ((*(int *)&pTVar4->field_0x10 != 0) &&
       (plVar5 = *(longlong **)&pTVar4->field_0x8, plVar5 != (longlong *)0x0)) {
      local_2e8 = (undefined4)local_308;
      uStack_2e4 = local_308._4_4_;
      uStack_2e0 = uStack_300;
      uStack_2dc = uStack_2fc;
      (**(code **)(*plVar5 + 0x68))(plVar5,2,&local_2e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2b0);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    do {
      this->bSkipSerial = true;
      this->NextSerialWaitCount = 0;
      iVar14 = DispatchNormalEvents(this,param_1,&local_330);
      if (iVar14 < 0) goto LAB_14d3a394a;
      iVar12 = iVar12 - iVar14;
      if (iVar12 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumAvailableEvents >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                            ,0xfb7,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          EVar11 = (*pcVar7)();
          return EVar11;
        }
        break;
      }
joined_r0x00014d3a380e:
    } while (50000000 < iVar12);
  }
  uVar17 = (ulonglong)local_330.ArrayNum;
  pFVar19 = local_330.AllocatorInstance.Data + uVar17 * 0x10;
  local_31c = local_330.ArrayNum;
  pFVar18 = local_330.AllocatorInstance.Data + 4;
  while( true ) {
    if (local_330.ArrayNum != (int)uVar17) {
      local_336[0] = 0;
      `TCheckedPointerIterator<UE::Trace::FProtocol5Stage::FEventDescStream,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_336);
    }
    if (pFVar18 + -4 == pFVar19) break;
    uVar15 = *(uint *)pFVar18;
    lVar22 = (longlong)(int)uVar15;
    lVar16 = *(longlong *)(pFVar18 + 4);
    pFVar3 = this->Transport;
    uVar2 = *(ushort *)(lVar16 + 4);
    uVar21 = 0;
    if ((int)uVar15 < (pFVar3->Threads).ArrayNum) {
      uVar21 = ~uVar15 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
    pFVar6 = (pFVar3->Threads).AllocatorInstance.Data;
    uVar15 = (*(int *)(lVar16 + 8) - *(int *)(pFVar6 + lVar22 * 0x28)) - ((uVar2 >> 0xe & 1) + 4);
    if (uVar15 <= *(uint *)(pFVar6 + lVar22 * 0x28 + 0x10)) {
      *(uint *)(pFVar6 + lVar22 * 0x28 + 0xc) = uVar15;
    }
    uVar17 = (ulonglong)local_31c;
    pFVar18 = pFVar18 + 0x10;
  }
  if ((local_320 == (uint)local_318) || (this->SyncCount != this->Transport->Synced)) {
    if (bVar8) {
      EVar11 = NotEnoughData;
    }
    else {
      EVar11 = EndOfStream;
    }
  }
  else {
    EVar11 = Sync;
  }
LAB_14d3a394a:
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  return EVar11;
}

// ParseEvent @ 14d3a4cc0

int __thiscall
UE::Trace::FProtocol5Stage::ParseEvent
          (FProtocol5Stage *this,FStreamReader *param_1,FEventDesc *param_2,FMachineContext *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDispatch *pFVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  FEventDesc_u_8 FVar9;
  uint uVar10;
  uint local_res10 [2];
  FEventDesc *local_res18;
  
  puVar8 = (uint *)(param_1->Buffer + param_1->Cursor);
  puVar6 = (ushort *)((longlong)&param_2->field0_0x0 + 4);
  uVar7 = (uint)(byte)*puVar8;
  if (((byte)*puVar8 & 1) != 0) {
    *puVar6 = *puVar6 | 0x4000;
    uVar7 = (uint)(ushort)*puVar8;
    puVar8 = (uint *)((longlong)puVar8 + 1);
  }
  uVar7 = uVar7 >> 1;
  iVar3 = 0;
  FVar9.Data = (uchar *)((longlong)puVar8 + 1);
  local_res10[0] = 0;
  uVar10 = 0x4000000;
  local_res18 = param_2;
  if (uVar7 < 0x10) {
    if (uVar7 == 1) {
      if ((param_1->End < param_1->Cursor) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("End >= Cursor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                             ,0x1e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      local_res10[0] = *puVar8 >> 0xd;
      if (param_1->End - param_1->Cursor < local_res10[0] + 4) {
        return 0;
      }
      puVar6 = (ushort *)((longlong)&local_res18->field0_0x0 + 4);
      FVar9.Data = (uchar *)(puVar8 + 1);
      *puVar6 = *puVar6 & 0x7fff;
      uVar5 = *puVar6;
    }
    else {
      (**(code **)(this->_padding_ + 0x20))(this,uVar7,local_res10);
      *puVar6 = *puVar6 & 0x7fff;
      uVar5 = *puVar6;
    }
  }
  else {
    pFVar4 = FTypeRegistry::Get(&this->TypeRegistry,uVar7);
    if (pFVar4 == (FDispatch *)0x0) {
      return 0;
    }
    local_res10[0] = (uint)pFVar4->EventSize;
    uVar5 = (ushort)(pFVar4->Flags >> 1) << 0xf | *puVar6 & 0x7fff;
    *puVar6 = uVar5;
    if ((pFVar4->Flags & 4) == 0) {
      uVar10 = *(uint *)FVar9.Data & 0xffffff;
      FVar9.Data = (uchar *)(puVar8 + 1);
    }
  }
  *puVar6 = (uVar5 ^ (ushort)uVar7) & 0x3fff ^ uVar5;
  (local_res18->field0_0x0)._s_0.Serial = uVar10;
  local_res18->field1_0x8 = FVar9;
  if (param_1->End < param_1->Cursor + 1) {
    uVar7 = 1;
    if (1 < param_1->DemandHint) {
      uVar7 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar7;
  }
  else {
    iVar3 = param_1->Cursor + (int)param_1->Buffer;
  }
  return local_res10[0] + (FVar9.GapLength - iVar3);
}

// ParseEvents @ 14d3a4e80

int __thiscall
UE::Trace::FProtocol5Stage::ParseEvents
          (FProtocol5Stage *this,FStreamReader *param_1,
          TArray<UE::Trace::FProtocol5Stage::FEventDesc,TSizedDefaultAllocator<32>_> *param_2,
          FMachineContext *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FEventDesc_u_0 *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  uint uVar10;
  FEventDesc_u_0 local_38;
  ulong64 uStack_30;
  
  if (param_1->Cursor < param_1->End) {
    piVar1 = &param_2->ArrayMax;
    piVar2 = &param_2->ArrayNum;
    do {
      local_38.Meta = 0;
      uStack_30 = 0;
      iVar7 = ParseEvent(this,param_1,(FEventDesc *)&local_38._s_0,param_3);
      if (iVar7 < 1) {
        return iVar7;
      }
      pFVar4 = (FEventDesc_u_0 *)(param_2->AllocatorInstance).Data;
      if (((pFVar4 <= &local_38) && (&local_38 < pFVar4 + (longlong)*piVar1 * 2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar8 = *piVar2;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&param_2->AllocatorInstance,piVar1);
        *piVar2 = iVar8;
      }
      *piVar2 = iVar8 + 1;
      pFVar4 = (FEventDesc_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
      pFVar4->Meta = (ulong64)local_38;
      pFVar4[1].Meta = uStack_30;
      if ((local_38.Meta & 0x800000000000) == 0) {
        param_1->Cursor = param_1->Cursor + iVar7;
      }
      else {
        uVar3 = param_1->Cursor;
        uVar10 = *piVar2 - 1;
        param_1->Cursor = uVar3 + iVar7;
        iVar7 = ParseEventsWithAux(this,param_1,param_2,param_3);
        if (iVar7 < 0) {
          return iVar7;
        }
        if (iVar7 == 0) {
          iVar7 = *piVar2;
          if (iVar7 < (int)uVar10) {
            iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,0x10,uVar10 - iVar7,&param_2->AllocatorInstance,piVar2,piVar1);
            DefaultConstructItems<UE::Trace::FProtocol5Stage::FEventDesc,int>
                      ((param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,uVar10 - iVar7);
          }
          else {
            if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
            }
            if ((int)uVar10 < iVar7) {
              uVar9 = iVar7 - uVar10;
              if (((int)(uVar9 | uVar10) < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                iVar7 = (*pcVar5)();
                return iVar7;
              }
              if (uVar9 != 0) {
                _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
                iVar7 = (*piVar2 - uVar9) - uVar10;
                if (iVar7 != 0) {
                  memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0x10,(longlong)iVar7 << 4);
                }
                *piVar2 = *piVar2 - uVar9;
              }
            }
          }
          param_1->Cursor = uVar3;
          if (uVar3 <= param_1->End) {
            return 0;
          }
          param_1->Cursor = param_1->End;
          return 0;
        }
      }
    } while (param_1->Cursor < param_1->End);
  }
  return 0;
}

// ParseEventsWithAux @ 14d3a50e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Trace::FProtocol5Stage::ParseEventsWithAux
          (FProtocol5Stage *this,FStreamReader *param_1,
          TArray<UE::Trace::FProtocol5Stage::FEventDesc,TSizedDefaultAllocator<32>_> *param_2,
          FMachineContext *param_3)

{
  short sVar1;
  uint uVar2;
  FEventDesc_u_0 *pFVar3;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FMachineContext *pFVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<unsigned_short> FVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 uVar15;
  uint uVar16;
  undefined1 auStackY_248 [32];
  undefined2 local_1f8;
  FIdentityFunctor local_1f6;
  FEventDesc_u_0 local_1e8;
  FEventDesc_u_0 FStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  FReadAccessScope local_1b8;
  ForElementType<unsigned_short> local_1a0;
  int local_188;
  int local_184 [3];
  TStringBuilderBase<wchar_t> local_178;
  FMachineContext local_158 [10];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_188 = 1;
  local_1a0.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_1d8 = param_3;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
            (2,2,1,0,&local_1a0,1,local_184);
  uVar16 = 2;
  FVar12 = (ForElementType<unsigned_short>)&local_1a0;
  if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar12 = local_1a0.SecondaryData;
  }
  bVar9 = false;
  *(undefined2 *)FVar12 = 0;
  uVar2 = param_2->ArrayNum;
  bVar8 = false;
  if (param_1->Cursor < param_1->End) {
    do {
      bVar9 = bVar8;
      FStack_1e0.Meta = 0;
      local_1e8.Meta = 0x4000000;
      iVar10 = ParseEvent(this,param_1,(FEventDesc *)&local_1e8._s_0,param_3);
      if (iVar10 < 1) goto LAB_14d3a572f;
      param_1->Cursor = param_1->Cursor + iVar10;
      if ((local_1e8.Meta._4_2_ & 0x3fff) == 3) {
        if ((local_188 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar10 = (*pcVar6)();
          return iVar10;
        }
        FVar12 = (ForElementType<unsigned_short>)&local_1a0;
        if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
          FVar12 = local_1a0.SecondaryData;
        }
        lVar14 = (longlong)(local_188 + -1) * 2;
        sVar1 = *(short *)((longlong)FVar12 + lVar14);
        FVar12 = (ForElementType<unsigned_short>)&local_1a0;
        if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
          FVar12 = local_1a0.SecondaryData;
        }
        puVar13 = (undefined2 *)(lVar14 + (longlong)FVar12);
        iVar10 = (local_188 - (local_188 + -1)) + -1;
        if (iVar10 != 0) {
          memmove(puVar13,puVar13 + 1,(longlong)iVar10 * 2);
        }
        local_188 = local_188 + -1;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                  (2,2,&local_1a0,local_188,local_184);
        if (sVar1 == 0) break;
      }
      else {
        if ((local_1e8.Meta._4_2_ & 0x3fff) == 1) {
          uVar11 = 0;
          if ((int)(local_188 - 1U) < local_188) {
            uVar11 = ~(local_188 - 1U) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          FVar12 = (ForElementType<unsigned_short>)&local_1a0;
          if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
            FVar12 = local_1a0.SecondaryData;
          }
          local_1e8._s_0.AuxKey = *(short *)((longlong)FVar12 + (longlong)(local_188 + -1) * 2) + 1;
        }
        else {
          bVar9 = (short)local_1e8.Meta._4_2_ < 0;
          uVar15 = (undefined2)uVar16;
          local_1e8._s_0.AuxKey = uVar15;
          if (bVar9) {
            FVar12 = (ForElementType<unsigned_short>)&local_1a0;
            if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
              FVar12 = local_1a0.SecondaryData;
            }
            local_1f8 = uVar15;
            if ((ulonglong)FVar12 <= &local_1f8) {
              FVar12 = (ForElementType<unsigned_short>)&local_1a0;
              if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
                FVar12 = local_1a0.SecondaryData;
              }
              if ((&local_1f8 < (undefined2 *)((longlong)FVar12 + (longlong)local_184[0] * 2)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                iVar10 = (*pcVar6)();
                return iVar10;
              }
            }
            if (local_188 == local_184[0]) {
              local_188 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                                    (0x202,&local_1a0,local_184);
            }
            lVar14 = (longlong)local_188;
            FVar12 = (ForElementType<unsigned_short>)&local_1a0;
            if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
              FVar12 = local_1a0.SecondaryData;
            }
            local_188 = local_188 + 1;
            *(undefined2 *)((longlong)FVar12 + lVar14 * 2) = local_1f8;
          }
          bVar9 = true;
        }
        pFVar3 = (FEventDesc_u_0 *)(param_2->AllocatorInstance).Data;
        if (((pFVar3 <= &local_1e8) && (&local_1e8 < pFVar3 + (longlong)param_2->ArrayMax * 2)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar10 = (*pcVar6)();
          return iVar10;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        uVar16 = uVar16 + 1;
        pFVar3 = (FEventDesc_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x10);
        *pFVar3 = local_1e8;
        pFVar3[1] = FStack_1e0;
        if ((local_188 == 1) && (0x7fff < uVar16)) {
          if ((uVar2 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("FirstDescIndex > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                                 ,0x1196,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar11 = 0;
          if ((int)(uVar2 - 1) < param_2->ArrayNum) {
            uVar11 = ~(uVar2 - 1) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          local_178.Base = (wchar_t *)local_158;
          local_178.bIsDynamic = false;
          local_178.bIsExternal = false;
          local_178.CurPos = (wchar_t *)local_158;
          local_178.End = (wchar_t *)local_58;
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_178,
                     L"Ignoring lost aux terminal for event with uid %u, after parsing %u events.");
          pFVar7 = local_1d8;
          uStack_1d0 = (undefined4)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
          local_1d8 = (FMachineContext *)local_178.Base;
          this_00 = pFVar7->OnMessage;
          uStack_1cc = uStack_1bc;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1b8);
          if ((*(int *)&this_00->field_0x10 != 0) &&
             (plVar4 = *(longlong **)&this_00->field_0x8, plVar4 != (longlong *)0x0)) {
            local_1c8 = (undefined4)local_1d8;
            uStack_1c4 = local_1d8._4_4_;
            uStack_1c0 = uStack_1d0;
            uStack_1bc = uStack_1cc;
            (**(code **)(*plVar4 + 0x68))(plVar4,2,&local_1c8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1b8);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
          if ((local_188 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          FVar12 = (ForElementType<unsigned_short>)&local_1a0;
          if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
            FVar12 = local_1a0.SecondaryData;
          }
          puVar13 = (undefined2 *)((longlong)FVar12 + (longlong)(local_188 + -1) * 2);
          iVar10 = (local_188 - (local_188 + -1)) + -1;
          if (iVar10 != 0) {
            memmove(puVar13,puVar13 + 1,(longlong)iVar10 * 2);
          }
          local_188 = local_188 + -1;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                    (2,2,&local_1a0,local_188,local_184);
          break;
        }
      }
      param_3 = local_1d8;
      bVar8 = bVar9;
    } while (param_1->Cursor < param_1->End);
  }
  iVar10 = 0;
  if (local_188 < 1) {
    if (((uVar16 & 0xffff0000) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(AuxKey & 0xffff0000) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                           ,0x11ac,L"AuxKey overflow (0x%X)"), bVar8)) {
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    if (bVar9) {
      pFVar5 = (param_2->AllocatorInstance).Data;
      iVar10 = param_2->ArrayNum - uVar2;
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        iVar10 = (*pcVar6)();
        return iVar10;
      }
      AlgoImpl::
      StableSortInternal<UE::Trace::FProtocol5Stage::FEventDesc,FIdentityFunctor,_UE::Trace::FProtocol5Stage::ParseEventsWithAux_::__l47::<lambda_1>_>
                ((FEventDesc *)(pFVar5 + (ulonglong)uVar2 * 0x10),iVar10,local_1f6,
                 (<lambda_1>)local_1f6);
    }
    iVar10 = 1;
  }
LAB_14d3a572f:
  if (local_1a0.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_1a0.SecondaryData);
  }
  return iVar10;
}

// ParseImportantEvents @ 14d3a5770

int __thiscall
UE::Trace::FProtocol5Stage::ParseImportantEvents
          (FProtocol5Stage *this,FStreamReader *param_1,
          TArray<UE::Trace::FProtocol5Stage::FEventDesc,TSizedDefaultAllocator<32>_> *param_2,
          FMachineContext *param_3)

{
  ushort uVar1;
  longlong lVar2;
  TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint *puVar9;
  ushort *puVar10;
  ulonglong local_78;
  ushort *puStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FReadAccessScope local_48;
  
  do {
    while( true ) {
      if ((param_1->End < param_1->Cursor) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("End >= Cursor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                             ,0x1e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      uVar7 = param_1->End - param_1->Cursor;
      if (uVar7 < 4) {
        return 1;
      }
      puVar10 = (ushort *)(param_1->Buffer + param_1->Cursor);
      if (uVar7 < puVar10[1] + 4) {
        return 1;
      }
      uVar1 = *puVar10;
      puStack_70 = puVar10 + 2;
      local_78 = (ulonglong)CONCAT24(uVar1,0x4000000) & 0xffff3fffffffffff;
      if (uVar1 != 0) break;
      pFVar8 = (param_2->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(ulonglong *)pFVar8 = local_78;
      *(ushort **)(pFVar8 + 8) = puStack_70;
LAB_14d3a58f9:
      param_1->Cursor = param_1->Cursor + puVar10[1] + 4;
    }
    uVar7 = (this->TypeRegistry).TypeInfos.ArrayNum;
    if (uVar7 <= uVar1) {
      return 1;
    }
    if (((int)uVar7 <= (int)(uint)uVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    lVar2 = *(longlong *)
             ((this->TypeRegistry).TypeInfos.AllocatorInstance.Data + (ulonglong)uVar1 * 8);
    if (lVar2 == 0) {
      return 1;
    }
    if ((*(byte *)(lVar2 + 7) & 2) != 0) {
      local_78 = local_78 | 0x800000000000;
    }
    pFVar8 = (param_2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(ulonglong *)pFVar8 = local_78;
    *(ushort **)(pFVar8 + 8) = puStack_70;
    if ((*(byte *)(lVar2 + 7) & 2) == 0) goto LAB_14d3a58f9;
    uVar1 = puVar10[1];
    for (puVar9 = (uint *)((ulonglong)*(ushort *)(lVar2 + 8) + 4 + (longlong)puVar10);
        puVar9 <= (uint *)((ulonglong)uVar1 + 4 + (longlong)puVar10);
        puVar9 = (uint *)((longlong)puVar9 + (ulonglong)(*puVar9 >> 0xd) + 4)) {
      if ((char)*puVar9 == '\x03') goto LAB_14d3a5a90;
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(uint **)(pFVar8 + 8) = puVar9 + 1;
      *(undefined2 *)(pFVar8 + 4) = 1;
      *(undefined4 *)pFVar8 = 0x4000000;
    }
    if ((char)*puVar9 != '\x03') {
      this_00 = param_3->OnMessage;
      local_68 = L"Expected an aux data terminal in the stream.";
      uStack_60 = 0x2c;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
      if ((*(int *)&this_00->field_0x10 != 0) &&
         (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 != (longlong *)0x0)) {
        local_58 = (undefined4)local_68;
        uStack_54 = local_68._4_4_;
        uStack_50 = uStack_60;
        uStack_4c = uStack_5c;
        (**(code **)(*plVar3 + 0x68))(plVar3,1,&local_58);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      return -1;
    }
LAB_14d3a5a90:
    param_1->Cursor = param_1->Cursor + puVar10[1] + 4;
  } while( true );
}

// SetSizeIfKnownEvent @ 14d3a7ee0

void __thiscall
UE::Trace::FProtocol5Stage::SetSizeIfKnownEvent(FProtocol5Stage *this,uint param_1,uint *param_2)

{
  if ((param_1 - 8 & 0xfffffffb) == 0) {
    *param_2 = 7;
  }
  return;
}

