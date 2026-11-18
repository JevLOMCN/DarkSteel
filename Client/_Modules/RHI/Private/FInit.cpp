// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FInit @ 145cd0d40

FInit * __thiscall `RHIValidation::GetAutoLogResourceNames'::__l2::FInit::FInit(void *this)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FInit *pFVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar6,L"-RHIValidationLog=",&local_58,false,(wchar_t **)0x0);
  if (bVar4) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    while( true ) {
      ::FString::FString(&local_28,L",");
      bVar4 = ::FString::Split(&local_58,&local_28,&local_48,&local_38);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar4) break;
      ::FString::TrimStartAndEndInline(&local_48);
      if ((*(FString **)this <= &local_48) &&
         (&local_48 < *(FString **)this + *(int *)((longlong)this + 0xc))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FInit *)(*pcVar2)();
          return pFVar7;
        }
      }
      iVar5 = *(int *)((longlong)this + 8);
      if (iVar5 == *(int *)((longlong)this + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,this,(int *)((longlong)this + 0xc));
      }
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
      pFVar9 = (ForAnyElementType *)((longlong)iVar5 * 0x10 + *(longlong *)this);
      *(int *)((longlong)this + 8) = iVar5 + 1;
      pFVar9->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      lVar8 = (longlong)local_48.Data.ArrayNum;
      *(int *)&pFVar9[1].Data = local_48.Data.ArrayNum;
      if (local_48.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,pFVar9,local_48.Data.ArrayNum,piVar1);
        memcpy(pFVar9->Data,FVar3.Data,lVar8 * 2);
      }
      iVar5 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    }
    ::FString::TrimStartAndEndInline(&local_58);
    if ((*(FString **)this <= &local_58) &&
       (&local_58 < *(FString **)this + *(int *)((longlong)this + 0xc))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FInit *)(*pcVar2)();
        return pFVar7;
      }
    }
    iVar5 = *(int *)((longlong)this + 8);
    if (iVar5 == *(int *)((longlong)this + 0xc)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,this,(int *)((longlong)this + 0xc));
    }
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
    pFVar9 = (ForAnyElementType *)((longlong)iVar5 * 0x10 + *(longlong *)this);
    *(int *)((longlong)this + 8) = iVar5 + 1;
    pFVar9->Data = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
    lVar8 = (longlong)local_58.Data.ArrayNum;
    *(int *)&pFVar9[1].Data = local_58.Data.ArrayNum;
    if (local_58.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,pFVar9,local_58.Data.ArrayNum,piVar1);
      memcpy(pFVar9->Data,FVar3.Data,lVar8 * 2);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pwVar6 = FCommandLine::Get();
  GRHIValidationPrintHumanReadableCallStack = FParse::Param(pwVar6,L"RHIValidationLogStack");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

