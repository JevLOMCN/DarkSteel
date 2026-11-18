// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 23

// StaticStruct @ 14a0ac6b0

UScriptStruct * __cdecl FRigVMMemoryContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMemoryContainer,(UObject *)pUVar1,
                         L"RigVMMemoryContainer");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMMemoryContainer.OuterSingleton;
}

// FRigVMMemoryContainer @ 14a0bd640

FRigVMMemoryContainer * __thiscall
FRigVMMemoryContainer::FRigVMMemoryContainer
          (FRigVMMemoryContainer *this,FRigVMMemoryContainer *param_1)

{
  (this->Registers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Registers).ArrayNum = 0;
  (this->Registers).ArrayMax = 0;
  (this->RegisterOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterOffsets).ArrayNum = 0;
  (this->RegisterOffsets).ArrayMax = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->ScriptStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptStructs).ArrayNum = 0;
  (this->ScriptStructs).ArrayMax = 0;
  *(undefined8 *)&this->NameMap = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  operator=(this,param_1);
  return this;
}

// FRigVMMemoryContainer @ 14a0bd6b0

FRigVMMemoryContainer * __thiscall
FRigVMMemoryContainer::FRigVMMemoryContainer(FRigVMMemoryContainer *this,bool param_1)

{
  this->bUseNameMap = param_1;
  (this->Registers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Registers).ArrayNum = 0;
  (this->Registers).ArrayMax = 0;
  (this->RegisterOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterOffsets).ArrayNum = 0;
  (this->RegisterOffsets).ArrayMax = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->ScriptStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptStructs).ArrayNum = 0;
  (this->ScriptStructs).ArrayMax = 0;
  *(undefined8 *)&this->NameMap = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  this->MemoryType = Work;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  this->bEncounteredErrorDuringLoad = false;
  return this;
}

// ~FRigVMMemoryContainer @ 14a0c2d30

void __thiscall FRigVMMemoryContainer::~FRigVMMemoryContainer(FRigVMMemoryContainer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  Reset(this);
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameMap);
  pFVar2 = (this->ScriptStructs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMRegisterOffset,int>
            ((FRigVMRegisterOffset *)(this->RegisterOffsets).AllocatorInstance.Data,
             (this->RegisterOffsets).ArrayNum);
  pFVar2 = (this->RegisterOffsets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Registers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14a0c51b0

FRigVMMemoryContainer * __thiscall
FRigVMMemoryContainer::operator=(FRigVMMemoryContainer *this,FRigVMMemoryContainer *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigVMRegister,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UScriptStruct>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FRigVMMemoryContainer *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement local_48 [16];
  FScriptContainerElement local_38 [16];
  
  Reset(this);
  pTVar1 = &this->Data;
  this->MemoryType = param_1->MemoryType;
  this->bUseNameMap = param_1->bUseNameMap;
  this->bEncounteredErrorDuringLoad = false;
  if ((pTVar1 == &param_1->Data) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
    return pFVar12;
  }
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,&pTVar1->AllocatorInstance,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + iVar8,(param_1->Data).AllocatorInstance.Data,
           (longlong)iVar5);
  }
  pTVar2 = &this->Registers;
  if ((pTVar2 == &param_1->Registers) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
    return pFVar12;
  }
  iVar5 = (param_1->Registers).ArrayNum;
  if (iVar5 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,iVar5,&pTVar2->AllocatorInstance,&(this->Registers).ArrayNum,
                       &(this->Registers).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x24,
           (param_1->Registers).AllocatorInstance.Data,(longlong)iVar5 * 0x24);
  }
  pTVar3 = &this->RegisterOffsets;
  if ((pTVar3 == &param_1->RegisterOffsets) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
    return pFVar12;
  }
  iVar5 = (param_1->RegisterOffsets).ArrayNum;
  if (iVar5 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar5,&pTVar3->AllocatorInstance,&(this->RegisterOffsets).ArrayNum,
                       &(this->RegisterOffsets).ArrayMax);
    ConstructItems<FRigVMRegisterOffset,FRigVMRegisterOffset,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x48,
               (FRigVMRegisterOffset *)(param_1->RegisterOffsets).AllocatorInstance.Data,iVar5);
  }
  pTVar4 = &this->ScriptStructs;
  if ((pTVar4 == &param_1->ScriptStructs) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
    return pFVar12;
  }
  iVar5 = (param_1->ScriptStructs).ArrayNum;
  if (iVar5 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar5,&pTVar4->AllocatorInstance,&(this->ScriptStructs).ArrayNum,
                       &(this->ScriptStructs).ArrayMax);
    ConstructItems<TObjectPtr<UScriptStruct>,TObjectPtr<UScriptStruct>,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 8,
               (TObjectPtr<UScriptStruct> *)(param_1->ScriptStructs).AllocatorInstance.Data,iVar5);
  }
  UpdateRegisters(this);
  uVar16 = 0;
  uVar17 = uVar16;
  if (0 < (this->Registers).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < (this->Registers).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
        return pFVar12;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (pFVar14[uVar17 + 0x21] != (FScriptContainerElement)0x0) {
        uVar9 = *(uint *)(pFVar14 + uVar17 + 4);
        iVar5 = (this->Data).ArrayNum;
        uVar11 = 0;
        if (pFVar14[uVar17 + 0x20] == (FScriptContainerElement)0x0) {
          uVar10 = uVar11;
          if ((int)uVar9 < iVar5) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
            return pFVar12;
          }
          pFVar13 = (pTVar1->AllocatorInstance).Data + (int)uVar9;
          *(undefined8 *)pFVar13 = 0;
          *(undefined8 *)(pFVar13 + 8) = 0;
          uVar9 = *(uint *)(pFVar14 + uVar17 + 4);
          if ((int)uVar9 < (this->Data).ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
            return pFVar12;
          }
          pFVar14 = (pTVar1->AllocatorInstance).Data + (int)uVar9;
          if (pFVar14 != local_48) {
            if (*(void **)pFVar14 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar14);
            }
            *(undefined8 *)pFVar14 = 0;
            *(undefined8 *)(pFVar14 + 8) = 0;
          }
        }
        else {
          uVar10 = uVar11;
          if ((int)uVar9 < iVar5) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
            return pFVar12;
          }
          pFVar13 = (pTVar1->AllocatorInstance).Data + (int)uVar9;
          *(undefined8 *)pFVar13 = 0;
          *(undefined8 *)(pFVar13 + 8) = 0;
          uVar9 = *(uint *)(pFVar14 + uVar17 + 4);
          if ((int)uVar9 < (this->Data).ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FRigVMMemoryContainer *)(*pcVar6)();
            return pFVar12;
          }
          pFVar14 = (pTVar1->AllocatorInstance).Data + (int)uVar9;
          if (pFVar14 != local_38) {
            DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                      (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)pFVar14,
                       *(int *)(pFVar14 + 8));
            if (*(void **)pFVar14 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar14);
            }
            *(undefined8 *)pFVar14 = 0;
            *(undefined8 *)(pFVar14 + 8) = 0;
          }
          DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0,0);
        }
      }
      Construct(this,uVar15,-1,0);
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 0x24;
    } while ((int)(uVar15 + 1) < (this->Registers).ArrayNum);
  }
  return this;
}

// Allocate @ 14a0cdbc0

int __thiscall
FRigVMMemoryContainer::Allocate
          (FRigVMMemoryContainer *this,FName *param_1,int param_2,int param_3,int param_4,
          uchar *param_5,bool param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FName FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  ushort uVar12;
  uint uVar13;
  FName FVar14;
  uint uVar15;
  FName local_res8;
  FName local_res10;
  FString local_78;
  uint local_68;
  int iStack_64;
  short sStack_60;
  short sStack_5e;
  ushort uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined2 local_58;
  undefined2 uStack_56;
  FNameEntryId FStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  FVar14 = *param_1;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  local_res8 = FVar14;
  if ((this->bUseNameMap != false) && (FVar14 == (FName)0x0)) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    do {
      do {
        ::FString::PrintfImpl(&local_78,L"%s_%d");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar11.Data = local_78.Data.AllocatorInstance.Data;
        }
        pFVar8 = ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
        FVar14 = *pFVar8;
        local_res8 = FVar14;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      } while (this->bUseNameMap == false);
      iVar6 = GetIndex(this,&local_res8);
    } while (iVar6 != -1);
  }
  if ((((param_2 < 1) || (param_3 < 0)) || (param_4 < 1)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1838201463877139575>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                         ,0x389,"InElementSize > 0 && InElementCount >= 0 && InSliceCount > 0"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if ((this->bUseNameMap == false) || (iVar6 = GetIndex(this,&local_res8), iVar6 == -1)) {
    iStack_64 = (this->Data).ArrayNum;
    if (this->bUseNameMap != false) {
      FVar9 = FVar14;
    }
    FStack_54 = FVar9.ComparisonIndex.Value;
    uStack_50 = FVar9.Number;
    uStack_5a = 0;
    uVar12 = 0;
    local_58 = 0;
    uStack_4c = 0xffffffff;
    local_48 = (uint)local_48._2_2_ << 0x10;
    uVar13 = ((param_4 & 0xffffU) * (param_3 & 0xffffU) & 0xffff) * (param_2 & 0xffffU) & 0xffff;
    sStack_60 = (short)param_2;
    sStack_5e = (short)param_3;
    uStack_5c = (ushort)param_4;
    local_68 = local_68 & 0xffffff00;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar13,&(this->Data).AllocatorInstance,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    memset((this->Data).AllocatorInstance.Data + iVar6,0,(ulonglong)uVar13);
    if ((param_5 != (uchar *)0x0) && (uStack_5c != 0)) {
      do {
        uVar3 = sStack_5e * sStack_60;
        uVar15 = (uint)uVar3 * (uint)uVar12 + iStack_64;
        uVar13 = 0;
        if ((int)uVar15 < (this->Data).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        memcpy((this->Data).AllocatorInstance.Data + (int)uVar15,param_5,(ulonglong)uVar3);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_5c);
    }
    pFVar2 = (this->Registers).AllocatorInstance.Data;
    iVar6 = (this->Registers).ArrayNum;
    if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)(this->Registers).ArrayMax * 0x24
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar7 = (this->Registers).ArrayNum;
    piVar1 = &(this->Registers).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x424,&(this->Registers).AllocatorInstance,piVar1);
    }
    lVar10 = (longlong)iVar7;
    (this->Registers).ArrayNum = iVar7 + 1;
    pFVar2 = (this->Registers).AllocatorInstance.Data;
    *(ulonglong *)(pFVar2 + lVar10 * 0x24) = CONCAT44(iStack_64,local_68);
    *(ulonglong *)(pFVar2 + lVar10 * 0x24 + 8) =
         CONCAT17(uStack_59,CONCAT16(uStack_5a,CONCAT24(uStack_5c,CONCAT22(sStack_5e,sStack_60))));
    *(ulonglong *)(pFVar2 + lVar10 * 0x24 + 0x10) =
         CONCAT44(FStack_54.Value,CONCAT22(uStack_56,local_58));
    *(ulonglong *)(pFVar2 + lVar10 * 0x24 + 0x18) = CONCAT44(uStack_4c,uStack_50);
    *(int *)(pFVar2 + lVar10 * 0x24 + 0x20) = local_48;
    if (param_6) {
      UpdateRegisters(this);
    }
  }
  else {
    iVar6 = -1;
  }
  return iVar6;
}

// Allocate @ 14a0cdef0

int __thiscall
FRigVMMemoryContainer::Allocate
          (FRigVMMemoryContainer *this,int param_1,int param_2,int param_3,uchar *param_4,
          bool param_5)

{
  int iVar1;
  FName local_18 [3];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  iVar1 = Allocate(this,local_18,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

// Construct @ 14a0d0940

bool __thiscall
FRigVMMemoryContainer::Construct(FRigVMMemoryContainer *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  undefined8 *_Dst;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  undefined8 local_48;
  undefined8 local_40;
  
  if (((param_1 < 0) || ((this->Registers).ArrayNum <= param_1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1838201463877139520>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                         ,0x3c0,"Registers.IsValidIndex(InRegisterIndex)"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar9 = 0;
  if (param_1 < (this->Registers).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = (this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24;
  if ((*(ushort *)(pFVar1 + 10) != 0) &&
     ((*pFVar1 != (FScriptContainerElement)0x0 || (pFVar1[0x21] != (FScriptContainerElement)0x0))))
  {
    iVar14 = 1;
    if (param_2 == -1) {
      param_2 = 0;
      iVar10 = (uint)*(ushort *)(pFVar1 + 0xc) * (uint)*(ushort *)(pFVar1 + 10);
    }
    else {
      iVar10 = 1;
    }
    uVar9 = *(uint *)(pFVar1 + 4);
    uVar7 = 0;
    if ((int)uVar9 < (this->Data).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
              ((this->Data).AllocatorInstance.Data + (int)uVar9);
    if (pFVar1[0x21] != (FScriptContainerElement)0x0) {
      if (pFVar1[0x20] == (FScriptContainerElement)0x0) {
        iVar10 = this_00->ArrayNum / (int)(uint)*(ushort *)(pFVar1 + 8);
        if (iVar10 == 0) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
                    (this_00,(uint)*(ushort *)(pFVar1 + 8));
          iVar10 = 1;
        }
        if (((uint)*(ushort *)(pFVar1 + 8) * iVar10 != this_00->ArrayNum) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1838201463877139489>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                               ,0x3df,"ElementCount * Register.ElementSize == Storage.Num()"), bVar4
           )) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                  (this_00->AllocatorInstance).Data;
        goto LAB_14a0d0ac0;
      }
      iVar14 = this_00->ArrayNum;
      this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                (this_00->AllocatorInstance).Data;
    }
    if (0 < iVar14) {
LAB_14a0d0ac0:
      uVar11 = (ulonglong)param_3;
      FVar6 = pFVar1[0x21];
      iVar16 = 0;
      if (param_3 == -1) goto LAB_14a0d0b62;
      iVar16 = param_3;
      if (FVar6 == (FScriptContainerElement)0x0) goto LAB_14a0d0b62;
      if (pFVar1[0x20] == (FScriptContainerElement)0x0) goto LAB_14a0d0b62;
      pTVar15 = this_00 + uVar11;
      do {
        this_00 = pTVar15;
        if (pFVar1[0x20] != (FScriptContainerElement)0x0) {
          iVar10 = pTVar15->ArrayNum / (int)(uint)*(ushort *)(pFVar1 + 8);
          if ((iVar10 * (uint)*(ushort *)(pFVar1 + 8) != pTVar15->ArrayNum) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1838201463877139467>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                                 ,0x3f5,"ElementCount * Register.ElementSize == Storage.Num()"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                    (pTVar15->AllocatorInstance).Data;
        }
        do {
          FVar6 = *pFVar1;
          if (FVar6 == (FScriptContainerElement)0x1) {
            _Dst = (undefined8 *)
                   ((longlong)&(this_00->AllocatorInstance).Data +
                   (longlong)(int)((uint)*(ushort *)(pFVar1 + 8) * param_2));
            if ((iVar10 < 0) &&
               (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<172092227084877985>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                                   ,0xa1,"InCount >= 0"), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            lVar12 = (longlong)iVar10;
            memset(_Dst,0,lVar12 << 4);
            if (0 < iVar10) {
              do {
                local_48 = 0;
                local_40 = 0;
                if (_Dst != &local_48) {
                  if ((void *)*_Dst != (void *)0x0) {
                    FMemory::Free((void *)*_Dst);
                  }
                  *_Dst = 0;
                  _Dst[1] = 0;
                }
                _Dst = _Dst + 2;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            uVar11 = (ulonglong)(uint)param_3;
          }
          else if (FVar6 == (FScriptContainerElement)0x2) {
            uVar2 = *(ushort *)(pFVar1 + 8);
            if ((iVar10 < 0) &&
               (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<172092227084878031>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                                   ,0xcf,"InCount >= 0"), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            memset((void *)((longlong)&(this_00->AllocatorInstance).Data +
                           (longlong)(int)((uint)uVar2 * param_2)),0,(longlong)iVar10 << 3);
          }
          else {
            if (FVar6 != (FScriptContainerElement)0x3) {
              return false;
            }
            uVar2 = *(ushort *)(pFVar1 + 8);
            pUVar8 = GetScriptStruct(this,param_1,-1);
            if ((pUVar8 != (UScriptStruct *)0x0) &&
               (iVar13 = (int)*(short *)((longlong)&pUVar8->_padding_ + 4),
               (uint)*(ushort *)(pFVar1 + 8) == ((int)pUVar8->_padding_ + -1 + iVar13 & -iVar13))) {
              (**(code **)(pUVar8->_padding_ + 0x2f8))
                        (pUVar8,(longlong)&(this_00->AllocatorInstance).Data +
                                (longlong)(int)((uint)uVar2 * param_2),iVar10);
            }
          }
          FVar6 = pFVar1[0x21];
          if ((FVar6 != (FScriptContainerElement)0x0) &&
             (pFVar1[0x20] != (FScriptContainerElement)0x0)) {
            pTVar15 = pTVar15 + 1;
          }
          if ((int)uVar11 != -1) {
            return true;
          }
          iVar16 = iVar16 + 1;
          this_00 = pTVar15;
          if (iVar14 <= iVar16) {
            return true;
          }
LAB_14a0d0b62:
          pTVar15 = this_00;
        } while (FVar6 == (FScriptContainerElement)0x0);
      } while( true );
    }
  }
  return true;
}

// CopyRegisters @ 14a0d3b80

bool __thiscall
FRigVMMemoryContainer::CopyRegisters(FRigVMMemoryContainer *this,FRigVMMemoryContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Registers).ArrayNum != (param_1->Registers).ArrayNum) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1838201463877139979>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                       ,0x1f5,"Registers.Num() == InOther.Registers.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// Destroy @ 14a0d5200

bool __thiscall
FRigVMMemoryContainer::Destroy(FRigVMMemoryContainer *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UScriptStruct *pUVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar12 = 0;
  if (param_1 < (this->Registers).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar1 = (this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24;
  if (*(ushort *)(pFVar1 + 10) == 0) {
    return true;
  }
  if ((*pFVar1 == (FScriptContainerElement)0x0) && (pFVar1[0x21] == (FScriptContainerElement)0x0)) {
    return true;
  }
  if (param_2 == -1) {
    param_2 = 0;
    iVar10 = (uint)*(ushort *)(pFVar1 + 0xc) * (uint)*(ushort *)(pFVar1 + 10);
  }
  else {
    iVar10 = 1;
  }
  uVar12 = *(uint *)(pFVar1 + 4);
  iVar14 = 1;
  uVar7 = 0;
  if ((int)uVar12 < (this->Data).ArrayNum) {
    uVar7 = ~uVar12 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar15 = (this->Data).AllocatorInstance.Data + (int)uVar12;
  if (pFVar1[0x21] != (FScriptContainerElement)0x0) {
    if (pFVar1[0x20] == (FScriptContainerElement)0x0) {
      iVar10 = *(int *)(pFVar15 + 8) / (int)(uint)*(ushort *)(pFVar1 + 8);
      if (((uint)*(ushort *)(pFVar1 + 8) * iVar10 != *(int *)(pFVar15 + 8)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1838201463877139380>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                             ,0x44c,"ElementCount * Register.ElementSize == Storage.Num()"), bVar5))
      {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar15 = *(FScriptContainerElement **)pFVar15;
      goto LAB_14a0d5354;
    }
    iVar14 = *(int *)(pFVar15 + 8);
    pFVar15 = *(FScriptContainerElement **)pFVar15;
  }
  if (iVar14 < 1) {
LAB_14a0d5633:
    if (pFVar1[0x21] == (FScriptContainerElement)0x0) {
      return true;
    }
    uVar12 = *(uint *)(pFVar1 + 4);
    uVar7 = 0;
    if ((int)uVar12 < (this->Data).ArrayNum) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar15 = (this->Data).AllocatorInstance.Data + (int)uVar12;
    if ((pFVar1[0x21] == (FScriptContainerElement)0x0) ||
       (pFVar1[0x20] == (FScriptContainerElement)0x0)) {
      iVar10 = *(int *)(pFVar15 + 0xc);
      *(undefined4 *)&pFVar15[8].field_0x0 = 0;
      if (iVar10 == 0) {
        return true;
      }
      uVar7 = 1;
      uVar12 = 1;
    }
    else {
      if (param_3 == -1) {
        return true;
      }
      DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&pFVar15->field_0x0,
                 *(int *)&pFVar15[8].field_0x0);
      *(undefined4 *)&pFVar15[8].field_0x0 = 0;
      if (*(int *)(pFVar15 + 0xc) == 0) {
        return true;
      }
      uVar7 = 8;
      uVar12 = 0x10;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (uVar12,uVar7,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
    return true;
  }
LAB_14a0d5354:
  uVar9 = (ulonglong)param_3;
  iVar17 = 0;
  if (param_3 == -1) goto LAB_14a0d53d3;
  iVar17 = param_3;
  if (pFVar1[0x21] == (FScriptContainerElement)0x0) goto LAB_14a0d53d3;
  if (pFVar1[0x20] == (FScriptContainerElement)0x0) goto LAB_14a0d53d3;
  pFVar16 = pFVar15 + uVar9 * 0x10;
  do {
    iVar10 = *(int *)(pFVar16 + 8) / (int)(uint)*(ushort *)(pFVar1 + 8);
    if (((uint)*(ushort *)(pFVar1 + 8) * iVar10 != *(int *)(pFVar16 + 8)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1838201463877139358>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                           ,0x462,"ElementCount * Register.ElementSize == Storage.Num()"), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar15 = *(FScriptContainerElement **)pFVar16;
    do {
      FVar2 = *pFVar1;
      if (FVar2 == (FScriptContainerElement)0x1) {
        pFVar15 = pFVar15 + (int)((uint)*(ushort *)(pFVar1 + 8) * param_2);
        if ((iVar10 < 0) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<172092227084878001>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                               ,0xb1,"InCount >= 0"), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar11 = (longlong)iVar10;
        if (iVar10 < 1) goto LAB_14a0d55cb;
        do {
          local_48 = 0;
          local_40 = 0;
          if (pFVar15 != (FScriptContainerElement *)&local_48) {
            if (*(void **)pFVar15 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar15);
            }
            *(undefined8 *)pFVar15 = 0;
            *(undefined8 *)(pFVar15 + 8) = 0;
          }
          pFVar15 = pFVar15 + 0x10;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        uVar9 = (ulonglong)(uint)param_3;
      }
      else {
        if (FVar2 == (FScriptContainerElement)0x2) {
          uVar3 = *(ushort *)(pFVar1 + 8);
          if ((iVar10 < 0) &&
             (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<172092227084878041>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                                 ,0xd9,"InCount >= 0"), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          memset(pFVar15 + (int)((uint)uVar3 * param_2),0,(longlong)iVar10 * 8);
        }
        else {
          if (FVar2 != (FScriptContainerElement)0x3) {
            if (pFVar1[0x21] == (FScriptContainerElement)0x0) {
              return false;
            }
            goto LAB_14a0d55d5;
          }
          pFVar15 = pFVar15 + (int)((uint)*(ushort *)(pFVar1 + 8) * param_2);
          pUVar8 = GetScriptStruct(this,param_1,-1);
          if (pUVar8 == (UScriptStruct *)0x0) {
            memset(pFVar15,0,(longlong)(int)((uint)*(ushort *)(pFVar1 + 8) * iVar10));
          }
          else {
            iVar13 = (int)*(short *)((longlong)&pUVar8->_padding_ + 4);
            if ((uint)*(ushort *)(pFVar1 + 8) == (iVar13 + -1 + (int)pUVar8->_padding_ & -iVar13)) {
              (**(code **)(pUVar8->_padding_ + 0x300))(pUVar8,pFVar15);
            }
            else {
              memset(pFVar15,0,(longlong)(int)((uint)*(ushort *)(pFVar1 + 8) * iVar10));
            }
          }
        }
LAB_14a0d55cb:
        uVar9 = (ulonglong)(uint)param_3;
      }
LAB_14a0d55d5:
      if ((pFVar1[0x21] != (FScriptContainerElement)0x0) &&
         (pFVar1[0x20] != (FScriptContainerElement)0x0)) {
        *(undefined4 *)(pFVar16 + 8) = 0;
        if (*(int *)(pFVar16 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,(ForAnyElementType *)pFVar16,0,(int *)(pFVar16 + 0xc));
        }
        pFVar16 = pFVar16 + 0x10;
      }
      if (((int)uVar9 != -1) || (iVar17 = iVar17 + 1, pFVar15 = pFVar16, iVar14 <= iVar17))
      goto LAB_14a0d5633;
LAB_14a0d53d3:
      pFVar16 = pFVar15;
    } while ((pFVar1[0x21] == (FScriptContainerElement)0x0) ||
            (pFVar1[0x20] == (FScriptContainerElement)0x0));
  } while( true );
}

// Empty @ 14a0d67d0

void __thiscall FRigVMMemoryContainer::Empty(FRigVMMemoryContainer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Data).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Registers).ArrayMax;
  (this->Registers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,&(this->Registers).AllocatorInstance,0,piVar1);
  }
  DestructItems<FRigVMRegisterOffset,int>
            ((FRigVMRegisterOffset *)(this->RegisterOffsets).AllocatorInstance.Data,
             (this->RegisterOffsets).ArrayNum);
  piVar1 = &(this->RegisterOffsets).ArrayMax;
  (this->RegisterOffsets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->RegisterOffsets).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ScriptStructs).ArrayMax;
  (this->ScriptStructs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ScriptStructs).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->NameMap;
  bVar4 = 1 < *(int *)&(this->NameMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar2 = &(this->NameMap).field_0xc;
  *(undefined4 *)&(this->NameMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->NameMap).field_0x2c;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NameMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->NameMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00);
  }
  return;
}

// FindOrAddScriptStruct @ 14a0dae00

int __thiscall
FRigVMMemoryContainer::FindOrAddScriptStruct(FRigVMMemoryContainer *this,UScriptStruct *param_1)

{
  TArray<TObjectPtr<UScriptStruct>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UScriptStruct *local_18 [2];
  
  if (param_1 == (UScriptStruct *)0x0) {
    return -1;
  }
  pTVar1 = &this->ScriptStructs;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  pFVar7 = pFVar3;
  do {
    if (pFVar7 == pFVar3 + (longlong)(this->ScriptStructs).ArrayNum * 8) {
LAB_14a0dae64:
      local_18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar3 + (longlong)(this->ScriptStructs).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = (this->ScriptStructs).ArrayNum;
      piVar2 = &(this->ScriptStructs).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      (this->ScriptStructs).ArrayNum = iVar6 + 1;
      *(UScriptStruct **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
      return iVar6;
    }
    if (*(UScriptStruct **)pFVar7 == param_1) {
      iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
      if (iVar6 != -1) {
        return iVar6;
      }
      goto LAB_14a0dae64;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetIndex @ 14a0e7390

int __thiscall FRigVMMemoryContainer::GetIndex(FRigVMMemoryContainer *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,int> *pTVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->bUseNameMap != false) {
    iVar4 = (this->Registers).ArrayNum;
    if (*(int *)&(this->NameMap).field_0x8 - *(int *)&(this->NameMap).field_0x34 == iVar4) {
      pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&this->NameMap,*param_1);
      piVar6 = (int *)&pTVar5->field_0x8;
      if (pTVar5 == (TTuple<FName,int> *)0x0) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 != (int *)0x0) {
        return *piVar6;
      }
    }
    else {
      uVar7 = 0;
      if (0 < iVar4) {
        lVar8 = 0;
        do {
          uVar3 = 0;
          if ((int)uVar7 < (this->Registers).ArrayNum) {
            uVar3 = ~uVar7 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          if (*(FName *)((this->Registers).AllocatorInstance.Data + lVar8 + 0x14) == *param_1) {
            return uVar7;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x24;
        } while ((int)uVar7 < (this->Registers).ArrayNum);
      }
    }
  }
  return -1;
}

// GetOrAddRegisterOffset @ 14a0e91d0

int __thiscall
FRigVMMemoryContainer::GetOrAddRegisterOffset
          (FRigVMMemoryContainer *this,int param_1,FString *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UScriptStruct *pUVar5;
  
  if ((param_1 < 0) || ((this->Registers).ArrayNum <= param_1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1838201463877139255>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                       ,0x4c9,"Registers.IsValidIndex(InRegisterIndex)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (-1 < param_1) goto LAB_14a0e9232;
  }
  else {
LAB_14a0e9232:
    if (param_1 < (this->Registers).ArrayNum) goto LAB_14a0e925d;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<379838571126718960>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryDeprecated.h"
                     ,0x1f0,"Registers.IsValidIndex(InRegisterIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
LAB_14a0e925d:
  uVar4 = 0;
  if (param_1 < (this->Registers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pUVar5 = GetScriptStruct(this,(FRigVMRegister *)
                                ((this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24
                                ));
  uVar4 = 0;
  if (param_1 < (this->Registers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = GetOrAddRegisterOffset
                    (this,param_1,pUVar5,param_2,
                     (uint)*(ushort *)
                            ((this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24 + 8
                            ) * param_3,0);
  return iVar3;
}

// GetOrAddRegisterOffset @ 14a0e9360

int __thiscall
FRigVMMemoryContainer::GetOrAddRegisterOffset(FRigVMMemoryContainer *this,int param_1,int param_2)

{
  int iVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  iVar1 = GetOrAddRegisterOffset(this,param_1,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1;
}

// GetOrAddRegisterOffset @ 14a0e93a0

int __thiscall
FRigVMMemoryContainer::GetOrAddRegisterOffset
          (FRigVMMemoryContainer *this,int param_1,UScriptStruct *param_2,FString *param_3,
          int param_4,int param_5)

{
  TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FRigVMRegisterOffset *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName local_res18 [2];
  FRigVMRegisterOffset local_68;
  
  if (((param_2 == (UScriptStruct *)0x0) || ((param_3->Data).ArrayNum < 2)) && (param_4 == 0)) {
    iVar5 = -1;
  }
  else {
    if (param_5 == 0) {
      if (((param_1 < 0) || ((this->Registers).ArrayNum <= param_1)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1838201463877139235>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                             ,0x4dd,"Registers.IsValidIndex(InRegisterIndex)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      uVar6 = 0;
      if (param_1 < (this->Registers).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      param_5 = (int)*(ushort *)
                      ((this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24 + 8);
    }
    local_res18[0].ComparisonIndex.Value = 0;
    local_res18[0].Number = 0;
    if (((-1 < param_1) && (param_1 < (this->Registers).ArrayNum)) && (param_5 == 0)) {
      uVar6 = 0;
      if (param_1 < (this->Registers).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      param_5 = (int)*(ushort *)
                      ((this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24 + 8);
    }
    FRigVMRegisterOffset::FRigVMRegisterOffset
              (&local_68,param_2,param_3,param_4,(ushort)param_5,local_res18);
    this_00 = &this->RegisterOffsets;
    iVar5 = TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_>::Find(this_00,&local_68);
    if (iVar5 == -1) {
      pFVar2 = (FRigVMRegisterOffset *)(this_00->AllocatorInstance).Data;
      if (((pFVar2 <= &local_68) && (&local_68 < pFVar2 + (this->RegisterOffsets).ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = (this->RegisterOffsets).ArrayNum;
      piVar1 = &(this->RegisterOffsets).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&this_00->AllocatorInstance,piVar1);
      }
      (this->RegisterOffsets).ArrayNum = iVar5 + 1;
      FRigVMRegisterOffset::FRigVMRegisterOffset
                ((FRigVMRegisterOffset *)
                 ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x48),&local_68);
    }
    if (local_68.CachedSegmentPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.CachedSegmentPath.Data.AllocatorInstance.Data);
    }
    if (local_68.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Segments.AllocatorInstance.Data);
    }
  }
  return iVar5;
}

// GetScriptStruct @ 14a0eb720

UScriptStruct * __thiscall
FRigVMMemoryContainer::GetScriptStruct(FRigVMMemoryContainer *this,FRigVMRegister *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  
  iVar1 = param_1->ScriptStructIndex;
  if (iVar1 == -1) {
    return (UScriptStruct *)0x0;
  }
  if ((iVar1 < 0) || ((this->ScriptStructs).ArrayNum <= iVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<379838571126718949>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryDeprecated.h"
                       ,0x1e5,"ScriptStructs.IsValidIndex(Register.ScriptStructIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UScriptStruct *)(*pcVar3)();
      return pUVar6;
    }
  }
  uVar2 = param_1->ScriptStructIndex;
  uVar5 = 0;
  if ((int)uVar2 < (this->ScriptStructs).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UScriptStruct *)(*pcVar3)();
      return pUVar6;
    }
  }
  return *(UScriptStruct **)
          ((this->ScriptStructs).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
}

// GetScriptStruct @ 14a0eb7f0

UScriptStruct * __thiscall
FRigVMMemoryContainer::GetScriptStruct(FRigVMMemoryContainer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  uint uVar4;
  
  if (param_2 != -1) {
    if ((param_2 < 0) || ((this->RegisterOffsets).ArrayNum <= param_2)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<379838571126718964>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryDeprecated.h"
                         ,500,"RegisterOffsets.IsValidIndex(InRegisterOffset)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UScriptStruct *)(*pcVar1)();
        return pUVar3;
      }
    }
    uVar4 = 0;
    if (param_2 < (this->RegisterOffsets).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UScriptStruct *)(*pcVar1)();
        return pUVar3;
      }
    }
    return *(UScriptStruct **)
            ((this->RegisterOffsets).AllocatorInstance.Data + (longlong)param_2 * 0x48 + 0x20);
  }
  if ((param_1 < 0) || ((this->Registers).ArrayNum <= param_1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<379838571126718960>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryDeprecated.h"
                       ,0x1f0,"Registers.IsValidIndex(InRegisterIndex)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UScriptStruct *)(*pcVar1)();
      return pUVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Registers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UScriptStruct *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = GetScriptStruct(this,(FRigVMRegister *)
                                ((this->Registers).AllocatorInstance.Data + (longlong)param_1 * 0x24
                                ));
  return pUVar3;
}

// Load @ 14a0faa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FRigVMMemoryContainer::Load(FRigVMMemoryContainer *this,FArchive *param_1)

{
  TArray<TObjectPtr<UScriptStruct>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement FVar5;
  ERigVMMemoryType *pEVar6;
  void *_Src;
  longlong *plVar7;
  UScriptStruct *this_00;
  FScriptContainerElement *_Src_00;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FString *pFVar14;
  size_t sVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *pTVar22;
  ulonglong uVar23;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_01;
  ushort uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar29;
  undefined1 local_res18 [8];
  TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *local_res20;
  longlong local_208;
  UObject *local_200;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  ulong64 local_1b8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  TArray<FString,TSizedDefaultAllocator<32>_> local_160;
  TArray<FName,TSizedDefaultAllocator<32>_> local_150;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  TArray<FName,TSizedDefaultAllocator<32>_> local_130;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_120;
  FOutputDevice local_110;
  int local_100;
  FName local_f8;
  void *local_f0 [3];
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  void *local_c8 [2];
  FCoreRedirectObjectName local_b8;
  FCoreRedirectObjectName local_a0;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  
  iVar18 = 0;
  if (0 < (this->Registers).ArrayNum) {
    do {
      Destroy(this,iVar18,-1,0);
      iVar18 = iVar18 + 1;
    } while (iVar18 < (this->Registers).ArrayNum);
  }
  ::operator<<(param_1,&this->bUseNameMap);
  pEVar6 = (ERigVMMemoryType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMMemoryType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
  }
  else {
    this->MemoryType = *pEVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TArrayPrivateFriend::Serialize<FRigVMRegister,TSizedDefaultAllocator<32>_>
            (param_1,&this->Registers);
  pTVar22 = &this->RegisterOffsets;
  local_res20 = pTVar22;
  TArrayPrivateFriend::Serialize<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_>(param_1,pTVar22);
  this->bEncounteredErrorDuringLoad = false;
  pFVar16 = (pTVar22->AllocatorInstance).Data;
  iVar18 = (this->RegisterOffsets).ArrayNum;
  pFVar26 = pFVar16 + 0x10;
  while( true ) {
    if (pTVar22->ArrayNum != iVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FRigVMRegisterOffset,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar26 + -0x10 == pFVar16 + (longlong)iVar18 * 0x48) break;
    if (*pFVar26 == (FScriptContainerElement)0x4) {
      (**(code **)(*(longlong *)param_1 + 0x18))(param_1,local_f0);
      if (1 < (byte)LogRigVM._0_1_) {
        local_1c0 = *(int *)(pFVar26 + 0x30);
        lVar21 = (longlong)local_1c0;
        _Src = *(void **)(pFVar26 + 0x28);
        local_1c8.Data = (FScriptContainerElement *)0x0;
        if (local_1c0 == 0) {
          local_1bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1c0,0,&local_1c8,local_1c0,&local_1bc);
          memcpy(local_1c8.Data,_Src,lVar21 * 2);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        pTVar22 = local_res20;
        if (local_1c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data);
          pTVar22 = local_res20;
        }
      }
      this->bEncounteredErrorDuringLoad = true;
      if (local_f0[0] != (void *)0x0) {
        FMemory::Free(local_f0[0]);
      }
    }
    pFVar26 = pFVar26 + 0x48;
  }
  pTVar1 = &this->ScriptStructs;
  piVar3 = &(this->ScriptStructs).ArrayMax;
  (this->ScriptStructs).ArrayNum = 0;
  if ((this->ScriptStructs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar3);
  }
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_1d8);
  iVar18 = local_1d8.ArrayNum;
  uVar11 = (ulonglong)local_1d8.ArrayNum;
  pFVar26 = local_1d8.AllocatorInstance.Data + uVar11 * 0x10;
  FVar27.Data = local_1d8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar18) {
      local_res20 = (TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *)
                    ((ulonglong)local_res20 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (FVar27.Data == pFVar26) break;
    if (*(int *)(FVar27.Data + 8) == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = *(wchar_t **)FVar27.Data;
    }
    ::FString::FString(&local_88,pwVar17);
    pUVar12 = RigVMTypeUtils::FindObjectFromCPPTypeObjectPath(&local_88);
    if (pUVar12 == (UObject *)0x0) {
LAB_14a0fad16:
      pUVar12 = (UObject *)0x0;
    }
    else {
      pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar10 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar13->_padding_)) goto LAB_14a0fad16;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (pUVar12 == (UObject *)0x0) {
      FCoreRedirectObjectName::FCoreRedirectObjectName(&local_b8,(FString *)FVar27.Data);
      FCoreRedirects::GetRedirectedName(&local_a0,Type_Struct,&local_b8,None);
      if (((local_b8.ObjectName != local_a0.ObjectName) ||
          (local_b8.OuterName != local_a0.OuterName)) ||
         (local_b8.PackageName != local_a0.PackageName)) {
        pFVar14 = FCoreRedirectObjectName::ToString(&local_a0,&local_58);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_d8 = (FScriptContainerElement *)0x15060d16c;
LAB_14a0fadca:
          sVar15 = wcslen((wchar_t *)local_d8);
          iVar10 = (int)sVar15;
        }
        else {
          local_d8 = (pFVar14->Data).AllocatorInstance.Data;
          iVar10 = 0;
          if (local_d8 != (FScriptContainerElement *)0x0) goto LAB_14a0fadca;
        }
        iStack_d0 = iVar10;
        pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
        local_68._12_4_ = uStack_cc;
        local_68.Size = iStack_d0;
        local_68.DataPtr = (wchar_t *)local_d8;
        pUVar12 = StaticFindObject(pUVar13,(UObject *)0x0,&local_68,None);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (pUVar12 != (UObject *)0x0) goto LAB_14a0fae8e;
      }
      (**(code **)(*(longlong *)param_1 + 0x18))(param_1,local_c8);
      if (1 < (byte)LogRigVM._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      }
      this->bEncounteredErrorDuringLoad = true;
      if (local_c8[0] != (void *)0x0) {
        FMemory::Free(local_c8[0]);
      }
    }
LAB_14a0fae8e:
    local_200 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    pFVar16 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar16 <= (FScriptContainerElement *)&local_200) &&
        ((FScriptContainerElement *)&local_200 < pFVar16 + (longlong)*piVar3 * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (this->ScriptStructs).ArrayNum;
    if (iVar10 == *piVar3) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar3);
    }
    (this->ScriptStructs).ArrayNum = iVar10 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_200;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_200 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_200);
    }
    uVar11 = local_1d8._8_8_ & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x10;
  }
  uVar11 = 0;
  local_1b8 = 0;
  plVar7 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar7[1] < (ulong64 *)*plVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1b8);
    }
  }
  else {
    local_1b8 = *(ulong64 *)*plVar7;
    *plVar7 = *plVar7 + 8;
  }
  pTVar29 = &this->Data;
  piVar3 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar29->AllocatorInstance,0,piVar3);
  }
  if (this->bEncounteredErrorDuringLoad == false) {
    uVar28 = uVar11;
    if (0 < (this->Registers).ArrayNum) {
      do {
        uVar20 = (uint)uVar11;
        uVar25 = 0;
        if ((int)uVar20 < (this->Registers).ArrayNum) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = (this->Registers).AllocatorInstance.Data + uVar28;
        iVar18 = *(int *)(pFVar26 + 0x1c);
        if (iVar18 == -1) {
LAB_14a0fb1b8:
          if (*pFVar26 == (FScriptContainerElement)0x2) {
            *(undefined2 *)(pFVar26 + 8) = 8;
          }
          else if (*pFVar26 == (FScriptContainerElement)0x1) {
            *(undefined2 *)(pFVar26 + 8) = 0x10;
          }
        }
        else {
          if (((iVar18 < 0) || ((this->ScriptStructs).ArrayNum <= iVar18)) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<379838571126718949>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryDeprecated.h"
                                 ,0x1e5,"ScriptStructs.IsValidIndex(Register.ScriptStructIndex)"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar25 = *(uint *)(pFVar26 + 0x1c);
          uVar19 = 0;
          if ((int)uVar25 < (this->ScriptStructs).ArrayNum) {
            uVar19 = ~uVar25 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar21 = *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar25 * 8);
          if (lVar21 == 0) goto LAB_14a0fb1b8;
          *(short *)(pFVar26 + 8) =
               *(short *)(lVar21 + 0x5c) + -1 + *(short *)(lVar21 + 0x58) &
               -*(short *)(lVar21 + 0x5c);
        }
        *(undefined2 *)(pFVar26 + 0x10) = 0;
        pFVar26[0xe] = (FScriptContainerElement)0x0;
        uVar25 = 0;
        if ((int)uVar20 < (this->Registers).ArrayNum) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->Registers).AllocatorInstance.Data[uVar28 + 0x21] == (FScriptContainerElement)0x0)
        {
          uVar25 = (uint)(ushort)(*(short *)(pFVar26 + 0xc) * *(short *)(pFVar26 + 10) *
                                 *(short *)(pFVar26 + 8));
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,uVar25,&pTVar29->AllocatorInstance,&(this->Data).ArrayNum,
                              &(this->Data).ArrayMax);
          memset((pTVar29->AllocatorInstance).Data + iVar18,0,(ulonglong)uVar25);
        }
        else {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,0x10,&pTVar29->AllocatorInstance,&(this->Data).ArrayNum,
                              &(this->Data).ArrayMax);
          pFVar16 = (pTVar29->AllocatorInstance).Data + iVar18;
          *(undefined8 *)pFVar16 = 0;
          *(undefined8 *)(pFVar16 + 8) = 0;
        }
        uVar11 = (ulonglong)(uVar20 + 1);
        *(int *)(pFVar26 + 4) = iVar18;
        uVar28 = uVar28 + 0x24;
      } while ((int)(uVar20 + 1) < (this->Registers).ArrayNum);
    }
    UpdateRegisters(this);
    uVar23 = 0;
    uVar25 = 0;
    uVar11 = uVar23;
    uVar28 = uVar23;
    if (0 < (this->RegisterOffsets).ArrayNum) {
      do {
        uVar19 = (uint)uVar11;
        uVar20 = uVar25;
        if ((int)uVar19 < (this->RegisterOffsets).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = (this->RegisterOffsets).AllocatorInstance.Data;
        lVar21 = *(longlong *)(pFVar26 + uVar28 + 0x20);
        if (lVar21 != 0) {
          *(short *)(pFVar26 + uVar28 + 0x34) =
               *(short *)(lVar21 + 0x5c) + -1 + *(short *)(lVar21 + 0x58) &
               -*(short *)(lVar21 + 0x5c);
        }
        if (pFVar26[uVar28 + 0x10] == (FScriptContainerElement)0x2) {
          *(undefined2 *)(pFVar26 + uVar28 + 0x34) = 8;
        }
        else if (pFVar26[uVar28 + 0x10] == (FScriptContainerElement)0x1) {
          *(undefined2 *)(pFVar26 + uVar28 + 0x34) = 0x10;
        }
        uVar11 = (ulonglong)(uVar19 + 1);
        uVar28 = uVar28 + 0x48;
      } while ((int)(uVar19 + 1) < (this->RegisterOffsets).ArrayNum);
    }
    uVar11 = uVar23;
    if (0 < (this->Registers).ArrayNum) {
      do {
        uVar19 = (uint)uVar23;
        uVar20 = uVar25;
        if ((int)uVar19 < (this->Registers).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar20 = uVar25;
        if ((int)uVar19 < (this->Registers).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->Registers).AllocatorInstance.Data[uVar11 + 0x21] == (FScriptContainerElement)0x0)
        {
          Construct(this,uVar19,-1,0);
        }
        uVar23 = (ulonglong)(uVar19 + 1);
        uVar11 = uVar11 + 0x24;
      } while ((int)(uVar19 + 1) < (this->Registers).ArrayNum);
    }
  }
  uVar25 = 0;
  if (0 < (this->Registers).ArrayNum) {
    local_208 = 0;
    do {
      uVar19 = 0;
      uVar20 = uVar19;
      if ((int)uVar25 < (this->Registers).ArrayNum) {
        uVar20 = ~uVar25 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar16 = (this->Registers).AllocatorInstance.Data;
      pFVar26 = pFVar16 + local_208 * 0x24;
      if ((*(short *)(pFVar16 + local_208 * 0x24 + 10) != 0) ||
         (pFVar26[0x21] != (FScriptContainerElement)0x0)) {
        if (this->MemoryType == Literal) {
          if (pFVar26[0x21] != (FScriptContainerElement)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Register.IsDynamic()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                               ,0x2c6,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            goto LAB_14a0fb4cd;
          }
        }
        else {
LAB_14a0fb4cd:
          if (pFVar26[0x21] != (FScriptContainerElement)0x0) {
            if (pFVar26[0x20] == (FScriptContainerElement)0x0) {
              FVar5 = *pFVar26;
              if (FVar5 == (FScriptContainerElement)0x0) {
                local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_140.ArrayNum = 0;
                local_140.ArrayMax = 0;
                TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                          (param_1,&local_140);
                if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_140.AllocatorInstance.Data);
                }
              }
              else if (FVar5 == (FScriptContainerElement)0x1) {
                local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_180.ArrayNum = 0;
                local_180.ArrayMax = 0;
                TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                          (param_1,&local_180);
                DestructItems<FString,int>
                          ((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
                if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.AllocatorInstance.Data);
                }
              }
              else if (FVar5 == (FScriptContainerElement)0x2) {
                local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_150.ArrayNum = 0;
                local_150.ArrayMax = 0;
                TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                          (param_1,&local_150);
                if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_150.AllocatorInstance.Data);
                }
              }
              else if (FVar5 == (FScriptContainerElement)0x3) {
                local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_190.ArrayNum = 0;
                local_190.ArrayMax = 0;
                TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                          (param_1,&local_190);
                DestructItems<FString,int>
                          ((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
                if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_190.AllocatorInstance.Data);
                }
              }
              goto LAB_14a0fbf36;
            }
            if (this->bEncounteredErrorDuringLoad == false) {
              uVar20 = *(uint *)(pFVar26 + 4);
              if ((int)uVar20 < (this->Data).ArrayNum) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              this_01 = (TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)((this->Data).AllocatorInstance.Data + (int)uVar20);
              piVar3 = &this_01->ArrayNum;
              pTVar29 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                        (this_01->AllocatorInstance).Data;
              piVar4 = &this_01->ArrayMax;
              if (this_01->ArrayMax < 0) {
                DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                          (pTVar29,*piVar3);
                *piVar3 = 0;
                if (*piVar4 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,(ForAnyElementType *)this_01,0,piVar4);
                }
              }
              else {
                DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                          (pTVar29,*piVar3);
                *piVar3 = 0;
              }
              uVar24 = *(ushort *)(pFVar26 + 0xc);
              iVar18 = *piVar3;
              if (iVar18 < (int)(uint)uVar24) {
                iVar18 = (uint)uVar24 - iVar18;
                iVar10 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,iVar18,(ForAnyElementType *)this_01,piVar3,piVar4);
                memset((this_01->AllocatorInstance).Data + (longlong)iVar10 * 0x10,0,
                       (longlong)iVar18 << 4);
              }
              else if ((int)(uint)uVar24 < iVar18) {
                iVar18 = iVar18 - (uint)uVar24;
                if (iVar18 < 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    );
                  if (bVar9) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                else if (iVar18 == 0) goto LAB_14a0fbe5c;
                TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                ::RemoveAtImpl(this_01,(uint)uVar24,iVar18);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(ForAnyElementType *)this_01,this_01->ArrayNum,&this_01->ArrayMax)
                ;
              }
            }
LAB_14a0fbe5c:
            iVar18 = 0;
            if (*(short *)(pFVar26 + 0xc) != 0) {
              do {
                FVar5 = *pFVar26;
                if (FVar5 == (FScriptContainerElement)0x0) {
                  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_120.ArrayNum = 0;
                  local_120.ArrayMax = 0;
                  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                            (param_1,&local_120);
                  FVar27.Data = local_120.AllocatorInstance.Data;
LAB_14a0fbf1d:
                  if (FVar27.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar27.Data);
                  }
                }
                else {
                  if (FVar5 == (FScriptContainerElement)0x1) {
                    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_160.ArrayNum = 0;
                    local_160.ArrayMax = 0;
                    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                              (param_1,&local_160);
                    DestructItems<FString,int>
                              ((FString *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
                    FVar27.Data = local_160.AllocatorInstance.Data;
                    goto LAB_14a0fbf1d;
                  }
                  if (FVar5 == (FScriptContainerElement)0x2) {
                    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_130.ArrayNum = 0;
                    local_130.ArrayMax = 0;
                    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                              (param_1,&local_130);
                    FVar27.Data = local_130.AllocatorInstance.Data;
                    goto LAB_14a0fbf1d;
                  }
                  if (FVar5 == (FScriptContainerElement)0x3) {
                    local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_170.ArrayNum = 0;
                    local_170.ArrayMax = 0;
                    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                              (param_1,&local_170);
                    DestructItems<FString,int>
                              ((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
                    FVar27.Data = local_170.AllocatorInstance.Data;
                    goto LAB_14a0fbf1d;
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < (int)(uint)*(ushort *)(pFVar26 + 0xc));
            }
            goto LAB_14a0fbf36;
          }
        }
        FVar5 = *pFVar26;
        if (FVar5 == (FScriptContainerElement)0x0) {
          local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a0.ArrayNum = 0;
          local_1a0.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                    (param_1,&local_1a0);
          if (this->bEncounteredErrorDuringLoad == false) {
            if (((int)(uint)(ushort)(*(short *)(pFVar26 + 0xc) * *(short *)(pFVar26 + 10) *
                                     *(short *)(pFVar26 + 8) + (ushort)(byte)pFVar26[0xe] +
                                    *(short *)(pFVar26 + 0x10)) < local_1a0.ArrayNum) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1838201463877139756>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                                   ,0x2d4,"View.Num() <= Register.GetAllocatedBytes()"), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar27.Data = local_1a0.AllocatorInstance.Data;
            uVar20 = *(uint *)(pFVar26 + 4);
            sVar15 = (size_t)local_1a0.ArrayNum;
            if ((int)uVar20 < (this->Data).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            memcpy((this->Data).AllocatorInstance.Data + (int)uVar20,FVar27.Data,sVar15);
          }
          if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.AllocatorInstance.Data);
          }
        }
        else if (FVar5 == (FScriptContainerElement)0x1) {
          local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e8.ArrayNum = 0;
          local_1e8.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_1e8);
          if (this->bEncounteredErrorDuringLoad == false) {
            if ((local_1e8.ArrayNum !=
                 (uint)*(ushort *)(pFVar26 + 0xc) * (uint)*(ushort *)(pFVar26 + 10)) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1838201463877139732>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                                   ,0x2ec,"View.Num() == Register.GetTotalElementCount()"), bVar9))
            {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar27.Data = local_1e8.AllocatorInstance.Data;
            uVar20 = *(uint *)(pFVar26 + 4);
            iVar18 = local_1e8.ArrayNum;
            lVar21 = (longlong)local_1e8.ArrayNum;
            if ((int)uVar20 < (this->Data).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar26 = (this->Data).AllocatorInstance.Data + (int)uVar20;
            if ((iVar18 < 0) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<172092227084878015>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                                   ,0xbf,"InCount >= 0"), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (0 < iVar18) {
              pFVar16 = pFVar26 + 0xc;
              do {
                pFVar2 = pFVar16 + -0xc;
                if (pFVar2 != pFVar16 + (longlong)(FVar27.Data + (-0xc - (longlong)pFVar26))) {
                  iVar18 = *(int *)(FVar27.Data + (-4 - (longlong)pFVar26) + (longlong)pFVar16);
                  _Src_00 = *(FScriptContainerElement **)
                             &pFVar16[(longlong)(FVar27.Data + (-0xc - (longlong)pFVar26))].
                              field_0x0;
                  *(int *)(pFVar16 + -4) = iVar18;
                  if ((iVar18 == 0) && (*(int *)pFVar16 == 0)) {
                    *(undefined4 *)pFVar16 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar18,*(int *)pFVar16,(ForAnyElementType *)pFVar2,iVar18,
                               (int *)pFVar16);
                    if (iVar18 != 0) {
                      memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src_00,
                             (longlong)iVar18 * 2);
                    }
                  }
                }
                pFVar16 = pFVar16 + 0x10;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          DestructItems<FString,int>((FString *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum)
          ;
          if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.AllocatorInstance.Data);
          }
        }
        else if (FVar5 == (FScriptContainerElement)0x2) {
          local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b0.ArrayNum = 0;
          local_1b0.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&local_1b0);
          if (this->bEncounteredErrorDuringLoad == false) {
            if ((local_1b0.ArrayNum !=
                 (uint)*(ushort *)(pFVar26 + 0xc) * (uint)*(ushort *)(pFVar26 + 10)) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1838201463877139744>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                                   ,0x2e0,"View.Num() == Register.GetTotalElementCount()"), bVar9))
            {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar27.Data = local_1b0.AllocatorInstance.Data;
            uVar20 = *(uint *)(pFVar26 + 4);
            iVar18 = local_1b0.ArrayNum;
            lVar21 = (longlong)local_1b0.ArrayNum;
            if ((int)uVar20 < (this->Data).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar26 = (this->Data).AllocatorInstance.Data;
            if ((iVar18 < 0) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<172092227084878051>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMTraits.h"
                                   ,0xe3,"InCount >= 0"), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            memcpy(pFVar26 + (int)uVar20,FVar27.Data,lVar21 << 3);
          }
          if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.AllocatorInstance.Data);
          }
        }
        else if (FVar5 == (FScriptContainerElement)0x3) {
          local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f8.ArrayNum = 0;
          local_1f8.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_1f8);
          if (this->bEncounteredErrorDuringLoad == false) {
            if ((local_1f8.ArrayNum !=
                 (uint)*(ushort *)(pFVar26 + 0xc) * (uint)*(ushort *)(pFVar26 + 10)) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1838201463877139720>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                                   ,0x2f8,"View.Num() == Register.GetTotalElementCount()"), bVar9))
            {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar20 = *(uint *)(pFVar26 + 4);
            if ((int)uVar20 < (this->Data).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar18 = *(int *)(pFVar26 + 0x1c);
            pFVar16 = (this->Data).AllocatorInstance.Data + (int)uVar20;
            if (iVar18 != -1) {
              if (((iVar18 < 0) || ((this->ScriptStructs).ArrayNum <= iVar18)) &&
                 (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<379838571126718949>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryDeprecated.h"
                                     ,0x1e5,"ScriptStructs.IsValidIndex(Register.ScriptStructIndex)"
                                    ), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar20 = *(uint *)(pFVar26 + 0x1c);
              uVar19 = 0;
              if ((int)uVar20 < (this->ScriptStructs).ArrayNum) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              this_00 = *(UScriptStruct **)
                         ((this->ScriptStructs).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
              if ((this_00 != (UScriptStruct *)0x0) && (this->bEncounteredErrorDuringLoad == false))
              {
                iVar18 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
                if ((((int)this_00->_padding_ + -1 + iVar18 & ~(iVar18 - 1U)) !=
                     (uint)*(ushort *)(pFVar26 + 8)) &&
                   (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_1838201463877139714>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                                       ,0x2fe,
                                       "ScriptStruct->GetStructureSize() == Register.ElementSize"),
                   bVar9)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar24 = 0;
                if ((uint)*(ushort *)(pFVar26 + 0xc) * (uint)*(ushort *)(pFVar26 + 10) != 0) {
                  uVar20 = 0;
                  do {
                    FOutputDevice::FOutputDevice(&local_110);
                    local_110._padding_ =
                         (longlong)&___7FRigVMMemoryContainerImportErrorContext__6B_;
                    local_100 = 0;
                    local_f8 = (FName)this_00->_padding_;
                    ::FName::ToString(&local_f8,&local_78);
                    if ((local_1f8.ArrayNum <= (int)uVar20) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (*(int *)(local_1f8.AllocatorInstance.Data + (ulonglong)uVar20 * 0x10 + 8) ==
                        0) {
                      pwVar17 = L"";
                    }
                    else {
                      pwVar17 = *(wchar_t **)
                                 (local_1f8.AllocatorInstance.Data + (ulonglong)uVar20 * 0x10);
                    }
                    UScriptStruct::ImportText
                              (this_00,pwVar17,pFVar16,(UObject *)0x0,0,&local_110,&local_78,true);
                    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_78.Data.AllocatorInstance.Data);
                    }
                    if (0 < local_100) {
                      this->bEncounteredErrorDuringLoad = true;
                      FOutputDevice::~FOutputDevice(&local_110);
                      break;
                    }
                    pFVar16 = pFVar16 + *(ushort *)(pFVar26 + 8);
                    FOutputDevice::~FOutputDevice(&local_110);
                    uVar24 = uVar24 + 1;
                    uVar20 = (uint)uVar24;
                  } while (uVar20 < (uint)*(ushort *)(pFVar26 + 0xc) *
                                    (uint)*(ushort *)(pFVar26 + 10));
                }
              }
            }
          }
          DestructItems<FString,int>((FString *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum)
          ;
          if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.AllocatorInstance.Data);
          }
        }
      }
LAB_14a0fbf36:
      uVar25 = uVar25 + 1;
      local_208 = local_208 + 1;
    } while ((int)uVar25 < (this->Registers).ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14a10af40

void __thiscall FRigVMMemoryContainer::Reset(FRigVMMemoryContainer *this)

{
  int *piVar1;
  FRigVMRegisterOffset *pFVar2;
  int iVar3;
  
  if ((0 < (this->Data).ArrayNum) && (iVar3 = 0, 0 < (this->Registers).ArrayNum)) {
    do {
      Destroy(this,iVar3,-1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (this->Registers).ArrayNum);
  }
  (this->Data).ArrayNum = 0;
  if ((this->Data).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Data).AllocatorInstance,0,&(this->Data).ArrayMax);
  }
  (this->Registers).ArrayNum = 0;
  if ((this->Registers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,&(this->Registers).AllocatorInstance,0,&(this->Registers).ArrayMax);
  }
  piVar1 = &(this->RegisterOffsets).ArrayMax;
  pFVar2 = (FRigVMRegisterOffset *)(this->RegisterOffsets).AllocatorInstance.Data;
  iVar3 = (this->RegisterOffsets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMRegisterOffset,int>(pFVar2,iVar3);
    (this->RegisterOffsets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&(this->RegisterOffsets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMRegisterOffset,int>(pFVar2,iVar3);
    (this->RegisterOffsets).ArrayNum = 0;
  }
  (this->ScriptStructs).ArrayNum = 0;
  if ((this->ScriptStructs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ScriptStructs).AllocatorInstance,0,&(this->ScriptStructs).ArrayMax);
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->NameMap);
  return;
}

// Save @ 14a10dab0

void __thiscall FRigVMMemoryContainer::Save(FRigVMMemoryContainer *this,FArchive *param_1)

{
  return;
}

// Serialize @ 14a10dfe0

void __thiscall FRigVMMemoryContainer::Serialize(FRigVMMemoryContainer *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (((1 < iVar3) && ((param_1->field_0x28 & 4) == 0)) && ((param_1->field_0x2b & 5) == 0)) {
    if ((param_1->field_0x28 & 1) != 0) {
      Load(this,param_1);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                       ,0x22e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateRegisters @ 14a1155e0

void __thiscall FRigVMMemoryContainer::UpdateRegisters(FRigVMMemoryContainer *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  TArray<FRigVMRegister,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  UScriptStruct *this_00;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int local_res10;
  uint local_res18 [2];
  uint local_res20;
  TPairInitializer<FName_const_&,int_const_&> local_88;
  TArray<FRigVMRegister,TSizedDefaultAllocator<32>_> *local_78;
  FScriptContainerElement *local_70;
  uint *local_68;
  FString local_60 [2];
  
  iVar14 = 0;
  local_res10 = 0;
  local_78 = &this->Registers;
  local_res20 = 0;
  if (0 < (this->Registers).ArrayNum) {
    local_88.Value = (int *)0x0;
    do {
      pTVar4 = local_78;
      piVar10 = local_88.Value;
      uVar15 = local_res20;
      uVar9 = 0;
      if ((int)local_res20 < local_78->ArrayNum) {
        uVar9 = ~local_res20 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = 4;
      pFVar16 = (pTVar4->AllocatorInstance).Data + (longlong)piVar10;
      *(int *)(pFVar16 + 4) = *(int *)(pFVar16 + 4) + iVar14;
      if (((pFVar16[0x21] == (FScriptContainerElement)0x0) &&
          (*pFVar16 != (FScriptContainerElement)0x2)) && (*pFVar16 != (FScriptContainerElement)0x1))
      {
        this_00 = GetScriptStruct(this,uVar15,-1);
        piVar10 = local_88.Value;
        if (this_00 == (UScriptStruct *)0x0) goto LAB_14a115770;
        if (this_00->bPrepareCppStructOpsCompleted == false) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,local_60,(UObject *)0x0);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bPrepareCppStructOpsCompleted",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x8f6,
                             L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                            );
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        piVar10 = local_88.Value;
        if ((this_00->CppStructOps == (ICppStructOps *)0x0) ||
           (iVar11 = this_00->CppStructOps->Alignment, iVar11 != 0)) goto LAB_14a115770;
      }
      else {
        iVar11 = 8;
LAB_14a115770:
        if ((pFVar16[0x21] != (FScriptContainerElement)0x0) || (*(short *)(pFVar16 + 10) != 0)) {
          uVar9 = *(uint *)(pFVar16 + 4);
          if (((int)uVar9 < 0) || ((this->Data).ArrayNum <= (int)uVar9)) {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1838201463877139178>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                               ,0x516,
                               "Data.IsValidIndex(static_cast<int32>(Register.GetWorkByteIndex()))")
            ;
            piVar10 = local_88.Value;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pTVar1 = &this->Data;
            piVar2 = &(this->Data).ArrayNum;
            uVar8 = 0;
            if ((int)uVar9 < (this->Data).ArrayNum) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar7 = (pTVar1->AllocatorInstance).Data + (int)uVar9;
            if ((pFVar16[0xe] != (FScriptContainerElement)0x0) &&
               (((ulonglong)pFVar7 & (longlong)iVar11 - 1U) != 0)) {
              uVar13 = (uint)(byte)pFVar16[0xe];
              uVar8 = *(int *)(pFVar16 + 4) - uVar13;
              uVar9 = 0;
              if (*(int *)(pFVar16 + 4) <= *piVar2) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar7 = (pTVar1->AllocatorInstance).Data + (int)uVar8;
              iVar6 = (*piVar2 - uVar8) - uVar13;
              if (iVar6 != 0) {
                memmove(pFVar7,pFVar7 + uVar13,(longlong)iVar6);
              }
              *piVar2 = *piVar2 - uVar13;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,&pTVar1->AllocatorInstance,*piVar2,&(this->Data).ArrayMax);
              iVar14 = iVar14 - (uint)(byte)pFVar16[0xe];
              uVar8 = *(int *)(pFVar16 + 4) - (uint)(byte)pFVar16[0xe];
              pFVar16[0xe] = (FScriptContainerElement)0x0;
              *(uint *)(pFVar16 + 4) = uVar8;
              uVar9 = 0;
              if ((int)uVar8 < *piVar2) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar7 = (pTVar1->AllocatorInstance).Data + (int)uVar8;
              local_res10 = iVar14;
            }
            piVar10 = local_88.Value;
            if (((ulonglong)pFVar7 & (longlong)iVar11 - 1U) != 0) {
              iVar14 = local_res10;
              do {
                iVar12 = *(int *)(pFVar16 + 4) - (uint)(byte)pFVar16[0xe];
                iVar6 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (1,1,1,&pTVar1->AllocatorInstance,piVar2,&(this->Data).ArrayMax);
                pFVar7 = (pTVar1->AllocatorInstance).Data + iVar12;
                memmove(pFVar7 + 1,pFVar7,(longlong)(iVar6 - iVar12));
                iVar14 = iVar14 + 1;
                (pTVar1->AllocatorInstance).Data[iVar12] = (FScriptContainerElement)0x0;
                pFVar16[0xe] = (FScriptContainerElement)((char)pFVar16[0xe] + '\x01');
                uVar9 = *(int *)(pFVar16 + 4) + 1;
                *(uint *)(pFVar16 + 4) = uVar9;
                uVar15 = 0;
                if ((int)uVar9 < *piVar2) {
                  uVar15 = ~uVar9 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                piVar10 = local_88.Value;
                uVar15 = local_res20;
                local_res10 = iVar14;
              } while (((longlong)iVar11 - 1U &
                       (ulonglong)((pTVar1->AllocatorInstance).Data + (int)uVar9)) != 0);
            }
          }
        }
      }
      local_res20 = uVar15 + 1;
      local_88.Value = piVar10 + 9;
    } while ((int)local_res20 < (this->Registers).ArrayNum);
  }
  pTVar4 = local_78;
  piVar10 = &(this->Registers).ArrayNum;
  if (this->bUseNameMap != false) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->NameMap);
    local_res18[0] = 0;
    if (0 < *piVar10) {
      do {
        uVar15 = local_res18[0];
        uVar9 = 0;
        if ((int)local_res18[0] < pTVar4->ArrayNum) {
          uVar9 = ~local_res18[0] >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_70 = (pTVar4->AllocatorInstance).Data + ((longlong)(int)uVar15 * 9 + 5) * 4;
        local_68 = local_res18;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&this->NameMap,&local_88,(bool *)&local_70);
        local_res18[0] = local_res18[0] + 1;
      } while ((int)local_res18[0] < *piVar10);
    }
  }
  return;
}

