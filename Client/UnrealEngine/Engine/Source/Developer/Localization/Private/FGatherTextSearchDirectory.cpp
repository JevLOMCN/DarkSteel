// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// StaticStruct @ 146b377e0

UScriptStruct * __cdecl FGatherTextSearchDirectory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGatherTextSearchDirectory.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FGatherTextSearchDirectory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextSearchDirectory,(UObject *)pUVar1,
                         L"GatherTextSearchDirectory");
  }
  return Z_Registration_Info_UScriptStruct_FGatherTextSearchDirectory.OuterSingleton;
}

// Validate @ 146b91200

bool __thiscall
FGatherTextSearchDirectory::Validate(FGatherTextSearchDirectory *this,bool param_1,FText *param_2)

{
  ELocalizationGatherPathRoot EVar1;
  wchar_t wVar2;
  FScriptContainerElement *_Src;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FText *pFVar10;
  size_t sVar11;
  ForAnyElementType FVar12;
  FString *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  wchar_t *_Str;
  int iVar16;
  undefined4 local_res10 [2];
  FString local_108;
  FString local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FText local_d8;
  FString local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FScriptContainerElement *local_98;
  int local_90;
  FText local_88;
  FString local_78;
  FString local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  
  iVar16 = 0;
  local_res10[0] = 0;
  if ((param_1) && (this->PathRoot == Project)) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"LocalizationTargetTypes",L"EngineCannotUseProjectRootError",
                         L"Engine targets cannot use \'Project\' as their path root.");
    FText::operator=(param_2,pFVar10);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    return false;
  }
  bVar7 = FPaths::IsRelative(&this->Path);
  iVar9 = (this->Path).Data.ArrayNum;
  if (bVar7) {
    if (iVar9 == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(this->Path).Data.AllocatorInstance.Data;
    }
    EVar1 = this->PathRoot;
    if (EVar1 == Auto) {
      bVar7 = !param_1;
      if (bVar7) {
        pFVar13 = FPaths::ProjectDir(&local_78);
      }
      else {
        pFVar13 = FPaths::EngineDir(&local_68);
      }
      local_f8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_f8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar7) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((!bVar7) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
LAB_146b9138e:
      local_a8.DataPtr = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
      if (local_f8.Data.ArrayNum == 0) goto LAB_146b9139a;
    }
    else {
      if (EVar1 == Engine) {
        FPaths::EngineDir(&local_f8);
        goto LAB_146b9138e;
      }
      if (EVar1 == Project) {
        FPaths::ProjectDir(&local_f8);
        goto LAB_146b9138e;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationTargetTypes.cpp"
                         ,0x2f,L"Unknown ELocalizationGatherPathRoot!");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
LAB_146b9139a:
      local_a8.DataPtr = L"";
    }
    bVar6 = true;
    bVar7 = false;
    bVar5 = true;
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      sVar11 = wcslen(local_a8.DataPtr);
      iVar16 = (int)sVar11;
    }
    local_90 = 0;
    local_a8.Size = iVar16;
    local_98 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar11 = wcslen(_Str);
      local_90 = (int)sVar11;
    }
    FPaths::CombineInternal(&local_c8,&local_a8,2);
    FVar15.Data = local_c8.Data.AllocatorInstance.Data;
  }
  else {
    _Src = (this->Path).Data.AllocatorInstance.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = iVar9;
    if (iVar9 == 0) {
      local_dc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,&local_e8,iVar9,&local_dc);
      memcpy(local_e8.Data,_Src,(longlong)iVar9 * 2);
    }
    bVar6 = false;
    bVar5 = false;
    bVar7 = true;
    FVar15.Data = local_e8.Data;
    local_c8.Data.ArrayNum = local_e0;
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    local_108.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_108,local_c8.Data.ArrayNum,
               &local_108.Data.ArrayMax);
    memcpy(local_108.Data.AllocatorInstance.Data,FVar15.Data,(longlong)local_c8.Data.ArrayNum * 2);
  }
  if ((bVar7) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data);
  }
  if ((bVar5) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.ArrayNum < 2) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"LocalizationTargetTypes",L"SearchDirectoryEmptyError",
                         L"Search directory not specified. Use \".\" to specify the root directory."
                        );
    FText::operator=(param_2,pFVar10);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    bVar7 = false;
    goto LAB_146b91742;
  }
  wVar2 = *(wchar_t *)local_108.Data.AllocatorInstance.Data;
  FVar15.Data = local_108.Data.AllocatorInstance.Data;
  uVar14 = 0;
  if ((ushort)wVar2 < 0x40) {
    uVar14 = 1L << ((byte)wVar2 & 0x3f);
  }
  while ((uVar14 & 0x8000040000000001) == 0) {
    wVar2 = *(wchar_t *)(FVar15.Data + 2);
    FVar15.Data = FVar15.Data + 2;
    uVar14 = 0;
    if ((ushort)wVar2 < 0x40) {
      uVar14 = 1L << ((byte)wVar2 & 0x3f);
    }
  }
  if (wVar2 != L'\0') {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar12.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar16 = (int)((longlong)FVar15.Data - (longlong)FVar12.Data >> 1);
    if (local_108.Data.ArrayNum == 0) {
      iVar9 = 0;
      if (iVar16 < 0) {
        iVar9 = iVar16;
      }
      iVar16 = 0;
      if (0 < iVar9) {
        iVar16 = iVar9;
      }
LAB_146b915ea:
      FVar15.Data = (FScriptContainerElement *)L"";
    }
    else {
      iVar9 = local_108.Data.ArrayNum + -1;
      if (iVar16 < local_108.Data.ArrayNum + -1) {
        iVar9 = iVar16;
      }
      iVar16 = 0;
      if (0 < iVar9) {
        iVar16 = iVar9;
      }
      FVar15.Data = local_108.Data.AllocatorInstance.Data;
      if (local_108.Data.ArrayNum == 0) goto LAB_146b915ea;
    }
    ::FString::ConstructFromPtrSize(&local_b8,(wchar_t *)FVar15.Data,iVar16);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_108.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_108.Data.ArrayNum = local_b8.Data.ArrayNum;
    local_108.Data.ArrayMax = local_b8.Data.ArrayMax;
    pFVar13 = FPaths::GetPath(&local_48,&local_108);
    if (&local_108 != pFVar13) {
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_108.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_108.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FText::FText(&local_d8);
  bVar7 = FPaths::ValidatePath(&local_108,&local_d8);
  if (bVar7) {
    bVar7 = FPaths::DirectoryExists(&local_108);
    if (bVar7) {
      bVar7 = true;
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_38,L"LocalizationTargetTypes",L"SearchDirectoryNonExistentError",
                           L"Search directory does not exist.");
      FText::operator=(param_2,pFVar10);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      bVar7 = false;
    }
  }
  else {
    pIVar3 = (param_2->TextData).Reference;
    if (pIVar3 != local_d8.TextData.Reference) {
      (param_2->TextData).Reference = local_d8.TextData.Reference;
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                  (local_d8.TextData.Reference,local_res10);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    bVar7 = false;
    param_2->Flags = local_d8.Flags;
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))(local_d8.TextData.Reference);
  }
LAB_146b91742:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

