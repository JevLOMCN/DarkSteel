// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Find @ 1417565f0

FDisplayStringsForLocalizationTarget * __thiscall
FTextLocalizationManager::FDisplayStringsByLocalizationTargetId::Find
          (FDisplayStringsByLocalizationTargetId *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FDisplayStringsForLocalizationTarget *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->LocalizationTargets).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FDisplayStringsForLocalizationTarget *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FDisplayStringsForLocalizationTarget *)
           ((this->LocalizationTargets).AllocatorInstance.Data + (longlong)param_1 * 0x68);
  }
  return (FDisplayStringsForLocalizationTarget *)0x0;
}

// FindOrAdd @ 141757340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDisplayStringsForLocalizationTarget * __thiscall
FTextLocalizationManager::FDisplayStringsByLocalizationTargetId::FindOrAdd
          (FDisplayStringsByLocalizationTargetId *this,TStringView<wchar_t> *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FDisplayStringsForLocalizationTarget *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 auStackY_168 [32];
  uint local_138 [2];
  FString local_130;
  FLLMScope local_120 [2];
  FString local_118;
  TPairInitializer<TStringView<wchar_t>_&&,int_const_&> local_108;
  TStringView<wchar_t> local_f8;
  undefined8 local_e8;
  uint local_e0;
  undefined8 *local_d8;
  uint *local_d0;
  FString local_c8;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  ForAnyElementType local_98;
  undefined8 uStack_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined8 local_68;
  ForElementType<FSetElementId> FStack_60;
  ulonglong uStack_50;
  bool local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name616,L"Localization/DisplayStringsByTarget");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_120,LLMScope_Name616,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_108.Value,&LLMScope_Name616,true);
  if (param_1->Size == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InLocalizationTargetPath.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x26a,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDisplayStringsForLocalizationTarget *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_b8 = param_1->DataPtr;
  uStack_b0 = *(undefined8 *)&param_1->Size;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  pFVar9 = ::FString::ConstructFromPtrSize
                     (&local_c8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_118 != pFVar9) {
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    local_118.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_118.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FPaths::ConvertRelativePathToFull(&local_130,&local_118);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(&local_130);
  local_f8.DataPtr = (wchar_t *)local_130.Data.AllocatorInstance.Data;
  local_f8.Size = local_130.Data.ArrayNum + -1;
  if (local_130.Data.ArrayNum == 0) {
    local_f8.Size = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>
                    (local_f8.Size,(wchar_t *)local_130.Data.AllocatorInstance.Data);
  iVar6 = TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
                      *)&this->LocalizationTargetPathsToIds,uVar5,&local_f8);
  if ((iVar6 == -1) ||
     (lVar11 = (longlong)iVar6 * 0x20 + *(longlong *)&this->LocalizationTargetPathsToIds,
     lVar11 == 0)) {
    local_138[0] = 0xffffffff;
  }
  else {
    local_138[0] = *(uint *)(lVar11 + 0x10);
  }
  uVar5 = 0;
  if (local_138[0] == 0xffffffff) {
    piVar1 = &(this->LocalizationTargets).ArrayMax;
    local_a8._0_8_ = local_130.Data.AllocatorInstance.Data;
    local_a8._8_4_ = local_130.Data.ArrayNum;
    FStack_60.InlineData[0] = '\0';
    FStack_60.InlineData[1] = '\0';
    FStack_60.InlineData[2] = '\0';
    FStack_60.InlineData[3] = '\0';
    FStack_60._padding_ = 0;
    uVar7 = (this->LocalizationTargets).ArrayNum;
    local_a8._12_4_ = local_130.Data.ArrayMax;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.AllocatorInstance.InlineData[0] = '\0';
    local_88.AllocatorInstance.InlineData[1] = '\0';
    local_88.AllocatorInstance.InlineData[2] = '\0';
    local_88.AllocatorInstance.InlineData[3] = '\0';
    local_88.AllocatorInstance.InlineData[4] = '\0';
    local_88.AllocatorInstance.InlineData[5] = '\0';
    local_88.AllocatorInstance.InlineData[6] = '\0';
    local_88.AllocatorInstance.InlineData[7] = '\0';
    local_88.AllocatorInstance.InlineData[8] = '\0';
    local_88.AllocatorInstance.InlineData[9] = '\0';
    local_88.AllocatorInstance.InlineData[10] = '\0';
    local_88.AllocatorInstance.InlineData[0xb] = '\0';
    local_88.AllocatorInstance.InlineData[0xc] = '\0';
    local_88.AllocatorInstance.InlineData[0xd] = '\0';
    local_88.AllocatorInstance.InlineData[0xe] = '\0';
    local_88.AllocatorInstance.InlineData[0xf] = '\0';
    local_98.Data = (FScriptContainerElement *)0x0;
    uStack_90 = 0;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    local_68 = 0xffffffff;
    FStack_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    uStack_50 = 0;
    local_48 = false;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,(ForAnyElementType *)this,piVar1);
    }
    (this->LocalizationTargets).ArrayNum = uVar7 + 1;
    FDisplayStringsForLocalizationTarget::FDisplayStringsForLocalizationTarget
              ((FDisplayStringsForLocalizationTarget *)
               ((this->LocalizationTargets).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x68),
               (FDisplayStringsForLocalizationTarget *)local_a8);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_138[0] = uVar7;
    if (FStack_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_60.SecondaryData);
    }
    uVar3 = uStack_90 >> 0x20;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_98,0,(int *)((longlong)&uStack_90 + 4));
    }
    iVar6 = local_88.MaxBits;
    local_68 = 0xffffffff;
    local_88._24_8_ = (ulonglong)(uint)local_88.MaxBits << 0x20;
    if (0x80 < (uint)iVar6) {
      local_88.NumBits = 0;
      local_88.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    lVar11 = (longlong)(int)local_138[0];
    uVar7 = uVar5;
    if ((int)local_138[0] < (this->LocalizationTargets).ArrayNum) {
      uVar7 = ~local_138[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FDisplayStringsForLocalizationTarget *)(*pcVar2)();
        return pFVar8;
      }
    }
    pFVar10 = (this->LocalizationTargets).AllocatorInstance.Data + lVar11 * 0x68;
    local_e8 = *(undefined8 *)pFVar10;
    iVar6 = *(int *)(pFVar10 + 8);
    local_e0 = iVar6 - 1;
    if (iVar6 == 0) {
      local_e0 = uVar5;
    }
    local_d8 = &local_e8;
    local_d0 = local_138;
    TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TStringView<wchar_t>_&&,int_const_&>_>
              ((TSet<TTuple<TStringView<wchar_t>,int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,int,0>,FDefaultSetAllocator>
                *)&this->LocalizationTargetPathsToIds,&local_108,(bool *)&local_d8);
  }
  uVar7 = local_138[0];
  if (param_2 != (int *)0x0) {
    *param_2 = local_138[0];
  }
  if ((int)local_138[0] < (this->LocalizationTargets).ArrayNum) {
    uVar5 = ~local_138[0] >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDisplayStringsForLocalizationTarget *)(*pcVar2)();
      return pFVar8;
    }
  }
  pFVar10 = (this->LocalizationTargets).AllocatorInstance.Data;
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope((FMemScope *)&local_108.Value);
  FLLMScope::~FLLMScope(local_120);
  return (FDisplayStringsForLocalizationTarget *)(pFVar10 + (longlong)(int)uVar7 * 0x68);
}

// TrackTextId @ 14177fb20

void __thiscall
FTextLocalizationManager::FDisplayStringsByLocalizationTargetId::TrackTextId
          (FDisplayStringsByLocalizationTargetId *this,int param_1,int param_2,FTextId *param_3)

{
  uint uVar1;
  uint uVar2;
  FDisplayStringsForLocalizationTarget *pFVar3;
  uint uVar4;
  uint uVar5;
  FLLMScope local_res10 [2];
  FTextId local_res18;
  FMemScope local_28 [2];
  
  if (param_1 != param_2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name651,L"Localization/DisplayStringsByTarget");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res10,LLMScope_Name651,false,None,Default,true);
    FMemScope::FMemScope(local_28,&LLMScope_Name651,true);
    pFVar3 = Find(this,param_1);
    if (((pFVar3 != (FDisplayStringsForLocalizationTarget *)0x0) && (pFVar3->bIsMounted != false))
       && (*(int *)&(pFVar3->TextIds).Elements.field_0x8 !=
           *(int *)&(pFVar3->TextIds).Elements.field_0x34)) {
      uVar1 = ::GetTypeHash(&param_3->Key);
      uVar2 = ::GetTypeHash(&param_3->Namespace);
      uVar5 = uVar2 - uVar1 ^ uVar1 >> 0xd;
      uVar2 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
      uVar4 = (uVar1 - uVar2) - uVar5 ^ uVar2 >> 0xd;
      uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
      uVar1 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
      uVar2 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
      uVar4 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 3;
      uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 10;
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::RemoveImpl<FTextId>
                (&pFVar3->TextIds,uVar1 >> 0xf ^ (uVar2 - uVar1) - uVar4,param_3);
    }
    pFVar3 = Find(this,param_2);
    if ((pFVar3 != (FDisplayStringsForLocalizationTarget *)0x0) && (pFVar3->bIsMounted != false)) {
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::Emplace<FTextId_const_&>
                (&pFVar3->TextIds,&local_res18,(bool *)param_3);
    }
    FMemScope::~FMemScope(local_28);
    FLLMScope::~FLLMScope(local_res10);
  }
  return;
}

