// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// GenerateFlattened @ 14280b5b0

FCustomizedToolMenu * __thiscall
FCustomizedToolMenuHierarchy::GenerateFlattened
          (FCustomizedToolMenuHierarchy *this,FCustomizedToolMenu *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCustomizedToolMenu *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)__return_storage_ptr__);
  *(undefined8 *)&__return_storage_ptr__->EntryOrder = 0;
  *(undefined8 *)&(__return_storage_ptr__->EntryOrder).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EntryOrder).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EntryOrder).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EntryOrder).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->EntryOrder).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->EntryOrder).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EntryOrder).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EntryOrder).field_0x48 = 0;
  (__return_storage_ptr__->SectionOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SectionOrder).ArrayNum = 0;
  (__return_storage_ptr__->SectionOrder).ArrayMax = 0;
  pFVar4 = (this->Hierarchy).AllocatorInstance.Data;
  iVar2 = (this->Hierarchy).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Hierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomizedToolMenu_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = *(FCustomizedToolMenu **)pFVar4;
    UE::ToolMenuCustomization::Private::HandleToolMenuProfile
              ((FToolMenuProfile *)__return_storage_ptr__,(FToolMenuProfile *)pFVar3);
    UE::ToolMenuCustomization::Private::HandleToolMenuCustomization(__return_storage_ptr__,pFVar3);
    pFVar4 = pFVar4 + 8;
  }
  pFVar4 = (this->RuntimeHierarchy).AllocatorInstance.Data;
  iVar2 = (this->RuntimeHierarchy).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RuntimeHierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomizedToolMenu_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = *(FCustomizedToolMenu **)pFVar4;
    UE::ToolMenuCustomization::Private::HandleToolMenuProfile
              ((FToolMenuProfile *)__return_storage_ptr__,(FToolMenuProfile *)pFVar3);
    UE::ToolMenuCustomization::Private::HandleToolMenuCustomization(__return_storage_ptr__,pFVar3);
    pFVar4 = pFVar4 + 8;
  }
  return __return_storage_ptr__;
}

// GetEntrySectionName @ 14280fce0

FName __thiscall
FCustomizedToolMenuHierarchy::GetEntrySectionName(FCustomizedToolMenuHierarchy *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_res8;
  
  uVar6 = (this->Hierarchy).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Hierarchy).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FName)(*pcVar1)();
        return FVar4;
      }
      if (*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar5) != 0) {
        uVar3 = 0;
        if ((int)uVar6 < (this->Hierarchy).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          FVar4 = (FName)(*pcVar1)();
          return FVar4;
        }
        FCustomizedToolMenu::GetEntrySectionName
                  (*(FCustomizedToolMenu **)((this->Hierarchy).AllocatorInstance.Data + lVar5),
                   (FName)&local_res8);
        if (local_res8 != 0) {
          *(longlong *)param_1 = local_res8;
          return param_1;
        }
      }
      lVar5 = lVar5 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// IsEntryHidden @ 14281df80

bool __thiscall
FCustomizedToolMenuHierarchy::IsEntryHidden(FCustomizedToolMenuHierarchy *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FCustomizedToolMenuEntry *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = (this->Hierarchy).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Hierarchy).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar7 < (this->Hierarchy).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar5 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                 ::Find((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                         *)(*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar6) + 8),
                        param_1);
        if (pFVar5 != (FCustomizedToolMenuEntry *)0x0) {
          if (pFVar5->Visibility == Hidden) {
            return true;
          }
          if (pFVar5->Visibility == Visible) {
            return false;
          }
        }
      }
      lVar6 = lVar6 + -8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return false;
}

// IsSectionHidden @ 14281f580

bool __thiscall
FCustomizedToolMenuHierarchy::IsSectionHidden(FCustomizedToolMenuHierarchy *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FCustomizedToolMenuSection *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = (this->Hierarchy).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Hierarchy).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar7 < (this->Hierarchy).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar5 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                 ::Find((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                         *)(*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar6) + 0x58),
                        param_1);
        if (pFVar5 != (FCustomizedToolMenuSection *)0x0) {
          if (pFVar5->Visibility == Hidden) {
            return true;
          }
          if (pFVar5->Visibility == Visible) {
            return false;
          }
        }
      }
      lVar6 = lVar6 + -8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return false;
}

// IsSuppressExtenders @ 14281f800

bool __thiscall
FCustomizedToolMenuHierarchy::IsSuppressExtenders(FCustomizedToolMenuHierarchy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->Hierarchy).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Hierarchy).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->Hierarchy).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)(*(longlong *)((this->Hierarchy).AllocatorInstance.Data + lVar6) + 0xb0) != 0) {
          return true;
        }
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return false;
}

