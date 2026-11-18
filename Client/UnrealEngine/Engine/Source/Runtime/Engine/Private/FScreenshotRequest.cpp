// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// CreateViewportScreenShotFilename @ 148924790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl FScreenshotRequest::CreateViewportScreenShotFilename(FString *param_1)

{
  int iVar1;
  UObject *pUVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType _Src_00;
  bool bVar6;
  int iVar7;
  FHighResScreenshotConfig *pFVar8;
  FString *pFVar9;
  UClass *this;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  FString local_98;
  FString local_88;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  iVar12 = 1;
  if (GIsDumpingMovie != 0) {
    ::FString::operator=(&local_98,L"MovieFrame");
    if (0 < GIsDumpingMovie) {
      GIsDumpingMovie = GIsDumpingMovie + -1;
    }
    goto LAB_1489249cf;
  }
  if (GIsHighResScreenshot) {
    pFVar8 = GetHighResScreenshotConfig();
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = (pFVar8->FilenameOverride).Data.ArrayNum;
    lVar10 = (longlong)local_70;
    pFVar3 = (pFVar8->FilenameOverride).Data.AllocatorInstance.Data;
    if (local_70 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70,0,&local_78,local_70,&local_6c);
      memcpy(local_78.Data,pFVar3,lVar10 * 2);
    }
    iVar7 = local_70;
    _Src_00.Data = local_78.Data;
    bVar5 = true;
    bVar6 = false;
    if (local_70 < 2) {
      pFVar9 = ::FString::FString(&local_58,L"HighresScreenshot");
      if (&local_98 != pFVar9) goto LAB_1489248e2;
    }
    else {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = local_70;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70,0,(ForAnyElementType *)&local_68,local_70,&local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar7 * 2);
      pFVar9 = &local_68;
      bVar5 = false;
      bVar6 = true;
LAB_1489248e2:
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
      if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = local_78.Data;
      if (!bVar5) goto LAB_1489249c5;
    }
    local_38.Data.AllocatorInstance.Data = local_78.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      local_38.Data.AllocatorInstance.Data = local_78.Data;
    }
  }
  else {
    bVar6 = 1 < (param_1->Data).ArrayNum;
    if (bVar6) {
      pFVar9 = ::FString::FString(&local_48,param_1);
    }
    else {
      pFVar9 = ::FString::FString(&local_38,L"ScreenShot");
    }
    if (&local_98 != pFVar9) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar6) goto LAB_1489249cf;
  }
LAB_1489249c5:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_1489249cf:
  if (local_98.Data.ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TypeName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                       ,0x1af,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(param_1,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar7);
  iVar7 = ::FString::Find(&local_98,L"/",1,IgnoreCase,FromStart,-1);
  if ((iVar7 == -1) &&
     (iVar7 = ::FString::Find(&local_98,L"\\",1,IgnoreCase,FromStart,-1), iVar7 == -1)) {
    this = Z_Construct_UClass_UEngine_NoRegister();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar7 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    if ((*(int *)(pUVar2 + 0x58) == 0) && (iVar7 != -1)) {
      iVar12 = 2;
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(pUVar2 + 0x58);
    _Src = *(void **)&pUVar2[0x57].field_0x20;
    local_88.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (iVar12 + iVar7 == 0)) {
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
    }
    else {
      uVar11 = iVar1 + iVar12 + iVar7;
      if ((int)uVar11 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar11,0,(ForAnyElementType *)&local_88,iVar1,&local_88.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    ::FString::PathAppend(&local_88,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar7);
    if (param_1 != &local_88) {
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_88.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// GetHighresScreenshotMaskColorArray @ 1489595d0

TArray<FColor,TSizedDefaultAllocator<32>_> * __cdecl
FScreenshotRequest::GetHighresScreenshotMaskColorArray(void)

{
  return &HighresScreenshotMaskColorArray;
}

// GetHighresScreenshotMaskExtents @ 1489595e0

TIntPoint<int> * __cdecl FScreenshotRequest::GetHighresScreenshotMaskExtents(void)

{
  return &HighresScreenshotMaskExtents;
}

// RequestScreenshot @ 148979510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
FScreenshotRequest::RequestScreenshot
          (FString *param_1,bool param_2,bool param_3,bool param_4,TIntRect<int> *param_5)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  FHighResScreenshotConfig *pFVar2;
  IFileManager *pIVar3;
  size_t sVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *_Str;
  int iVar7;
  FString local_38;
  FString local_28;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  CreateViewportScreenShotFilename(&local_38);
  _Str = L"png";
  if (param_4) {
    _Str = L"exr";
  }
  if (param_3) {
    pFVar1 = FPaths::GetBaseFilename(&local_28,&local_38,false);
    if (&local_38 != pFVar1) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar1->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar1->Data).ArrayMax;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = GetHighResScreenshotConfig();
    if (pFVar2->bDateTimeBasedNaming == false) {
      pIVar3 = IFileManager::Get();
      ::FString::FString(&local_28,_Str);
      FFileHelper::GenerateNextBitmapFilename(&local_38,&local_28,&Filename,pIVar3);
    }
    else {
      ::FString::FString(&local_28,_Str);
      FFileHelper::GenerateDateTimeBasedBitmapFilename(&local_38,&local_28,&Filename);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(&Filename,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    pFVar1 = FPaths::GetExtension(&local_28,&Filename,false);
    iVar7 = (pFVar1->Data).ArrayNum;
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      ::FString::AppendChars(&Filename,L".",1);
      sVar4 = wcslen(_Str);
      ::FString::AppendChars(&Filename,_Str,(int)sVar4);
    }
  }
  if (1 < Filename.Data.ArrayNum) {
    ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_5->field0_0x0)._s_0.Min.field0_0x0;
    ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_5->field0_0x0)._s_0.Max.field0_0x0;
    bIsScreenshotRequested = true;
    bShowUI = param_2;
  }
  GScreenMessagesRestoreState = GAreScreenMessagesEnabled;
  if (!param_2) {
    GAreScreenMessagesEnabled = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestScreenshot @ 148979780

void __cdecl FScreenshotRequest::RequestScreenshot(bool param_1)

{
  FString local_28;
  TIntRect<int>_u_0 local_18;
  
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  ::FString::FString(&local_28,L"");
  RequestScreenshot(&local_28,param_1,true,false,(TIntRect<int> *)&local_18._s_0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 148979a60

void __cdecl FScreenshotRequest::Reset(void)

{
  bIsScreenshotRequested = false;
  ::FString::Empty(&Filename);
  bShowUI = false;
  ViewRect.field0_0x0 = (TIntRect<int>_u_0)(TIntRect<int>_u_0)ZEXT816(0);
  return;
}

