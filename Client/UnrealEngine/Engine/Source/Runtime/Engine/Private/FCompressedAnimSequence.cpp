// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// operator() @ 1473dda30

bool __thiscall
`FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  
  plVar3 = *(longlong **)this;
  uVar9 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar4 = *(longlong **)this;
  piVar1 = (int *)(*plVar3 + (longlong)param_1 * 0xc);
  uVar9 = 0;
  if (param_2 < (int)plVar4[1]) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  piVar2 = (int *)(*plVar4 + (longlong)param_2 * 0xc);
  iVar8 = *piVar1 - *piVar2;
  if (iVar8 == 0) {
    iVar8 = piVar1[1] - piVar2[1];
  }
  return SUB41((uint)iVar8 >> 0x1f,0);
}

// ClearCompressedBoneData @ 1473f1780

void __thiscall FCompressedAnimSequence::ClearCompressedBoneData(FCompressedAnimSequence *this)

{
  undefined1 *puVar1;
  ICompressedAnimData *pIVar2;
  
  puVar1 = &(this->CompressedByteStream).field_0x1c;
  *(undefined4 *)&(this->CompressedByteStream).field_0x18 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<0,TMaybeMappedAllocator<0>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->CompressedByteStream,0,(int *)puVar1);
  }
  pIVar2 = (this->CompressedDataStructure).Ptr;
  if (pIVar2 != (ICompressedAnimData *)0x0) {
    (this->CompressedDataStructure).Ptr = (ICompressedAnimData *)0x0;
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  (this->BoneCompressionCodec).field0_0x0.DebugPtr = (UAnimBoneCompressionCodec *)0x0;
  return;
}

// ClearCompressedCurveData @ 1473f17f0

void __thiscall FCompressedAnimSequence::ClearCompressedCurveData(FCompressedAnimSequence *this)

{
  int *piVar1;
  
  piVar1 = &(this->CompressedCurveByteStream).ArrayMax;
  (this->CompressedCurveByteStream).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedCurveByteStream).AllocatorInstance,0,piVar1);
    (this->CurveCompressionCodec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
    return;
  }
  (this->CurveCompressionCodec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
  return;
}

// GetMemorySize @ 147402a60

ulong64 __thiscall FCompressedAnimSequence::GetMemorySize(FCompressedAnimSequence *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ICompressedAnimData *pIVar4;
  longlong lVar5;
  
  iVar1 = (this->IndexedCurveNames).ArrayMax;
  pIVar4 = (this->CompressedDataStructure).Ptr;
  iVar2 = (this->CompressedTrackToSkeletonMapTable).ArrayMax;
  iVar3 = (this->CompressedCurveByteStream).ArrayMax;
  lVar5 = (**(code **)(pIVar4->_padding_ + 0x20))(pIVar4);
  return lVar5 + (longlong)iVar2 * 4 + (longlong)iVar1 * 0xc + (longlong)iVar3 + 0x80;
}

// GetSkeletonIndexFromTrackIndex @ 147404da0

int __thiscall
FCompressedAnimSequence::GetSkeletonIndexFromTrackIndex(FCompressedAnimSequence *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->CompressedTrackToSkeletonMapTable).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data +
                 (longlong)param_1 * 4);
}

// IsBoneDataValid @ 1474076c0

bool __thiscall
FCompressedAnimSequence::IsBoneDataValid
          (FCompressedAnimSequence *this,UAnimSequence *param_1,bool param_2)

{
  return true;
}

// IsCurveDataValid @ 147407c40

bool __thiscall
FCompressedAnimSequence::IsCurveDataValid
          (FCompressedAnimSequence *this,UAnimSequence *param_1,bool param_2)

{
  return true;
}

// IsValid @ 147408100

bool __thiscall
FCompressedAnimSequence::IsValid(FCompressedAnimSequence *this,UAnimSequence *param_1,bool param_2)

{
  return true;
}

// RebuildCurveIndexTable @ 14740e240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FCompressedAnimSequence::RebuildCurveIndexTable(FCompressedAnimSequence *this)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<int,TMemStackAllocator<0>_> local_88;
  code *local_78;
  undefined1 *local_70;
  FMemMark local_68;
  
  puVar6 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_70 = local_res10;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar6);
  local_88.AllocatorInstance.Data = (int *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_68.Mem = (FMemStackBase *)(pFVar7 + 2);
  local_68.Top = (local_68.Mem)->Top;
  local_68.SavedChunk = *(FTaggedMemory **)(pFVar7 + 4);
  local_68.bPopped = false;
  local_68.NextTopmostMark = *(FMemMark **)(pFVar7 + 5);
  pFVar7[5] = (FTlsAutoCleanup)&local_68;
  *(int *)(pFVar7 + 6) = *(int *)(pFVar7 + 6) + 1;
  TArray<int,TMemStackAllocator<0>_>::SetNumUninitialized
            (&local_88,(this->IndexedCurveNames).ArrayNum,Default);
  iVar3 = local_88.ArrayNum;
  uVar8 = 0;
  if (0 < local_88.ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar3) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(lVar9 + (longlong)local_88.AllocatorInstance.Data) = uVar8;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar3);
  }
  local_res8 = SUB81(this,0);
  local_res18 = &this->IndexedCurveNames;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FCompressedAnimSequence::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
            (local_88.AllocatorInstance.Data,iVar3,local_res8,(<lambda_1> *)&local_res18);
  uVar8 = 0;
  if (0 < (this->IndexedCurveNames).ArrayNum) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar3) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)(lVar10 + (longlong)local_88.AllocatorInstance.Data);
      uVar5 = 0;
      if ((int)uVar8 < (this->IndexedCurveNames).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 4;
      *(undefined4 *)((this->IndexedCurveNames).AllocatorInstance.Data + lVar9 + 8) = uVar1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar8 < (this->IndexedCurveNames).ArrayNum);
  }
  if (local_68.bPopped == false) {
    if (((local_68.Mem)->TopMark != &local_68) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.bPopped = true;
    (local_68.Mem)->NumMarks = (local_68.Mem)->NumMarks + -1;
    if (local_68.SavedChunk != (local_68.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_68.Mem,local_68.SavedChunk);
    }
    (local_68.Mem)->Top = local_68.Top;
    (local_68.Mem)->TopMark = local_68.NextTopmostMark;
  }
  return;
}

// Reset @ 14740f2d0

void __thiscall FCompressedAnimSequence::Reset(FCompressedAnimSequence *this)

{
  int *piVar1;
  undefined1 *puVar2;
  ICompressedAnimData *pIVar3;
  
  piVar1 = &(this->CompressedTrackToSkeletonMapTable).ArrayMax;
  (this->CompressedTrackToSkeletonMapTable).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->IndexedCurveNames).ArrayMax;
  (this->IndexedCurveNames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IndexedCurveNames).AllocatorInstance,0,piVar1);
  }
  puVar2 = &(this->CompressedByteStream).field_0x1c;
  *(undefined4 *)&(this->CompressedByteStream).field_0x18 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<0,TMaybeMappedAllocator<0>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->CompressedByteStream,0,(int *)puVar2);
  }
  pIVar3 = (this->CompressedDataStructure).Ptr;
  if (pIVar3 != (ICompressedAnimData *)0x0) {
    (this->CompressedDataStructure).Ptr = (ICompressedAnimData *)0x0;
    (**(code **)pIVar3->_padding_)(pIVar3,1);
  }
  (this->BoneCompressionCodec).field0_0x0.DebugPtr = (UAnimBoneCompressionCodec *)0x0;
  piVar1 = &(this->CompressedCurveByteStream).ArrayMax;
  (this->CompressedCurveByteStream).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedCurveByteStream).AllocatorInstance,0,piVar1);
  }
  this->CompressedRawDataSize = 0;
  (this->CurveCompressionCodec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
  return;
}

// SerializeCompressedData @ 147418020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCompressedAnimSequence::SerializeCompressedData
          (FCompressedAnimSequence *this,FArchive *param_1,bool param_2,UObject *param_3,
          USkeleton *param_4,UAnimBoneCompressionSettings *param_5,
          UAnimCurveCompressionSettings *param_6,bool param_7)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  int *piVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  IMappedFileRegion *pIVar10;
  ICompressedAnimData *pIVar11;
  code *pcVar12;
  UAnimBoneCompressionSettings *pUVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  long64 lVar17;
  FOwnedBulkDataPtr *this_00;
  void *pvVar18;
  uchar *puVar19;
  UAnimBoneCompressionCodec *pUVar20;
  UAnimCurveCompressionCodec *pUVar21;
  undefined8 *puVar22;
  FString *pFVar23;
  UAnimBoneCompressionCodec *pUVar24;
  uint *puVar25;
  undefined4 *puVar26;
  undefined7 uVar27;
  FScriptContainerElement *pFVar28;
  UObject *pUVar29;
  bool bVar30;
  undefined1 auStackY_358 [32];
  bool local_328 [4];
  uint local_324;
  undefined1 local_320 [4];
  uint local_31c;
  uint local_318;
  uint local_314;
  UObject *local_310;
  void *local_308;
  undefined8 local_300;
  FString local_2f8;
  FArchive *local_2e8;
  FString local_2e0;
  UAnimCurveCompressionSettings *local_2d0;
  undefined8 local_2c8;
  FString local_2c0;
  void *local_2b0;
  undefined8 local_2a8;
  IMappedFileHandle *local_2a0;
  byte *local_298;
  UAnimBoneCompressionSettings *local_290;
  undefined8 *local_288;
  FString local_280;
  FString local_270;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  int iStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FString local_228;
  FArchiveState local_218;
  undefined8 local_188;
  void **local_180;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  FString local_138;
  void *local_128 [2];
  FArchiveState local_118;
  undefined8 local_88;
  void **local_80;
  undefined8 local_78;
  FAllocation local_68;
  undefined5 local_60;
  undefined4 uStack_5b;
  undefined1 uStack_57;
  undefined6 uStack_56;
  uchar local_50 [8];
  uchar local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_290 = param_5;
  pUVar20 = (UAnimBoneCompressionCodec *)0x0;
  local_2d0 = param_6;
  local_314 = 0;
  local_310 = param_3;
  local_2e8 = param_1;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  piVar1 = &this->CompressedRawDataSize;
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_298 = &param_1->field_0x2a;
  TArrayPrivateFriend::Serialize<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_>
            (param_1,&this->CompressedTrackToSkeletonMapTable);
  TArrayPrivateFriend::Serialize<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_>
            (param_1,&this->IndexedCurveNames);
  plVar8 = *(longlong **)&param_1->field_0x8;
  puVar2 = &(this->CompressedByteStream).field_0x18;
  local_324 = *(uint *)puVar2;
  puVar25 = (uint *)*plVar8;
  if ((uint *)plVar8[1] < puVar25 + 1) {
    puVar25 = &local_324;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar25,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar25);
    }
  }
  else {
    local_324 = *puVar25;
    *plVar8 = *plVar8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    bVar30 = false;
    if ((!param_2) &&
       (iVar16 = FArchiveState::CustomVer
                           ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
       0x19 < iVar16)) {
      puVar9 = *(ulonglong **)&param_1->field_0x8;
      puVar25 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar25) {
        local_314 = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_314,4);
        if (1 < local_314) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar6 = local_314;
        if ((param_1->field_0x28 & 1) == 0) goto LAB_1474181c2;
      }
      else {
        uVar6 = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar25;
      }
      bVar30 = uVar6 != 0;
    }
LAB_1474181c2:
    local_2b0 = (void *)0x0;
    local_2a8 = 0;
    if (bVar30) {
      local_60 = 0;
      uStack_56 = 0;
      local_50[0] = FIoChunkId::InvalidChunkId.Id[0];
      local_50[1] = FIoChunkId::InvalidChunkId.Id[1];
      local_50[2] = FIoChunkId::InvalidChunkId.Id[2];
      local_50[3] = FIoChunkId::InvalidChunkId.Id[3];
      local_50[4] = FIoChunkId::InvalidChunkId.Id[4];
      local_50[5] = FIoChunkId::InvalidChunkId.Id[5];
      local_50[6] = FIoChunkId::InvalidChunkId.Id[6];
      local_50[7] = FIoChunkId::InvalidChunkId.Id[7];
      local_68.RawData = (void *)0x0;
      uStack_5b = 0xffffffff;
      uStack_57 = 0xff;
      local_48[0] = FIoChunkId::InvalidChunkId.Id[8];
      local_48[1] = FIoChunkId::InvalidChunkId.Id[9];
      local_48[2] = FIoChunkId::InvalidChunkId.Id[10];
      local_48[3] = FIoChunkId::InvalidChunkId.Id[0xb];
      FBulkData::Serialize((FBulkData *)&local_68,param_1,local_310,false,1,None);
      FBulkData::ForceBulkDataResident((FBulkData *)&local_68);
      lVar17 = FBulkData::GetBulkDataSize((FBulkData *)&local_68);
      this_00 = FBulkData::FAllocatedPtr::StealFileMapping
                          ((FAllocatedPtr *)&local_68,(FBulkData *)&local_68);
      pvVar18 = FOwnedBulkDataPtr::GetPointer(this_00);
      if (((pvVar18 == (void *)0x0) && (lVar17 != 0)) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("OwnedPtr->GetPointer() != nullptr || Size == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                              ,0x547,L"Compressed animation data failed to load"), bVar30)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(int *)&(this->CompressedByteStream).field_0x18 = (int)lVar17;
      *(int *)&(this->CompressedByteStream).field_0x1c = (int)lVar17;
      puVar19 = FOwnedBulkDataPtr::GetPointer(this_00);
      local_2a0 = this_00->MappedHandle;
      pIVar10 = this_00->MappedRegion;
      if (((*(longlong *)&(this->CompressedByteStream).field_0x8 != 0) ||
          (*(longlong *)&this->CompressedByteStream != 0)) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("!MappedHandle && !Data",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCompressionTypes.h"
                              ,0x28b,L""), bVar30)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TMaybeMappedAllocator<0>::ForAnyElementType::Reset
                ((ForAnyElementType *)&this->CompressedByteStream);
      if ((local_2a0 != (IMappedFileHandle *)0x0) || (pIVar10 != (IMappedFileRegion *)0x0)) {
        *(IMappedFileHandle **)&(this->CompressedByteStream).field_0x8 = local_2a0;
        *(IMappedFileRegion **)&(this->CompressedByteStream).field_0x10 = pIVar10;
        if (((pIVar10->MappedPtr == (uchar *)0x0) || (pIVar10->MappedSize == 0)) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("MappedPtr && MappedSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                                ,0x19,L""), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar19 = pIVar10->MappedPtr;
      }
      *(uchar **)&this->CompressedByteStream = puVar19;
      this_00->AllocatedData = (void *)0x0;
      this_00->MappedHandle = (IMappedFileHandle *)0x0;
      this_00->MappedRegion = (IMappedFileRegion *)0x0;
      if (this_00 != (FOwnedBulkDataPtr *)0x0) {
        FOwnedBulkDataPtr::~FOwnedBulkDataPtr(this_00);
        ::operator_delete(this_00,0x18);
      }
      FBulkData::~FBulkData((FBulkData *)&local_68);
    }
    else {
      if ((int)local_324 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_324);
      }
      puVar3 = &(this->CompressedByteStream).field_0x1c;
      *(undefined4 *)puVar2 = 0;
      if (*(uint *)puVar3 != local_324) {
        UE::Core::Private::ReallocTo<0,TMaybeMappedAllocator<0>::ForAnyElementType>
                  (1,1,local_324,(ForAnyElementType *)&this->CompressedByteStream,0,(int *)puVar3);
      }
      UE::Core::Private::ReallocGrow<0,TMaybeMappedAllocator<0>::ForAnyElementType>
                (1,1,local_324,(ForAnyElementType *)&this->CompressedByteStream,(int *)puVar2,
                 (int *)puVar3);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,*(undefined8 *)&this->CompressedByteStream,(longlong)(int)local_324);
    }
    local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Data.ArrayNum = 0;
    local_2f8.Data.ArrayMax = 0;
    local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.Data.ArrayNum = 0;
    local_2c0.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_2f8);
    ::operator<<(param_1,&local_2c0);
    ::FString::FString(&local_280,L"None");
    if (local_2f8.Data.ArrayNum == local_280.Data.ArrayNum) {
      if (local_2f8.Data.ArrayNum < 2) {
        bVar30 = true;
      }
      else {
        iVar16 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_2f8.Data.AllocatorInstance.Data,
                            (wchar_t *)local_280.Data.AllocatorInstance.Data);
        bVar30 = iVar16 == 0;
      }
    }
    else {
      bVar30 = local_2f8.Data.ArrayNum + local_280.Data.ArrayNum == 1;
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if ((bVar30) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("!BoneCodecDDCHandle.Equals(L\"None\", ESearchCase::IgnoreCase)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                            ,0x56d,L""), bVar30)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    plVar8 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
      if ((*local_298 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_31c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_31c);
      }
    }
    else {
      local_31c = *(uint *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    if ((int)local_31c < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_31c);
    }
    piVar1 = &(this->CompressedCurveByteStream).ArrayMax;
    (this->CompressedCurveByteStream).ArrayNum = 0;
    if (*piVar1 != local_31c) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_31c,&(this->CompressedCurveByteStream).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_31c,&(this->CompressedCurveByteStream).AllocatorInstance,
               &(this->CompressedCurveByteStream).ArrayNum,piVar1);
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->CompressedCurveByteStream).AllocatorInstance.Data,
               (longlong)(int)local_31c);
    pUVar13 = local_290;
    ValidateUObjectLoaded((UObject *)local_290,local_310);
    ValidateUObjectLoaded((UObject *)local_2d0,local_310);
    pFVar28 = (pUVar13->Codecs).AllocatorInstance.Data;
    iVar16 = (pUVar13->Codecs).ArrayNum;
    pFVar5 = pFVar28 + (longlong)iVar16 * 8;
    while( true ) {
      if ((pUVar13->Codecs).ArrayNum != iVar16) {
        local_320[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UAnimBoneCompressionCodec>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_320);
      }
      if ((pFVar28 == pFVar5) ||
         ((plVar8 = *(longlong **)pFVar28, plVar8 != (longlong *)0x0 &&
          (pUVar20 = (UAnimBoneCompressionCodec *)(**(code **)(*plVar8 + 0x2b0))(plVar8,&local_2f8),
          pUVar20 != (UAnimBoneCompressionCodec *)0x0)))) break;
      pFVar28 = pFVar28 + 8;
    }
    param_1 = local_2e8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 != (UAnimBoneCompressionCodec *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->BoneCompressionCodec).field0_0x0.DebugPtr = pUVar20;
    pUVar21 = UAnimCurveCompressionSettings::GetCodec(local_2d0,&local_2c0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 != (UAnimCurveCompressionCodec *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->CurveCompressionCodec).field0_0x0.DebugPtr = pUVar21;
    pUVar20 = (this->BoneCompressionCodec).field0_0x0.DebugPtr;
    pUVar29 = local_310;
    if (pUVar20 != (UAnimBoneCompressionCodec *)0x0) {
      puVar22 = (undefined8 *)(**(code **)(pUVar20->_padding_ + 0x2c0))(pUVar20,&local_288);
      pTVar4 = &this->CompressedDataStructure;
      if (pTVar4 != (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_> *)puVar22)
      {
        pIVar11 = pTVar4->Ptr;
        pTVar4->Ptr = (ICompressedAnimData *)*puVar22;
        *puVar22 = 0;
        if (pIVar11 != (ICompressedAnimData *)0x0) {
          (**(code **)pIVar11->_padding_)(pIVar11,1);
        }
      }
      if (local_288 != (undefined8 *)0x0) {
        (**(code **)*local_288)(local_288,1);
      }
      pUVar29 = local_310;
      (**(code **)(pTVar4->Ptr->_padding_ + 8))(pTVar4->Ptr,local_310,param_1);
      pIVar11 = pTVar4->Ptr;
      iStack_250 = *(int *)&(this->CompressedByteStream).field_0x18;
      pcVar12 = *(code **)(pIVar11->_padding_ + 0x18);
      local_258 = *(undefined8 *)&this->CompressedByteStream;
      if ((iStack_250 < 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar30)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar26 = &local_168;
      local_168 = (undefined4)local_258;
      uStack_164 = local_258._4_4_;
      uStack_15c = uStack_24c;
      iStack_160 = iStack_250;
      (*pcVar12)(pIVar11,puVar26);
      if ((int)local_2a8 != 0) {
        local_118._padding_ = 0;
        local_118.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_118.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_118.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_118.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_118._40_8_ = 0;
        local_118.ArSerializingDefaults = 0;
        local_118.ArPortFlags = 0;
        local_118.ArMaxSerializeSize = 0;
        local_118.ArUEVer.FileVersionUE4 = 0;
        local_118.ArUEVer.FileVersionUE5 = 0;
        local_118.ArLicenseeUEVer = 0;
        local_118.ArEngineVer.Major = 0;
        local_118.ArEngineVer.Minor = 0;
        local_118.ArEngineVer.Patch = 0;
        local_118.ArEngineVer._6_2_ = 0;
        local_118.ArEngineVer.Changelist = 0;
        local_118.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_118.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_118.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_118.SerializedProperty = (FProperty *)0x0;
        local_118.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_118.bCustomVersionsAreReset = false;
        local_118._129_7_ = 0;
        local_118.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_118);
        local_88 = 0;
        uVar27 = (undefined7)((ulonglong)puVar26 >> 8);
        local_118._padding_ = (longlong)&___7FMemoryReader__6B_;
        local_80 = &local_2b0;
        local_78 = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading(&local_118,true);
        (**(code **)(local_118._padding_ + 0x108))(&local_118,CONCAT71(uVar27,1));
        pUVar20 = (this->BoneCompressionCodec).field0_0x0.DebugPtr;
        iStack_240 = *(int *)&(this->CompressedByteStream).field_0x18;
        local_118.ArForceByteSwapping = param_1->field_0x2a;
        pcVar12 = *(code **)(pUVar20->_padding_ + 0x2c8);
        local_248 = *(undefined8 *)&this->CompressedByteStream;
        if ((iStack_240 < 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_158 = (undefined4)local_248;
        uStack_154 = local_248._4_4_;
        uStack_14c = uStack_23c;
        iStack_150 = iStack_240;
        (*pcVar12)(pUVar20,(this->CompressedDataStructure).Ptr,&local_158,&local_118);
        FArchive::~FArchive((FArchive *)&local_118);
      }
    }
    RebuildCurveIndexTable(this);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_2b0 != (void *)0x0) {
      FMemory::Free(local_2b0);
    }
    goto LAB_147418cc3;
  }
  if (((param_1->field_0x28 & 4) == 0) && (pUVar29 = local_310, (param_1->field_0x2b & 4) == 0))
  goto LAB_147418cc3;
  local_308 = (void *)0x0;
  local_300 = 0;
  if ((param_2) ||
     ((*(longlong *)&param_1->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) {
    bVar30 = false;
  }
  else {
    bVar30 = true;
  }
  if ((this->BoneCompressionCodec).field0_0x0.DebugPtr != (UAnimBoneCompressionCodec *)0x0) {
    local_2c8 = 0;
    local_218._padding_ = 0;
    local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_218._40_8_ = 0;
    local_218.ArSerializingDefaults = 0;
    local_218.ArPortFlags = 0;
    local_218.ArMaxSerializeSize = 0;
    local_218.ArUEVer.FileVersionUE4 = 0;
    local_218.ArUEVer.FileVersionUE5 = 0;
    local_218.ArLicenseeUEVer = 0;
    local_218.ArEngineVer.Major = 0;
    local_218.ArEngineVer.Minor = 0;
    local_218.ArEngineVer.Patch = 0;
    local_218.ArEngineVer._6_2_ = 0;
    local_218.ArEngineVer.Changelist = 0;
    local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_218.SerializedProperty = (FProperty *)0x0;
    local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_218.bCustomVersionsAreReset = false;
    local_218._129_7_ = 0;
    local_218.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_218);
    local_188 = 0;
    uVar27 = (undefined7)((ulonglong)puVar25 >> 8);
    local_218._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_180 = &local_308;
    local_178 = 0;
    FArchiveState::SetIsSaving(&local_218,true);
    (**(code **)(local_218._padding_ + 0x108))(&local_218,CONCAT71(uVar27,1));
    pUVar24 = (this->BoneCompressionCodec).field0_0x0.DebugPtr;
    iStack_230 = *(int *)&(this->CompressedByteStream).field_0x18;
    local_218._padding_ = (longlong)&___7FMemoryWriter__6B_;
    local_218.ArForceByteSwapping = param_1->field_0x2a;
    local_2e8 = *(FArchive **)(pUVar24->_padding_ + 0x2d0);
    local_238 = *(undefined8 *)&this->CompressedByteStream;
    if ((iStack_230 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_148 = (undefined4)local_238;
    uStack_144 = local_238._4_4_;
    uStack_13c = uStack_22c;
    iStack_140 = iStack_230;
    (*(code *)local_2e8)(pUVar24,(this->CompressedDataStructure).Ptr,&local_148,&local_218);
    FArchive::~FArchive((FArchive *)&local_218);
  }
  if ((local_324 != (uint)local_300) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBytes == SerializedData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                          ,0x59f,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((param_7) && (local_324 != 0)) && (bVar30)) {
    pUVar24 = pUVar20;
    if (*(longlong *)&param_1->field_0x68 != 0) {
      pUVar24 = *(UAnimBoneCompressionCodec **)(*(longlong *)&param_1->field_0x68 + 8);
    }
    cVar15 = (**(code **)(pUVar24->_padding_ + 200))(pUVar24,0x12);
    if (cVar15 == '\0') goto LAB_147418a31;
    if (*(longlong *)&param_1->field_0x68 != 0) {
      pUVar20 = *(UAnimBoneCompressionCodec **)(*(longlong *)&param_1->field_0x68 + 8);
    }
    cVar15 = (**(code **)(pUVar20->_padding_ + 200))(pUVar20,0x14);
    if (cVar15 == '\0') goto LAB_147418a31;
    bVar30 = true;
  }
  else {
LAB_147418a31:
    bVar30 = false;
  }
  local_328[0] = bVar30;
  if (param_2) {
    (**(code **)(*(longlong *)param_1 + 0x10))();
    if ((bVar30 != false) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bUseBulkDataForSave",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                            ,0x5b9,L""), bVar30)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    iVar16 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar16 < 0x1a) {
      local_328[0] = false;
      (**(code **)(*(longlong *)param_1 + 0x10))();
    }
    else {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
      ::operator<<(param_1,local_328);
    }
  }
  if (local_328[0] == false) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_308);
  }
  else {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  pUVar20 = (this->BoneCompressionCodec).field0_0x0.DebugPtr;
  bVar30 = pUVar20 == (UAnimBoneCompressionCodec *)0x0;
  if (bVar30) {
    pFVar23 = ::FString::FString(&local_138,L"");
  }
  else {
    pFVar23 = (FString *)(**(code **)(pUVar20->_padding_ + 0x2b8))(pUVar20,local_128);
  }
  local_2e0.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
  (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.Data.ArrayNum = (pFVar23->Data).ArrayNum;
  local_2e0.Data.ArrayMax = (pFVar23->Data).ArrayMax;
  (pFVar23->Data).ArrayNum = 0;
  (pFVar23->Data).ArrayMax = 0;
  if ((bVar30) && (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((!bVar30) && (local_128[0] != (void *)0x0)) {
    FMemory::Free(local_128[0]);
  }
  ::FString::FString(&local_270,L"None");
  if (local_2e0.Data.ArrayNum == local_270.Data.ArrayNum) {
    if (local_2e0.Data.ArrayNum < 2) {
      bVar30 = true;
    }
    else {
      iVar16 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_2e0.Data.AllocatorInstance.Data,
                          (wchar_t *)local_270.Data.AllocatorInstance.Data);
      bVar30 = iVar16 == 0;
    }
  }
  else {
    bVar30 = local_2e0.Data.ArrayNum + local_270.Data.ArrayNum == 1;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if ((bVar30) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("!BoneCodecDDCHandle.Equals(L\"None\", ESearchCase::IgnoreCase)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                          ,0x5e8,L""), bVar30)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  ::operator<<(param_1,&local_2e0);
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)(this->CurveCompressionCodec).field0_0x0.DebugPtr,&local_228,
             (UObject *)0x0);
  ::operator<<(param_1,&local_228);
  plVar8 = *(longlong **)&param_1->field_0x8;
  local_318 = (this->CompressedCurveByteStream).ArrayNum;
  if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_318,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_318);
    }
  }
  else {
    local_318 = *(uint *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this->CompressedCurveByteStream).AllocatorInstance.Data,
             (longlong)(int)local_318);
  pUVar29 = local_310;
  if ((this->BoneCompressionCodec).field0_0x0.DebugPtr != (UAnimBoneCompressionCodec *)0x0) {
    pIVar11 = (this->CompressedDataStructure).Ptr;
    (**(code **)(pIVar11->_padding_ + 8))(pIVar11,local_310,param_1);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (local_308 != (void *)0x0) {
    FMemory::Free(local_308);
  }
LAB_147418cc3:
  if ((((param_1->field_0x28 & 1) != 0) ||
      ((*(longlong *)&param_1->field_0x68 != 0 &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)))) &&
     (pUVar21 = (this->CurveCompressionCodec).field0_0x0.DebugPtr,
     pUVar21 != (UAnimCurveCompressionCodec *)0x0)) {
    (**(code **)(*(longlong *)pUVar21 + 0x2b8))(pUVar21,pUVar29,this);
  }
  return;
}

// ~FCompressedAnimSequence @ 1474b51d0

void __thiscall FCompressedAnimSequence::~FCompressedAnimSequence(FCompressedAnimSequence *this)

{
  ICompressedAnimData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  pIVar1 = (this->CompressedDataStructure).Ptr;
  if (pIVar1 != (ICompressedAnimData *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  pFVar2 = (this->CompressedCurveByteStream).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TMaybeMappedAllocator<0>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->CompressedByteStream);
  pFVar2 = (this->IndexedCurveNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CompressedCurveNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

