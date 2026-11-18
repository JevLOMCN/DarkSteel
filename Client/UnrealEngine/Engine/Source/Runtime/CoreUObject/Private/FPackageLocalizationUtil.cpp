// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// ConvertLocalizedToSource @ 141e93730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FPackageLocalizationUtil::ConvertLocalizedToSource(TStringView<wchar_t> *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar4 = param_1->Size;
  local_18._12_4_ = uStack_2c;
  local_18.Size = 6;
  local_18.DataPtr = L"/L10N/";
  iVar6 = iVar4;
  if (iVar4 + -1 < iVar4) {
    iVar6 = iVar4 + -1;
  }
  iVar5 = 0;
  if (0 < iVar6) {
    iVar5 = iVar6;
  }
  local_28.Size = iVar5;
  local_28.DataPtr = param_1->DataPtr + ((longlong)iVar4 - (longlong)iVar5);
  iVar4 = UE::String::FindFirst(&local_28,&local_18,CaseSensitive);
  if ((iVar4 != -1) && (iVar4 != -2)) {
    iVar5 = param_1->Size;
    iVar6 = iVar4 + 7;
    if (iVar6 < iVar5) {
      lVar7 = (longlong)iVar6 * 2;
      do {
        if (((iVar6 < 0) || (iVar5 <= iVar6)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(short *)(lVar7 + (longlong)param_1->DataPtr) == 0x2f) break;
        iVar5 = param_1->Size;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 2;
      } while (iVar6 < iVar5);
    }
    if (iVar6 != param_1->Size) {
      ::FString::AssignRange(param_2,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      ::FString::RemoveAt(param_2,iVar4 + 2,(iVar6 - (iVar4 + 2)) + 1,No);
      return true;
    }
  }
  return false;
}

// ConvertSourceToLocalized @ 141e93890

bool __cdecl
FPackageLocalizationUtil::ConvertSourceToLocalized
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,FString *param_3)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = FPackageName::IsLocalizedPackage(&local_38);
  if (!bVar1) {
    iVar2 = param_1->Size;
    if ((0 < iVar2) && (*param_1->DataPtr == L'/')) {
      local_48.ArrayNum = 1;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)&u__;
      iVar7 = iVar2;
      if (iVar2 + -1 < iVar2) {
        iVar7 = iVar2 + -1;
      }
      pFVar6 = (FScriptContainerElement *)0x0;
      iVar8 = 0;
      iVar5 = 0;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      local_38.Size = iVar5;
      local_38.DataPtr = param_1->DataPtr + ((longlong)iVar2 - (longlong)iVar5);
      iVar2 = UE::String::FindFirst(&local_38,(TStringView<wchar_t> *)&local_48,IgnoreCase);
      if ((iVar2 != -1) && (iVar2 + 1 != -1)) {
        pFVar3 = ::FString::ConstructFromPtrSize
                           ((FString *)&local_38,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size
                           );
        if (&local_28 != pFVar3) {
          pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
          (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar8 = (pFVar3->Data).ArrayNum;
          (pFVar3->Data).ArrayNum = 0;
          (pFVar3->Data).ArrayMax = 0;
        }
        if (local_38.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_38.DataPtr);
        }
        ::FString::AssignRange(param_3,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
        iVar7 = 1;
        if (iVar8 != 0) {
          iVar7 = iVar8;
        }
        pTVar4 = &::FString::FString((FString *)&local_38,L"/L10N")->Data;
        if ((pTVar4->ArrayNum != 0) || (iVar5 = 1, iVar7 == 0)) {
          iVar5 = 0;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_48,pTVar4,iVar5 + iVar7);
        if (local_38.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_38.DataPtr);
        }
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        ::FString::PathAppend((FString *)&local_48,(wchar_t *)pFVar6,iVar7);
        ::FString::InsertAt(param_3,iVar2 + 1,(FString *)&local_48);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        return true;
      }
    }
  }
  return false;
}

// ConvertSourceToRegexLocalized @ 141e93a70

bool __cdecl
FPackageLocalizationUtil::ConvertSourceToRegexLocalized
          (TStringView<wchar_t> *param_1,FString *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 1;
  local_18.DataPtr = L"*";
  bVar1 = ConvertSourceToLocalized(param_1,&local_18,param_2);
  return bVar1;
}

// ConvertToSource @ 141e93b60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FPackageLocalizationUtil::ConvertToSource(TStringView<wchar_t> *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar3 = param_1->Size;
  local_18._12_4_ = uStack_2c;
  local_18.Size = 6;
  local_18.DataPtr = L"/L10N/";
  iVar4 = iVar3;
  if (iVar3 + -1 < iVar3) {
    iVar4 = iVar3 + -1;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  local_28.Size = iVar5;
  local_28.DataPtr = param_1->DataPtr + ((longlong)iVar3 - (longlong)iVar5);
  iVar3 = UE::String::FindFirst(&local_28,&local_18,CaseSensitive);
  if ((iVar3 != -1) && (iVar3 != -2)) {
    iVar4 = param_1->Size;
    iVar5 = iVar3 + 7;
    if (iVar5 < iVar4) {
      lVar6 = (longlong)iVar5 * 2;
      do {
        if (((iVar5 < 0) || (iVar4 <= iVar5)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(short *)(lVar6 + (longlong)param_1->DataPtr) == 0x2f) break;
        iVar4 = param_1->Size;
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 2;
      } while (iVar5 < iVar4);
    }
    if (iVar5 != param_1->Size) {
      ::FString::AssignRange(param_2,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      ::FString::RemoveAt(param_2,iVar3 + 2,(iVar5 - (iVar3 + 2)) + 1,No);
      return;
    }
  }
  ::FString::AssignRange(param_2,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  return;
}

// ExtractCultureFromLocalized @ 141e99940

bool __cdecl
FPackageLocalizationUtil::ExtractCultureFromLocalized
          (TStringView<wchar_t> *param_1,FString *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  iVar5 = param_1->Size;
  local_28._12_4_ = uStack_3c;
  local_28.Size = 6;
  local_28.DataPtr = L"/L10N/";
  iVar6 = iVar5;
  if (iVar5 + -1 < iVar5) {
    iVar6 = iVar5 + -1;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  local_38.Size = iVar7;
  local_38.DataPtr = param_1->DataPtr + ((longlong)iVar5 - (longlong)iVar7);
  iVar5 = UE::String::FindFirst(&local_38,&local_28,CaseSensitive);
  if ((iVar5 != -1) && (iVar5 != -2)) {
    iVar6 = param_1->Size;
    iVar5 = iVar5 + 7;
    iVar7 = iVar5;
    if (iVar5 < iVar6) {
      lVar8 = (longlong)iVar5 * 2;
      do {
        if (((iVar7 < 0) || (iVar6 <= iVar7)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(short *)(lVar8 + (longlong)param_1->DataPtr) == 0x2f) break;
        iVar6 = param_1->Size;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 2;
      } while (iVar7 < iVar6);
    }
    iVar6 = param_1->Size;
    if (iVar7 != iVar6) {
      iVar2 = iVar7 - iVar5;
      if (iVar5 < 0) {
        iVar5 = 0;
        iVar2 = iVar7;
      }
      if (iVar6 < iVar5) {
        iVar5 = iVar6;
      }
      iVar7 = iVar6 - iVar5;
      if (iVar2 < iVar6 - iVar5) {
        iVar7 = iVar2;
      }
      iVar6 = 0;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::AssignRange(param_2,param_1->DataPtr + iVar5,iVar6);
      return true;
    }
  }
  return false;
}

// GetLocalizedRoot @ 141ea1050

bool __cdecl
FPackageLocalizationUtil::GetLocalizedRoot(FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  FString local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (((iVar7 < 1) || (*(short *)(param_1->Data).AllocatorInstance.Data != 0x2f)) ||
     (iVar3 = ::FString::Find(param_1,L"/",1,IgnoreCase,FromStart,1), iVar3 == -1)) {
    bVar2 = false;
  }
  else {
    iVar7 = (param_1->Data).ArrayNum;
    iVar6 = 0;
    iVar4 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar4 = iVar6;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    iVar3 = iVar6;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar7 == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_18,pwVar5,iVar3);
    if (param_3 != &local_18) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_18.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PathAppend(param_3,L"L10N",4);
    iVar3 = (param_2->Data).ArrayNum;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = iVar6;
    }
    if (0 < iVar7) {
      ::FString::PathAppend(param_3,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
    }
    bVar2 = true;
  }
  return bVar2;
}

// GetLocalizedVariantsAbsolutePaths @ 141ea1190

void __cdecl
FPackageLocalizationUtil::GetLocalizedVariantsAbsolutePaths
          (TStringView<wchar_t> *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  IFileManager *pIVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  FString local_b8;
  FString local_a8;
  FString local_98;
  L10NCulturesOnDiskVisitor local_88;
  TStringView<wchar_t> local_50;
  FString local_40;
  
  FPackageLocalizationUtilInternal::L10NCulturesOnDiskVisitor::L10NCulturesOnDiskVisitor
            (&local_88,param_1);
  if (local_88.bVisitedAlready == false) {
    local_88.bVisitedAlready = true;
    ::FString::ConcatFC(&local_98,&local_88.MountPointAbsolutePath,L"/L10N/");
    pIVar5 = IFileManager::Get();
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar8.Data = local_98.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar5 + 0x98))(pIVar5,FVar8.Data,&local_88);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = local_88.CulturesIDVisited.ArrayNum;
  pFVar9 = local_88.CulturesIDVisited.AllocatorInstance.Data +
           (longlong)local_88.CulturesIDVisited.ArrayNum * 0x10;
  FVar8.Data = local_88.CulturesIDVisited.AllocatorInstance.Data;
  while( true ) {
    if (local_88.CulturesIDVisited.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar8.Data == pFVar9) break;
    local_50.DataPtr = *(wchar_t **)FVar8.Data;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_50.Size = *(int *)(FVar8.Data + 8) + -1;
    if (*(int *)(FVar8.Data + 8) == 0) {
      local_50.Size = 0;
    }
    ConvertSourceToLocalized(param_1,&local_50,&local_a8);
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    bVar3 = FPackageName::DoesPackageExist(&local_a8,&local_b8,true);
    if (bVar3) {
      pFVar6 = (FScriptContainerElement *)FPaths::ConvertRelativePathToFull(&local_40,&local_b8);
      pFVar7 = (param_2->AllocatorInstance).Data;
      if ((pFVar7 <= pFVar6) && (pFVar6 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(FScriptContainerElement **)pFVar7 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + 8) = *(int *)&pFVar6[8].field_0x0;
      *(int *)(pFVar7 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
      *(undefined8 *)&pFVar6[8].field_0x0 = 0;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    FVar8.Data = FVar8.Data + 0x10;
  }
  DestructItems<FString,int>
            ((FString *)local_88.CulturesIDVisited.AllocatorInstance.Data,
             local_88.CulturesIDVisited.ArrayNum);
  if (local_88.CulturesIDVisited.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.CulturesIDVisited.AllocatorInstance.Data);
  }
  if (local_88.MountPointAbsolutePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_88.MountPointAbsolutePath.Data.AllocatorInstance.Data);
  }
  return;
}

