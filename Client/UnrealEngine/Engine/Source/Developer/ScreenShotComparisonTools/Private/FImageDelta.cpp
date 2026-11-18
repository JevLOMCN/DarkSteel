// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 1

// Save @ 148c4a0f0

void __thiscall FImageDelta::Save(FImageDelta *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FName *pFVar7;
  IImageWrapperModule *pIVar8;
  IFileManager *pIVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  int iVar12;
  FName local_res10;
  uint in_stack_ffffffffffffff40;
  uint uVar13;
  FString local_a8;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_48;
  
  local_res10.ComparisonIndex.Value = 0;
  uVar13 = (param_1->Data).ArrayNum;
  lVar11 = (longlong)(int)uVar13;
  bVar3 = 1 < (int)uVar13;
  if (bVar3) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = uVar13;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_88,uVar13,&local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,pFVar1,lVar11 * 2);
    pFVar6 = &local_88;
  }
  else {
    pwVar5 = FWindowsPlatformProcess::UserTempDir();
    pFVar6 = ::FString::FString(&local_78,pwVar5);
    uVar13 = in_stack_ffffffffffffff40;
  }
  local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar3) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::GetExtension(&local_68,&local_a8,false);
  iVar12 = (pFVar6->Data).ArrayNum;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (iVar12 < 2) {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar10.Data = local_a8.Data.AllocatorInstance.Data;
    }
    pFVar6 = FPaths::CreateTempFilename(&local_58,(wchar_t *)FVar10.Data,L"ImageCompare-",L".png");
    if (&local_a8 != pFVar6) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = ::FName::FName(&local_res10,"ImageWrapper");
  pIVar8 = FModuleManager::GetModuleChecked<IImageWrapperModule>(*pFVar7);
  (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,&local_98,0,0);
  if (local_98 != (longlong *)0x0) {
    if ((local_98 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(*local_98 + 8))
                      (local_98,(this->Image).AllocatorInstance.Data,
                       (longlong)(this->Image).ArrayNum,this->Width,this->Height,uVar13 & 0xffffff00
                       ,8,0);
    if (cVar4 != '\0') {
      if ((local_98 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*local_98 + 0x20))(local_98,&local_48,0);
      pIVar9 = IFileManager::Get();
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar10.Data = local_a8.Data.AllocatorInstance.Data;
      }
      bVar3 = FFileHelper::SaveArrayToFile(&local_48,(wchar_t *)FVar10.Data,pIVar9,0);
      if (bVar3) {
        iVar12 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange
                  (&this->OutputComparisonFile,(wchar_t *)local_a8.Data.AllocatorInstance.Data,
                   iVar12);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

