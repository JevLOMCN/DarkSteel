// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 64

// FEditorBulkData @ 141f21310

FEditorBulkData * __thiscall
UE::Serialization::FEditorBulkData::FEditorBulkData
          (FEditorBulkData *this,FEditorBulkData *param_1,ETornOff param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  FIdentityFunctor local_res8;
  ForAnyElementType local_38;
  undefined8 local_30;
  FRecursiveMutex *local_28;
  FRecursiveMutex *pFStack_20;
  
  (this->BulkDataId).A = 0;
  (this->BulkDataId).B = 0;
  (this->BulkDataId).C = 0;
  (this->BulkDataId).D = 0;
  (this->PayloadContentId).Hash[0] = '\0';
  (this->PayloadContentId).Hash[1] = '\0';
  (this->PayloadContentId).Hash[2] = '\0';
  (this->PayloadContentId).Hash[3] = '\0';
  (this->PayloadContentId).Hash[4] = '\0';
  (this->PayloadContentId).Hash[5] = '\0';
  (this->PayloadContentId).Hash[6] = '\0';
  (this->PayloadContentId).Hash[7] = '\0';
  (this->PayloadContentId).Hash[8] = '\0';
  (this->PayloadContentId).Hash[9] = '\0';
  (this->PayloadContentId).Hash[10] = '\0';
  (this->PayloadContentId).Hash[0xb] = '\0';
  (this->PayloadContentId).Hash[0xc] = '\0';
  (this->PayloadContentId).Hash[0xd] = '\0';
  (this->PayloadContentId).Hash[0xe] = '\0';
  (this->PayloadContentId).Hash[0xf] = '\0';
  (this->PayloadContentId).Hash[0x10] = '\0';
  (this->PayloadContentId).Hash[0x11] = '\0';
  (this->PayloadContentId).Hash[0x12] = '\0';
  (this->PayloadContentId).Hash[0x13] = '\0';
  (this->PackagePath).HeaderExtension = Unspecified;
  local_28 = &this->Mutex;
  (this->Payload).Owner.Owner = (FBufferOwner *)0x0;
  local_28->State = (atomic<unsigned_int>)0x0;
  local_28->ThreadId = (atomic<unsigned_int>)0x0;
  pFStack_20 = &param_1->Mutex;
  this->PayloadSize = 0;
  this->AttachedAr = (FArchive *)0x0;
  this->OffsetInFile = -1;
  (this->PackagePath).PackageName.ComparisonIndex = 0;
  (this->PackagePath).PackageName.Number = 0;
  this->Flags = None;
  this->bSkipVirtualization = false;
  (this->CompressionSettings).Compressor = NotSet;
  (this->CompressionSettings).CompressionLevel = None;
  (this->CompressionSettings).bIsSet = false;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,2);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_38,2,(int *)((longlong)&local_30 + 4));
  FVar1.Data = local_38.Data;
  *(FRecursiveMutex **)local_38.Data = local_28;
  *(FRecursiveMutex **)(local_38.Data + 8) = pFStack_20;
  iVar2 = (int)local_30;
  lVar3 = (longlong)(int)local_30;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar1.Data,iVar2,local_res8,(TLess<void>)local_res8);
  for (FVar4.Data = FVar1.Data; FVar4.Data != FVar1.Data + lVar3 * 8; FVar4.Data = FVar4.Data + 8) {
    FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar4.Data);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  this->Flags = this->Flags | IsTornOff;
  operator=(this,param_1);
  for (FVar4.Data = FVar1.Data; FVar4.Data != FVar1.Data + lVar3 * 8; FVar4.Data = FVar4.Data + 8) {
    FRecursiveMutex::Unlock(*(FRecursiveMutex **)FVar4.Data);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return this;
}

// FEditorBulkData @ 141f21480

FEditorBulkData * __thiscall
UE::Serialization::FEditorBulkData::FEditorBulkData(FEditorBulkData *this,FEditorBulkData *param_1)

{
  (this->BulkDataId).A = 0;
  (this->BulkDataId).B = 0;
  (this->BulkDataId).C = 0;
  (this->BulkDataId).D = 0;
  (this->PayloadContentId).Hash[0] = '\0';
  (this->PayloadContentId).Hash[1] = '\0';
  (this->PayloadContentId).Hash[2] = '\0';
  (this->PayloadContentId).Hash[3] = '\0';
  (this->PayloadContentId).Hash[4] = '\0';
  (this->PayloadContentId).Hash[5] = '\0';
  (this->PayloadContentId).Hash[6] = '\0';
  (this->PayloadContentId).Hash[7] = '\0';
  (this->PayloadContentId).Hash[8] = '\0';
  (this->PayloadContentId).Hash[9] = '\0';
  (this->PayloadContentId).Hash[10] = '\0';
  (this->PayloadContentId).Hash[0xb] = '\0';
  (this->PayloadContentId).Hash[0xc] = '\0';
  (this->PayloadContentId).Hash[0xd] = '\0';
  (this->PayloadContentId).Hash[0xe] = '\0';
  (this->PayloadContentId).Hash[0xf] = '\0';
  (this->PayloadContentId).Hash[0x10] = '\0';
  (this->PayloadContentId).Hash[0x11] = '\0';
  (this->PayloadContentId).Hash[0x12] = '\0';
  (this->PayloadContentId).Hash[0x13] = '\0';
  (this->Payload).Owner.Owner = (FBufferOwner *)0x0;
  this->PayloadSize = 0;
  this->AttachedAr = (FArchive *)0x0;
  (this->PackagePath).PackageName.ComparisonIndex = 0;
  (this->PackagePath).PackageName.Number = 0;
  this->Flags = None;
  (this->Mutex).State = (atomic<unsigned_int>)0x0;
  *(undefined8 *)&(this->Mutex).ThreadId = 0;
  this->OffsetInFile = -1;
  (this->PackagePath).HeaderExtension = Unspecified;
  operator=(this,param_1);
  return this;
}

// FEditorBulkData @ 141f214e0

FEditorBulkData * __thiscall
UE::Serialization::FEditorBulkData::FEditorBulkData(FEditorBulkData *this,FEditorBulkData *param_1)

{
  (this->BulkDataId).A = 0;
  (this->BulkDataId).B = 0;
  (this->BulkDataId).C = 0;
  (this->BulkDataId).D = 0;
  (this->PayloadContentId).Hash[0] = '\0';
  (this->PayloadContentId).Hash[1] = '\0';
  (this->PayloadContentId).Hash[2] = '\0';
  (this->PayloadContentId).Hash[3] = '\0';
  (this->PayloadContentId).Hash[4] = '\0';
  (this->PayloadContentId).Hash[5] = '\0';
  (this->PayloadContentId).Hash[6] = '\0';
  (this->PayloadContentId).Hash[7] = '\0';
  (this->PayloadContentId).Hash[8] = '\0';
  (this->PayloadContentId).Hash[9] = '\0';
  (this->PayloadContentId).Hash[10] = '\0';
  (this->PayloadContentId).Hash[0xb] = '\0';
  (this->PayloadContentId).Hash[0xc] = '\0';
  (this->PayloadContentId).Hash[0xd] = '\0';
  (this->PayloadContentId).Hash[0xe] = '\0';
  (this->PayloadContentId).Hash[0xf] = '\0';
  (this->PayloadContentId).Hash[0x10] = '\0';
  (this->PayloadContentId).Hash[0x11] = '\0';
  (this->PayloadContentId).Hash[0x12] = '\0';
  (this->PayloadContentId).Hash[0x13] = '\0';
  (this->Payload).Owner.Owner = (FBufferOwner *)0x0;
  this->PayloadSize = 0;
  this->AttachedAr = (FArchive *)0x0;
  (this->PackagePath).PackageName.ComparisonIndex = 0;
  (this->PackagePath).PackageName.Number = 0;
  this->Flags = None;
  (this->Mutex).State = (atomic<unsigned_int>)0x0;
  *(undefined8 *)&(this->Mutex).ThreadId = 0;
  this->OffsetInFile = -1;
  (this->PackagePath).HeaderExtension = Unspecified;
  operator=(this,param_1);
  return this;
}

// ~FEditorBulkData @ 141f239f0

void __thiscall UE::Serialization::FEditorBulkData::~FEditorBulkData(FEditorBulkData *this)

{
  FArchive *pFVar1;
  
  pFVar1 = this->AttachedAr;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,this,0);
    this->AttachedAr = (FArchive *)0x0;
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->Payload).Owner);
  return;
}

// operator= @ 141f24280

FEditorBulkData * __thiscall
UE::Serialization::FEditorBulkData::operator=(FEditorBulkData *this,FEditorBulkData *param_1)

{
  FRecursiveMutex *this_00;
  FArchive *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  ECompressionLevel EVar7;
  ForAnyElementType FVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FIdentityFunctor local_res8;
  ForAnyElementType local_48;
  undefined8 local_40;
  FRecursiveMutex *local_38;
  FRecursiveMutex *pFStack_30;
  
  local_38 = &this->Mutex;
  this_00 = &param_1->Mutex;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  pFStack_30 = this_00;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  FVar8.Data = local_48.Data;
  *(FRecursiveMutex **)local_48.Data = local_38;
  *(FRecursiveMutex **)(local_48.Data + 8) = pFStack_30;
  iVar9 = (int)local_40;
  lVar11 = (longlong)(int)local_40;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar8.Data,iVar9,local_res8,(TLess<void>)local_res8);
  for (FVar10.Data = FVar8.Data; FVar10.Data != FVar8.Data + lVar11 * 8;
      FVar10.Data = FVar10.Data + 8) {
    FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar10.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  pFVar1 = this->AttachedAr;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,this,0);
  }
  uVar3 = (param_1->BulkDataId).B;
  uVar4 = (param_1->BulkDataId).C;
  uVar5 = (param_1->BulkDataId).D;
  (this->BulkDataId).A = (param_1->BulkDataId).A;
  (this->BulkDataId).B = uVar3;
  (this->BulkDataId).C = uVar4;
  (this->BulkDataId).D = uVar5;
  uVar2 = *(undefined8 *)((param_1->PayloadContentId).Hash + 8);
  *(undefined8 *)(this->PayloadContentId).Hash = *(undefined8 *)(param_1->PayloadContentId).Hash;
  *(undefined8 *)((this->PayloadContentId).Hash + 8) = uVar2;
  *(undefined4 *)((this->PayloadContentId).Hash + 0x10) =
       *(undefined4 *)((param_1->PayloadContentId).Hash + 0x10);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&(this->Payload).Owner,&(param_1->Payload).Owner);
  this->PayloadSize = param_1->PayloadSize;
  pFVar1 = param_1->AttachedAr;
  this->AttachedAr = pFVar1;
  this->OffsetInFile = param_1->OffsetInFile;
  (this->PackagePath).PackageName = (param_1->PackagePath).PackageName;
  uVar6 = *(undefined3 *)&(param_1->PackagePath).field_0x9;
  (this->PackagePath).HeaderExtension = (param_1->PackagePath).HeaderExtension;
  *(undefined3 *)&(this->PackagePath).field_0x9 = uVar6;
  this->Flags = param_1->Flags;
  EVar7 = (param_1->CompressionSettings).CompressionLevel;
  (this->CompressionSettings).Compressor = (param_1->CompressionSettings).Compressor;
  (this->CompressionSettings).CompressionLevel = EVar7;
  (this->CompressionSettings).bIsSet = (param_1->CompressionSettings).bIsSet;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1c0))(pFVar1,this);
  }
  FRecursiveMutex::Lock(this_00);
  pFVar1 = param_1->AttachedAr;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,param_1,0);
    param_1->AttachedAr = (FArchive *)0x0;
  }
  (param_1->PayloadContentId).Hash[0] = '\0';
  (param_1->PayloadContentId).Hash[1] = '\0';
  (param_1->PayloadContentId).Hash[2] = '\0';
  (param_1->PayloadContentId).Hash[3] = '\0';
  (param_1->PayloadContentId).Hash[4] = '\0';
  (param_1->PayloadContentId).Hash[5] = '\0';
  (param_1->PayloadContentId).Hash[6] = '\0';
  (param_1->PayloadContentId).Hash[7] = '\0';
  (param_1->PayloadContentId).Hash[8] = '\0';
  (param_1->PayloadContentId).Hash[9] = '\0';
  (param_1->PayloadContentId).Hash[10] = '\0';
  (param_1->PayloadContentId).Hash[0xb] = '\0';
  (param_1->PayloadContentId).Hash[0xc] = '\0';
  (param_1->PayloadContentId).Hash[0xd] = '\0';
  (param_1->PayloadContentId).Hash[0xe] = '\0';
  (param_1->PayloadContentId).Hash[0xf] = '\0';
  (param_1->PayloadContentId).Hash[0x10] = '\0';
  (param_1->PayloadContentId).Hash[0x11] = '\0';
  (param_1->PayloadContentId).Hash[0x12] = '\0';
  (param_1->PayloadContentId).Hash[0x13] = '\0';
  FSharedBuffer::Reset(&param_1->Payload);
  param_1->PayloadSize = 0;
  param_1->OffsetInFile = -1;
  FPackagePath::Empty(&param_1->PackagePath);
  param_1->Flags = None;
  (param_1->CompressionSettings).Compressor = NotSet;
  (param_1->CompressionSettings).CompressionLevel = None;
  (param_1->CompressionSettings).bIsSet = false;
  FRecursiveMutex::Unlock(this_00);
  for (FVar10.Data = FVar8.Data; FVar10.Data != FVar8.Data + lVar11 * 8;
      FVar10.Data = FVar10.Data + 8) {
    FRecursiveMutex::Unlock(*(FRecursiveMutex **)FVar10.Data);
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return this;
}

// operator= @ 141f244a0

FEditorBulkData * __thiscall
UE::Serialization::FEditorBulkData::operator=(FEditorBulkData *this,FEditorBulkData *param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ECompressionLevel EVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  EFlags EVar8;
  FEditorBulkData *pFVar9;
  FGuid *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FIdentityFunctor local_res8;
  ForAnyElementType local_58;
  undefined8 local_50;
  FRecursiveMutex *local_48;
  FRecursiveMutex *pFStack_40;
  FGuid local_38;
  
  local_48 = &this->Mutex;
  pFStack_40 = &param_1->Mutex;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,2);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_58,2,(int *)((longlong)&local_50 + 4));
  FVar5.Data = local_58.Data;
  *(FRecursiveMutex **)local_58.Data = local_48;
  *(FRecursiveMutex **)(local_58.Data + 8) = pFStack_40;
  iVar6 = (int)local_50;
  lVar11 = (longlong)(int)local_50;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar5.Data,iVar6,local_res8,(TLess<void>)local_res8);
  for (FVar12.Data = FVar5.Data; FVar12.Data != FVar5.Data + lVar11 * 8;
      FVar12.Data = FVar12.Data + 8) {
    FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar12.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  bVar7 = false;
  if ((char)this->Flags < '\0') {
    if (((this->Flags & HasRegistered) != None) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Flags, EFlags::HasRegistered)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0x216,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FEditorBulkData *)(*pcVar2)();
      return pFVar9;
    }
    uVar13 = (param_1->BulkDataId).A;
    uVar14 = (param_1->BulkDataId).B;
    uVar15 = (param_1->BulkDataId).C;
    uVar16 = (param_1->BulkDataId).D;
    bVar7 = true;
  }
  else if ((param_1->Flags & IsTornOff) == None) {
    if (((((this->BulkDataId).D != 0 || (this->BulkDataId).C != 0) || (this->BulkDataId).B != 0) ||
         (this->BulkDataId).A != 0) ||
       ((((param_1->BulkDataId).D == 0 && (param_1->BulkDataId).C == 0) &&
        (param_1->BulkDataId).B == 0) && (param_1->BulkDataId).A == 0)) goto LAB_141f245f5;
    pFVar10 = FGuid::NewGuid(&local_38);
    uVar13 = pFVar10->A;
    uVar14 = pFVar10->B;
    uVar15 = pFVar10->C;
    uVar16 = pFVar10->D;
    bVar7 = false;
  }
  else {
    uVar13 = (param_1->BulkDataId).A;
    uVar14 = (param_1->BulkDataId).B;
    uVar15 = (param_1->BulkDataId).C;
    uVar16 = (param_1->BulkDataId).D;
    bVar7 = true;
  }
  (this->BulkDataId).A = uVar13;
  (this->BulkDataId).B = uVar14;
  (this->BulkDataId).C = uVar15;
  (this->BulkDataId).D = uVar16;
LAB_141f245f5:
  pFVar1 = this->AttachedAr;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,this,0);
  }
  uVar3 = *(undefined8 *)((param_1->PayloadContentId).Hash + 8);
  *(undefined8 *)(this->PayloadContentId).Hash = *(undefined8 *)(param_1->PayloadContentId).Hash;
  *(undefined8 *)((this->PayloadContentId).Hash + 8) = uVar3;
  *(undefined4 *)((this->PayloadContentId).Hash + 0x10) =
       *(undefined4 *)((param_1->PayloadContentId).Hash + 0x10);
  FSharedBuffer::operator=(&this->Payload,&param_1->Payload);
  this->PayloadSize = param_1->PayloadSize;
  this->OffsetInFile = param_1->OffsetInFile;
  FPackagePath::operator=(&this->PackagePath,&param_1->PackagePath);
  pFVar1 = this->AttachedAr;
  this->Flags = param_1->Flags;
  EVar4 = (param_1->CompressionSettings).CompressionLevel;
  (this->CompressionSettings).Compressor = (param_1->CompressionSettings).Compressor;
  (this->CompressionSettings).CompressionLevel = EVar4;
  (this->CompressionSettings).bIsSet = (param_1->CompressionSettings).bIsSet;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1c0))(pFVar1,this);
  }
  EVar8 = this->Flags & ~(WasDetached|IsTornOff|HasRegistered);
  this->Flags = EVar8;
  FVar12.Data = FVar5.Data;
  if (bVar7) {
    this->Flags = EVar8 | IsTornOff;
  }
  for (; FVar12.Data != FVar5.Data + lVar11 * 8; FVar12.Data = FVar12.Data + 8) {
    FRecursiveMutex::Unlock(*(FRecursiveMutex **)FVar12.Data);
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return this;
}

// operator() @ 141f271d0

wchar_t * __thiscall
`UE::Serialization::FEditorBulkData::PullData'::__l2::<lambda_1>::operator()
          (void *this,EFlags param_1)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConfigSetting.bEnabled = false;
      FConfigCacheIni::GetBool
                (GConfig,L"EditorBulkData",L"LogCookedStatus",&ConfigSetting.bEnabled,&GEditorIni);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (ConfigSetting.bEnabled != false) {
    pwVar1 = L" [Uncooked]";
    if ((param_1 >> 10 & 1) != 0) {
      pwVar1 = L" [Cooked]";
    }
    return pwVar1;
  }
  return L"";
}

// operator() @ 141f27480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f27700) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000141f27704 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()
          (void *this,FLinkerSave *param_1,FArchive *param_2,FArchive *param_3,long64 param_4)

{
  int *piVar1;
  TArray<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  code **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_88;
  long64 lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  code *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (((*(longlong *)&param_2->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_2->field_0x68 + 0x10) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportsArchive.IsCooking() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x723,L"FEditorBulkData payload should not be written during a cook"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Serialization::FEditorBulkData::SerializeData
            (*(FEditorBulkData **)this,param_3,(FCompressedBuffer *)((longlong)this + 0x10),
             *(EFlags *)((longlong)this + 0x28));
  UE::Serialization::UpdateArchiveData<__int64>(param_2,*(long64 *)((longlong)this + 8),&param_4);
  pFVar7 = FLinkerSave::GetFilename(param_1);
  if (1 < (pFVar7->Data).ArrayNum) {
    bVar5 = UE::Serialization::ShouldSaveToPackageSidecar();
    if (bVar5) {
      iVar6 = (param_1->SidecarDataToAppend).ArrayNum;
      piVar1 = &(param_1->SidecarDataToAppend).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(param_1->SidecarDataToAppend).AllocatorInstance,piVar1);
      }
      (param_1->SidecarDataToAppend).ArrayNum = iVar6 + 1;
      pFVar8 = (param_1->SidecarDataToAppend).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)(pFVar8 + 8) = 0;
      *(undefined8 *)(pFVar8 + 0x10) = 0;
      *(undefined8 *)(pFVar8 + 0x18) = 0;
      *(undefined8 *)(pFVar8 + 0x20) = 0;
      *(undefined8 *)(pFVar8 + 0x28) = 0;
      lVar9 = *(longlong *)this;
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)pFVar8 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined8 *)(pFVar8 + 8) = uVar4;
      *(undefined4 *)(pFVar8 + 0x10) = *(undefined4 *)(lVar9 + 0x20);
      FCompositeBuffer::operator=
                ((FCompositeBuffer *)(pFVar8 + 0x18),(FCompositeBuffer *)((longlong)this + 0x10));
    }
    local_88 = *(undefined8 *)this;
    pTVar2 = &param_1->PostSaveCallbacks;
    lStack_80 = param_4;
    local_78 = *(undefined4 *)((longlong)this + 0x28);
    uStack_70 = *(undefined8 *)((longlong)this + 0x30);
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x28,8);
    *local_40 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
                 ::_vftable_;
    local_40[1] = local_88;
    local_40[2] = lStack_80;
    local_40[3] = CONCAT44(uStack_74,local_78);
    local_40[4] = uStack_70;
    if (local_40 + 1 != (undefined8 *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,void,FPackagePath_const_&,FObjectPostSaveContext>
                    ::Call;
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)local_68) &&
       (lVar9 = (longlong)(param_1->PostSaveCallbacks).ArrayMax,
       (FScriptContainerElement *)local_68 < pFVar8 + lVar9 * 0x30)) {
      local_a0 = (longlong)(param_1->PostSaveCallbacks).ArrayNum;
      local_98 = 0x30;
      local_b8 = local_68;
      local_b0 = pFVar8;
      local_a8 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (param_1->PostSaveCallbacks).ArrayNum;
    piVar1 = &(param_1->PostSaveCallbacks).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->PostSaveCallbacks).ArrayNum = iVar6 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
    *(code **)pFVar8 = local_68[0];
    *(undefined8 **)(pFVar8 + 0x28) = local_40;
    local_40 = (undefined8 *)0x0;
    *(undefined4 *)(pFVar8 + 0x10) = local_58;
    *(undefined4 *)(pFVar8 + 0x14) = uStack_54;
    *(undefined4 *)(pFVar8 + 0x18) = uStack_50;
    *(undefined4 *)(pFVar8 + 0x1c) = uStack_4c;
    *(longlong *)(pFVar8 + 0x20) = local_48;
    if ((*(longlong *)pFVar8 == 0) && (local_68[0] != (code *)0x0)) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  return;
}

// operator() @ 141f27730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f2791f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x000141f27923 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()
          (void *this,FLinkerSave *param_1,FPackageTrailer *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long64 lVar5;
  FString *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TArray<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  undefined1 auStack_c8 [32];
  code **local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_78;
  long64 lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  code *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((param_1->_padding_ != 0) && (*(longlong *)(param_1->_padding_ + 0x10) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkerSave.IsCooking() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x763,
                         L"FEditorBulkData payload should not be written to a package trailer during a cook"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = UE::FPackageTrailer::FindPayloadOffsetInFile
                    (param_2,(FIoHash *)(*(longlong *)this + 0x10));
  pFVar6 = FLinkerSave::GetFilename(param_1);
  if (1 < (pFVar6->Data).ArrayNum) {
    local_68 = *(undefined4 *)((longlong)this + 8);
    local_78 = *(undefined8 *)this;
    pTVar9 = &param_1->PostSaveCallbacks;
    uStack_60 = *(undefined8 *)((longlong)this + 0x10);
    local_58[0] = (code *)0x0;
    lStack_70 = lVar5;
    local_30 = FMemory::Malloc(0x28,8);
    *local_30 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
                 ::_vftable_;
    local_30[1] = local_78;
    local_30[2] = lStack_70;
    local_30[3] = CONCAT44(uStack_64,local_68);
    local_30[4] = uStack_60;
    if (local_30 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,void,FPackagePath_const_&,FObjectPostSaveContext>
                    ::Call;
    }
    pFVar8 = (pTVar9->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)local_58) &&
       (lVar7 = (longlong)(param_1->PostSaveCallbacks).ArrayMax,
       (FScriptContainerElement *)local_58 < pFVar8 + lVar7 * 0x30)) {
      local_90 = (longlong)(param_1->PostSaveCallbacks).ArrayNum;
      local_88 = 0x30;
      local_a8 = local_58;
      local_a0 = pFVar8;
      local_98 = lVar7;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_1->PostSaveCallbacks).ArrayNum;
    piVar1 = &(param_1->PostSaveCallbacks).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar9->AllocatorInstance,piVar1);
    }
    (param_1->PostSaveCallbacks).ArrayNum = iVar4 + 1;
    pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
    *(code **)pFVar8 = local_58[0];
    *(undefined8 **)(pFVar8 + 0x28) = local_30;
    local_30 = (undefined8 *)0x0;
    *(undefined4 *)(pFVar8 + 0x10) = local_48;
    *(undefined4 *)(pFVar8 + 0x14) = uStack_44;
    *(undefined4 *)(pFVar8 + 0x18) = uStack_40;
    *(undefined4 *)(pFVar8 + 0x1c) = uStack_3c;
    *(longlong *)(pFVar8 + 0x20) = local_38;
    if ((*(longlong *)pFVar8 == 0) && (local_58[0] != (code *)0x0)) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
  }
  return;
}

// BuildFlagsForSerialization @ 141f29710

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

EFlags __thiscall
UE::Serialization::FEditorBulkData::BuildFlagsForSerialization
          (FEditorBulkData *this,FArchive *param_1,bool param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  bool bVar3;
  EFlags EVar4;
  FLinkerSave *this_00;
  FString *pFVar5;
  EFlags EVar6;
  FLinkerSave *pFVar7;
  
  EVar4 = this->Flags;
  if ((param_1->field_0x28 & 4) == 0) {
    return EVar4;
  }
  this_00 = (FLinkerSave *)(**(code **)(*(longlong *)param_1 + 0x20))();
  pFVar7 = (FLinkerSave *)0x0;
  if ((this_00 == (FLinkerSave *)0x0) || ((int)this_00->_padding_ != 2)) {
    this_00 = pFVar7;
  }
  if ((EVar4 & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) == None) {
    bVar2 = FPackagePath::IsEmpty(&this->PackagePath);
    if (!bVar2) goto LAB_141f29784;
    bVar2 = false;
  }
  else {
LAB_141f29784:
    bVar2 = true;
  }
  if ((param_2) && (bVar2)) {
    EVar6 = EVar4 | ReferencesWorkspaceDomain;
    if ((EVar4 & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) != None) {
      EVar6 = EVar4;
    }
    EVar6 = EVar6 & ~(HasPayloadSidecarFile|IsVirtualized);
LAB_141f297a0:
    bVar2 = false;
  }
  else {
    if (this_00 == (FLinkerSave *)0x0) {
LAB_141f29827:
      pTVar1 = CVarShouldRehydrateOnSave.Ref;
      EVar6 = EVar4 & ~(ReferencesWorkspaceDomain|LegacyKeyWasGuidDerived|LegacyFileIsCompressed|
                        ReferencesLegacyFile|HasPayloadSidecarFile);
      if (this_00 == (FLinkerSave *)0x0) goto LAB_141f29810;
      if (this_00->bRehydratePayloads == false) {
        bVar3 = IsInParallelGameThread();
        if (!bVar3) {
          bVar3 = IsInGameThread();
          if (!bVar3) {
            pFVar7 = (FLinkerSave *)&DAT_00000001;
          }
        }
        if (*(bool *)((longlong)&pFVar7->_padding_ + (longlong)pTVar1->ShadowedValue) == false)
        goto LAB_141f29810;
      }
      if (!param_2) {
        EVar6 = EVar4 & ~(ReferencesWorkspaceDomain|LegacyKeyWasGuidDerived|LegacyFileIsCompressed|
                          ReferencesLegacyFile|HasPayloadSidecarFile|IsVirtualized);
        goto LAB_141f297a0;
      }
    }
    else {
      pFVar5 = FLinkerSave::GetFilename(this_00);
      if ((pFVar5->Data).ArrayNum < 2) goto LAB_141f29827;
      bVar3 = ShouldSaveToPackageSidecar();
      if (!bVar3) goto LAB_141f29827;
      EVar6 = EVar4 & ~(ReferencesWorkspaceDomain|LegacyKeyWasGuidDerived|LegacyFileIsCompressed|
                        ReferencesLegacyFile|IsVirtualized) | HasPayloadSidecarFile;
LAB_141f29810:
      if (!param_2) goto LAB_141f297a0;
    }
    if ((bVar2) || ((EVar6 & IsVirtualized) != None)) goto LAB_141f297a0;
    bVar2 = true;
  }
  if (this_00 != (FLinkerSave *)0x0) {
    bVar3 = ShouldSaveToPackageSidecar();
    if (((!bVar3) && ((this_00->PackageTrailerBuilder).Ptr != (FPackageTrailerBuilder *)0x0)) &&
       (!bVar2)) {
      EVar6 = EVar6 | StoredInPackageTrailer;
      goto LAB_141f29874;
    }
  }
  EVar6 = EVar6 & ~StoredInPackageTrailer;
LAB_141f29874:
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  EVar4 = EVar6 | IsCooked;
  if (!bVar2) {
    EVar4 = EVar6;
  }
  return EVar4 & ~(WasDetached|IsTornOff|HasRegistered);
}

// CanLoadDataFromDisk @ 141f2a730

bool __thiscall UE::Serialization::FEditorBulkData::CanLoadDataFromDisk(FEditorBulkData *this)

{
  bool bVar1;
  
  bVar1 = FPackagePath::IsEmpty(&this->PackagePath);
  if ((!bVar1) && ((this->Flags & WasDetached) == None)) {
    return true;
  }
  return false;
}

// CanSaveForRegistry @ 141f2a800

bool __thiscall UE::Serialization::FEditorBulkData::CanSaveForRegistry(FEditorBulkData *this)

{
  FRecursiveMutex *this_00;
  bool bVar1;
  
  this_00 = &this->Mutex;
  FRecursiveMutex::Lock(this_00);
  if (((((this->BulkDataId).D != 0 || (this->BulkDataId).C != 0) || (this->BulkDataId).B != 0) ||
       (this->BulkDataId).A != 0) && (0 < this->PayloadSize)) {
    FRecursiveMutex::Lock(this_00);
    if (((this->Payload).Owner.Owner != (FBufferOwner *)0x0) &&
       ((this->Flags & IsVirtualized) == None)) {
      bVar1 = FPackagePath::IsEmpty(&this->PackagePath);
      if (bVar1) {
        FRecursiveMutex::Unlock(this_00);
        goto LAB_141f2a857;
      }
    }
    FRecursiveMutex::Unlock(this_00);
    if (((char)this->Flags < '\0') && ((this->Flags & HasRegistered) == None)) {
      bVar1 = true;
      goto LAB_141f2a859;
    }
  }
LAB_141f2a857:
  bVar1 = false;
LAB_141f2a859:
  FRecursiveMutex::Unlock(this_00);
  return bVar1;
}

// CanUnloadData @ 141f2a890

bool __thiscall UE::Serialization::FEditorBulkData::CanUnloadData(FEditorBulkData *this)

{
  bool bVar1;
  
  if ((this->Flags & IsVirtualized) == None) {
    bVar1 = FPackagePath::IsEmpty(&this->PackagePath);
    if ((bVar1) || ((this->Flags & WasDetached) != None)) {
      return false;
    }
  }
  return true;
}

// CreateFromBulkData @ 141f2c050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::CreateFromBulkData
          (FEditorBulkData *this,FBulkData *param_1,FGuid *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  EFlags EVar7;
  FGuid *pFVar8;
  FBlake3Hash *pFVar9;
  UPackage *pUVar10;
  FLinkerLoad *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  undefined1 auStack_858 [32];
  FPackagePath local_838;
  FString local_828;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  FGuid local_804;
  FBlake3Hash local_7f4;
  FBlake3 local_7d0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_858;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId803,"FEditorBulkData::CreateFromBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x323);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId803);
  }
  FRecursiveMutex::Lock(&this->Mutex);
  Reset(this);
  bVar2 = false;
  if (*(int *)((param_1->BulkMeta).Data + 1) != 0 || (param_1->BulkMeta).Data[0] != '\0') {
    ::LexToString(&local_828,&param_1->BulkChunkId);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_828.Data.ArrayNum != 0) {
      FVar13.Data = local_828.Data.AllocatorInstance.Data;
    }
    pFVar8 = CreateUniqueGuid(&local_804,param_2,param_3,(wchar_t *)FVar13.Data);
    uVar3 = pFVar8->B;
    uVar4 = pFVar8->C;
    uVar5 = pFVar8->D;
    (this->BulkDataId).A = pFVar8->A;
    (this->BulkDataId).B = uVar3;
    (this->BulkDataId).C = uVar4;
    (this->BulkDataId).D = uVar5;
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
    if ((((this->BulkDataId).B == 0 && (this->BulkDataId).A == 0) && (this->BulkDataId).D == 0) &&
        (this->BulkDataId).C == 0) {
      local_818 = 0;
      uStack_814 = 0;
      uStack_810 = 0;
      uStack_80c = 0;
      local_808 = 0;
    }
    else {
      FBlake3::Reset(&local_7d0);
      FBlake3::Update(&local_7d0,this,4);
      FBlake3::Update(&local_7d0,&(this->BulkDataId).B,4);
      FBlake3::Update(&local_7d0,&(this->BulkDataId).C,4);
      FBlake3::Update(&local_7d0,&(this->BulkDataId).D,4);
      pFVar9 = FBlake3::Finalize(&local_7d0,&local_7f4);
      local_818 = *(undefined4 *)pFVar9->Hash;
      uStack_814 = *(undefined4 *)(pFVar9->Hash + 4);
      uStack_810 = *(undefined4 *)(pFVar9->Hash + 8);
      uStack_80c = *(undefined4 *)(pFVar9->Hash + 0xc);
      local_808 = *(undefined4 *)(pFVar9->Hash + 0x10);
    }
    bVar2 = true;
    *(undefined4 *)(this->PayloadContentId).Hash = local_818;
    *(undefined4 *)((this->PayloadContentId).Hash + 4) = uStack_814;
    *(undefined4 *)((this->PayloadContentId).Hash + 8) = uStack_810;
    *(undefined4 *)((this->PayloadContentId).Hash + 0xc) = uStack_80c;
    *(undefined4 *)((this->PayloadContentId).Hash + 0x10) = local_808;
  }
  this->PayloadSize = (ulonglong)*(uint5 *)(param_1->BulkMeta).Data;
  if (param_3 != (UObject *)0x0) {
    pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_3);
    if ((pUVar10 == (UPackage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Package != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0xb7,L"Owner was not a valid UPackage!"), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar11 = FLinkerLoad::FindExistingLinkerForPackage(pUVar10);
    if (pFVar11 != (FLinkerLoad *)0x0) {
      FPackagePath::FPackagePath(&local_838,&pFVar11->PackagePath);
      goto LAB_141f2c2c6;
    }
  }
  local_838.HeaderExtension = Unspecified;
  local_838._9_3_ = 0;
  local_838.PackageName.ComparisonIndex.Value = 0;
  local_838.PackageName.Number = 0;
LAB_141f2c2c6:
  (this->PackagePath).PackageName = local_838.PackageName;
  (this->PackagePath).HeaderExtension = local_838.HeaderExtension;
  *(int3 *)&(this->PackagePath).field_0x9 = local_838._9_3_;
  uVar12 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar12) {
    uVar12 = 0xffffffffffffffff;
  }
  this->Flags = this->Flags | ReferencesLegacyFile;
  this->OffsetInFile = uVar12;
  EVar7 = LegacyFileIsCompressed;
  if (((param_1->BulkMeta).Data[0xc] & 2) == 0) {
    EVar7 = DisablePayloadCompression;
  }
  EVar7 = EVar7 | this->Flags;
  this->Flags = EVar7;
  if (bVar2) {
    this->Flags = EVar7 | LegacyKeyWasGuidDerived;
  }
  FRecursiveMutex::Unlock(&this->Mutex);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateLegacyUniqueIdentifier @ 141f2c3b0

void __thiscall
UE::Serialization::FEditorBulkData::CreateLegacyUniqueIdentifier
          (FEditorBulkData *this,UObject *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  FRecursiveMutex::Lock(&this->Mutex);
  if ((((this->BulkDataId).D != 0 || (this->BulkDataId).C != 0) || (this->BulkDataId).B != 0) ||
      (this->BulkDataId).A != 0) {
    pFVar4 = CreateUniqueGuid(&local_18,&this->BulkDataId,param_1,L"Unknown");
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->BulkDataId).A = pFVar4->A;
    (this->BulkDataId).B = uVar1;
    (this->BulkDataId).C = uVar2;
    (this->BulkDataId).D = uVar3;
  }
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// DetachFromDisk @ 141f2d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::DetachFromDisk
          (FEditorBulkData *this,FArchive *param_1,bool param_2)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSharedBuffer FVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_48;
  FCompressedBuffer local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1755,"FEditorBulkData::DetachFromDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x6db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1755);
  }
  FRecursiveMutex::Lock(&this->Mutex);
  if ((param_1 == (FArchive *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x6df,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = this->AttachedAr;
  if ((((param_1 != pFVar1) && (pFVar1 != (FArchive *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)pFVar1 + 0x1e8))(pFVar1,param_1), cVar4 == '\0')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar == AttachedAr || HasAttachedArchive() == false || AttachedAr->IsProxyOf(Ar)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x6e0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Flags & IsVirtualized) == None) &&
     (bVar3 = FPackagePath::IsEmpty(&this->PackagePath), !bVar3)) {
    if (((this->Payload).Owner.Owner == (FBufferOwner *)0x0) && (param_2)) {
      GetDataInternal(this,&local_40);
      if (CpuChannel->Enabled < 0) {
        FVar5 = FCompressedBuffer::Decompress(&local_40);
        SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                  (&(this->Payload).Owner,
                   (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar5.Owner.Owner);
        SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_48);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1774,"DecompressPayload",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                   ,0x6ee);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1774);
        FVar5 = FCompressedBuffer::Decompress(&local_40);
        SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                  (&(this->Payload).Owner,
                   (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar5.Owner.Owner);
        SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_48);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FCompositeBuffer::~FCompositeBuffer(&local_40.CompressedData);
    }
    this->OffsetInFile = -1;
  }
  this->Flags = this->Flags | WasDetached;
  this->AttachedAr = (FArchive *)0x0;
  FRecursiveMutex::Unlock(&this->Mutex);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoesPayloadNeedLoading @ 141f2db50

bool __thiscall UE::Serialization::FEditorBulkData::DoesPayloadNeedLoading(FEditorBulkData *this)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2056,"FEditorBulkData::DoesPayloadNeedLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x808);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2056);
  }
  FRecursiveMutex::Lock(&this->Mutex);
  if (((this->Payload).Owner.Owner == (FBufferOwner *)0x0) && (0 < this->PayloadSize)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FRecursiveMutex::Unlock(&this->Mutex);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// GetBulkDataVersions @ 141f335c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::GetBulkDataVersions
          (FEditorBulkData *this,FArchive *param_1,FPackageFileVersion *param_2,int *param_3,
          FCustomVersionContainer *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  IPackageResourceManager *pIVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  FCustomVersionContainer *pFVar7;
  FArchive *pFVar8;
  undefined1 auStack_218 [32];
  FCustomVersionContainer *local_1f8;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  FPackageFileSummary local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1f8 = param_4;
  pFVar8 = (FArchive *)0x0;
  FRecursiveMutex::Lock(&this->Mutex);
  if ((this->Flags & ReferencesWorkspaceDomain) != None) {
    pIVar4 = IPackageResourceManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar4 + 0x48);
    pFVar5 = FPackagePath::GetPackageName(&this->PackagePath,&local_1c8);
    local_1e8 = (pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    iStack_1e0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_1e0 = 0;
    }
    puVar6 = (undefined8 *)(*pcVar2)(pIVar4,&local_1d8,0,&local_1e8);
    if (&local_1d0 != puVar6) {
      pFVar8 = (FArchive *)*puVar6;
      *puVar6 = 0;
    }
    if (local_1d8 != (undefined8 *)0x0) {
      (**(code **)*local_1d8)(local_1d8,1);
    }
    param_4 = local_1f8;
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      param_4 = local_1f8;
    }
  }
  FRecursiveMutex::Unlock(&this->Mutex);
  if (pFVar8 != (FArchive *)0x0) {
    FPackageFileSummary::FPackageFileSummary(&local_1b8);
    ::operator<<(pFVar8,&local_1b8);
    if ((local_1b8.Tag == -0x61d57c3f) && ((pFVar8->field_0x29 & 2) == 0)) {
      *param_2 = local_1b8.FileVersionUE;
      *param_3 = local_1b8.FileVersionLicenseeUE;
      FCustomVersionContainer::operator=(param_4,&local_1b8.CustomVersionContainer);
      FPackageFileSummary::~FPackageFileSummary(&local_1b8);
      goto LAB_141f337d6;
    }
    if (local_1b8.ChunkIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.ChunkIDs.AllocatorInstance.Data);
    }
    if (local_1b8.CompatibleWithEngineVersion.Branch.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.CompatibleWithEngineVersion.Branch.Data.AllocatorInstance.Data);
    }
    if (local_1b8.SavedByEngineVersion.Branch.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.SavedByEngineVersion.Branch.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Generations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Generations.AllocatorInstance.Data);
    }
    if (local_1b8.LocalizationId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.LocalizationId.Data.AllocatorInstance.Data);
    }
    if (local_1b8.PackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.PackageName.Data.AllocatorInstance.Data);
    }
    if (local_1b8.CustomVersionContainer.Versions.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.CustomVersionContainer.Versions.AllocatorInstance.Data);
    }
  }
  uVar3 = *(undefined4 *)&param_1->field_0x44;
  param_2->FileVersionUE4 = *(undefined4 *)&param_1->field_0x40;
  param_2->FileVersionUE5 = uVar3;
  *param_3 = *(int *)&param_1->field_0x48;
  pFVar7 = (FCustomVersionContainer *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  FCustomVersionContainer::operator=(param_4,pFVar7);
  if (pFVar8 == (FArchive *)0x0) {
    return;
  }
LAB_141f337d6:
  (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
  return;
}

// GetCompressedPayload @ 141f33810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<FCompressedBuffer> * __thiscall
UE::Serialization::FEditorBulkData::GetCompressedPayload
          (FEditorBulkData *this,TFuture<FCompressedBuffer> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TFuture<FCompressedBuffer> *pTVar5;
  FFutureState *this_00;
  undefined1 auStack_68 [32];
  FCompressedBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  FRecursiveMutex::Lock(&this->Mutex);
  pTVar3 = ::operator_new(0xa0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    GetDataInternal(this,&local_48);
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_VFCompressedBuffer_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (FFutureState *)(pTVar3 + 1);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<FCompressedBuffer> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    GetDataInternal(this,&local_48);
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<FCompressedBuffer> *)(*pcVar1)();
        return pTVar5;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<FCompressedBuffer> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  if (this_00->bComplete != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<FCompressedBuffer> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
            ((FCompositeBuffer *)(this_00 + 1),&local_48.CompressedData);
  FFutureState::MarkComplete(this_00);
  if (this_00 == (FFutureState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<FCompressedBuffer> *)(*pcVar1)();
      return pTVar5;
    }
  }
  *(FFutureState **)__return_storage_ptr__ = this_00;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCompositeBuffer::~FCompositeBuffer(&local_48.CompressedData);
  if ((this_00 != (FFutureState *)0x0) && (this_00->bComplete == (TAtomic<bool>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<FCompressedBuffer> *)(*pcVar1)();
      return pTVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FRecursiveMutex::Unlock(&this->Mutex);
  return __return_storage_ptr__;
}

// GetCorruptedPayloadErrorMsgForSave @ 141f33e10

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::Serialization::FEditorBulkData::GetCorruptedPayloadErrorMsgForSave
          (FEditorBulkData *this,FText *__return_storage_ptr__,FLinkerSave *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FText local_198;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_188;
  FString local_178;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  FName local_160;
  FText local_158;
  FText local_148;
  FText local_138;
  FString local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  FGuid local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  FRecursiveMutex::Lock(&this->Mutex);
  if (((this->PayloadSize != 0) &&
      ((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
       (this->BulkDataId).A == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetPayloadSize() == 0 || BulkDataId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x70d,
                         L"If bulkdata has a valid payload then it should have a valid BulkDataId"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  local_a8.A = (this->BulkDataId).A;
  local_a8.B = (this->BulkDataId).B;
  local_a8.C = (this->BulkDataId).C;
  local_a8.D = (this->BulkDataId).D;
  FRecursiveMutex::Unlock(&this->Mutex);
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  FGuid::AppendString(&local_a8,&local_178,Digits);
  FText::FromString(&local_198,&local_178);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (param_1 == (FLinkerSave *)0x0) {
    bVar2 = FPackagePath::IsEmpty(&this->PackagePath);
    if (bVar2) {
      local_138.TextData.Reference = local_198.TextData.Reference;
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 8))
                  (local_198.TextData.Reference,local_164);
      }
      local_138.Flags = local_198.Flags;
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"Core",L"Serialization_InvalidPayloadPath",
                          L"Attempting to save bulkdata {0} with an invalid payload, source unknown"
                         );
      pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar3,Default);
      local_c8.Type = Text;
      FText::FText((FText *)&local_c8.TextValue,&local_138);
      if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FText *)(*pcVar1)();
        return pFVar3;
      }
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_188.AllocatorInstance,1,&local_188.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_188.AllocatorInstance.Data,&local_c8,1);
      local_d8.TextFormatData.Object = (pFVar4->TextFormatData).Object;
      local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(__return_storage_ptr__,&local_d8,&local_188);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
      if ((FFormatArgumentValue *)local_188.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar5 = FPackagePath::GetDebugName(&this->PackagePath,&local_88);
      FText::FromString(&local_148,pFVar5);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_f8.TextData.Reference = local_148.TextData.Reference;
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 8))
                  (local_148.TextData.Reference,local_res20);
      }
      local_f8.Flags = local_148.Flags;
      local_e8.TextData.Reference = local_198.TextData.Reference;
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 8))
                  (local_198.TextData.Reference,local_168);
      }
      local_e8.Flags = local_198.Flags;
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"Core",L"Serialization_InvalidPayloadFromPkg",
                          L"Attempting to save bulkdata {0} with an invalid payload from package \'{1}\'. The package probably needs to be reverted/recreated to fix this."
                         );
      pFVar4 = FTextFormat::FTextFormat(&local_48,pFVar3,Default);
      FText::Format<FText,FText>(__return_storage_ptr__,pFVar4,&local_e8,&local_f8);
      local_68.TextData.Reference = local_148.TextData.Reference;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        local_68.TextData.Reference = local_148.TextData.Reference;
      }
    }
  }
  else {
    local_160 = *(FName *)(param_1->_padding_ + 0x18);
    ::FName::ToString(&local_160,&local_128);
    FText::FromString(&local_158,&local_128);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_118.TextData.Reference = local_158.TextData.Reference;
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 8))
                (local_158.TextData.Reference,local_res8);
    }
    local_118.Flags = local_158.Flags;
    local_108.TextData.Reference = local_198.TextData.Reference;
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 8))
                (local_198.TextData.Reference,local_res18);
    }
    local_108.Flags = local_198.Flags;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"Core",L"Serialization_InvalidPayloadToPkg",
                        L"Attempting to save bulkdata {0} with an invalid payload to package \'{1}\'. The package probably needs to be reverted/recreated to fix this."
                       );
    pFVar4 = FTextFormat::FTextFormat(&local_58,pFVar3,Default);
    FText::Format<FText,FText>(__return_storage_ptr__,pFVar4,&local_108,&local_118);
    local_68.TextData.Reference = local_158.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      local_68.TextData.Reference = local_158.TextData.Reference;
    }
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetCustomVersions @ 141f34210

FCustomVersionContainer * __thiscall
UE::Serialization::FEditorBulkData::GetCustomVersions
          (FEditorBulkData *this,FCustomVersionContainer *__return_storage_ptr__,FArchive *param_1)

{
  int local_res10 [4];
  FPackageFileVersion local_res20;
  
  local_res20.FileVersionUE4 = 0;
  local_res20.FileVersionUE5 = 0;
  (__return_storage_ptr__->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Versions).ArrayNum = 0;
  (__return_storage_ptr__->Versions).ArrayMax = 0;
  GetBulkDataVersions(this,param_1,&local_res20,local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDataInternal @ 141f342c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::GetDataInternal
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__)

{
  code *pcVar1;
  FCompositeBuffer *pFVar2;
  bool bVar3;
  ushort uVar4;
  FCompressedBuffer *pFVar5;
  ulong64 uVar6;
  bool bVar7;
  undefined1 auStackY_c8 [32];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FCompressedBuffer local_58;
  FCompressedBuffer local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2011,"FEditorBulkData::GetDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x7db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2011);
  }
  if (this->PayloadSize == 0) {
    pFVar2 = &__return_storage_ptr__->CompressedData;
    (pFVar2->Segments).AllocatorInstance.InlineData[0] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[1] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[2] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[3] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[4] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[5] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[6] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[7] = '\0';
    (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else if ((this->Payload).Owner.Owner == (FBufferOwner *)0x0) {
    if ((this->Flags & IsVirtualized) == None) {
      LoadFromDisk(this,&local_58);
      if (((this->Payload).Owner.Owner != (FBufferOwner *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                             ,0x7fa,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCompressedBuffer *)(*pcVar1)();
        return pFVar5;
      }
      if (1 < (byte)LogSerialization._0_1_) {
        if (local_58.CompressedData.Segments.ArrayNum == 0) {
          ::LexToString(&local_88,&this->PayloadContentId);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        if ((1 < (byte)LogSerialization._0_1_) && (bVar3 = IsDataValid(this,&local_58), !bVar3)) {
          FPackagePath::GetDebugName(&this->PackagePath,&local_68);
          ::LexToString(&local_78,&this->PayloadContentId);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar6 = FCompressedBuffer::GetCompressedSize(&local_58);
      if (uVar6 != 0) {
        LOCK();
        __GTraceCounterEditorBulkData_PayloadDataLoaded.Value =
             (atomic<__int64>)
             ((longlong)__GTraceCounterEditorBulkData_PayloadDataLoaded.Value + uVar6);
        UNLOCK();
        if (-1 < CountersChannel->Enabled) {
          if (__GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId == (atomic<unsigned_int>)0x0
             ) {
            uVar4 = FCountersTrace::OutputInitCounter
                              (__GTraceCounterEditorBulkData_PayloadDataLoaded.CounterName,
                               TraceCounterType_Int,
                               __GTraceCounterEditorBulkData_PayloadDataLoaded.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId ==
                (atomic<unsigned_int>)0x0) {
              __GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId._2_2_ = 0;
              __GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId._0_2_ = uVar4;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId._0_2_,
                     (long64)__GTraceCounterEditorBulkData_PayloadDataLoaded.Value);
        }
      }
      FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
                (&__return_storage_ptr__->CompressedData,&local_58.CompressedData);
      pFVar5 = &local_58;
    }
    else {
      PullData(this,&local_40);
      if (((this->Payload).Owner.Owner != (FBufferOwner *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                             ,0x7ef,L"Pulling data somehow assigned it to the bulk data object!"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCompressedBuffer *)(*pcVar1)();
        return pFVar5;
      }
      if ((1 < (byte)LogSerialization._0_1_) && (bVar3 = IsDataValid(this,&local_40), !bVar3)) {
        ::LexToString(&local_98,&this->PayloadContentId);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar6 = FCompressedBuffer::GetCompressedSize(&local_40);
      if (uVar6 != 0) {
        LOCK();
        __GTraceCounterEditorBulkData_PayloadDataPulled.Value =
             (atomic<__int64>)
             ((longlong)__GTraceCounterEditorBulkData_PayloadDataPulled.Value + uVar6);
        UNLOCK();
        if (-1 < CountersChannel->Enabled) {
          if (__GTraceCounterEditorBulkData_PayloadDataPulled.CounterId == (atomic<unsigned_int>)0x0
             ) {
            uVar4 = FCountersTrace::OutputInitCounter
                              (__GTraceCounterEditorBulkData_PayloadDataPulled.CounterName,
                               TraceCounterType_Int,
                               __GTraceCounterEditorBulkData_PayloadDataPulled.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterEditorBulkData_PayloadDataPulled.CounterId ==
                (atomic<unsigned_int>)0x0) {
              __GTraceCounterEditorBulkData_PayloadDataPulled.CounterId._2_2_ = 0;
              __GTraceCounterEditorBulkData_PayloadDataPulled.CounterId._0_2_ = uVar4;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterEditorBulkData_PayloadDataPulled.CounterId._0_2_,
                     (long64)__GTraceCounterEditorBulkData_PayloadDataPulled.Value);
        }
      }
      FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
                (&__return_storage_ptr__->CompressedData,&local_40.CompressedData);
      pFVar5 = &local_40;
    }
    FCompositeBuffer::~FCompositeBuffer(&pFVar5->CompressedData);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    FCompressedBuffer::Compress(__return_storage_ptr__,&this->Payload,NotSet,None,0);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// GetIdentifier @ 141f34c00

FGuid * __thiscall
UE::Serialization::FEditorBulkData::GetIdentifier
          (FEditorBulkData *this,FGuid *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  
  FRecursiveMutex::Lock(&this->Mutex);
  if ((this->PayloadSize != 0) &&
     ((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
      (this->BulkDataId).A == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPayloadSize() == 0 || BulkDataId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                       ,0x70d,
                       L"If bulkdata has a valid payload then it should have a valid BulkDataId");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FGuid *)(*pcVar1)();
      return pFVar6;
    }
  }
  uVar2 = (this->BulkDataId).B;
  uVar3 = (this->BulkDataId).C;
  uVar4 = (this->BulkDataId).D;
  __return_storage_ptr__->A = (this->BulkDataId).A;
  __return_storage_ptr__->B = uVar2;
  __return_storage_ptr__->C = uVar3;
  __return_storage_ptr__->D = uVar4;
  FRecursiveMutex::Unlock(&this->Mutex);
  return __return_storage_ptr__;
}

// GetPayload @ 141f35c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<FSharedBuffer> * __thiscall
UE::Serialization::FEditorBulkData::GetPayload
          (FEditorBulkData *this,TFuture<FSharedBuffer> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TFuture<FSharedBuffer> *pTVar5;
  TFutureState<FSharedBuffer> *this_00;
  bool bVar6;
  undefined1 auStack_a8 [32];
  TPromise<FSharedBuffer> local_88;
  FSharedBuffer local_70 [2];
  FCompressedBuffer local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2066,"FEditorBulkData::GetPayload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x812);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2066);
  }
  FRecursiveMutex::Lock(&this->Mutex);
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (TFutureState<FSharedBuffer> *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_VFSharedBuffer_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (TFutureState<FSharedBuffer> *)(pTVar3 + 1);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if ((this_00 == (TFutureState<FSharedBuffer> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
      return pTVar5;
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.State.Object = this_00;
  local_88.State.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_88.bFutureRetrieved = false;
  if (this->PayloadSize == 0) {
    if (this_00 == (TFutureState<FSharedBuffer> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
        return pTVar5;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
        return pTVar5;
      }
    }
    if ((*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
      return pTVar5;
    }
    *(undefined8 *)(this_00->Result).Pad = 0;
    FFutureState::MarkComplete((FFutureState *)this_00);
  }
  else if ((this->Payload).Owner.Owner == (FBufferOwner *)0x0) {
    GetDataInternal(this,&local_60);
    FCompressedBuffer::Decompress(&local_60);
    TPromise<FSharedBuffer>::SetValue(&local_88,local_70);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_70[0].Owner);
    FCompositeBuffer::~FCompositeBuffer(&local_60.CompressedData);
    this_00 = local_88.State.Object;
  }
  else {
    TPromise<FSharedBuffer>::SetValue(&local_88,&this->Payload);
    this_00 = local_88.State.Object;
  }
  if ((local_88.bFutureRetrieved != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
    return pTVar5;
  }
  local_88.bFutureRetrieved = true;
  if ((this_00 == (TFutureState<FSharedBuffer> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
    return pTVar5;
  }
  *(TFutureState<FSharedBuffer> **)__return_storage_ptr__ = this_00;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_88.State.SharedReferenceCount.ReferenceController;
  if (local_88.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_88.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((this_00 != (TFutureState<FSharedBuffer> *)0x0) &&
      (*(TAtomic<bool> *)&this_00->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TFuture<FSharedBuffer> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.State.SharedReferenceCount.ReferenceController);
  FRecursiveMutex::Unlock(&this->Mutex);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetPayloadId @ 141f35f80

FIoHash * __thiscall UE::Serialization::FEditorBulkData::GetPayloadId(FEditorBulkData *this)

{
  FRecursiveMutex::Lock(&this->Mutex);
  FRecursiveMutex::Unlock(&this->Mutex);
  return &this->PayloadContentId;
}

// IsMemoryOnlyPayload @ 141f3a420

bool __thiscall UE::Serialization::FEditorBulkData::IsMemoryOnlyPayload(FEditorBulkData *this)

{
  bool bVar1;
  
  FRecursiveMutex::Lock(&this->Mutex);
  if (((this->Payload).Owner.Owner != (FBufferOwner *)0x0) &&
     ((this->Flags & IsVirtualized) == None)) {
    bVar1 = FPackagePath::IsEmpty(&this->PackagePath);
    if (bVar1) {
      bVar1 = true;
      goto LAB_141f3a45b;
    }
  }
  bVar1 = false;
LAB_141f3a45b:
  FRecursiveMutex::Unlock(&this->Mutex);
  return bVar1;
}

// LoadFromDisk @ 141f3be10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::LoadFromDisk
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__)

{
  FCompositeBuffer *pFVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FCompressedBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1327,"FEditorBulkData::LoadFromDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x52f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1327);
  }
  bVar3 = FPackagePath::IsEmpty(&this->PackagePath);
  pTVar2 = CVarShouldLoadFromSidecar.Ref;
  if (bVar3) {
    if (1 < (byte)LogSerialization._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
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
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return __return_storage_ptr__;
  }
  if ((this->Flags & HasPayloadSidecarFile) != None) {
    bVar3 = IsInParallelGameThread();
    if (bVar3) {
LAB_141f3bf07:
      lVar4 = 0;
    }
    else {
      bVar3 = IsInGameThread();
      lVar4 = 1;
      if (bVar3) goto LAB_141f3bf07;
    }
    if (pTVar2->ShadowedValue[lVar4] != false) {
      LoadFromSidecarFile(this,__return_storage_ptr__);
      goto LAB_141f3c15a;
    }
  }
  bVar3 = FPackagePath::IsEmpty(&this->PackagePath);
  pTVar2 = CVarShouldLoadFromTrailer.Ref;
  if ((!bVar3) && ((this->Flags & WasDetached) == None)) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), lVar4 = 1, bVar3)) {
      lVar4 = 0;
    }
    if ((pTVar2->ShadowedValue[lVar4] == false) || ((this->Flags & StoredInPackageTrailer) == None))
    {
      LoadFromPackageFile(this,__return_storage_ptr__);
    }
    else {
      LoadFromPackageTrailer(this,__return_storage_ptr__);
    }
    goto LAB_141f3c15a;
  }
  if ((this->Flags & ReferencesLegacyFile) == None) {
    if ((this->Flags >> 9 & 1) != 0) {
      LoadFromPackageTrailer(this,&local_48);
      if (local_48.CompressedData.Segments.ArrayNum == 0) {
        if (1 < (byte)LogSerialization._0_1_) {
          FPackagePath::GetLocalFullPath(&this->PackagePath,&local_58,Header);
          ::LexToString(&local_68,&this->PayloadContentId);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
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
      }
      else {
        FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
                  (&__return_storage_ptr__->CompressedData,&local_48.CompressedData);
      }
      FCompositeBuffer::~FCompositeBuffer(&local_48.CompressedData);
      goto LAB_141f3c15a;
    }
    if (1 < (byte)LogSerialization._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_78,Header);
      ::LexToString(&local_88,&this->PayloadContentId);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      goto LAB_141f3bffd;
    }
  }
  else if (1 < (byte)LogSerialization._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_98,Header);
    ::LexToString(&local_a8,&this->PayloadContentId);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    }
LAB_141f3bffd:
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
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
LAB_141f3c15a:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// LoadFromPackageFile @ 141f3c1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::LoadFromPackageFile
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FCompositeBuffer *pFVar4;
  FArchive *pFVar5;
  bool bVar6;
  IPackageResourceManager *pIVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FCompressedBuffer *pFVar10;
  ForElementType<FSharedBuffer> FVar11;
  FArchive *pFVar12;
  ForElementType<FSharedBuffer> FVar13;
  bool bVar14;
  undefined1 auStackY_128 [32];
  FCompressedBuffer local_e8;
  FArchive *local_d0;
  char local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  FString local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  FString local_68;
  FCompressedBuffer local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1393,"FEditorBulkData::LoadFromPackageFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x571);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1393);
  }
  if (5 < (byte)LogSerialization._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_a0,Header);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = (FArchive *)0x0;
  if ((this->Flags & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) == None) {
    pIVar7 = IPackageResourceManager::Get();
    (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,&local_d0,&this->PackagePath,0);
    pFVar5 = local_d0;
    if (local_c8 == '\0') {
      local_d0 = (FArchive *)0x0;
      pFVar12 = pFVar5;
    }
    if (local_d0 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_d0)();
    }
  }
  else {
    pIVar7 = IPackageResourceManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x48);
    pFVar8 = FPackagePath::GetPackageName(&this->PackagePath,&local_78);
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    iStack_b0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_b0 = 0;
    }
    local_b8._0_4_ = SUB84(pFVar2,0);
    local_b8._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
    local_88 = (undefined4)local_b8;
    uStack_84 = local_b8._4_4_;
    uStack_7c = uStack_ac;
    local_b8 = pFVar2;
    iStack_80 = iStack_b0;
    puVar9 = (undefined8 *)(*pcVar3)(pIVar7,&local_c0,0,&local_88);
    if (&local_a8 != puVar9) {
      pFVar12 = (FArchive *)*puVar9;
      *puVar9 = 0;
    }
    if (local_c0 != (undefined8 *)0x0) {
      (**(code **)*local_c0)();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar12 == (FArchive *)0x0) {
    LogPackageOpenFailureMessage(&this->PackagePath,Header);
    pFVar4 = &__return_storage_ptr__->CompressedData;
    (pFVar4->Segments).AllocatorInstance.InlineData[0] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[1] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[2] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[3] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[4] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[5] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[6] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[7] = '\0';
    (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
  }
  else {
    if (this->OffsetInFile == -1) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_68,Header);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OffsetInFile != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x58e,
                         L"Attempting to load from the package file \'%s\' with an invalid OffsetInFile!"
                        );
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FCompressedBuffer *)(*pcVar3)();
        return pFVar10;
      }
    }
    (**(code **)(*(longlong *)pFVar12 + 0x1b8))(pFVar12,this->OffsetInFile);
    local_58.CompressedData.Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    local_58.CompressedData.Segments.ArrayNum = 0;
    local_58.CompressedData.Segments.ArrayMax = 1;
    SerializeData(this,pFVar12,&local_58,this->Flags);
    iVar1 = local_58.CompressedData.Segments.ArrayNum;
    local_e8.CompressedData.Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    FVar13 = (ForElementType<FSharedBuffer>)&local_58;
    if (local_58.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar13 = local_58.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    local_e8.CompressedData.Segments.ArrayNum = local_58.CompressedData.Segments.ArrayNum;
    if (local_58.CompressedData.Segments.ArrayNum == 0) {
      local_e8.CompressedData.Segments.ArrayMax = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,local_58.CompressedData.Segments.ArrayNum,0,
                 (ForElementType<FSharedBuffer> *)&local_e8,
                 local_58.CompressedData.Segments.ArrayNum,
                 &local_e8.CompressedData.Segments.ArrayMax);
      FVar11 = (ForElementType<FSharedBuffer>)&local_e8;
      if (local_e8.CompressedData.Segments.AllocatorInstance.SecondaryData !=
          (ForElementType<FSharedBuffer>)0x0) {
        FVar11 = local_e8.CompressedData.Segments.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar11,(FSharedBuffer *)FVar13,iVar1);
    }
    UpdateKeyIfNeeded(this,&local_e8);
    FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
              (&__return_storage_ptr__->CompressedData,&local_58.CompressedData);
    FCompositeBuffer::~FCompositeBuffer(&local_58.CompressedData);
    (*(code *)**(undefined8 **)pFVar12)(pFVar12,1);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// LoadFromPackageTrailer @ 141f3c4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::LoadFromPackageTrailer
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__)

{
  FPackagePath *this_00;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  FCompositeBuffer *pFVar4;
  uchar auVar5 [8];
  bool bVar6;
  IPackageResourceManager *pIVar7;
  FString *pFVar8;
  uchar (*pauVar9) [8];
  undefined8 uVar10;
  uchar auVar11 [8];
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  FString local_b8;
  FEditorBulkData *local_a8;
  FString local_a0;
  FPackageTrailer local_90;
  uchar local_60 [8];
  FCompressedBuffer local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar12 = -1 < CpuChannel->Enabled;
  local_a8 = this;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1438,"FEditorBulkData::LoadFromPackageTrailer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x59e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1438);
  }
  if (5 < (byte)LogSerialization._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_b8,Header);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  auVar11[0] = '\0';
  auVar11[1] = '\0';
  auVar11[2] = '\0';
  auVar11[3] = '\0';
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  this_00 = &this->PackagePath;
  if ((this->Flags & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) == None) {
    pIVar7 = IPackageResourceManager::Get();
    local_c0 = 0;
    local_c8 = 0;
    (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,&local_58,this_00,0);
    auVar5 = local_58.CompressedData.Segments.AllocatorInstance.InlineData;
    if (local_58.CompressedData.Segments.AllocatorInstance.SecondaryData._0_1_ == '\0') {
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
      local_58.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
      auVar11 = auVar5;
    }
    if (local_58.CompressedData.Segments.AllocatorInstance.InlineData != (uchar  [8])0x0) {
      (*(code *)**(undefined8 **)local_58.CompressedData.Segments.AllocatorInstance.InlineData)();
    }
  }
  else {
    pIVar7 = IPackageResourceManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar7 + 0x48);
    pFVar8 = FPackagePath::GetPackageName(this_00,&local_a0);
    local_b8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    local_b8.Data.ArrayNum = iVar1 + -1;
    if (iVar1 == 0) {
      local_b8.Data.ArrayNum = 0;
    }
    pauVar9 = (uchar (*) [8])(*pcVar2)(pIVar7,&local_58,0,&local_b8);
    if (&local_60 != pauVar9) {
      auVar11 = *pauVar9;
      *pauVar9 = (uchar  [8])0x0;
    }
    if (local_58.CompressedData.Segments.AllocatorInstance.InlineData != (uchar  [8])0x0) {
      (*(code *)**(undefined8 **)local_58.CompressedData.Segments.AllocatorInstance.InlineData)();
    }
    this = local_a8;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      this = local_a8;
    }
  }
  if (auVar11 == (uchar  [8])0x0) {
    LogPackageOpenFailureMessage(this_00,Header);
    pFVar4 = &__return_storage_ptr__->CompressedData;
    (pFVar4->Segments).AllocatorInstance.InlineData[0] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[1] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[2] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[3] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[4] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[5] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[6] = '\0';
    (pFVar4->Segments).AllocatorInstance.InlineData[7] = '\0';
    (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
  }
  else {
    lVar3 = *(longlong *)auVar11;
    uVar10 = (**(code **)(lVar3 + 0x30))(auVar11);
    (**(code **)(lVar3 + 0x1b8))(auVar11,uVar10);
    local_90.TrailerPositionInFile = ___xmm_0000000000000000ffffffffffffffff;
    local_90.Header.Tag = _UNK_15076adc8;
    local_90.Header.Version = -1;
    local_90.Header.HeaderLength = 0;
    local_90.Header.PayloadLookupTable.ArrayNum = 0;
    local_90.Header.PayloadLookupTable.ArrayMax = 0;
    local_90.Header.PayloadsDataLength = 0;
    local_90.Header.PayloadLookupTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar6 = FPackageTrailer::TryLoadBackwards(&local_90,(FArchive *)auVar11);
    if (bVar6) {
      FPackageTrailer::LoadLocalPayload
                (&local_90,&local_58,&this->PayloadContentId,(FArchive *)auVar11);
      if ((1 < (byte)LogSerialization._0_1_) && (local_58.CompressedData.Segments.ArrayNum == 0)) {
        FPackagePath::GetLocalFullPath(this_00,&local_b8,Header);
        ::LexToString(&local_a0,&this->PayloadContentId);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
                (&__return_storage_ptr__->CompressedData,&local_58.CompressedData);
      FCompositeBuffer::~FCompositeBuffer(&local_58.CompressedData);
    }
    else {
      if (1 < (byte)LogSerialization._0_1_) {
        FPackagePath::GetLocalFullPath(this_00,&local_a0,Header);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar4 = &__return_storage_ptr__->CompressedData;
      (pFVar4->Segments).AllocatorInstance.InlineData[0] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[1] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[2] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[3] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[4] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[5] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[6] = '\0';
      (pFVar4->Segments).AllocatorInstance.InlineData[7] = '\0';
      (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
           (ForElementType<FSharedBuffer>)0x0;
      (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
      (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
    }
    if (local_90.Header.PayloadLookupTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_90.Header.PayloadLookupTable.AllocatorInstance.Data);
    }
    (*(code *)**(undefined8 **)auVar11)(auVar11,1);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// LoadFromSidecarFile @ 141f3c860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::LoadFromSidecarFile
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  IModularFeatures *pIVar6;
  FName *pFVar7;
  longlong lVar8;
  FCompressedBuffer *pFVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  FCompressedBuffer local_68;
  FCompressedBuffer local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1521,"FEditorBulkData::LoadFromSidecarFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x5f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1521);
  }
  if (5 < (byte)LogSerialization._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,(FString *)&local_68,PayloadSidecar);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if ((FName)local_68.CompressedData.Segments.AllocatorInstance.InlineData != (FName)0x0) {
      FMemory::Free((void *)local_68.CompressedData.Segments.AllocatorInstance.InlineData);
    }
  }
  pTVar2 = CVarShouldAllowSidecarSyncing.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    puVar5 = (undefined8 *)&DAT_00000001;
    if (!bVar3) goto LAB_141f3c93d;
  }
  puVar5 = (undefined8 *)0x0;
LAB_141f3c93d:
  if (*(char *)((longlong)puVar5 + (longlong)pTVar2) == '\0') {
    LoadFromSidecarFileInternal(this,__return_storage_ptr__,All);
  }
  else {
    LoadFromSidecarFileInternal(this,&local_50,None);
    if (local_50.CompressedData.Segments.ArrayNum == 0) {
      if (5 < (byte)LogSerialization._0_1_) {
        FPackagePath::GetLocalFullPath(&this->PackagePath,(FString *)&local_68,PayloadSidecar);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if ((FName)local_68.CompressedData.Segments.AllocatorInstance.InlineData != (FName)0x0) {
          FMemory::Free((void *)local_68.CompressedData.Segments.AllocatorInstance.InlineData);
        }
      }
      pIVar6 = IModularFeatures::Get();
      pcVar1 = *(code **)((longlong)*pIVar6 + 0x20);
      pFVar7 = ::FName::FName((FName *)&local_68,"VirtualizationSourceControlUtilities");
      lVar8 = (*pcVar1)(pIVar6,*pFVar7,0);
      puVar5 = (undefined8 *)(lVar8 + -8);
      if (lVar8 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 == (undefined8 *)0x0) {
        if (1 < (byte)LogSerialization._0_1_) {
          FPackagePath::GetLocalFullPath(&this->PackagePath,(FString *)&local_68,PayloadSidecar);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if ((FName)local_68.CompressedData.Segments.AllocatorInstance.InlineData != (FName)0x0) {
            FMemory::Free((void *)local_68.CompressedData.Segments.AllocatorInstance.InlineData);
          }
        }
      }
      else {
        cVar4 = (**(code **)*puVar5)(puVar5,&this->PackagePath);
        if (cVar4 != '\0') {
          pFVar9 = LoadFromSidecarFileInternal(this,&local_68,All);
          FCompositeBuffer::operator=(&local_50.CompressedData,&pFVar9->CompressedData);
          FCompositeBuffer::~FCompositeBuffer(&local_68.CompressedData);
        }
      }
    }
    FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
              (&__return_storage_ptr__->CompressedData,&local_50.CompressedData);
    FCompositeBuffer::~FCompositeBuffer(&local_50.CompressedData);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// LoadFromSidecarFileInternal @ 141f3cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::LoadFromSidecarFileInternal
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__,ErrorVerbosity param_1)

{
  FCompositeBuffer *pFVar1;
  bool bVar2;
  IPackageResourceManager *pIVar3;
  bool bVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  FArchive *local_a8;
  char local_a0;
  FString local_98;
  FPackageTrailer local_88;
  FString local_58;
  FCompressedBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1491,"FEditorBulkData::LoadFromSidecarFileInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x5d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1491);
  }
  pIVar3 = IPackageResourceManager::Get();
  local_b0 = 0;
  local_b8 = 5;
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,&local_a8,&this->PackagePath,0);
  if ((local_a8 == (FArchive *)0x0) || (local_a0 != '\0')) {
    if (0 < (int)param_1) {
      LogPackageOpenFailureMessage(&this->PackagePath,PayloadSidecar);
    }
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
  }
  else {
    local_88.TrailerPositionInFile = ___xmm_0000000000000000ffffffffffffffff;
    local_88.Header.Tag = _UNK_15076adc8;
    local_88.Header.Version = -1;
    local_88.Header.HeaderLength = 0;
    local_88.Header.PayloadsDataLength = 0;
    local_88.Header.PayloadLookupTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Header.PayloadLookupTable.ArrayNum = 0;
    local_88.Header.PayloadLookupTable.ArrayMax = 0;
    bVar2 = FPackageTrailer::TryLoadFromArchive(local_a8,&local_88);
    if (!bVar2) {
      if ((1 < (byte)LogSerialization._0_1_) && (0 < (int)param_1)) {
        FPackagePath::GetLocalFullPath(&this->PackagePath,&local_98,PayloadSidecar);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
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
      if (local_88.Header.PayloadLookupTable.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Header.PayloadLookupTable.AllocatorInstance.Data);
      }
      if (local_a8 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)local_a8)(local_a8,1);
      }
      goto LAB_141f3cd4c;
    }
    FPackageTrailer::LoadLocalPayload(&local_88,&local_48,&this->PayloadContentId,local_a8);
    if ((1 < (byte)LogSerialization._0_1_) && (local_48.CompressedData.Segments.ArrayNum == 0)) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_58,PayloadSidecar);
      ::LexToString(&local_98,&this->PayloadContentId);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
              (&__return_storage_ptr__->CompressedData,&local_48.CompressedData);
    FCompositeBuffer::~FCompositeBuffer(&local_48.CompressedData);
    if (local_88.Header.PayloadLookupTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_88.Header.PayloadLookupTable.AllocatorInstance.Data);
    }
  }
  if (local_a8 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,1);
  }
LAB_141f3cd4c:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// LocationMatches @ 141f3dd50

bool __thiscall
UE::Serialization::FEditorBulkData::LocationMatches(FEditorBulkData *this,FEditorBulkData *param_1)

{
  FRecursiveMutex *this_00;
  FRecursiveMutex *this_01;
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  FIdentityFunctor local_res8;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FRecursiveMutex *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  this_00 = &param_1->Mutex;
  this_01 = &this->Mutex;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,2);
  local_48 = this_01;
  uStack_40 = this_00;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_68,2,(int *)((longlong)&local_60 + 4));
  FVar3.Data = local_68.Data;
  *(FRecursiveMutex **)local_68.Data = local_48;
  *(FRecursiveMutex **)(local_68.Data + 8) = uStack_40;
  iVar4 = (int)local_60;
  lVar8 = (longlong)(int)local_60;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
            ((FRecursiveMutex **)FVar3.Data,iVar4,local_res8,(TLess<void>)local_res8);
  for (FVar9.Data = FVar3.Data; FVar9.Data != FVar3.Data + lVar8 * 8; FVar9.Data = FVar9.Data + 8) {
    FRecursiveMutex::Lock(*(FRecursiveMutex **)FVar9.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  FRecursiveMutex::Lock(this_00);
  if (((param_1->PayloadSize != 0) &&
      ((((param_1->BulkDataId).D == 0 && (param_1->BulkDataId).C == 0) &&
       (param_1->BulkDataId).B == 0) && (param_1->BulkDataId).A == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetPayloadSize() == 0 || BulkDataId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x70d,
                         L"If bulkdata has a valid payload then it should have a valid BulkDataId"),
     bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  local_58._0_4_ = (param_1->BulkDataId).A;
  local_58._4_4_ = (param_1->BulkDataId).B;
  uStack_50._0_4_ = (param_1->BulkDataId).C;
  uStack_50._4_4_ = (param_1->BulkDataId).D;
  FRecursiveMutex::Unlock(this_00);
  FRecursiveMutex::Lock(this_01);
  if (((this->PayloadSize != 0) &&
      ((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
       (this->BulkDataId).A == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetPayloadSize() == 0 || BulkDataId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x70d,
                         L"If bulkdata has a valid payload then it should have a valid BulkDataId"),
     bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  local_48._0_4_ = (this->BulkDataId).A;
  local_48._4_4_ = (this->BulkDataId).B;
  uStack_40._0_4_ = (this->BulkDataId).C;
  uStack_40._4_4_ = (this->BulkDataId).D;
  local_38 = local_48;
  uStack_30 = uStack_40;
  FRecursiveMutex::Unlock(this_01);
  FVar9.Data = FVar3.Data;
  if (((uStack_50._4_4_ == uStack_40._4_4_ && (int)uStack_50 == (int)uStack_40) &&
      local_58._4_4_ == local_38._4_4_) && (int)local_58 == (int)local_48) {
    if (this->PayloadSize == 0) {
      bVar5 = param_1->PayloadSize == 0;
LAB_141f3e026:
      if (bVar5) {
        bVar5 = true;
        goto LAB_141f3e033;
      }
    }
    else if (param_1->PayloadSize != 0) {
      if ((this->Flags & IsVirtualized) == None) {
        if ((param_1->Flags & IsVirtualized) == None) {
          bVar5 = FPackagePath::IsEmpty(&this->PackagePath);
          if ((!bVar5) || (bVar5 = FPackagePath::IsEmpty(&param_1->PackagePath), !bVar5)) {
            bVar5 = FPackagePath::operator!=(&param_1->PackagePath,&this->PackagePath);
            pTVar2 = CVarShouldLoadFromSidecar.Ref;
            if (bVar5) goto LAB_141f3e02d;
            if ((this->Flags & HasPayloadSidecarFile) != None) {
              bVar5 = IsInParallelGameThread();
              if (bVar5) {
LAB_141f3dfa2:
                lVar7 = 0;
              }
              else {
                bVar5 = IsInGameThread();
                lVar7 = 1;
                if (bVar5) goto LAB_141f3dfa2;
              }
              if (pTVar2->ShadowedValue[lVar7] != false) goto LAB_141f3dfcd;
            }
            pTVar2 = CVarShouldLoadFromTrailer.Ref;
            bVar5 = IsInParallelGameThread();
            if ((bVar5) || (bVar5 = IsInGameThread(), lVar7 = 1, bVar5)) {
              lVar7 = 0;
            }
            if (pTVar2->ShadowedValue[lVar7] == false) {
              bVar5 = this->OffsetInFile == param_1->OffsetInFile;
              goto LAB_141f3e033;
            }
          }
LAB_141f3dfcd:
          lVar7 = *(longlong *)(this->PayloadContentId).Hash -
                  *(longlong *)(param_1->PayloadContentId).Hash;
          if ((lVar7 == 0) &&
             (lVar7 = *(longlong *)((this->PayloadContentId).Hash + 8) -
                      *(longlong *)((param_1->PayloadContentId).Hash + 8), lVar7 == 0)) {
            lVar7 = (ulonglong)*(uint *)((this->PayloadContentId).Hash + 0x10) -
                    (ulonglong)*(uint *)((param_1->PayloadContentId).Hash + 0x10);
          }
          bVar5 = lVar7 == 0;
          goto LAB_141f3e033;
        }
      }
      else if ((((param_1->Flags & IsVirtualized) != None) &&
               (*(longlong *)(this->PayloadContentId).Hash ==
                *(longlong *)(param_1->PayloadContentId).Hash)) &&
              (*(longlong *)((this->PayloadContentId).Hash + 8) ==
               *(longlong *)((param_1->PayloadContentId).Hash + 8))) {
        bVar5 = *(int *)((this->PayloadContentId).Hash + 0x10) ==
                *(int *)((param_1->PayloadContentId).Hash + 0x10);
        goto LAB_141f3e026;
      }
    }
  }
LAB_141f3e02d:
  bVar5 = false;
LAB_141f3e033:
  for (; FVar9.Data != FVar3.Data + lVar8 * 8; FVar9.Data = FVar9.Data + 8) {
    FRecursiveMutex::Unlock(*(FRecursiveMutex **)FVar9.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar5;
}

// LogRegisterError @ 141f3e2f0

void __thiscall
UE::Serialization::FEditorBulkData::LogRegisterError
          (FEditorBulkData *this,ERegisterResult param_1,UObject *param_2,FGuid *param_3,
          wchar_t *param_4,bool param_5)

{
  return;
}

// OnExitMemory @ 141f3f100

void __thiscall UE::Serialization::FEditorBulkData::OnExitMemory(FEditorBulkData *this)

{
  return;
}

// PullData @ 141f40950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedBuffer * __thiscall
UE::Serialization::FEditorBulkData::PullData
          (FEditorBulkData *this,FCompressedBuffer *__return_storage_ptr__)

{
  code *pcVar1;
  FCompositeBuffer *pFVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  IVirtualizationSystem *pIVar6;
  ulong64 uVar7;
  FCompressedBuffer *pFVar8;
  ForElementType<FSharedBuffer> FVar9;
  ForElementType<FSharedBuffer> FVar10;
  bool bVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [16];
  undefined8 *local_b8;
  undefined4 uStack_b0;
  FString local_a8;
  FString local_98;
  FCompressedBuffer local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  FCompositeBuffer local_58;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1649,"FEditorBulkData::PullData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x671);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1649);
  }
  pIVar6 = Virtualization::IVirtualizationSystem::Get();
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
  if (cVar4 == '\0') {
    if (1 < (byte)LogSerialization._0_1_) {
      `UE::Serialization::FEditorBulkData::PullData'::__l2::<lambda_1>::operator()
                (local_c8,this->Flags);
      ::LexToString(&local_98,&this->PayloadContentId);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    pFVar2 = &__return_storage_ptr__->CompressedData;
    (pFVar2->Segments).AllocatorInstance.InlineData[0] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[1] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[2] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[3] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[4] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[5] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[6] = '\0';
    (pFVar2->Segments).AllocatorInstance.InlineData[7] = '\0';
    (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
    (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
    goto LAB_141f40bfa;
  }
  pIVar6 = Virtualization::IVirtualizationSystem::Get();
  local_70 = *(undefined8 *)(this->PayloadContentId).Hash;
  uStack_68 = *(undefined8 *)((this->PayloadContentId).Hash + 8);
  local_60 = *(undefined4 *)((this->PayloadContentId).Hash + 0x10);
  local_b8 = &local_70;
  local_58.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  local_58.Segments.ArrayNum = 0;
  local_58.Segments.ArrayMax = 1;
  local_40 = 0;
  uStack_b0 = 1;
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,&local_b8);
  iVar3 = local_58.Segments.ArrayNum;
  local_88.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  if (cVar4 == '\0') {
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
    local_88.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
    local_88.CompressedData.Segments.ArrayNum = 0;
LAB_141f40aa0:
    local_88.CompressedData.Segments.ArrayMax = 1;
  }
  else {
    local_88.CompressedData.Segments.ArrayNum = local_58.Segments.ArrayNum;
    FVar10 = (ForElementType<FSharedBuffer>)&local_58;
    if (local_58.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar10 = local_58.Segments.AllocatorInstance.SecondaryData;
    }
    if (local_58.Segments.ArrayNum == 0) goto LAB_141f40aa0;
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,local_58.Segments.ArrayNum,0,(ForElementType<FSharedBuffer> *)&local_88,
               local_58.Segments.ArrayNum,&local_88.CompressedData.Segments.ArrayMax);
    FVar9 = (ForElementType<FSharedBuffer>)&local_88;
    if (local_88.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = local_88.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar9,(FSharedBuffer *)FVar10,iVar3);
  }
  FCompositeBuffer::~FCompositeBuffer(&local_58);
  if ((local_88.CompressedData.Segments.ArrayNum != 0) &&
     (uVar7 = FCompressedBuffer::GetRawSize(&local_88), this->PayloadSize != uVar7)) {
    FCompressedBuffer::GetRawSize(&local_88);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PulledPayload || PayloadSize == PulledPayload.GetRawSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                       ,0x689,
                       L"Mismatch between serialized length (%lld) and virtualized data length (%llu)"
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FCompressedBuffer *)(*pcVar1)();
      return pFVar8;
    }
  }
  if ((1 < (byte)LogSerialization._0_1_) && (local_88.CompressedData.Segments.ArrayNum == 0)) {
    `UE::Serialization::FEditorBulkData::PullData'::__l2::<lambda_1>::operator()
              (local_c8,this->Flags);
    ::LexToString(&local_a8,&this->PayloadContentId);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
            (&__return_storage_ptr__->CompressedData,&local_88.CompressedData);
  FCompositeBuffer::~FCompositeBuffer(&local_88.CompressedData);
LAB_141f40bfa:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// PushData @ 141f40c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::PushData(FEditorBulkData *this,FPackagePath *param_1)

{
  EFlags EVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  IVirtualizationSystem *pIVar6;
  FString *pFVar7;
  ForElementType<FSharedBuffer> FVar8;
  ForElementType<FSharedBuffer> FVar9;
  undefined1 auStackY_108 [32];
  undefined8 *local_c8;
  undefined4 uStack_c0;
  FString local_b8;
  FCompressedBuffer local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  FCompositeBuffer local_78;
  undefined8 local_60;
  FString local_58;
  undefined1 local_48;
  undefined2 local_46;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((((this->Flags & IsVirtualized) != None) &&
      ((this->Payload).Owner.Owner != (FBufferOwner *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataVirtualized() == false || Payload.IsNull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x647,
                         L"Cannot have a valid payload in memory if the payload is virtualized!"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar6 = Virtualization::IVirtualizationSystem::Get();
  if ((((this->Flags & IsVirtualized) == None) && (0 < this->PayloadSize)) &&
     (cVar4 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6), cVar4 != '\0')) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1616,"FEditorBulkData::PushData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                 ,0x650);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1616);
    }
    UpdateKeyIfNeeded(this);
    GetDataInternal(this,&local_a8);
    RecompressForSerialization(this,&local_a8,this->Flags);
    pFVar7 = FPackagePath::GetPackageName(param_1,&local_b8);
    local_80 = *(undefined4 *)((this->PayloadContentId).Hash + 0x10);
    local_90 = *(undefined8 *)(this->PayloadContentId).Hash;
    uStack_88 = *(undefined8 *)((this->PayloadContentId).Hash + 8);
    local_78.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    FVar9 = (ForElementType<FSharedBuffer>)&local_a8;
    if (local_a8.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = local_a8.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    if (local_a8.CompressedData.Segments.ArrayNum == 0) {
      local_78.Segments.ArrayMax = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,local_a8.CompressedData.Segments.ArrayNum,0,
                 (ForElementType<FSharedBuffer> *)&local_78,
                 local_a8.CompressedData.Segments.ArrayNum,&local_78.Segments.ArrayMax);
      FVar8 = (ForElementType<FSharedBuffer>)&local_78;
      if (local_78.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar8 = local_78.Segments.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>
                ((void *)FVar8,(FSharedBuffer *)FVar9,local_a8.CompressedData.Segments.ArrayNum);
    }
    local_60 = 0;
    ::FString::FString(&local_58,pFVar7);
    local_c8 = &local_90;
    local_48 = 0;
    local_46 = 0;
    uStack_c0 = 1;
    cVar4 = (**(code **)((longlong)*pIVar6 + 0x30))(pIVar6,&local_c8,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FCompositeBuffer::~FCompositeBuffer(&local_78);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      EVar1 = this->Flags;
      this->Flags = EVar1 & ~(ReferencesWorkspaceDomain|LegacyFileIsCompressed|ReferencesLegacyFile)
                    | IsVirtualized;
      if (((EVar1 & LegacyKeyWasGuidDerived) != None) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!EnumHasAnyFlags(Flags, EFlags::LegacyKeyWasGuidDerived)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                             ,0x662,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPackagePath::Empty(&this->PackagePath);
      this->OffsetInFile = -1;
    }
    FCompositeBuffer::~FCompositeBuffer(&local_a8.CompressedData);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// RecompressForSerialization @ 141f41e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::RecompressForSerialization
          (FEditorBulkData *this,FCompressedBuffer *param_1,EFlags param_2)

{
  undefined2 uVar1;
  FCompressedBuffer *pFVar2;
  char cVar3;
  ECompressor EVar4;
  undefined2 uVar5;
  undefined1 auStackY_88 [32];
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_54;
  ulong64 local_50;
  FCompositeBuffer local_48;
  FCompressedBuffer local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_56 = FCompressedBuffer::TryGetCompressParameters
                       (param_1,(ECompressor *)&local_58,
                        (ECompressionLevel *)((longlong)&local_58 + 1),&local_50);
  if ((bool)local_56) {
  }
  else {
    local_58._0_1_ = NotSet;
    local_58 = 0;
    local_58._1_1_ = None;
  }
  if ((param_2 & DisablePayloadCompression) == None) {
    if ((this->CompressionSettings).bIsSet != false) {
      uVar1._0_1_ = (this->CompressionSettings).Compressor;
      uVar1._1_1_ = (this->CompressionSettings).CompressionLevel;
      cVar3 = (this->CompressionSettings).bIsSet;
      uVar5 = uVar1;
      local_54 = uVar1;
      goto LAB_141f41ec1;
    }
    if ((!(bool)local_56) || (local_58._1_1_ == None)) {
      uVar5 = 3;
      uVar1._1_1_ = Fast;
      goto LAB_141f41ebf;
    }
    local_54 = local_58;
    uVar5 = local_54;
    EVar4 = (ECompressor)local_58;
    local_54._1_1_ = (ECompressionLevel)((ushort)local_58 >> 8);
    uVar1._1_1_ = local_54._1_1_;
    cVar3 = local_56;
    local_54 = uVar5;
  }
  else {
    uVar5 = 0;
    uVar1._1_1_ = None;
LAB_141f41ebf:
    cVar3 = '\x01';
LAB_141f41ec1:
    EVar4 = (ECompressor)uVar5;
    if ((EVar4 != (ECompressor)local_58) || (uVar1._1_1_ != local_58._1_1_)) goto LAB_141f41ecf;
  }
  if (cVar3 == local_56) {
    return;
  }
LAB_141f41ecf:
  FCompressedBuffer::DecompressToComposite(param_1,&local_48);
  FCompositeBuffer::Reset(&param_1->CompressedData);
  pFVar2 = FCompressedBuffer::Compress(&local_30,&local_48,EVar4,uVar1._1_1_,0);
  FCompositeBuffer::operator=(&param_1->CompressedData,&pFVar2->CompressedData);
  FCompositeBuffer::~FCompositeBuffer(&local_30.CompressedData);
  FCompositeBuffer::~FCompositeBuffer(&local_48);
  return;
}

// Register @ 141f42110

void __thiscall
UE::Serialization::FEditorBulkData::Register
          (FEditorBulkData *this,UObject *param_1,wchar_t *param_2,bool param_3)

{
  return;
}

// Reset @ 141f43bb0

void __thiscall UE::Serialization::FEditorBulkData::Reset(FEditorBulkData *this)

{
  FArchive *pFVar1;
  
  FRecursiveMutex::Lock(&this->Mutex);
  pFVar1 = this->AttachedAr;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,this,0);
    this->AttachedAr = (FArchive *)0x0;
  }
  (this->PayloadContentId).Hash[0] = '\0';
  (this->PayloadContentId).Hash[1] = '\0';
  (this->PayloadContentId).Hash[2] = '\0';
  (this->PayloadContentId).Hash[3] = '\0';
  (this->PayloadContentId).Hash[4] = '\0';
  (this->PayloadContentId).Hash[5] = '\0';
  (this->PayloadContentId).Hash[6] = '\0';
  (this->PayloadContentId).Hash[7] = '\0';
  (this->PayloadContentId).Hash[8] = '\0';
  (this->PayloadContentId).Hash[9] = '\0';
  (this->PayloadContentId).Hash[10] = '\0';
  (this->PayloadContentId).Hash[0xb] = '\0';
  (this->PayloadContentId).Hash[0xc] = '\0';
  (this->PayloadContentId).Hash[0xd] = '\0';
  (this->PayloadContentId).Hash[0xe] = '\0';
  (this->PayloadContentId).Hash[0xf] = '\0';
  (this->PayloadContentId).Hash[0x10] = '\0';
  (this->PayloadContentId).Hash[0x11] = '\0';
  (this->PayloadContentId).Hash[0x12] = '\0';
  (this->PayloadContentId).Hash[0x13] = '\0';
  FSharedBuffer::Reset(&this->Payload);
  this->PayloadSize = 0;
  this->OffsetInFile = -1;
  FPackagePath::Empty(&this->PackagePath);
  this->Flags = None;
  (this->CompressionSettings).Compressor = NotSet;
  (this->CompressionSettings).CompressionLevel = None;
  (this->CompressionSettings).bIsSet = false;
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// Serialize @ 141f448b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Serialization::FEditorBulkData::Serialize
          (FEditorBulkData *this,FArchive *param_1,UObject *param_2,bool param_3)

{
  EFlags *pEVar1;
  longlong *plVar2;
  FPackageTrailerBuilder *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  EFlags EVar7;
  UObject *pUVar8;
  FLinkerSave *pFVar9;
  bool bVar10;
  EPayloadFilterReason EVar11;
  EPayloadStatus EVar12;
  FLinkerSave *pFVar13;
  FIoHash *pFVar14;
  undefined8 uVar15;
  IVirtualizationSystem *pIVar16;
  FCompressedBuffer *pFVar17;
  long64 lVar18;
  FText *this_01;
  FString *pFVar19;
  UPackage *pUVar20;
  FGuid *pFVar21;
  FLinkerLoad *pFVar22;
  longlong lVar23;
  ulong64 uVar24;
  FSharedBuffer FVar25;
  code **ppcVar26;
  FPackageTrailer *this_02;
  EPayloadFilterReason EVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStackY_1d8 [32];
  bool local_198;
  EFlags local_194;
  FCompressedBuffer *local_190;
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  UObject *local_178;
  FPackagePath local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  long64 local_130;
  ForAnyElementType *local_128;
  undefined8 local_120;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_118;
  FText local_110;
  FCompressedBuffer local_100;
  FGuid local_e8;
  FCompressedBuffer local_d8;
  FCompressedBuffer local_c0;
  undefined1 local_a8 [24];
  FCompressedBuffer local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar29 = -1 < CpuChannel->Enabled;
  local_178 = param_2;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId872,"FEditorBulkData::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x368);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId872);
  }
  FRecursiveMutex::Lock(&this->Mutex);
  if (((param_1->field_0x29 & 1) == 0) || ((param_1->field_0x2b & 9) != 0)) goto LAB_141f4556b;
  local_198 = false;
  pFVar13 = (FLinkerSave *)0x0;
  if ((param_1->field_0x28 & 4) != 0) {
    pFVar13 = (FLinkerSave *)(**(code **)(*(longlong *)param_1 + 0x20))(param_1);
    pFVar9 = (FLinkerSave *)0x0;
    if ((((pFVar13 == (FLinkerSave *)0x0) ||
         (pFVar9 = (FLinkerSave *)0x0, (int)pFVar13->_padding_ != 2)) ||
        (pFVar9 = pFVar13, pFVar13->bProceduralSave == false)) ||
       ((*(longlong *)&param_1->field_0x68 != 0 &&
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)))) {
      pFVar13 = pFVar9;
      local_198 = false;
      UpdateKeyIfNeeded(this);
    }
    else {
      local_198 = true;
    }
  }
  local_120 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  pEVar1 = (EFlags *)**(undefined8 **)&param_1->field_0x8;
  if ((EFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Flags,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->Flags);
    }
  }
  else {
    this->Flags = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->Flags = this->Flags & ~(WasDetached|IsTornOff|HasRegistered);
  }
  if ((param_1->field_0x28 & 4) != 0) {
    if (((this->PayloadSize != 0) &&
        ((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
         (this->BulkDataId).A == 0)) &&
       (((this->Flags & IsCooked) == None &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Ar.IsSaving() || GetPayloadSize() == 0 || BulkDataId.IsValid() || EnumHasAnyFlags(Flags, EFlags::IsCooked)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                             ,0x416,L""), bVar10)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((param_1->field_0x28 & 4) != 0) && (this->PayloadSize != 0)) {
      for (pFVar14 = &this->PayloadContentId; pFVar14 != (FIoHash *)&this->field_0x24;
          pFVar14 = (FIoHash *)(pFVar14->Hash + 4)) {
        if (*(int *)pFVar14->Hash != 0) goto LAB_141f44ade;
      }
      if (((this->Flags & IsCooked) == None) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Ar.IsSaving() || GetPayloadSize() == 0 || !PayloadContentId.IsZero() || EnumHasAnyFlags(Flags, EFlags::IsCooked)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                              ,0x417,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_141f44ade:
  ::operator<<(param_1,&this->BulkDataId);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PayloadContentId);
  ::operator<<(param_1,&this->PayloadSize);
  if ((param_1->field_0x28 & 1) != 0) {
    if ((((this->PayloadSize != 0) &&
         ((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
          (this->BulkDataId).A == 0)) && ((this->Flags & IsCooked) == None)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Ar.IsLoading() || GetPayloadSize() == 0 || BulkDataId.IsValid() || EnumHasAnyFlags(Flags, EFlags::IsCooked)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                            ,0x41e,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((param_1->field_0x28 & 1) != 0) && (this->PayloadSize != 0)) {
      for (pFVar14 = &this->PayloadContentId; pFVar14 != (FIoHash *)&this->field_0x24;
          pFVar14 = (FIoHash *)(pFVar14->Hash + 4)) {
        if (*(int *)pFVar14->Hash != 0) goto LAB_141f44bb2;
      }
      if (((this->Flags & IsCooked) == None) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Ar.IsLoading() || GetPayloadSize() == 0 || !PayloadContentId.IsZero() || EnumHasAnyFlags(Flags, EFlags::IsCooked)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                              ,0x41f,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_141f44bb2:
  pUVar8 = local_178;
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) goto LAB_141f4556b;
    if ((((this->BulkDataId).D != 0 || (this->BulkDataId).C != 0) || (this->BulkDataId).B != 0) ||
        (this->BulkDataId).A != 0) {
      if (((local_178 == (UObject *)0x0) ||
          (pUVar20 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_178),
          pUVar20 == (UPackage *)0x0)) || ((pUVar20->_padding_ & 0x40) == 0)) {
        lVar28 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
        if ((lVar28 == 0) || (*(int *)(lVar28 + 0xb8) != 1)) {
          lVar28 = 0;
        }
        if (((*(uint *)&param_1->field_0x34 & 0x1000) == 0) &&
           ((lVar28 == 0 ||
            (bVar10 = FLinkerInstancingContext::IsInstanced
                                ((FLinkerInstancingContext *)(lVar28 + 0x3b8)), !bVar10))))
        goto LAB_141f45124;
      }
      pFVar21 = FGuid::NewGuid(&local_e8);
      uVar4 = pFVar21->B;
      uVar5 = pFVar21->C;
      uVar6 = pFVar21->D;
      (this->BulkDataId).A = pFVar21->A;
      (this->BulkDataId).B = uVar4;
      (this->BulkDataId).C = uVar5;
      (this->BulkDataId).D = uVar6;
    }
LAB_141f45124:
    this->OffsetInFile = -1;
    FPackagePath::Empty(&this->PackagePath);
    if (pUVar8 == (UObject *)0x0) {
LAB_141f45186:
      this_02 = (FPackageTrailer *)0x0;
    }
    else {
      pUVar20 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar8);
      if ((pUVar20 == (UPackage *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                              ,0xb7,L"Owner was not a valid UPackage!"), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = FLinkerLoad::FindExistingLinkerForPackage(pUVar20);
      if (pFVar22 == (FLinkerLoad *)0x0) goto LAB_141f45186;
      this_02 = (pFVar22->PackageTrailer).Ptr;
    }
    if ((this->Flags >> 9 & 1) == 0) {
      if (((2 < (byte)LogSerialization._0_1_) && ((this->Flags & IsVirtualized) != None)) &&
         (lVar28 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1), lVar28 != 0)) {
        if (pUVar8 == (UObject *)0x0) {
          ::FString::FString(&local_140,L"Unknown");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar8,&local_140,(UObject *)0x0,None);
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      if (((this->Flags & IsVirtualized) == None) && ((this->Flags >> 10 & 1) == 0)) {
        ::operator<<(param_1,&this->OffsetInFile);
      }
    }
    else {
      if (this_02 == (FPackageTrailer *)0x0) {
        if (pUVar8 == (UObject *)0x0) {
          ::FString::FString(&local_160,L"Unknown");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar8,&local_160,(UObject *)0x0,None);
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Trailer != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                            ,0x49a,
                            L"Payload was stored in a package trailer, but there no trailer loaded. [%s]"
                           );
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar18 = FPackageTrailer::FindPayloadOffsetInFile(this_02,&this->PayloadContentId);
      this->OffsetInFile = lVar18;
      if (((this->Flags & IsVirtualized) != None) &&
         (EVar12 = FPackageTrailer::FindPayloadStatus(this_02,&this->PayloadContentId),
         EVar12 != StoredVirtualized)) {
        if (2 < (byte)LogSerialization._0_1_) {
          if (pUVar8 == (UObject *)0x0) {
            ::FString::FString(&local_150,L"Unknown");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar8,&local_150,(UObject *)0x0,None);
          }
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
        }
        this->Flags = this->Flags & ~IsVirtualized;
      }
    }
    if ((this_02 != (FPackageTrailer *)0x0) &&
       (EVar12 = FPackageTrailer::FindPayloadStatus(this_02,&this->PayloadContentId),
       EVar12 == StoredVirtualized)) {
      this->Flags = this->Flags | IsVirtualized;
      this->OffsetInFile = -1;
    }
    if ((((this->Flags & IsVirtualized) != None) &&
        ((this->Flags & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) != None)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(IsDataVirtualized() && IsReferencingByPackagePath())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                            ,0x4bd,L"Payload cannot be both virtualized and a reference"), bVar10))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->Flags & IsVirtualized) != None) {
      if ((this->OffsetInFile != -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsDataVirtualized() || OffsetInFile == INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                              ,0x4be,L"Virtualized payloads should have an invalid offset"), bVar10)
         ) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->Flags & IsVirtualized) != None) goto LAB_141f4556b;
    }
    lVar28 = (**(code **)(*(longlong *)param_1 + 0x238))(param_1);
    if (((char)param_1->field_0x2a < '\0') && (lVar28 != 0)) {
      if (pUVar8 != (UObject *)0x0) {
        pUVar20 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar8);
        if ((pUVar20 == (UPackage *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Package != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                                ,0xb7,L"Owner was not a valid UPackage!"), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar22 = FLinkerLoad::FindExistingLinkerForPackage(pUVar20);
        if (pFVar22 != (FLinkerLoad *)0x0) {
          FPackagePath::FPackagePath(&local_170,&pFVar22->PackagePath);
          (this->PackagePath).PackageName = local_170.PackageName;
          (this->PackagePath).HeaderExtension = local_170.HeaderExtension;
          *(undefined3 *)&(this->PackagePath).field_0x9 = local_170._9_3_;
          goto LAB_141f4548f;
        }
      }
      local_170.PackageName.ComparisonIndex.Value = 0;
      local_170.PackageName.Number = 0;
      (this->PackagePath).PackageName.ComparisonIndex = 0;
      (this->PackagePath).PackageName.Number = 0;
      *(undefined4 *)&(this->PackagePath).HeaderExtension = 0;
      local_170.HeaderExtension = Unspecified;
      local_170._9_3_ = 0;
    }
    else {
      FPackagePath::Empty(&this->PackagePath);
    }
LAB_141f4548f:
    bVar10 = FPackagePath::IsEmpty(&this->PackagePath);
    if (((!bVar10) && (lVar28 != 0)) || ((this->Flags & IsCooked) != None)) goto LAB_141f4556b;
    lVar28 = this->OffsetInFile;
    lVar23 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    if ((lVar23 != lVar28) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.Tell() == OffsetInFile",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                            ,0x4dc,
                            L"Attempting to load an inline payload but the offset does not match"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_a8._8_8_ = (ForElementType<FSharedBuffer>)0x0;
    local_a8._16_8_ = &DAT_100000000;
    SerializeData(this,param_1,(FCompressedBuffer *)local_a8,this->Flags);
    uVar24 = FCompressedBuffer::GetRawSize((FCompressedBuffer *)local_a8);
    if (uVar24 == 0) {
      FSharedBuffer::Reset(&this->Payload);
    }
    else {
      FVar25 = FCompressedBuffer::Decompress((FCompressedBuffer *)local_a8);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                (&(this->Payload).Owner,
                 (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar25.Owner.Owner);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_118);
    }
    pFVar17 = (FCompressedBuffer *)local_a8;
  }
  else {
    local_194 = BuildFlagsForSerialization(this,param_1,local_198);
    if ((local_194 >> 10 & 1) != 0) goto LAB_141f44bfc;
    if ((local_194 & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) != None) {
      if ((local_194 >> 9 & 1) == 0) {
        ::operator<<(param_1,&this->OffsetInFile);
        goto LAB_141f44bfc;
      }
LAB_141f44c02:
      if ((local_194 & IsVirtualized) != None) {
        FPackageTrailerBuilder::AddVirtualizedPayload
                  ((pFVar13->PackageTrailerBuilder).Ptr,&this->PayloadContentId,this->PayloadSize);
      }
LAB_141f44c1e:
      ValidatePackageTrailerBuilder(pFVar13,&this->PayloadContentId,local_194);
      if ((local_194 >> 9 & 1) != 0) {
        local_194 = local_194 & ~IsVirtualized;
      }
      uVar15 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_120);
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((EFlags *)plVar2[1] < (EFlags *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_194,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_194);
        }
      }
      else {
        local_194 = *(EFlags *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar15);
      bVar10 = CanUnloadData(this);
      if (bVar10) {
        (this->CompressionSettings).Compressor = NotSet;
        (this->CompressionSettings).CompressionLevel = None;
        (this->CompressionSettings).bIsSet = false;
        FSharedBuffer::Reset(&this->Payload);
      }
      goto LAB_141f4556b;
    }
    if ((local_194 & IsVirtualized) != None) {
LAB_141f44bfc:
      if ((local_194 >> 9 & 1) != 0) goto LAB_141f44c02;
      goto LAB_141f44c1e;
    }
    GetDataInternal(this,&local_90);
    bVar10 = IsDataValid(this,&local_90);
    if ((bVar10) && ((this->PayloadSize < 1 || (local_90.CompressedData.Segments.ArrayNum != 0)))) {
      RecompressForSerialization(this,&local_90,local_194);
      if ((local_90.CompressedData.Segments.ArrayNum == 0) &&
         ((this->PayloadSize != 0 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("PayloadToSerialize || GetPayloadSize() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                               ,0x44c,L"Failed to acquire the payload for saving!"), bVar10)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar7 = local_194;
      if (pFVar13 == (FLinkerSave *)0x0) {
        if (((local_194 & StoredInPackageTrailer) != None) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsStoredInPackageTrailer(UpdatedFlags) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                                ,0x462,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar18 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_190 = (FCompressedBuffer *)0xffffffffffffffff;
        if ((undefined8 *)plVar2[1] < (undefined8 *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_190,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_190);
          }
        }
        else {
          local_190 = *(FCompressedBuffer **)*plVar2;
          *plVar2 = *plVar2 + 8;
        }
        local_130 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        SerializeData(this,param_1,&local_90,local_194);
        UpdateArchiveData<__int64>(param_1,lVar18,&local_130);
        FCompositeBuffer::~FCompositeBuffer(&local_90.CompressedData);
      }
      else if ((local_194 >> 9 & 1) == 0) {
        pFVar17 = FCompressedBuffer::FCompressedBuffer(&local_c0,&local_90);
        SerializeToLegacyPath(this,pFVar13,pFVar17,EVar7,local_178);
        FCompositeBuffer::~FCompositeBuffer(&local_90.CompressedData);
      }
      else {
        local_190 = FCompressedBuffer::FCompressedBuffer(&local_d8,&local_90);
        pUVar8 = local_178;
        local_a8._8_4_ = EVar7;
        local_a8._16_8_ = local_178;
        local_a8._0_8_ = this;
        bVar10 = Virtualization::IVirtualizationSystem::IsInitialized();
        if (bVar10) {
          pIVar16 = Virtualization::IVirtualizationSystem::Get();
          EVar11 = (**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,pUVar8);
        }
        else {
          EVar11 = None;
        }
        this_00 = (pFVar13->PackageTrailerBuilder).Ptr;
        EVar27 = EVar11 | Asset;
        if (this->bSkipVirtualization == false) {
          EVar27 = EVar11;
        }
        local_78[0] = (code *)0x0;
        local_50 = FMemory::Malloc(0x20,8);
        *local_50 = (code *)&Core::Private::Function::
                             TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>,0,1>
                             ::_vftable_;
        *(uchar (*) [8])(local_50 + 1) = (uchar  [8])local_a8._0_8_;
        *(undefined8 *)(local_50 + 2) = local_a8._8_8_;
        local_50[3] = (code *)local_a8._16_8_;
        if ((uchar (*) [8])(local_50 + 1) != (uchar (*) [8])0x0) {
          local_78[0] = Core::Private::Function::
                        TFunctionRefCaller<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,void,FLinkerSave_&,UE::FPackageTrailer_const_&>
                        ::Call;
        }
        FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
                  (&local_100.CompressedData,&local_190->CompressedData);
        FPackageTrailerBuilder::AddPayload
                  (this_00,&this->PayloadContentId,&local_100,EVar27,
                   (TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *)local_78);
        if (local_78[0] != (code *)0x0) {
          ppcVar26 = local_78 + 2;
          if (local_50 != (code **)0x0) {
            ppcVar26 = local_50;
          }
          (**(code **)(*ppcVar26 + 0x10))();
        }
        FCompositeBuffer::~FCompositeBuffer(&local_190->CompressedData);
        FCompositeBuffer::~FCompositeBuffer(&local_90.CompressedData);
      }
      goto LAB_141f44bfc;
    }
    this_01 = GetCorruptedPayloadErrorMsgForSave(this,&local_110,pFVar13);
    pFVar19 = FText::ToString(this_01);
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180 = (pFVar19->Data).ArrayNum;
    lVar28 = (longlong)local_180;
    _Src = (pFVar19->Data).AllocatorInstance.Data;
    if (local_180 == 0) {
      local_17c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_180,0,&local_188,local_180,&local_17c);
      memcpy(local_188.Data,_Src,lVar28 * 2);
    }
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    local_128 = &local_188;
    `UE::Serialization::FEditorBulkData::TryPayloadValidationForSaving'::__l5::<lambda_1>::
    operator()(&local_128);
    if ((pFVar13 == (FLinkerSave *)0x0) || (pFVar13->LogOutput == (FOutputDevice *)0x0)) {
      if (1 < (byte)LogSerialization._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      }
    }
    else {
      FOutputDevice::LogfImpl(pFVar13->LogOutput,Error,L"%s");
    }
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    pFVar17 = &local_90;
  }
  FCompositeBuffer::~FCompositeBuffer(&pFVar17->CompressedData);
LAB_141f4556b:
  FRecursiveMutex::Unlock(&this->Mutex);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SerializeData @ 141f45cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Serialization::FEditorBulkData::SerializeData
          (FEditorBulkData *this,FArchive *param_1,FCompressedBuffer *param_2,EFlags param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  long64 lVar3;
  FUniqueBuffer FVar4;
  code *pcVar5;
  FName FVar6;
  FUniqueBuffer FVar7;
  FNameEntryId FVar8;
  FUniqueBuffer FVar9;
  undefined4 extraout_var;
  longlong lVar10;
  longlong lVar11;
  FSharedBuffer FVar12;
  FCompressedBuffer *pFVar13;
  void *pvVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_a8 [32];
  FUniqueBuffer local_78;
  FNameEntryId local_70;
  uint uStack_6c;
  FCompressedBuffer local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1559,"FEditorBulkData::SerializeData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x617);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1559);
  }
  if ((param_1->field_0x28 & 4) != 0) {
    ::operator<<(param_1,param_2);
    bVar16 = true;
    goto LAB_141f460ad;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    bVar16 = false;
    goto LAB_141f460ad;
  }
  if ((param_3 & ReferencesLegacyFile) == None) {
    ::operator<<(param_1,param_2);
    bVar16 = (param_2->CompressedData).Segments.ArrayNum == 0;
    goto LAB_141f460ad;
  }
  lVar3 = this->PayloadSize;
  pvVar14 = (void *)0x0;
  local_78.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0
  ;
  if ((param_3 & LegacyFileIsCompressed) == None) {
    pcVar5 = *(code **)(*(longlong *)param_1 + 0x28);
    lVar10 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    lVar11 = (*pcVar5)(param_1);
    if (lVar3 <= lVar10 - lVar11) {
      FVar9 = FUniqueBuffer::Alloc((ulong64)&local_70);
      FVar7.Owner.Owner = local_78.Owner.Owner;
      FVar4.Owner.Owner =
           *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar9.Owner.Owner;
      *(undefined8 *)FVar9.Owner.Owner = 0;
      if (local_78.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_78.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar2._0_4_ & 0x3fffffff) == 1) {
          lVar10 = *(longlong *)local_78.Owner.Owner;
          local_78.Owner.Owner = FVar4.Owner.Owner;
          (**(code **)(lVar10 + 0x10))(FVar7.Owner.Owner);
          *(void **)((longlong)FVar7.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar7.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar7.Owner.Owner + 0x18);
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          FVar4.Owner.Owner = local_78.Owner.Owner;
          if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar7.Owner.Owner)(FVar7.Owner.Owner,1);
            FVar4.Owner.Owner = local_78.Owner.Owner;
          }
        }
      }
      local_78.Owner.Owner = FVar4.Owner.Owner;
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_70);
      FVar4.Owner.Owner = local_78.Owner.Owner;
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (local_78.Owner.Owner == (FBufferOwner *)0x0) {
        pvVar14 = (void *)0x0;
      }
      else {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_78.Owner.Owner + 0x18) >> 0x3c
            & 4) == 0) {
          (**(code **)(*(longlong *)local_78.Owner.Owner + 8))(local_78.Owner.Owner);
        }
        pvVar14 = *(void **)((longlong)FVar4.Owner.Owner + 8);
      }
      (*pcVar5)(param_1,pvVar14);
      goto LAB_141f45f99;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    if (1 < (byte)LogSerialization._0_1_) {
      (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&local_70);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if ((void *)CONCAT44(uStack_6c,local_70.Value) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(uStack_6c,local_70.Value));
      }
    }
    bVar16 = false;
  }
  else {
    FVar9 = FUniqueBuffer::Alloc((ulong64)&local_70);
    FVar7.Owner.Owner = local_78.Owner.Owner;
    FVar4.Owner.Owner = *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar9.Owner.Owner
    ;
    *(undefined8 *)FVar9.Owner.Owner = 0;
    if (local_78.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_78.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        lVar10 = *(longlong *)local_78.Owner.Owner;
        local_78.Owner.Owner = FVar4.Owner.Owner;
        (**(code **)(lVar10 + 0x10))(FVar7.Owner.Owner);
        *(void **)((longlong)FVar7.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar7.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar7.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        FVar4.Owner.Owner = local_78.Owner.Owner;
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar7.Owner.Owner)(FVar7.Owner.Owner,1);
          FVar4.Owner.Owner = local_78.Owner.Owner;
        }
      }
    }
    local_78.Owner.Owner = FVar4.Owner.Owner;
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_70);
    FVar8 = FNameEntryId::FromValidEName((EName)&local_70);
    FVar4.Owner.Owner = local_78.Owner.Owner;
    local_70.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
    uStack_6c = 0;
    if (local_78.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_78.Owner.Owner + 0x18) >> 0x3c &
          4) == 0) {
        (**(code **)(*(longlong *)local_78.Owner.Owner + 8))(local_78.Owner.Owner);
      }
      pvVar14 = *(void **)((longlong)FVar4.Owner.Owner + 8);
    }
    FVar6.Number = uStack_6c;
    FVar6.ComparisonIndex.Value = local_70.Value;
    FArchive::SerializeCompressed(param_1,pvVar14,lVar3,FVar6,COMPRESS_NoFlags,false);
LAB_141f45f99:
    FVar12 = FUniqueBuffer::MoveToShared(&local_78);
    pFVar13 = FCompressedBuffer::Compress
                        (&local_60,(FSharedBuffer *)FVar12.Owner.Owner,NotSet,None,0);
    FCompositeBuffer::operator=(&param_2->CompressedData,&pFVar13->CompressedData);
    FCompositeBuffer::~FCompositeBuffer(&local_60.CompressedData);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_70);
    bVar16 = true;
  }
  FVar4.Owner.Owner = local_78.Owner.Owner;
  if (local_78.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_78.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_78.Owner.Owner + 0x10))(local_78.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
LAB_141f460ad:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar16;
}

// SerializeForRegistry @ 141f4c300

void __thiscall
UE::Serialization::FEditorBulkData::SerializeForRegistry(FEditorBulkData *this,FArchive *param_1)

{
  FRecursiveMutex *this_00;
  long64 *plVar1;
  longlong *plVar2;
  EFlags *pEVar3;
  long64 *plVar4;
  code *pcVar5;
  bool bVar6;
  EFlags local_res8 [2];
  FString local_58;
  FString local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  this_00 = &this->Mutex;
  FRecursiveMutex::Lock(this_00);
  if ((param_1->field_0x28 & 4) == 0) {
    pEVar3 = (EFlags *)**(undefined8 **)&param_1->field_0x8;
    if ((EFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Flags,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->Flags);
      }
    }
    else {
      this->Flags = *pEVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    this->Flags = this->Flags & ~(WasDetached|HasRegistered);
    this->Flags = this->Flags | IsTornOff;
    goto LAB_141f4c473;
  }
  FRecursiveMutex::Lock(this_00);
  if (((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
       (this->BulkDataId).A == 0) || (this->PayloadSize < 1)) {
LAB_141f4c375:
    FRecursiveMutex::Unlock(this_00);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanSaveForRegistry()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                       ,0x500,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    FRecursiveMutex::Lock(this_00);
    if (((this->Payload).Owner.Owner != (FBufferOwner *)0x0) &&
       (((this->Flags & IsVirtualized) == None &&
        (bVar6 = FPackagePath::IsEmpty(&this->PackagePath), bVar6)))) {
      FRecursiveMutex::Unlock(this_00);
      goto LAB_141f4c375;
    }
    FRecursiveMutex::Unlock(this_00);
    if ((-1 < (char)this->Flags) || ((this->Flags & HasRegistered) != None)) goto LAB_141f4c375;
    FRecursiveMutex::Unlock(this_00);
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = this->Flags & ~(WasDetached|IsTornOff|HasRegistered);
  if ((EFlags *)plVar2[1] < (EFlags *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(EFlags *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
LAB_141f4c473:
  ::operator<<(param_1,&this->BulkDataId);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PayloadContentId,0x14);
  plVar1 = &this->PayloadSize;
  plVar4 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_58);
    if (local_58.Data.ArrayNum < 2) {
      FPackagePath::Empty(&this->PackagePath);
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
    else {
      local_38 = local_58.Data.AllocatorInstance.Data;
      iStack_30 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iStack_30 = 0;
      }
      local_28._12_4_ = uStack_2c;
      local_28.Size = iStack_30;
      local_28.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      bVar6 = FPackagePath::TryFromPackageName(&local_28,&this->PackagePath);
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if ((!bVar6) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8129764498757122786>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                             ,0x51e,"FPackagePath::TryFromPackageName(PackageName, PackagePath)"),
         local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data, bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    FPackagePath::GetPackageName(&this->PackagePath,&local_48);
    ::operator<<(param_1,&local_48);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  plVar1 = &this->OffsetInFile;
  plVar4 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
      FRecursiveMutex::Unlock(this_00);
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    FRecursiveMutex::Unlock(this_00);
    return;
  }
  *plVar1 = *plVar4;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  FRecursiveMutex::Unlock(this_00);
  return;
}

// SerializeToLegacyPath @ 141f4cb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f4cda1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x000141f4cda5 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
UE::Serialization::FEditorBulkData::SerializeToLegacyPath
          (FEditorBulkData *this,FLinkerSave *param_1,FCompressedBuffer *param_2,EFlags param_3,
          UObject *param_4)

{
  int *piVar1;
  longlong *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TArray<TUniqueFunction<void___cdecl(FLinkerSave_&,FArchive_&,__int64)>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined1 auStack_138 [32];
  code **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ulong64 local_e8 [2];
  code *local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 *local_b0;
  FEditorBulkData *local_a8;
  undefined8 local_a0;
  FCompositeBuffer local_98;
  EFlags local_80;
  UObject *local_78;
  FEditorBulkData *local_70;
  undefined8 local_68;
  FCompressedBuffer local_60;
  EFlags local_48;
  UObject *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = &param_1->_padding_;
  uVar6 = (**(code **)(*this_00 + 0x28))(this_00);
  plVar2 = (longlong *)param_1->_padding_;
  local_e8[0] = 0xffffffffffffffff;
  if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(*this_00 + 0x188))(this_00,local_e8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_e8);
    }
  }
  else {
    local_e8[0] = *(ulong64 *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  local_70 = this;
  local_68 = uVar6;
  FCompressedBuffer::FCompressedBuffer(&local_60,param_2);
  local_40 = param_4;
  local_a8 = local_70;
  local_a0 = local_68;
  local_48 = param_3;
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(&local_98,&local_60.CompressedData);
  local_80 = local_48;
  local_78 = local_40;
  pTVar10 = &param_1->AdditionalDataToAppend;
  local_d8[0] = (code *)0x0;
  puVar7 = FMemory::Malloc(0x40,8);
  *puVar7 = &Core::Private::Function::
             TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::`2'::<lambda_2>,1,1>
             ::_vftable_;
  puVar7[1] = local_a8;
  puVar7[2] = local_a0;
  local_b0 = puVar7;
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>((FCompositeBuffer *)(puVar7 + 3),&local_98)
  ;
  *(EFlags *)(puVar7 + 6) = local_80;
  puVar7[7] = local_78;
  pFVar9 = (pTVar10->AllocatorInstance).Data;
  if (puVar7 + 1 != (undefined8 *)0x0) {
    local_d8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,void,FLinkerSave_&,FArchive_&,__int64>
                  ::Call;
  }
  if ((pFVar9 <= (FScriptContainerElement *)local_d8) &&
     (lVar8 = (longlong)(param_1->AdditionalDataToAppend).ArrayMax,
     (FScriptContainerElement *)local_d8 < pFVar9 + lVar8 * 0x30)) {
    local_100 = (longlong)(param_1->AdditionalDataToAppend).ArrayNum;
    local_f8 = 0x30;
    local_118 = local_d8;
    local_110 = pFVar9;
    local_108 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->AdditionalDataToAppend).ArrayNum;
  piVar1 = &(param_1->AdditionalDataToAppend).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar10->AllocatorInstance,piVar1);
  }
  (param_1->AdditionalDataToAppend).ArrayNum = iVar5 + 1;
  pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
  *(code **)pFVar9 = local_d8[0];
  *(undefined8 **)(pFVar9 + 0x28) = local_b0;
  local_b0 = (undefined8 *)0x0;
  *(undefined4 *)(pFVar9 + 0x10) = local_c8;
  *(undefined4 *)(pFVar9 + 0x14) = uStack_c4;
  *(undefined4 *)(pFVar9 + 0x18) = uStack_c0;
  *(undefined4 *)(pFVar9 + 0x1c) = uStack_bc;
  *(longlong *)(pFVar9 + 0x20) = local_b8;
  if ((*(longlong *)pFVar9 == 0) && (local_d8[0] != (code *)0x0)) {
    (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x10))();
  }
  FCompositeBuffer::~FCompositeBuffer(&local_98);
  FCompositeBuffer::~FCompositeBuffer(&local_60.CompressedData);
  FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
  return;
}

// SerializeToPackageTrailer @ 141f4ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
UE::Serialization::FEditorBulkData::SerializeToPackageTrailer
          (FEditorBulkData *this,FLinkerSave *param_1,FCompressedBuffer *param_2,EFlags param_3,
          UObject *param_4)

{
  FPackageTrailerBuilder *this_00;
  bool bVar1;
  EPayloadFilterReason EVar2;
  IVirtualizationSystem *pIVar3;
  code **ppcVar4;
  EPayloadFilterReason EVar5;
  undefined1 auStackY_d8 [32];
  undefined4 uStack_9c;
  FCompressedBuffer local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  EVar2 = None;
  bVar1 = Virtualization::IVirtualizationSystem::IsInitialized();
  if (bVar1) {
    pIVar3 = Virtualization::IVirtualizationSystem::Get();
    EVar2 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,param_4);
  }
  this_00 = (param_1->PackageTrailerBuilder).Ptr;
  local_78[0] = (code *)0x0;
  EVar5 = EVar2 | Asset;
  if (this->bSkipVirtualization == false) {
    EVar5 = EVar2;
  }
  local_50 = FMemory::Malloc(0x20,8);
  *local_50 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_50[1] = (code *)this;
  local_50[2] = (code *)CONCAT44(uStack_9c,param_3);
  local_50[3] = (code *)param_4;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,void,FLinkerSave_&,UE::FPackageTrailer_const_&>
                  ::Call;
  }
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
            (&local_90.CompressedData,&param_2->CompressedData);
  FPackageTrailerBuilder::AddPayload
            (this_00,&this->PayloadContentId,&local_90,EVar5,
             (TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar4 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar4 = local_50;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
  return;
}

// SetCompressionOptions @ 141f4d2a0

void __thiscall
UE::Serialization::FEditorBulkData::SetCompressionOptions
          (FEditorBulkData *this,ECompressionOptions param_1)

{
  code *pcVar1;
  bool bVar2;
  EFlags EVar3;
  
  FRecursiveMutex::Lock(&this->Mutex);
  if (param_1 == Default) {
    (this->CompressionSettings).bIsSet = false;
  }
  else {
    if (param_1 != Disabled) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x86d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_141f4d300;
    }
    (this->CompressionSettings).bIsSet = true;
  }
  (this->CompressionSettings).Compressor = NotSet;
  (this->CompressionSettings).CompressionLevel = None;
LAB_141f4d300:
  EVar3 = this->Flags | DisablePayloadCompression;
  if ((this->CompressionSettings).CompressionLevel != None) {
    EVar3 = this->Flags & ~DisablePayloadCompression;
  }
  this->Flags = EVar3;
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// SetCompressionOptions @ 141f4d340

void __thiscall
UE::Serialization::FEditorBulkData::SetCompressionOptions
          (FEditorBulkData *this,ECompressor param_1,ECompressionLevel param_2)

{
  EFlags EVar1;
  
  FRecursiveMutex::Lock(&this->Mutex);
  (this->CompressionSettings).Compressor = param_1;
  (this->CompressionSettings).CompressionLevel = param_2;
  (this->CompressionSettings).bIsSet = true;
  EVar1 = this->Flags | DisablePayloadCompression;
  if (param_2 != None) {
    EVar1 = this->Flags & ~DisablePayloadCompression;
  }
  this->Flags = EVar1;
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// SetVirtualizationOptOut @ 141f4d810

void __thiscall
UE::Serialization::FEditorBulkData::SetVirtualizationOptOut(FEditorBulkData *this,bool param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      AllowVirtualizationOptOut.bEnabled = true;
      FConfigCacheIni::GetBool
                (GConfig,L"Core.System.Experimental",L"AllowVirtualizationOptOut",
                 &AllowVirtualizationOptOut.bEnabled,&GEngineIni);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (AllowVirtualizationOptOut.bEnabled != false) {
    this->bSkipVirtualization = param_1;
  }
  return;
}

// ShouldUseLegacySerialization @ 141f4db70

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall
UE::Serialization::FEditorBulkData::ShouldUseLegacySerialization
          (FEditorBulkData *this,FLinkerSave *param_1)

{
  bool bVar1;
  
  if (param_1 != (FLinkerSave *)0x0) {
    bVar1 = ShouldSaveToPackageSidecar();
    if (!bVar1) {
      return (param_1->PackageTrailerBuilder).Ptr == (FPackageTrailerBuilder *)0x0;
    }
  }
  return true;
}

// TearOff @ 141f4e060

void __thiscall UE::Serialization::FEditorBulkData::TearOff(FEditorBulkData *this)

{
  FRecursiveMutex::Lock(&this->Mutex);
  this->Flags = this->Flags | IsTornOff;
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// TryPayloadValidationForSaving @ 141f4e750

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Serialization::FEditorBulkData::TryPayloadValidationForSaving
          (FEditorBulkData *this,FCompressedBuffer *param_1,FLinkerSave *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FText *this_00;
  FString *pFVar2;
  longlong lVar3;
  ForAnyElementType *local_res20;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FText local_18;
  
  bVar1 = IsDataValid(this,param_1);
  if ((bVar1) && ((this->PayloadSize < 1 || ((param_1->CompressedData).Segments.ArrayNum != 0)))) {
    return true;
  }
  this_00 = GetCorruptedPayloadErrorMsgForSave(this,&local_18,param_2);
  pFVar2 = FText::ToString(this_00);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = (pFVar2->Data).ArrayNum;
  lVar3 = (longlong)local_20;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar3 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_res20 = &local_28;
  `UE::Serialization::FEditorBulkData::TryPayloadValidationForSaving'::__l5::<lambda_1>::operator()
            (&local_res20);
  if ((param_2 == (FLinkerSave *)0x0) || (param_2->LogOutput == (FOutputDevice *)0x0)) {
    if (1 < (byte)LogSerialization._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
  }
  else {
    FOutputDevice::LogfImpl(param_2->LogOutput,Error,L"%s");
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return false;
}

// UnloadData @ 141f4f730

void __thiscall UE::Serialization::FEditorBulkData::UnloadData(FEditorBulkData *this)

{
  bool bVar1;
  
  FRecursiveMutex::Lock(&this->Mutex);
  if ((this->Payload).Owner.Owner != (FBufferOwner *)0x0) {
    if ((this->Flags & IsVirtualized) == None) {
      bVar1 = FPackagePath::IsEmpty(&this->PackagePath);
      if ((bVar1) || ((this->Flags & WasDetached) != None)) goto LAB_141f4f777;
    }
    FSharedBuffer::Reset(&this->Payload);
  }
LAB_141f4f777:
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// Unregister @ 141f4f800

void __thiscall UE::Serialization::FEditorBulkData::Unregister(FEditorBulkData *this)

{
  return;
}

// UpdateKeyIfNeeded @ 141f4f810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Serialization::FEditorBulkData::UpdateKeyIfNeeded(FEditorBulkData *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FCompressedBuffer *pFVar7;
  FIoHash *pFVar8;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [8];
  FSharedBuffer local_60;
  FCompressedBuffer local_58;
  FCompressedBuffer local_40;
  FIoHash local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if ((this->Flags & LegacyKeyWasGuidDerived) != None) {
    if ((this->Flags & IsVirtualized) != None) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataVirtualized() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x8fc,L"Cannot have a virtualized payload if loaded from legacy BulkData")
      ;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = GetDataInternal(this,&local_40);
    FCompressedBuffer::Decompress(pFVar7);
    FCompositeBuffer::~FCompositeBuffer(&local_40.CompressedData);
    if ((this->Flags & LegacyKeyWasGuidDerived) != None) {
      local_68[0] = 0;
      `UE::Serialization::FEditorBulkData::UpdateKeyIfNeeded'::__l17::<lambda_1>::operator()
                (local_68);
      pFVar7 = FCompressedBuffer::Compress(&local_58,&local_60,NotSet,None,0);
      if ((this->Flags & LegacyKeyWasGuidDerived) != None) {
        pFVar8 = FCompressedBuffer::GetRawHash(pFVar7,&local_28);
        uVar5 = *(undefined8 *)(pFVar8->Hash + 8);
        *(undefined8 *)(this->PayloadContentId).Hash = *(undefined8 *)pFVar8->Hash;
        *(undefined8 *)((this->PayloadContentId).Hash + 8) = uVar5;
        *(undefined4 *)((this->PayloadContentId).Hash + 0x10) = *(undefined4 *)(pFVar8->Hash + 0x10)
        ;
        this->Flags = this->Flags & ~LegacyKeyWasGuidDerived;
      }
      FCompositeBuffer::~FCompositeBuffer(&pFVar7->CompressedData);
      if ((this->Flags & LegacyKeyWasGuidDerived) != None) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Flags, EFlags::LegacyKeyWasGuidDerived)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0x907,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar3 = (this->Payload).Owner.Owner;
    if (local_60.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_60.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)((longlong)local_60.Owner.Owner + 0x18) =
             (atomic<unsigned___int64>)
             ((longlong)*(atomic<unsigned___int64> *)((longlong)local_60.Owner.Owner + 0x18) +
             0x40000000);
        UNLOCK();
      }
    }
    (this->Payload).Owner.Owner = (FBufferOwner *)local_60.Owner.Owner;
    if (pFVar3 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
        pFVar3->Data = (void *)0x0;
        pFVar3->Size = 0;
        LOCK();
        paVar1 = &pFVar3->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_60.Owner);
  }
  return;
}

// UpdateKeyIfNeeded @ 141f4f9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::UpdateKeyIfNeeded
          (FEditorBulkData *this,FCompressedBuffer *param_1)

{
  undefined8 uVar1;
  FIoHash *pFVar2;
  undefined1 auStack_48 [32];
  FIoHash local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((this->Flags & LegacyKeyWasGuidDerived) != None) {
    pFVar2 = FCompressedBuffer::GetRawHash(param_1,&local_28);
    uVar1 = *(undefined8 *)(pFVar2->Hash + 8);
    *(undefined8 *)(this->PayloadContentId).Hash = *(undefined8 *)pFVar2->Hash;
    *(undefined8 *)((this->PayloadContentId).Hash + 8) = uVar1;
    *(undefined4 *)((this->PayloadContentId).Hash + 0x10) = *(undefined4 *)(pFVar2->Hash + 0x10);
    this->Flags = this->Flags & ~LegacyKeyWasGuidDerived;
  }
  FCompositeBuffer::~FCompositeBuffer(&param_1->CompressedData);
  return;
}

// UpdatePayload @ 141f4fa50

void __thiscall
UE::Serialization::FEditorBulkData::UpdatePayload
          (FEditorBulkData *this,FSharedBufferWithID *param_1,UObject *param_2)

{
  UpdatePayloadImpl(this,&param_1->Payload,&param_1->PayloadId,param_2);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1);
  return;
}

// UpdatePayload @ 141f4fa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Serialization::FEditorBulkData::UpdatePayload
          (FEditorBulkData *this,FCompressedBuffer *param_1,UObject *param_2)

{
  ulong64 uVar1;
  FIoHash *pFVar2;
  FCompositeBuffer *this_00;
  bool bVar3;
  undefined1 auStack_88 [32];
  FSharedBuffer local_68;
  FIoHash local_60;
  FIoHash local_4c;
  FCompositeBuffer local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2125,"FEditorBulkData::UpdatePayload(FCompressedBuffer)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x84d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2125);
  }
  uVar1 = FCompressedBuffer::GetRawSize(param_1);
  if (uVar1 == 0) {
    local_60.Hash[0x10] = '\0';
    local_60.Hash[0x11] = '\0';
    local_60.Hash[0x12] = '\0';
    local_60.Hash[0x13] = '\0';
    pFVar2 = &local_60;
    local_60.Hash[0] = '\0';
    local_60.Hash[1] = '\0';
    local_60.Hash[2] = '\0';
    local_60.Hash[3] = '\0';
    local_60.Hash[4] = '\0';
    local_60.Hash[5] = '\0';
    local_60.Hash[6] = '\0';
    local_60.Hash[7] = '\0';
    local_60.Hash[8] = '\0';
    local_60.Hash[9] = '\0';
    local_60.Hash[10] = '\0';
    local_60.Hash[0xb] = '\0';
    local_60.Hash[0xc] = '\0';
    local_60.Hash[0xd] = '\0';
    local_60.Hash[0xe] = '\0';
    local_60.Hash[0xf] = '\0';
  }
  else {
    pFVar2 = FCompressedBuffer::GetRawHash(param_1,(FIoHash *)&local_38);
  }
  local_4c.Hash._0_8_ = *(undefined8 *)pFVar2->Hash;
  local_4c.Hash._8_8_ = *(undefined8 *)(pFVar2->Hash + 8);
  local_4c.Hash._16_4_ = *(undefined4 *)(pFVar2->Hash + 0x10);
  this_00 = FCompressedBuffer::DecompressToComposite(param_1,&local_38);
  FCompositeBuffer::ToShared(this_00);
  FCompositeBuffer::~FCompositeBuffer(&local_38);
  UpdatePayloadImpl(this,&local_68,&local_4c,param_2);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_68.Owner);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCompositeBuffer::~FCompositeBuffer(&param_1->CompressedData);
  return;
}

// UpdatePayload @ 141f4fba0

void __thiscall
UE::Serialization::FEditorBulkData::UpdatePayload
          (FEditorBulkData *this,FSharedBuffer param_1,UObject *param_2)

{
  FIoHash local_28;
  
  if (CpuChannel->Enabled < 0) {
    HashPayload(&local_28,(FSharedBuffer *)param_1.Owner.Owner);
    UpdatePayloadImpl(this,(FSharedBuffer *)param_1.Owner.Owner,&local_28,param_2);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2117,"FEditorBulkData::UpdatePayload (FSharedBuffer)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x845);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2117);
    HashPayload(&local_28,(FSharedBuffer *)param_1.Owner.Owner);
    UpdatePayloadImpl(this,(FSharedBuffer *)param_1.Owner.Owner,&local_28,param_2);
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1.Owner.Owner);
  return;
}

// UpdatePayloadId @ 141f4fc60

void __thiscall UE::Serialization::FEditorBulkData::UpdatePayloadId(FEditorBulkData *this)

{
  FRecursiveMutex::Lock(&this->Mutex);
  UpdateKeyIfNeeded(this);
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// UpdatePayloadImpl @ 141f4fca0

void __thiscall
UE::Serialization::FEditorBulkData::UpdatePayloadImpl
          (FEditorBulkData *this,FSharedBuffer *param_1,FIoHash *param_2,UObject *param_3)

{
  FArchive *pFVar1;
  FBufferOwner *pFVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FSharedBuffer FVar7;
  FGuid *pFVar8;
  ulong64 uVar9;
  bool bVar10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  FGuid local_48;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1966,"FEditorBulkData::UpdatePayloadImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
               ,0x7ae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1966);
  }
  FRecursiveMutex::Lock(&this->Mutex);
  pFVar1 = this->AttachedAr;
  uVar9 = 0;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,this,0);
    this->AttachedAr = (FArchive *)0x0;
  }
  pFVar2 = (param_1->Owner).Owner;
  if (pFVar2 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    if (pFVar2->Size != 0) {
      FVar7 = FSharedBuffer::MakeOwned(param_1);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                (&(this->Payload).Owner,
                 (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar7.Owner.Owner);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
      goto LAB_141f4fd9e;
    }
  }
  FSharedBuffer::Reset(&this->Payload);
LAB_141f4fd9e:
  pFVar2 = (this->Payload).Owner.Owner;
  if (pFVar2 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    uVar9 = pFVar2->Size;
  }
  this->PayloadSize = uVar9;
  uVar3 = *(undefined8 *)(param_2->Hash + 8);
  *(undefined8 *)(this->PayloadContentId).Hash = *(undefined8 *)param_2->Hash;
  *(undefined8 *)((this->PayloadContentId).Hash + 8) = uVar3;
  *(undefined4 *)((this->PayloadContentId).Hash + 0x10) = *(undefined4 *)(param_2->Hash + 0x10);
  this->Flags = this->Flags &
                ~(ReferencesWorkspaceDomain|LegacyKeyWasGuidDerived|LegacyFileIsCompressed|
                  ReferencesLegacyFile|IsVirtualized);
  FPackagePath::Empty(&this->PackagePath);
  this->OffsetInFile = -1;
  if ((0 < this->PayloadSize) &&
     ((((this->BulkDataId).D == 0 && (this->BulkDataId).C == 0) && (this->BulkDataId).B == 0) &&
      (this->BulkDataId).A == 0)) {
    pFVar8 = FGuid::NewGuid(&local_48);
    uVar4 = pFVar8->B;
    uVar5 = pFVar8->C;
    uVar6 = pFVar8->D;
    (this->BulkDataId).A = pFVar8->A;
    (this->BulkDataId).B = uVar4;
    (this->BulkDataId).C = uVar5;
    (this->BulkDataId).D = uVar6;
  }
  FRecursiveMutex::Unlock(&this->Mutex);
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// UpdateRegistrationData @ 141f50010

void __thiscall
UE::Serialization::FEditorBulkData::UpdateRegistrationData
          (FEditorBulkData *this,UObject *param_1,wchar_t *param_2,bool param_3)

{
  return;
}

// UpdateRegistrationOwner @ 141f50020

void __thiscall
UE::Serialization::FEditorBulkData::UpdateRegistrationOwner(FEditorBulkData *this,UObject *param_1)

{
  FRecursiveMutex::Lock(&this->Mutex);
  FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// ValidatePackageTrailerBuilder @ 141f50200

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl
UE::Serialization::FEditorBulkData::ValidatePackageTrailerBuilder
          (FLinkerSave *param_1,FIoHash *param_2,EFlags param_3)

{
  FPackageTrailerBuilder *this;
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (((param_3 >> 9 & 1) != 0) && (puVar3 = param_2->Hash, param_2 != param_2 + 1)) {
    while (*(int *)((FIoHash *)puVar3)->Hash == 0) {
      puVar3 = ((FIoHash *)puVar3)->Hash + 4;
      if ((FIoHash *)puVar3 == param_2 + 1) {
        return;
      }
    }
    if ((param_1 == (FLinkerSave *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LinkerSave != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0x9da,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_1->PackageTrailerBuilder).Ptr == (FPackageTrailerBuilder *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LinkerSave->PackageTrailerBuilder.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0x9db,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((param_3 & IsVirtualized) != None) &&
        ((param_3 & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) != None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(IsDataVirtualized(PayloadFlags) && IsReferencingByPackagePath(PayloadFlags))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0x9dc,L"Payload cannot be both virtualized and a reference"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this = (param_1->PackageTrailerBuilder).Ptr;
    if ((param_3 & (ReferencesWorkspaceDomain|ReferencesLegacyFile)) == None) {
      if ((param_3 & IsVirtualized) == None) {
        bVar2 = FPackageTrailerBuilder::IsLocalPayloadEntry(this,param_2);
        if ((!bVar2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("LinkerSave->PackageTrailerBuilder->IsLocalPayloadEntry(Id)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                               ,0x9e8,L""), bVar2)) goto code_r0x000141f5039c;
      }
      else {
        bVar2 = FPackageTrailerBuilder::IsVirtualizedPayloadEntry(this,param_2);
        if ((!bVar2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("LinkerSave->PackageTrailerBuilder->IsVirtualizedPayloadEntry(Id)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                               ,0x9e4,L""), bVar2)) {
code_r0x000141f5039c:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      bVar2 = FPackageTrailerBuilder::IsReferencedPayloadEntry(this,param_2);
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("LinkerSave->PackageTrailerBuilder->IsReferencedPayloadEntry(Id)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                             ,0x9e0,L""), bVar2)) goto code_r0x000141f5039c;
    }
  }
  return;
}

// operator() @ 1504830f0

bool __thiscall
`UE::Serialization::FEditorBulkData::TryPayloadValidationForSaving'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8129764498757121625>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8129764498757121625>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150483150

bool __thiscall
`UE::Serialization::FEditorBulkData::UpdateKeyIfNeeded'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8129764498757121788>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8129764498757121788>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

