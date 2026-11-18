// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 1

// ParseXmlFile @ 1445601f0

bool __cdecl
FFastXml::ParseXmlFile
          (IFastXmlCallback *param_1,wchar_t *param_2,wchar_t *param_3,FFeedbackContext *param_4,
          bool param_5,bool param_6,FText *param_7,int *param_8)

{
  ECharType *pEVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  FPlatformFileManager *this;
  IPlatformFile *pIVar9;
  FText *pFVar10;
  FFastXmlImpl *this_00;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulong64 uVar14;
  TDefaultDelete<FFastXmlImpl> local_res10 [8];
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  uVar14 = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  bVar6 = true;
  if ((param_2 == (wchar_t *)0x0) || (sVar8 = wcslen(param_2), (int)sVar8 < 1)) {
    if ((param_3 == (wchar_t *)0x0) || (*param_3 == L'\0')) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1891371252036141737>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\FastXml.cpp"
                         ,0x2a9,"XmlFileContents != nullptr && *XmlFileContents != 0");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_38,L"FastXml",L"NoFileNameOrContentsPassedIn",
                           L"ParseXmlFile() was called without either an XML file name or an XML file contents text buffer supplied.  Either XmlFilePath or XmlFileContents must be valid in order to call ParseXmlFile()"
                          );
      FText::operator=(param_7,pFVar10);
      local_58.TextData.Reference = local_38.TextData.Reference;
      goto LAB_1445605a2;
    }
    sVar8 = wcslen(param_3);
    uVar14 = (ulong64)(int)sVar8;
  }
  else {
    this = FPlatformFileManager::Get();
    pIVar9 = FPlatformFileManager::GetPlatformFile(this);
    cVar3 = (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,param_2);
    if (cVar3 == '\0') {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"FastXml",L"FileNotFound",
                           L"Couldn\'t find the specified XML file on disk");
      FText::operator=(param_7,pFVar10);
LAB_1445605a2:
      bVar4 = false;
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      *param_8 = 1;
      goto LAB_1445605b4;
    }
    if (param_4 != (FFeedbackContext *)0x0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"FastXml",L"LoadingXML",L"Loading XML file...");
      FFeedbackContext::BeginSlowTask(param_4,pFVar10,param_5,false);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    bVar4 = FFileHelper::LoadFileToString(&local_98,param_2,None,0);
    if (bVar4) {
      iVar7 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      uVar14 = (ulong64)iVar7;
      if (iVar7 == 0) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_78,L"FastXml",L"LoadedXMLFileWasEmpty",L"The XML file is empty")
        ;
        FText::operator=(param_7,pFVar10);
        goto LAB_144560399;
      }
      param_3 = (wchar_t *)local_98.Data.AllocatorInstance.Data;
      if ((iVar7 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), param_3 = (wchar_t *)local_98.Data.AllocatorInstance.Data, bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"FastXml",L"ErrorReadingFile",L"Unable to load the XML file");
      FText::operator=(param_7,pFVar10);
      local_78.TextData.Reference = local_68.TextData.Reference;
LAB_144560399:
      bVar6 = false;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      *param_8 = 1;
    }
    if (param_4 != (FFeedbackContext *)0x0) {
      FFeedbackContext::EndSlowTask(param_4);
    }
    bVar4 = false;
    if (!bVar6) goto LAB_1445605b4;
  }
  if (param_4 != (FFeedbackContext *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"FastXml",L"ProcessingXML",L"Processing XML file...");
    FFeedbackContext::BeginSlowTask(param_4,pFVar10,param_5,param_6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  this_00 = ::operator_new(0x4948);
  if (this_00 == (FFastXmlImpl *)0x0) {
    this_00 = (FFastXmlImpl *)0x0;
  }
  else {
    this_00->Callback = param_1;
    this_00->XmlFileContents = param_3;
    this_00->XmlFileContentsLength = uVar14;
    this_00->FeedbackContext = param_4;
    FText::FText(&this_00->ErrorMessage);
    memset(this_00->CharacterTypeMap,0,0x100);
    lVar11 = 0;
    this_00->CharacterTypeMap[0] = EndOfFile;
    this_00->StackIndex = 0;
    this_00->CharacterTypeMap[9] = Whitespace;
    this_00->CharacterTypeMap[10] = EndOfLine;
    lVar12 = 0x138;
    this_00->CharacterTypeMap[0x20] = Whitespace;
    lVar13 = 0x801;
    this_00->CharacterTypeMap[0x3e] = EndOfElement;
    this_00->CharacterTypeMap[0x3f] = EndOfElement;
    this_00->CharacterTypeMap[0x2f] = EndOfElement;
    this_00->CharacterTypeMap[0xd] = EndOfLine;
    do {
      pEVar1 = this_00->CharacterTypeMap + lVar12 + -0x30;
      pEVar1[0] = Data;
      pEVar1[1] = Data;
      pEVar1[2] = Data;
      pEVar1[3] = Data;
      pEVar1[4] = Data;
      pEVar1[5] = Data;
      pEVar1[6] = Data;
      pEVar1[7] = Data;
      lVar12 = lVar12 + 8;
      this_00->IsStackAllocated[lVar11] = false;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  bVar4 = FFastXmlImpl::ProcessXmlFile(this_00,param_7,param_8);
  if (param_4 != (FFeedbackContext *)0x0) {
    FFeedbackContext::EndSlowTask(param_4);
  }
  TDefaultDelete<FFastXmlImpl>::operator()(local_res10,this_00);
LAB_1445605b4:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

