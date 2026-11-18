// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 2

// LoadCompressedData @ 148c49420

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FComparableImage::LoadCompressedData
          (FComparableImage *this,void *param_1,long64 param_2,FString *param_3,FText *param_4)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  FName *pFVar7;
  IImageWrapperModule *pIVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FLLMScope local_res20 [2];
  longlong *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FMemScope local_b8 [2];
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98 [2];
  TStringView<wchar_t> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name235,L"AutomationTest/ImageCompare");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name235,false,None,Default,true);
  FMemScope::FMemScope(local_b8,&LLMScope_Name235,true);
  local_a8 = (param_3->Data).AllocatorInstance.Data;
  iVar6 = (param_3->Data).ArrayNum;
  iStack_a0 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_a0 = 0;
  }
  local_88._12_4_ = uStack_9c;
  local_88.Size = iStack_a0;
  local_88.DataPtr = (wchar_t *)local_a8;
  EVar2 = ImageWrapperHelper::GetImageFormat(&local_88);
  pFVar7 = ::FName::FName(local_98,"ImageWrapper");
  pIVar8 = FModuleManager::GetModuleChecked<IImageWrapperModule>(*pFVar7);
  (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,&local_c8,EVar2,0);
  if (local_c8 == (longlong *)0x0) {
    pFVar9 = FText::FromString(&local_38,param_3);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_68,L"ImageComparer",L"ImageWrapperMissing",
                         L"Unable to locate image processor for file format {0}");
    pFVar11 = FTextFormat::FTextFormat(&local_28,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_78,pFVar11,pFVar9);
    FText::operator=(param_4,pFVar9);
    local_58.TextData.Reference = local_68.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      local_58.TextData.Reference = local_68.TextData.Reference;
    }
  }
  else {
    if ((local_c8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)*local_c8)(local_c8,param_1,param_2);
    if (cVar5 == '\0') {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"ImageComparer",L"ErrorParsingImageA",L"Unable to parse image")
      ;
      FText::operator=(param_4,pFVar9);
    }
    else {
      if ((local_c8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      cVar5 = (**(code **)(*local_c8 + 0x38))(local_c8,0,8,&this->Bytes);
      if (cVar5 != '\0') {
        if ((local_c8 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar6 = (**(code **)(*local_c8 + 0x40))();
        this->Width = iVar6;
        if ((local_c8 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar6 = (**(code **)(*local_c8 + 0x48))();
        this->Height = iVar6;
        bVar3 = true;
        goto LAB_148c496ed;
      }
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"ImageComparer",L"ErrorReadingRawDataA",
                          L"Unable to decompress image");
      FText::operator=(param_4,pFVar9);
      local_58.TextData.Reference = local_48.TextData.Reference;
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  bVar3 = false;
LAB_148c496ed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  FMemScope::~FMemScope(local_b8);
  FLLMScope::~FLLMScope(local_res20);
  return bVar3;
}

// LoadFile @ 148c49770

bool __thiscall FComparableImage::LoadFile(FComparableImage *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  FString local_48;
  FText local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToArray(&local_28,pwVar3,0);
  if (bVar1) {
    FPaths::GetExtension(&local_48,param_1,false);
    bVar1 = LoadCompressedData(this,local_28.AllocatorInstance.Data,local_28.ArrayNum,&local_48,
                               param_2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"ImageComparer",L"ErrorOpeningImageA",L"Unable to read image");
    FText::operator=(param_2,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    bVar1 = false;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

