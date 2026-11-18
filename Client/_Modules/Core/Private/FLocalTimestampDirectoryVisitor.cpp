// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FLocalTimestampDirectoryVisitor @ 1418bc070

FLocalTimestampDirectoryVisitor * __thiscall
FLocalTimestampDirectoryVisitor::FLocalTimestampDirectoryVisitor
          (FLocalTimestampDirectoryVisitor *this,IPlatformFile *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  void *pvVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FLocalTimestampDirectoryVisitor *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FString local_68;
  FString local_58;
  
  uVar13 = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&this->FileTimes = 0;
  pTVar1 = &this->DirectoriesToNotRecurse;
  *(undefined8 *)&(this->FileTimes).field_0x8 = 0;
  *(undefined8 *)&(this->FileTimes).field_0x20 = 0;
  pTVar2 = &this->DirectoriesToIgnore;
  this->_padding_ = (longlong)&___7FLocalTimestampDirectoryVisitor__6B_;
  *(undefined4 *)&(this->FileTimes).field_0x28 = 0;
  *(undefined4 *)&(this->FileTimes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileTimes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileTimes).field_0x34 = 0;
  *(undefined8 *)&(this->FileTimes).field_0x40 = 0;
  *(undefined4 *)&(this->FileTimes).field_0x48 = 0;
  this->bCacheDirectories = param_4;
  this->bMakeLowerCase = param_5;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DirectoriesToIgnore).ArrayNum = 0;
  (this->DirectoriesToIgnore).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DirectoriesToNotRecurse).ArrayNum = 0;
  (this->DirectoriesToNotRecurse).ArrayMax = 0;
  this->FileInterface = param_1;
  iVar8 = param_2->ArrayNum;
  uVar14 = uVar13;
  if (0 < iVar8) {
    do {
      uVar12 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar12 < iVar8) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLocalTimestampDirectoryVisitor *)(*pcVar4)();
        return pFVar9;
      }
      pFVar11 = (param_2->AllocatorInstance).Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = *(int *)(pFVar11 + uVar13 + 8);
      lVar10 = (longlong)local_68.Data.ArrayNum;
      pvVar3 = *(void **)(pFVar11 + uVar13);
      if (local_68.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                   local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,pvVar3,lVar10 * 2);
      }
      FPaths::MakeStandardFilename(&local_68);
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar11 + (longlong)(this->DirectoriesToIgnore).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLocalTimestampDirectoryVisitor *)(*pcVar4)();
        return pFVar9;
      }
      iVar8 = (this->DirectoriesToIgnore).ArrayNum;
      if (iVar8 == (this->DirectoriesToIgnore).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,&(this->DirectoriesToIgnore).ArrayMax);
      }
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      (this->DirectoriesToIgnore).ArrayNum = iVar8 + 1;
      *(undefined8 *)pFVar11 = 0;
      lVar10 = (longlong)local_68.Data.ArrayNum;
      *(int *)(pFVar11 + 8) = local_68.Data.ArrayNum;
      if (local_68.Data.ArrayNum == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_68.Data.ArrayNum,
                   (int *)(pFVar11 + 0xc));
        memcpy(*(void **)pFVar11,FVar5.Data,lVar10 * 2);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar13 = uVar13 + 0x10;
      iVar8 = param_2->ArrayNum;
      uVar14 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < iVar8);
  }
  uVar13 = 0;
  iVar8 = param_3->ArrayNum;
  uVar14 = uVar13;
  if (0 < iVar8) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar12 < iVar8) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLocalTimestampDirectoryVisitor *)(*pcVar4)();
        return pFVar9;
      }
      pFVar11 = (param_3->AllocatorInstance).Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = *(int *)(pFVar11 + uVar14 + 8);
      lVar10 = (longlong)local_58.Data.ArrayNum;
      pvVar3 = *(void **)(pFVar11 + uVar14);
      if (local_58.Data.ArrayNum == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                   local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,pvVar3,lVar10 * 2);
      }
      FPaths::MakeStandardFilename(&local_58);
      pFVar11 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar11 + (longlong)(this->DirectoriesToNotRecurse).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLocalTimestampDirectoryVisitor *)(*pcVar4)();
        return pFVar9;
      }
      iVar8 = (this->DirectoriesToNotRecurse).ArrayNum;
      if (iVar8 == (this->DirectoriesToNotRecurse).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,
                           &(this->DirectoriesToNotRecurse).ArrayMax);
      }
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      (this->DirectoriesToNotRecurse).ArrayNum = iVar8 + 1;
      *(undefined8 *)pFVar11 = 0;
      lVar10 = (longlong)local_58.Data.ArrayNum;
      *(int *)(pFVar11 + 8) = local_58.Data.ArrayNum;
      if (local_58.Data.ArrayNum == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_58.Data.ArrayNum,
                   (int *)(pFVar11 + 0xc));
        memcpy(*(void **)pFVar11,FVar5.Data,lVar10 * 2);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar8 = param_3->ArrayNum;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar12 + 1) < iVar8);
  }
  return this;
}

// ~FLocalTimestampDirectoryVisitor @ 1418bee30

void __thiscall
FLocalTimestampDirectoryVisitor::~FLocalTimestampDirectoryVisitor
          (FLocalTimestampDirectoryVisitor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FLocalTimestampDirectoryVisitor__6B_;
  DestructItems<FString,int>
            ((FString *)(this->DirectoriesToNotRecurse).AllocatorInstance.Data,
             (this->DirectoriesToNotRecurse).ArrayNum);
  pFVar1 = (this->DirectoriesToNotRecurse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DirectoriesToIgnore).AllocatorInstance.Data,
             (this->DirectoriesToIgnore).ArrayNum);
  pFVar1 = (this->DirectoriesToIgnore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FileTimes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileTimes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileTimes);
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  return;
}

// Visit @ 1418ffac0

bool __thiscall
FLocalTimestampDirectoryVisitor::Visit
          (FLocalTimestampDirectoryVisitor *this,wchar_t *param_1,bool param_2)

{
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte bVar13;
  wchar_t *pwVar14;
  uint uVar15;
  TSparseSetElement<TTuple<FString,FDateTime>_> *pTVar16;
  TSparseSetElement<TTuple<FString,FDateTime>_> *pTVar17;
  char cVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  wchar_t *pwVar21;
  uint uVar22;
  TSparseSetElement<TTuple<FString,FDateTime>_> *pTVar23;
  int local_res8 [2];
  wchar_t *local_res10;
  byte local_res18;
  int local_res20 [2];
  undefined1 local_90 [8];
  FString local_88;
  FSparseArrayAllocationInfo local_78;
  FString local_68;
  FSparseArrayAllocationInfo local_58;
  
  local_res10 = param_1;
  ::FString::FString(&local_88,param_1);
  FPaths::MakeStandardFilename(&local_88);
  if (this->bMakeLowerCase != false) {
    ::FString::ToLowerInline(&local_88);
  }
  if (!param_2) {
    this_00 = &this->FileTimes;
    puVar11 = (undefined8 *)
              (**(code **)((longlong)*this->FileInterface + 0xb0))
                        (this->FileInterface,local_90,param_1);
    iVar7 = *(int *)&(this->FileTimes).field_0x34;
    if (iVar7 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,(ForAnyElementType *)this_00,(int *)&(this->FileTimes).field_0x8,
                         (int *)&(this->FileTimes).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FileTimes).field_0x10,false);
    }
    else {
      iVar8 = *(int *)&(this->FileTimes).field_0x30;
      iVar7 = iVar7 + -1;
      iVar1 = *(int *)((longlong)iVar8 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
      *(int *)&(this->FileTimes).field_0x30 = iVar1;
      *(int *)&(this->FileTimes).field_0x34 = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,&local_78,iVar8);
    pTVar16 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)0x0;
    if (local_78.Pointer != (TSparseSetElement<TTuple<FString,FDateTime>_> *)0x0) {
      *(undefined8 *)local_78.Pointer = 0;
      *(FScriptContainerElement **)local_78.Pointer = local_88.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_78.Pointer + 8) = local_88.Data.ArrayNum;
      *(int *)((longlong)local_78.Pointer + 0xc) = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      *(undefined8 *)((longlong)local_78.Pointer + 0x10) = *puVar11;
      *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
      pTVar16 = local_78.Pointer;
    }
    local_res8[0] = local_78.Index;
    iVar7 = *(int *)&pTVar16->field_0x8 + -1;
    if (*(int *)&pTVar16->field_0x8 == 0) {
      pwVar21 = L"";
      iVar7 = 0;
    }
    else {
      pwVar21 = *(wchar_t **)pTVar16;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar21);
    bVar5 = TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                        *)this_00,uVar9,pTVar16,local_res8,(bool *)0x0);
    if (!bVar5) {
      TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                      *)this_00,uVar9,pTVar16,local_res8[0]);
    }
    goto LAB_141900003;
  }
  pTVar17 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)0x0;
  pwVar21 = L"";
  uVar19 = 1;
  uVar15 = 0;
  uVar9 = 0;
  pTVar16 = pTVar17;
  pTVar23 = pTVar17;
  if ((this->DirectoriesToIgnore).ArrayNum < 1) {
LAB_1418ffd2e:
    cVar18 = (char)uVar19;
    pTVar16 = pTVar17;
    pTVar23 = pTVar17;
    if (0 < (this->DirectoriesToNotRecurse).ArrayNum) {
      do {
        local_res18 = (byte)uVar19;
        cVar18 = '\0';
        if (local_res18 == 0) break;
        uVar22 = (uint)pTVar23;
        uVar10 = uVar15;
        if ((int)uVar22 < (this->DirectoriesToNotRecurse).ArrayNum) {
          uVar10 = ~uVar22 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (this->DirectoriesToNotRecurse).AllocatorInstance.Data;
        if (*(int *)(&pTVar16->field_0x8 + (longlong)pFVar2) == 0) {
          pwVar14 = L"";
          uVar10 = uVar9;
        }
        else {
          pwVar14 = *(wchar_t **)(&pTVar16->field_0x0 + (longlong)pFVar2);
          uVar10 = *(int *)(&pTVar16->field_0x8 + (longlong)pFVar2) - 1;
        }
        bVar5 = ::FString::StartsWith(&local_88,pwVar14,uVar10,IgnoreCase);
        if (bVar5) {
          uVar19 = uVar9;
          if ((int)uVar22 < (this->DirectoriesToNotRecurse).ArrayNum) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar19 = local_88.Data.ArrayNum - 1;
          if (local_88.Data.ArrayNum == 0) {
            uVar19 = 0;
          }
          uVar10 = *(int *)(&pTVar16->field_0x8 +
                           (longlong)(this->DirectoriesToNotRecurse).AllocatorInstance.Data) - 1;
          if (*(int *)(&pTVar16->field_0x8 +
                      (longlong)(this->DirectoriesToNotRecurse).AllocatorInstance.Data) == 0) {
            uVar10 = uVar9;
          }
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar20.Data = local_88.Data.AllocatorInstance.Data;
          }
          uVar12 = uVar19;
          if ((int)(uVar19 - uVar10) < (int)uVar19) {
            uVar12 = uVar19 - uVar10;
          }
          uVar10 = uVar9;
          if (0 < (int)uVar12) {
            uVar10 = uVar12;
          }
          ::FString::FString(&local_68,
                             (wchar_t *)
                             (FVar20.Data + ((longlong)(int)uVar19 - (longlong)(int)uVar10) * 2));
          uVar10 = local_68.Data.ArrayNum - 1;
          if (local_68.Data.ArrayNum == 0) {
            uVar10 = uVar9;
          }
          uVar19 = uVar9;
          if ((int)uVar10 < 2) {
            uVar19 = (uint)local_res18;
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        cVar18 = (char)uVar19;
        pTVar16 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)&pTVar16->field_0x10;
        pTVar23 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)(ulonglong)(uVar22 + 1);
      } while ((int)(uVar22 + 1) < (this->DirectoriesToNotRecurse).ArrayNum);
    }
  }
  else {
    do {
      if ((byte)uVar19 == 0) break;
      uVar22 = (uint)pTVar16;
      uVar10 = uVar15;
      if ((int)uVar22 < (this->DirectoriesToIgnore).ArrayNum) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->DirectoriesToIgnore).AllocatorInstance.Data;
      if (*(int *)(&pTVar23->field_0x8 + (longlong)pFVar2) == 0) {
        pwVar14 = L"";
        uVar10 = uVar15;
      }
      else {
        pwVar14 = *(wchar_t **)(&pTVar23->field_0x0 + (longlong)pFVar2);
        uVar10 = *(int *)(&pTVar23->field_0x8 + (longlong)pFVar2) - 1;
      }
      bVar5 = ::FString::StartsWith(&local_88,pwVar14,uVar10,IgnoreCase);
      bVar13 = 0;
      if (!bVar5) {
        bVar13 = (byte)uVar19;
      }
      uVar19 = (uint)bVar13;
      pTVar16 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)(ulonglong)(uVar22 + 1);
      pTVar23 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)&pTVar23->field_0x10;
    } while ((int)(uVar22 + 1) < (this->DirectoriesToIgnore).ArrayNum);
    cVar18 = (char)uVar19;
    if (cVar18 == '\x01') goto LAB_1418ffd2e;
  }
  if (this->bCacheDirectories != false) {
    iVar7 = *(int *)&(this->FileTimes).field_0x34;
    if (iVar7 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,(ForAnyElementType *)&this->FileTimes,
                         (int *)&(this->FileTimes).field_0x8,(int *)&(this->FileTimes).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FileTimes).field_0x10,false);
    }
    else {
      iVar8 = *(int *)&(this->FileTimes).field_0x30;
      lVar3 = *(longlong *)&this->FileTimes;
      iVar1 = *(int *)((longlong)iVar8 * 0x20 + 4 + lVar3);
      iVar7 = iVar7 + -1;
      *(int *)&(this->FileTimes).field_0x30 = iVar1;
      *(int *)&(this->FileTimes).field_0x34 = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)((longlong)iVar1 * 0x20 + lVar3) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->FileTimes,&local_58,iVar8);
    if (local_58.Pointer != (TSparseSetElement<TTuple<FString,FDateTime>_> *)0x0) {
      *(undefined8 *)local_58.Pointer = 0;
      *(FScriptContainerElement **)local_58.Pointer = local_88.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_58.Pointer + 8) = local_88.Data.ArrayNum;
      *(int *)((longlong)local_58.Pointer + 0xc) = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      *(undefined8 *)((longlong)local_58.Pointer + 0x10) = 0;
      *(undefined4 *)((longlong)local_58.Pointer + 0x18) = 0xffffffff;
      pTVar17 = local_58.Pointer;
    }
    local_res20[0] = local_58.Index;
    if (*(int *)&pTVar17->field_0x8 != 0) {
      pwVar21 = *(wchar_t **)pTVar17;
      uVar9 = *(int *)&pTVar17->field_0x8 - 1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar21);
    bVar5 = TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                        *)&this->FileTimes,uVar9,pTVar17,local_res20,(bool *)0x0);
    if (!bVar5) {
      TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                      *)&this->FileTimes,uVar9,pTVar17,local_res20[0]);
    }
  }
  if (cVar18 != '\0') {
    (**(code **)((longlong)*this->FileInterface + 0x140))(this->FileInterface,local_res10,this);
  }
LAB_141900003:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return true;
}

