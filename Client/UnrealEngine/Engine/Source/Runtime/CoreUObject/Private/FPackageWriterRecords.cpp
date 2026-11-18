// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// BeginPackage @ 141f29580

void __thiscall
FPackageWriterRecords::BeginPackage
          (FPackageWriterRecords *this,FPackage *param_1,FBeginPackageInfo *param_2)

{
  FName FVar1;
  FPackage *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
  *pTVar6;
  
  if (param_1 == (FPackage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Record",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                       ,0x15,L"TPackageWriterToSharedBuffer ConstructRecord must return non-null");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  FVar1 = param_2->PackageName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pTVar6 = TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
                       *)&this->Map,uVar5 + FVar1.Number,&param_2->PackageName);
  if (pTVar6->Ptr != (FPackage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Existing",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                       ,0x19,
                       L"IPackageWriter->BeginPackage must not be called twice without calling CommitPackage."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = pTVar6->Ptr;
  if ((pFVar2 != param_1) && (pTVar6->Ptr = param_1, pFVar2 != (FPackage *)0x0)) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  (param_1->Begin).PackageName = param_2->PackageName;
  ::FString::operator=(&(param_1->Begin).LooseFilePath,&param_2->LooseFilePath);
  return;
}

// FindAndRemoveRecordChecked @ 141f2ec70

TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
__thiscall
FPackageWriterRecords::FindAndRemoveRecordChecked(FPackageWriterRecords *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_> TVar3
  ;
  FName in_R8;
  
  *(undefined8 *)param_1 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  TMap<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
  ::RemoveAndCopyValue
            (&this->Map,in_R8,
             (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
              *)param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Record",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                       ,0x75,
                       L"IPackageWriter->BeginPackage must be called before any other functions on IPackageWriter"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (FPackage *)(*pcVar1)();
      return (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
              )TVar3.Ptr;
    }
  }
  return (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
          )param_1;
}

// FindRecordChecked @ 141f2ed00

FPackage * __thiscall
FPackageWriterRecords::FindRecordChecked(FPackageWriterRecords *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
  *pTVar3;
  FPackage *pFVar4;
  
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar3 = TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
           ::Find((TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
                   *)&this->Map,param_1);
  ReleaseSRWLockShared((PSRWLOCK)this);
  if ((pTVar3 == (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
                  *)0x0) || (pTVar3->Ptr == (FPackage *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Record && *Record",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                       ,0x6a,
                       L"IPackageWriter->BeginPackage must be called before any other functions on IPackageWriter"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPackage *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pTVar3->Ptr;
}

// ValidateCommit @ 141f50100

void __thiscall
FPackageWriterRecords::ValidateCommit
          (FPackageWriterRecords *this,FPackage *param_1,FCommitPackageInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [8];
  
  if ((param_2->WriteOptions & (ComputeHash|Write)) != None) {
    if (((param_2->Status == Success) && ((param_1->Packages).ArrayNum < 1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Info.Status != IPackageWriter::ECommitStatus::Success || Record.Packages.Num() > 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                           ,0x7e,
                           L"IPackageWriter->WritePackageData must be called before Commit if the Package save was successful."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2->Status == Success) {
      pFVar5 = (param_1->Packages).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)(param_1->Packages).ArrayNum * 0x48;
      for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 0x48) {
        if (*(short *)(pFVar5 + 0x2c) == 0) goto LAB_141f501aa;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Info.Status != IPackageWriter::ECommitStatus::Success || Record.Packages.FindByPredicate([](const FPackageWriterRecords::FWritePackage& Package) { return Package.Info.MultiOutputIndex == 0; })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                         ,0x80,
                         L"SavePackage must provide output 0 when saving multioutput packages.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_141f501aa:
    iVar2 = (param_1->BulkDatas).ArrayNum;
    pFVar5 = (param_1->BulkDatas).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((param_1->BulkDatas).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPackageWriterRecords::FBulkData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar1) break;
      pFVar5 = pFVar5 + 0x48;
    }
  }
  return;
}

// WriteAdditionalFile @ 141f507c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f5091d) */
/* WARNING: Removing unreachable block (ram,0x000141f50934) */
/* WARNING: Removing unreachable block (ram,0x000141f50960) */
/* WARNING: Removing unreachable block (ram,0x000141f50976) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageWriterRecords::WriteAdditionalFile
          (FPackageWriterRecords *this,FAdditionalFileInfo *param_1,FIoBuffer *param_2)

{
  TArray<FPackageWriterRecords::FAdditionalFile,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPackage *pFVar7;
  longlong lVar8;
  FName *pFVar9;
  undefined1 auStack_f8 [32];
  FName *local_d8;
  FName *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  FName local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  FString local_88;
  FName local_78;
  FString local_70;
  FName local_60;
  uint local_58;
  ushort local_54;
  FName local_50;
  FName local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar7 = FindRecordChecked(this,param_1->PackageName);
  pTVar1 = &pFVar7->AdditionalFiles;
  local_78 = param_1->PackageName;
  ::FString::FString(&local_70,&param_1->Filename);
  local_58 = *(uint *)((param_1->ChunkId).Id + 8);
  local_60 = *(FName *)(param_1->ChunkId).Id;
  local_54 = param_1->MultiOutputIndex;
  IoBufferToSharedBuffer((FIoBuffer *)&local_50);
  pFVar9 = (FName *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar9 <= &local_78) &&
     (lVar8 = (longlong)(pFVar7->AdditionalFiles).ArrayMax, &local_78 < pFVar9 + lVar8 * 6)) {
    local_c0 = (longlong)(pFVar7->AdditionalFiles).ArrayNum;
    local_b8 = 0x30;
    local_d8 = &local_78;
    local_d0 = pFVar9;
    local_c8 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar7->AdditionalFiles).ArrayNum;
  piVar2 = &(pFVar7->AdditionalFiles).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar7->AdditionalFiles).ArrayNum = iVar6 + 1;
  pFVar9 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30);
  *pFVar9 = local_78;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_70.Data.AllocatorInstance.Data;
  pFVar9[2].ComparisonIndex.Value = local_70.Data.ArrayNum;
  pFVar9[2].Number = local_70.Data.ArrayMax;
  pFVar9[3] = local_60;
  pFVar9[4].ComparisonIndex.Value = local_58;
  *(ushort *)&pFVar9[4].Number = local_54;
  pFVar9[5] = local_50;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8 = pFVar9[1];
  uVar3 = pFVar9[2].ComparisonIndex.Value;
  iStack_a0 = uVar3 - 1;
  if (uVar3 == 0) {
    iStack_a0 = 0;
  }
  local_98._12_4_ = uStack_9c;
  local_98.Size = iStack_a0;
  local_98.DataPtr = (wchar_t *)local_a8;
  CreateExternalFileChunkId((FIoChunkId *)&local_48,&local_98);
  if (((pFVar9[3] == (FName)FIoChunkId::InvalidChunkId.Id._0_8_) &&
      (pFVar9[4].ComparisonIndex.Value == FIoChunkId::InvalidChunkId.Id._8_4_)) ||
     ((pFVar9[3] == local_48 && (pFVar9[4].ComparisonIndex.Value == local_40)))) {
    pFVar9[3] = local_48;
    pFVar9[4].ComparisonIndex.Value = local_40;
  }
  else if (2 < (byte)LogPackageWriter._0_1_) {
    ::FName::ToString(&param_1->PackageName,&local_88);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageWriter);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WriteBulkData @ 141f50a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f50c46) */
/* WARNING: Removing unreachable block (ram,0x000141f50c54) */
/* WARNING: Removing unreachable block (ram,0x000141f50c6b) */
/* WARNING: Removing unreachable block (ram,0x000141f50c97) */
/* WARNING: Removing unreachable block (ram,0x000141f50cad) */

void __thiscall
FPackageWriterRecords::WriteBulkData
          (FPackageWriterRecords *this,FBulkDataInfo *param_1,FIoBuffer *param_2,
          TArray<FFileRegion,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackage *pFVar6;
  undefined1 auStackY_e8 [32];
  FName local_98;
  EType local_90;
  FString local_88;
  FName local_78;
  uint local_70;
  ushort local_6c;
  FIoBuffer local_68;
  FName local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar6 = FindRecordChecked(this,param_1->PackageName);
  local_98 = param_1->PackageName;
  local_90 = param_1->BulkDataType;
  ::FString::FString(&local_88,&param_1->LooseFilePath);
  local_70 = *(uint *)((param_1->ChunkId).Id + 8);
  local_78 = *(FName *)(param_1->ChunkId).Id;
  local_6c = param_1->MultiOutputIndex;
  IoBufferToSharedBuffer(&local_68);
  iVar5 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  local_58 = CONCAT44(local_58._4_4_,iVar5);
  if (iVar5 == 0) {
    local_58 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,(ForAnyElementType *)&local_60,iVar5,(int *)((longlong)&local_58 + 4))
    ;
    memcpy((void *)local_60,_Src,(longlong)iVar5 * 0x18);
  }
  pFVar2 = (FName *)(pFVar6->BulkDatas).AllocatorInstance.Data;
  if (((pFVar2 <= &local_98) && (&local_98 < pFVar2 + (longlong)(pFVar6->BulkDatas).ArrayMax * 9))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (pFVar6->BulkDatas).ArrayNum;
  piVar1 = &(pFVar6->BulkDatas).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(pFVar6->BulkDatas).AllocatorInstance,piVar1);
  }
  (pFVar6->BulkDatas).ArrayNum = iVar5 + 1;
  pFVar2 = (FName *)((pFVar6->BulkDatas).AllocatorInstance.Data + (longlong)iVar5 * 0x48);
  *pFVar2 = local_98;
  pFVar2[2].ComparisonIndex = 0;
  pFVar2[2].Number = 0;
  pFVar2[1].ComparisonIndex.Value = local_90;
  pFVar2[2] = (FName)local_88.Data.AllocatorInstance.Data;
  pFVar2[3].ComparisonIndex.Value = local_88.Data.ArrayNum;
  pFVar2[3].Number = local_88.Data.ArrayMax;
  pFVar2[4] = local_78;
  pFVar2[5].ComparisonIndex.Value = local_70;
  *(ushort *)&pFVar2[5].Number = local_6c;
  pFVar2[7].ComparisonIndex = 0;
  pFVar2[7].Number = 0;
  *(TRefCountPtr<FIoBuffer::BufCore> *)&pFVar2[6].ComparisonIndex = local_68.CorePtr.Reference;
  pFVar2[7] = local_60;
  pFVar2[8].ComparisonIndex.Value = (uint)local_58;
  pFVar2[8].Number = local_58._4_4_;
  return;
}

// WriteLinkerAdditionalData @ 141f50ce0

/* WARNING: Removing unreachable block (ram,0x000141f50e69) */
/* WARNING: Removing unreachable block (ram,0x000141f50e77) */
/* WARNING: Removing unreachable block (ram,0x000141f50e8e) */
/* WARNING: Removing unreachable block (ram,0x000141f50eba) */

void __thiscall
FPackageWriterRecords::WriteLinkerAdditionalData
          (FPackageWriterRecords *this,FLinkerAdditionalDataInfo *param_1,FIoBuffer *param_2,
          TArray<FFileRegion,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPackage *pFVar7;
  longlong lVar8;
  FName local_48;
  undefined4 local_40;
  FIoBuffer local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  pFVar7 = FindRecordChecked(this,param_1->PackageName);
  local_40 = *(undefined4 *)&param_1->MultiOutputIndex;
  local_48 = param_1->PackageName;
  IoBufferToSharedBuffer(&local_38);
  iVar6 = param_3->ArrayNum;
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = CONCAT44(local_28._4_4_,iVar6);
  if (iVar6 == 0) {
    local_28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&local_30,iVar6,(int *)((longlong)&local_28 + 4));
    memcpy(local_30.Data,pFVar2,(longlong)iVar6 * 0x18);
  }
  pFVar3 = (FName *)(pFVar7->LinkerAdditionalDatas).AllocatorInstance.Data;
  if (((pFVar3 <= &local_48) &&
      (&local_48 < pFVar3 + (longlong)(pFVar7->LinkerAdditionalDatas).ArrayMax * 5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (pFVar7->LinkerAdditionalDatas).ArrayNum;
  piVar1 = &(pFVar7->LinkerAdditionalDatas).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(pFVar7->LinkerAdditionalDatas).AllocatorInstance,piVar1);
  }
  (pFVar7->LinkerAdditionalDatas).ArrayNum = iVar6 + 1;
  lVar8 = (longlong)iVar6;
  pFVar2 = (pFVar7->LinkerAdditionalDatas).AllocatorInstance.Data;
  *(FName *)(pFVar2 + lVar8 * 0x28) = local_48;
  *(undefined4 *)(pFVar2 + lVar8 * 0x28 + 8) = local_40;
  *(undefined8 *)(pFVar2 + lVar8 * 0x28 + 0x18) = 0;
  *(TRefCountPtr<FIoBuffer::BufCore> *)&pFVar2[lVar8 * 0x28 + 0x10].field_0x0 =
       local_38.CorePtr.Reference;
  *(FScriptContainerElement **)(pFVar2 + lVar8 * 0x28 + 0x18) = local_30.Data;
  *(undefined4 *)(pFVar2 + lVar8 * 0x28 + 0x20) = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + lVar8 * 0x28 + 0x24) = local_28._4_4_;
  return;
}

// WritePackageData @ 141f50ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f512c1) */
/* WARNING: Removing unreachable block (ram,0x000141f512dd) */
/* WARNING: Removing unreachable block (ram,0x000141f512f0) */
/* WARNING: Removing unreachable block (ram,0x000141f51318) */
/* WARNING: Removing unreachable block (ram,0x000141f5132e) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageWriterRecords::WritePackageData
          (FPackageWriterRecords *this,FPackageInfo *param_1,FLargeMemoryWriter *param_2,
          TArray<FFileRegion,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FPackageWriterRecords::FWritePackage,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ushort uVar6;
  FName FVar7;
  FPackage *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
  *pTVar12;
  ulonglong uVar13;
  uchar *puVar14;
  FBufferOwner *pFVar15;
  FName *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_108 [32];
  FName local_b8;
  FString local_b0;
  FName local_98;
  FString local_90;
  FName local_80;
  FName local_78;
  uint local_70;
  ushort local_6c;
  FName local_68;
  FName local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FVar7 = param_1->PackageName;
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar12 = TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
            ::Find((TMapBase<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
                    *)&this->Map,FVar7);
  ReleaseSRWLockShared((PSRWLOCK)this);
  if (((pTVar12 ==
        (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
         *)0x0) || (pTVar12->Ptr == (FPackage *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Record && *Record",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                          ,0x6a,
                          L"IPackageWriter->BeginPackage must be called before any other functions on IPackageWriter"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = pTVar12->Ptr;
  uVar13 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  if (((longlong)uVar13 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                          ,0x24,
                          L"IPackageWriter->WritePackageData must not be called with an empty ExportsArchive"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((uVar13 < param_1->HeaderSize) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("static_cast<uint64>(DataSize) >= Info.HeaderSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageWriterToSharedBuffer.cpp"
                          ,0x26,
                          L"IPackageWriter->WritePackageData must not be called with HeaderSize > ExportsArchive.TotalSize"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar17 = (pFVar8->Packages).AllocatorInstance.Data;
  pFVar18 = pFVar17 + (longlong)(pFVar8->Packages).ArrayNum * 0x48;
  if (pFVar17 != pFVar18) {
    do {
      if (*(ushort *)(pFVar17 + 0x2c) == param_1->MultiOutputIndex) {
        if ((byte)LogPackageWriter._0_1_ < 2) {
          return;
        }
        ::FName::ToString(&param_1->PackageName,&local_b0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageWriter);
        if (local_b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        return;
      }
      pFVar17 = pFVar17 + 0x48;
    } while (pFVar17 != pFVar18);
  }
  puVar14 = FLargeMemoryData::ReleaseOwnership(&param_2->Data);
  pFVar15 = ::operator_new(0x28);
  if (pFVar15 == (FBufferOwner *)0x0) {
    pFVar15 = (FBufferOwner *)0x0;
  }
  else {
    pFVar15->Data = puVar14;
    pFVar15->Size = uVar13;
    pFVar15->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar15[1]._padding_ = (longlong)FMemory::Free;
    pFVar15->_padding_ =
         (longlong)
         &
         ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
    ;
    LOCK();
    pFVar15->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar15->ReferenceCountsAndFlags | 0x4000000000000000);
    UNLOCK();
    LOCK();
    pFVar15->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar15->ReferenceCountsAndFlags | 0x1000000000000000);
    UNLOCK();
    pFVar15->_padding_ =
         (longlong)
         &
         ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
    ;
    LOCK();
    pFVar15->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar15->ReferenceCountsAndFlags | 0x2000000000000000);
    UNLOCK();
  }
  FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_b8,pFVar15);
  local_98 = param_1->PackageName;
  pTVar1 = &pFVar8->Packages;
  uVar6 = param_1->MultiOutputIndex;
  ::FString::FString(&local_90,&param_1->LooseFilePath);
  local_80 = (FName)param_1->HeaderSize;
  iVar11 = param_3->ArrayNum;
  local_78 = *(FName *)(param_1->ChunkId).Id;
  local_70 = *(uint *)((param_1->ChunkId).Id + 8);
  local_6c = param_1->MultiOutputIndex;
  pFVar18 = (param_3->AllocatorInstance).Data;
  local_68 = local_b8;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  local_58 = CONCAT44(local_58._4_4_,iVar11);
  if (iVar11 == 0) {
    local_58 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar11,0,(ForAnyElementType *)&local_60,iVar11,
               (int *)((longlong)&local_58 + 4));
    memcpy((void *)local_60,pFVar18,(longlong)iVar11 * 0x18);
  }
  pFVar16 = (FName *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar16 <= &local_98) && (&local_98 < pFVar16 + (longlong)(pFVar8->Packages).ArrayMax * 9))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar11 = (pFVar8->Packages).ArrayNum;
  piVar2 = &(pFVar8->Packages).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x848,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar5 = (ulonglong)uVar6 * 0x48;
  (pFVar8->Packages).ArrayNum = iVar11 + 1;
  pFVar18 = (pTVar1->AllocatorInstance).Data + lVar5;
  memmove(pFVar18 + 0x48,pFVar18,(longlong)(int)(iVar11 - (uint)uVar6) * 0x48);
  FVar7 = local_b8;
  pFVar16 = (FName *)((pTVar1->AllocatorInstance).Data + lVar5);
  *pFVar16 = local_98;
  pFVar16[1].ComparisonIndex = 0;
  pFVar16[1].Number = 0;
  pFVar16[1] = (FName)local_90.Data.AllocatorInstance.Data;
  pFVar16[2].ComparisonIndex.Value = local_90.Data.ArrayNum;
  pFVar16[2].Number = local_90.Data.ArrayMax;
  pFVar16[3] = local_80;
  pFVar16[4] = local_78;
  pFVar16[5].ComparisonIndex.Value = local_70;
  *(ushort *)&pFVar16[5].Number = local_6c;
  pFVar16[7].ComparisonIndex = 0;
  pFVar16[7].Number = 0;
  pFVar16[6] = local_68;
  pFVar16[7] = local_60;
  pFVar16[8].ComparisonIndex.Value = (uint)local_58;
  pFVar16[8].Number = local_58._4_4_;
  local_58 = 0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b8 != (FName)0x0) {
    LOCK();
    plVar3 = (longlong *)((longlong)local_b8 + 0x18);
    lVar5 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_b8 + 0x10))(local_b8);
      *(longlong *)((longlong)FVar7 + 8) = 0;
      *(longlong *)((longlong)FVar7 + 0x10) = 0;
      LOCK();
      puVar4 = (ulonglong *)((longlong)FVar7 + 0x18);
      uVar13 = *puVar4;
      *puVar4 = *puVar4 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar13 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar7)(FVar7,1);
      }
    }
  }
  return;
}

// WritePackageTrailer @ 141f513b0

/* WARNING: Removing unreachable block (ram,0x000141f5147a) */
/* WARNING: Removing unreachable block (ram,0x000141f51491) */
/* WARNING: Removing unreachable block (ram,0x000141f514bd) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageWriterRecords::WritePackageTrailer
          (FPackageWriterRecords *this,FPackageTrailerInfo *param_1,FIoBuffer *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPackage *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FString local_28;
  FIoBuffer local_18 [2];
  
  pFVar4 = FindRecordChecked(this,param_1->PackageName);
  pFVar6 = (pFVar4->PackageTrailers).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)(pFVar4->PackageTrailers).ArrayNum * 0x18;
  if (pFVar6 != pFVar2) {
    do {
      if (*(ushort *)(pFVar6 + 8) == param_1->MultiOutputIndex) {
        if ((byte)LogPackageWriter._0_1_ < 2) {
          return;
        }
        ::FName::ToString(&param_1->PackageName,&local_28);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageWriter);
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
      pFVar6 = pFVar6 + 0x18;
    } while (pFVar6 != pFVar2);
  }
  local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&param_1->PackageName;
  local_28.Data.ArrayNum = *(int *)&param_1->MultiOutputIndex;
  IoBufferToSharedBuffer(local_18);
  iVar3 = (pFVar4->PackageTrailers).ArrayNum;
  piVar1 = &(pFVar4->PackageTrailers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar4->PackageTrailers).AllocatorInstance,piVar1);
  }
  (pFVar4->PackageTrailers).ArrayNum = iVar3 + 1;
  lVar5 = (longlong)iVar3;
  pFVar2 = (pFVar4->PackageTrailers).AllocatorInstance.Data;
  *(FScriptContainerElement **)(pFVar2 + lVar5 * 0x18) = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar5 * 0x18 + 8) = local_28.Data.ArrayNum;
  *(TRefCountPtr<FIoBuffer::BufCore> *)(pFVar2 + lVar5 * 0x18 + 0x10) =
       local_18[0].CorePtr.Reference;
  return;
}

