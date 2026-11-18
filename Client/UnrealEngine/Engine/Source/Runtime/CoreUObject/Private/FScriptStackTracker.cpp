// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// CaptureStackTrace @ 142206590

void __thiscall
FScriptStackTracker::CaptureStackTrace(FScriptStackTracker *this,FFrame *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint local_res8 [2];
  int local_res20 [2];
  undefined1 local_78 [16];
  int local_68;
  uint *local_60;
  int *local_58;
  undefined8 local_50;
  FString local_48;
  
  if ((this->bAvoidCapturing == false) && (this->bIsEnabled != false)) {
    this->bAvoidCapturing = true;
    FFrame::GetStackTrace(param_1,(FString *)(local_78 + 8));
    uVar5 = local_78._8_8_;
    uVar11 = local_68 - 1;
    pFVar3 = (FScriptContainerElement *)local_78._8_8_;
    if (local_68 == 0) {
      uVar11 = 0;
      pFVar3 = (FScriptContainerElement *)L"";
    }
    local_res8[0] = FCrc::MemCrc_DEPRECATED(pFVar3,uVar11,0);
    if (*(int *)&(this->CRCToCallStackIndexMap).field_0x8 !=
        *(int *)&(this->CRCToCallStackIndexMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->CRCToCallStackIndexMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->CRCToCallStackIndexMap).field_0x38;
      }
      uVar7 = *(uint *)(puVar10 +
                       (ulonglong)
                       (*(int *)&(this->CRCToCallStackIndexMap).field_0x48 - 1U & local_res8[0]) * 4
                       );
      if (uVar7 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&this->CRCToCallStackIndexMap
                           );
          if (*puVar9 == local_res8[0]) {
            puVar8 = puVar9 + 1;
            if (puVar9 == (uint *)0x0) {
              puVar8 = (uint *)0x0;
            }
            if (puVar8 != (uint *)0x0) {
              uVar11 = *puVar8;
              uVar7 = 0;
              if ((int)uVar11 < (this->CallStacks).ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (this->CallStacks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18;
              *(longlong *)pFVar3 = *(longlong *)pFVar3 + 1;
              goto LAB_142206845;
            }
            break;
          }
          uVar7 = puVar9[2];
        } while (uVar7 != 0xffffffff);
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_50 = 1;
    ::FString::AssignRange(&local_48,(wchar_t *)uVar5,uVar11);
    pFVar3 = (this->CallStacks).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 <
         pFVar3 + (longlong)(this->CallStacks).ArrayMax * 0x18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20[0] = (this->CallStacks).ArrayNum;
    piVar1 = &(this->CallStacks).ArrayMax;
    if (local_res20[0] == *piVar1) {
      local_res20[0] =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,(ForAnyElementType *)this,piVar1);
    }
    (this->CallStacks).ArrayNum = local_res20[0] + 1;
    pFVar2 = (this->CallStacks).AllocatorInstance.Data + (longlong)local_res20[0] * 0x18;
    *(undefined8 *)pFVar2 = local_50;
    pFVar3 = pFVar2 + 8;
    *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
    lVar12 = (longlong)local_48.Data.ArrayNum;
    local_78._8_8_ = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar2 + 0x10) = local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum == 0) {
      *(int *)(pFVar2 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,local_48.Data.ArrayNum,
                 (int *)(pFVar2 + 0x14));
      memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,(void *)local_78._8_8_,lVar12 * 2);
    }
    local_60 = local_res8;
    local_58 = local_res20;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)&this->CRCToCallStackIndexMap,
               (TPairInitializer<unsigned_int_const_&,int_const_&> *)local_78,(bool *)&local_60);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_142206845:
    this->bAvoidCapturing = false;
    if ((FScriptContainerElement *)uVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)uVar5);
    }
  }
  return;
}

// DumpStackTraces @ 142209cf0

void __thiscall
FScriptStackTracker::DumpStackTraces(FScriptStackTracker *this,int param_1,FOutputDevice *param_2)

{
  FCallStack *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  ulonglong uVar7;
  
  if ((this->bAvoidCapturing != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAvoidCapturing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptStackTracker.cpp"
                         ,0x38,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  this->bAvoidCapturing = true;
  iVar9 = (this->CallStacks).ArrayNum;
  pFVar1 = (FCallStack *)(this->CallStacks).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar9;
  if (iVar9 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar9,0,&local_48,iVar9,&local_3c);
    ConstructItems<FScriptStackTracker::FCallStack,FScriptStackTracker::FCallStack,int>
              (local_48.Data,pFVar1,iVar9);
  }
  AlgoImpl::
  IntroSortInternal<FScriptStackTracker::FCallStack,int,FIdentityFunctor,TDereferenceWrapper<FScriptStackTracker::FCallStack,_FScriptStackTracker::DumpStackTraces_::__l2::FCompareStackCount>_>
            ((FCallStack *)local_48.Data,local_40,local_res8[0],(FCompareStackCount *)local_res8);
  uVar7 = uVar8;
  iVar9 = local_40;
  if (0 < local_40) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < iVar9) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar9 = local_40, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
    } while ((int)(uVar6 + 1) < iVar9);
  }
  FOutputDevice::LogfImpl
            (param_2,
             L"Captured %i unique callstacks totalling %llu function calls over %llu frames, averaging %5.2f calls/frame"
            );
  uVar7 = uVar8;
  if (0 < local_40) {
    do {
      uVar6 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar6 < local_40) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = local_48.Data;
      if ((longlong)param_1 < *(longlong *)(local_48.Data + uVar7)) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_38,(int)*(longlong *)(local_48.Data + uVar7));
        ::FString::AppendChars(&local_38,L"\r\n",2);
        iVar9 = *(int *)(FVar3.Data + uVar7 + 0x10);
        uVar5 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar5 = 0;
        }
        ::FString::AppendChars(&local_38,*(wchar_t **)(FVar3.Data + uVar7 + 8),uVar5);
        FOutputDevice::LogfImpl(param_2,L",%s");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar8 = (ulonglong)(uVar6 + 1);
      uVar7 = uVar7 + 0x18;
    } while ((int)(uVar6 + 1) < local_40);
  }
  this->bAvoidCapturing = false;
  DestructItems<FScriptStackTracker::FCallStack,int>((FCallStack *)local_48.Data,local_40);
  if ((FCallStack *)local_48.Data != (FCallStack *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// ResetTracking @ 14221b620

void __thiscall FScriptStackTracker::ResetTracking(FScriptStackTracker *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->bAvoidCapturing != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAvoidCapturing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptStackTracker.cpp"
                         ,0x75,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = 1 < *(int *)&(this->CRCToCallStackIndexMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                      *)&this->CRCToCallStackIndexMap);
  }
  puVar1 = &(this->CRCToCallStackIndexMap).field_0xc;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->CRCToCallStackIndexMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CRCToCallStackIndexMap).field_0x2c;
  *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CRCToCallStackIndexMap).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->CRCToCallStackIndexMap).field_0x48 = 1;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)&this->CRCToCallStackIndexMap);
  }
  DestructItems<FScriptStackTracker::FCallStack,int>
            ((FCallStack *)(this->CallStacks).AllocatorInstance.Data,(this->CallStacks).ArrayNum);
  piVar2 = &(this->CallStacks).ArrayMax;
  (this->CallStacks).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  this->StartFrameCounter = GFrameCounter;
  this->StopFrameCounter = GFrameCounter;
  return;
}

// ToggleTracking @ 142231ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FScriptStackTracker::ToggleTracking(FScriptStackTracker *this)

{
  bool bVar1;
  
  bVar1 = this->bIsEnabled;
  this->bIsEnabled = bVar1 == false;
  if (bVar1 == false) {
    if (4 < (byte)LogScriptStackTracker._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScriptStackTracker);
    }
    this->StartFrameCounter = GFrameCounter;
    return;
  }
  this->StopFrameCounter = GFrameCounter;
  if (4 < (byte)LogScriptStackTracker._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScriptStackTracker);
    return;
  }
  return;
}

