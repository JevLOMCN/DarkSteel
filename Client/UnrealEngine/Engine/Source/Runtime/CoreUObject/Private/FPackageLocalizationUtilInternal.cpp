// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// L10NCulturesOnDiskVisitor @ 141e86500

L10NCulturesOnDiskVisitor * __thiscall
FPackageLocalizationUtilInternal::L10NCulturesOnDiskVisitor::L10NCulturesOnDiskVisitor
          (L10NCulturesOnDiskVisitor *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  FString local_28;
  
  pFVar5 = (FScriptContainerElement *)0x0;
  *(undefined1 *)&this->_padding_ = 0;
  pFVar1 = &this->MountPointAbsolutePath;
  this->bVisitedAlready = false;
  (this->CulturesIDVisited).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7L10NCulturesOnDiskVisitor_FPackageLocalizationUtilInternal__6B_;
  (this->CulturesIDVisited).ArrayNum = 0;
  (this->CulturesIDVisited).ArrayMax = 0;
  iVar6 = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountPointAbsolutePath).Data.ArrayNum = 0;
  (this->MountPointAbsolutePath).Data.ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_48,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  iVar4 = iVar6;
  if (&local_28 != pFVar3) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  local_68.Data.ArrayNum = iVar4 + -1;
  if (iVar4 == 0) {
    local_68.Data.ArrayNum = iVar6;
  }
  local_48._12_4_ = local_68.Data.ArrayMax;
  local_68.Data.AllocatorInstance.Data = pFVar5;
  local_48.DataPtr = (wchar_t *)pFVar5;
  local_48.Size = local_68.Data.ArrayNum;
  FPackageName::GetPackageMountPoint((TStringView<wchar_t> *)&local_res8,SUB81(&local_48,0));
  ::FName::ToString(&local_res8,&local_38);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  ::FString::FString(&local_68,L"");
  ::FString::ConcatCF(&local_78,L"/",&local_38);
  local_58.Size = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_58.Size = iVar6;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  local_48.Size = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    local_48.Size = iVar6;
  }
  local_48.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
  FPackageName::TryConvertLongPackageNameToFilename(&local_48,&local_88,&local_58);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar3 = FPaths::ConvertRelativePathToFull((FString *)&local_48,&local_88);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MountPointAbsolutePath).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->MountPointAbsolutePath).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

// Visit @ 141ec4d00

bool __thiscall
FPackageLocalizationUtilInternal::L10NCulturesOnDiskVisitor::Visit
          (L10NCulturesOnDiskVisitor *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,param_1);
  pFVar7 = local_28.Data.AllocatorInstance.Data + (longlong)local_28.Data.ArrayNum * 2;
  do {
    if (pFVar7 == local_28.Data.AllocatorInstance.Data) {
      iVar5 = -1;
      goto LAB_141ec4d4a;
    }
    pFVar7 = pFVar7 + -2;
  } while (*(short *)pFVar7 != 0x2f);
  iVar5 = (int)((longlong)pFVar7 - (longlong)local_28.Data.AllocatorInstance.Data >> 1);
LAB_141ec4d4a:
  pFVar6 = (FScriptContainerElement *)::FString::RightChop(&local_28,&local_18,iVar5 + 1);
  pFVar7 = (this->CulturesIDVisited).AllocatorInstance.Data;
  if (((pFVar7 <= pFVar6) && (pFVar6 < pFVar7 + (longlong)(this->CulturesIDVisited).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (this->CulturesIDVisited).ArrayNum;
  piVar1 = &(this->CulturesIDVisited).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CulturesIDVisited).AllocatorInstance,piVar1);
  }
  (this->CulturesIDVisited).ArrayNum = iVar5 + 1;
  pFVar7 = (this->CulturesIDVisited).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data
  ;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = *(int *)&pFVar6[8].field_0x0;
  *(int *)(pFVar7 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
  *(undefined8 *)&pFVar6[8].field_0x0 = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

