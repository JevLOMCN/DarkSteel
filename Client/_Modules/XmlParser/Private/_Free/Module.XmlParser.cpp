// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 27

// `dynamic_initializer_for_'FXmlFileSpecAutomationSpecInstance'' @ 140f8f660

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FXmlFileSpecAutomationSpecInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FXmlFileSpec");
  FAutomationSpecBase::FAutomationSpecBase
            ((FAutomationSpecBase *)&FXmlFileSpecAutomationSpecInstance,&local_18,false);
  FXmlFileSpecAutomationSpecInstance._0_8_ = &___7FXmlFileSpec__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FXmlFileSpecAutomationSpecInstance__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantXmlParser'' @ 140f8f6c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantXmlParser__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "XmlParser";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"XmlParser",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14455cba0

void * __thiscall FXmlFileSpec::_scalar_deleting_destructor_(FXmlFileSpec *this,uint param_1)

{
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// AllOf<FString,bool_(__cdecl*)(wchar_t)> @ 14455cbe0

bool __cdecl
Algo::AllOf<FString,bool_(__cdecl*)(wchar_t)>(FString *param_1,_func___cdecl_bool_wchar_t *param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 2 + -2;
  if (iVar1 == 0) {
    pFVar4 = pFVar3 + (longlong)iVar1 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar1) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = (*param_2)(*(wchar_t *)pFVar3);
    if (!bVar2) {
      return false;
    }
    pFVar3 = pFVar3 + 2;
  }
  return true;
}

// ConstructItems<FXmlAttribute,FXmlAttribute,int> @ 14455cc60

void __cdecl
ConstructItems<FXmlAttribute,FXmlAttribute,int>(void *param_1,FXmlAttribute *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Tag);
      FString::FString((FString *)(lVar1 + 0x10 + (longlong)param_2),&param_2->Value);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FXmlAttribute,int> @ 14455ccc0

void __cdecl DestructItems<FXmlAttribute,int>(FXmlAttribute *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Tag).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ~TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 14455cd50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FXmlFileSpec::Define_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FXmlFileSpec::Define'::__l2::<lambda_1>,0,0> @ 14455cd70

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FXmlFileSpec::Define'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FXmlFileSpec::Define_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FXmlFileSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0> @ 14455cd90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FXmlFileSpec::Define_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0> @ 14455cdb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<__FXmlFileSpec::Define_::__l2::<lambda_1>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0> @ 14455cdd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<__FXmlFileSpec::Define_::__l2::<lambda_1>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TScopeGuard<`FXmlFile::CreateRootNode'::__l2::<lambda_1>_> @ 14455cdf0

void __thiscall
ScopeExitSupport::TScopeGuard<`FXmlFile::CreateRootNode'::__l2::<lambda_1>_>::
~TScopeGuard<_FXmlFile::CreateRootNode_::__l2::<lambda_1>_>(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  FXmlNode *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  puVar2 = *(undefined8 **)this;
  iVar1 = *(int *)(puVar2 + 1);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = *(FXmlNode **)*puVar2;
    if (this_00 != (FXmlNode *)0x0) {
      FXmlNode::Delete(this_00);
      pFVar3 = (this_00->Content).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (this_00->Tag).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(this_00->Attributes).AllocatorInstance.Data,
                 (this_00->Attributes).ArrayNum);
      pFVar3 = (this_00->Attributes).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (this_00->Children).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(this_00,0x48);
      return;
    }
  }
  return;
}

// ~TScopeGuard<`FXmlFile::Tokenize'::__l2::<lambda_1>_> @ 14455ceb0

void __thiscall
ScopeExitSupport::TScopeGuard<`FXmlFile::Tokenize'::__l2::<lambda_1>_>::
~TScopeGuard<_FXmlFile::Tokenize_::__l2::<lambda_1>_>(void *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = *(FScriptContainerElement **)this;
  iVar6 = *(int *)(pFVar2 + 8) + -1;
  if (*(int *)(pFVar2 + 8) == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    if ((pFVar3->Data <= pFVar2) &&
       (pFVar2 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    pFVar7 = pFVar3->Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)pFVar7 = *(undefined8 *)pFVar2;
    *(undefined8 *)pFVar2 = 0;
    *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar2 + 8);
    *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)(pFVar2 + 0xc);
    *(undefined8 *)(pFVar2 + 8) = 0;
  }
  return;
}

// operator() @ 14455d0b0

void __thiscall
``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FXmlNode *pFVar3;
  bool bVar4;
  FString *pFVar5;
  FText *this_01;
  ForAnyElementType FVar6;
  FString local_68;
  FString local_58;
  FText local_48;
  FXmlFile local_38;
  
  pFVar5 = ::FString::FString(&local_58,"");
  local_38.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.LoadedFile.Data.ArrayNum = 0;
  local_38.LoadedFile.Data.ArrayMax = 0;
  local_38.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ErrorMessage.Data.ArrayNum = 0;
  local_38.ErrorMessage.Data.ArrayMax = 0;
  local_38.RootNode = (FXmlNode *)0x0;
  local_38.bFileLoaded = false;
  local_38.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&local_38,pFVar5,ConstructFromBuffer);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar3 = local_38.RootNode;
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_68,"RootNode");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNull(this_00,(wchar_t *)FVar6.Data,pFVar3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_38.bFileLoaded != false) {
    if (local_38.RootNode == (FXmlNode *)0x0) {
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
    FXmlNode::Delete(local_38.RootNode);
    pFVar3 = local_38.RootNode;
    if (local_38.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(local_38.RootNode);
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
    local_38.RootNode = (FXmlNode *)0x0;
    local_38.bFileLoaded = false;
    ::FString::operator=(&local_38.LoadedFile,L"");
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully")
    ;
    pFVar5 = FText::ToString(this_01);
    ::FString::operator=(&local_38.ErrorMessage,pFVar5);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (local_38.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (local_38.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14455d490

void __thiscall
``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationTestBase *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FXmlNode *pFVar4;
  bool bVar5;
  FString *pFVar6;
  FText *this_00;
  ForAnyElementType FVar7;
  longlong lVar8;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FText local_48;
  FXmlFile local_38;
  
  pFVar6 = ::FString::FString(&local_58,"SomeTextInHere");
  local_38.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.LoadedFile.Data.ArrayNum = 0;
  local_38.LoadedFile.Data.ArrayMax = 0;
  local_38.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ErrorMessage.Data.ArrayNum = 0;
  local_38.ErrorMessage.Data.ArrayMax = 0;
  local_38.RootNode = (FXmlNode *)0x0;
  local_38.bFileLoaded = false;
  local_38.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&local_38,pFVar6,ConstructFromBuffer);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar4 = local_38.RootNode;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_68,"RootNode");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNull(pFVar1,(wchar_t *)FVar7.Data,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestFalse
            (*(FAutomationTestBase **)this,L"XmlFile.IsValid()",local_38.bFileLoaded);
  FVar7.Data = local_38.ErrorMessage.Data.AllocatorInstance.Data;
  lVar8 = (longlong)local_38.ErrorMessage.Data.ArrayNum;
  pFVar1 = *(FAutomationTestBase **)this;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = local_38.ErrorMessage.Data.ArrayNum;
  if (local_38.ErrorMessage.Data.ArrayNum == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.ErrorMessage.Data.ArrayNum,0,&local_78,
               local_38.ErrorMessage.Data.ArrayNum,&local_6c);
    memcpy(local_78.Data,FVar7.Data,lVar8 * 2);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_70 != 0) {
    FVar7.Data = local_78.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"last error",(wchar_t *)FVar7.Data,L"Failed to parse the loaded document");
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_38.bFileLoaded != false) {
    if (local_38.RootNode == (FXmlNode *)0x0) {
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
    FXmlNode::Delete(local_38.RootNode);
    pFVar4 = local_38.RootNode;
    if (local_38.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(local_38.RootNode);
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
    local_38.RootNode = (FXmlNode *)0x0;
    local_38.bFileLoaded = false;
    ::FString::operator=(&local_38.LoadedFile,L"");
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully")
    ;
    pFVar6 = FText::ToString(this_00);
    ::FString::operator=(&local_38.ErrorMessage,pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (local_38.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (local_38.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14455d720

void __thiscall
``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FAutomationTestBase *pFVar4;
  FScriptContainerElement *pFVar5;
  FXmlNode *pFVar6;
  bool bVar7;
  FString *pFVar8;
  FText *this_00;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FXmlFile local_228;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FText local_28;
  
  pFVar8 = ::FString::FString(&local_d8,
                              "<test a=\'aTest\' b=\"bTest\" c=\"c\'sTest\" d=\'d\'sTest\' e=\"e\"Test\"/>"
                             );
  local_228.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.LoadedFile.Data.ArrayNum = 0;
  local_228.LoadedFile.Data.ArrayMax = 0;
  local_228.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ErrorMessage.Data.ArrayNum = 0;
  local_228.ErrorMessage.Data.ArrayMax = 0;
  local_228.RootNode = (FXmlNode *)0x0;
  local_228.bFileLoaded = false;
  local_228.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&local_228,pFVar8,ConstructFromBuffer);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = local_228.RootNode;
  plVar2 = *(longlong **)this;
  ::FString::FString(&local_1f8,"RootNode");
  if (pFVar6 == (FXmlNode *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_e8,L"Expected \'%s\' to be not null.");
    (*pcVar3)(plVar2,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (pFVar6 != (FXmlNode *)0x0) {
    pFVar4 = *(FAutomationTestBase **)this;
    iVar1 = (pFVar6->Attributes).ArrayNum;
    ::FString::FString(&local_198,"RootNode->GetAttributes().Num()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar9.Data = local_198.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,iVar1,5);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&local_c8,"a");
    FXmlNode::GetAttribute(pFVar6,&local_1a8,pFVar8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&local_b8,"b");
    FXmlNode::GetAttribute(pFVar6,&local_1b8,pFVar8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&local_a8,"c");
    FXmlNode::GetAttribute(pFVar6,&local_1c8,pFVar8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&local_98,"d");
    FXmlNode::GetAttribute(pFVar6,&local_1d8,pFVar8);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FString::FString(&local_88,"e");
    FXmlNode::GetAttribute(pFVar6,&local_1e8,pFVar8);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    bVar7 = local_1a8.Data.ArrayNum < 2;
    ::FString::FString(&local_188,"aValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar9.Data = local_188.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    pFVar8 = ::FString::FString(&local_78,"aTest");
    ::FString::FString(&local_178,"aValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar9.Data = local_178.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar10.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    bVar7 = local_1b8.Data.ArrayNum < 2;
    ::FString::FString(&local_168,"bValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar9.Data = local_168.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    pFVar8 = ::FString::FString(&local_68,"bTest");
    ::FString::FString(&local_158,"bValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar9.Data = local_158.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar10.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    bVar7 = local_1c8.Data.ArrayNum < 2;
    ::FString::FString(&local_148,"cValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar9.Data = local_148.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    pFVar8 = ::FString::FString(&local_58,"c\'sTest");
    ::FString::FString(&local_138,"cValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar9.Data = local_138.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar10.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    bVar7 = local_1d8.Data.ArrayNum < 2;
    ::FString::FString(&local_128,"dValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar9.Data = local_128.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    pFVar8 = ::FString::FString(&local_48,"d\'sTest");
    ::FString::FString(&local_118,"dValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar9.Data = local_118.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar10.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    bVar7 = local_1e8.Data.ArrayNum < 2;
    ::FString::FString(&local_108,"eValue.IsEmpty()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar9.Data = local_108.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse(pFVar4,(wchar_t *)FVar9.Data,bVar7);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pFVar4 = *(FAutomationTestBase **)this;
    pFVar8 = ::FString::FString(&local_38,"e\"Test");
    ::FString::FString(&local_f8,"eValue");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar9.Data = local_f8.Data.AllocatorInstance.Data;
    }
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar10.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,pwVar11);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_228.bFileLoaded != false) {
    if ((local_228.RootNode == (FXmlNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootNode != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                           ,0x5c,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FXmlNode::Delete(local_228.RootNode);
    pFVar6 = local_228.RootNode;
    if (local_228.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(local_228.RootNode);
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
    local_228.RootNode = (FXmlNode *)0x0;
    local_228.bFileLoaded = false;
    ::FString::operator=(&local_228.LoadedFile,L"");
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully")
    ;
    pFVar8 = FText::ToString(this_00);
    ::FString::operator=(&local_228.ErrorMessage,pFVar8);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if (local_228.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (local_228.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14455def0

void __thiscall
``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  FAutomationTestBase *pFVar3;
  FScriptContainerElement *pFVar4;
  FXmlNode *pFVar5;
  bool bVar6;
  FString *pFVar7;
  FText *this_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  FXmlFile local_b8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FText local_28;
  
  pFVar7 = ::FString::FString(&local_38,
                              "<root><container>Some Text<child></child></container></root>");
  puVar9 = (undefined8 *)0x0;
  local_b8.LoadedFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.LoadedFile.Data.ArrayNum = 0;
  local_b8.LoadedFile.Data.ArrayMax = 0;
  local_b8.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ErrorMessage.Data.ArrayNum = 0;
  local_b8.ErrorMessage.Data.ArrayMax = 0;
  local_b8.RootNode = (FXmlNode *)0x0;
  local_b8.bFileLoaded = false;
  local_b8.bHackAttemptToPreserveWhitespace = false;
  FXmlFile::LoadFile(&local_b8,pFVar7,ConstructFromBuffer);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = local_b8.RootNode;
  plVar1 = *(longlong **)this;
  ::FString::FString(&local_88,"RootNode");
  if (pFVar5 == (FXmlNode *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to be not null.");
    (*pcVar2)(plVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"XmlFile.IsValid()",local_b8.bFileLoaded);
  puVar8 = puVar9;
  if (0 < (pFVar5->Children).ArrayNum) {
    puVar8 = *(undefined8 **)(pFVar5->Children).AllocatorInstance.Data;
  }
  pFVar3 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_78,L"container");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (*(int *)(puVar8 + 5) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)puVar8[4];
  }
  FAutomationTestBase::TestEqual(pFVar3,L"tag",pwVar10,(wchar_t *)FVar11.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar3 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_68,L"Some Text");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar11.Data = local_68.Data.AllocatorInstance.Data;
  }
  if (*(int *)(puVar8 + 7) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)puVar8[6];
  }
  FAutomationTestBase::TestEqual(pFVar3,L"Content",pwVar10,(wchar_t *)FVar11.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (0 < *(int *)(puVar8 + 1)) {
    puVar9 = *(undefined8 **)*puVar8;
  }
  pFVar3 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_58,L"child");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
  }
  if (*(int *)(puVar9 + 5) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)puVar9[4];
  }
  FAutomationTestBase::TestEqual(pFVar3,L"tag",pwVar10,(wchar_t *)FVar11.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_b8.bFileLoaded != false) {
    if ((local_b8.RootNode == (FXmlNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootNode != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                           ,0x5c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FXmlNode::Delete(local_b8.RootNode);
    pFVar5 = local_b8.RootNode;
    if (local_b8.RootNode != (FXmlNode *)0x0) {
      FXmlNode::Delete(local_b8.RootNode);
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
    local_b8.RootNode = (FXmlNode *)0x0;
    local_b8.bFileLoaded = false;
    ::FString::operator=(&local_b8.LoadedFile,L"");
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully")
    ;
    pFVar7 = FText::ToString(this_00);
    ::FString::operator=(&local_b8.ErrorMessage,pFVar7);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if (local_b8.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (local_b8.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.LoadedFile.Data.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14455e2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14455e330

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FXmlFileSpec::Define'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FXmlFileSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14455e370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14455e3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14455e3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// AddAttribute @ 14455e430

/* WARNING: Removing unreachable block (ram,0x00014455e74e) */
/* WARNING: Removing unreachable block (ram,0x00014455e75c) */

void __cdecl
AddAttribute(FString *param_1,TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pFVar8 = (param_1->Data).AllocatorInstance.Data;
  pFVar9 = pFVar8;
  while( true ) {
    if (pFVar9 == pFVar8 + (longlong)(param_1->Data).ArrayNum * 2) {
      return;
    }
    if (*(short *)pFVar9 == 0x3d) break;
    pFVar9 = pFVar9 + 2;
  }
  iVar5 = (int)((longlong)pFVar9 - (longlong)pFVar8 >> 1);
  if (iVar5 == -1) {
    return;
  }
  local_res8[0] = false;
  FString::RightChop(param_1,&local_58,iVar5 + 1);
  FString::TrimQuotesInline(&local_58,local_res8);
  if ((local_res8[0] != false) ||
     (FString::TrimCharInline(&local_58,L'\'',local_res8), local_res8[0] != false)) {
    for (FVar6.Data = local_58.Data.AllocatorInstance.Data;
        FVar6.Data != local_58.Data.AllocatorInstance.Data + (longlong)local_58.Data.ArrayNum * 2;
        FVar6.Data = FVar6.Data + 2) {
      if (*(short *)FVar6.Data == 0x26) {
        if ((int)((longlong)FVar6.Data - (longlong)local_58.Data.AllocatorInstance.Data >> 1) != -1)
        {
          FString::ReplaceInline(&local_58,L"&quot;",L"\"",CaseSensitive);
          FString::ReplaceInline(&local_58,L"&amp;",L"&",CaseSensitive);
          FString::ReplaceInline(&local_58,L"&apos;",L"\'",CaseSensitive);
          FString::ReplaceInline(&local_58,L"&lt;",L"<",CaseSensitive);
          FString::ReplaceInline(&local_58,L"&gt;",L">",CaseSensitive);
        }
        break;
      }
    }
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar1 == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FString::ConstructFromPtrSize(&local_48,pwVar7,iVar5);
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = local_48.Data.ArrayNum;
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = local_48.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,FVar6.Data,(longlong)iVar5 * 2);
    }
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = CONCAT44(local_20._4_4_,local_58.Data.ArrayNum);
    if (local_58.Data.ArrayNum == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,&local_28,local_58.Data.ArrayNum,
                 (int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,FVar6.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    pFVar8 = (param_2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar8 + (longlong)param_2->ArrayMax * 0x20)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_38.Data;
    *(undefined4 *)(pFVar8 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar8 + 0xc) = local_30._4_4_;
    *(undefined8 *)(pFVar8 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar8 + 0x10) = local_28.Data;
    *(undefined4 *)(pFVar8 + 0x18) = (undefined4)local_20;
    *(undefined4 *)(pFVar8 + 0x1c) = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_58.Data.AllocatorInstance.Data);
  return;
}

// IsWhiteSpace @ 14455fc30

bool __cdecl IsWhiteSpace(wchar_t param_1)

{
  if ((param_1 != L' ') && (param_1 != L'\t')) {
    return (ushort)param_1 < 0x20;
  }
  return true;
}

// TryParseTag @ 144562dd0

ETryParseTagResult __cdecl
TryParseTag(FString *param_1,TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> *param_2,
           FString **param_3,FString *param_4)

{
  int *piVar1;
  ETryParseTagResult EVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  FString *pFVar6;
  
  pFVar6 = *param_3;
  if (pFVar6 == param_4) {
    EVar2 = None;
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L">");
    if (iVar3 != 0) {
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"/>");
      if (iVar3 != 0) {
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"</");
        if (iVar3 == 0) {
          pFVar5 = pFVar6 + 1;
          if (pFVar5 != param_4) {
            if (pFVar6[1].Data.ArrayNum == 0) {
              pwVar4 = L"";
            }
            else {
              pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"<");
            if (iVar3 != 0) {
              if (pFVar6[1].Data.ArrayNum == 0) {
                pwVar4 = L"";
              }
              else {
                pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
              }
              iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"</");
              if (iVar3 != 0) {
                if (pFVar6[1].Data.ArrayNum == 0) {
                  pwVar4 = L"";
                }
                else {
                  pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
                }
                iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L">");
                if (iVar3 != 0) {
                  if (pFVar6[1].Data.ArrayNum == 0) {
                    pwVar4 = L"";
                  }
                  else {
                    pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
                  }
                  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"/>");
                  if (iVar3 != 0) {
                    FString::operator=(param_1,pFVar5);
                    pFVar6 = pFVar6 + 2;
                    while (pFVar6 != param_4) {
                      piVar1 = &(pFVar6->Data).ArrayNum;
                      if ((pFVar6->Data).ArrayNum == 0) {
                        pwVar4 = L"";
                      }
                      else {
                        pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                      }
                      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"<");
                      if (iVar3 == 0) break;
                      if (*piVar1 == 0) {
                        pwVar4 = L"";
                      }
                      else {
                        pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                      }
                      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"</");
                      if (iVar3 == 0) break;
                      if (*piVar1 == 0) {
                        pwVar4 = L"";
                      }
                      else {
                        pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                      }
                      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"/>");
                      if (iVar3 == 0) break;
                      pFVar5 = pFVar6 + 1;
                      if (*piVar1 == 0) {
                        pwVar4 = L"";
                      }
                      else {
                        pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                      }
                      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L">");
                      pFVar6 = pFVar5;
                      if (iVar3 == 0) {
                        *param_3 = pFVar5;
                        return ParsedEndTag;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar4 = L"";
          }
          else {
            pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"<");
          if (iVar3 != 0) {
            *param_3 = pFVar6;
            return NotATag;
          }
          pFVar5 = pFVar6 + 1;
          if (pFVar5 != param_4) {
            if (pFVar6[1].Data.ArrayNum == 0) {
              pwVar4 = L"";
            }
            else {
              pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"<");
            if (iVar3 != 0) {
              if (pFVar6[1].Data.ArrayNum == 0) {
                pwVar4 = L"";
              }
              else {
                pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
              }
              iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"</");
              if (iVar3 != 0) {
                if (pFVar6[1].Data.ArrayNum == 0) {
                  pwVar4 = L"";
                }
                else {
                  pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
                }
                iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L">");
                if (iVar3 != 0) {
                  if (pFVar6[1].Data.ArrayNum == 0) {
                    pwVar4 = L"";
                  }
                  else {
                    pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
                  }
                  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"/>");
                  if (iVar3 != 0) {
                    pFVar6 = pFVar6 + 2;
                    FString::operator=(param_1,pFVar5);
                    if (pFVar6 != param_4) {
                      while( true ) {
                        pFVar5 = pFVar6 + 1;
                        if ((pFVar6->Data).ArrayNum == 0) {
                          pwVar4 = L"";
                        }
                        else {
                          pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                        }
                        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"/>");
                        if (iVar3 == 0) {
                          *param_3 = pFVar5;
                          return ParsedEmptyElementTag;
                        }
                        if ((pFVar6->Data).ArrayNum == 0) {
                          pwVar4 = L"";
                        }
                        else {
                          pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                        }
                        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L">");
                        if (iVar3 == 0) {
                          *param_3 = pFVar5;
                          return ParsedStartTag;
                        }
                        if ((pFVar6->Data).ArrayNum == 0) {
                          pwVar4 = L"";
                        }
                        else {
                          pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                        }
                        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"<");
                        if (iVar3 == 0) break;
                        if ((pFVar6->Data).ArrayNum == 0) {
                          pwVar4 = L"";
                        }
                        else {
                          pwVar4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                        }
                        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"</");
                        if ((iVar3 == 0) ||
                           (AddAttribute(pFVar6,param_2), pFVar6 = pFVar5, pFVar5 == param_4))
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    EVar2 = Error;
  }
  return EVar2;
}

// IMPLEMENT_MODULE_XmlParser @ 144563a10

void __cdecl IMPLEMENT_MODULE_XmlParser(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FXmlFileSpecAutomationSpecInstance'' @ 15036c860

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FXmlFileSpecAutomationSpecInstance__(void)

{
  FAutomationSpecBase::~FAutomationSpecBase
            ((FAutomationSpecBase *)&FXmlFileSpecAutomationSpecInstance);
  return;
}

