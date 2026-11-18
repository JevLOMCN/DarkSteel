// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// ~ICustomAttributeHandler @ 142295e90

void __thiscall
Verse::ICustomAttributeHandler::~ICustomAttributeHandler(ICustomAttributeHandler *this)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  FName FVar3;
  code *pcVar4;
  byte bVar5;
  TMap<FName,Verse::ICustomAttributeHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Verse::ICustomAttributeHandler_*,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FName local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int iStack_b4;
  TMap<FName,Verse::ICustomAttributeHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Verse::ICustomAttributeHandler_*,0>_>
  *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FName,Verse::ICustomAttributeHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Verse::ICustomAttributeHandler_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  *this = (ICustomAttributeHandler)&___7ICustomAttributeHandler_Verse__6B_;
  local_c0.Data = (FScriptContainerElement *)0x0;
  uStack_a4 = 1;
  local_b8 = 0;
  iStack_b4 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  uVar13 = AttributeHandlers._40_4_;
  uStack_94 = uStack_a8;
  if (uVar13 != 0) {
    puVar15 = (uint *)&AttributeHandlers.field_0x10;
    if (AttributeHandlers._32_8_ != 0) {
      puVar15 = (uint *)AttributeHandlers._32_8_;
    }
    uVar12 = *puVar15;
    local_90 = 0;
    uStack_a8 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)(int)uStack_a8;
      local_90 = local_90 + 0x20;
      uStack_a8 = uStack_a8 + 1;
      uStack_94 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a8)
      goto LAB_142295f4d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    uVar16 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uStack_94 = (local_90 - 1) + local_res18;
    if ((int)uVar13 < (int)uStack_94) {
      uStack_94 = uVar13;
    }
  }
LAB_142295f4d:
  bVar5 = AttributeHandlers._40_1_;
  iStack_88 = AttributeHandlers._8_4_ - AttributeHandlers._52_4_;
  uVar12 = uVar13 & 0xffffffe0;
  uVar16 = AttributeHandlers._40_8_ & 0xffffffff;
  local_b0 = &AttributeHandlers;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,uStack_a8);
  local_a0 = 0x154ba34e0;
  TStack_78.CurrentBitIndex = uStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  local_80 = &AttributeHandlers;
  iVar10 = (int)uVar13 >> 5;
  TStack_78._28_4_ = uStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&AttributeHandlers.field_0x10;
  uStack_8c = uStack_94;
  if (((int)uVar13 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = AttributeHandlers._40_4_;
  if (uVar13 != uVar14) {
    uVar16 = AttributeHandlers._40_8_ & 0xffffffff;
    lVar8 = 0x154ba34e0;
    if (AttributeHandlers._32_8_ != 0) {
      lVar8 = AttributeHandlers._32_8_;
    }
    uVar13 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_142296060;
      uVar13 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar16 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar12 = local_res20 + -1 + uVar12;
    if ((int)uVar14 < (int)uVar12) {
      uVar12 = uVar14;
    }
    uVar16 = (ulonglong)uVar12;
  }
LAB_142296060:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,Verse::ICustomAttributeHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar10 = local_b8;
    if (((TStack_78.CurrentBitIndex == (int)uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)&AttributeHandlers.field_0x10))
       && (pTVar6 == &AttributeHandlers)) break;
    lVar8 = *(longlong *)pTVar6;
    pFVar1 = (FScriptContainerElement *)(lVar8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    if (*(ICustomAttributeHandler **)(lVar8 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18) ==
        this) {
      if (((local_c0.Data <= pFVar1) && (pFVar1 < local_c0.Data + (longlong)iStack_b4 * 8)) &&
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
      if (local_b8 == iStack_b4) {
        local_b8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_c0,&iStack_b4);
      }
      lVar8 = (longlong)local_b8;
      local_b8 = local_b8 + 1;
      *(undefined8 *)(local_c0.Data + lVar8 * 8) = *(undefined8 *)pFVar1;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  pFVar2 = (FName *)(local_c0.Data + (longlong)local_b8 * 8);
  FVar11.Data = local_c0.Data;
  while( true ) {
    if (local_b8 != iVar10) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FName *)FVar11.Data == pFVar2) break;
    FVar3 = *(FName *)FVar11.Data;
    local_c8 = FVar3;
    if (AttributeHandlers._8_4_ != AttributeHandlers._52_4_) {
      uVar13 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,Verse::ICustomAttributeHandler_*>,TDefaultMapHashableKeyFuncs<FName,Verse::ICustomAttributeHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,Verse::ICustomAttributeHandler_*>,TDefaultMapHashableKeyFuncs<FName,Verse::ICustomAttributeHandler_*,0>,FDefaultSetAllocator>
                           *)&AttributeHandlers,FVar3.Number + uVar13,&local_c8);
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

// FindHandlerForAttribute @ 14229ac60

ICustomAttributeHandler * __cdecl
Verse::ICustomAttributeHandler::FindHandlerForAttribute(FName param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (AttributeHandlers._8_4_ != AttributeHandlers._52_4_) {
    lVar4 = 0x154ba3508;
    if (AttributeHandlers._64_8_ != 0) {
      lVar4 = AttributeHandlers._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(AttributeHandlers._72_4_ - 1 & param_1.Number + uVar2) * 4)
    ;
    while (iVar1 != -1) {
      lVar4 = AttributeHandlers._0_8_ + (longlong)iVar1 * 0x18;
      if (*(FName *)(AttributeHandlers._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        puVar3 = (undefined8 *)(lVar4 + 8);
        if (lVar4 == 0) {
          puVar3 = (undefined8 *)0x0;
        }
        if (puVar3 == (undefined8 *)0x0) {
          return (ICustomAttributeHandler *)0x0;
        }
        return (ICustomAttributeHandler *)*puVar3;
      }
      iVar1 = *(int *)(lVar4 + 0x10);
    }
  }
  return (ICustomAttributeHandler *)0x0;
}

// ProcessAttribute @ 1422a4010

/* WARNING: Removing unreachable block (ram,0x0001422a40f3) */

bool __thiscall
Verse::ICustomAttributeHandler::ProcessAttribute
          (ICustomAttributeHandler *this,CAttributeValue *param_1,FProperty *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::FString(&local_18,L"ProcessAttribute is unimplemented");
  pFVar5 = (param_3->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_3->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == param_3->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar4 + 1;
  pFVar5 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return false;
}

// ProcessAttribute @ 1422a4110

/* WARNING: Removing unreachable block (ram,0x0001422a41f3) */

bool __thiscall
Verse::ICustomAttributeHandler::ProcessAttribute
          (ICustomAttributeHandler *this,CAttributeValue *param_1,UEnum *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::FString(&local_18,L"ProcessAttribute is unimplemented");
  pFVar5 = (param_3->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_3->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == param_3->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar4 + 1;
  pFVar5 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return false;
}

// ProcessAttribute @ 1422a4210

/* WARNING: Removing unreachable block (ram,0x0001422a42f3) */

bool __thiscall
Verse::ICustomAttributeHandler::ProcessAttribute
          (ICustomAttributeHandler *this,CAttributeValue *param_1,UFunction *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::FString(&local_18,L"ProcessAttribute is unimplemented");
  pFVar5 = (param_3->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_3->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == param_3->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar4 + 1;
  pFVar5 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return false;
}

// ProcessAttribute @ 1422a4310

/* WARNING: Removing unreachable block (ram,0x0001422a43f3) */

bool __thiscall
Verse::ICustomAttributeHandler::ProcessAttribute
          (ICustomAttributeHandler *this,CAttributeValue *param_1,UStruct *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::FString(&local_18,L"ProcessAttribute is unimplemented");
  pFVar5 = (param_3->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_3->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == param_3->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar4 + 1;
  pFVar5 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return false;
}

