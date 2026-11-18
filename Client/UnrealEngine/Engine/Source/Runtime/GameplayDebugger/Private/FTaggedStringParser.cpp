// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 3

// ParseString @ 146d57200

void __thiscall FTaggedStringParser::ParseString(FTaggedStringParser *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  EStringParserToken EVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FColor_u_0 FVar14;
  uint uVar15;
  longlong lVar16;
  FColor_u_0 local_res8 [2];
  FString local_58;
  FString local_48;
  FColor_u_0 local_38;
  FScriptContainerElement local_34;
  
  uVar15 = 0;
  this->DataIndex = 0;
  ::FString::operator=(&this->DataString,param_1);
  iVar9 = (this->DataString).Data.ArrayNum;
  uVar11 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar11 = uVar15;
  }
  if (this->DataIndex < (int)uVar11) {
    ::FString::FString(&local_58,L"     ");
    local_38 = (this->DefaultColor).field0_0x0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_34 = (FScriptContainerElement)0x0;
    EVar6 = ReadToken(this);
    if (EVar6 != EndOfString) {
LAB_146d57290:
      if (EVar6 == OpenTag) {
        bVar7 = ParseTag(this,(FColor *)&local_res8[0]._s_0);
        if (bVar7) {
          pFVar3 = (this->NodeList).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar3 + (longlong)(this->NodeList).ArrayMax * 0x18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->NodeList).ArrayNum;
          piVar1 = &(this->NodeList).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,(ForAnyElementType *)this,piVar1);
          }
          FVar5.Data = local_48.Data.AllocatorInstance.Data;
          lVar10 = (longlong)iVar9;
          (this->NodeList).ArrayNum = iVar9 + 1;
          pFVar3 = (this->NodeList).AllocatorInstance.Data;
          *(undefined8 *)(pFVar3 + lVar10 * 0x18) = 0;
          lVar16 = (longlong)local_48.Data.ArrayNum;
          *(int *)(pFVar3 + lVar10 * 0x18 + 8) = local_48.Data.ArrayNum;
          pFVar3 = pFVar3 + lVar10 * 0x18;
          if (local_48.Data.ArrayNum == 0) {
            *(int *)(pFVar3 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,
                       local_48.Data.ArrayNum,(int *)(pFVar3 + 0xc));
            memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar5.Data,lVar16 * 2);
          }
          FVar14 = local_res8[0];
          *(FColor_u_0 *)(pFVar3 + 0x10) = local_38;
          pFVar3[0x14] = local_34;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          local_34 = (FScriptContainerElement)0x0;
          goto LAB_146d575c6;
        }
      }
      else if (EVar6 == NewLine) {
        pFVar3 = (this->NodeList).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar3 + (longlong)(this->NodeList).ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->NodeList).ArrayNum;
        piVar1 = &(this->NodeList).ArrayNum;
        if (iVar9 == (this->NodeList).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,&(this->NodeList).ArrayMax);
        }
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
        lVar10 = (longlong)iVar9;
        *piVar1 = iVar9 + 1;
        pFVar3 = (this->NodeList).AllocatorInstance.Data;
        *(undefined8 *)(pFVar3 + lVar10 * 0x18) = 0;
        lVar16 = (longlong)local_48.Data.ArrayNum;
        *(int *)(pFVar3 + lVar10 * 0x18 + 8) = local_48.Data.ArrayNum;
        pFVar3 = pFVar3 + lVar10 * 0x18;
        if (local_48.Data.ArrayNum == 0) {
          *(int *)(pFVar3 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,local_48.Data.ArrayNum
                     ,(int *)(pFVar3 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar5.Data,lVar16 * 2);
        }
        *(FColor_u_0 *)(pFVar3 + 0x10) = local_38;
        pFVar3[0x14] = local_34;
        uVar12 = *piVar1 - 1;
        uVar11 = 0;
        if ((int)uVar12 < *piVar1) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar14 = *(FColor_u_0 *)
                  ((this->NodeList).AllocatorInstance.Data + (longlong)*piVar1 * 0x18 + -8);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_34 = (FScriptContainerElement)0x1;
LAB_146d575c6:
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38 = FVar14;
      }
      else {
        if (EVar6 != RegularChar) {
          if (EVar6 == Tab) {
            uVar11 = local_58.Data.ArrayNum - 1;
            if (local_58.Data.ArrayNum == 0) {
              uVar11 = uVar15;
            }
            ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar11)
            ;
          }
          goto LAB_146d575d1;
        }
        iVar9 = this->DataIndex;
        if (iVar9 < 0) {
code_r0x000146d5730a:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          iVar2 = (this->DataString).Data.ArrayNum;
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = 0;
          }
          if ((int)uVar11 <= iVar9) goto code_r0x000146d5730a;
        }
        ::FString::AppendChar
                  (&local_48,
                   *(wchar_t *)
                    ((this->DataString).Data.AllocatorInstance.Data + (longlong)iVar9 * 2));
      }
LAB_146d575d1:
      iVar9 = this->DataIndex;
      iVar13 = iVar9 + 1;
      this->DataIndex = iVar13;
      iVar2 = (this->DataString).Data.ArrayNum;
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      uVar11 = uVar15;
      if (iVar13 < iVar8) {
        if ((((iVar13 < 0) || (iVar2 == 0)) || (iVar2 + -1 <= iVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = (uint)*(ushort *)
                        ((this->DataString).Data.AllocatorInstance.Data + (longlong)iVar9 * 2 + 2);
      }
      if (uVar11 != 0) {
        if (uVar11 == 9) {
          EVar6 = Tab;
        }
        else if (uVar11 == 10) {
          EVar6 = NewLine;
        }
        else if (uVar11 == 0x7b) {
          EVar6 = OpenTag;
        }
        else if (uVar11 == 0x7d) {
          EVar6 = CloseTag;
        }
        else {
          EVar6 = RegularChar;
        }
        goto LAB_146d57290;
      }
    }
    pFVar3 = (this->NodeList).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->NodeList).ArrayMax * 0x18)
        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->NodeList).ArrayNum;
    piVar1 = &(this->NodeList).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    (this->NodeList).ArrayNum = iVar9 + 1;
    pFVar3 = (this->NodeList).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
    ::FString::FString((FString *)pFVar3,&local_48);
    *(FColor_u_0 *)(pFVar3 + 0x10) = local_38;
    pFVar3[0x14].field_0x0 = local_34;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ParseTag @ 146d57790

bool __thiscall FTaggedStringParser::ParseTag(FTaggedStringParser *this,FColor *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  EStringParserToken EVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FColor_u_0 *pFVar9;
  uint uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  EVar5 = ReadToken(this);
  if ((EVar5 == EndOfString) || (piVar1 = &this->DataIndex, EVar5 == CloseTag)) {
    bVar6 = false;
    if (EVar5 != CloseTag) goto LAB_146d57962;
  }
  else {
    if (EVar5 != RegularChar) goto LAB_146d57850;
    do {
      iVar2 = *piVar1;
      if (iVar2 < 0) {
code_r0x000146d57815:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        iVar3 = (this->DataString).Data.ArrayNum;
        uVar10 = iVar3 - 1;
        if (iVar3 == 0) {
          uVar10 = 0;
        }
        if ((int)uVar10 <= iVar2) goto code_r0x000146d57815;
      }
      ::FString::AppendChar
                (&local_38,
                 *(wchar_t *)((this->DataString).Data.AllocatorInstance.Data + (longlong)iVar2 * 2))
      ;
LAB_146d57850:
      do {
        iVar2 = *piVar1;
        iVar11 = iVar2 + 1;
        *piVar1 = iVar11;
        iVar3 = (this->DataString).Data.ArrayNum;
        iVar8 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar8 = 0;
        }
        uVar10 = 0;
        if (iVar11 < iVar8) {
          if ((((iVar3 == 0) || (iVar11 < 0)) || (iVar3 + -1 <= iVar11)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x113,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          uVar10 = (uint)*(ushort *)
                          ((this->DataString).Data.AllocatorInstance.Data + (longlong)iVar2 * 2 + 2)
          ;
        }
        if (uVar10 == 0) {
          bVar6 = false;
          goto LAB_146d57962;
        }
      } while (((uVar10 == 9) || (uVar10 == 10)) || (uVar10 == 0x7b));
    } while (uVar10 != 0x7d);
  }
  ::FString::ToLower(&local_38,&local_28);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar12.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar6 = FColorList::IsValidColorName(&GColorList,(wchar_t *)FVar12.Data);
  if (bVar6) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar12.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar9 = &FColorList::GetFColorByName(&GColorList,(wchar_t *)FVar12.Data)->field0_0x0;
    bVar6 = true;
    (param_1->field0_0x0)._s_0 = *(FColor_u_0_s_0 *)pFVar9;
  }
  else {
    bVar6 = FColor::InitFromString(param_1,&local_38);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_146d57962:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// ReadToken @ 146d58710

EStringParserToken __thiscall FTaggedStringParser::ReadToken(FTaggedStringParser *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EStringParserToken EVar5;
  short sVar6;
  int iVar7;
  
  iVar1 = (this->DataString).Data.ArrayNum;
  sVar6 = 0;
  iVar2 = this->DataIndex;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  if (iVar2 < iVar7) {
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    sVar6 = *(short *)((this->DataString).Data.AllocatorInstance.Data + (longlong)iVar2 * 2);
  }
  if (sVar6 == 0) {
    return EndOfString;
  }
  if (sVar6 == 9) {
    return Tab;
  }
  if (sVar6 != 10) {
    if (sVar6 == 0x7b) {
      return OpenTag;
    }
    if (sVar6 == 0x7d) {
      return CloseTag;
    }
    return RegularChar;
  }
  return NewLine;
}

