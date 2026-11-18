// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 12

// FWindowsUIAManager @ 1423c4710

FWindowsUIAManager * __thiscall
FWindowsUIAManager::FWindowsUIAManager(FWindowsUIAManager *this,FWindowsApplication *param_1)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FWindowsUIAManager *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_3b8;
  undefined1 local_3b7;
  undefined1 local_3b6;
  undefined1 local_3b5;
  undefined1 local_3b4;
  undefined1 local_3b3;
  undefined1 local_3b2;
  undefined1 local_3b1;
  undefined1 local_3b0;
  undefined1 local_3af;
  undefined1 local_3ae;
  undefined1 local_3ad;
  undefined1 local_3ac;
  undefined1 local_3ab;
  undefined1 local_3aa;
  undefined1 local_3a9;
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5;
  undefined1 local_3a4;
  undefined1 local_3a3 [3];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a0;
  FDelegateAllocation local_398;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined1 local_354 [8];
  undefined1 local_34c [8];
  undefined1 local_344 [8];
  undefined1 local_33c [8];
  undefined1 local_334 [8];
  undefined1 local_32c [8];
  undefined1 local_324 [8];
  undefined1 local_31c [8];
  undefined1 local_314 [8];
  undefined1 local_30c [8];
  undefined1 local_304 [8];
  undefined1 local_2fc [8];
  undefined1 local_2f4 [12];
  ulong *local_2e8;
  undefined4 *local_2e0;
  undefined1 *local_2d8;
  undefined4 *local_2d0;
  undefined1 *local_2c8;
  undefined4 *local_2c0;
  undefined1 *local_2b8;
  undefined4 *local_2b0;
  undefined1 *local_2a8;
  undefined4 *local_2a0;
  undefined1 *local_298;
  undefined4 *local_290;
  undefined1 *local_288;
  undefined4 *local_280;
  undefined1 *local_278;
  undefined4 *local_270;
  undefined1 *local_268;
  undefined4 *local_260;
  undefined1 *local_258;
  undefined4 *local_250;
  undefined1 *local_248;
  undefined4 *local_240;
  undefined1 *local_238;
  undefined4 *local_230;
  undefined1 *local_228;
  FText *local_220;
  undefined1 *local_218;
  FText *local_210;
  undefined1 *local_208;
  FText *local_200;
  undefined1 *local_1f8;
  FText *local_1f0;
  undefined1 *local_1e8;
  FText *local_1e0;
  undefined1 *local_1d8;
  FText *local_1d0;
  undefined1 *local_1c8;
  FText *local_1c0;
  undefined1 *local_1b8;
  FText *local_1b0;
  undefined1 *local_1a8;
  FText *local_1a0;
  undefined1 *local_198;
  FText *local_190;
  undefined1 *local_188;
  FText *local_180;
  undefined1 *local_178;
  FText *local_170;
  undefined1 *local_168;
  FText *local_160;
  undefined1 *local_158;
  undefined4 *local_150;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDelegateAllocation *local_118;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50 [2];
  
  *(undefined8 *)&this->CachedWidgetProviders = 0;
  *(undefined8 *)&(this->CachedWidgetProviders).field_0x8 = 0;
  *(undefined8 *)&(this->CachedWidgetProviders).field_0x20 = 0;
  *(undefined4 *)&(this->CachedWidgetProviders).field_0x28 = 0;
  *(undefined4 *)&(this->CachedWidgetProviders).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedWidgetProviders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedWidgetProviders).field_0x34 = 0;
  *(undefined8 *)&(this->CachedWidgetProviders).field_0x40 = 0;
  *(undefined4 *)&(this->CachedWidgetProviders).field_0x48 = 0;
  *(undefined8 *)&(this->ProviderList).Elements = 0;
  *(undefined8 *)&(this->ProviderList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProviderList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProviderList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProviderList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProviderList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProviderList).Elements.field_0x34 = 0;
  (this->ProviderList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProviderList).HashSize = 0;
  this->WindowsApplication = param_1;
  (this->OnCultureChangedHandle).ID = 0;
  this->CachedCurrentLocaleLCID = 0;
  OnAccessibleMessageHandlerChanged(this);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWindowsUIAManager *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_3a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_398.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_398.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3a0,(FWriteAccessScope *)&local_130);
  local_118 = &local_398;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_398);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVFWindowsUIAManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = DumpAccessibilityStats;
    puVar5[3] = this;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  (*pcVar1)(pIVar2,L"Accessibility.DumpStatsWindows",
            L"Writes to LogAccessibility the memory stats for the platform-level accessibility data (Providers) required for Windows support."
            ,&local_3a0,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3a0,(FWriteAccessScope *)&local_148);
  if ((local_398.DelegateSize != 0) &&
     (local_398.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_398.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_398,0,0,0x10);
    local_398.DelegateSize = 0;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (local_398.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_398.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a0.AccessDetector);
  if (WidgetTypeToWindowsTypeMap._8_4_ == WidgetTypeToWindowsTypeMap._52_4_) {
    local_158 = local_res8;
    local_388 = 50000;
    local_150 = &local_388;
    local_res8[0] = 1;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_2f4 + 4),
               (bool *)&local_158);
    local_2e8 = (ulong *)local_res10;
    local_384 = 0xc352;
    local_2e0 = &local_384;
    local_res10[0] = 2;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)local_354,
               (bool *)&local_2e8);
    local_2d8 = local_res18;
    local_380 = 0xc353;
    local_2d0 = &local_380;
    local_res18[0] = 3;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_354 + 4),
               (bool *)&local_2d8);
    local_2c8 = local_res20;
    local_37c = 0xc355;
    local_2c0 = &local_37c;
    local_res20[0] = 4;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)local_34c,
               (bool *)&local_2c8);
    local_2b8 = &local_3b8;
    local_378 = 0xc356;
    local_2b0 = &local_378;
    local_3b8 = 5;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_34c + 4),
               (bool *)&local_2b8);
    local_2a8 = &local_3b7;
    local_374 = 0xc371;
    local_2a0 = &local_374;
    local_3b7 = 6;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)local_344,
               (bool *)&local_2a8);
    local_298 = &local_3b6;
    local_370 = 0xc35e;
    local_290 = &local_370;
    local_3b6 = 7;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_344 + 4),
               (bool *)&local_298);
    local_288 = &local_3b5;
    local_36c = 0xc35f;
    local_3b5 = 8;
    local_280 = &local_36c;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)local_33c,
               (bool *)&local_288);
    local_278 = &local_3b4;
    local_368 = 0xc364;
    local_270 = &local_368;
    local_3b4 = 9;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_33c + 4),
               (bool *)&local_278);
    local_268 = &local_3b3;
    local_364 = 0xc354;
    local_260 = &local_364;
    local_3b3 = 10;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)local_334,
               (bool *)&local_268);
    local_258 = &local_3b2;
    local_360 = 0xc370;
    local_250 = &local_360;
    local_3b2 = 0xb;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_334 + 4),
               (bool *)&local_258);
    local_248 = &local_3b1;
    local_35c = 0xc358;
    local_240 = &local_35c;
    local_3b1 = 0xc;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)local_32c,
               (bool *)&local_248);
    local_238 = &local_3b0;
    local_358 = 0xc357;
    local_230 = &local_358;
    local_3b0 = 0xd;
    TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
              (&WidgetTypeToWindowsTypeMap,
               (TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *)(local_32c + 4),
               (bool *)&local_238);
    local_220 = FText::AsLocalizable_Advanced_LocText
                          (&local_60,L"SlateAccessibility",L"ControlTypeButton",L"button");
    local_228 = &local_3af;
    local_3af = 1;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_324
               ,(bool *)&local_228);
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    local_210 = FText::AsLocalizable_Advanced_LocText
                          (&local_110,L"SlateAccessibility",L"ControlTypeCheckBox",L"check box");
    local_218 = &local_3ae;
    local_3ae = 2;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,
               (TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)(local_324 + 4),
               (bool *)&local_218);
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    local_200 = FText::AsLocalizable_Advanced_LocText
                          (&local_100,L"SlateAccessibility",L"ControlTypeComboBox",L"combobox");
    local_208 = &local_3ad;
    local_3ad = 3;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_31c
               ,(bool *)&local_208);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    local_1f0 = FText::AsLocalizable_Advanced_LocText
                          (local_50,L"SlateAccessibility",L"ControlTypeHyperlink",L"hyperlink");
    local_1f8 = &local_3ac;
    local_3ac = 4;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,
               (TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)(local_31c + 4),
               (bool *)&local_1f8);
    if (local_50[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50[0].TextData.Reference + 0x10))();
    }
    local_1e0 = FText::AsLocalizable_Advanced_LocText
                          (&local_f0,L"SlateAccessibility",L"ControlTypeImage",L"image");
    local_1e8 = &local_3ab;
    local_3ab = 5;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_314
               ,(bool *)&local_1e8);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    local_1d0 = FText::AsLocalizable_Advanced_LocText
                          (&local_e0,L"SlateAccessibility",L"ControlTypeLayout",L"pane");
    local_1d8 = &local_3aa;
    local_3aa = 6;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,
               (TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)(local_314 + 4),
               (bool *)&local_1d8);
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    local_1c0 = FText::AsLocalizable_Advanced_LocText
                          (&local_d0,L"SlateAccessibility",L"ControlTypeScrollBar",L"scroll bar");
    local_1c8 = &local_3a9;
    local_3a9 = 7;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_30c
               ,(bool *)&local_1c8);
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
    local_1b0 = FText::AsLocalizable_Advanced_LocText
                          (&local_c0,L"SlateAccessibility",L"ControlTypeSlider",L"slider");
    local_1b8 = &local_3a8;
    local_3a8 = 8;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,
               (TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)(local_30c + 4),
               (bool *)&local_1b8);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    local_1a0 = FText::AsLocalizable_Advanced_LocText
                          (&local_b0,L"SlateAccessibility",L"ControlTypeText",L"text");
    local_1a8 = &local_3a7;
    local_3a7 = 9;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_304
               ,(bool *)&local_1a8);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    local_190 = FText::AsLocalizable_Advanced_LocText
                          (&local_a0,L"SlateAccessibility",L"ControlTypeTextEdit",L"edit");
    local_198 = &local_3a6;
    local_3a6 = 10;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,
               (TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)(local_304 + 4),
               (bool *)&local_198);
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
    local_180 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"SlateAccessibility",L"ControlTypeWindow",L"window");
    local_188 = &local_3a5;
    local_3a5 = 0xb;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_2fc
               ,(bool *)&local_188);
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    local_170 = FText::AsLocalizable_Advanced_LocText
                          (&local_80,L"SlateAccessibility",L"ControlTypeList",L"List");
    local_178 = &local_3a4;
    local_3a4 = 0xc;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,
               (TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)(local_2fc + 4),
               (bool *)&local_178);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    local_160 = FText::AsLocalizable_Advanced_LocText
                          (&local_70,L"SlateAccessibility",L"ControlTypeListItem",L"ListItem");
    local_168 = local_3a3;
    local_3a3[0] = 0xd;
    TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
              (&WidgetTypeToTextMap,(TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *)local_2f4
               ,(bool *)&local_168);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  return this;
}

// ~FWindowsUIAManager @ 1423c7510

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FWindowsUIAManager::~FWindowsUIAManager(FWindowsUIAManager *this)

{
  undefined1 *puVar1;
  TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGenericAccessibleMessageHandler *this_01;
  ForElementType<FSetElementId> FVar6;
  void *pvVar7;
  code *pcVar8;
  TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  FInternationalization *pFVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  ulonglong local_b8;
  TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FDestructionSentinel local_50;
  
  pTVar5 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
  this_01 = *(FGenericAccessibleMessageHandler **)&this->WindowsApplication->field_0x28;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = 0;
  local_c8 = (undefined1  [8])0x0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  FGenericAccessibleMessageHandler::SetAccessibleEventDelegate
            (this_01,(TDelegate<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
                      *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_50);
  iVar16 = 0;
  if (((int)local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = local_b8 & 0xffffffff00000000;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar3 = *(int *)&(this->ProviderList).Elements.field_0x28;
  puVar1 = &(this->ProviderList).Elements.field_0x10;
  this_00 = &this->ProviderList;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = local_90;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->ProviderList).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    local_90 = 0;
    iVar16 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      local_90 = local_90 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1423c764d;
      uVar15 = puVar18[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iStack_94 = local_90 + -1 + local_res10;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_1423c764d:
  uVar15 = *(uint *)&(this->ProviderList).Elements.field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_88 = *(int *)&(this->ProviderList).Elements.field_0x8 -
              *(int *)&(this->ProviderList).Elements.field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iVar16);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = this_00;
  iStack_a8 = iVar16;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = this_00;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->ProviderList).Elements.field_0x28;
  if (uVar15 != uVar4) {
    puVar17 = *(undefined1 **)&(this->ProviderList).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1423c7750;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_1423c7750:
  while( true ) {
    pTVar9 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<FWindowsUIABaseProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00))
    break;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10) + 8
     ) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  if ((this->OnCultureChangedHandle).ID != 0) {
    FInternationalization::Get();
    bVar10 = FInternationalization::IsAvailable();
    if (bVar10) {
      pFVar11 = FInternationalization::Get();
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar11->CultureChangedEvent,(FDelegateHandle)(this->OnCultureChangedHandle).ID);
      (this->OnCultureChangedHandle).ID = 0;
    }
  }
  (this->ProviderList).HashSize = 0;
  FVar6 = (this->ProviderList).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FWindowsUIABaseProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FWindowsUIABaseProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this_00->Elements);
  *(undefined4 *)&(this->CachedWidgetProviders).field_0x48 = 0;
  pvVar7 = *(void **)&(this->CachedWidgetProviders).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// DumpAccessibilityStats @ 1423dab00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsUIAManager::DumpAccessibilityStats(FWindowsUIAManager *this)

{
  if (((((4 < (byte)LogAccessibility._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
        4 < (byte)LogAccessibility._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
       4 < (byte)LogAccessibility._0_1_)) &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
       4 < (byte)LogAccessibility._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
       4 < (byte)LogAccessibility._0_1_)))) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
      4 < (byte)LogAccessibility._0_1_ &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
       4 < (byte)LogAccessibility._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
       4 < (byte)LogAccessibility._0_1_)))))) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Memory_stored_i_1508d4ee8,
               (FLogCategoryBase *)&LogAccessibility);
  }
  return;
}

// GetWidgetProvider @ 1423e4da0

FWindowsUIAWidgetProvider * __thiscall
FWindowsUIAManager::GetWidgetProvider
          (FWindowsUIAManager *this,TSharedRef<IAccessibleWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IAccessibleWidget *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FWindowsUIAWidgetProvider *pFVar6;
  FWindowsUIAWidgetProvider *pFVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res8 [16];
  FWindowsUIAWidgetProvider *local_res18;
  FWindowsUIAWidgetProvider *local_res20;
  TSharedRef<IAccessibleWidget_const_,1> local_88;
  TSharedRef<IAccessibleWidget,1> local_78;
  TSharedRef<IAccessibleWidget,1> *local_68;
  FWindowsUIAWidgetProvider **local_60;
  TSharedRef<IAccessibleWidget,1> local_58;
  TSharedRef<IAccessibleWidget,1> *local_48;
  FWindowsUIAWidgetProvider **local_40;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_88.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = ((uint)((ulonglong)local_88.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_88.Object >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  local_88.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar5 = TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<IAccessibleWidget_const_,1>_>
                    ((TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
                      *)this,uVar8 >> 0x10 ^ uVar8,&local_88);
  pFVar7 = (FWindowsUIAWidgetProvider *)0x0;
  if (iVar5 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    lVar9 = (longlong)iVar5 * 0x20 + *(longlong *)&this->CachedWidgetProviders;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pFVar6 = (FWindowsUIAWidgetProvider *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar6 = pFVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pFVar6 != (FWindowsUIAWidgetProvider *)0x0) {
      (**(code **)(*(longlong *)(*(longlong *)pFVar6 + 0x28) + 8))();
      pFVar6 = *(FWindowsUIAWidgetProvider **)pFVar6;
      goto LAB_1423e4fd1;
    }
  }
  lVar9 = (**(code **)(*(longlong *)param_1->Object + 0xc0))();
  if (lVar9 == 0) {
    pFVar6 = ::operator_new(0x38);
    if (pFVar6 != (FWindowsUIAWidgetProvider *)0x0) {
      local_58.Object = param_1->Object;
      local_58.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = FWindowsUIAWidgetProvider::FWindowsUIAWidgetProvider(pFVar6,this,&local_58);
    }
    local_40 = &local_res20;
    local_res20 = pFVar7;
    local_48 = param_1;
    TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>_>
              ((TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>
                        *)(local_res8 + 8),(bool *)&local_48);
    local_res8._0_4_ = local_res8._8_4_;
  }
  else {
    pFVar6 = ::operator_new(0x40);
    if (pFVar6 != (FWindowsUIAWidgetProvider *)0x0) {
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pIVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.Object = pIVar2;
      local_78.SharedReferenceCount.ReferenceController = pTVar1;
      FWindowsUIAWidgetProvider::FWindowsUIAWidgetProvider(pFVar6,this,&local_78);
      *(undefined ***)pFVar6 = &FWindowsUIAWindowProvider::_vftable__for__FWindowsUIABaseProvider__;
      *(undefined ***)&pFVar6->field_0x28 =
           &FWindowsUIAWindowProvider::_vftable__for__IRawElementProviderSimple__;
      *(undefined ***)&pFVar6->field_0x30 =
           &FWindowsUIAWindowProvider::_vftable__for__IRawElementProviderFragment__;
      *(undefined ***)(pFVar6 + 1) = &___7FWindowsUIAWindowProvider__6B_;
      lVar9 = (**(code **)(*(longlong *)pIVar2 + 0xc0))(pIVar2);
      if ((lVar9 == 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4163973379042311337>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIAWidgetProvider.cpp"
                             ,0x357,"InWidget->AsWindow() != nullptr"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FWindowsUIAWidgetProvider *)(*pcVar3)();
        return pFVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pFVar7 = pFVar6;
    }
    local_60 = &local_res18;
    local_res18 = pFVar7;
    local_68 = param_1;
    TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>_>
              ((TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>
                        *)local_res8,(bool *)&local_68);
  }
  pFVar6 = *(FWindowsUIAWidgetProvider **)
            ((longlong)(int)local_res8._0_4_ * 0x20 + 0x10 +
            *(longlong *)&this->CachedWidgetProviders);
LAB_1423e4fd1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar6;
}

// GetWindowProvider @ 1423e5420

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FWindowsUIAWindowProvider * __thiscall
FWindowsUIAManager::GetWindowProvider
          (FWindowsUIAManager *this,TSharedRef<FWindowsWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FDelegateHandle FVar6;
  FWindowsUIAWindowProvider *pFVar7;
  IAccessibleWidget *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FWindowsWindow *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if (*(int *)&(this->CachedWidgetProviders).field_0x8 ==
      *(int *)&(this->CachedWidgetProviders).field_0x34) {
    pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
    this_00 = *(FGenericAccessibleMessageHandler **)&this->WindowsApplication->field_0x28;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    FGenericAccessibleMessageHandler::SetActive(this_00,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    UpdateCachedCurrentLocaleLCID(this);
    pFVar5 = FInternationalization::Get();
    FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FWindowsUIAManager>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&pFVar5->CultureChangedEvent,(FWindowsUIAManager *)&stack0x00000008,
                       (pmf_dee28e05)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnCultureChangedHandle).ID = *FVar6.ID;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
  plVar2 = *(longlong **)&this->WindowsApplication->field_0x28;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar3 = *(code **)(*plVar2 + 8);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(plVar2,&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38 == (IAccessibleWidget *)0x0) {
    (**(code **)(param_1->Object->_padding_ + 0xe0))();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessibleWindow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIAManager.cpp"
                       ,0x8e,L"%s is not an accessible window. All windows must be accessible.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FWindowsUIAWindowProvider *)(*pcVar3)();
      return pFVar7;
    }
    if ((local_38 == (IAccessibleWidget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FWindowsUIAWindowProvider *)(*pcVar3)();
      return pFVar7;
    }
  }
  local_18.Object = local_38;
  local_18.SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38 == (IAccessibleWidget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FWindowsUIAWindowProvider *)(*pcVar3)();
    return pFVar7;
  }
  pFVar7 = (FWindowsUIAWindowProvider *)GetWidgetProvider(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar7;
}

// OnAccessibilityDisabled @ 1423efd40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FWindowsUIAManager::OnAccessibilityDisabled(FWindowsUIAManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *this_00;
  FInternationalization *pFVar2;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
  this_00 = *(FGenericAccessibleMessageHandler **)&this->WindowsApplication->field_0x28;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGenericAccessibleMessageHandler::SetActive(this_00,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->CachedCurrentLocaleLCID = 0;
  if ((this->OnCultureChangedHandle).ID != 0) {
    pFVar2 = FInternationalization::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar2->CultureChangedEvent,(FDelegateHandle)(this->OnCultureChangedHandle).ID);
    (this->OnCultureChangedHandle).ID = 0;
  }
  return;
}

// OnAccessibilityEnabled @ 1423efdc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FWindowsUIAManager::OnAccessibilityEnabled(FWindowsUIAManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *this_00;
  FInternationalization *pFVar2;
  FDelegateHandle FVar3;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
  this_00 = *(FGenericAccessibleMessageHandler **)&this->WindowsApplication->field_0x28;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGenericAccessibleMessageHandler::SetActive(this_00,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateCachedCurrentLocaleLCID(this);
  pFVar2 = FInternationalization::Get();
  FVar3 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FWindowsUIAManager>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&pFVar2->CultureChangedEvent,(FWindowsUIAManager *)&stack0x00000008,
                     (pmf_dee28e05)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnCultureChangedHandle).ID = *FVar3.ID;
  return;
}

// OnAccessibleMessageHandlerChanged @ 1423efe40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsUIAManager::OnAccessibleMessageHandlerChanged(FWindowsUIAManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *this_00;
  FGenericAccessibleUserRegistry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 *puVar8;
  atomic<int> local_res8 [4];
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  atomic<int> *local_88;
  TReferenceControllerBase<1> **local_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
  this_00 = *(FGenericAccessibleMessageHandler **)&this->WindowsApplication->field_0x28;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this_00->AccessibleUserRegistry).Object;
  pTStack_90 = ::operator_new(0x30);
  if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
    local_98 = ___xmm_00000000000000000000000000000010;
    pTStack_90 = _UNK_150651568;
  }
  else {
    pTStack_90->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_90->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGenericAccessibleUser___00_SharedPointerInternals__6B_
    ;
    local_98 = pTStack_90 + 1;
    pTStack_90->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_90[1]._padding_ = (longlong)&___7FGenericAccessibleUser__6B_;
    pTStack_90[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[2]._padding_ = 0;
    pTStack_90[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[2].WeakReferenceCount = (atomic<int>)0x0;
    if ((local_98 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8[0] = local_98->SharedReferenceCount;
  if (*(int *)&(pFVar2->UsersMap).field_0x8 != *(int *)&(pFVar2->UsersMap).field_0x34) {
    puVar8 = *(undefined1 **)&(pFVar2->UsersMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar2->UsersMap).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar2->UsersMap).field_0x48 - 1U & (uint)local_res8[0]) *
                              4);
    if (iVar5 != -1) {
      do {
        if (*(atomic<int> *)((longlong)iVar5 * 0x20 + *(longlong *)&pFVar2->UsersMap) ==
            local_res8[0]) {
          if (5 < (byte)LogAccessibility._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
          }
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_982525162538663842>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIAManager.cpp"
                             ,0x5e,
                             "UserRegistry.RegisterUser(MakeShared<FGenericAccessibleUser>(FGenericAccessibleUserRegistry::GetPrimaryUserIndex()))"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_1423eff87;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&pFVar2->UsersMap);
      } while (iVar5 != -1);
    }
  }
  local_88 = local_res8;
  local_80 = &local_98;
  TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&>_>
            ((TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
              *)&pFVar2->UsersMap,
             (TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&> *)
             (local_res8 + 2),(bool *)&local_88);
  (**(code **)(local_98->_padding_ + 8))();
LAB_1423eff87:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAccessibleEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWindowsUIAManager____A6AXAEBUFAccessibleEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OnEventRaised;
    puVar6[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  FGenericAccessibleMessageHandler::SetAccessibleEventDelegate
            (this_00,(TDelegate<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
                      *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// OnEventRaised @ 1423f0300

void __thiscall
FWindowsUIAManager::OnEventRaised(FWindowsUIAManager *this,FAccessibleEventArgs *param_1)

{
  EAccessibleEvent EVar1;
  _func___cdecl_T_HRESULT_IRawElementProviderSimple_ptr_int_int_wchar_t_ptr_wchar_t_ptr *p_Var2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  FWindowsUIAWidgetProvider *this_00;
  HMODULE pHVar6;
  BSTR pOVar7;
  FString *pFVar8;
  BSTR pOVar9;
  IRawElementProviderSimple *pIVar10;
  IRawElementProviderSimple *pIVar11;
  int iVar12;
  wchar_t *psz;
  TSharedRef<IAccessibleWidget,1> local_28;
  FString local_18;
  
  BVar5 = UiaClientsAreListening();
  if (BVar5 == 0) {
    return;
  }
  local_28.Object = (param_1->Widget).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->Widget).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = GetWidgetProvider(this,&local_28);
  EVar1 = param_1->Event;
  if (EVar1 == FocusChange) {
    cVar4 = (**(code **)(*(longlong *)(param_1->Widget).Object + 0xb0))();
    if (cVar4 != '\0') {
      pIVar11 = (IRawElementProviderSimple *)&this_00->field_0x28;
      if (this_00 == (FWindowsUIAWidgetProvider *)0x0) {
        pIVar11 = (IRawElementProviderSimple *)0x0;
      }
      UiaRaiseAutomationEvent(pIVar11,0x4e25);
    }
    iVar12 = 0x7538;
  }
  else {
    if (EVar1 != Activate) {
      if (EVar1 == Notification) {
        if (bDoOnce != false) {
          pHVar6 = GetModuleHandleW(L"Uiautomationcore.dll");
          bDoOnce = false;
          if (pHVar6 != (HMODULE)0x0) {
            NotificationFunc =
                 (_func___cdecl_T_HRESULT_IRawElementProviderSimple_ptr_int_int_wchar_t_ptr_wchar_t_ptr
                  *)GetProcAddress(pHVar6,"UiaRaiseNotificationEvent");
          }
        }
        p_Var2 = NotificationFunc;
        if (NotificationFunc !=
            (_func___cdecl_T_HRESULT_IRawElementProviderSimple_ptr_int_int_wchar_t_ptr_wchar_t_ptr *
            )0x0) {
          psz = L"";
          pOVar7 = SysAllocString(L"");
          pFVar8 = FVariant::GetValue<FString>(&param_1->NewValue,&local_18);
          if ((pFVar8->Data).ArrayNum != 0) {
            psz = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pOVar9 = SysAllocString(psz);
          pIVar10 = (IRawElementProviderSimple *)&this_00->field_0x28;
          if (this_00 == (FWindowsUIAWidgetProvider *)0x0) {
            pIVar10 = (IRawElementProviderSimple *)0x0;
          }
          (*p_Var2)(pIVar10,2,2,pOVar9,pOVar7);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (EVar1 == WidgetRemoved) {
        if (bDoOnce != false) {
          bDoOnce = false;
          pHVar6 = GetModuleHandleW(L"Uiautomationcore.dll");
          if (pHVar6 != (HMODULE)0x0) {
            DisconnectFunc =
                 (_func___cdecl_T_HRESULT_IRawElementProviderSimple_ptr *)
                 GetProcAddress(pHVar6,"UiaDisconnectProvider");
          }
        }
        if (DisconnectFunc != (_func___cdecl_T_HRESULT_IRawElementProviderSimple_ptr *)0x0) {
          pIVar10 = (IRawElementProviderSimple *)&this_00->field_0x28;
          if (this_00 == (FWindowsUIAWidgetProvider *)0x0) {
            pIVar10 = (IRawElementProviderSimple *)0x0;
          }
          (*DisconnectFunc)(pIVar10);
        }
      }
      goto LAB_1423f051a;
    }
    bVar3 = FWindowsUIAWidgetProvider::SupportsInterface(this_00,0x271f);
    if (!bVar3) {
      bVar3 = FWindowsUIAWidgetProvider::SupportsInterface(this_00,10000);
      if (bVar3) {
        pIVar11 = (IRawElementProviderSimple *)&this_00->field_0x28;
        if (this_00 == (FWindowsUIAWidgetProvider *)0x0) {
          pIVar11 = (IRawElementProviderSimple *)0x0;
        }
        UiaRaiseAutomationEvent(pIVar11,0x4e29);
      }
      goto LAB_1423f051a;
    }
    iVar12 = 0x7586;
  }
  EmitPropertyChangedEvent(this_00,iVar12,&param_1->OldValue,&param_1->NewValue);
LAB_1423f051a:
  (**(code **)(*(longlong *)&this_00->field_0x28 + 0x10))(&this_00->field_0x28);
  return;
}

// OnWidgetProviderRemoved @ 1423f1e90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FWindowsUIAManager::OnWidgetProviderRemoved
          (FWindowsUIAManager *this,TSharedRef<IAccessibleWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *this_00;
  FInternationalization *pFVar2;
  uint uVar3;
  atomic<int> *paVar4;
  TSharedRef<IAccessibleWidget_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  if (*(int *)&(this->CachedWidgetProviders).field_0x8 !=
      *(int *)&(this->CachedWidgetProviders).field_0x34) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<TSharedRef<IAccessibleWidget_const_,1>_>
              ((TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
                *)this,uVar3 >> 0x10 ^ uVar3,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (*(int *)&(this->CachedWidgetProviders).field_0x8 ==
      *(int *)&(this->CachedWidgetProviders).field_0x34) {
    pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
    this_00 = *(FGenericAccessibleMessageHandler **)&this->WindowsApplication->field_0x28;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    FGenericAccessibleMessageHandler::SetActive(this_00,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    this->CachedCurrentLocaleLCID = 0;
    if ((this->OnCultureChangedHandle).ID != 0) {
      pFVar2 = FInternationalization::Get();
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar2->CultureChangedEvent,(FDelegateHandle)(this->OnCultureChangedHandle).ID);
      (this->OnCultureChangedHandle).ID = 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RunInGameThreadBlocking @ 142402550

void __thiscall
FWindowsUIAManager::RunInGameThreadBlocking
          (FWindowsUIAManager *this,TFunction<void___cdecl(void)> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->WindowsApplication->field_0x30;
  plVar2 = *(longlong **)&this->WindowsApplication->field_0x28;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// UpdateCachedCurrentLocaleLCID @ 14240bb10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FWindowsUIAManager::UpdateCachedCurrentLocaleLCID(FWindowsUIAManager *this)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FInternationalization *pFVar6;
  
  pFVar6 = FInternationalization::Get();
  if ((pFVar6->CurrentLocale).Object == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (pFVar6->CurrentLocale).Object;
  pTVar2 = (pFVar6->CurrentLocale).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = FCulture::GetLCID(pFVar1);
  this->CachedCurrentLocaleLCID = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (this->CachedCurrentLocaleLCID == 0) {
    pFVar6 = FInternationalization::Get();
    if ((pFVar6->DefaultLocale).Object == (FCulture *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (pFVar6->DefaultLocale).Object;
    pTVar2 = (pFVar6->DefaultLocale).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FCulture *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = FCulture::GetLCID(pFVar1);
    this->CachedCurrentLocaleLCID = uVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

