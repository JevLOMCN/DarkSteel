// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 17

// FXmlFile @ 14455cd10

FXmlFile * __thiscall FXmlFile::FXmlFile(FXmlFile *this,FString *param_1,Type param_2)

{
  (this->LoadedFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedFile).Data.ArrayNum = 0;
  (this->LoadedFile).Data.ArrayMax = 0;
  (this->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorMessage).Data.ArrayNum = 0;
  (this->ErrorMessage).Data.ArrayMax = 0;
  this->RootNode = (FXmlNode *)0x0;
  this->bFileLoaded = false;
  this->bHackAttemptToPreserveWhitespace = false;
  LoadFile(this,param_1,param_2);
  return this;
}

// Clear @ 14455e9b0

void __thiscall FXmlFile::Clear(FXmlFile *this)

{
  FXmlNode *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_01;
  FString *pFVar4;
  FText local_18;
  
  if (this->bFileLoaded != false) {
    if (this->RootNode == (FXmlNode *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootNode != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                         ,0x5c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FXmlNode::Delete(this->RootNode);
    this_00 = this->RootNode;
    if (this_00 != (FXmlNode *)0x0) {
      FXmlNode::Delete(this_00);
      pFVar1 = (this_00->Content).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this_00->Tag).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(this_00->Attributes).AllocatorInstance.Data,
                 (this_00->Attributes).ArrayNum);
      pFVar1 = (this_00->Attributes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this_00->Children).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(this_00,0x48);
    }
    this->RootNode = (FXmlNode *)0x0;
    this->bFileLoaded = false;
    ::FString::operator=(&this->LoadedFile,L"");
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_18,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully")
    ;
    pFVar4 = FText::ToString(this_01);
    ::FString::operator=(&this->ErrorMessage,pFVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// CreateNodes @ 14455eb70

void __thiscall
FXmlFile::CreateNodes(FXmlFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FXmlNode *pFVar5;
  FText *this_00;
  FString *pFVar6;
  undefined4 uStack_2c;
  TArrayView<FString_const_,int> local_28;
  FText local_18;
  
  this->bCreationFailed = false;
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = (FString *)pFVar2;
  pFVar5 = CreateRootNode(this,&local_28);
  if (pFVar5 != (FXmlNode *)0x0) {
    this->bFileLoaded = true;
    HookUpNextPtrs(this,pFVar5);
    this->RootNode = pFVar5;
    return;
  }
  this->bFileLoaded = false;
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"XmlParser",L"NodeCreateFail",
                       L"Failed to parse the loaded document");
  pFVar6 = FText::ToString(this_00);
  ::FString::operator=(&this->ErrorMessage,pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// CreateRootNode @ 14455ec50

FXmlNode * __thiscall
FXmlFile::CreateRootNode(FXmlFile *this,TArrayView<FString_const_,int> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  ETryParseTagResult EVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FXmlNode *pFVar11;
  FXmlNode *pFVar12;
  FXmlNode *pFVar13;
  FText *pFVar14;
  FString *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> *pTVar18;
  FString *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res10 [8];
  FString *local_res18;
  ForAnyElementType *local_res20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> local_b8;
  FXmlNode *local_a8;
  FString local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  
  pFVar11 = (FXmlNode *)0x0;
  local_res20 = &local_c8;
  local_res18 = param_1->DataPtr;
  pFVar19 = local_res18 + param_1->ArrayNum;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  EVar6 = TryParseTag(&local_a0,&local_b8,&local_res18,pFVar19);
  pFVar15 = local_res18;
  do {
    pFVar13 = pFVar11;
    local_res18 = pFVar15;
    if (EVar6 == None) {
      if ((int)local_c0 != 0) {
        this->bCreationFailed = true;
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_50,L"XmlParser",L"MalformedXMLFile",L"Malformed Xml File");
        pFVar15 = FText::ToString(pFVar14);
        ::FString::operator=(&this->ErrorMessage,pFVar15);
LAB_14455f2c5:
        if (local_50.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
        }
      }
LAB_14455f2d6:
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if ((FXmlAttribute *)local_b8.AllocatorInstance.Data != (FXmlAttribute *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      ScopeExitSupport::TScopeGuard<`FXmlFile::CreateRootNode'::__l2::<lambda_1>_>::
      ~TScopeGuard<_FXmlFile::CreateRootNode_::__l2::<lambda_1>_>(&local_res20);
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return pFVar13;
    }
    if (EVar6 == Error) {
      this->bCreationFailed = true;
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_60,L"XmlParser",L"MalformedXMLFile",L"Malformed Xml File");
      pFVar15 = FText::ToString(pFVar14);
      ::FString::operator=(&this->ErrorMessage,pFVar15);
      local_50.TextData.Reference = local_60.TextData.Reference;
      goto LAB_14455f2c5;
    }
    if (EVar6 == ParsedEndTag) {
      if ((int)local_c0 == 0) {
        this->bCreationFailed = true;
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_80,L"XmlParser",L"MalformedXMLFile",L"Malformed Xml File");
        pFVar15 = FText::ToString(pFVar14);
        ::FString::operator=(&this->ErrorMessage,pFVar15);
        local_50.TextData.Reference = local_80.TextData.Reference;
        goto LAB_14455f2c5;
      }
      uVar7 = 0;
      if ((int)((int)local_c0 - 1U) < (int)local_c0) {
        uVar7 = ~((int)local_c0 - 1U) >> 0x1f;
      }
      iVar8 = (int)local_c0;
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FXmlNode *)(*pcVar3)();
          return pFVar11;
        }
        iVar8 = (int)local_c0;
      }
      iVar9 = *(int *)(*(longlong *)(local_c8.Data + (longlong)(iVar8 + -1) * 8) + 0x28);
      if (iVar9 == local_a0.Data.ArrayNum) {
        if (1 < iVar9) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)
                              (*(longlong *)(local_c8.Data + (longlong)(iVar8 + -1) * 8) + 0x20),
                             (wchar_t *)local_a0.Data.AllocatorInstance.Data);
          bVar5 = iVar8 == 0;
          iVar8 = (int)local_c0;
          goto LAB_14455ed80;
        }
      }
      else {
        bVar5 = iVar9 + local_a0.Data.ArrayNum == 1;
LAB_14455ed80:
        if (!bVar5) {
          this->bCreationFailed = true;
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_90,L"XmlParser",L"MalformedXMLFile",L"Malformed Xml File");
          pFVar15 = FText::ToString(pFVar14);
          ::FString::operator=(&this->ErrorMessage,pFVar15);
          local_50.TextData.Reference = local_90.TextData.Reference;
          goto LAB_14455f2c5;
        }
      }
      if (iVar8 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FXmlNode *)(*pcVar3)();
          return pFVar11;
        }
        iVar8 = (int)local_c0;
      }
      iVar16 = iVar8 + -1;
      pFVar13 = *(FXmlNode **)(local_c8.Data + (longlong)iVar16 * 8);
      iVar9 = (iVar8 - iVar16) + -1;
      if (iVar9 != 0) {
        memmove(local_c8.Data + (longlong)iVar16 * 8,local_c8.Data + (longlong)iVar16 * 8 + 8,
                (longlong)iVar9 << 3);
        iVar8 = (int)local_c0;
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar8 + -1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_c8,iVar8 + -1,(int *)((longlong)&local_c0 + 4));
      if ((int)local_c0 == 0) goto LAB_14455f2d6;
    }
    else {
      uVar7 = 0;
      if (EVar6 == NotATag) {
        if ((int)local_c0 == 0) {
          if (this->bHackAttemptToPreserveWhitespace == false) {
LAB_14455f3d7:
            this->bCreationFailed = true;
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_70,L"XmlParser",L"MalformedXMLFile",L"Malformed Xml File");
            pFVar15 = FText::ToString(pFVar14);
            ::FString::operator=(&this->ErrorMessage,pFVar15);
            if (local_70.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
            }
            goto LAB_14455f2d6;
          }
          iVar8 = (pFVar15->Data).ArrayNum;
          pFVar17 = (pFVar15->Data).AllocatorInstance.Data;
          pFVar20 = pFVar17 + (longlong)iVar8 * 2 + -2;
          if (iVar8 == 0) {
            pFVar20 = pFVar17 + (longlong)iVar8 * 2;
          }
          while( true ) {
            if ((pFVar15->Data).ArrayNum != iVar8) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pFVar17 == pFVar20) break;
            if ((*(ushort *)pFVar17 != 0x20) && (0x1f < *(ushort *)pFVar17)) goto LAB_14455f3d7;
            pFVar17 = pFVar17 + 2;
          }
          local_res18 = pFVar15 + 1;
        }
        else {
          uVar10 = uVar7;
          if ((int)((int)local_c0 - 1U) < (int)local_c0) {
            uVar10 = ~((int)local_c0 - 1U) >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FXmlNode *)(*pcVar3)();
              return pFVar11;
            }
          }
          iVar8 = *(int *)(*(longlong *)(local_c8.Data + (longlong)((int)local_c0 + -1) * 8) + 0x38)
          ;
          pFVar15 = (FString *)
                    (*(longlong *)(local_c8.Data + (longlong)((int)local_c0 + -1) * 8) + 0x30);
          uVar10 = iVar8 - 1;
          if (iVar8 == 0) {
            uVar10 = uVar7;
          }
          if ((0 < (int)uVar10) &&
             ((this->bHackAttemptToPreserveWhitespace == false ||
              (bVar5 = ::FString::EndsWith(pFVar15,L"\n",1,IgnoreCase), !bVar5)))) {
            ::FString::AppendChars(pFVar15,L" ",1);
          }
          iVar8 = (local_res18->Data).ArrayNum;
          pTVar4 = &local_res18->Data;
          uVar10 = iVar8 - 1;
          if (iVar8 == 0) {
            uVar10 = uVar7;
          }
          local_res18 = local_res18 + 1;
          ::FString::AppendChars(pFVar15,(wchar_t *)(pTVar4->AllocatorInstance).Data,uVar10);
        }
      }
      else {
        if ((1 < EVar6 - ParsedStartTag) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ParseResult == ETryParseTagResult::ParsedStartTag || ParseResult == ETryParseTagResult::ParsedEmptyElementTag"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                               ,0x2dd,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FXmlNode *)(*pcVar3)();
          return pFVar11;
        }
        pFVar12 = ::operator_new(0x48);
        if (pFVar12 != (FXmlNode *)0x0) {
          (pFVar12->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Children).ArrayNum = 0;
          (pFVar12->Children).ArrayMax = 0;
          (pFVar12->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Attributes).ArrayNum = 0;
          (pFVar12->Attributes).ArrayMax = 0;
          (pFVar12->Tag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Tag).Data.ArrayNum = 0;
          (pFVar12->Tag).Data.ArrayMax = 0;
          (pFVar12->Content).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Content).Data.ArrayNum = 0;
          (pFVar12->Content).Data.ArrayMax = 0;
          pFVar12->NextNode = (FXmlNode *)0x0;
          pFVar13 = pFVar12;
        }
        pFVar15 = &pFVar13->Tag;
        local_a8 = pFVar13;
        if (pFVar15 != &local_a0) {
          pFVar17 = (pFVar15->Data).AllocatorInstance.Data;
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
          }
          (pFVar15->Data).AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar13->Tag).Data.ArrayNum = local_a0.Data.ArrayNum;
          (pFVar13->Tag).Data.ArrayMax = local_a0.Data.ArrayMax;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
        }
        pFVar13 = local_a8;
        pTVar18 = &local_a8->Attributes;
        if (pTVar18 != &local_b8) {
          DestructItems<FXmlAttribute,int>
                    ((FXmlAttribute *)(pTVar18->AllocatorInstance).Data,
                     (local_a8->Attributes).ArrayNum);
          pFVar17 = (pTVar18->AllocatorInstance).Data;
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
          }
          (pTVar18->AllocatorInstance).Data = local_b8.AllocatorInstance.Data;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar13->Attributes).ArrayNum = local_b8.ArrayNum;
          (pFVar13->Attributes).ArrayMax = local_b8.ArrayMax;
          local_b8.ArrayNum = 0;
          local_b8.ArrayMax = 0;
        }
        if ((int)local_c0 == 0) {
          iVar8 = 0;
          pFVar13 = local_a8;
          if (EVar6 == ParsedEmptyElementTag) goto LAB_14455f2d6;
        }
        else {
          if ((int)((int)local_c0 - 1U) < (int)local_c0) {
            uVar7 = ~((int)local_c0 - 1U) >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FXmlNode *)(*pcVar3)();
              return pFVar11;
            }
          }
          pFVar2 = *(ForAnyElementType **)(local_c8.Data + (longlong)((int)local_c0 + -1) * 8);
          if (((pFVar2->Data <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FXmlNode *)(*pcVar3)();
            return pFVar11;
          }
          iVar8 = *(int *)&pFVar2[1].Data;
          piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,pFVar2,piVar1);
          }
          *(int *)&pFVar2[1].Data = iVar8 + 1;
          *(FXmlNode **)(pFVar2->Data + (longlong)iVar8 * 8) = local_a8;
          iVar8 = (int)local_c0;
        }
        if (EVar6 == ParsedStartTag) {
          if ((local_c8.Data <= (FScriptContainerElement *)&local_a8) &&
             ((FScriptContainerElement *)&local_a8 < local_c8.Data + (longlong)local_c0._4_4_ * 8))
          {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FXmlNode *)(*pcVar3)();
              return pFVar11;
            }
            iVar8 = (int)local_c0;
          }
          if (iVar8 == local_c0._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_c8,(int *)((longlong)&local_c0 + 4));
          }
          local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
          *(FXmlNode **)(local_c8.Data + (longlong)iVar8 * 8) = local_a8;
        }
      }
    }
    DestructItems<FXmlAttribute,int>
              ((FXmlAttribute *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FXmlAttribute *)local_b8.AllocatorInstance.Data != (FXmlAttribute *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    EVar6 = TryParseTag(&local_a0,&local_b8,&local_res18,pFVar19);
    pFVar15 = local_res18;
  } while( true );
}

// EnableAttemptToPreserveWhitespaceHack @ 14455f680

void __thiscall FXmlFile::EnableAttemptToPreserveWhitespaceHack(FXmlFile *this)

{
  this->bHackAttemptToPreserveWhitespace = true;
  return;
}

// GetLastError @ 14455fa10

FString * __thiscall FXmlFile::GetLastError(FXmlFile *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ErrorMessage);
  return __return_storage_ptr__;
}

// GetRootNode @ 14455fa50

FXmlNode * __thiscall FXmlFile::GetRootNode(FXmlFile *this)

{
  return this->RootNode;
}

// GetRootNode @ 14455fa60

FXmlNode * __thiscall FXmlFile::GetRootNode(FXmlFile *this)

{
  return this->RootNode;
}

// HookUpNextPtrs @ 14455faa0

void __thiscall FXmlFile::HookUpNextPtrs(FXmlFile *this,FXmlNode *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1 != (FXmlNode *)0x0) {
    iVar5 = (param_1->Children).ArrayNum;
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        HookUpNextPtrs(this,*(FXmlNode **)((param_1->Children).AllocatorInstance.Data + lVar7));
        iVar5 = (param_1->Children).ArrayNum;
        if (uVar6 != iVar5 - 1U) {
          uVar4 = 0;
          if ((int)(uVar6 + 1) < iVar5) {
            uVar4 = ~(uVar6 + 1) >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar1 = *(undefined8 *)((param_1->Children).AllocatorInstance.Data + lVar7 + 8);
          uVar4 = 0;
          if ((int)uVar6 < (param_1->Children).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)(*(longlong *)((param_1->Children).AllocatorInstance.Data + lVar7) + 0x40)
               = uVar1;
        }
        iVar5 = (param_1->Children).ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// IsValid @ 14455fc20

bool __thiscall FXmlFile::IsValid(FXmlFile *this)

{
  return this->bFileLoaded;
}

// LoadFile @ 14455fc50

bool __thiscall FXmlFile::LoadFile(FXmlFile *this,FString *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  FText *pFVar6;
  FString *pFVar7;
  ulonglong uVar8;
  FXmlNode *pFVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FText local_a8;
  FText local_98;
  FText local_88;
  TStringView<wchar_t> local_78;
  TArrayView<FString_const_,int> local_68;
  FText local_58;
  FText local_48;
  
  if (this->bFileLoaded != false) {
    if ((this->RootNode == (FXmlNode *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootNode != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                           ,0x5c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FXmlNode::Delete(this->RootNode);
    pFVar9 = this->RootNode;
    if (pFVar9 != (FXmlNode *)0x0) {
      FXmlNode::Delete(pFVar9);
      pFVar11 = (pFVar9->Content).Data.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (pFVar9->Tag).Data.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(pFVar9->Attributes).AllocatorInstance.Data,
                 (pFVar9->Attributes).ArrayNum);
      pFVar11 = (pFVar9->Attributes).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (pFVar9->Children).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      ::operator_delete(pFVar9,0x48);
    }
    this->RootNode = (FXmlNode *)0x0;
    this->bFileLoaded = false;
    ::FString::operator=(&this->LoadedFile,L"");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully");
    pFVar7 = FText::ToString(pFVar6);
    ::FString::operator=(&this->ErrorMessage,pFVar7);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_98,L"XmlParser",L"LoadSuccess",L"XmlFile was loaded successfully");
  pFVar7 = FText::ToString(pFVar6);
  ::FString::operator=(&this->ErrorMessage,pFVar7);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (param_2 == ConstructFromFile) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = FFileHelper::LoadFileToStringArray(&local_e8,pwVar10);
    if (!bVar2) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"XmlParser",L"FileLoadFail",L"Failed to load the file");
      pFVar7 = FText::ToString(pFVar6);
      ::FString::operator=(&this->ErrorMessage,pFVar7);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      ::FString::AppendChars(&this->ErrorMessage,L"\"",1);
      iVar5 = (param_1->Data).ArrayNum;
      iVar13 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars
                (&this->ErrorMessage,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar13);
      ::FString::AppendChars(&this->ErrorMessage,L"\"",1);
      uVar3 = 0;
      goto LAB_14456019a;
    }
  }
  else {
    ::FString::ParseIntoArrayLines(param_1,&local_e8,false);
  }
  PreProcessInput(this,&local_e8);
  iVar5 = local_e8.ArrayNum;
  if (this->bHackAttemptToPreserveWhitespace == false) {
    uVar8 = local_e8._8_8_ & 0xffffffff;
  }
  else {
    uVar8 = (ulonglong)local_e8.ArrayNum;
    pFVar11 = local_e8.AllocatorInstance.Data + uVar8 * 0x10;
    FVar12.Data = local_e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        uVar8 = local_e8._8_8_ & 0xffffffff;
      }
      if (FVar12.Data == pFVar11) break;
      ::FString::AppendChar((FString *)FVar12.Data,L'\n');
      uVar8 = local_e8._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
    }
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  iVar5 = (int)uVar8;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
  }
  if (0 < iVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
    uVar8 = local_e8._8_8_ & 0xffffffff;
  }
  iVar5 = (int)uVar8;
  pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  FVar12.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar12.Data == pFVar11) break;
    local_c8 = *(wchar_t **)FVar12.Data;
    iStack_c0 = *(int *)(FVar12.Data + 8) + -1;
    if (*(int *)(FVar12.Data + 8) == 0) {
      iStack_c0 = 0;
    }
    local_78._12_4_ = uStack_bc;
    local_78.Size = iStack_c0;
    local_78.DataPtr = local_c8;
    Tokenize(this,&local_78,&local_d8);
    uVar8 = local_e8._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x10;
  }
  iVar5 = local_d8.ArrayNum;
  local_b8 = local_d8.AllocatorInstance.Data;
  this->bCreationFailed = false;
  if ((local_d8.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iStack_b0 = iVar5;
  local_68._12_4_ = uStack_ac;
  local_68.ArrayNum = iVar5;
  local_68.DataPtr = (FString *)local_b8;
  pFVar9 = CreateRootNode(this,&local_68);
  if (pFVar9 == (FXmlNode *)0x0) {
    this->bFileLoaded = false;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"XmlParser",L"NodeCreateFail",
                        L"Failed to parse the loaded document");
    pFVar7 = FText::ToString(pFVar6);
    ::FString::operator=(&this->ErrorMessage,pFVar7);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else {
    this->bFileLoaded = true;
    HookUpNextPtrs(this,pFVar9);
    this->RootNode = pFVar9;
  }
  if (this->bFileLoaded == true) {
    cVar4 = '\x01';
    if (param_2 == ConstructFromFile) {
      ::FString::operator=(&this->LoadedFile,param_1);
      cVar4 = this->bFileLoaded;
    }
  }
  else {
    ::FString::operator=(&this->LoadedFile,L"");
    cVar4 = this->bFileLoaded;
    this->RootNode = (FXmlNode *)0x0;
  }
  if ((this->bCreationFailed != false) && (cVar4 != '\0')) {
    if ((this->RootNode == (FXmlNode *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootNode != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.cpp"
                           ,0x5c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FXmlNode::Delete(this->RootNode);
    pFVar9 = this->RootNode;
    if (pFVar9 != (FXmlNode *)0x0) {
      FXmlNode::Delete(pFVar9);
      pFVar11 = (pFVar9->Content).Data.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (pFVar9->Tag).Data.AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      DestructItems<FXmlAttribute,int>
                ((FXmlAttribute *)(pFVar9->Attributes).AllocatorInstance.Data,
                 (pFVar9->Attributes).ArrayNum);
      pFVar11 = (pFVar9->Attributes).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (pFVar9->Children).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      ::operator_delete(pFVar9,0x48);
    }
    this->RootNode = (FXmlNode *)0x0;
    this->bFileLoaded = false;
    ::FString::operator=(&this->LoadedFile,L"");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"XmlParser",L"ClearSuccess",L"XmlFile was cleared successfully");
    pFVar7 = FText::ToString(pFVar6);
    ::FString::operator=(&this->ErrorMessage,pFVar7);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  uVar3 = this->bFileLoaded;
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
LAB_14456019a:
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// PreProcessInput @ 144560670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FXmlFile::PreProcessInput(FXmlFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int local_res18;
  uint local_res20;
  int local_68;
  longlong local_60;
  longlong local_58;
  
  iVar9 = param_1->ArrayNum;
  uVar16 = 0;
  uVar13 = uVar16;
  if (0 < iVar9) {
    do {
      uVar10 = 0;
      uVar8 = (uint)uVar16;
      uVar16 = uVar10;
      uVar18 = uVar10;
      while( true ) {
        uVar15 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = *(int *)((param_1->AllocatorInstance).Data + uVar13 + 8);
        uVar15 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar15 = 0;
        }
        iVar9 = (int)uVar10;
        iVar12 = (int)uVar16;
        if ((int)uVar15 <= iVar9) break;
        uVar15 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (param_1->AllocatorInstance).Data;
        if (iVar9 < 0) {
code_r0x000144560799:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          iVar14 = *(int *)(pFVar11 + uVar13 + 8);
          iVar7 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar7 = 0;
          }
          if (iVar7 <= iVar9) goto code_r0x000144560799;
        }
        uVar1 = *(ushort *)(uVar18 + *(longlong *)(pFVar11 + uVar13));
        if ((uVar1 != 0x20) && (0x1f < uVar1)) break;
        uVar16 = (ulonglong)(iVar12 + 1);
        uVar10 = (ulonglong)(iVar9 + 1);
        uVar18 = uVar18 + 2;
      }
      if (0 < iVar12) {
        uVar15 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::RemoveAt((FString *)
                            ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),0,
                            iVar12,No);
      }
      iVar9 = param_1->ArrayNum;
      uVar16 = (ulonglong)(uVar8 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar8 + 1) < iVar9);
  }
  uVar8 = 0;
  if (0 < iVar9) {
    do {
      uVar15 = 0;
      if ((int)uVar8 < iVar9) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = ::FString::StartsWith
                        ((FString *)
                         ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),
                         L"<!DOCTYPE",9,IgnoreCase);
      if (bVar3) {
LAB_144560967:
        uVar15 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::operator=
                  ((FString *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),L"")
        ;
      }
      else {
        uVar15 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = ::FString::StartsWith
                          ((FString *)
                           ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),
                           L"<?xml",5,IgnoreCase);
        if (bVar3) goto LAB_144560967;
      }
      iVar9 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar9);
  }
  uVar15 = 0;
  uVar8 = 0xffffffff;
  bVar3 = false;
  iVar12 = -1;
  local_res20 = 0xffffffff;
  local_68 = -1;
  if (0 < iVar9) {
    local_60 = 0;
    local_58 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar15 < iVar9) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar9 = *(int *)((param_1->AllocatorInstance).Data + local_58 + 8);
      uVar17 = iVar9 - 1;
      if (iVar9 == 0) {
        uVar17 = 0;
      }
      if ((uVar17 == 3) && (bVar3)) {
        uVar17 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (param_1->AllocatorInstance).Data + local_60 * 0x10;
        iVar9 = *(int *)(pFVar11 + 8);
        iVar14 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar14 = 0;
        }
        if ((iVar14 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (**(short **)pFVar11 == 0x2d) {
          uVar17 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (param_1->AllocatorInstance).Data + local_60 * 0x10;
          iVar14 = *(int *)(pFVar11 + 8);
          iVar9 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar9 = 0;
          }
          if ((iVar9 < 2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(short *)(*(longlong *)pFVar11 + 2) == 0x2d) {
            uVar17 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar11 = (param_1->AllocatorInstance).Data + local_60 * 0x10;
            iVar14 = *(int *)(pFVar11 + 8);
            iVar9 = iVar14 + -1;
            if (iVar14 == 0) {
              iVar9 = 0;
            }
            if ((iVar9 < 3) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(short *)(*(longlong *)pFVar11 + 4) == 0x3e) {
              bVar3 = false;
              WhiteOut(this,param_1,uVar8,uVar15,iVar12,2);
            }
          }
        }
      }
      uVar17 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = 0;
      iVar14 = *(int *)((param_1->AllocatorInstance).Data + local_60 * 0x10 + 8);
      iVar9 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar9 = 0;
      }
      if (2 < iVar9) {
        local_res18 = 2;
        iVar14 = 1;
        uVar17 = ~uVar15 >> 0x1f;
        iVar9 = 3;
        uVar16 = uVar13;
        while( true ) {
          uVar8 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar12 = *(int *)((param_1->AllocatorInstance).Data + local_60 * 0x10 + 8);
          uVar6 = 0;
          uVar5 = iVar12 - 1;
          if (iVar12 == 0) {
            uVar5 = uVar6;
          }
          iVar12 = local_68;
          uVar8 = local_res20;
          if ((int)uVar5 <= iVar9) break;
          if (bVar3) {
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar6 = uVar17;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar11 = (param_1->AllocatorInstance).Data;
            if (iVar14 < 0) {
code_r0x000144561138:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
              iVar7 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar7 = 0;
              }
              if (iVar7 <= iVar14) goto code_r0x000144561138;
            }
            if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 2 + uVar13) == 0x2d) {
              uVar8 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar11 = (param_1->AllocatorInstance).Data;
              if (iVar14 + 1 < 0) {
code_r0x0001445611ea:
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = 0;
                }
                if (iVar7 <= iVar14 + 1) goto code_r0x0001445611ea;
              }
              if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 4 + uVar13) != 0x2d)
              goto LAB_1445612de;
              uVar8 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar11 = (param_1->AllocatorInstance).Data;
              if (iVar14 + 2 < 0) {
code_r0x0001445612a3:
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = 0;
                }
                if (iVar7 <= iVar14 + 2) goto code_r0x0001445612a3;
              }
              if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 6 + uVar13) != 0x3e)
              goto LAB_1445612de;
LAB_1445614fa:
              bVar3 = false;
              WhiteOut(this,param_1,local_res20,uVar15,local_68,iVar14 + 2);
            }
            else {
LAB_1445612de:
              uVar8 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar11 = (param_1->AllocatorInstance).Data;
              if (iVar14 + -1 < 0) {
code_r0x00014456135c:
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = 0;
                }
                if (iVar7 <= iVar14 + -1) goto code_r0x00014456135c;
              }
              if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + uVar13) == 0x2d) {
                uVar8 = 0;
                if ((int)uVar15 < param_1->ArrayNum) {
                  uVar8 = uVar17;
                }
                if ((uVar8 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar11 = (param_1->AllocatorInstance).Data;
                if (iVar14 < 0) {
code_r0x000144561414:
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                     ,0x107,
                                     L"String index out of bounds: Index %i from a string with a length of %i"
                                    );
                  if (bVar4) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                else {
                  iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                  iVar7 = iVar12 + -1;
                  if (iVar12 == 0) {
                    iVar7 = 0;
                  }
                  if (iVar7 <= iVar14) goto code_r0x000144561414;
                }
                if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 2 + uVar13) == 0x2d) {
                  uVar8 = 0;
                  if ((int)uVar15 < param_1->ArrayNum) {
                    uVar8 = uVar17;
                  }
                  if ((uVar8 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar11 = (param_1->AllocatorInstance).Data;
                  if (iVar14 + 1 < 0) {
code_r0x0001445614c6:
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                       ,0x107,
                                       L"String index out of bounds: Index %i from a string with a length of %i"
                                      );
                    if (bVar4) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  else {
                    iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                    iVar7 = iVar12 + -1;
                    if (iVar12 == 0) {
                      iVar7 = 0;
                    }
                    if (iVar7 <= iVar14 + 1) goto code_r0x0001445614c6;
                  }
                  if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 4 + uVar13) == 0x3e)
                  goto LAB_1445614fa;
                }
              }
            }
          }
          else {
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar6 = uVar17;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar11 = (param_1->AllocatorInstance).Data;
            if ((int)uVar16 < 0) {
code_r0x000144560e4a:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
              iVar7 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar7 = 0;
              }
              if (iVar7 <= iVar14 + -1) goto code_r0x000144560e4a;
            }
            if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + uVar13) == 0x3c) {
              uVar8 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar11 = (param_1->AllocatorInstance).Data;
              if (iVar14 < 0) {
code_r0x000144560efe:
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = 0;
                }
                if (iVar7 <= iVar14) goto code_r0x000144560efe;
              }
              if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 2 + uVar13) == 0x21) {
                uVar8 = 0;
                if ((int)uVar15 < param_1->ArrayNum) {
                  uVar8 = uVar17;
                }
                if ((uVar8 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar11 = (param_1->AllocatorInstance).Data;
                if (local_res18 < 0) {
code_r0x000144560fb9:
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                     ,0x107,
                                     L"String index out of bounds: Index %i from a string with a length of %i"
                                    );
                  if (bVar4) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                else {
                  iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                  iVar7 = iVar12 + -1;
                  if (iVar12 == 0) {
                    iVar7 = 0;
                  }
                  if (iVar7 <= iVar14 + 1) goto code_r0x000144560fb9;
                }
                if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 4 + uVar13) == 0x2d) {
                  uVar8 = 0;
                  if ((int)uVar15 < param_1->ArrayNum) {
                    uVar8 = uVar17;
                  }
                  if ((uVar8 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar11 = (param_1->AllocatorInstance).Data;
                  if (iVar14 + 2 < 0) {
code_r0x00014456106e:
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                       ,0x107,
                                       L"String index out of bounds: Index %i from a string with a length of %i"
                                      );
                    if (bVar4) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  else {
                    iVar12 = *(int *)(pFVar11 + local_60 * 0x10 + 8);
                    iVar7 = iVar12 + -1;
                    if (iVar12 == 0) {
                      iVar7 = 0;
                    }
                    if (iVar7 <= iVar14 + 2) goto code_r0x00014456106e;
                  }
                  if (*(short *)(*(longlong *)(pFVar11 + local_60 * 0x10) + 6 + uVar13) == 0x2d) {
                    local_68 = iVar14 + -1;
                    bVar3 = true;
                    local_res20 = uVar15;
                  }
                }
              }
            }
          }
          iVar14 = iVar14 + 1;
          uVar13 = uVar13 + 2;
          iVar9 = iVar9 + 1;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          local_res18 = local_res18 + 1;
        }
      }
      local_58 = local_58 + 0x10;
      iVar9 = param_1->ArrayNum;
      local_60 = local_60 + 1;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar9);
  }
  return;
}

// Save @ 1445624b0

bool __thiscall FXmlFile::Save(FXmlFile *this,FString *param_1)

{
  bool bVar1;
  IFileManager *pIVar2;
  FText *this_00;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  ::FString::FString(&local_18,L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
  if (this->RootNode != (FXmlNode *)0x0) {
    local_28.DataPtr = (wchar_t *)0x0;
    local_28.Size = 0;
    local_28._12_4_ = 0;
    WriteNodeHierarchy(this->RootNode,(FString *)&local_28,&local_18);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_28.Size = iVar5;
  local_28.DataPtr = (wchar_t *)local_18.Data.AllocatorInstance.Data;
  bVar1 = FFileHelper::SaveStringToFile(&local_28,pwVar4,ForceUTF8WithoutBOM,pIVar2,0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_28,L"XmlParser",L"FileSaveFail",L"Failed to save the file")
    ;
    pFVar3 = FText::ToString(this_00);
    ::FString::operator=(&this->ErrorMessage,pFVar3);
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_28.DataPtr + 0x10))();
    }
    ::FString::PrintfImpl((FString *)&local_28,L"\"%s\"");
    iVar5 = local_28.Size + -1;
    if (local_28.Size == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&this->ErrorMessage,local_28.DataPtr,iVar5);
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Tokenize @ 144562650

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FXmlFile::Tokenize(FXmlFile *this,
                  TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
                  TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = param_1->ArrayNum;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    iVar2 = param_1->ArrayNum;
    pFVar4 = (param_1->AllocatorInstance).Data;
    pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar4 == pFVar5) break;
      local_38.DataPtr = *(wchar_t **)pFVar4;
      iVar3 = *(int *)(pFVar4 + 8) + -1;
      if (*(int *)(pFVar4 + 8) == 0) {
        iVar3 = 0;
      }
      local_38._12_4_ = uStack_3c;
      local_38.Size = iVar3;
      Tokenize(this,&local_38,__return_storage_ptr__);
      pFVar4 = pFVar4 + 0x10;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Tokenize @ 144562750

void __thiscall
FXmlFile::Tokenize(FXmlFile *this,TStringView<wchar_t> *param_1,
                  TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_68;
  FString *local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  local_58 = &local_68;
  pwVar3 = param_1->DataPtr;
  bVar7 = false;
  bVar6 = true;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pwVar1 = pwVar3 + (int)*(undefined8 *)&param_1->Size;
  pwVar11 = pwVar3;
  pwVar10 = pwVar3;
  local_50 = param_2;
  do {
    if (pwVar11 == pwVar1) {
      ScopeExitSupport::TScopeGuard<`FXmlFile::Tokenize'::__l2::<lambda_1>_>::
      ~TScopeGuard<_FXmlFile::Tokenize_::__l2::<lambda_1>_>(&local_58);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      return;
    }
    pwVar10 = pwVar10 + 1;
    wVar2 = *pwVar11;
    if ((((wVar2 != L' ') && (0x1f < (ushort)wVar2)) || (bVar7)) ||
       ((this->bHackAttemptToPreserveWhitespace != false && (wVar2 == L'\n')))) {
      iVar8 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      if (iVar8 == 0) {
        ::FString::AppendChar(&local_68,wVar2);
        if (*pwVar11 == L'/') {
          if ((pwVar10 != pwVar1) && (*pwVar10 == L'>')) goto LAB_144562959;
          if (pwVar11 != pwVar3) {
            bVar5 = pwVar11[-1] == L'<';
            goto LAB_144562940;
          }
        }
        else {
          bVar5 = (*pwVar11 + L'ￄ' & 0xfffdU) == 0;
LAB_144562940:
          if (bVar5) {
LAB_144562959:
            if (wVar2 == L'>') {
LAB_144562963:
              pFVar9 = (param_2->AllocatorInstance).Data;
              if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 <
                   pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = param_2->ArrayNum;
              if (iVar8 == param_2->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar8 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
              *(undefined8 *)pFVar9 = 0;
              *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
              local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
              *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
              local_68.Data.ArrayNum = 0;
              local_68.Data.ArrayMax = 0;
            }
            else {
              bVar6 = false;
            }
            goto LAB_144562b77;
          }
        }
        bVar6 = true;
      }
      else if (bVar6) {
        if (wVar2 == L'\"') {
          bVar7 = !bVar7;
        }
        else if (wVar2 == L'/') {
          if (((pwVar11 + 1 != pwVar1) && (pwVar11[1] == L'>')) ||
             ((pwVar11 != pwVar3 && (pwVar11[-1] == L'<')))) {
LAB_144562c1b:
            if ((!bVar7) || (wVar2 != L'>')) {
              pFVar9 = (param_2->AllocatorInstance).Data;
              if ((pFVar9 <= (FScriptContainerElement *)&local_68) &&
                 (((FScriptContainerElement *)&local_68 <
                   pFVar9 + (longlong)param_2->ArrayMax * 0x10 &&
                  (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = param_2->ArrayNum;
              if (iVar8 == param_2->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar8 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
              *(undefined8 *)pFVar9 = 0;
              *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
              local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
              *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
              local_68.Data.ArrayNum = 0;
              local_68.Data.ArrayMax = 0;
              ::FString::AppendChar(&local_68,wVar2);
              bVar7 = false;
              if (wVar2 == L'>') {
                pFVar9 = (param_2->AllocatorInstance).Data;
                if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
                    ((FScriptContainerElement *)&local_68 <
                     pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar8 = param_2->ArrayNum;
                if (iVar8 == param_2->ArrayMax) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                param_2->ArrayNum = iVar8 + 1;
                pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
                *(undefined8 *)pFVar9 = 0;
                *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
                local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
                *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
                local_68.Data.ArrayNum = 0;
                local_68.Data.ArrayMax = 0;
              }
              else {
                bVar6 = false;
              }
              goto LAB_144562b77;
            }
          }
        }
        else if ((wVar2 + L'ￄ' & 0xfffdU) == 0) goto LAB_144562c1b;
        ::FString::AppendChar(&local_68,wVar2);
      }
      else {
        if (wVar2 == L'/') {
          if ((pwVar11 + 1 != pwVar1) && (pwVar11[1] == L'>')) goto LAB_144562b33;
          if (pwVar11 != pwVar3) {
            bVar5 = pwVar11[-1] == L'<';
            goto LAB_144562a60;
          }
        }
        else {
          bVar5 = (wVar2 + L'ￄ' & 0xfffdU) == 0;
LAB_144562a60:
          if (bVar5) {
LAB_144562b33:
            ::FString::AppendChar(&local_68,wVar2);
            if (wVar2 != L'>') goto LAB_144562b77;
            goto LAB_144562963;
          }
        }
        pFVar9 = (param_2->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
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
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar9 = 0;
        *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
        *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        ::FString::AppendChar(&local_68,wVar2);
        bVar6 = true;
      }
    }
    else {
      iVar8 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      if (iVar8 != 0) {
        pFVar9 = (param_2->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar9 = 0;
        *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
        *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
      }
    }
LAB_144562b77:
    pwVar11 = pwVar11 + 1;
  } while( true );
}

// WhiteOut @ 1445631d0

void __thiscall
FXmlFile::WhiteOut(FXmlFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,int param_2,
                  int param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  
  uVar10 = (ulonglong)param_4;
  if (0 < param_3 - param_2) {
    lVar9 = (longlong)param_2;
    lVar11 = uVar10 * 2;
    iVar6 = param_4;
    while( true ) {
      uVar7 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)((param_1->AllocatorInstance).Data + lVar9 * 0x10 + 8);
      uVar7 = iVar5 - 1;
      if (iVar5 == 0) {
        uVar7 = 0;
      }
      if ((int)uVar7 <= iVar6) break;
      uVar7 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar12 = (param_1->AllocatorInstance).Data;
      if (iVar6 < 0) {
code_r0x000144563302:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        iVar5 = *(int *)(pFVar12 + lVar9 * 0x10 + 8);
        iVar3 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar3 = 0;
        }
        if (iVar3 <= iVar6) goto code_r0x000144563302;
      }
      iVar6 = iVar6 + 1;
      *(undefined2 *)(lVar11 + *(longlong *)(pFVar12 + lVar9 * 0x10)) = 0x20;
      lVar11 = lVar11 + 2;
    }
    uVar10 = (ulonglong)(uint)param_4;
    if (1 < param_3 - param_2) {
      uVar7 = param_2 + 1;
      iVar6 = param_2 + (param_3 - param_2);
      if ((int)uVar7 < iVar6) {
        lVar11 = (longlong)(int)uVar7 << 4;
        do {
          uVar4 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ::FString::operator=((FString *)((param_1->AllocatorInstance).Data + lVar11),L"");
          uVar7 = uVar7 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((int)uVar7 < iVar6);
      }
    }
    uVar8 = 0;
    if (-1 < param_5) {
      uVar10 = uVar8;
      do {
        uVar7 = 0;
        if (param_3 < param_1->ArrayNum) {
          uVar7 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)param_3 * 0x10;
        iVar6 = (int)uVar8;
        if (iVar6 < 0) {
code_r0x0001445634a3:
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar5 = *(int *)(pFVar12 + 8);
          iVar3 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar3 = 0;
          }
          if (iVar3 <= iVar6) goto code_r0x0001445634a3;
        }
        uVar8 = (ulonglong)(iVar6 + 1U);
        *(undefined2 *)(uVar10 + *(longlong *)pFVar12) = 0x20;
        uVar10 = uVar10 + 2;
      } while ((int)(iVar6 + 1U) <= param_5);
      uVar10 = (ulonglong)(uint)param_4;
    }
  }
  if ((param_2 == param_3) && ((int)uVar10 <= param_5)) {
    lVar11 = (longlong)(int)uVar10 * 2;
    do {
      uVar7 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar12 = (param_1->AllocatorInstance).Data + (longlong)param_2 * 0x10;
      iVar6 = (int)uVar10;
      if (iVar6 < 0) {
code_r0x0001445635b3:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        iVar3 = *(int *)(pFVar12 + 8);
        iVar5 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar6) goto code_r0x0001445635b3;
      }
      uVar10 = (ulonglong)(iVar6 + 1U);
      *(undefined2 *)(lVar11 + *(longlong *)pFVar12) = 0x20;
      lVar11 = lVar11 + 2;
    } while ((int)(iVar6 + 1U) <= param_5);
  }
  return;
}

// WriteNodeHierarchy @ 144563620

void __cdecl FXmlFile::WriteNodeHierarchy(FXmlNode *param_1,FString *param_2,FString *param_3)

{
  void *_Src;
  FString *pFVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FXmlNode *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FString *local_res10;
  uint local_res18;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = param_2;
  ::FString::PrintfImpl(&local_68,L"<%s");
  ::FString::ConcatFF(&local_78,param_2,&local_68);
  iVar7 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar7);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_res18 = (param_1->Attributes).ArrayNum;
  uVar2 = (ulonglong)(int)local_res18;
  pFVar4 = (param_1->Attributes).AllocatorInstance.Data;
  pFVar9 = pFVar4 + uVar2 * 0x20;
  while( true ) {
    if ((param_1->Attributes).ArrayNum != (int)uVar2) {
      `TCheckedPointerIterator<FXmlAttribute_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar9) break;
    local_78.Data.ArrayNum = *(int *)(pFVar4 + 0x18);
    lVar6 = (longlong)local_78.Data.ArrayNum;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = *(void **)(pFVar4 + 0x10);
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
    }
    ::FString::ReplaceInline(&local_78,L"&",L"&amp;",CaseSensitive);
    ::FString::ReplaceInline(&local_78,L"\"",L"&quot;",CaseSensitive);
    ::FString::ReplaceInline(&local_78,L"\'",L"&apos;",CaseSensitive);
    ::FString::ReplaceInline(&local_78,L"<",L"&lt;",CaseSensitive);
    ::FString::ReplaceInline(&local_78,L">",L"&gt;",CaseSensitive);
    ::FString::PrintfImpl(&local_68,L" %s=\"%s\"");
    iVar7 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(param_3,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar7);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    uVar2 = (ulonglong)local_res18;
    pFVar4 = pFVar4 + 0x20;
  }
  iVar7 = 0;
  if (((param_1->Children).ArrayNum < 1) ||
     (pFVar5 = *(FXmlNode **)(param_1->Children).AllocatorInstance.Data, pFVar5 == (FXmlNode *)0x0))
  {
    iVar8 = (param_1->Content).Data.ArrayNum;
    iVar3 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar3 = iVar7;
    }
    if (iVar3 == 0) {
      ::FString::AppendChars(param_3,L" />\r\n",5);
      return;
    }
    ::FString::PrintfImpl(&local_48,L"</%s>");
    ::FString::ConcatCF(&local_78,L">",&param_1->Content);
    ::FString::ConcatFF(&local_58,&local_78,&local_48);
    ::FString::ConcatFC(&local_68,&local_58,L"\r\n");
    iVar8 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = iVar7;
    }
    ::FString::AppendChars(param_3,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::AppendChars(param_3,L">\r\n",3);
    pFVar1 = local_res10;
    do {
      ::FString::ConcatFC(&local_68,pFVar1,L"\t");
      WriteNodeHierarchy(pFVar5,&local_68,param_3);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar5 = pFVar5->NextNode;
    } while (pFVar5 != (FXmlNode *)0x0);
    ::FString::PrintfImpl(&local_58,L"</%s>");
    ::FString::ConcatFF(&local_78,pFVar1,&local_58);
    ::FString::ConcatFC(&local_68,&local_78,L"\r\n");
    iVar8 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = iVar7;
    }
    ::FString::AppendChars(param_3,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

