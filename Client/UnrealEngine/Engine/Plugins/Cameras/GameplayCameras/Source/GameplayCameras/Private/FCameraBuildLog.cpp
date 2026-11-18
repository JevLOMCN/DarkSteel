// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// AddMessage @ 14d547220

void __thiscall
UE::Cameras::FCameraBuildLog::AddMessage(FCameraBuildLog *this,Type param_1,FText *param_2)

{
  AddMessage(this,param_1,(UObject *)0x0,param_2);
  return;
}

// AddMessage @ 14d547240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraBuildLog::AddMessage
          (FCameraBuildLog *this,Type param_1,UObject *param_2,FText *param_3)

{
  int *piVar1;
  Type TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FCameraBuildLogMessage *this_00;
  uint uVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  Type local_28 [2];
  UObject *local_20;
  FText local_18;
  
  local_28[0] = param_1;
  local_20 = param_2;
  FText::FText(&local_18,param_3);
  pFVar7 = (this->Messages).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar7 + (longlong)(this->Messages).ArrayMax * 0x20))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(Type *)pFVar7 = local_28[0];
  *(UObject **)(pFVar7 + 8) = local_20;
  FText::FText((FText *)(pFVar7 + 0x10),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (param_1 == Error) {
    this->bHasErrors = true;
  }
  else if ((param_1 == PerformanceWarning) || (param_1 == Warning)) {
    this->bHasWarnings = true;
  }
  if (this->bForwardToLogging != false) {
    iVar5 = (this->Messages).ArrayNum;
    uVar8 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar5) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (FCameraBuildLogMessage *)
              ((this->Messages).AllocatorInstance.Data +
              (longlong)(this->Messages).ArrayNum * 0x20 + -0x20);
    TVar2 = this_00->Severity;
    if (TVar2 == Error) {
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      FCameraBuildLogMessage::ToString(this_00,&local_38);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    else if ((TVar2 == PerformanceWarning) || (TVar2 == Warning)) {
      if ((byte)LogCameraSystem._0_1_ < 3) {
        return;
      }
      FCameraBuildLogMessage::ToString(this_00,&local_48);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogCameraSystem._0_1_ < 5) {
        return;
      }
      FCameraBuildLogMessage::ToString(this_00,&local_58);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ResetMessages @ 14d5616d0

void __thiscall UE::Cameras::FCameraBuildLog::ResetMessages(FCameraBuildLog *this)

{
  int *piVar1;
  int iVar2;
  FCameraBuildLogMessage *pFVar3;
  
  piVar1 = &(this->Messages).ArrayMax;
  pFVar3 = (FCameraBuildLogMessage *)(this->Messages).AllocatorInstance.Data;
  iVar2 = (this->Messages).ArrayNum;
  if ((this->Messages).ArrayMax < 0) {
    DestructItems<UE::Cameras::FCameraBuildLogMessage,int>(pFVar3,iVar2);
    (this->Messages).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
      this->bHasWarnings = false;
      this->bHasErrors = false;
      return;
    }
  }
  else {
    DestructItems<UE::Cameras::FCameraBuildLogMessage,int>(pFVar3,iVar2);
    (this->Messages).ArrayNum = 0;
  }
  this->bHasWarnings = false;
  this->bHasErrors = false;
  return;
}

// SetForwardMessagesToLogging @ 14d564610

void __thiscall
UE::Cameras::FCameraBuildLog::SetForwardMessagesToLogging(FCameraBuildLog *this,bool param_1)

{
  this->bForwardToLogging = param_1;
  return;
}

// SetLoggingPrefix @ 14d564920

void __thiscall
UE::Cameras::FCameraBuildLog::SetLoggingPrefix(FCameraBuildLog *this,FString *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  this_00 = &this->LoggingPrefix;
  if (1 < (param_1->Data).ArrayNum) {
    pFVar2 = ::FString::FString(&local_18,": ");
    ::FString::ConcatFF(&local_28,param_1,pFVar2);
    if (this_00 != &local_28) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->LoggingPrefix).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->LoggingPrefix).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return;
  }
  ::FString::Empty(this_00);
  return;
}

