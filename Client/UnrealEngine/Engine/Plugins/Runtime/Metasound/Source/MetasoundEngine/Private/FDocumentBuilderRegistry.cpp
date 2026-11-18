// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 27

// CreateTransientBuilder<UMetaSoundPatchBuilder> @ 14b30d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetaSoundPatchBuilder * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::CreateTransientBuilder<UMetaSoundPatchBuilder>
          (FDocumentBuilderRegistry *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UMetaSoundPatchBuilder *pUVar3;
  UClass *pUVar4;
  FName FVar5;
  UClass *pUVar6;
  UMetaSoundBuilderBase *this_00;
  FMetasoundFrontendDocument *pFVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [16];
  UMetaSoundBuilderBase *local_b0;
  longlong *local_a8;
  FWeakObjectPtr *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundDocumentBuilderRegistry.h"
                       ,0x2d,
                       L"Transient MetaSound builder cannot be created in non - game thread as it may result in UObject creation"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMetaSoundPatchBuilder *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = (UClass *)GetTransientPackage();
  FVar5 = (FName)UMetaSoundPatchBuilder::StaticClass();
  local_d8 = 0;
  MakeUniqueObjectName((UObject *)(local_c0 + 8),pUVar4,FVar5,param_1.ComparisonIndex.Value.Value);
  if ((FName)local_c0._8_8_ == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UMetaSoundPatchBuilder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_8_ = local_c0._8_8_;
  local_98._24_4_ = RF_Transient|RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar4;
  this_00 = (UMetaSoundBuilderBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UMetaSoundBuilderBase *)0x0) goto LAB_14b30d3e4;
  }
  else if (this_00 != (UMetaSoundBuilderBase *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
    goto LAB_14b30d3e4;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewBuilder",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundDocumentBuilderRegistry.h"
                     ,0x33,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMetaSoundPatchBuilder *)(*pcVar1)();
    return pUVar3;
  }
LAB_14b30d3e4:
  UMetaSoundBuilderBase::Initialize(this_00);
  pFVar7 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(&this_00->Builder);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 != (UMetaSoundBuilderBase *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMetaSoundBuilderBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  local_b0 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMetaSoundBuilderBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_b0);
  local_a0 = &local_c8;
  local_a8 = &(pFVar7->RootGraph)._padding_;
  TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)&this->Builders,
             (TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>
              *)local_c0,(bool *)&local_a8);
  return (UMetaSoundPatchBuilder *)this_00;
}

// CreateTransientBuilder<UMetaSoundSourceBuilder> @ 14b30d4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetaSoundSourceBuilder * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::CreateTransientBuilder<UMetaSoundSourceBuilder>
          (FDocumentBuilderRegistry *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UMetaSoundSourceBuilder *pUVar3;
  UClass *pUVar4;
  FName FVar5;
  UClass *pUVar6;
  FMetasoundFrontendDocument *pFVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [16];
  UMetaSoundSourceBuilder *local_b0;
  longlong *local_a8;
  FWeakObjectPtr *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundDocumentBuilderRegistry.h"
                       ,0x2d,
                       L"Transient MetaSound builder cannot be created in non - game thread as it may result in UObject creation"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMetaSoundSourceBuilder *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = (UClass *)GetTransientPackage();
  FVar5 = (FName)UMetaSoundSourceBuilder::StaticClass();
  local_d8 = 0;
  MakeUniqueObjectName((UObject *)(local_c0 + 8),pUVar4,FVar5,param_1.ComparisonIndex.Value.Value);
  if ((FName)local_c0._8_8_ == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UMetaSoundSourceBuilder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_8_ = local_c0._8_8_;
  local_98._24_4_ = RF_Transient|RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar4;
  pUVar3 = (UMetaSoundSourceBuilder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UMetaSoundSourceBuilder *)0x0) goto LAB_14b30d614;
  }
  else if (pUVar3 != (UMetaSoundSourceBuilder *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    goto LAB_14b30d614;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewBuilder",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundDocumentBuilderRegistry.h"
                     ,0x33,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMetaSoundSourceBuilder *)(*pcVar1)();
    return pUVar3;
  }
LAB_14b30d614:
  UMetaSoundBuilderBase::Initialize((UMetaSoundBuilderBase *)pUVar3);
  pFVar7 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)&pUVar3->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UMetaSoundSourceBuilder *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMetaSoundSourceBuilder *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  local_b0 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMetaSoundSourceBuilder *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_b0);
  local_a0 = &local_c8;
  local_a8 = &(pFVar7->RootGraph)._padding_;
  TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)&this->Builders,
             (TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>
              *)local_c0,(bool *)&local_a8);
  return pUVar3;
}

// FDocumentBuilderRegistry @ 14b3461f0

FDocumentBuilderRegistry * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FDocumentBuilderRegistry
          (FDocumentBuilderRegistry *this)

{
  this->_padding_ = (longlong)&___7FDocumentBuilderRegistry_Engine_Metasound__6B_;
  *(undefined8 *)&this->Builders = 0;
  *(undefined8 *)&(this->Builders).field_0x8 = 0;
  *(undefined8 *)&(this->Builders).field_0x20 = 0;
  *(undefined4 *)&(this->Builders).field_0x28 = 0;
  *(undefined4 *)&(this->Builders).field_0x2c = 0x80;
  *(undefined4 *)&(this->Builders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Builders).field_0x34 = 0;
  *(undefined8 *)&(this->Builders).field_0x40 = 0;
  *(undefined4 *)&(this->Builders).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BuildersCriticalSection,4000);
  *(undefined8 *)&this->OnResolveProjectPage = 0;
  *(undefined8 *)&(this->OnResolveProjectPage).field_0x8 = 0;
  *(undefined4 *)&(this->OnResolveProjectPage).field_0x10 = 0;
  (this->TargetPageResolveScratch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPageResolveScratch).ArrayNum = 0;
  (this->TargetPageResolveScratch).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->TargetPageResolveScratchCritSec,4000);
  (this->EventLogVerbosity).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventLogVerbosity).Pairs.ArrayNum = 0;
  (this->EventLogVerbosity).Pairs.ArrayMax = 0;
  return this;
}

// ~FDocumentBuilderRegistry @ 14b350a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FDocumentBuilderRegistry::~FDocumentBuilderRegistry
          (FDocumentBuilderRegistry *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
  *this_00;
  undefined1 *puVar1;
  FMetaSoundFrontendDocumentBuilder *this_01;
  FWeakObjectPtr *this_02;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  FDocumentBuilderRegistry *pFVar6;
  longlong *plVar7;
  bool bVar8;
  UObject *pUVar9;
  IMetasoundUObjectRegistry *pIVar10;
  FMetasoundAssetBase *this_03;
  FString *pFVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  wchar_t *pwVar19;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  FDocumentBuilderRegistry *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  iVar16 = 0;
  lpCriticalSection = &this->BuildersCriticalSection;
  local_88._0_8_ = (void *)0x0;
  local_88._8_8_ = 0;
  this->_padding_ = (longlong)&___7FDocumentBuilderRegistry_Engine_Metasound__6B_;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_e8 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->Builders;
  if ((TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
       *)local_88 != this_00) {
    if ((void *)local_88._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    local_88._0_8_ = *(undefined8 *)&this_00->field_0x0;
    puVar1 = &(this->Builders).field_0x10;
    *(undefined8 *)&this_00->field_0x0 = 0;
    local_88._8_8_ = *(undefined8 *)&(this->Builders).field_0x8;
    *(undefined8 *)&(this->Builders).field_0x8 = 0;
    if (local_88 + 0x10 != puVar1) {
      if (*(longlong *)&(this->Builders).field_0x20 == 0) {
        local_88._16_8_ = *(undefined8 *)puVar1;
        local_88._24_8_ = *(undefined8 *)&(this->Builders).field_0x18;
      }
      if (local_68 != (uint *)0x0) {
        FMemory::Free(local_68);
      }
      local_68 = *(uint **)&(this->Builders).field_0x20;
      *(undefined8 *)&(this->Builders).field_0x20 = 0;
      local_60 = *(uint *)&(this->Builders).field_0x28;
      local_5c = *(undefined4 *)&(this->Builders).field_0x2c;
      *(undefined8 *)&(this->Builders).field_0x28 = 0;
    }
    local_58 = *(undefined4 *)&(this->Builders).field_0x30;
    local_54 = *(int *)&(this->Builders).field_0x34;
    *(undefined4 *)&(this->Builders).field_0x34 = 0;
    *(undefined4 *)&(this->Builders).field_0x30 = 0xffffffff;
    if (*(longlong *)&(this->Builders).field_0x40 == 0) {
      local_50 = *(undefined4 *)&(this->Builders).field_0x38;
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    local_48 = *(void **)&(this->Builders).field_0x40;
    *(undefined8 *)&(this->Builders).field_0x40 = 0;
    local_40 = *(undefined4 *)&(this->Builders).field_0x48;
    *(undefined4 *)&(this->Builders).field_0x48 = 0;
  }
  TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
           *)this_00);
  if ((3 < (byte)LogMetaSound._0_1_) && (local_88._8_4_ != local_54)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar17 = local_60;
  uStack_114 = 1;
  local_100 = 0;
  uStack_104 = 0;
  iStack_118 = iVar16;
  if (local_60 != 0) {
    puVar15 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar15 = local_68;
    }
    uVar18 = *puVar15;
    local_100 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
      goto LAB_14b350c81;
      uVar18 = puVar15[lVar13 + 1];
    }
    uStack_114 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_114 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_f0 = (int)lVar13;
    uStack_104 = local_100 + -1 + local_f0;
    if ((int)local_60 < (int)uStack_104) {
      uStack_104 = local_60;
    }
  }
LAB_14b350c81:
  iStack_f8 = local_88._8_4_ - local_54;
  local_120 = (longlong *)local_88;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_108 = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_104;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_114,iStack_118);
  uVar18 = local_60 & 0xffffffe0;
  TStack_d8._28_4_ = uStack_104;
  TStack_d8.BaseBitIndex = local_100;
  uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
  iVar14 = (int)local_60 >> 5;
  bVar12 = (byte)local_60;
  uStack_fc = uStack_104;
  local_e0 = local_120;
  TStack_d8.Array = local_110;
  if (((int)local_60 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar17 != local_60) {
    puVar15 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar15 = local_68;
    }
    uVar17 = -1 << (bVar12 & 0x1f) & puVar15[iVar14];
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14b350d90;
      uVar17 = puVar15[lVar13 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = (int)lVar13 + -1 + uVar18;
    if ((int)local_60 < (int)uVar17) {
      uVar17 = local_60;
    }
  }
LAB_14b350d90:
  pwVar19 = L"";
  while( true ) {
    plVar7 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_d8.CurrentBitIndex == uVar17) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar7 == (longlong *)local_88)) break;
    this_02 = (FWeakObjectPtr *)(*plVar7 + ((longlong)TStack_d8.CurrentBitIndex * 5 + 3) * 8);
    bVar8 = FWeakObjectPtr::IsValid(this_02);
    if (bVar8) {
      if (3 < (byte)LogMetaSound._0_1_) {
        pUVar9 = FWeakObjectPtr::Get(this_02);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar9,&local_b0,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      pUVar9 = FWeakObjectPtr::Get(this_02);
      this_01 = (FMetaSoundFrontendDocumentBuilder *)(pUVar9 + 1);
      bVar8 = FMetaSoundFrontendDocumentBuilder::IsValid(this_01);
      if (bVar8) {
        bVar8 = CanEverExecuteGraph(false);
        if (bVar8) {
          FMetaSoundFrontendDocumentBuilder::GetTransactionCount(this_01);
          lVar13 = *(longlong *)&pUVar9[1].field_0x8;
          if (lVar13 == 0) {
            pFVar11 = GetTypeName<UObject>(&local_a0);
            if ((pFVar11->Data).ArrayNum != 0) {
              pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar19);
          }
          pIVar10 = IMetasoundUObjectRegistry::Get();
          this_03 = (FMetasoundAssetBase *)(**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,lVar13);
          if (this_03 != (FMetasoundAssetBase *)0x0) {
            FMetasoundAssetBase::UnregisterGraphWithFrontend(this_03);
          }
        }
        FMetaSoundFrontendDocumentBuilder::FinishBuilding(this_01);
      }
    }
    else {
      iVar16 = iVar16 + 1;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  if ((3 < (byte)LogMetaSound._0_1_) && (0 < iVar16)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  pFVar6 = local_e8;
  pFVar3 = (local_e8->EventLogVerbosity).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar6->TargetPageResolveScratchCritSec);
  pFVar3 = (pFVar6->TargetPageResolveScratch).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnResolveProjectPage);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined4 *)&(this->Builders).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Builders).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  return;
}

// operator() @ 14b35c6b0

void __thiscall
`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID'::__l2::<lambda_1>::operator()
          (void *this,FGuid *param_1,FMetasoundFrontendLiteral *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  
  lVar1 = *(longlong *)this;
  pFVar7 = (ForAnyElementType *)(lVar1 + 0x98);
  if (((FGuid *)pFVar7->Data <= param_1) &&
     (param_1 < (FGuid *)pFVar7->Data + *(int *)(lVar1 + 0xa4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar1 + 0xa0);
  if (iVar6 == *(int *)(lVar1 + 0xa4)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar7,(int *)(lVar1 + 0xa4));
  }
  *(int *)(lVar1 + 0xa0) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->C;
  pFVar2 = pFVar7->Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = uVar4;
  return;
}

// operator() @ 14b35c770

void __thiscall
`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  FGuid *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  
  lVar2 = *(longlong *)this;
  pFVar1 = &param_1->PageID;
  pFVar8 = (ForAnyElementType *)(lVar2 + 0x98);
  if ((pFVar8->Data <= pFVar1) && (pFVar1 < pFVar8->Data + (longlong)*(int *)(lVar2 + 0xa4) * 0x10))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)(lVar2 + 0xa0);
  if (iVar7 == *(int *)(lVar2 + 0xa4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar8,(int *)(lVar2 + 0xa4));
  }
  *(int *)(lVar2 + 0xa0) = iVar7 + 1;
  uVar5 = *(undefined8 *)&(param_1->PageID).C;
  pFVar3 = pFVar8->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)pFVar1;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  return;
}

// operator() @ 14b35c830

void __thiscall
`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageIDInternal'::__l2::<lambda_1>::
operator()(void *this,FMetaSoundPageSettings *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = *(uint **)((longlong)this + 8);
  **(byte **)this =
       **(byte **)this |
       (((puVar3[2] == (param_1->UniqueId).C && puVar3[1] == (param_1->UniqueId).B) &&
        puVar3[3] == (param_1->UniqueId).D) && *puVar3 == (param_1->UniqueId).A);
  if ((**(char **)this != '\0') && (**(char **)((longlong)this + 0x10) == '\0')) {
    puVar3 = (uint *)**(undefined8 **)((longlong)this + 0x18);
    puVar4 = puVar3 + (longlong)*(int *)(*(undefined8 **)((longlong)this + 0x18) + 1) * 4;
    if (puVar3 != puVar4) {
      while ((((param_1->UniqueId).B != puVar3[1] || (param_1->UniqueId).C != puVar3[2]) ||
             (param_1->UniqueId).D != puVar3[3]) || (param_1->UniqueId).A != *puVar3) {
        puVar3 = puVar3 + 4;
        if (puVar3 == puVar4) {
          return;
        }
      }
      **(char **)((longlong)this + 0x10) = '\x01';
      puVar1 = *(undefined8 **)((longlong)this + 0x20);
      uVar2 = *(undefined8 *)&(param_1->UniqueId).C;
      *puVar1 = *(undefined8 *)&param_1->UniqueId;
      puVar1[1] = uVar2;
    }
  }
  return;
}

// AddBuilderInternal @ 14b3632e0

void __thiscall
Metasound::Engine::FDocumentBuilderRegistry::AddBuilderInternal
          (FDocumentBuilderRegistry *this,FMetasoundFrontendClassName *param_1,
          UMetaSoundBuilderBase *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UMetaSoundBuilderBase *local_res8;
  FWeakObjectPtr local_res20;
  FMetasoundFrontendClassName *local_28;
  FWeakObjectPtr *local_20;
  
  lpCriticalSection = &this->BuildersCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMetaSoundBuilderBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMetaSoundBuilderBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    local_20 = &local_res20;
    local_28 = param_1;
    TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
                *)&this->Builders,
               (TPairInitializer<FMetasoundFrontendClassName_const_&,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_&&>
                *)&local_res8,(bool *)&local_28);
                    /* WARNING: Could not recover jumptable at 0x00014b36338a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CanPostEventLog @ 14b3681b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Engine::FDocumentBuilderRegistry::CanPostEventLog
          (FDocumentBuilderRegistry *this,ELogEvent param_1,Type param_2)

{
  Type *pTVar1;
  
  pTVar1 = TSortedMap<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent,enum_ELogVerbosity::Type,TSizedDefaultAllocator<32>,TLess<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_>_>
           ::Find(&this->EventLogVerbosity,param_1);
  if (pTVar1 != (Type *)0x0) {
    return param_2 <= *pTVar1;
  }
  return true;
}

// FindBuilder @ 14b3a6870

FMetaSoundFrontendDocumentBuilder * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FindBuilder
          (FDocumentBuilderRegistry *this,FMetasoundFrontendClassName *param_1,
          FTopLevelAssetPath *param_2)

{
  UMetaSoundBuilderBase *pUVar1;
  FMetaSoundFrontendDocumentBuilder *pFVar2;
  
  pUVar1 = FindBuilderObject(this,param_1,param_2);
  pFVar2 = (FMetaSoundFrontendDocumentBuilder *)0x0;
  if (pUVar1 != (UMetaSoundBuilderBase *)0x0) {
    pFVar2 = &pUVar1->Builder;
  }
  return pFVar2;
}

// FindBuilder @ 14b3a68a0

FMetaSoundFrontendDocumentBuilder * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FindBuilder
          (FDocumentBuilderRegistry *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  TScriptInterface<IMetaSoundDocumentInterface_const_> *pTVar1;
  UMetaSoundBuilderBase *pUVar2;
  FMetaSoundFrontendDocumentBuilder *pFVar3;
  TScriptInterface<IMetaSoundDocumentInterface_const_> local_18;
  
  pTVar1 = TScriptInterface<IMetaSoundDocumentInterface_const_>::
           TScriptInterface<IMetaSoundDocumentInterface_const_><IMetaSoundDocumentInterface>
                     (&local_18,param_1);
  pUVar2 = FindBuilderObject(this,pTVar1);
  pFVar3 = (FMetaSoundFrontendDocumentBuilder *)0x0;
  if (pUVar2 != (UMetaSoundBuilderBase *)0x0) {
    pFVar3 = &pUVar2->Builder;
  }
  return pFVar3;
}

// FindBuilderObject @ 14b3a6930

UMetaSoundBuilderBase * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FindBuilderObject
          (FDocumentBuilderRegistry *this,FMetasoundFrontendClassName *param_1,
          FTopLevelAssetPath *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr *pFVar1;
  UObject *pUVar2;
  int iVar3;
  bool bVar4;
  UMetaSoundBuilderBase *pUVar5;
  FString *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  UMetaSoundBuilderBase *pUVar9;
  UMetaSoundBuilderBase *pUVar10;
  ForAnyElementType this_00;
  undefined1 local_res8 [8];
  TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58;
  FTopLevelAssetPath local_48;
  FString local_38;
  
  lpCriticalSection = &this->BuildersCriticalSection;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->Builders,param_1,&local_58,false);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = local_58.ArrayNum;
  uVar7 = (ulonglong)local_58.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_58.AllocatorInstance.Data + uVar7 * 8);
  pUVar9 = (UMetaSoundBuilderBase *)0x0;
  this_00.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pUVar5 = pUVar9;
    if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
    pUVar5 = (UMetaSoundBuilderBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
    pUVar10 = pUVar9;
    if ((pUVar5 != (UMetaSoundBuilderBase *)0x0) &&
       (bVar4 = FMetaSoundFrontendDocumentBuilder::IsValid(&pUVar5->Builder), pUVar10 = pUVar5,
       bVar4)) {
      pUVar2 = *(UObject **)&(pUVar5->Builder).DocumentInterface;
      if (pUVar2 == (UObject *)0x0) {
        pFVar6 = GetTypeName<UObject>(&local_38);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar8);
      }
      local_48.PackageName.ComparisonIndex.Value = 0;
      local_48.PackageName.Number = 0;
      local_48.AssetName.ComparisonIndex.Value = 0;
      local_48.AssetName.Number = 0;
      bVar4 = FTopLevelAssetPath::TrySetPath(&local_48,pUVar2);
      if ((bVar4) &&
         ((param_2->PackageName == (FName)0x0 ||
          ((pUVar10 = pUVar9, param_2->PackageName == local_48.PackageName &&
           (param_2->AssetName == local_48.AssetName)))))) break;
    }
    uVar7 = local_58._8_8_ & 0xffffffff;
    this_00.Data = this_00.Data + 8;
    pUVar9 = pUVar10;
  }
  if ((FWeakObjectPtr *)local_58.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return pUVar5;
}

// FindBuilderObject @ 14b3a6aa0

UMetaSoundBuilderBase * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FindBuilderObject
          (FDocumentBuilderRegistry *this,
          TScriptInterface<IMetaSoundDocumentInterface_const_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  UMetaSoundBuilderBase *pUVar6;
  UObject *pUVar7;
  FString *pFVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  ForAnyElementType this_00;
  UMetaSoundBuilderBase *pUVar11;
  UMetaSoundBuilderBase *pUVar12;
  undefined1 local_res10 [8];
  TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  lVar2 = *(longlong *)param_1;
  pUVar6 = (UMetaSoundBuilderBase *)0x0;
  if (lVar2 != 0) {
    lVar5 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x18))();
    lpCriticalSection = &this->BuildersCriticalSection;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
    ::MultiFind<TSizedDefaultAllocator<32>_>
              (&this->Builders,(FMetasoundFrontendClassName *)(lVar5 + 0x88),&local_38,false);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar3 = local_38.ArrayNum;
    uVar9 = (ulonglong)local_38.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + uVar9 * 8);
    this_00.Data = local_38.AllocatorInstance.Data;
    pUVar11 = pUVar6;
    while( true ) {
      if ((int)uVar9 != iVar3) {
        `TCheckedPointerIterator<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      pUVar6 = pUVar11;
      if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
      pUVar6 = (UMetaSoundBuilderBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      pUVar12 = pUVar11;
      if ((pUVar6 != (UMetaSoundBuilderBase *)0x0) &&
         (bVar4 = FMetaSoundFrontendDocumentBuilder::IsValid(&pUVar6->Builder), pUVar12 = pUVar6,
         bVar4)) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
        if (*(longlong *)&pUVar7[1].field_0x8 == 0) {
          pFVar8 = GetTypeName<UObject>(&local_28);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar10);
        }
        pUVar12 = pUVar11;
        if (*(longlong *)&pUVar7[1].field_0x8 == lVar2) break;
      }
      uVar9 = local_38._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 8;
      pUVar11 = pUVar12;
    }
    if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return pUVar6;
}

// FindBuilderObjects @ 14b3a6bf0

TArray<UMetaSoundBuilderBase_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FindBuilderObjects
          (FDocumentBuilderRegistry *this,
          TArray<UMetaSoundBuilderBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendClassName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<UMetaSoundBuilderBase_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  ForAnyElementType this_00;
  undefined1 local_res8 [8];
  UObject *local_38;
  TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  lpCriticalSection = &this->BuildersCriticalSection;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->Builders,param_1,&local_30,false);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = local_30.ArrayNum;
  uVar8 = (ulonglong)local_30.ArrayNum;
  if (local_30.ArrayNum != 0) {
    pFVar1 = (FWeakObjectPtr *)(local_30.AllocatorInstance.Data + uVar8 * 8);
    this_00.Data = local_30.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
      if (bVar5) {
        local_38 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 <
            pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<UMetaSoundBuilderBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_38;
      }
      uVar8 = local_30._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 8;
    }
  }
  if ((FWeakObjectPtr *)local_30.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindOutermostBuilder @ 14b3a8d00

FMetaSoundFrontendDocumentBuilder * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FindOutermostBuilder
          (FDocumentBuilderRegistry *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  void *pvVar4;
  FMetaSoundFrontendDocumentBuilder *pFVar5;
  UObject *local_18;
  void *local_10;
  
  this_00 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    if (this_00 == (UObject *)0x0) {
      pvVar4 = (void *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocumentInterface.GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundDocumentBuilderRegistry.cpp"
                         ,0x15f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMetaSoundFrontendDocumentBuilder *)(*pcVar1)();
        return pFVar5;
      }
      goto LAB_14b3a8d88;
    }
  }
  else {
    UE::GC::MarkAsReachable(this_00);
  }
  pUVar3 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
  pvVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
LAB_14b3a8d88:
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  local_18 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_00);
  }
  local_10 = pvVar4;
  pFVar5 = (FMetaSoundFrontendDocumentBuilder *)(*pcVar1)(this,&local_18);
  return pFVar5;
}

// FinishBuilding @ 14b3a9620

bool __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FinishBuilding
          (FDocumentBuilderRegistry *this,FMetasoundFrontendClassName *param_1,
          FTopLevelAssetPath *param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  UMetaSoundBuilderBase *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  UMetaSoundBuilderBase *local_48;
  TBaseKeyIterator<0> local_40;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  pUVar4 = FindBuilderObject(this,param_1,param_2);
  if (pUVar4 != (UMetaSoundBuilderBase *)0x0) {
    FinishBuildingInternal(this,pUVar4,param_3);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_48 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_48);
  }
  FVar2 = local_res8;
  lpCriticalSection = &this->BuildersCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = FVar2;
  TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_40,
             (TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)&this->Builders,(TRetainedRef<FMetasoundFrontendClassName_const_>)param_1);
  do {
    bVar3 = false;
    if (local_40.Index == -1) {
LAB_14b3a9772:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar3;
    }
    bVar3 = TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>::
            UEOpEquals<UMetaSoundBuilderBase,bool>
                      ((TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr> *)
                       (*(longlong *)&(local_40.Set)->Elements +
                       ((longlong)local_40.Index * 5 + 3) * 8),
                       (TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr> *)&local_res8);
    if (bVar3) {
      TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::RemoveByIndex(local_40.Set,local_40.Index);
      bVar3 = true;
      goto LAB_14b3a9772;
    }
    bVar3 = false;
    if (local_40.NextIndex == -1) goto LAB_14b3a9772;
    lVar1 = *(longlong *)&(local_40.Set)->Elements;
    local_40.Index = local_40.NextIndex;
    do {
      lVar5 = (longlong)local_40.Index;
      local_40.NextIndex = *(int *)(lVar1 + 0x20 + lVar5 * 0x28);
      if (((*(FName *)(lVar1 + lVar5 * 0x28) == (local_40.Key)->Namespace) &&
          (*(FName *)(lVar1 + 8 + lVar5 * 0x28) == (local_40.Key)->Name)) &&
         (*(FName *)(lVar1 + 0x10 + lVar5 * 0x28) == (local_40.Key)->Variant)) break;
      local_40.Index = local_40.NextIndex;
    } while (local_40.NextIndex != -1);
  } while( true );
}

// FinishBuilding @ 14b3a97a0

bool __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FinishBuilding
          (FDocumentBuilderRegistry *this,FMetasoundFrontendClassName *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<UMetaSoundBuilderBase_*,TSizedDefaultAllocator<32>_> local_28;
  
  FindBuilderObjects(this,&local_28,param_1);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UMetaSoundBuilderBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FinishBuildingInternal(this,*(UMetaSoundBuilderBase **)FVar4.Data,param_2);
    FVar4.Data = FVar4.Data + 8;
  }
  lpCriticalSection = &this->BuildersCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->Builders).field_0x8 == *(int *)&(this->Builders).field_0x34) {
      iVar3 = 0;
    }
    else {
      uVar2 = ::GetTypeHash(param_1);
      iVar3 = TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              ::RemoveImpl<FMetasoundFrontendClassName>
                        ((TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
                          *)&this->Builders,uVar2,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FinishBuildingInternal @ 14b3a9890

void __thiscall
Metasound::Engine::FDocumentBuilderRegistry::FinishBuildingInternal
          (FDocumentBuilderRegistry *this,UMetaSoundBuilderBase *param_1,bool param_2)

{
  FMetaSoundFrontendDocumentBuilder *this_00;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  IMetasoundUObjectRegistry *pIVar4;
  FMetasoundAssetBase *this_01;
  FString *pFVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  this_00 = &param_1->Builder;
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsValid(this_00);
  if (bVar2) {
    bVar2 = CanEverExecuteGraph(false);
    if (bVar2) {
      iVar3 = FMetaSoundFrontendDocumentBuilder::GetTransactionCount(this_00);
      if ((param_2) || (param_1->LastTransactionRegistered != iVar3)) {
        lVar1 = *(longlong *)&(param_1->Builder).DocumentInterface;
        if (lVar1 == 0) {
          pFVar5 = GetTypeName<UObject>(&local_18);
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar6);
        }
        pIVar4 = IMetasoundUObjectRegistry::Get();
        this_01 = (FMetasoundAssetBase *)(**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,lVar1);
        if (this_01 != (FMetasoundAssetBase *)0x0) {
          FMetasoundAssetBase::UnregisterGraphWithFrontend(this_01);
        }
      }
    }
    FMetaSoundFrontendDocumentBuilder::FinishBuilding(this_00);
  }
  return;
}

// GetOnResolveProjectPageOverrideDelegate @ 14b3be590

TDelegate<FGuid___cdecl(TArray<FGuid,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
Metasound::Engine::FDocumentBuilderRegistry::GetOnResolveProjectPageOverrideDelegate
          (FDocumentBuilderRegistry *this)

{
  return &this->OnResolveProjectPage;
}

// GetPageOrder @ 14b3beed0

TArrayView<FGuid_const_,int> * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::GetPageOrder
          (FDocumentBuilderRegistry *this,TArrayView<FGuid_const_,int> *__return_storage_ptr__)

{
  UMetaSoundSettings::GetPageOrder(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ReloadBuilder @ 14b3d36a0

bool __thiscall
Metasound::Engine::FDocumentBuilderRegistry::ReloadBuilder
          (FDocumentBuilderRegistry *this,FMetasoundFrontendClassName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 local_res18 [8];
  TArray<UMetaSoundBuilderBase_*,TSizedDefaultAllocator<32>_> local_28;
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  bVar4 = false;
  FindBuilderObjects(this,&local_28,param_1);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMetaSoundBuilderBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar3.Data == pFVar1) break;
    UMetaSoundBuilderBase::Reload(*(UMetaSoundBuilderBase **)FVar3.Data,&local_18,false);
    FVar3.Data = FVar3.Data + 8;
    bVar4 = true;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar4;
}

// ResolveTargetPageID @ 14b3ddf10

FGuid * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID
          (FDocumentBuilderRegistry *this,FGuid *__return_storage_ptr__,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  UMetaSoundSettings *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FGuid *pFVar4;
  UClass *this_01;
  FMetaSoundPageSettings *pFVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  ::FName::FName(&local_res8,"Windows");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnResolveProjectPage,
             &local_38);
  if (((*(int *)&(this->OnResolveProjectPage).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(this->OnResolveProjectPage).field_0x8, plVar6 == (longlong *)0x0))
     || (cVar2 = (**(code **)(*plVar6 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    this_01 = UMetaSoundSettings::StaticClass();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    this_00 = (UMetaSoundSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    if (this_00 != (UMetaSoundSettings *)0x0) {
      pFVar5 = UMetaSoundSettings::GetTargetPageSettings(this_00);
      ResolveTargetPageIDInternal
                (this,__return_storage_ptr__,this_00,param_1,&pFVar5->UniqueId,local_res8);
      return __return_storage_ptr__;
    }
    local_48 = Frontend::DefaultPageID.A;
    uStack_44 = Frontend::DefaultPageID.B;
    uStack_40 = Frontend::DefaultPageID.C;
    uStack_3c = Frontend::DefaultPageID.D;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnResolveProjectPage
               ,&local_20);
    if (*(int *)&(this->OnResolveProjectPage).field_0x10 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)&(this->OnResolveProjectPage).field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_48,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)param_1->ArrayNum * 0x10;
    for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
      if (((uStack_3c == *(uint *)(pFVar7 + 0xc) && uStack_40 == *(uint *)(pFVar7 + 8)) &&
          uStack_44 == *(uint *)(pFVar7 + 4)) && local_48 == *(uint *)pFVar7) goto LAB_14b3de098;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPageIDsToResolve.Contains(ResolvedPageID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundDocumentBuilderRegistry.cpp"
                       ,0x228,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGuid *)(*pcVar1)();
      return pFVar4;
    }
  }
LAB_14b3de098:
  __return_storage_ptr__->A = local_48;
  __return_storage_ptr__->B = uStack_44;
  __return_storage_ptr__->C = uStack_40;
  __return_storage_ptr__->D = uStack_3c;
  return __return_storage_ptr__;
}

// ResolveTargetPageID @ 14b3de0c0

FGuid * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID
          (FDocumentBuilderRegistry *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendClassInput *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  FLLMScope local_res20 [2];
  FName local_58;
  FDocumentBuilderRegistry *local_50;
  FMemScope local_48;
  code *local_40;
  FDocumentBuilderRegistry **local_38;
  
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_48,&local_58,true);
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FDocumentBuilderRegistry::ResolveTargetPageID_ClassInput");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId478,
               "FDocumentBuilderRegistry::ResolveTargetPageID_ClassInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundDocumentBuilderRegistry.cpp"
               ,0x1de);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId478);
  }
  pTVar6 = FMetasoundFrontendClassInput::GetDefaults(param_1);
  if (pTVar6->ArrayNum == 1) {
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)pTVar6->ArrayNum * 0x68 + -0x10;
    uVar4 = *(undefined8 *)pFVar2;
    uVar5 = *(undefined8 *)(pFVar2 + 8);
    __return_storage_ptr__->A = (int)uVar4;
    __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->C = (int)uVar5;
    __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
  }
  else {
    lpCriticalSection = &this->TargetPageResolveScratchCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->TargetPageResolveScratch).ArrayMax;
    (this->TargetPageResolveScratch).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->TargetPageResolveScratch).AllocatorInstance,0,piVar1);
    }
    local_38 = &local_50;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID'::__l2::<lambda_1>,void,FGuid_const_&,FMetasoundFrontendLiteral_const_&>
               ::Call;
    local_50 = this;
    FMetasoundFrontendClassInput::IterateDefaults
              (param_1,(TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_const_&)>
                        *)&local_40);
    ResolveTargetPageID(this,__return_storage_ptr__,&this->TargetPageResolveScratch);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res20);
  return __return_storage_ptr__;
}

// ResolveTargetPageID @ 14b3de2b0

FGuid * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID
          (FDocumentBuilderRegistry *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendGraphClass *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  FLLMScope local_res18 [2];
  FName local_res20;
  FDocumentBuilderRegistry *local_48;
  FMemScope local_40;
  code *local_38;
  FDocumentBuilderRegistry **local_30;
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_40,&local_res20,true);
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FDocumentBuilderRegistry::ResolveTargetPageID_GraphClass");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId449,
               "FDocumentBuilderRegistry::ResolveTargetPageID_GraphClass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundDocumentBuilderRegistry.cpp"
               ,0x1c1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId449);
  }
  if ((param_1->PagedGraphs).ArrayNum == 1) {
    pFVar2 = (param_1->PagedGraphs).AllocatorInstance.Data +
             (longlong)(param_1->PagedGraphs).ArrayNum * 0x40 + -0x10;
    uVar4 = *(undefined8 *)pFVar2;
    uVar5 = *(undefined8 *)(pFVar2 + 8);
    __return_storage_ptr__->A = (int)uVar4;
    __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->C = (int)uVar5;
    __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
  }
  else {
    lpCriticalSection = &this->TargetPageResolveScratchCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->TargetPageResolveScratch).ArrayMax;
    (this->TargetPageResolveScratch).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->TargetPageResolveScratch).AllocatorInstance,0,piVar1);
    }
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
               ::Call;
    local_48 = this;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (param_1,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_38);
    ResolveTargetPageID(this,__return_storage_ptr__,&this->TargetPageResolveScratch);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// ResolveTargetPageID @ 14b3de4b0

FGuid * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID
          (FDocumentBuilderRegistry *this,FGuid *__return_storage_ptr__,
          TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  FGuid *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res20 [8];
  FLLMScope local_78;
  FName local_74;
  LPCRITICAL_SECTION local_68;
  FMemScope local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FLLMScope::FLLMScope
            (&local_78,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_74 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_60,&local_74,true);
  iVar8 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FDocumentBuilderRegistry::ResolveTargetPageID_ClassDefaults");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId507,
               "FDocumentBuilderRegistry::ResolveTargetPageID_ClassDefaults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundDocumentBuilderRegistry.cpp"
               ,0x1fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId507);
  }
  if (param_1->ArrayNum == 1) {
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x68 + -0x10;
    uVar6 = *(undefined8 *)pFVar14;
    uVar7 = *(undefined8 *)(pFVar14 + 8);
    __return_storage_ptr__->A = (int)uVar6;
    __return_storage_ptr__->B = (int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->C = (int)uVar7;
    __return_storage_ptr__->D = (int)((ulonglong)uVar7 >> 0x20);
  }
  else {
    local_68 = (LPCRITICAL_SECTION)&this->TargetPageResolveScratchCritSec;
    if (local_68 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_68);
    pTVar2 = &this->TargetPageResolveScratch;
    piVar1 = &(this->TargetPageResolveScratch).ArrayMax;
    (this->TargetPageResolveScratch).ArrayNum = 0;
    if ((this->TargetPageResolveScratch).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pFVar12 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar14 = pFVar12 + 0x58;
    pFVar13 = pFVar12 + (longlong)iVar3 * 0x68;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassInputDefault_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == pFVar13) break;
      local_58 = *(undefined8 *)pFVar14;
      uStack_50 = *(undefined8 *)(pFVar14 + 8);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FGuid *)(*pcVar5)();
        return pFVar11;
      }
      iVar10 = (this->TargetPageResolveScratch).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar12 = pFVar12 + 0x68;
      (this->TargetPageResolveScratch).ArrayNum = iVar10 + 1;
      pFVar14 = pFVar14 + 0x68;
      pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar4 = local_58;
      *(undefined8 *)(pFVar4 + 8) = uStack_50;
    }
    ResolveTargetPageID(this,__return_storage_ptr__,pTVar2);
    LeaveCriticalSection(local_68);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(&local_78);
  return __return_storage_ptr__;
}

// ResolveTargetPageIDInternal @ 14b3de7c0

/* WARNING: Enum "Type": Some values do not have unique names */

FGuid * __thiscall
Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageIDInternal
          (FDocumentBuilderRegistry *this,FGuid *__return_storage_ptr__,UMetaSoundSettings *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2,FGuid *param_3,FName param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FGuid *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  char local_res10 [16];
  undefined1 local_res20 [8];
  FString local_98;
  FString local_88;
  code *local_78;
  undefined1 **local_70;
  undefined1 *local_68;
  FGuid *local_60;
  char *local_58;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_50;
  FGuid *local_48;
  
  local_68 = local_res20;
  local_58 = local_res10;
  local_70 = &local_68;
  local_res10[0] = '\0';
  local_res20[0] = 0;
  *__return_storage_ptr__ = Frontend::DefaultPageID;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageIDInternal'::__l2::<lambda_1>,void,FMetaSoundPageSettings_const_&>
             ::Call;
  local_60 = param_3;
  local_50 = param_2;
  local_48 = __return_storage_ptr__;
  UMetaSoundSettings::IteratePageSettings
            (param_1,(TFunctionRef<void___cdecl(FMetaSoundPageSettings_const_&)> *)&local_78,true);
  if (local_res10[0] == '\0') {
    uVar9 = param_2->ArrayNum - 1;
    uVar7 = 0;
    if ((int)uVar9 < param_2->ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FGuid *)(*pcVar3)();
      return pFVar8;
    }
    iVar1 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (1 < (byte)LogMetaSound._0_1_) {
      if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -0x10) == 0 &&
           *(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -0xc) == 0) &&
          *(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -8) == 0) &&
          *(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -4) == 0) {
        pFVar11 = (FScriptContainerElement *)&param_1->DefaultPageSettings;
      }
      else {
        pFVar10 = (param_1->PageSettings).AllocatorInstance.Data;
        pFVar12 = pFVar10 + (longlong)(param_1->PageSettings).ArrayNum * 0x18;
        while ((pFVar11 = (FScriptContainerElement *)0x0, pFVar10 != pFVar12 &&
               (pFVar11 = pFVar10,
               ((*(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -0xc) != *(uint *)&pFVar10[4].field_0x0
                || *(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -8) != *(uint *)&pFVar10[8].field_0x0
                ) || *(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -4) !=
                     *(uint *)&pFVar10[0xc].field_0x0) ||
               *(uint *)(pFVar2 + (longlong)iVar1 * 0x10 + -0x10) !=
               ((FGuid *)&pFVar10->field_0x0)->A))) {
          pFVar10 = pFVar10 + 0x18;
        }
      }
      if (pFVar11 == (FScriptContainerElement *)0x0) {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(pFVar2 + (longlong)iVar1 * 0x10 + -0x10),&local_88,Digits);
      }
      else {
        ::FName::ToString((FName *)(pFVar11 + 0x10),&local_88);
      }
      if (((param_3->A == 0 && param_3->B == 0) && param_3->C == 0) && param_3->D == 0) {
        pFVar12 = (FScriptContainerElement *)&param_1->DefaultPageSettings;
      }
      else {
        pFVar12 = (param_1->PageSettings).AllocatorInstance.Data;
        pFVar10 = pFVar12 + (longlong)(param_1->PageSettings).ArrayNum * 0x18;
        for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 0x18) {
          if (((param_3->B == *(uint *)&pFVar12[4].field_0x0 &&
               param_3->C == *(uint *)&pFVar12[8].field_0x0) &&
              param_3->D == *(uint *)&pFVar12[0xc].field_0x0) &&
              param_3->A == ((FGuid *)&pFVar12->field_0x0)->A) goto LAB_14b3de9ca;
        }
        pFVar12 = (FScriptContainerElement *)0x0;
      }
LAB_14b3de9ca:
      if (pFVar12 == (FScriptContainerElement *)0x0) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        FGuid::AppendString(param_3,&local_98,Digits);
      }
      else {
        ::FName::ToString((FName *)(pFVar12 + 0x10),&local_98);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x10 + -0x10);
    uVar5 = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x10 + -8);
    __return_storage_ptr__->A = (int)uVar4;
    __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->C = (int)uVar5;
    __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
  }
  return __return_storage_ptr__;
}

// SetEventLogVerbosity @ 14b3df510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FDocumentBuilderRegistry::SetEventLogVerbosity
          (FDocumentBuilderRegistry *this,ELogEvent param_1,Type param_2)

{
  Type *pTVar1;
  ELogEvent local_res10 [24];
  
  local_res10[0] = param_1;
  pTVar1 = TSortedMap<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent,enum_ELogVerbosity::Type,TSizedDefaultAllocator<32>,TLess<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_>_>
           ::Find(&this->EventLogVerbosity,param_1);
  if (pTVar1 == (Type *)0x0) {
    pTVar1 = TSortedMap<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent,enum_ELogVerbosity::Type,TSizedDefaultAllocator<32>,TLess<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_>_>
             ::Emplace<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_&>
                       (&this->EventLogVerbosity,local_res10);
  }
  *pTVar1 = param_2;
  return;
}

