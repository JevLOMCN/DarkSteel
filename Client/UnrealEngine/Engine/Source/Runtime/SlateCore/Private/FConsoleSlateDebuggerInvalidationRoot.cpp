// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// FConsoleSlateDebuggerInvalidationRoot @ 142429920

FConsoleSlateDebuggerInvalidationRoot * __thiscall
FConsoleSlateDebuggerInvalidationRoot::FConsoleSlateDebuggerInvalidationRoot
          (FConsoleSlateDebuggerInvalidationRoot *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FColor_u_0 local_res8 [2];
  undefined1 local_258 [8];
  FDelegateAllocation local_250;
  undefined1 local_240 [8];
  FDelegateAllocation local_238;
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  undefined1 local_210 [8];
  FDelegateAllocation local_208;
  undefined1 local_1f8 [8];
  FDelegateAllocation local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  fVar3 = __real_3b808081;
  this->bEnabled = false;
  this->bEnabledCVarValue = false;
  this->bDisplayInvalidationRootList = true;
  this->bUseWidgetPathAsName = false;
  this->bShowLegend = false;
  this->bShowQuad = true;
  (this->DrawSlowPathColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.R];
  (this->DrawSlowPathColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.G];
  (this->DrawSlowPathColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.B];
  (this->DrawSlowPathColor).field0_0x0._s_0.A = (float)FColorList::Red.field0_0x0._3_1_ * fVar3;
  (this->DrawFastPathColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.R];
  (this->DrawFastPathColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.G];
  (this->DrawFastPathColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.B];
  (this->DrawFastPathColor).field0_0x0._s_0.A = (float)FColorList::Green.field0_0x0._3_1_ * fVar3;
  (this->DrawNoneColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.R];
  (this->DrawNoneColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.G];
  (this->DrawNoneColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.B];
  uVar5 = (uint)FColorList::Blue.field0_0x0._s_0.A;
  this->MaxNumberOfWidgetInList = 0x14;
  this->CacheDuration = 2.0;
  local_258 = (undefined1  [8])0x0;
  local_250.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_250.DelegateSize = 0;
  (this->DrawNoneColor).field0_0x0._s_0.A = (float)uVar5 * fVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_250;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_250);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = StartDebugging;
    puVar6[3] = this;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StartCommand,L"SlateDebugger.InvalidationRoot.Start",
             L"Start the Invalidation Root widget debug tool. It shows when Invalidation Roots are using the slow or the fast path."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_258,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
             (FWriteAccessScope *)&local_150);
  if ((local_250.DelegateSize != 0) &&
     (local_250.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_250.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_250,0,0,0x10);
    local_250.DelegateSize = 0;
  }
  if (local_150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
  }
  if (local_250.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_250.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_258);
  local_240 = (undefined1  [8])0x0;
  local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_238.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_240,
             (FWriteAccessScope *)&local_b8);
  local_a0 = &local_238;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_238);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = StopDebugging;
    puVar6[3] = this;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StopCommand,L"SlateDebugger.InvalidationRoot.Stop",
             L"Stop the Invalidation Root widget debug tool.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_240,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_240,
             (FWriteAccessScope *)&local_138);
  if ((local_238.DelegateSize != 0) &&
     (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_238.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_238,0,0,0x10);
    local_238.DelegateSize = 0;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_238.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_240);
  local_228 = (undefined1  [8])0x0;
  local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_220.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
             (FWriteAccessScope *)&local_98);
  local_80 = &local_220;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_220);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = HandleEnabled;
    puVar6[3] = this;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnabledRefCVar,L"SlateDebugger.InvalidationRoot.Enable",&this->bEnabledCVarValue
             ,
             L"Start/Stop the Invalidation Root widget debug tool. It shows when Invalidation Roots are using the slow or the fast path."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_228,0)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
             (FWriteAccessScope *)&local_120);
  if ((local_220.DelegateSize != 0) &&
     (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_220.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_220,0,0,0x10);
    local_220.DelegateSize = 0;
  }
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_220.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_228);
  local_210 = (undefined1  [8])0x0;
  local_208.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_208.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_208;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_208);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = ToggleLegend;
    puVar6[3] = this;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToggleLegendCommand,L"SlateDebugger.InvalidationRoot.ToggleLegend",
             L"Option to display the color legend.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_210,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
             (FWriteAccessScope *)&local_108);
  if ((local_208.DelegateSize != 0) &&
     (local_208.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_208.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_208,0,0,0x10);
    local_208.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_208.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_208.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_210);
  local_1f8 = (undefined1  [8])0x0;
  local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_1f0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_1f0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = ToggleWidgetNameList;
    puVar6[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToogleWidgetsNameListCommand,
             L"SlateDebugger.InvalidationRoot.ToggleWidgetNameList",
             L"Option to display the name of the Invalidation Root.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f8,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (FWriteAccessScope *)&local_f0);
  if ((local_1f0.DelegateSize != 0) &&
     (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1f0,0,0,0x10);
    local_1f0.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f8);
  *(undefined8 *)&this->InvaliadatedRoots = 0;
  pwVar9 = L"";
  *(undefined8 *)&(this->InvaliadatedRoots).field_0x8 = 0;
  *(undefined8 *)&(this->InvaliadatedRoots).field_0x20 = 0;
  pwVar8 = L"";
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x28 = 0;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x2c = 0x80;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x34 = 0;
  *(undefined8 *)&(this->InvaliadatedRoots).field_0x40 = 0;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x48 = 0;
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_1e0,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bDisplayInvalidationRootList",
             &this->bDisplayInvalidationRootList,&local_1e0);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1d0,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bUseWidgetPathAsName",
             &this->bUseWidgetPathAsName,&local_1d0);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1c0,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bShowLegend",&this->bShowLegend,&local_1c0)
  ;
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1b0,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bShowQuad",&this->bShowQuad,&local_1b0);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1a0,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.InvalidationRoot",L"DrawSlowPathColor",
                     (FColor *)&local_res8[0]._s_0,&local_1a0);
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawSlowPathColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawSlowPathColor).field0_0x0._s_0.G = fVar1;
    (this->DrawSlowPathColor).field0_0x0._s_0.B = fVar2;
    (this->DrawSlowPathColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_190,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.InvalidationRoot",L"DrawFastPathColor",
                     (FColor *)&local_res8[0]._s_0,&local_190);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawFastPathColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawFastPathColor).field0_0x0._s_0.G = fVar1;
    (this->DrawFastPathColor).field0_0x0._s_0.B = fVar2;
    (this->DrawFastPathColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_180,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.InvalidationRoot",L"DrawNoneColor",
                     (FColor *)&local_res8[0]._s_0,&local_180);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawNoneColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawNoneColor).field0_0x0._s_0.G = fVar1;
    (this->DrawNoneColor).field0_0x0._s_0.B = fVar2;
    (this->DrawNoneColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_170,pwVar8);
  FConfigCacheIni::GetInt
            (GConfig,L"SlateDebugger.InvalidationRoot",L"MaxNumberOfWidgetInList",
             &this->MaxNumberOfWidgetInList,&local_170);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar9 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_160,pwVar9);
  FConfigCacheIni::GetFloat
            (GConfig,L"SlateDebugger.InvalidationRoot",L"CacheDuration",&this->CacheDuration,
             &local_160);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FConsoleSlateDebuggerInvalidationRoot @ 14242e8d0

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::~FConsoleSlateDebuggerInvalidationRoot
          (FConsoleSlateDebuggerInvalidationRoot *this)

{
  void *pvVar1;
  
  StopDebugging(this);
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InvaliadatedRoots).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InvaliadatedRoots);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ToogleWidgetsNameListCommand)
  ;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ToggleLegendCommand);
  *(undefined ***)&(this->EnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnabledRefCVar);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StopCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StartCommand);
  return;
}

// operator() @ 14242fa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,TVector2<float> *param_2,FLinearColor *param_3)

{
  float fVar1;
  byte bVar2;
  FSlateFontInfo *pFVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_108 [32];
  float local_c8;
  float fStack_c4;
  TTransform2<float> local_b0;
  TTransform2<float> local_98;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = *(FSlateFontInfo **)((longlong)this + 0x18);
  local_b0.Trans.field0_0x0 =
       (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_2->field0_0x0)._s_0;
  lVar4 = *(longlong *)((longlong)this + 0x10);
  fVar1 = *(float *)(lVar4 + 8);
  local_c8 = local_b0.Trans.field0_0x0._0_4_;
  bVar2 = *(byte *)(lVar4 + 0x34);
  fStack_c4 = local_b0.Trans.field0_0x0._4_4_;
  local_b0.M.M[0][1] = (float)*(undefined8 *)(lVar4 + 0xc);
  local_b0.M.M[1][0] = (float)((ulonglong)*(undefined8 *)(lVar4 + 0xc) >> 0x20);
  fVar5 = fVar1 * local_c8 + local_b0.M.M[0][1];
  fVar6 = fVar1 * fStack_c4 + local_b0.M.M[1][0];
  local_b0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_b0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_b0.M.M[1][0] = (float)_UNK_15076b188;
  local_b0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_98,&local_b0,(TTransform2<float> *)(lVar4 + 0x1c));
  local_80._s_0.Y = fVar6;
  local_80._s_0.X = fVar5;
  local_6c = 0x3f8000003f800000;
  local_4c = (bVar2 & 1) * '\x02' | local_4c & 0xfc;
  local_74 = 0;
  local_64[0] = local_98.M.M[0][0];
  local_64[1] = local_98.M.M[0][1];
  afStack_5c[0] = local_98.M.M[1][0];
  afStack_5c[1] = local_98.M.M[1][1];
  local_54 = local_98.Trans.field0_0x0;
  local_78 = fVar1;
  FSlateDrawElement::MakeText
            (*(FSlateWindowElementList **)this,**(uint **)((longlong)this + 8),
             (FPaintGeometry *)&local_80._s_0,param_1,pFVar3,None,param_3);
  return;
}

// GetColor @ 14243e9c0

FLinearColor * __thiscall
FConsoleSlateDebuggerInvalidationRoot::GetColor
          (FConsoleSlateDebuggerInvalidationRoot *this,ESlateInvalidationPaintType param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  
  if (param_1 == None) {
    return &this->DrawNoneColor;
  }
  if (param_1 == Slow) {
    return &this->DrawSlowPathColor;
  }
  if (param_1 == Fast) {
    return &this->DrawFastPathColor;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerInvalidationRoot.cpp"
                     ,0x9d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLinearColor *)(*pcVar1)();
    return pFVar3;
  }
  return &FLinearColor::Black;
}

// HandleEnabled @ 1424400c0

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::HandleEnabled
          (FConsoleSlateDebuggerInvalidationRoot *this,IConsoleVariable *param_1)

{
  undefined1 *puVar1;
  TMap<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->bEnabledCVarValue == false) {
    StopDebugging(this);
    return;
  }
  if (this->bEnabled != false) {
    this->bEnabledCVarValue = this->bEnabled;
    return;
  }
  this_00 = &this->InvaliadatedRoots;
  this->bEnabled = true;
  bVar3 = 1 < *(int *)&(this->InvaliadatedRoots).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->InvaliadatedRoots).field_0xc;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x34 = 0;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->InvaliadatedRoots).field_0x2c;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InvaliadatedRoots).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InvaliadatedRoots).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->InvaliadatedRoots).field_0x48 = 1;
    TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerInvalidationRoot>
            ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::PaintDebugElements,
             (FConsoleSlateDebuggerInvalidationRoot *)&stack0x00000008,(pmf_7bc18fb7)this);
  this->bEnabledCVarValue = this->bEnabled;
  return;
}

// HandlePaintDebugInfo @ 142441ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo
          (FConsoleSlateDebuggerInvalidationRoot *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  TMap<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>_>
  *this_00;
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  ESlateInvalidationPaintType EVar4;
  code *pcVar5;
  undefined1 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  FDeprecateSlateVector2D FVar9;
  byte bVar10;
  TVector2<float>_u_0 TVar11;
  atomic<int> aVar12;
  longlong *plVar13;
  float fVar14;
  float _X;
  float fVar15;
  float fVar16;
  float fVar17;
  FSlateWindowElementList *pFVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  atomic<int> aVar23;
  SWindow *pSVar24;
  ISlateStyle *pIVar25;
  FName *pFVar26;
  FSlateApplicationBase *pFVar27;
  uint *puVar28;
  FSlateInvalidationRootList *pFVar29;
  FLinearColor *pFVar30;
  FInvalidatedInfo *pFVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 *puVar34;
  ForAnyElementType FVar35;
  int iVar36;
  longlong *plVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStackY_418 [32];
  undefined1 local_3d8 [4];
  undefined8 local_3d4;
  FLinearColor_u_0 local_3c8;
  TVector2<float>_u_0 local_3b8;
  TVector2<float>_u_0 local_3b0;
  TVector2<float>_u_0 local_3a8;
  TVector2<float>_u_0 local_3a0;
  FSlateInvalidationRootList *local_398;
  float local_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float local_380;
  float fStack_37c;
  uint *local_378;
  FSlateWindowElementList *local_370;
  TVector2<float>_u_0 local_368;
  FSlateInvalidationRootList *local_360;
  ESlateInvalidationPaintType EStack_358;
  uint uStack_354;
  undefined8 local_350;
  undefined4 uStack_348;
  uint uStack_344;
  undefined8 local_340;
  int iStack_338;
  undefined4 uStack_334;
  FLinearColor_u_0 local_330;
  FLinearColor_u_0 local_318;
  FSlateWindowElementList *local_308;
  int *local_300;
  FGeometry *local_2f8;
  FSlateFontInfo *local_2f0;
  int local_2e8;
  int local_2e4;
  TPairInitializer<int_const_&,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo_const_&>
  local_2e0;
  FString local_2d0;
  FSlateInvalidationRootList *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  FString local_290;
  FString local_280;
  FString local_270;
  uint *local_260;
  FSlateInvalidationRootList **local_258;
  FString local_250;
  FString local_240;
  FString local_230;
  TTransform2<float> local_220;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  TVector2<float>_u_0 local_1f4;
  TTransform2<float> local_1ec;
  FName local_1d0;
  FString local_1c8;
  TTransform2<float> local_1b8;
  FName local_1a0;
  FSlateFontInfo local_198;
  undefined4 local_11c;
  TVector2<float>_u_0 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_418;
  *param_4 = *param_4 + 1;
  local_378 = (uint *)param_4;
  local_370 = param_3;
  pSVar24 = FSlateWindowElementList::GetPaintWindow(param_3);
  iVar42 = 0;
  if (pSVar24 == (SWindow *)0x0) {
    local_398 = (FSlateInvalidationRootList *)0x0;
  }
  else {
    local_398 = (FSlateInvalidationRootList *)pSVar24->_padding_;
  }
  pIVar25 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar25 + 0x50);
  pFVar26 = ::FName::FName(&local_1d0,L"FocusRectangle");
  local_2e0.Value = (FInvalidatedInfo *)(*pcVar5)(pIVar25,*pFVar26,0,0);
  pIVar25 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar25 + 0x88);
  pFVar26 = ::FName::FName(&local_1a0,"SmallFont");
  (*pcVar5)(pIVar25,&local_198,*pFVar26,0);
  uVar21 = 1;
  fVar50 = this->CacheDuration;
  if (this->CacheDuration <= __real_3c23d70a) {
    fVar50 = __real_3c23d70a;
  }
  local_198.OutlineSettings.OutlineSize = 1;
  this->CacheDuration = fVar50;
  pFVar27 = FSlateApplicationBase::Get();
  dVar45 = (double)(**(code **)(*(longlong *)pFVar27 + 0x60))(pFVar27);
  local_2f0 = &local_198;
  local_300 = param_4;
  fVar50 = __real_42400000;
  local_308 = param_3;
  local_2f8 = param_2;
  if (this->bShowLegend != false) {
    local_3b0._s_0.X = 10.0;
    local_3b0._s_0.Y = 10.0;
    ::FString::FString(&local_290,L"Slow Path");
    `FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_308,&local_290,(TVector2<float> *)&local_3b0._s_0,&this->DrawSlowPathColor);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    local_3a8._s_0.X = 10.0;
    local_3a8._s_0.Y = 22.0;
    ::FString::FString(&local_280,L"Fast Path");
    `FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_308,&local_280,(TVector2<float> *)&local_3a8._s_0,&this->DrawFastPathColor);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    local_3a0._s_0.X = 10.0;
    local_3a0._s_0.Y = 34.0;
    ::FString::FString(&local_270,L"No Paint occurred");
    `FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_308,&local_270,(TVector2<float> *)&local_3a0._s_0,&this->DrawNoneColor);
    fVar50 = __real_42a80000;
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
      fVar50 = __real_42a80000;
    }
  }
  EStack_358 = None;
  local_340._0_4_ = 0;
  uVar22 = GSlateInvalidationRootListInstance.InvalidationRoots._40_4_;
  uStack_344 = 0;
  if (uVar22 != 0) {
    puVar41 = (uint *)&GSlateInvalidationRootListInstance.InvalidationRoots.field_0x10;
    if (GSlateInvalidationRootListInstance.InvalidationRoots._32_8_ != 0) {
      puVar41 = (uint *)GSlateInvalidationRootListInstance.InvalidationRoots._32_8_;
    }
    uVar39 = *puVar41;
    local_340._0_4_ = 0;
    while (uVar39 == 0) {
      lVar32 = (longlong)(int)EStack_358;
      local_340._0_4_ = (int)local_340 + 0x20;
      EStack_358 = EStack_358 + Slow;
      uStack_344 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)EStack_358)
      goto LAB_142441dcd;
      uVar39 = puVar41[lVar32 + 1];
    }
    uVar21 = -uVar39 & uVar39;
    uVar1 = (ulonglong)uVar21 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_2e8 = (int)lVar32;
    uStack_344 = (int)local_340 + -1 + local_2e8;
    if ((int)uVar22 < (int)uStack_344) {
      uStack_344 = uVar22;
    }
  }
LAB_142441dcd:
  local_360 = &GSlateInvalidationRootListInstance;
  bVar10 = GSlateInvalidationRootListInstance.InvalidationRoots._40_1_;
  uVar39 = uVar22 & 0xffffffe0;
  iStack_338 = GSlateInvalidationRootListInstance.InvalidationRoots._8_4_ -
               GSlateInvalidationRootListInstance.InvalidationRoots._52_4_;
  uStack_348 = 0xffffffff;
  TStack_2b8._padding_ = CONCAT44(uVar21,EStack_358);
  local_350 = 0x154ba6170;
  TStack_2b8.CurrentBitIndex = uStack_344;
  TStack_2b8.UnvisitedBitMask = 0xffffffff;
  local_340._4_4_ = local_11c;
  local_2c0 = &GSlateInvalidationRootListInstance;
  iVar36 = (int)uVar22 >> 5;
  uStack_298 = CONCAT44(uStack_334,iStack_338);
  TStack_2b8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &GSlateInvalidationRootListInstance.InvalidationRoots.field_0x10;
  TStack_2b8.BaseBitIndex = (int)local_340;
  TStack_2b8._28_4_ = local_11c;
  uVar40 = uVar22;
  uStack_354 = uVar21;
  if ((int)uVar22 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar40 = GSlateInvalidationRootListInstance.InvalidationRoots._40_4_;
  }
  fVar17 = __real_c1200000;
  fVar16 = __real_3f4ccccd;
  fVar15 = __real_41400000;
  _X = __real_40000000;
  fVar14 = __real_3f800000;
  fVar44 = __real_3dcccccd;
  if (uVar22 != uVar40) {
    lVar32 = 0x154ba6170;
    if (GSlateInvalidationRootListInstance.InvalidationRoots._32_8_ != 0) {
      lVar32 = GSlateInvalidationRootListInstance.InvalidationRoots._32_8_;
    }
    uVar21 = -1 << (bVar10 & 0x1f) & *(uint *)(lVar32 + (longlong)iVar36 * 4);
    while (uVar21 == 0) {
      lVar33 = (longlong)iVar36;
      uVar39 = uVar39 + 0x20;
      iVar36 = iVar36 + 1;
      uVar22 = uVar40;
      if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
      goto LAB_142441f20;
      uVar21 = *(uint *)(lVar32 + 4 + lVar33 * 4);
    }
    uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar32 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_2e4 = (int)lVar32;
    uVar22 = (uVar39 - 1) + local_2e4;
    if ((int)uVar40 < (int)uVar22) {
      uVar22 = uVar40;
    }
  }
LAB_142441f20:
  do {
    pFVar29 = local_2c0;
    if (*(int *)&(local_2c0->InvalidationRoots).field_0x8 -
        *(int *)&(local_2c0->InvalidationRoots).field_0x34 != (int)uStack_298) {
      local_3d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FSlateInvalidationRoot_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3d8);
    }
    if (((TStack_2b8.CurrentBitIndex == uVar22) &&
        (TStack_2b8.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &GSlateInvalidationRootListInstance.InvalidationRoots.field_0x10)) &&
       (pFVar29 == &GSlateInvalidationRootListInstance)) {
      if ((this->bDisplayInvalidationRootList != false) && (iVar42 == this->MaxNumberOfWidgetInList)
         ) {
        ::FString::PrintfImpl(&local_230,L"   %d more invalidation root");
        local_3b8._s_0.X = 0.0;
        local_3b8._s_0.Y = (float)iVar42 * fVar15 + fVar50;
        `FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                  (&local_308,&local_230,(TVector2<float> *)&local_3b8._s_0,&FLinearColor::White);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.CompositeFont.SharedReferenceCount.ReferenceController);
      return;
    }
    lVar32 = *(longlong *)&pFVar29->InvalidationRoots;
    puVar41 = (uint *)(lVar32 + (longlong)TStack_2b8.CurrentBitIndex * 0x18);
    cVar20 = (**(code **)(**(longlong **)
                            (*(longlong *)(lVar32 + 8 + (longlong)TStack_2b8.CurrentBitIndex * 0x18)
                            + 0x50) + 0x210))();
    if (cVar20 != '\0') {
      this_00 = &this->InvaliadatedRoots;
      EVar4 = *(ESlateInvalidationPaintType *)(*(longlong *)(puVar41 + 2) + 0x80);
      if (*(int *)&(this->InvaliadatedRoots).field_0x8 !=
          *(int *)&(this->InvaliadatedRoots).field_0x34) {
        puVar6 = *(undefined1 **)&(this->InvaliadatedRoots).field_0x40;
        puVar34 = &(this->InvaliadatedRoots).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar34 = puVar6;
        }
        uVar21 = *(uint *)(puVar34 +
                          (ulonglong)(*(int *)&(this->InvaliadatedRoots).field_0x48 - 1U & *puVar41)
                          * 4);
        if (uVar21 != 0xffffffff) {
          do {
            puVar28 = (uint *)((longlong)(int)uVar21 * 0x38 + *(longlong *)&this_00->field_0x0);
            if (*puVar28 == *puVar41) {
              puVar38 = puVar28 + 2;
              if (puVar28 == (uint *)0x0) {
                puVar38 = (uint *)0x0;
              }
              if (puVar38 != (uint *)0x0) {
                pFVar29 = *(FSlateInvalidationRootList **)puVar38;
                goto LAB_142442088;
              }
              break;
            }
            uVar21 = puVar28[0xc];
          } while (uVar21 != 0xffffffff);
        }
      }
      plVar13 = *(longlong **)(*(longlong *)(puVar41 + 2) + 0x50);
      while (plVar13 != (longlong *)0x0) {
        cVar20 = (**(code **)(*plVar13 + 0x208))();
        if (cVar20 != '\0') {
          pFVar29 = (FSlateInvalidationRootList *)plVar13[0x40];
          goto LAB_14244204f;
        }
        plVar37 = (longlong *)0x0;
        pTVar7 = (TReferenceControllerBase<1> *)plVar13[0x3a];
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          aVar12 = pTVar7->SharedReferenceCount;
          do {
            if (aVar12 == (atomic<int>)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              goto LAB_14244204c;
            }
            LOCK();
            aVar23 = pTVar7->SharedReferenceCount;
            bVar19 = aVar12 == aVar23;
            if (bVar19) {
              pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar12 + 1);
              aVar23 = aVar12;
            }
            UNLOCK();
            aVar12 = aVar23;
          } while (!bVar19);
          plVar37 = (longlong *)plVar13[0x39];
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        plVar13 = plVar37;
      }
LAB_14244204c:
      pFVar29 = (FSlateInvalidationRootList *)0x0;
LAB_14244204f:
      if (pFVar29 != (FSlateInvalidationRootList *)0x0) {
        local_258 = &local_360;
        local_340._0_4_ = 0;
        local_340._4_4_ = 0;
        local_360 = pFVar29;
        EStack_358 = EVar4;
        local_260 = puVar41;
        TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<int_const_&,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo_const_&>_>
                  ((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
                    *)this_00,&local_2e0,(bool *)&local_260);
      }
LAB_142442088:
      if (pFVar29 == local_398) {
        if (EVar4 == None) {
          pFVar30 = &this->DrawNoneColor;
        }
        else if (EVar4 == Slow) {
          pFVar30 = &this->DrawSlowPathColor;
        }
        else if (EVar4 == Fast) {
          pFVar30 = &this->DrawFastPathColor;
        }
        else {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerInvalidationRoot.cpp"
                              ,0x9d,L"");
          if (bVar19) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar30 = &FLinearColor::Black;
        }
        local_3c8._0_8_ = *(undefined8 *)&pFVar30->field0_0x0;
        local_3c8._8_8_ = *(undefined8 *)((longlong)&pFVar30->field0_0x0 + 8);
        pFVar31 = TMapBase<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>_>
                  ::FindChecked((TMapBase<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>_>
                                 *)this_00,*puVar41);
        if (((EVar4 != pFVar31->PaintType) && (EVar4 - Slow < 2)) && (pFVar31->PaintType != Slow)) {
          pFVar31->FlashingSeconds = dVar45;
          *(undefined8 *)&(pFVar31->FlashingColor).field0_0x0 = local_3c8._0_8_;
          *(undefined8 *)((longlong)&(pFVar31->FlashingColor).field0_0x0 + 8) = local_3c8._8_8_;
        }
        pFVar31->PaintType = EVar4;
        fVar46 = (float)(dVar45 - pFVar31->FlashingSeconds);
        fVar49 = fVar14;
        if (fVar46 <= this->CacheDuration) {
          local_3c8._0_8_ = *(undefined8 *)&(pFVar31->FlashingColor).field0_0x0;
          local_3c8._8_8_ = *(undefined8 *)((longlong)&(pFVar31->FlashingColor).field0_0x0 + 8);
          fVar49 = fVar46 / this->CacheDuration;
          if (fVar14 <= fVar49) {
            fVar49 = fVar14;
          }
          if (fVar49 <= fVar44) {
            fVar49 = fVar44;
          }
        }
        local_220.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
        local_200 = 0x3f800000;
        local_1f8 = 0;
        pSVar8 = *(SWidget **)(*(longlong *)(puVar41 + 2) + 0x50);
        local_1f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        fVar44 = (pSVar8->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0];
        fVar46 = (pSVar8->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
        local_3d4._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
        FVar9 = (pSVar8->PersistentState).AllottedGeometry.Size;
        local_3d4._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        fVar2 = (pSVar8->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][1];
        fVar3 = (pSVar8->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][1];
        fVar43 = fVar2 * (float)local_3d4;
        fVar47 = fVar46 * local_3d4._4_4_ + fVar44 * (float)local_3d4 +
                 (pSVar8->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                 field0_0x0._s_0.X;
        fVar48 = fVar3 * local_3d4._4_4_;
        local_3d4._4_4_ = FVar9._4_4_;
        local_3d4._0_4_ = FVar9._0_4_;
        local_390 = fVar46 * local_3d4._4_4_ + fVar44 * (float)local_3d4;
        fVar46 = fVar48 + fVar43 +
                 (pSVar8->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                 field0_0x0._s_0.Y;
        local_220.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_220.M.M[0][1] = _UNK_15076b184;
        local_220.M.M[1][0] = _UNK_15076b188;
        local_220.M.M[1][1] = _UNK_15076b18c;
        fStack_38c = fVar3 * local_3d4._4_4_ + fVar2 * (float)local_3d4;
        local_1b8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_1b8.M.M[0][1] = _UNK_15076b184;
        local_1b8.M.M[1][0] = _UNK_15076b188;
        local_1b8.M.M[1][1] = _UNK_15076b18c;
        TVar11._s_0.Y = fVar46;
        TVar11._s_0.X = fVar47;
        local_208 = CONCAT44(fStack_38c,local_390);
        local_3d4 = (TVector2<float>_u_0)FVar9;
        local_388 = fVar47;
        fStack_384 = fVar46;
        local_1b8.Trans.field0_0x0 = TVar11;
        Concatenate<TTransform2<float>_>(&local_1ec,&local_1b8,&local_220);
        local_e4 = local_e4 & 0xfc;
        local_110 = 0x3f800000;
        local_108 = 0;
        local_118._s_0.Y = fVar46;
        local_118._s_0.X = fVar47;
        local_104 = local_208;
        local_fc[0] = local_1ec.M.M[0][0];
        local_fc[1] = local_1ec.M.M[0][1];
        afStack_f4[0] = local_1ec.M.M[1][0];
        afStack_f4[1] = local_1ec.M.M[1][1];
        local_ec = local_1ec.Trans.field0_0x0;
        fVar44 = fVar14;
        local_3d4 = TVar11;
        local_380 = fVar47;
        fStack_37c = fVar46;
        if (fVar49 != fVar14) {
          fVar44 = powf(_X,fVar49 * fVar17);
          fVar44 = fVar14 - fVar44;
        }
        pFVar18 = local_370;
        puVar41 = local_378;
        local_330._s_0.R = local_3c8._s_0.R;
        local_330._s_0.G = local_3c8._s_0.G;
        local_330._s_0.A = fVar14 - fVar44 * fVar16;
        local_330._s_0.B = local_3c8._s_0.B;
        if (this->bShowQuad != false) {
          local_318._s_0.R = local_3c8._s_0.R;
          local_318._s_0.G = local_3c8._s_0.G;
          local_318._s_0.B = local_3c8._s_0.B;
          local_318._s_0.A = local_330._s_0.A;
          FSlateDrawElement::MakeDebugQuad
                    (local_370,*local_378,(FPaintGeometry *)&local_118._s_0,
                     (FLinearColor *)&local_318._s_0);
        }
        FSlateDrawElement::MakeBox
                  (pFVar18,*puVar41,(FPaintGeometry *)&local_118._s_0,(FSlateBrush *)local_2e0.Value
                   ,None,(FLinearColor *)&local_330._s_0);
        ::FString::PrintfImpl(&local_2d0,L"Id:(\'%d\')");
        FVar35.Data = (FScriptContainerElement *)L"";
        if (local_2d0.Data.ArrayNum != 0) {
          FVar35.Data = local_2d0.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_250,(wchar_t *)FVar35.Data);
        FSlateDrawElement::MakeText
                  (pFVar18,*puVar41,(FPaintGeometry *)&local_118._s_0,&local_250,&local_198,None,
                   (FLinearColor *)&local_3c8._s_0);
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        if ((this->bDisplayInvalidationRootList != false) &&
           (iVar42 < this->MaxNumberOfWidgetInList)) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_1c8,pSVar8);
          ::FString::PrintfImpl(&local_240,L"Id:(\'%d\') - %s");
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          local_368._s_0.X = 0.0;
          local_368._s_0.Y = (float)iVar42 * fVar15 + fVar50;
          `FConsoleSlateDebuggerInvalidationRoot::HandlePaintDebugInfo'::__l2::<lambda_1>::
          operator()(&local_308,&local_240,(TVector2<float> *)&local_368._s_0,
                     (FLinearColor *)&local_3c8._s_0);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
        iVar42 = iVar42 + 1;
        fVar44 = __real_3dcccccd;
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          fVar44 = __real_3dcccccd;
        }
      }
    }
    TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
  } while( true );
}

// SaveConfig @ 142451470

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::SaveConfig(FConsoleSlateDebuggerInvalidationRoot *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FColor local_res8;
  FColor local_res10;
  FString local_18;
  
  pwVar2 = L"";
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bDisplayInvalidationRootList",
             this->bDisplayInvalidationRootList,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bUseWidgetPathAsName",
             this->bUseWidgetPathAsName,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.InvalidationRoot",L"bShowQuad",this->bShowQuad,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawSlowPathColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.InvalidationRoot",L"DrawSlowPathColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawFastPathColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.InvalidationRoot",L"DrawFastPathColor",local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawNoneColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.InvalidationRoot",L"DrawNoneColor",local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetInt
            (GConfig,L"SlateDebugger.InvalidationRoot",L"MaxNumberOfWidgetInList",
             this->MaxNumberOfWidgetInList,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FConfigCacheIni::SetFloat
            (GConfig,L"SlateDebugger.InvalidationRoot",L"CacheDuration",this->CacheDuration,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StartDebugging @ 142452660

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::StartDebugging(FConsoleSlateDebuggerInvalidationRoot *this)

{
  undefined1 *puVar1;
  TMap<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->bEnabled != false) {
    this->bEnabledCVarValue = this->bEnabled;
    return;
  }
  this_00 = &this->InvaliadatedRoots;
  this->bEnabled = true;
  bVar3 = 1 < *(int *)&(this->InvaliadatedRoots).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->InvaliadatedRoots).field_0xc;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x34 = 0;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->InvaliadatedRoots).field_0x2c;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InvaliadatedRoots).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InvaliadatedRoots).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->InvaliadatedRoots).field_0x48 = 1;
    TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerInvalidationRoot>
            ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::PaintDebugElements,
             (FConsoleSlateDebuggerInvalidationRoot *)&stack0x00000008,(pmf_7bc18fb7)this);
  this->bEnabledCVarValue = this->bEnabled;
  return;
}

// StopDebugging @ 142452cc0

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::StopDebugging(FConsoleSlateDebuggerInvalidationRoot *this)

{
  undefined1 *puVar1;
  TMap<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->bEnabled == false) {
    this->bEnabledCVarValue = false;
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  this_00 = &this->InvaliadatedRoots;
  bVar3 = 1 < *(int *)&(this->InvaliadatedRoots).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->InvaliadatedRoots).field_0xc;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x34 = 0;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->InvaliadatedRoots).field_0x2c;
  *(undefined4 *)&(this->InvaliadatedRoots).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InvaliadatedRoots).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InvaliadatedRoots).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->InvaliadatedRoots).field_0x48 = 1;
    TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo>,TDefaultMapHashableKeyFuncs<int,FConsoleSlateDebuggerInvalidationRoot::FInvalidatedInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->bEnabled = false;
  this->bEnabledCVarValue = false;
  return;
}

// ToggleLegend @ 142454a60

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::ToggleLegend(FConsoleSlateDebuggerInvalidationRoot *this)

{
  this->bShowLegend = this->bShowLegend == false;
  SaveConfig(this);
  return;
}

// ToggleWidgetNameList @ 142454a80

void __thiscall
FConsoleSlateDebuggerInvalidationRoot::ToggleWidgetNameList
          (FConsoleSlateDebuggerInvalidationRoot *this)

{
  this->bDisplayInvalidationRootList = this->bDisplayInvalidationRootList == false;
  SaveConfig(this);
  return;
}

