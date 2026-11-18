// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// FViewDebugInfo @ 145750000

FViewDebugInfo * __thiscall FViewDebugInfo::FViewDebugInfo(FViewDebugInfo *this)

{
  *(undefined8 *)&(this->OnUpdate).field_0x18 = 2;
  *(undefined8 *)&this->OnUpdate = 0;
  *(undefined8 *)&(this->OnUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdate).field_0x10 = 0;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->Primitives = 0;
  *(undefined8 *)&(this->Primitives).field_0x8 = 0;
  *(undefined8 *)&(this->Primitives).field_0x20 = 0;
  *(undefined4 *)&(this->Primitives).field_0x28 = 0;
  *(undefined4 *)&(this->Primitives).field_0x2c = 0x80;
  *(undefined4 *)&(this->Primitives).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Primitives).field_0x34 = 0;
  *(undefined8 *)&(this->Primitives).field_0x40 = 0;
  *(undefined4 *)&(this->Primitives).field_0x48 = 0;
  this->bShouldClearCapturedData = false;
  this->bHasEverUpdated = false;
  this->bIsOutdated = true;
  this->bShouldUpdate = false;
  this->bShouldCaptureSingleFrame = false;
  return this;
}

// operator() @ 145751ee0

void __thiscall `FViewDebugInfo::ProcessPrimitives'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_28;
  
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 8),
             (FWriteAccessScope *)&local_28);
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
  bVar4 = false;
  uVar8 = *(int *)(lVar1 + 0x18) - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar1 + 0x18)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar9) == 0) ||
          (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar9), plVar2 == (longlong *)0x0))
         || (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 8),false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CaptureNextFrame @ 14575b2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewDebugInfo::CaptureNextFrame(FViewDebugInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FViewDebugInfo *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewDebugInfo *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewDebugInfo::CaptureNextFrame'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewDebugInfo::CaptureNextFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewDebugInfo::CaptureNextFrame_::__l2::TSTR_CmdShouldCaptureNextFrame212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewDebugInfo::CaptureNextFrame'::__l2::TSTR_CmdShouldCaptureNextFrame212>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ClearCaptureData @ 14575b440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewDebugInfo::ClearCaptureData(FViewDebugInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FViewDebugInfo *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewDebugInfo *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewDebugInfo::ClearCaptureData'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewDebugInfo::ClearCaptureData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewDebugInfo::ClearCaptureData_::__l2::TSTR_CmdShouldCaptureNextFrame242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewDebugInfo::ClearCaptureData'::__l2::TSTR_CmdShouldCaptureNextFrame242>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// DisableLiveCapture @ 145763010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewDebugInfo::DisableLiveCapture(FViewDebugInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FViewDebugInfo *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewDebugInfo *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewDebugInfo::DisableLiveCapture'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewDebugInfo::DisableLiveCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewDebugInfo::DisableLiveCapture_::__l2::TSTR_CmdDisableLiveDebugCapture232>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewDebugInfo::DisableLiveCapture'::__l2::TSTR_CmdDisableLiveDebugCapture232>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// DumpDrawCallsToCSV @ 145764720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FViewDebugInfo::DumpDrawCallsToCSV(FViewDebugInfo *this)

{
  undefined1 *puVar1;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *pTVar2;
  code *pcVar3;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FDateTime this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  IFileManager *pIVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FPlatformRWLock *local_res20;
  FDiagnosticTableWriterCSV local_168;
  undefined2 local_150;
  FString local_148;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_138;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  ulonglong uVar17;
  
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,local_80);
  ::FString::PrintfImpl(&local_118,L"Primitives-%s.csv");
  pTVar9 = &FPaths::ProfilingDir(&local_90)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_138,pTVar9,0xc - (uint)(pTVar9->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_138,L"Primitives",10);
  uVar21 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar8 = iVar14;
  }
  if ((local_138.ArrayNum != 0) || (iVar6 = 1, iVar8 + 1 == 0)) {
    iVar6 = iVar14;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_128,&local_138,iVar6 + iVar8 + 1);
  ::FString::PathAppend
            ((FString *)&local_128,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar8);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_128.ArrayNum != 0) {
    FVar13.Data = local_128.AllocatorInstance.Data;
  }
  pIVar10 = IFileManager::Get();
  local_168.OutputStream =
       (FArchive *)(**(code **)((longlong)*pIVar10 + 0x28))(pIVar10,FVar13.Data,0);
  local_168.CurrentRow.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.CurrentRow.Data.ArrayNum = 0;
  local_168.CurrentRow.Data.ArrayMax = 0;
  local_150 = 0x100;
  ::FString::FString(&local_148,(wchar_t *)FVar13.Data);
  FDiagnosticTableWriterCSV::AddColumn(&local_168,L"Name");
  FDiagnosticTableWriterCSV::AddColumn(&local_168,L"NumDraws");
  if ((local_168.OutputStream == (FArchive *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x47,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FArchive::LogfImpl(local_168.OutputStream,L"%s");
  ::FString::Empty(&local_168.CurrentRow);
  local_res20 = &this->Lock;
  AcquireSRWLockShared((PSRWLOCK)local_res20);
  iVar8 = *(int *)&(this->Primitives).field_0x28;
  puVar1 = &(this->Primitives).field_0x10;
  pTVar2 = &this->Primitives;
  local_d8 = 0;
  uVar17 = uVar21;
  iStack_dc = iVar14;
  if (iVar8 != 0) {
    puVar20 = *(uint **)&(this->Primitives).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    uVar19 = uVar21;
    local_d8 = 0;
    while (uVar16 == 0) {
      iVar14 = (int)uVar17;
      local_d8 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)local_d8;
      uVar16 = iVar14 + 1;
      uVar17 = (ulonglong)uVar16;
      iStack_dc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar16) goto LAB_145764990;
      uVar16 = puVar20[(longlong)iVar14 + 1];
    }
    uVar7 = -uVar16 & uVar16;
    uVar19 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_dc = (local_d8 - 1) + local_res10;
    if (iVar8 < iStack_dc) {
      iStack_dc = iVar8;
    }
  }
LAB_145764990:
  uVar16 = *(uint *)&(this->Primitives).field_0x28;
  uStack_d4 = local_54;
  iStack_d0 = *(int *)&(this->Primitives).field_0x8 - *(int *)&(this->Primitives).field_0x34;
  uVar15 = uVar16 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  uStack_f0 = (undefined4)uVar17;
  TStack_c0._padding_ = CONCAT44(uVar7,uStack_f0);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = pTVar2;
  uStack_ec = uVar7;
  local_e8 = puVar1;
  local_c8 = pTVar2;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar8 < (int)uVar16)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)&(this->Primitives).field_0x28;
  if (uVar16 != uVar7) {
    puVar18 = *(undefined1 **)&(this->Primitives).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145764aa0;
      uVar16 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar16 = local_res18 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar16) {
      uVar16 = uVar7;
    }
  }
LAB_145764aa0:
  do {
    pTVar4 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar16) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == pTVar2))
    {
      ReleaseSRWLockShared((PSRWLOCK)local_res20);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      iVar8 = local_168.CurrentRow.Data.ArrayNum + -1;
      if (local_168.CurrentRow.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      if ((iVar8 != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CurrentRow.Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                             ,0x25,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_168.OutputStream != (FArchive *)0x0) {
        (**(code **)(*(longlong *)local_168.OutputStream + 0x210))();
        local_168.OutputStream = (FArchive *)0x0;
      }
      if (local_168.CurrentRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.CurrentRow.Data.AllocatorInstance.Data);
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      return;
    }
    lVar11 = *(longlong *)pTVar4 + (longlong)TStack_c0.CurrentBitIndex * 0x78;
    if (*(ulonglong *)(lVar11 + 0x28) != uVar21) {
      iVar8 = FPrimitiveInfo::ComputeCurrentLODIndex((FPrimitiveInfo *)(lVar11 + 8),0,0);
      if ((((-1 < iVar8) && (iVar8 < *(int *)(lVar11 + 0x48))) ||
          ((iVar8 = *(int *)(lVar11 + 0x68), -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x48))))) &&
         ((iVar8 < 0 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
          bVar5)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(lVar11 + 0x38) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(lVar11 + 0x30);
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_168,pwVar12);
      ::FString::PrintfImpl(&local_108,L"%d");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar13.Data = local_108.Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_168,(wchar_t *)FVar13.Data);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if ((local_168.OutputStream == (FArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputStream",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                             ,0x47,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FArchive::LogfImpl(local_168.OutputStream,L"%s");
      ::FString::Empty(&local_168.CurrentRow);
      uVar21 = *(ulonglong *)(lVar11 + 0x28);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// DumpToCSV @ 145764cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FViewDebugInfo::DumpToCSV(FViewDebugInfo *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *pTVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FDateTime this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  IFileManager *pIVar11;
  UObject *pUVar12;
  FString *pFVar13;
  longlong lVar14;
  byte bVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  bool bVar18;
  uint uVar19;
  FPrimitiveSceneInfo *pFVar20;
  uint uVar21;
  FPrimitiveInfo *this_01;
  uint uVar22;
  undefined1 *puVar24;
  FPrimitiveSceneInfo *pFVar25;
  int iVar26;
  uint *puVar27;
  ulonglong uVar28;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [4];
  int local_2e4;
  FDiagnosticTableWriterCSV local_2e0;
  undefined2 local_2c8;
  FString local_2c0;
  FPrimitiveSceneInfo *local_2b0;
  FString local_2a8;
  int local_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  uint local_288;
  uint uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *local_278;
  undefined8 uStack_270;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_248;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_238;
  int local_228;
  int local_224;
  FName local_220;
  FName local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FString local_138;
  FString local_128;
  FString local_118;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *local_108;
  undefined8 uStack_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined4 local_a4;
  undefined1 local_98 [96];
  ulonglong local_38;
  FPrimitiveSceneInfo *pFVar23;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  pFVar20 = (FPrimitiveSceneInfo *)0x0;
  local_2e4 = 0;
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_128);
  ::FString::PrintfImpl(&local_210,L"PrimitivesDetailed-%s.csv");
  pTVar10 = &FPaths::ProfilingDir(&local_138)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_248,pTVar10,0xc - (uint)(pTVar10->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_248,L"Primitives",10);
  iVar26 = local_210.Data.ArrayNum + -1;
  if (local_210.Data.ArrayNum == 0) {
    iVar26 = 0;
  }
  if ((local_248.ArrayNum != 0) || (iVar7 = 1, iVar26 + 1 == 0)) {
    iVar7 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_238,&local_248,iVar26 + 1 + iVar7);
  ::FString::PathAppend
            ((FString *)&local_238,(wchar_t *)local_210.Data.AllocatorInstance.Data,iVar26);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_238.ArrayNum != 0) {
    FVar17.Data = local_238.AllocatorInstance.Data;
  }
  pIVar11 = IFileManager::Get();
  local_2e0.OutputStream =
       (FArchive *)(**(code **)((longlong)*pIVar11 + 0x28))(pIVar11,FVar17.Data,0);
  local_2e0.CurrentRow.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.CurrentRow.Data.ArrayNum = 0;
  local_2e0.CurrentRow.Data.ArrayMax = 0;
  local_2c8 = 0x100;
  ::FString::FString(&local_2c0,(wchar_t *)FVar17.Data);
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"Name");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"ActorClass");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"Actor");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"Location");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"NumMaterials");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"Materials");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"NumDraws");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"LOD");
  FDiagnosticTableWriterCSV::AddColumn(&local_2e0,L"Triangles");
  if ((local_2e0.OutputStream == (FArchive *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x47,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::LogfImpl(local_2e0.OutputStream,L"%s");
  ::FString::Empty(&local_2e0.CurrentRow);
  AcquireSRWLockShared((PSRWLOCK)&this->Lock);
  uVar9 = *(uint *)&(this->Primitives).field_0x28;
  puVar1 = &(this->Primitives).field_0x10;
  local_278 = &this->Primitives;
  uVar8 = 1;
  local_258._0_4_ = 0;
  pFVar23 = pFVar20;
  uStack_260._4_4_ = (uint)local_258;
  if (uVar9 != 0) {
    puVar27 = *(uint **)&(this->Primitives).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar22 = *puVar27;
    pFVar25 = pFVar20;
    local_258._0_4_ = 0;
    while (uVar22 == 0) {
      iVar26 = (int)pFVar23;
      local_258._0_4_ = (int)pFVar25 + 0x20;
      pFVar25 = (FPrimitiveSceneInfo *)(ulonglong)(uint)local_258;
      uVar22 = iVar26 + 1;
      pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)uVar22;
      uStack_260._4_4_ = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
      goto LAB_145764ffd;
      uVar22 = puVar27[(longlong)iVar26 + 1];
    }
    uVar8 = -uVar22 & uVar22;
    uVar28 = (ulonglong)uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_228 = (int)lVar14;
    uStack_260._4_4_ = ((uint)local_258 - 1) + local_228;
    if ((int)uVar9 < (int)uStack_260._4_4_) {
      uStack_260._4_4_ = uVar9;
    }
  }
LAB_145764ffd:
  uVar22 = *(uint *)&(this->Primitives).field_0x28;
  bVar15 = (byte)uVar22 & 0x1f;
  iStack_250 = *(int *)&(this->Primitives).field_0x8 - *(int *)&(this->Primitives).field_0x34;
  uVar21 = uVar22 & 0xffffffe0;
  iVar26 = (int)uVar22 >> 5;
  uStack_294 = 1 << bVar15;
  uVar19 = -1 << bVar15;
  uStack_270 = CONCAT44(uVar8,(int)pFVar23);
  uStack_260._0_4_ = 0xffffffff;
  local_258._4_4_ = local_a4;
  TStack_168._padding_ = uStack_270;
  uStack_148 = CONCAT44(uStack_24c,iStack_250);
  TStack_168.UnvisitedBitMask = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_260._4_4_;
  TStack_168.BaseBitIndex = (uint)local_258;
  TStack_168._28_4_ = local_a4;
  local_2e4 = iVar26;
  local_298 = iVar26;
  pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_288 = uVar19;
  uStack_284 = uVar22;
  uStack_280 = uVar21;
  local_170 = local_278;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar22 < 0) || ((int)uVar9 < (int)uVar22)) &&
     (local_268 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = *(uint *)&(this->Primitives).field_0x28;
  if (uVar22 != uVar9) {
    puVar24 = *(undefined1 **)&(this->Primitives).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar1;
    }
    uVar19 = uVar19 & *(uint *)(puVar24 + (longlong)iVar26 * 4);
    while (uVar19 == 0) {
      uStack_280 = uVar21 + 0x20;
      local_298 = iVar26 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_298)
      goto LAB_145765148;
      uVar19 = *(uint *)(puVar24 + (longlong)iVar26 * 4 + 4);
      local_288 = 0xffffffff;
      uVar21 = uStack_280;
      iVar26 = local_298;
    }
    uStack_294 = -uVar19 & uVar19;
    uVar28 = (ulonglong)uStack_294 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_224 = (int)lVar14;
    uStack_284 = (uVar21 - 1) + local_224;
    if ((int)uVar9 < (int)uStack_284) {
LAB_145765148:
      uStack_284 = uVar9;
    }
  }
  uStack_270 = CONCAT44(uStack_294,local_298);
  local_278 = &this->Primitives;
  uStack_260 = CONCAT44(uStack_284,local_288);
  local_258 = CONCAT44(uStack_27c,uStack_280);
  iStack_250 = *(int *)&(this->Primitives).field_0x8 - *(int *)&(this->Primitives).field_0x34;
  local_268 = pTStack_290;
  uStack_e0 = CONCAT44(uStack_24c,iStack_250);
  local_f8 = pTStack_290;
  pFVar23 = pFVar20;
  local_108 = local_278;
  uStack_100 = uStack_270;
  uStack_f0 = uStack_260;
  local_e8 = local_258;
  do {
    pTVar3 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_2e8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2e8);
    }
    if (((TStack_168.CurrentBitIndex == uStack_f0._4_4_) && (TStack_168.Array == local_f8)) &&
       (pTVar3 == local_108)) {
      ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      iVar26 = local_2e0.CurrentRow.Data.ArrayNum + -1;
      if (local_2e0.CurrentRow.Data.ArrayNum == 0) {
        iVar26 = 0;
      }
      if ((iVar26 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CurrentRow.Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                             ,0x25,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_2e0.OutputStream != (FArchive *)0x0) {
        (**(code **)(*(longlong *)local_2e0.OutputStream + 0x210))();
        local_2e0.OutputStream = (FArchive *)0x0;
      }
      if (local_2e0.CurrentRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.CurrentRow.Data.AllocatorInstance.Data);
      }
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      return;
    }
    this_01 = (FPrimitiveInfo *)
              (*(longlong *)pTVar3 + 8 + (longlong)TStack_168.CurrentBitIndex * 0x78);
    if (this_01->PrimitiveSceneInfo != pFVar20) {
      uVar9 = FPrimitiveInfo::ComputeCurrentLODIndex(this_01,0,0);
      if (((-1 < (int)uVar9) && ((int)uVar9 < (this_01->Stats).LODStats.ArrayNum)) ||
         ((uVar9 = this_01->LODAtLastCapture, -1 < (int)uVar9 &&
          ((int)uVar9 < (this_01->Stats).LODStats.ArrayNum)))) {
        iVar26 = (this_01->Stats).LODStats.ArrayNum;
        uVar8 = 0;
        if ((int)uVar9 < iVar26) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_2f8 = (ulonglong)uVar9;
          local_2f0 = (longlong)iVar26;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      uVar9 = 0;
      if ((this_01->Name).Data.ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(this_01->Name).Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,pwVar16);
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
      if (bVar4) {
        pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 | 1);
        local_220 = *(FName *)(*(longlong *)&pUVar12->field_0x10 + 0x18);
        ::FName::ToString(&local_220,&local_200);
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_200.Data.ArrayNum != 0) {
          FVar17.Data = local_200.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar17.Data = (FScriptContainerElement *)L"";
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if ((((ulonglong)pFVar23 & 1) != 0) &&
         (pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 & 0xfffffffe),
         local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
      if (bVar4) {
        pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 | 2);
        pFVar13 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar12,&local_118,(UObject *)0x0,None);
        if ((pFVar13->Data).ArrayNum == 0) goto LAB_145765349;
        pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      else {
LAB_145765349:
        pwVar16 = L"";
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,pwVar16);
      if ((((ulonglong)pFVar23 & 2) != 0) &&
         (pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 & 0xfffffffd),
         local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
      bVar4 = false;
      if (this_01->ComponentInterface != (IPrimitiveComponent *)0x0) {
        bVar4 = bVar5;
      }
      if (bVar4 == false) {
LAB_14576544f:
        FVar17.Data = (FScriptContainerElement *)L"";
      }
      else {
        bVar5 = FWeakObjectPtr::IsValid(&(this_01->ComponentUObject).WeakPtr);
        if ((bool)(bVar5 & bVar4) == false) goto LAB_14576544f;
        cVar6 = (**(code **)((longlong)*this_01->ComponentInterface + 0x20))();
        bVar18 = false;
        if (cVar6 == '\0') {
          bVar18 = (bool)(bVar5 & bVar4);
        }
        if (bVar18 == false) goto LAB_14576544f;
        lVar14 = (**(code **)((longlong)*this_01->ComponentInterface + 0x70))
                           (this_01->ComponentInterface,local_98);
        local_d8 = *(undefined4 *)(lVar14 + 0x20);
        uStack_d4 = *(undefined4 *)(lVar14 + 0x24);
        uStack_d0 = *(undefined4 *)(lVar14 + 0x28);
        uStack_cc = *(undefined4 *)(lVar14 + 0x2c);
        local_2f8 = *(ulonglong *)(lVar14 + 0x30);
        local_c8 = local_2f8;
        ::FString::PrintfImpl(&local_1e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
        pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 | 0xc);
        ::FString::PrintfImpl(&local_1f0,L"{%s}");
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1f0.Data.ArrayNum != 0) {
          FVar17.Data = local_1f0.Data.AllocatorInstance.Data;
        }
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if ((((ulonglong)pFVar23 & 8) != 0) &&
         (pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 & 0xfffffff7),
         local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar23 & 4) != 0) &&
         (pFVar23 = (FPrimitiveSceneInfo *)(ulonglong)((uint)pFVar23 & 0xfffffffb),
         local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1d0,L"%d");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1d0.Data.ArrayNum != 0) {
        FVar17.Data = local_1d0.Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_2a8,"[");
      if (0 < (this_01->Materials).ArrayNum) {
        do {
          iVar26 = (this_01->Materials).ArrayNum;
          uVar8 = 0;
          if ((int)uVar9 < iVar26) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_2f8 = (ulonglong)(int)uVar9;
            local_2f0 = (longlong)iVar26;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar28 = (ulonglong)(int)uVar9;
          bVar4 = FWeakObjectPtr::IsValid
                            ((FWeakObjectPtr *)
                             ((this_01->Materials).AllocatorInstance.Data + uVar28 * 8));
          if (bVar4) {
            iVar26 = (this_01->Materials).ArrayNum;
            uVar8 = 0;
            if ((int)uVar9 < iVar26) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_2f8 = uVar28, local_2f0 = (longlong)iVar26,
               bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((this_01->Materials).AllocatorInstance.Data + uVar28 * 8)
                                         );
            lVar14 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
            if (lVar14 == 0) goto LAB_145765665;
            iVar26 = (this_01->Materials).ArrayNum;
            uVar8 = 0;
            if ((int)uVar9 < iVar26) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_2f8 = uVar28, local_2f0 = (longlong)iVar26,
               bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((this_01->Materials).AllocatorInstance.Data +
                                          (longlong)(int)uVar9 * 8));
            lVar14 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
            local_218 = *(FName *)(lVar14 + 0x18);
            ::FName::ToString(&local_218,&local_1c0);
            iVar26 = local_1c0.Data.ArrayNum + -1;
            if (local_1c0.Data.ArrayNum == 0) {
              iVar26 = 0;
            }
            ::FString::AppendChars
                      (&local_2a8,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,iVar26);
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
            }
          }
          else {
LAB_145765665:
            ::FString::AppendChars(&local_2a8,"Null",4);
          }
          if ((int)uVar9 < (this_01->Materials).ArrayNum + -1) {
            ::FString::AppendChars(&local_2a8,", ",2);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (this_01->Materials).ArrayNum);
      }
      ::FString::AppendChars(&local_2a8,"]",1);
      ::FString::PrintfImpl(&local_1b0,L"%s");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1b0.Data.ArrayNum != 0) {
        FVar17.Data = local_1b0.Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1a0,L"%d");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1a0.Data.ArrayNum != 0) {
        FVar17.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_190,L"%d");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_190.Data.ArrayNum != 0) {
        FVar17.Data = local_190.Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_180,L"%u");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_180.Data.ArrayNum != 0) {
        FVar17.Data = local_180.Data.AllocatorInstance.Data;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_2e0,(wchar_t *)FVar17.Data);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if ((local_2e0.OutputStream == (FArchive *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputStream",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                             ,0x47,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FArchive::LogfImpl(local_2e0.OutputStream,L"%s");
      ::FString::Empty(&local_2e0.CurrentRow);
      pFVar20 = this_01->PrimitiveSceneInfo;
      local_2b0 = pFVar20;
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        pFVar20 = local_2b0;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// EnableLiveCapture @ 145765960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewDebugInfo::EnableLiveCapture(FViewDebugInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FViewDebugInfo *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewDebugInfo *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewDebugInfo::EnableLiveCapture'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewDebugInfo::EnableLiveCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewDebugInfo::EnableLiveCapture_::__l2::TSTR_CmdEnableLiveDebugCapture222>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewDebugInfo::EnableLiveCapture'::__l2::TSTR_CmdEnableLiveDebugCapture222>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// HasEverUpdated @ 14577a860

bool __thiscall FViewDebugInfo::HasEverUpdated(FViewDebugInfo *this)

{
  bool bVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->Lock);
  bVar1 = this->bHasEverUpdated;
  ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
  return bVar1;
}

// IsOutOfDate @ 145780ad0

bool __thiscall FViewDebugInfo::IsOutOfDate(FViewDebugInfo *this)

{
  bool bVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->Lock);
  bVar1 = this->bIsOutdated;
  ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
  return bVar1;
}

// ProcessPrimitive @ 1457833e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FViewDebugInfo::ProcessPrimitive
          (FViewDebugInfo *this,FPrimitiveSceneInfo *param_1,FViewInfo *param_2,FScene *param_3,
          IPrimitiveComponent *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  UMeshComponent *this_00;
  UClass *pUVar8;
  FPrimitiveInfo *pFVar9;
  UMaterialInterface *pUVar10;
  uint uVar11;
  UMaterialInterface *pUVar12;
  UMaterialInterface *pUVar13;
  ForAnyElementType local_128;
  undefined8 local_120;
  FWeakObjectPtr local_118;
  FPrimitiveLODStats *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  FWeakObjectPtr local_e8;
  uint local_e0;
  IPrimitiveComponent *local_d8;
  FWeakObjectPtr local_d0;
  FPrimitiveSceneInfo *local_c8;
  void *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  FPrimitiveLODStats *local_b0;
  int local_a8;
  undefined4 local_a4;
  FWeakObjectPtr *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  FWeakObjectPtr local_90;
  undefined4 local_88;
  TPairInitializer<FPrimitiveComponentId_const_&,FViewDebugInfo::FPrimitiveInfo_const_&> local_78;
  UObject *local_68;
  UObject *local_60;
  UMaterialInterface *local_58;
  FPrimitiveComponentId *local_50;
  FWeakObjectPtr *local_48;
  
  if (((((param_4 != (IPrimitiveComponent *)0x0) &&
        (cVar2 = (**(code **)((longlong)*param_4 + 0x18))(param_4), cVar2 != '\0')) &&
       (param_1 != (FPrimitiveSceneInfo *)0x0)) &&
      ((param_1->Proxy != (FPrimitiveSceneProxy *)0x0 &&
       (pUVar7 = (UObject *)(**(code **)((longlong)*param_4 + 0xa8))(param_4),
       pUVar7 != (UObject *)0x0)))) && ((*(uint *)&pUVar7->field_0x8 >> 0x1e & 1) == 0)) {
    (**(code **)((longlong)*param_4 + 0x60))(param_4,&local_100);
    pUVar12 = (UMaterialInterface *)0x0;
    local_110 = (FPrimitiveLODStats *)0x0;
    local_108 = 0;
    (**(code **)((longlong)*param_4 + 0x88))(param_4,&local_110);
    local_128.Data = (FScriptContainerElement *)0x0;
    pUVar13 = (UMaterialInterface *)0x0;
    local_120 = 0;
    uVar4 = (**(code **)(param_1->Proxy->_padding_ + 0x20))(param_1->Proxy,param_2);
    this_00 = (UMeshComponent *)(**(code **)((longlong)*param_4 + 0x98))(param_4);
    pUVar10 = pUVar12;
    if (this_00 != (UMeshComponent *)0x0) {
      pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar6 = (int)pUVar8->_padding_;
      pUVar10 = pUVar13;
      if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar8->_padding_)) {
        uVar5 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if (local_120._4_4_ < (int)uVar5) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar5,&local_128,(int)local_120,(int *)((longlong)&local_120 + 4));
        }
        pUVar10 = pUVar12;
        if (0 < (int)uVar5) {
          do {
            pFVar9 = (FPrimitiveInfo *)(**(code **)(this_00->_padding_ + 0x690))(this_00,pUVar10);
            if (pFVar9 != (FPrimitiveInfo *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pFVar9);
              }
              local_118.ObjectIndex = 0;
              local_118.ObjectSerialNumber = 0;
              local_78.Value = pFVar9;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pFVar9);
              }
              FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_78.Value);
              if (((local_128.Data <= &local_118) &&
                  (&local_118 < (FWeakObjectPtr *)(local_128.Data + (longlong)local_120._4_4_ * 8)))
                 && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar6 = (int)local_120;
              if ((int)local_120 == local_120._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_128,(int *)((longlong)&local_120 + 4));
              }
              local_120 = CONCAT44(local_120._4_4_,iVar6 + 1);
              *(FWeakObjectPtr *)(local_128.Data + (longlong)iVar6 * 8) = local_118;
            }
            uVar11 = (int)pUVar10 + 1;
            pUVar10 = (UMaterialInterface *)(ulonglong)uVar11;
          } while ((int)uVar11 < (int)uVar5);
        }
        pUVar8 = Z_Construct_UClass_UMeshComponent_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        pUVar10 = pUVar12;
        if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
           (pUVar10 = pUVar13,
           (longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
           &pUVar8->_padding_)) {
          pUVar10 = UMeshComponent::GetOverlayMaterial(this_00);
          pUVar8 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar8->_padding_)) {
            uVar4 = (**(code **)(*(longlong *)this_00[1]._padding_ + 0xa0))();
          }
        }
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    local_68 = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_68);
    local_e0 = (param_1->PrimitiveComponentId).PrimIDValue;
    local_d8 = param_4;
    local_60 = (UObject *)(**(code **)((longlong)*param_4 + 0x98))(param_4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_60);
    }
    local_d0.ObjectIndex = 0;
    local_d0.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_60);
    }
    FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_60);
    local_c0 = local_100;
    local_b8 = (undefined4)local_f8;
    local_b4 = local_f8._4_4_;
    local_b0 = local_110;
    local_a8 = (int)local_108;
    local_a4 = local_108._4_4_;
    local_a0 = (FWeakObjectPtr *)local_128.Data;
    local_98 = (int)local_120;
    local_94 = local_120._4_4_;
    local_100 = (void *)0x0;
    local_f8 = 0;
    local_110 = (FPrimitiveLODStats *)0x0;
    local_108 = 0;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    local_c8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    local_90.ObjectIndex = 0;
    local_90.ObjectSerialNumber = 0;
    local_58 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    FWeakObjectPtr::operator=(&local_90,(FObjectPtr)&local_58);
    local_48 = &local_e8;
    local_88 = uVar4;
    local_50 = &param_1->PrimitiveComponentId;
    TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FViewDebugInfo::FPrimitiveInfo_const_&>_>
              ((TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
                *)&this->Primitives,&local_78,(bool *)&local_50);
    if (local_a0 != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_a0);
    }
    DestructItems<FPrimitiveLODStats,int>(local_b0,local_a8);
    if (local_b0 != (FPrimitiveLODStats *)0x0) {
      FMemory::Free(local_b0);
    }
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    DestructItems<FPrimitiveLODStats,int>(local_110,(int)local_108);
    if (local_110 != (FPrimitiveLODStats *)0x0) {
      FMemory::Free(local_110);
    }
    if (local_100 != (void *)0x0) {
      FMemory::Free(local_100);
    }
  }
  return;
}

// ProcessPrimitives @ 145783920

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FViewDebugInfo::ProcessPrimitives
          (FViewDebugInfo *this,FScene *param_1,FViewInfo *param_2,FViewCommands *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FPrimitiveSceneInfo *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  IPrimitiveComponent *pIVar8;
  longlong lVar9;
  int iVar10;
  TMap<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>_>
  *pTVar11;
  int iVar12;
  uint uVar13;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar14;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  uint uVar16;
  code *local_68 [2];
  undefined **local_58;
  FViewDebugInfo *local_50;
  undefined8 local_40;
  
  if (bDumpPrimitiveDrawCallsNextFrame) {
    bDumpPrimitiveDrawCallsNextFrame = false;
    DumpDrawCallsToCSV(this);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  iVar12 = 0;
  this->bIsOutdated = true;
  pTVar11 = &this->Primitives;
  if (this->bShouldClearCapturedData != false) {
    bVar5 = 1 < *(int *)&(this->Primitives).field_0x48;
    if (!bVar5) {
      TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
                        *)pTVar11);
    }
    TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar11,0,*(int *)&(this->Primitives).field_0x8);
    puVar1 = &(this->Primitives).field_0xc;
    *(undefined4 *)&(this->Primitives).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)pTVar11,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Primitives).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Primitives).field_0x34 = 0;
    iVar3 = *(int *)&(this->Primitives).field_0x2c;
    *(undefined4 *)&(this->Primitives).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->Primitives).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Primitives).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->Primitives).field_0x48 = 1;
      TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
                *)pTVar11);
    }
    this->bShouldClearCapturedData = false;
  }
  if ((this->bShouldUpdate == false) && (bDumpDetailedPrimitivesNextFrame == false)) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  else {
    if (this->bShouldCaptureSingleFrame != false) {
      this->bShouldUpdate = false;
      this->bShouldCaptureSingleFrame = false;
    }
    pTVar11 = &this->Primitives;
    bVar5 = 1 < *(int *)&(this->Primitives).field_0x48;
    if (!bVar5) {
      TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
                        *)pTVar11);
    }
    TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar11,0,*(int *)&(this->Primitives).field_0x8);
    puVar1 = &(this->Primitives).field_0xc;
    *(undefined4 *)&(this->Primitives).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)pTVar11,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Primitives).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Primitives).field_0x34 = 0;
    iVar3 = *(int *)&(this->Primitives).field_0x2c;
    *(undefined4 *)&(this->Primitives).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->Primitives).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Primitives).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->Primitives).field_0x48 = 1;
      TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo,0>,FDefaultSetAllocator>
                *)pTVar11);
    }
    iVar3 = (param_2->PrimitiveVisibilityMap).NumBits;
    if (iVar3 != 0) {
      pTVar14 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)(param_2->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
      if (pTVar14 ==
          (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar14 = &param_2->PrimitiveVisibilityMap;
      }
      uVar6 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      iVar10 = iVar12;
      while (uVar6 == 0) {
        lVar9 = (longlong)iVar10;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar10 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145783c5f;
        uVar6 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar6 = -uVar6 & uVar6;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar13 = iVar12 + -1 + (int)lVar9;
      if ((int)uVar13 < iVar3) {
        uVar16 = 0xffffffff;
        do {
          uVar7 = 0;
          if ((int)uVar13 < (param_1->Primitives).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = *(FPrimitiveSceneInfo **)
                     ((param_1->Primitives).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
          pIVar8 = FPrimitiveSceneInfo::GetComponentInterfaceForDebugOnly(this_00);
          ProcessPrimitive(this,this_00,param_2,param_1,pIVar8);
          pTVar14 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)(param_2->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
          iVar3 = (param_2->PrimitiveVisibilityMap).NumBits;
          uVar16 = ~uVar6 & uVar16;
          pTVar15 = &param_2->PrimitiveVisibilityMap;
          if (pTVar14 !=
              (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0) {
            pTVar15 = pTVar14;
          }
          uVar6 = uVar16 & *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar10 * 4)
          ;
          while (uVar6 == 0) {
            lVar9 = (longlong)iVar10;
            iVar12 = iVar12 + 0x20;
            iVar10 = iVar10 + 1;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145783c5f;
            uVar16 = 0xffffffff;
            uVar6 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar6 = -uVar6 & uVar6;
          uVar2 = (ulonglong)uVar6 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar13 = (int)lVar9 + -1 + iVar12;
        } while (((int)uVar13 <= iVar3) && ((int)uVar13 < iVar3));
      }
    }
LAB_145783c5f:
    this->bHasEverUpdated = true;
    this->bIsOutdated = false;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
    local_40 = 0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FViewDebugInfo::ProcessPrimitives'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FViewDebugInfo::ProcessPrimitives'::__l2::<lambda_1>,void>::
                  Call;
    local_50 = this;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_68);
    if (bDumpDetailedPrimitivesNextFrame != false) {
      DumpToCSV(this);
      bDumpDetailedPrimitivesNextFrame = false;
    }
  }
  return;
}

