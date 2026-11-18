// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 13

// ~FXmlNode @ 14455cfa0

void __thiscall FXmlNode::~FXmlNode(FXmlNode *this)

{
  FScriptContainerElement *pFVar1;
  
  Delete(this);
  pFVar1 = (this->Content).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tag).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FXmlAttribute,int>
            ((FXmlAttribute *)(this->Attributes).AllocatorInstance.Data,(this->Attributes).ArrayNum)
  ;
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AppendChildNode @ 14455e7a0

void __thiscall
FXmlNode::AppendChildNode
          (FXmlNode *this,FString *param_1,FString *param_2,
          TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *local_18 [2];
  
  puVar6 = ::operator_new(0x48);
  local_18[0] = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    local_18[0] = puVar6;
  }
  ::FString::operator=((FString *)(local_18[0] + 4),param_1);
  ::FString::operator=((FString *)(local_18[0] + 6),param_2);
  TArray<FXmlAttribute,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> *)(local_18[0] + 2),param_3);
  puVar6 = local_18[0];
  iVar5 = (this->Children).ArrayNum;
  if (iVar5 != 0) {
    uVar8 = iVar5 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar5) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 **)
     (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) + 0x40) =
         puVar6;
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Children).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// Delete @ 14455f480

void __thiscall FXmlNode::Delete(FXmlNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  FXmlNode *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  uint local_20;
  int local_1c;
  
  local_28.Data = (this->Children).AllocatorInstance.Data;
  uVar9 = 0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20 = (this->Children).ArrayNum;
  local_1c = (this->Children).ArrayMax;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  uVar11 = uVar9;
  if (local_20 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (int)local_20) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(ForAnyElementType **)(local_28.Data + uVar11);
      if ((&local_28 == pFVar3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int *)&pFVar3[1].Data;
      if (iVar2 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar2,&local_28,(int *)&local_20,&local_1c);
        memmove(local_28.Data + (longlong)iVar7 * 8,pFVar3->Data,(longlong)iVar2 << 3);
        *(undefined4 *)&pFVar3[1].Data = 0;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while (uVar8 + 1 != local_20);
  }
  uVar6 = local_20;
  pFVar1 = local_28.Data + (longlong)(int)local_20 * 8;
  FVar10.Data = local_28.Data;
  while( true ) {
    if (local_20 != uVar6) {
      `TCheckedPointerIterator<FXmlNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    this_00 = *(FXmlNode **)FVar10.Data;
    if (this_00 != (FXmlNode *)0x0) {
      ~FXmlNode(this_00);
      ::operator_delete(this_00,0x48);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// FindChildNode @ 14455f690

FXmlNode * __thiscall FXmlNode::FindChildNode(FXmlNode *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FXmlNode *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar1 = (this->Children).ArrayNum;
  uVar10 = 0;
  uVar11 = uVar10;
  if (0 < iVar1) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (this->Children).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FXmlNode *)(*pcVar4)();
        return pFVar8;
      }
      if (*(longlong *)((this->Children).AllocatorInstance.Data + uVar11 * 8) != 0) {
        uVar6 = 0;
        if ((int)uVar9 < (this->Children).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FXmlNode *)(*pcVar4)();
          return pFVar8;
        }
        iVar7 = (param_1->Data).ArrayNum;
        lVar3 = *(longlong *)((this->Children).AllocatorInstance.Data + uVar11 * 8);
        iVar2 = *(int *)(lVar3 + 0x28);
        if (iVar2 == iVar7) {
          if (iVar2 < 2) goto LAB_14455f7dd;
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x20),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar5 = iVar7 == 0;
        }
        else {
          bVar5 = iVar2 + iVar7 == 1;
        }
        if (bVar5) {
LAB_14455f7dd:
          uVar6 = 0;
          if ((int)uVar9 < (this->Children).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FXmlNode *)(*pcVar4)();
            return pFVar8;
          }
          return *(FXmlNode **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar1);
  }
  return (FXmlNode *)0x0;
}

// FindChildNode @ 14455f6a0

FXmlNode * __thiscall FXmlNode::FindChildNode(FXmlNode *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FXmlNode *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar1 = (this->Children).ArrayNum;
  uVar10 = 0;
  uVar11 = uVar10;
  if (0 < iVar1) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (this->Children).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FXmlNode *)(*pcVar4)();
        return pFVar8;
      }
      if (*(longlong *)((this->Children).AllocatorInstance.Data + uVar11 * 8) != 0) {
        uVar6 = 0;
        if ((int)uVar9 < (this->Children).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FXmlNode *)(*pcVar4)();
          return pFVar8;
        }
        iVar7 = (param_1->Data).ArrayNum;
        lVar3 = *(longlong *)((this->Children).AllocatorInstance.Data + uVar11 * 8);
        iVar2 = *(int *)(lVar3 + 0x28);
        if (iVar2 == iVar7) {
          if (iVar2 < 2) goto LAB_14455f7dd;
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x20),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar5 = iVar7 == 0;
        }
        else {
          bVar5 = iVar2 + iVar7 == 1;
        }
        if (bVar5) {
LAB_14455f7dd:
          uVar6 = 0;
          if ((int)uVar9 < (this->Children).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FXmlNode *)(*pcVar4)();
            return pFVar8;
          }
          return *(FXmlNode **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar1);
  }
  return (FXmlNode *)0x0;
}

// GetAttribute @ 14455f890

FString * __thiscall
FXmlNode::GetAttribute(FXmlNode *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = 0;
  while( true ) {
    if (((int)uVar7 < 0) || ((this->Attributes).ArrayNum <= (int)uVar7)) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    if (((int)uVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    pFVar2 = (this->Attributes).AllocatorInstance.Data;
    iVar5 = (param_1->Data).ArrayNum;
    lVar9 = (longlong)(int)uVar7 * 0x20;
    iVar1 = *(int *)(pFVar2 + lVar9 + 8);
    if (iVar1 == iVar5) {
      if (iVar1 < 2) break;
      iVar5 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(pFVar2 + lVar9),
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar4 = iVar5 == 0;
    }
    else {
      bVar4 = iVar1 + iVar5 == 1;
    }
    if (bVar4) break;
    uVar7 = uVar7 + 1;
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->Attributes).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)((this->Attributes).AllocatorInstance.Data + lVar9 + 0x10));
  return __return_storage_ptr__;
}

// GetChildrenNodes @ 14455f9d0

TArray<FXmlNode_*,TSizedDefaultAllocator<32>_> * __thiscall
FXmlNode::GetChildrenNodes(FXmlNode *this)

{
  return &this->Children;
}

// GetContent @ 14455f9e0

FString * __thiscall FXmlNode::GetContent(FXmlNode *this)

{
  return &this->Content;
}

// GetFirstChildNode @ 14455f9f0

FXmlNode * __thiscall FXmlNode::GetFirstChildNode(FXmlNode *this)

{
  if (0 < (this->Children).ArrayNum) {
    return *(FXmlNode **)(this->Children).AllocatorInstance.Data;
  }
  return (FXmlNode *)0x0;
}

// GetNextNode @ 14455fa40

FXmlNode * __thiscall FXmlNode::GetNextNode(FXmlNode *this)

{
  return this->NextNode;
}

// GetTag @ 14455fa80

FString * __thiscall FXmlNode::GetTag(FXmlNode *this)

{
  return &this->Tag;
}

// SetAttributes @ 144562630

void __thiscall
FXmlNode::SetAttributes(FXmlNode *this,TArray<FXmlAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FXmlAttribute,TSizedDefaultAllocator<32>_>::operator=(&this->Attributes,param_1);
  return;
}

// SetContent @ 144562640

void __thiscall FXmlNode::SetContent(FXmlNode *this,FString *param_1)

{
  ::FString::operator=(&this->Content,param_1);
  return;
}

