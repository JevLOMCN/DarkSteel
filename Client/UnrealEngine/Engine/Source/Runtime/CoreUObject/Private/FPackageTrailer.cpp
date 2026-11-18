// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 18

// CreateFooter @ 142137560

FFooter * __thiscall
UE::FPackageTrailer::CreateFooter(FPackageTrailer *this,FFooter *__return_storage_ptr__)

{
  uint uVar1;
  ulong64 uVar2;
  
  uVar1 = (this->Header).HeaderLength;
  uVar2 = (this->Header).PayloadsDataLength;
  __return_storage_ptr__->Tag = 0x29bfca045138de76;
  __return_storage_ptr__->PackageTag = 0x9e2a83c1;
  __return_storage_ptr__->TrailerLength = uVar2 + 0x14 + (ulonglong)uVar1;
  return __return_storage_ptr__;
}

// FindPayloadOffsetInFile @ 14213b000

long64 __thiscall
UE::FPackageTrailer::FindPayloadOffsetInFile(FPackageTrailer *this,FIoHash *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  long64 lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  
  puVar4 = param_1->Hash;
  while( true ) {
    if ((FIoHash *)puVar4 == param_1 + 1) {
      return -1;
    }
    if (*(int *)puVar4 != 0) break;
    puVar4 = puVar4 + 4;
  }
  pFVar7 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)(this->Header).PayloadLookupTable.ArrayNum * 0x38;
  for (; pFVar7 != pFVar6; pFVar7 = pFVar7 + 0x38) {
    if (((*(longlong *)pFVar7 == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar7 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar7 + 0x10) == *(int *)(param_1->Hash + 0x10))) goto LAB_14213b079;
  }
  pFVar7 = (FScriptContainerElement *)0x0;
LAB_14213b079:
  if ((this->TrailerPositionInFile == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrailerPositionInFile != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x2ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  if (((this->Header).PayloadsDataLength == 0xffffffffffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.PayloadsDataLength != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x2ee,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  if ((pFVar7 == (FScriptContainerElement *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x2ef,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  FVar1 = pFVar7[0x34];
  if (FVar1 == (FScriptContainerElement)0x0) {
    return (ulonglong)(this->Header).HeaderLength + *(longlong *)(pFVar7 + 0x18) +
           this->TrailerPositionInFile;
  }
  if (FVar1 != (FScriptContainerElement)0x1) {
    if ((FVar1 != (FScriptContainerElement)0x2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                           ,0x2fd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      lVar5 = (*pcVar2)();
      return lVar5;
    }
    return -1;
  }
  return *(longlong *)(pFVar7 + 0x18);
}

// FindPayloadSizeOnDisk @ 14213b180

long64 __thiscall UE::FPackageTrailer::FindPayloadSizeOnDisk(FPackageTrailer *this,FIoHash *param_1)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  puVar1 = param_1->Hash;
  while( true ) {
    if ((FIoHash *)puVar1 == param_1 + 1) {
      return -1;
    }
    if (*(int *)puVar1 != 0) break;
    puVar1 = puVar1 + 4;
  }
  pFVar2 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->Header).PayloadLookupTable.ArrayNum * 0x38;
  if (pFVar2 == pFVar3) {
    return -1;
  }
  while (((*(longlong *)pFVar2 != *(longlong *)param_1->Hash ||
          (*(longlong *)(pFVar2 + 8) != *(longlong *)(param_1->Hash + 8))) ||
         (*(int *)(pFVar2 + 0x10) != *(int *)(param_1->Hash + 0x10)))) {
    pFVar2 = pFVar2 + 0x38;
    if (pFVar2 == pFVar3) {
      return -1;
    }
  }
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return -1;
  }
  return *(longlong *)(pFVar2 + 0x20);
}

// FindPayloadStatus @ 14213b200

EPayloadStatus __thiscall
UE::FPackageTrailer::FindPayloadStatus(FPackageTrailer *this,FIoHash *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  EPayloadStatus EVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar5 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)(this->Header).PayloadLookupTable.ArrayNum * 0x38;
  while( true ) {
    if (pFVar5 == pFVar6) {
      return NotFound;
    }
    if (((*(longlong *)pFVar5 == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar5 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar5 + 0x10) == *(int *)(param_1->Hash + 0x10))) break;
    pFVar5 = pFVar5 + 0x38;
  }
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    return NotFound;
  }
  FVar1 = pFVar5[0x34];
  if (FVar1 == (FScriptContainerElement)0x0) {
    return StoredLocally;
  }
  if (FVar1 != (FScriptContainerElement)0x1) {
    if (FVar1 == (FScriptContainerElement)0x2) {
      return StoredVirtualized;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                       ,0x2e1,L"");
    if (!bVar3) {
      return NotFound;
    }
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return StoredAsReference;
}

// ForEachPayload @ 14213bda0

void __thiscall
UE::FPackageTrailer::ForEachPayload
          (FPackageTrailer *this,
          TFunctionRef<void___cdecl(FIoHash_const_&,unsigned___int64,unsigned___int64,UE::EPayloadAccessMode,UE::Virtualization::EPayloadFilterReason)>
          *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement local_res8 [16];
  undefined2 local_res18 [4];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  iVar1 = (this->Header).PayloadLookupTable.ArrayNum;
  pFVar2 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Header).PayloadLookupTable.ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res18[0] = *(undefined2 *)(pFVar2 + 0x32);
    local_res8[0] = pFVar2[0x34];
    local_res20 = *(undefined8 *)(pFVar2 + 0x28);
    local_38[0] = *(undefined8 *)(pFVar2 + 0x20);
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,pFVar2,local_38,&local_res20,local_res8,
               local_res18);
    pFVar2 = pFVar2 + 0x38;
  }
  return;
}

// GetNumPayloads @ 14213db80

int __thiscall UE::FPackageTrailer::GetNumPayloads(FPackageTrailer *this,EPayloadFilter param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  iVar5 = 0;
  if (param_1 == CanVirtualize) {
    pFVar6 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
    iVar1 = (this->Header).PayloadLookupTable.ArrayNum;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x38;
    iVar3 = iVar5;
    while( true ) {
      iVar5 = iVar3;
      if ((this->Header).PayloadLookupTable.ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar6 == pFVar7) break;
      if ((pFVar6[0x34] == (FScriptContainerElement)0x0) && (*(short *)(pFVar6 + 0x32) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      pFVar6 = pFVar6 + 0x38;
      iVar3 = iVar5 + 1;
      if (!bVar4) {
        iVar3 = iVar5;
      }
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                       ,0x398,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return iVar5;
}

// GetNumPayloads @ 14213dc40

int __thiscall
UE::FPackageTrailer::GetNumPayloads(FPackageTrailer *this,EPayloadStorageType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  iVar7 = 0;
  if (param_1 == Any) {
    return (this->Header).PayloadLookupTable.ArrayNum;
  }
  if (param_1 == Local) {
    iVar2 = (this->Header).PayloadLookupTable.ArrayNum;
    pFVar3 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
    pFVar8 = pFVar3;
    iVar5 = iVar7;
    while( true ) {
      iVar7 = iVar5;
      if ((this->Header).PayloadLookupTable.ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar8 == pFVar3 + (longlong)iVar2 * 0x38) break;
      pFVar9 = pFVar8 + 0x38;
      pFVar1 = pFVar8 + 0x34;
      pFVar8 = pFVar9;
      iVar5 = iVar7 + 1;
      if (*pFVar1 != (FScriptContainerElement)0x0) {
        iVar5 = iVar7;
      }
    }
  }
  else if (param_1 == Referenced) {
    iVar2 = (this->Header).PayloadLookupTable.ArrayNum;
    pFVar3 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
    pFVar8 = pFVar3;
    iVar5 = iVar7;
    while( true ) {
      iVar7 = iVar5;
      if ((this->Header).PayloadLookupTable.ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar8 == pFVar3 + (longlong)iVar2 * 0x38) break;
      pFVar9 = pFVar8 + 0x38;
      pFVar1 = pFVar8 + 0x34;
      pFVar8 = pFVar9;
      iVar5 = iVar7 + 1;
      if (*pFVar1 != (FScriptContainerElement)0x1) {
        iVar5 = iVar7;
      }
    }
  }
  else if (param_1 == Virtualized) {
    iVar2 = (this->Header).PayloadLookupTable.ArrayNum;
    pFVar3 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
    pFVar8 = pFVar3;
    iVar5 = iVar7;
    while( true ) {
      iVar7 = iVar5;
      if ((this->Header).PayloadLookupTable.ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar3 + (longlong)iVar2 * 0x38) break;
      pFVar9 = pFVar8 + 0x38;
      pFVar1 = pFVar8 + 0x34;
      pFVar8 = pFVar9;
      iVar5 = iVar7 + 1;
      if (*pFVar1 != (FScriptContainerElement)0x2) {
        iVar5 = iVar7;
      }
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                       ,0x36c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  return iVar7;
}

// GetPayloadInfo @ 14213e020

FPayloadInfo * __thiscall
UE::FPackageTrailer::GetPayloadInfo
          (FPackageTrailer *this,FPayloadInfo *__return_storage_ptr__,FIoHash *param_1)

{
  FScriptContainerElement FVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 uStack_f;
  undefined2 uStack_a;
  
  pFVar6 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)(this->Header).PayloadLookupTable.ArrayNum * 0x38;
  do {
    if (pFVar6 == pFVar7) {
LAB_14213e05c:
      __return_storage_ptr__->AccessMode = Local;
      __return_storage_ptr__->field_0x19 = 0;
      __return_storage_ptr__->Flags = None;
      __return_storage_ptr__->FilterFlags = None;
      *(undefined2 *)&__return_storage_ptr__->field_0x1e = 0;
      __return_storage_ptr__->OffsetInFile = -1;
      __return_storage_ptr__->CompressedSize = 0xffffffffffffffff;
      __return_storage_ptr__->RawSize = 0xffffffffffffffff;
      return __return_storage_ptr__;
    }
    if (((*(longlong *)pFVar6 == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar6 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar6 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        uVar4 = *(ulong64 *)(pFVar6 + 0x20);
        uVar5 = *(ulong64 *)(pFVar6 + 0x28);
        FVar1 = pFVar6[0x34];
        uVar2 = *(undefined2 *)(pFVar6 + 0x30);
        uVar3 = *(undefined2 *)(pFVar6 + 0x32);
        __return_storage_ptr__->OffsetInFile = *(longlong *)(pFVar6 + 0x18);
        __return_storage_ptr__->CompressedSize = uVar4;
        __return_storage_ptr__->RawSize = uVar5;
        __return_storage_ptr__->AccessMode = (EPayloadAccessMode)FVar1;
        __return_storage_ptr__->field_0x19 = uStack_f;
        __return_storage_ptr__->Flags = uVar2;
        __return_storage_ptr__->FilterFlags = uVar3;
        *(undefined2 *)&__return_storage_ptr__->field_0x1e = uStack_a;
        return __return_storage_ptr__;
      }
      goto LAB_14213e05c;
    }
    pFVar6 = pFVar6 + 0x38;
  } while( true );
}

// GetPayloads @ 14213e0e0

TArray<FIoHash,TSizedDefaultAllocator<32>_> * __thiscall
UE::FPackageTrailer::GetPayloads
          (FPackageTrailer *this,TArray<FIoHash,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,EPayloadFilter param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  TArray<FIoHash,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->Header).PayloadLookupTable.ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->Header).PayloadLookupTable.ArrayNum;
  pFVar11 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x38;
  while( true ) {
    if ((this->Header).PayloadLookupTable.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    if (param_1 == CanVirtualize) {
      if ((pFVar11[0x34] == (FScriptContainerElement)0x0) && (*(short *)(pFVar11 + 0x32) == 0)) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)*piVar1 * 0x14)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<FIoHash,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x414,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        uVar7 = *(undefined8 *)(pFVar11 + 8);
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar9 * 0x14;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar11;
        *(undefined8 *)(pFVar4 + 8) = uVar7;
        *(undefined4 *)(pFVar5 + (longlong)iVar9 * 0x14 + 0x10) = *(undefined4 *)(pFVar11 + 0x10);
      }
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,899,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<FIoHash,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar10;
      }
    }
    pFVar11 = pFVar11 + 0x38;
  }
  return __return_storage_ptr__;
}

// GetPayloads @ 14213e290

TArray<FIoHash,TSizedDefaultAllocator<32>_> * __thiscall
UE::FPackageTrailer::GetPayloads
          (FPackageTrailer *this,TArray<FIoHash,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,EPayloadStorageType param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  TArray<FIoHash,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->Header).PayloadLookupTable.ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->Header).PayloadLookupTable.ArrayNum;
  pFVar11 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x38;
  do {
    if ((this->Header).PayloadLookupTable.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return __return_storage_ptr__;
    }
    if (param_1 == Any) {
LAB_14213e376:
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)*piVar1 * 0x14)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<FIoHash,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar4 = pFVar5 + (longlong)iVar9 * 0x14;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar4 + 8) = uVar7;
      *(undefined4 *)(pFVar5 + (longlong)iVar9 * 0x14 + 0x10) = *(undefined4 *)(pFVar11 + 0x10);
    }
    else if (param_1 == Local) {
      bVar8 = pFVar11[0x34] == (FScriptContainerElement)0x0;
LAB_14213e370:
      if (bVar8) goto LAB_14213e376;
    }
    else {
      if (param_1 == Virtualized) {
        bVar8 = pFVar11[0x34] == (FScriptContainerElement)0x2;
        goto LAB_14213e370;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x34e,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<FIoHash,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar10;
      }
    }
    pFVar11 = pFVar11 + 0x38;
  } while( true );
}

// GetTrailerLength @ 14213ec70

long64 __thiscall UE::FPackageTrailer::GetTrailerLength(FPackageTrailer *this)

{
  return (this->Header).PayloadsDataLength + 0x14 + (ulonglong)(this->Header).HeaderLength;
}

// LoadLocalPayload @ 1421444c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __thiscall
UE::FPackageTrailer::LoadLocalPayload
          (FPackageTrailer *this,FCompressedBuffer *__return_storage_ptr__,FIoHash *param_1,
          FArchive *param_2)

{
  FCompositeBuffer *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_48 [32];
  FCompressedBuffer local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar2 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->Header).PayloadLookupTable.ArrayNum * 0x38;
  do {
    if (pFVar2 == pFVar3) {
LAB_14214451a:
      pFVar1 = &__return_storage_ptr__->CompressedData;
      (pFVar1->Segments).AllocatorInstance.InlineData[0] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[1] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[2] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[3] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[4] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[5] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[6] = '\0';
      (pFVar1->Segments).AllocatorInstance.InlineData[7] = '\0';
      (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
           (ForElementType<FSharedBuffer>)0x0;
      (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
      (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
      return __return_storage_ptr__;
    }
    if (((*(longlong *)pFVar2 == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar2 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar2 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      if ((pFVar2 != (FScriptContainerElement *)0x0) &&
         (pFVar2[0x34] == (FScriptContainerElement)0x0)) {
        (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2);
        local_28.CompressedData.Segments.ArrayMax = 1;
        local_28.CompressedData.Segments.AllocatorInstance.SecondaryData =
             (ForElementType<FSharedBuffer>)0x0;
        local_28.CompressedData.Segments.ArrayNum = 0;
        ::operator<<(param_2,&local_28);
        FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
                  (&__return_storage_ptr__->CompressedData,&local_28.CompressedData);
        FCompositeBuffer::~FCompositeBuffer(&local_28.CompressedData);
        return __return_storage_ptr__;
      }
      goto LAB_14214451a;
    }
    pFVar2 = pFVar2 + 0x38;
  } while( true );
}

// TryLoad @ 1421533c0

/* WARNING: Enum "EPackageTrailerVersion": Some values do not have unique names */

bool __thiscall UE::FPackageTrailer::TryLoad(FPackageTrailer *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  long64 lVar10;
  ulonglong uVar11;
  EPayloadAccessMode EVar12;
  int iVar13;
  FLookupTableEntry *this_00;
  EPayloadAccessMode local_res8 [8];
  uint local_res10 [2];
  
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x229,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  lVar10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  this->TrailerPositionInFile = lVar10;
  iVar13 = 0;
  (this->Header).Tag = 0;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Header,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&(this->Header).Tag);
    }
  }
  else {
    (this->Header).Tag = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_1->field_0x2a;
  if ((this->Header).Tag == 0xd1c43b2e80a5f697) {
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      piVar3 = &(this->Header).Version;
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
      }
    }
    else {
      (this->Header).Version = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      puVar4 = &(this->Header).HeaderLength;
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar4);
      }
    }
    else {
      (this->Header).HeaderLength = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&(this->Header).PayloadsDataLength);
    uVar11 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    if ((ulonglong)(this->Header).HeaderLength + (this->Header).PayloadsDataLength +
        this->TrailerPositionInFile <= uVar11) {
      local_res8[0] = Local;
      if ((this->Header).Version == 0) {
        plVar5 = *(longlong **)&param_1->field_0x8;
        if ((EPayloadAccessMode *)plVar5[1] < (EPayloadAccessMode *)*plVar5 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        }
        else {
          local_res8[0] = *(EPayloadAccessMode *)*plVar5;
          *plVar5 = *plVar5 + 1;
        }
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res10[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if ((param_1->field_0x29 & 2) != 0) {
        return false;
      }
      if (local_res10[0] * 0x31 <= (this->Header).HeaderLength) {
        if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
        }
        piVar3 = &(this->Header).PayloadLookupTable.ArrayMax;
        if ((this->Header).PayloadLookupTable.ArrayMax < (int)local_res10[0]) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,local_res10[0],&(this->Header).PayloadLookupTable.AllocatorInstance,
                     (this->Header).PayloadLookupTable.ArrayNum,piVar3);
        }
        if (0 < (int)local_res10[0]) {
          do {
            iVar9 = (this->Header).PayloadLookupTable.ArrayNum;
            if (iVar9 == (this->Header).PayloadLookupTable.ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&(this->Header).PayloadLookupTable.AllocatorInstance,piVar3);
            }
            (this->Header).PayloadLookupTable.ArrayNum = iVar9 + 1;
            this_00 = (FLookupTableEntry *)
                      ((this->Header).PayloadLookupTable.AllocatorInstance.Data +
                      (longlong)iVar9 * 0x38);
            DefaultConstructItems<UE::Private::FLookupTableEntry,int>(this_00,1);
            UE::Private::FLookupTableEntry::Serialize(this_00,param_1,(this->Header).Version);
            if ((this_00->AccessMode != Virtualized) &&
               ((this_00->OffsetInFile < 0 ||
                ((this_00->AccessMode == Local &&
                 ((this->Header).PayloadsDataLength <
                  this_00->OffsetInFile + this_00->CompressedSize)))))) goto LAB_1421536bb;
            if ((this->Header).Version == 0) {
              EVar12 = Virtualized;
              if (this_00->OffsetInFile != -1) {
                EVar12 = local_res8[0];
              }
              this_00->AccessMode = EVar12;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)local_res10[0]);
        }
        return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
      }
    }
LAB_1421536bb:
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return false;
}

// TryLoadBackwards @ 1421536f0

bool __thiscall UE::FPackageTrailer::TryLoadBackwards(FPackageTrailer *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulong64 local_28;
  ulong64 local_20;
  uint local_18 [4];
  
  if ((param_1->field_0x28 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                       ,0x270,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar5 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (0 < lVar5 + -0x14) {
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_28 = 0;
    local_20 = 0;
    local_18[0] = 0;
    if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_28);
      }
    }
    else {
      local_28 = *(ulong64 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_20,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_20);
      }
    }
    else {
      local_20 = *(ulong64 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_18);
      }
    }
    else {
      local_18[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((param_1->field_0x29 & 2) == 0) {
      if (local_18[0] == 0x9e2a83c1) {
        if (local_28 == 0x29bfca045138de76) {
          lVar5 = *(longlong *)param_1;
          lVar6 = (**(code **)(lVar5 + 0x28))(param_1);
          (**(code **)(lVar5 + 0x1b8))(param_1,lVar6 - local_20);
          if ((param_1->field_0x29 & 2) == 0) {
            bVar3 = TryLoad(this,param_1);
            return bVar3;
          }
        }
      }
      else {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
  }
  return false;
}

// TryLoadFromArchive @ 1421538b0

bool __cdecl UE::FPackageTrailer::TryLoadFromArchive(FArchive *param_1,FPackageTrailer *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = (**(code **)(lVar1 + 0x30))();
  (**(code **)(lVar1 + 0x1b8))(param_1,uVar2);
  bVar3 = TryLoadBackwards(param_2,param_1);
  return bVar3;
}

// TryLoadFromFile @ 142153900

bool __cdecl UE::FPackageTrailer::TryLoadFromFile(FString *param_1,FPackageTrailer *param_2)

{
  longlong lVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  
  pIVar3 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,pwVar6,0);
  if (pFVar4 != (FArchive *)0x0) {
    lVar1 = *(longlong *)pFVar4;
    uVar5 = (**(code **)(lVar1 + 0x30))(pFVar4);
    (**(code **)(lVar1 + 0x1b8))(pFVar4,uVar5);
    bVar2 = TryLoadBackwards(param_2,pFVar4);
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    return bVar2;
  }
  UE::`anonymous_namespace'::LogPackageOpenFailureMessage(param_1);
  return false;
}

// TryLoadFromPackage @ 1421539b0

bool __cdecl UE::FPackageTrailer::TryLoadFromPackage(FPackagePath *param_1,FPackageTrailer *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  IPackageResourceManager *pIVar5;
  FArchive *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  FString *pFVar9;
  undefined8 uVar10;
  FArchive *local_res18;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  FString local_28;
  FString local_18;
  
  if ((GPackageResourceManager == (IPackageResourceManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPackageResourceManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManager.cpp"
                         ,0x1a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pIVar5 = GPackageResourceManager;
  pcVar4 = *(code **)((longlong)*GPackageResourceManager + 0x48);
  pFVar9 = FPackagePath::GetPackageName(param_1,&local_28);
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  iVar1 = (pFVar9->Data).ArrayNum;
  iStack_30 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_30 = 0;
  }
  local_48 = SUB84(pFVar2,0);
  uStack_44 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_38 = local_48;
  uStack_34 = uStack_44;
  (*pcVar4)(pIVar5,&local_res18,0,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = local_res18;
  if (local_res18 == (FArchive *)0x0) {
    pFVar9 = FPackagePath::GetDebugName(param_1,&local_18);
    UE::`anonymous_namespace'::LogPackageOpenFailureMessage(pFVar9);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar7 = false;
  }
  else {
    lVar3 = *(longlong *)local_res18;
    uVar10 = (**(code **)(lVar3 + 0x30))(local_res18);
    (**(code **)(lVar3 + 0x1b8))(pFVar6,uVar10);
    bVar7 = TryLoadBackwards(param_2,local_res18);
  }
  if (local_res18 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_res18)(local_res18,1);
  }
  return bVar7;
}

// UpdatePayloadAsVirtualized @ 1421546d0

bool __thiscall
UE::FPackageTrailer::UpdatePayloadAsVirtualized(FPackageTrailer *this,FIoHash *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Header).PayloadLookupTable.ArrayNum * 0x38;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return false;
    }
    if (((*(longlong *)pFVar1 == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar1 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar1 + 0x10) == *(int *)(param_1->Hash + 0x10))) break;
    pFVar1 = pFVar1 + 0x38;
  }
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return false;
  }
  pFVar1[0x34] = (FScriptContainerElement)0x2;
  *(longlong *)(pFVar1 + 0x18) = -1;
  *(longlong *)(pFVar1 + 0x20) = -1;
  return true;
}

