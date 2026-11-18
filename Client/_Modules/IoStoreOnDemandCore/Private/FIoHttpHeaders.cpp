// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 8

// Add @ 144589e70

FIoHttpHeaders * __thiscall
UE::FIoHttpHeaders::Add(FIoHttpHeaders *this,FAnsiString *param_1,FAnsiString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FIoHttpHeaders *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Headers).AllocatorInstance.Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)(this->Headers).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoHttpHeaders *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Headers).ArrayNum;
  if (iVar3 == (this->Headers).ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->Headers).ArrayMax);
  }
  (this->Headers).ArrayNum = iVar3 + 1;
  pFVar5 = (this->Headers).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (param_1->Data).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  pFVar5 = (this->Headers).AllocatorInstance.Data;
  if ((pFVar5 <= param_2) && (param_2 < pFVar5 + (longlong)(this->Headers).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoHttpHeaders *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Headers).ArrayNum;
  if (iVar3 == (this->Headers).ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->Headers).ArrayMax);
  }
  (this->Headers).ArrayNum = iVar3 + 1;
  pFVar5 = (this->Headers).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (param_2->Data).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  return this;
}

// Add @ 14458a010

FIoHttpHeaders * __thiscall
UE::FIoHttpHeaders::Add(FIoHttpHeaders *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FAnsiString local_28;
  
  iVar4 = (this->Headers).ArrayNum;
  if (iVar4 == (this->Headers).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->Headers).ArrayMax);
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pcVar2 = param_1->DataPtr;
  (this->Headers).ArrayNum = iVar4 + 1;
  pFVar6 = (this->Headers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar6[8].field_0x0 = 0;
  pFVar5 = (FScriptContainerElement *)FAnsiString::ConstructFromPtrSize(&local_28,pcVar2,(int)uVar1)
  ;
  if (pFVar6 != pFVar5) {
    pFVar3 = (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
             Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
         (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data;
    (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[8].field_0x0 = *(int *)&pFVar5[8].field_0x0;
    *(int *)&pFVar6[0xc].field_0x0 = *(int *)&pFVar5[0xc].field_0x0;
    *(undefined8 *)&pFVar5[8].field_0x0 = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar4 = (this->Headers).ArrayNum;
  if (iVar4 == (this->Headers).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->Headers).ArrayMax);
  }
  uVar1 = *(undefined8 *)&param_2->Size;
  pcVar2 = param_2->DataPtr;
  (this->Headers).ArrayNum = iVar4 + 1;
  pFVar6 = (this->Headers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar6[8].field_0x0 = 0;
  pFVar5 = (FScriptContainerElement *)FAnsiString::ConstructFromPtrSize(&local_28,pcVar2,(int)uVar1)
  ;
  if (pFVar6 != pFVar5) {
    pFVar3 = (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
             Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
         (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data;
    (((TArray<char,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[8].field_0x0 = *(int *)&pFVar5[8].field_0x0;
    *(int *)&pFVar6[0xc].field_0x0 = *(int *)&pFVar5[0xc].field_0x0;
    *(undefined8 *)&pFVar5[8].field_0x0 = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// Create @ 14458a5e0

FIoHttpHeaders * __cdecl
UE::FIoHttpHeaders::Create
          (FIoHttpHeaders *__return_storage_ptr__,
          TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIoHttpHeaders *pFVar3;
  
  if ((param_1->ArrayNum != 0) && ((param_1->ArrayNum & 1U) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Headers.IsEmpty() || ((Headers.Num() % 2) == 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoHttpHeaders *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Headers).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Headers).ArrayNum = param_1->ArrayNum;
  (__return_storage_ptr__->Headers).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Create @ 14458a660

FIoHttpHeaders * __cdecl
UE::FIoHttpHeaders::Create
          (FIoHttpHeaders *__return_storage_ptr__,FAnsiString *param_1,FAnsiString *param_2)

{
  (__return_storage_ptr__->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Headers).ArrayNum = 0;
  (__return_storage_ptr__->Headers).ArrayMax = 0;
  Add(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Create @ 14458a690

FIoHttpHeaders * __cdecl
UE::FIoHttpHeaders::Create
          (FIoHttpHeaders *__return_storage_ptr__,TStringView<char> *param_1,
          TStringView<char> *param_2)

{
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Headers).ArrayNum = 0;
  (__return_storage_ptr__->Headers).ArrayMax = 0;
  Add(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// Get @ 14458c560

TStringView<char> * __thiscall
UE::FIoHttpHeaders::Get
          (FIoHttpHeaders *this,TStringView<char> *__return_storage_ptr__,FAnsiString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<char> local_18;
  
  local_18.DataPtr = (char *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  Get(this,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// Get @ 14458c5b0

TStringView<char> * __thiscall
UE::FIoHttpHeaders::Get
          (FIoHttpHeaders *this,TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  TStringView<char> *pTVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar1 = (this->Headers).ArrayNum;
  uVar9 = 0;
  uVar11 = uVar9;
  uVar13 = uVar9;
  if (0 < iVar1) {
    do {
      uVar10 = (uint)uVar11;
      uVar4 = 0;
      if ((int)uVar10 < (this->Headers).ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar2)();
        return pTVar7;
      }
      pFVar8 = (this->Headers).AllocatorInstance.Data;
      iVar6 = *(int *)(pFVar8 + uVar13 + 8);
      uVar4 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar4 = 0;
      }
      uVar12 = (uint)*(undefined8 *)&param_1->Size;
      if (uVar4 == uVar12) {
        if ((uVar4 != 0) && (uVar12 != 0)) {
          uVar5 = uVar12;
          if ((int)uVar4 < (int)uVar12) {
            uVar5 = uVar4;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            (*(char **)(pFVar8 + uVar13),param_1->DataPtr,(longlong)(int)uVar5);
          if (iVar6 != 0) goto LAB_14458c691;
        }
        if (uVar4 == uVar12) {
          uVar10 = uVar10 + 1;
          uVar4 = 0;
          if ((int)uVar10 < (this->Headers).ArrayNum) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TStringView<char> *)(*pcVar2)();
            return pTVar7;
          }
          pFVar8 = (this->Headers).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
          __return_storage_ptr__->DataPtr = *(char **)pFVar8;
          iVar1 = *(int *)(pFVar8 + 8);
          uVar4 = iVar1 - 1;
          if (iVar1 == 0) {
            uVar4 = 0;
          }
          __return_storage_ptr__->Size = uVar4;
          return __return_storage_ptr__;
        }
      }
LAB_14458c691:
      uVar9 = uVar9 + 2;
      uVar11 = (ulonglong)(uVar10 + 2);
      uVar13 = uVar13 + 0x20;
    } while ((longlong)uVar9 < (longlong)iVar1);
  }
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (char *)0x0;
  return __return_storage_ptr__;
}

// ToArray @ 144593a30

TArray<FAnsiString,TSizedDefaultAllocator<32>_> * __thiscall
UE::FIoHttpHeaders::ToArray
          (FIoHttpHeaders *this,
          TArray<FAnsiString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->Headers).AllocatorInstance.Data;
  (this->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (this->Headers).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->Headers).ArrayMax;
  (this->Headers).ArrayNum = 0;
  (this->Headers).ArrayMax = 0;
  return __return_storage_ptr__;
}

