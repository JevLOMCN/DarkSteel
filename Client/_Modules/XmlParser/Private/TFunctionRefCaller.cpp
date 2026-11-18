// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 5

// Call @ 14455e960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FAutomationTestBase *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FXmlNode *pFVar3;
  bool bVar4;
  FString *pFVar5;
  FText *this_00;
  ForAnyElementType FVar6;
  FString FStack_68;
  FString FStack_58;
  FText FStack_48;
  FXmlFile FStack_38;
  
  pFVar5 = ::FString::FString(&FStack_58,"");
  FStack_38.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.LoadedFile.Data.ArrayNum = 0;
  FStack_38.LoadedFile.Data.ArrayMax = 0;
  FStack_38.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.ErrorMessage.Data.ArrayNum = 0;
  FStack_38.ErrorMessage.Data.ArrayMax = 0;
  FStack_38.RootNode = (FXmlNode *)0x0;
  FStack_38.bFileLoaded = false;
  FStack_38.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&FStack_38,pFVar5,ConstructFromBuffer);
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  pFVar3 = FStack_38.RootNode;
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_68,"RootNode");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (FStack_68.Data.ArrayNum != 0) {
    FVar6.Data = FStack_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNull(this,(wchar_t *)FVar6.Data,pFVar3);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  if (FStack_38.bFileLoaded != false) {
    if (FStack_38.RootNode == (FXmlNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootNode != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                         ,0x5c,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FXmlNode::Delete(FStack_38.RootNode);
    pFVar3 = FStack_38.RootNode;
    if (FStack_38.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(FStack_38.RootNode);
      pFVar1 = (pFVar3->Content).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar3->Tag).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(pFVar3->Attributes).AllocatorInstance.Data,
                 (pFVar3->Attributes).ArrayNum);
      pFVar1 = (pFVar3->Attributes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar3->Children).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar3,0x48);
    }
    FStack_38.RootNode = (FXmlNode *)0x0;
    FStack_38.bFileLoaded = false;
    ::FString::operator=(&FStack_38.LoadedFile,L"");
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&FStack_48,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully"
                        );
    pFVar5 = FText::ToString(this_00);
    ::FString::operator=(&FStack_38.ErrorMessage,pFVar5);
    if (FStack_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
    }
  }
  if (FStack_38.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (FStack_38.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14455e970

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FXmlFileSpec::Define'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_78;
  FSourceLocation FStack_68;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_20 = 0;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should return no root node for an empty file");
  FStack_68.Impl._Line = 0xd;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  FStack_68.Impl._Function =
       "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const";
  FStack_68.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should return error if the file does not contain a root node");
  FStack_68.Impl._Line = 0x14;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  FStack_68.Impl._Function =
       "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should parse single and double quoted attributes");
  FStack_68.Impl._Line = 0x1d;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  FStack_68.Impl._Function =
       "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should parse nested text and nodes inside a node");
  FStack_68.Impl._Line = 0x3b;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  FStack_68.Impl._Function =
       "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14455e980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>::
Call(void *param_1)

{
  FAutomationTestBase *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FXmlNode *pFVar4;
  bool bVar5;
  FString *pFVar6;
  FText *this;
  ForAnyElementType FVar7;
  longlong lVar8;
  ForAnyElementType FStack_78;
  int iStack_70;
  int iStack_6c;
  FString FStack_68;
  FString FStack_58;
  FText FStack_48;
  FXmlFile FStack_38;
  
  pFVar6 = ::FString::FString(&FStack_58,"SomeTextInHere");
  FStack_38.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.LoadedFile.Data.ArrayNum = 0;
  FStack_38.LoadedFile.Data.ArrayMax = 0;
  FStack_38.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.ErrorMessage.Data.ArrayNum = 0;
  FStack_38.ErrorMessage.Data.ArrayMax = 0;
  FStack_38.RootNode = (FXmlNode *)0x0;
  FStack_38.bFileLoaded = false;
  FStack_38.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&FStack_38,pFVar6,ConstructFromBuffer);
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  pFVar4 = FStack_38.RootNode;
  pFVar1 = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_68,"RootNode");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (FStack_68.Data.ArrayNum != 0) {
    FVar7.Data = FStack_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNull(pFVar1,(wchar_t *)FVar7.Data,pFVar4);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestFalse
            (*(FAutomationTestBase **)param_1,L"XmlFile.IsValid()",FStack_38.bFileLoaded);
  FVar7.Data = FStack_38.ErrorMessage.Data.AllocatorInstance.Data;
  lVar8 = (longlong)FStack_38.ErrorMessage.Data.ArrayNum;
  pFVar1 = *(FAutomationTestBase **)param_1;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  iStack_70 = FStack_38.ErrorMessage.Data.ArrayNum;
  if (FStack_38.ErrorMessage.Data.ArrayNum == 0) {
    iStack_6c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_38.ErrorMessage.Data.ArrayNum,0,&FStack_78,
               FStack_38.ErrorMessage.Data.ArrayNum,&iStack_6c);
    memcpy(FStack_78.Data,FVar7.Data,lVar8 * 2);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (iStack_70 != 0) {
    FVar7.Data = FStack_78.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"last error",(wchar_t *)FVar7.Data,L"Failed to parse the loaded document");
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  if (FStack_38.bFileLoaded != false) {
    if (FStack_38.RootNode == (FXmlNode *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootNode != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                         ,0x5c,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FXmlNode::Delete(FStack_38.RootNode);
    pFVar4 = FStack_38.RootNode;
    if (FStack_38.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(FStack_38.RootNode);
      pFVar2 = (pFVar4->Content).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar4->Tag).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(pFVar4->Attributes).AllocatorInstance.Data,
                 (pFVar4->Attributes).ArrayNum);
      pFVar2 = (pFVar4->Attributes).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar4->Children).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar4,0x48);
    }
    FStack_38.RootNode = (FXmlNode *)0x0;
    FStack_38.bFileLoaded = false;
    ::FString::operator=(&FStack_38.LoadedFile,L"");
    this = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully");
    pFVar6 = FText::ToString(this);
    ::FString::operator=(&FStack_38.ErrorMessage,pFVar6);
    if (FStack_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
    }
  }
  if (FStack_38.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (FStack_38.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14455e990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void>::
Call(void *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FAutomationTestBase *pFVar4;
  FScriptContainerElement *pFVar5;
  FXmlNode *pFVar6;
  bool bVar7;
  FString *pFVar8;
  FText *this;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FXmlFile FStack_228;
  FString FStack_1f8;
  FString FStack_1e8;
  FString FStack_1d8;
  FString FStack_1c8;
  FString FStack_1b8;
  FString FStack_1a8;
  FString FStack_198;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FText FStack_28;
  
  pFVar8 = ::FString::FString(&FStack_d8,
                              "<test a=\'aTest\' b=\"bTest\" c=\"c\'sTest\" d=\'d\'sTest\' e=\"e\"Test\"/>"
                             );
  FStack_228.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_228.LoadedFile.Data.ArrayNum = 0;
  FStack_228.LoadedFile.Data.ArrayMax = 0;
  FStack_228.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_228.ErrorMessage.Data.ArrayNum = 0;
  FStack_228.ErrorMessage.Data.ArrayMax = 0;
  FStack_228.RootNode = (FXmlNode *)0x0;
  FStack_228.bFileLoaded = false;
  FStack_228.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&FStack_228,pFVar8,ConstructFromBuffer);
  if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = FStack_228.RootNode;
  plVar2 = *(longlong **)param_1;
  ::FString::FString(&FStack_1f8,"RootNode");
  if (pFVar6 == (FXmlNode *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&FStack_e8,L"Expected \'%s\' to be not null.");
    (*pcVar3)(plVar2,&FStack_e8,0);
    if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f8.Data.AllocatorInstance.Data);
  }
  if (pFVar6 != (FXmlNode *)0x0) {
    pFVar4 = *(FAutomationTestBase **)param_1;
    iVar1 = (pFVar6->Attributes).ArrayNum;
    ::FString::FString(&FStack_198,"RootNode->GetAttributes().Num()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_198.Data.ArrayNum != 0) {
      FVar9.Data = FStack_198.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,iVar1,5);
    if (FStack_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_198.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&FStack_c8,"a");
    FXmlNode::GetAttribute(pFVar6,&FStack_1a8,pFVar8);
    if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&FStack_b8,"b");
    FXmlNode::GetAttribute(pFVar6,&FStack_1b8,pFVar8);
    if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&FStack_a8,"c");
    FXmlNode::GetAttribute(pFVar6,&FStack_1c8,pFVar8);
    if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&FStack_98,"d");
    FXmlNode::GetAttribute(pFVar6,&FStack_1d8,pFVar8);
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&FStack_88,"e");
    FXmlNode::GetAttribute(pFVar6,&FStack_1e8,pFVar8);
    if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    bVar7 = FStack_1a8.Data.ArrayNum < 2;
    ::FString::FString(&FStack_188,"aValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_188.Data.ArrayNum != 0) {
      FVar9.Data = FStack_188.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (FStack_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_188.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    pFVar8 = ::FString::FString(&FStack_78,"aTest");
    ::FString::FString(&FStack_178,"aValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_178.Data.ArrayNum != 0) {
      FVar9.Data = FStack_178.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_1a8.Data.ArrayNum != 0) {
      FVar10.Data = FStack_1a8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
    }
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    bVar7 = FStack_1b8.Data.ArrayNum < 2;
    ::FString::FString(&FStack_168,"bValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_168.Data.ArrayNum != 0) {
      FVar9.Data = FStack_168.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    pFVar8 = ::FString::FString(&FStack_68,"bTest");
    ::FString::FString(&FStack_158,"bValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_158.Data.ArrayNum != 0) {
      FVar9.Data = FStack_158.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_1b8.Data.ArrayNum != 0) {
      FVar10.Data = FStack_1b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
    }
    if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    bVar7 = FStack_1c8.Data.ArrayNum < 2;
    ::FString::FString(&FStack_148,"cValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_148.Data.ArrayNum != 0) {
      FVar9.Data = FStack_148.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    pFVar8 = ::FString::FString(&FStack_58,"c\'sTest");
    ::FString::FString(&FStack_138,"cValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_138.Data.ArrayNum != 0) {
      FVar9.Data = FStack_138.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_1c8.Data.ArrayNum != 0) {
      FVar10.Data = FStack_1c8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    bVar7 = FStack_1d8.Data.ArrayNum < 2;
    ::FString::FString(&FStack_128,"dValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_128.Data.ArrayNum != 0) {
      FVar9.Data = FStack_128.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (FStack_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_128.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    pFVar8 = ::FString::FString(&FStack_48,"d\'sTest");
    ::FString::FString(&FStack_118,"dValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_118.Data.ArrayNum != 0) {
      FVar9.Data = FStack_118.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_1d8.Data.ArrayNum != 0) {
      FVar10.Data = FStack_1d8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
    }
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    bVar7 = FStack_1e8.Data.ArrayNum < 2;
    ::FString::FString(&FStack_108,"eValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_108.Data.ArrayNum != 0) {
      FVar9.Data = FStack_108.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)param_1;
    pFVar8 = ::FString::FString(&FStack_38,"e\"Test");
    ::FString::FString(&FStack_f8,"eValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_f8.Data.ArrayNum != 0) {
      FVar9.Data = FStack_f8.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_1e8.Data.ArrayNum != 0) {
      FVar10.Data = FStack_1e8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    if (FStack_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1e8.Data.AllocatorInstance.Data);
    }
    if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
    }
    if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
    }
    if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
    }
    if (FStack_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a8.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_228.bFileLoaded != false) {
    if ((FStack_228.RootNode == (FXmlNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootNode != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                           ,0x5c,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FXmlNode::Delete(FStack_228.RootNode);
    pFVar6 = FStack_228.RootNode;
    if (FStack_228.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(FStack_228.RootNode);
      pFVar5 = (pFVar6->Content).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar6->Tag).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(pFVar6->Attributes).AllocatorInstance.Data,
                 (pFVar6->Attributes).ArrayNum);
      pFVar5 = (pFVar6->Attributes).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar6->Children).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      ::operator_delete(pFVar6,0x48);
    }
    FStack_228.RootNode = (FXmlNode *)0x0;
    FStack_228.bFileLoaded = false;
    ::FString::operator=(&FStack_228.LoadedFile,L"");
    this = FText::AsLocalizable_Advanced_LocText
                     (&FStack_28,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully");
    pFVar8 = FText::ToString(this);
    ::FString::operator=(&FStack_228.ErrorMessage,pFVar8);
    if (FStack_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
    }
  }
  if (FStack_228.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (FStack_228.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14455e9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void>::
Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FAutomationTestBase *pFVar3;
  FScriptContainerElement *pFVar4;
  FXmlNode *pFVar5;
  bool bVar6;
  FString *pFVar7;
  FText *this;
  undefined8 *puVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  FXmlFile FStack_b8;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FText FStack_28;
  
  pFVar7 = ::FString::FString(&FStack_38,
                              "<root><container>Some Text<child></child></container></root>");
  puVar9 = (undefined8 *)0x0;
  FStack_b8.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.LoadedFile.Data.ArrayNum = 0;
  FStack_b8.LoadedFile.Data.ArrayMax = 0;
  FStack_b8.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.ErrorMessage.Data.ArrayNum = 0;
  FStack_b8.ErrorMessage.Data.ArrayMax = 0;
  FStack_b8.RootNode = (FXmlNode *)0x0;
  FStack_b8.bFileLoaded = false;
  FStack_b8.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&FStack_b8,pFVar7,ConstructFromBuffer);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = FStack_b8.RootNode;
  plVar1 = *(longlong **)param_1;
  ::FString::FString(&FStack_88,"RootNode");
  if (pFVar5 == (FXmlNode *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&FStack_48,L"Expected \'%s\' to be not null.");
    (*pcVar2)(plVar1,&FStack_48,0);
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)param_1,L"XmlFile.IsValid()",FStack_b8.bFileLoaded);
  puVar8 = puVar9;
  if (0 < (pFVar5->Children).ArrayNum) {
    puVar8 = *(undefined8 **)(pFVar5->Children).AllocatorInstance.Data;
  }
  pFVar3 = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_78,L"container");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (FStack_78.Data.ArrayNum != 0) {
    FVar11.Data = FStack_78.Data.AllocatorInstance.Data;
  }
  if (*(int *)(puVar8 + 5) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)puVar8[4];
  }
  FAutomationTestBase::TestEqual(pFVar3,L"tag",pwVar10,(wchar_t *)FVar11.Data);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar3 = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_68,L"Some Text");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (FStack_68.Data.ArrayNum != 0) {
    FVar11.Data = FStack_68.Data.AllocatorInstance.Data;
  }
  if (*(int *)(puVar8 + 7) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)puVar8[6];
  }
  FAutomationTestBase::TestEqual(pFVar3,L"Content",pwVar10,(wchar_t *)FVar11.Data);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  if (0 < *(int *)(puVar8 + 1)) {
    puVar9 = *(undefined8 **)*puVar8;
  }
  pFVar3 = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_58,L"child");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (FStack_58.Data.ArrayNum != 0) {
    FVar11.Data = FStack_58.Data.AllocatorInstance.Data;
  }
  if (*(int *)(puVar9 + 5) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)puVar9[4];
  }
  FAutomationTestBase::TestEqual(pFVar3,L"tag",pwVar10,(wchar_t *)FVar11.Data);
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (FStack_b8.bFileLoaded != false) {
    if ((FStack_b8.RootNode == (FXmlNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootNode != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                           ,0x5c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FXmlNode::Delete(FStack_b8.RootNode);
    pFVar5 = FStack_b8.RootNode;
    if (FStack_b8.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(FStack_b8.RootNode);
      pFVar4 = (pFVar5->Content).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar5->Tag).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(pFVar5->Attributes).AllocatorInstance.Data,
                 (pFVar5->Attributes).ArrayNum);
      pFVar4 = (pFVar5->Attributes).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar5->Children).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar5,0x48);
    }
    FStack_b8.RootNode = (FXmlNode *)0x0;
    FStack_b8.bFileLoaded = false;
    ::FString::operator=(&FStack_b8.LoadedFile,L"");
    this = FText::AsLocalizable_Advanced_LocText
                     (&FStack_28,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully");
    pFVar7 = FText::ToString(this);
    ::FString::operator=(&FStack_b8.ErrorMessage,pFVar7);
    if (FStack_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
    }
  }
  if (FStack_b8.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (FStack_b8.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

