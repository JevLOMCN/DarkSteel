// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FArchiveCallstacks @ 141ed1710

FArchiveCallstacks * __thiscall
FArchiveCallstacks::FArchiveCallstacks(FArchiveCallstacks *this,UObject *param_1)

{
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 local_18 [2];
  
  this->Asset = param_1;
  (this->CallstackAtOffsetMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->StackTrace;
  (this->CallstackAtOffsetMap).ArrayNum = 0;
  (this->CallstackAtOffsetMap).ArrayMax = 0;
  *(undefined8 *)&this->UniqueCallstacks = 0;
  *(undefined8 *)&(this->UniqueCallstacks).field_0x8 = 0;
  *(undefined8 *)&(this->UniqueCallstacks).field_0x20 = 0;
  *(undefined4 *)&(this->UniqueCallstacks).field_0x28 = 0;
  *(undefined4 *)&(this->UniqueCallstacks).field_0x2c = 0x80;
  *(undefined4 *)&(this->UniqueCallstacks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UniqueCallstacks).field_0x34 = 0;
  *(undefined8 *)&(this->UniqueCallstacks).field_0x40 = 0;
  *(undefined4 *)&(this->UniqueCallstacks).field_0x48 = 0;
  this->bCallstacksDirty = true;
  this->StackTraceSize = 0xffff;
  this->LastSerializeCallstack = (char *)0x0;
  this->TotalSize = 0;
  pTVar1->Ptr = (char *)0x0;
  pcVar2 = operator_new__(0xffff);
  pcVar3 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    memset(pcVar2,0,0xffff);
    pcVar3 = pcVar2;
  }
  if (pTVar1 != (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)local_18) {
    pcVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pcVar3;
    operator_delete__(pcVar2);
    pcVar3 = (char *)0x0;
  }
  operator_delete__(pcVar3);
  *pTVar1->Ptr = '\0';
  return this;
}

// Add @ 141ed9da0

void __thiscall
FArchiveCallstacks::Add
          (FArchiveCallstacks *this,long64 param_1,long64 param_2,UObject *param_3,
          FProperty *param_4,TArrayView<FName_const_,int> *param_5,bool param_6,bool param_7,
          int param_8)

{
  TArray<FArchiveCallstacks::FCallstackAtOffset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint local_58 [2];
  long64 local_50;
  uint uStack_48;
  undefined4 uStack_44;
  long64 local_40;
  uint uStack_38;
  undefined4 uStack_34;
  
  if (GIgnoreDiffManager.DisabledCount != 0) {
    return;
  }
  lVar9 = param_2 + param_1;
  if (param_2 + param_1 < this->TotalSize) {
    lVar9 = this->TotalSize;
  }
  this->TotalSize = lVar9;
  if (((param_6) && (param_7)) && (GIgnoreDiffManager.IgnoreCount == 0)) {
    bVar5 = true;
    *(this->StackTrace).Ptr = '\0';
    FWindowsPlatformStackWalk::StackWalkAndDump
              ((this->StackTrace).Ptr,this->StackTraceSize,param_8,(void *)0x0);
    this->bCallstacksDirty = true;
  }
  else {
    bVar5 = false;
  }
  if ((this->LastSerializeCallstack != (char *)0x0) &&
     ((this->bCallstacksDirty == false ||
      (iVar6 = strcmp(this->LastSerializeCallstack,(this->StackTrace).Ptr), iVar6 == 0)))) {
    this->bCallstacksDirty = false;
    return;
  }
  iVar6 = (this->CallstackAtOffsetMap).ArrayNum;
  pTVar1 = &this->CallstackAtOffsetMap;
  local_58[0] = 0;
  if (iVar6 != 0) {
    uVar7 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar7 = ~(iVar6 - 1U) >> 0x1f;
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
    if (param_1 <=
        *(longlong *)
         ((pTVar1->AllocatorInstance).Data +
         (longlong)(this->CallstackAtOffsetMap).ArrayNum * 0x10 + -0x10)) {
      uVar7 = GetCallstackIndexAtOffset(this,param_1,0);
      if ((uVar7 == 0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CallstackToUpdateIndex != -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                             ,0x194,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar7 < (this->CallstackAtOffsetMap).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
      pcVar8 = AddUniqueCallstack(this,param_6,param_3,param_4,local_58);
      this->LastSerializeCallstack = pcVar8;
      lVar9 = *(longlong *)pFVar11;
      if (lVar9 == param_1) {
        *(uint *)(pFVar11 + 8) = local_58[0];
      }
      else {
        if ((param_1 <= lVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CallstackToUpdate.Offset < CurrentOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                               ,0x19e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        uStack_48 = local_58[0];
        uStack_44 = CONCAT31(uStack_44._1_3_,GIgnoreDiffManager.IgnoreCount != 0);
        local_50 = param_1;
        if (((pFVar11 <= (FScriptContainerElement *)&local_50) &&
            ((FScriptContainerElement *)&local_50 <
             pFVar11 + (longlong)(this->CallstackAtOffsetMap).ArrayMax * 0x10)) &&
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
        iVar6 = (this->CallstackAtOffsetMap).ArrayNum;
        piVar2 = &(this->CallstackAtOffsetMap).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar2);
        }
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        (this->CallstackAtOffsetMap).ArrayNum = iVar6 + 1;
        lVar9 = ((longlong)(int)uVar7 + 1) * 0x10;
        pFVar11 = pFVar11 + lVar9;
        memmove(pFVar11 + 0x10,pFVar11,(longlong)(int)((iVar6 - uVar7) + -1) << 4);
        pFVar11 = (pTVar1->AllocatorInstance).Data + lVar9;
        *(long64 *)pFVar11 = local_50;
        *(ulonglong *)(pFVar11 + 8) = CONCAT44(uStack_44,uStack_48);
      }
      goto LAB_141eda1a9;
    }
  }
  pcVar8 = AddUniqueCallstack(this,param_6,param_3,param_4,local_58);
  this->LastSerializeCallstack = pcVar8;
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  uStack_38 = local_58[0];
  uStack_34 = CONCAT31(uStack_34._1_3_,GIgnoreDiffManager.IgnoreCount != 0);
  local_40 = param_1;
  if (((pFVar11 <= (FScriptContainerElement *)&local_40) &&
      ((FScriptContainerElement *)&local_40 <
       pFVar11 + (longlong)(this->CallstackAtOffsetMap).ArrayMax * 0x10)) &&
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
  iVar6 = (this->CallstackAtOffsetMap).ArrayNum;
  piVar2 = &(this->CallstackAtOffsetMap).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
    (this->CallstackAtOffsetMap).ArrayNum = iVar6;
  }
  (this->CallstackAtOffsetMap).ArrayNum = iVar6 + 1;
  pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(long64 *)pFVar11 = local_40;
  *(ulonglong *)(pFVar11 + 8) = CONCAT44(uStack_34,uStack_38);
LAB_141eda1a9:
  if (((local_58[0] == 0) && (bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CallstackCRC != 0 || !bShouldCollectCallstack",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                         ,0x1a2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// AddUniqueCallstack @ 141edc100

char * __thiscall
FArchiveCallstacks::AddUniqueCallstack
          (FArchiveCallstacks *this,bool param_1,UObject *param_2,FProperty *param_3,uint *param_4)

{
  TMap<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
  *this_00;
  char cVar1;
  longlong lVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  FString *pFVar6;
  uint *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  ulong64 _Size;
  int local_res10;
  undefined1 local_68 [16];
  char *local_58;
  FString local_50;
  FProperty *local_40;
  FString local_38;
  
  if (!param_1) {
    *param_4 = 0;
    return (char *)0x0;
  }
  uVar11 = 0xffffffff;
  uVar10 = 0xffffffff;
  pcVar9 = (this->StackTrace).Ptr;
  cVar1 = *pcVar9;
  while (cVar1 != '\0') {
    pcVar9 = pcVar9 + 1;
    uVar11 = (uint)(int)cVar1 ^ uVar11;
    uVar10 = FCrc::CRCTablesSB8[1][uVar11 >> 0x10 & 0xff] ^
             FCrc::CRCTablesSB8[2][uVar11 >> 8 & 0xff] ^ FCrc::CRCTablesSB8[0][uVar11 >> 0x18] ^
             FCrc::CRCTablesSB8[3][uVar11 & 0xff];
    uVar11 = (ulonglong)uVar10;
    cVar1 = *pcVar9;
  }
  this_00 = &this->UniqueCallstacks;
  uVar10 = ~uVar10;
  *param_4 = uVar10;
  if (*(int *)&(this->UniqueCallstacks).field_0x8 != *(int *)&(this->UniqueCallstacks).field_0x34) {
    puVar8 = *(undefined1 **)&(this->UniqueCallstacks).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->UniqueCallstacks).field_0x38;
    }
    uVar3 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->UniqueCallstacks).field_0x48 - 1U & uVar10) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar3 * 0x40 + *(longlong *)&this_00->field_0x0);
        if (*puVar7 == uVar10) {
          puVar5 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            return *(char **)puVar5;
          }
          break;
        }
        uVar3 = puVar7[0xe];
      } while (uVar3 != 0xffffffff);
    }
  }
  sVar4 = strlen((this->StackTrace).Ptr);
  _Size = (ulong64)((int)sVar4 + 1);
  pcVar9 = operator_new__(_Size);
  if (pcVar9 == (char *)0x0) {
    pcVar9 = (char *)0x0;
  }
  else {
    memset(pcVar9,0,_Size);
  }
  strcpy(pcVar9,(this->StackTrace).Ptr);
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_58 = pcVar9;
  local_40 = param_3;
  if (param_2 != (UObject *)0x0) {
    pFVar6 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)param_2,(FString *)local_68,(UObject *)0x0,None);
    if (&local_50 != pFVar6) {
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      local_50.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_50.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (param_3 != (FProperty *)0x0) {
    pFVar6 = FField::GetFullName((FField *)param_3,(FString *)local_68);
    if (&local_38 != pFVar6) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  local_68._8_8_ = &local_58;
  local_68._0_8_ = param_4;
  TSet<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FArchiveCallstacks::FCallstackData_&&>_>
            ((TSet<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<unsigned_int_const_&,FArchiveCallstacks::FCallstackData_&&> *)
             &local_res10,(bool *)local_68);
  lVar2 = *(longlong *)&this_00->field_0x0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  operator_delete__(local_58);
  pcVar9 = *(char **)((longlong)local_res10 * 0x40 + lVar2 + 8);
  operator_delete__((void *)0x0);
  return pcVar9;
}

// Append @ 141edcb60

void __thiscall
FArchiveCallstacks::Append(FArchiveCallstacks *this,FArchiveCallstacks *param_1,long64 param_2)

{
  undefined1 *puVar1;
  TMap<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FCallstackAtOffset *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  long64 lVar8;
  TMap<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 *puVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  FCallstackAtOffset *pFVar20;
  uint uVar21;
  int *piVar22;
  uint *puVar23;
  undefined1 *puVar24;
  FCallstackAtOffset *pFVar25;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  undefined1 local_128;
  undefined1 local_127 [3];
  uint local_124;
  uint local_120 [2];
  int local_118;
  TPairInitializer<unsigned_int_const_&,FArchiveCallstacks::FCallstackData_&&> local_114;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TMap<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  uint *local_b0;
  FCallstackData *local_a8;
  FCallstackData local_a0;
  undefined4 local_54;
  
  local_124 = (param_1->CallstackAtOffsetMap).ArrayNum;
  uVar12 = (ulonglong)(int)local_124;
  pFVar20 = (FCallstackAtOffset *)(param_1->CallstackAtOffsetMap).AllocatorInstance.Data;
  pFVar25 = pFVar20 + uVar12;
  while( true ) {
    if ((param_1->CallstackAtOffsetMap).ArrayNum != (int)uVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FArchiveCallstacks::FCallstackAtOffset_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    piVar22 = &(this->CallstackAtOffsetMap).ArrayNum;
    piVar18 = &(this->CallstackAtOffsetMap).ArrayMax;
    pFVar5 = (FCallstackAtOffset *)(this->CallstackAtOffsetMap).AllocatorInstance.Data;
    if (pFVar20 == pFVar25) break;
    if (((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + *piVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = *piVar22;
    if (iVar11 == *piVar18) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->CallstackAtOffsetMap).AllocatorInstance,piVar18);
    }
    *piVar22 = iVar11 + 1;
    lVar8 = *(long64 *)&pFVar20->Callstack;
    pFVar6 = (this->CallstackAtOffsetMap).AllocatorInstance.Data;
    pFVar3 = pFVar6 + (longlong)iVar11 * 0x10;
    *(long64 *)pFVar3 = pFVar20->Offset;
    *(long64 *)(pFVar3 + 8) = lVar8;
    pFVar6 = pFVar6 + (longlong)iVar11 * 0x10;
    *(longlong *)pFVar6 = *(longlong *)pFVar6 + param_2;
    uVar12 = (ulonglong)local_124;
    pFVar20 = pFVar20 + 1;
  }
  local_res10 = SUB81(param_1,0);
  AlgoImpl::
  IntroSortInternal<FArchiveCallstacks::FCallstackAtOffset,int,FIdentityFunctor,TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,_FArchiveCallstacks::Append_::__l2::<lambda_1>_>_>
            (pFVar5,*piVar22,local_res10,(<lambda_1> *)&local_128);
  iVar11 = *(int *)&(param_1->UniqueCallstacks).field_0x28;
  puVar1 = &(param_1->UniqueCallstacks).field_0x10;
  local_114.Value._4_4_ = 0;
  uStack_104 = 1;
  pTVar2 = &param_1->UniqueCallstacks;
  local_f0 = 0;
  iStack_f4 = 0;
  if (iVar11 != 0) {
    puVar23 = *(uint **)&(param_1->UniqueCallstacks).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar21 = *puVar23;
    local_f0 = 0;
    while (uVar21 == 0) {
      lVar14 = (longlong)local_114.Value._4_4_;
      local_f0 = local_f0 + 0x20;
      local_114.Value._4_4_ = local_114.Value._4_4_ + 1;
      iStack_f4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < local_114.Value._4_4_)
      goto LAB_141edcd2e;
      uVar21 = puVar23[lVar14 + 1];
    }
    uStack_104 = -uVar21 & uVar21;
    uVar12 = (ulonglong)uStack_104 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_118 = (int)lVar14;
    iStack_f4 = local_f0 + -1 + local_118;
    if (iVar11 < iStack_f4) {
      iStack_f4 = iVar11;
    }
  }
LAB_141edcd2e:
  uVar21 = *(uint *)&(param_1->UniqueCallstacks).field_0x28;
  uStack_ec = local_54;
  iStack_e8 = *(int *)&(param_1->UniqueCallstacks).field_0x8 -
              *(int *)&(param_1->UniqueCallstacks).field_0x34;
  uVar19 = uVar21 & 0xffffffe0;
  uStack_f8 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_104,local_114.Value._4_4_);
  TStack_d8.CurrentBitIndex = iStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_d8._28_4_ = local_54;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  local_114._4_8_ = pTVar2;
  local_100 = puVar1;
  local_e0 = pTVar2;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(param_1->UniqueCallstacks).field_0x28;
  if (uVar21 != uVar4) {
    puVar24 = *(undefined1 **)&(param_1->UniqueCallstacks).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar14 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_141edce29;
      uVar21 = *(uint *)(puVar24 + lVar14 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar21 = (int)lVar14 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_141edce29:
  do {
    pTVar9 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_127);
    }
    if (((TStack_d8.CurrentBitIndex == uVar21) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      lVar14 = param_1->TotalSize;
      if (param_1->TotalSize < this->TotalSize) {
        lVar14 = this->TotalSize;
      }
      this->TotalSize = lVar14;
      return;
    }
    puVar23 = (uint *)((longlong)TStack_d8.CurrentBitIndex * 0x40 + *(longlong *)pTVar9);
    if (*(int *)&(this->UniqueCallstacks).field_0x8 != *(int *)&(this->UniqueCallstacks).field_0x34)
    {
      puVar24 = *(undefined1 **)&(this->UniqueCallstacks).field_0x40;
      puVar16 = &(this->UniqueCallstacks).field_0x38;
      if (puVar24 != (undefined1 *)0x0) {
        puVar16 = puVar24;
      }
      uVar19 = *(uint *)(puVar16 +
                        (ulonglong)(*(int *)&(this->UniqueCallstacks).field_0x48 - 1U & *puVar23) *
                        4);
      if (uVar19 != 0xffffffff) {
        do {
          puVar13 = (uint *)((longlong)(int)uVar19 * 0x40 + *(longlong *)&this->UniqueCallstacks);
          if (*puVar13 == *puVar23) {
            puVar15 = puVar13 + 2;
            if (puVar13 == (uint *)0x0) {
              puVar15 = (uint *)0x0;
            }
            if (puVar15 != (uint *)0x0) {
              if (this->LastSerializeCallstack == *(char **)puVar15) {
                this->LastSerializeCallstack = (char *)0x0;
              }
              local_120[0] = *puVar23;
              if (*(int *)&(this->UniqueCallstacks).field_0x8 !=
                  *(int *)&(this->UniqueCallstacks).field_0x34) {
                TSet<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>,FDefaultSetAllocator>
                            *)&this->UniqueCallstacks,local_120[0],local_120);
              }
            }
            break;
          }
          uVar19 = puVar13[0xe];
        } while (uVar19 != 0xffffffff);
      }
    }
    local_b0 = puVar23;
    local_a8 = FCallstackData::Clone((FCallstackData *)(puVar23 + 2),&local_a0);
    TSet<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FArchiveCallstacks::FCallstackData_&&>_>
              ((TSet<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>,FDefaultSetAllocator>
                *)&this->UniqueCallstacks,&local_114,(bool *)&local_b0);
    if (local_a0.SerializedPropertyName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.SerializedPropertyName.Data.AllocatorInstance.Data);
    }
    if (local_a0.SerializedObjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_a0.SerializedObjectName.Data.AllocatorInstance.Data);
    }
    operator_delete__(local_a0.Callstack.Ptr);
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  } while( true );
}

// GetAssetClass @ 141ef9070

FName __thiscall FArchiveCallstacks::GetAssetClass(FArchiveCallstacks *this)

{
  FName in_RDX;
  
  if (this->Asset != (UObject *)0x0) {
    *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->Asset->field_0x10 + 0x18);
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetCallstack @ 141ef92a0

FCallstackAtOffset * __thiscall
FArchiveCallstacks::GetCallstack(FArchiveCallstacks *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCallstackAtOffset *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->CallstackAtOffsetMap).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCallstackAtOffset *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FCallstackAtOffset *)
         ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetCallstackIndexAtOffset @ 141ef9320

int __thiscall
FArchiveCallstacks::GetCallstackIndexAtOffset(FArchiveCallstacks *this,long64 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if ((((param_1 < 0) || (this->TotalSize < param_1)) || (param_2 < 0)) ||
     (iVar7 = (this->CallstackAtOffsetMap).ArrayNum, iVar7 <= param_2)) {
    return -1;
  }
  iVar7 = iVar7 + -1;
  uVar6 = 0xffffffff;
  if (param_2 <= iVar7) {
    do {
      uVar3 = (iVar7 + param_2) / 2;
      uVar4 = 0;
      if ((int)uVar3 < (this->CallstackAtOffsetMap).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar7 = (*pcVar1)();
        return iVar7;
      }
      if (*(longlong *)
           ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10) <
          param_1) {
        param_2 = uVar3 + 1;
      }
      else {
        uVar4 = 0;
        if ((int)uVar3 < (this->CallstackAtOffsetMap).ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar7 = (*pcVar1)();
          return iVar7;
        }
        if (*(longlong *)
             ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10) <=
            param_1) {
          uVar6 = uVar3;
          if (uVar3 != 0xffffffff) {
            return uVar3;
          }
          break;
        }
        iVar7 = uVar3 - 1;
      }
    } while (param_2 <= iVar7);
  }
  uVar4 = (this->CallstackAtOffsetMap).ArrayNum - 1;
  if (param_2 < (int)uVar4) {
    uVar4 = param_2;
  }
  if (-1 < (int)uVar4) {
    lVar5 = (longlong)(int)uVar4 << 4;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->CallstackAtOffsetMap).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar7 = (*pcVar1)();
        return iVar7;
      }
      if (*(longlong *)((this->CallstackAtOffsetMap).AllocatorInstance.Data + lVar5) < param_1)
      goto LAB_141ef951c;
      lVar5 = lVar5 + -0x10;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  uVar4 = uVar6;
  if ((uVar6 == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OffsetForCallstackIndex != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                         ,0x1d5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar7 = (*pcVar1)();
    return iVar7;
  }
LAB_141ef951c:
  uVar6 = 0;
  if ((int)uVar4 < (this->CallstackAtOffsetMap).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar7 = (*pcVar1)();
    return iVar7;
  }
  if ((param_1 <=
       *(longlong *)
        ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CallstackAtOffsetMap[OffsetForCallstackIndex].Offset < Offset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                         ,0x1d6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar7 = (*pcVar1)();
    return iVar7;
  }
  iVar7 = (this->CallstackAtOffsetMap).ArrayNum;
  if (uVar4 != iVar7 - 1U) {
    uVar6 = uVar4 + 1;
    uVar3 = 0;
    if ((int)uVar6 < iVar7) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar7 = (*pcVar1)();
      return iVar7;
    }
    if ((*(longlong *)
          ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10) <=
         param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OffsetForCallstackIndex == (CallstackAtOffsetMap.Num() - 1) || CallstackAtOffsetMap[OffsetForCallstackIndex + 1].Offset > Offset"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                           ,0x1d7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar7 = (*pcVar1)();
      return iVar7;
    }
  }
  return uVar4;
}

// GetSerializedDataSizeForOffsetIndex @ 141efa590

long64 __thiscall
FArchiveCallstacks::GetSerializedDataSizeForOffsetIndex(FArchiveCallstacks *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  uint uVar7;
  
  iVar1 = (this->CallstackAtOffsetMap).ArrayNum;
  if (iVar1 + -1 <= param_1) {
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        lVar6 = (*pcVar3)();
        return lVar6;
      }
    }
    return this->TotalSize -
           *(longlong *)
            ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  uVar5 = 0;
  if (param_1 < iVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
  }
  pFVar2 = (this->CallstackAtOffsetMap).AllocatorInstance.Data;
  uVar7 = param_1 + 1;
  uVar5 = 0;
  if ((int)uVar7 < (this->CallstackAtOffsetMap).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
  }
  return *(longlong *)
          ((this->CallstackAtOffsetMap).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10) -
         *(longlong *)(pFVar2 + (longlong)param_1 * 0x10);
}

