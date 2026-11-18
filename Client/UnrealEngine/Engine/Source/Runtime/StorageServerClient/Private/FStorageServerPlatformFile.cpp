// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 48

// FStorageServerPlatformFile @ 148cb4bc0

FStorageServerPlatformFile * __thiscall
FStorageServerPlatformFile::FStorageServerPlatformFile(FStorageServerPlatformFile *this)

{
  bool bVar1;
  undefined4 uStack_c;
  
  IPlatformFile::IPlatformFile((IPlatformFile *)this);
  this->_padding_ = (longlong)&___7FStorageServerPlatformFile__6B_;
  (this->CustomProjectStorePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomProjectStorePath).Data.ArrayNum = 0;
  (this->CustomProjectStorePath).Data.ArrayMax = 0;
  *(undefined8 *)&(this->ExcludedNonServerExtensions).Elements = 0;
  *(undefined8 *)&(this->ExcludedNonServerExtensions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludedNonServerExtensions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExcludedNonServerExtensions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludedNonServerExtensions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludedNonServerExtensions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludedNonServerExtensions).Elements.field_0x34 = 0;
  (this->ExcludedNonServerExtensions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludedNonServerExtensions).HashSize = 0;
  *(undefined8 *)&(this->AssumedImmutableTimeStampExtensions).Elements = 0;
  *(undefined8 *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x34 = 0;
  (this->AssumedImmutableTimeStampExtensions).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->AssumedImmutableTimeStampExtensions).HashSize = 0;
  *(undefined8 *)&(this->EngineStartupPrecacheExtensions).Elements = 0;
  *(undefined8 *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x34 = 0;
  (this->EngineStartupPrecacheExtensions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EngineStartupPrecacheExtensions).HashSize = 0;
  (this->ServerEngineDirView).DataPtr = L"/{engine}/";
  this->LowerLevel = (IPlatformFile *)0x0;
  (this->ServerEngineDirView).Size = 10;
  (this->ServerProjectDirView).DataPtr = L"/{project}/";
  (this->ServerProjectDirView).Size = 0xb;
  (this->Connection).Ptr = (FStorageServerConnection *)0x0;
  (this->CookOnTheFlyServerConnection).Object = (ICookOnTheFlyServerConnection *)0x0;
  (this->CookOnTheFlyServerConnection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ServerToc).Root.Directories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerToc).Root.Directories.ArrayNum = 0;
  (this->ServerToc).Root.Directories.ArrayMax = 0;
  (this->ServerToc).Root.Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerToc).Root.Files.ArrayNum = 0;
  (this->ServerToc).Root.Files.ArrayMax = 0;
  *(undefined8 *)&(this->ServerToc).Directories = 0;
  *(undefined8 *)&(this->ServerToc).Directories.field_0x8 = 0;
  *(undefined8 *)&(this->ServerToc).Directories.field_0x20 = 0;
  *(undefined4 *)&(this->ServerToc).Directories.field_0x28 = 0;
  *(undefined4 *)&(this->ServerToc).Directories.field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerToc).Directories.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ServerToc).Directories.field_0x34 = 0;
  *(undefined8 *)&(this->ServerToc).Directories.field_0x40 = 0;
  *(undefined4 *)&(this->ServerToc).Directories.field_0x48 = 0;
  *(undefined8 *)&(this->ServerToc).FilePathToIndexMap = 0;
  *(undefined8 *)&(this->ServerToc).FilePathToIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->ServerToc).FilePathToIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->ServerToc).FilePathToIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->ServerToc).FilePathToIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerToc).FilePathToIndexMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ServerToc).FilePathToIndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->ServerToc).FilePathToIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->ServerToc).FilePathToIndexMap.field_0x48 = 0;
  (this->ServerToc).Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerToc).Files.ArrayNum = 0;
  (this->ServerToc).Files.ArrayMax = 0;
  (this->ServerToc).TocLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->ServerProject).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerProject).Data.ArrayNum = 0;
  (this->ServerProject).Data.ArrayMax = 0;
  (this->ServerPlatform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerPlatform).Data.ArrayNum = 0;
  (this->ServerPlatform).Data.ArrayMax = 0;
  (this->BaseURI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseURI).Data.ArrayNum = 0;
  (this->BaseURI).Data.ArrayMax = 0;
  (this->AbsProjectDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbsProjectDir).Data.ArrayNum = 0;
  (this->AbsProjectDir).Data.ArrayMax = 0;
  (this->AbsEngineDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbsEngineDir).Data.ArrayNum = 0;
  (this->AbsEngineDir).Data.ArrayMax = 0;
  (this->WorkspaceSharePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkspaceSharePath).Data.ArrayNum = 0;
  (this->WorkspaceSharePath).Data.ArrayMax = 0;
  (this->RemapDirectoriesTree).Root.RelPaths.Ptr = (FString *)0x0;
  (this->RemapDirectoriesTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->RemapDirectoriesTree).Root.NumChildNodesAndFlags = 0;
  (this->RemapDirectoriesTree).Root.CapacityChildNodes = 0;
  (this->RemapDirectoriesTree).NumPaths = 0;
  (this->RemapDirectoriesTree).PathSeparator = L'/';
  (this->RemapDirectoriesTree).bPathSeparatorInitialized = false;
  (this->RemapDirectoriesTree).bNeedDriveWithoutPathFixup = false;
  (this->HostAddrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HostAddrs).ArrayNum = 0;
  (this->HostAddrs).ArrayMax = 0;
  this->HostPort = 0x216e;
  this->bAllowPackageIo = true;
  this->bAbortOnConnectionFailure = true;
  bVar1 = UE::IsUsingZenPakFileStreaming();
  if (bVar1) {
    (this->ServerEngineDirView).DataPtr = L"Engine/";
    *(ulonglong *)&(this->ServerEngineDirView).Size = CONCAT44(uStack_c,7);
    (this->ServerProjectDirView).DataPtr = L"ProjectDS/";
    *(ulonglong *)&(this->ServerProjectDirView).Size = CONCAT44(uStack_c,10);
  }
  return this;
}

// ~FStorageServerPlatformFile @ 148cb68f0

void __thiscall
FStorageServerPlatformFile::~FStorageServerPlatformFile(FStorageServerPlatformFile *this)

{
  FScriptContainerElement *pFVar1;
  FStorageServerConnection *pFVar2;
  ICacheStrategy *pIVar3;
  IStorageServerHttpClient *pIVar4;
  ForElementType<FSetElementId> FVar5;
  
  this->_padding_ = (longlong)&___7FStorageServerPlatformFile__6B_;
  DestructItems<FString,int>
            ((FString *)(this->HostAddrs).AllocatorInstance.Data,(this->HostAddrs).ArrayNum);
  pFVar1 = (this->HostAddrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDirectoryTree<FString>::FTreeNode::~FTreeNode(&(this->RemapDirectoriesTree).Root);
  pFVar1 = (this->WorkspaceSharePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsEngineDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsProjectDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseURI).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerPlatform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerProject).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStorageServerFileSystemTOC::~FStorageServerFileSystemTOC(&this->ServerToc);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CookOnTheFlyServerConnection).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Connection).Ptr;
  if (pFVar2 != (FStorageServerConnection *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar2->AsyncQueryLatestServerChunkInfo).SharedReferenceCount.ReferenceController);
    pFVar1 = (pFVar2->CurrentHostAddr).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar2->BaseURI).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar3 = (pFVar2->CacheStrategy).Ptr;
    if (pIVar3 != (ICacheStrategy *)0x0) {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
    pIVar4 = (pFVar2->HttpClient).Ptr;
    if (pIVar4 != (IStorageServerHttpClient *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(pFVar2,0x68);
  }
  (this->EngineStartupPrecacheExtensions).HashSize = 0;
  FVar5 = (this->EngineStartupPrecacheExtensions).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EngineStartupPrecacheExtensions).Elements);
  (this->AssumedImmutableTimeStampExtensions).HashSize = 0;
  FVar5 = (this->AssumedImmutableTimeStampExtensions).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AssumedImmutableTimeStampExtensions).Elements);
  (this->ExcludedNonServerExtensions).HashSize = 0;
  FVar5 = (this->ExcludedNonServerExtensions).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedNonServerExtensions).Elements);
  pFVar1 = (this->CustomProjectStorePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  return;
}

// operator() @ 148cb8540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FStorageServerPlatformFile::SendGetFileListMessage'::__l2::<lambda_1>::operator()
          (void *this,FIoChunkId *param_1,TStringView<wchar_t> *param_2,long64 param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  FName FVar4;
  code *pcVar5;
  TUniquePtr<FStorageServerEngineStartupPrecache,TDefaultDelete<FStorageServerEngineStartupPrecache>_>
  TVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TDirectoryTree<FString> *pTVar12;
  void *pvVar13;
  TStringView<wchar_t> *pTVar14;
  FName *pFVar15;
  int iVar16;
  ulong64 uVar17;
  TSpscQueue<TTuple<FIoChunkId,int>,FMemory> *this_00;
  longlong lVar18;
  TTuple<FIoChunkId,int> *pTVar19;
  TDirectoryTree<FString> *this_01;
  int iVar20;
  undefined1 auStack_1198 [32];
  int local_1178;
  int local_1170;
  short local_1168;
  FString local_1160;
  wchar_t *local_1150;
  TStringView<wchar_t> local_1148;
  TTuple<FIoChunkId,int> local_1138;
  TTuple<FIoChunkId,int> local_1128;
  FName local_1118 [2];
  TStringView<wchar_t> local_1108;
  TStringView<wchar_t> local_10f8;
  TStringView<wchar_t> local_10e8;
  TStringView<wchar_t> local_10d8;
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [16];
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1198;
  local_1088.Base = local_1068;
  lVar1 = *(longlong *)this;
  this_01 = (TDirectoryTree<FString> *)(lVar1 + 0x280);
  local_1088.CurPos = local_1068;
  local_1088.End = (wchar_t *)&local_868;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_1160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1160.Data.ArrayNum = 0;
  local_1160.Data.ArrayMax = 0;
  local_1088.bIsDynamic = false;
  local_1088.bIsExternal = false;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_1150 = this;
  ::FString::Reset(&local_1160,0);
  local_1148.DataPtr = param_2->DataPtr;
  local_1148.Size = param_2->Size;
  local_1148._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_868.CurPos = local_868.Base;
  iVar11 = 0;
  iVar20 = 0;
  if (param_2->Size == 0) {
LAB_148cb86b5:
    if ((-1 < *(int *)(lVar1 + 0x2a0)) || (this_01 == (TDirectoryTree<FString> *)0x0)) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      goto LAB_148cb8855;
    }
  }
  else {
    local_10c8.Base = local_10a8;
    local_10c8.bIsDynamic = false;
    local_10c8.bIsExternal = false;
    local_10c8.CurPos = local_10a8;
    local_10c8.End = (wchar_t *)&local_1088;
    TDirectoryTree<FString>::NormalizePathForReading(this_01,&local_1148,&local_10c8);
    local_1108.DataPtr = local_1148.DataPtr;
    local_1108.Size = local_1148.Size;
    local_1108._12_4_ = local_1148._12_4_;
    pTVar12 = (TDirectoryTree<FString> *)
              TDirectoryTree<FString>::FTreeNode::TryFindClosestPath
                        ((FTreeNode *)this_01,&local_1108,&local_868,*(wchar_t *)(lVar1 + 0x2ac));
    if (pTVar12 == (TDirectoryTree<FString> *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
      goto LAB_148cb86b5;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
    this_01 = pTVar12;
  }
  ::FString::AppendChars
            (&local_1160,local_868.Base,
             (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  iVar10 = local_1160.Data.ArrayNum + -2;
  if (local_1160.Data.ArrayNum == 0) {
    iVar10 = -1;
  }
  if (iVar10 < 0) {
LAB_148cb8715:
    local_1170 = local_1160.Data.ArrayNum + -1;
    if (local_1160.Data.ArrayNum == 0) {
      local_1170 = iVar20;
    }
    local_1178 = iVar10;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar8 = local_1160.Data.ArrayNum + -1;
    if (local_1160.Data.ArrayNum == 0) {
      iVar8 = iVar11;
    }
    if (iVar8 <= iVar10) goto LAB_148cb8715;
  }
  pFVar2 = *(FScriptContainerElement **)(this_01->Root).Value.Pad;
  local_1168 = *(short *)(local_1160.Data.AllocatorInstance.Data + (longlong)iVar10 * 2);
  iVar10 = *(int *)((longlong)(this_01->Root).Value.Pad + 8);
  iVar8 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar8 = iVar20;
  }
  uVar17 = (ulong64)iVar8;
  iVar10 = local_1160.Data.ArrayNum;
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar17)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar17);
    iVar10 = local_1160.Data.ArrayNum;
  }
  if (iVar8 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy(local_1088.CurPos,pFVar2,uVar17 * 2);
    local_1088.CurPos = (wchar_t *)((longlong)pvVar13 + uVar17 * 2);
    iVar10 = local_1160.Data.ArrayNum;
  }
  iVar8 = param_2->Size;
  iVar16 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar16 = iVar11;
  }
  iVar16 = (iVar8 - iVar16) - (uint)(local_1168 != 0x2f);
  iVar10 = iVar8;
  if (iVar16 < iVar8) {
    iVar10 = iVar16;
  }
  if (0 < iVar10) {
    iVar11 = iVar10;
  }
  pwVar3 = param_2->DataPtr;
  uVar17 = (ulong64)iVar11;
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + uVar17)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,uVar17);
  }
  if (iVar11 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy
                        (local_1088.CurPos,pwVar3 + ((longlong)iVar8 - uVar17),uVar17 * 2);
    local_1088.CurPos = (wchar_t *)((longlong)pvVar13 + uVar17 * 2);
  }
  iVar11 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
  local_1148.Size = iVar11;
  local_1148.DataPtr = local_1088.Base;
  param_2->DataPtr = local_1088.Base;
  param_2->Size = iVar11;
  *(undefined4 *)&param_2->field_0xc = local_1148._12_4_;
  this = local_1150;
LAB_148cb8855:
  local_10f8.DataPtr = param_2->DataPtr;
  local_10f8.Size = param_2->Size;
  local_10f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FStorageServerFileSystemTOC::AddFile
            ((FStorageServerFileSystemTOC *)(*(longlong *)this + 0x148),param_1,&local_10f8,param_3)
  ;
  if (param_3 - 1U < 0x3fff) {
    local_10e8.DataPtr = param_2->DataPtr;
    local_10e8.Size = param_2->Size;
    local_10e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    lVar1 = *(longlong *)this;
    pTVar14 = FPathViews::GetExtension(&local_10d8,&local_10e8,false);
    pFVar15 = ::FName::FName(local_1118,(int)*(undefined8 *)&pTVar14->Size,pTVar14->DataPtr,
                             FNAME_Add);
    FVar4 = *pFVar15;
    uVar9 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    if (*(int *)(lVar1 + 0xc0) != *(int *)(lVar1 + 0xec)) {
      lVar18 = *(longlong *)(lVar1 + 0xf8);
      if (*(longlong *)(lVar1 + 0xf8) == 0) {
        lVar18 = lVar1 + 0xf0;
      }
      iVar11 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar1 + 0x100) - 1U & FVar4.Number + uVar9) *
                                 4);
      if (iVar11 != -1) {
        do {
          if (*(FName *)(*(longlong *)(lVar1 + 0xb8) + (longlong)iVar11 * 0x10) == FVar4) {
            iVar11 = param_2->Size;
            iVar10 = iVar11;
            if (9 < iVar11) {
              iVar10 = 9;
            }
            iVar8 = iVar20;
            if (0 < iVar10) {
              iVar8 = iVar10;
            }
            local_1150 = param_2->DataPtr;
            if ((iVar8 == 9) &&
               (iVar10 = FGenericPlatformStricmp::Strnicmp
                                   (L".uproject",local_1150 + ((longlong)iVar11 - (longlong)iVar8),9
                                   ), iVar10 == 0)) {
LAB_148cb89ba:
              pTVar19 = &local_1138;
              local_1138._0_1_ = param_1->Id[0];
              local_1138._1_1_ = param_1->Id[1];
              local_1138._2_1_ = param_1->Id[2];
              local_1138._3_1_ = param_1->Id[3];
              local_1138._4_1_ = param_1->Id[4];
              local_1138._5_1_ = param_1->Id[5];
              local_1138._6_1_ = param_1->Id[6];
              local_1138._7_1_ = param_1->Id[7];
              local_1138._8_1_ = param_1->Id[8];
              local_1138._9_1_ = param_1->Id[9];
              local_1138._10_1_ = param_1->Id[10];
              local_1138._11_1_ = param_1->Id[0xb];
              this_00 = &(GStorageServerEngineStartupPrecache.Ptr)->HighPriorityPrecacheFileRequests
              ;
              local_1138._12_4_ = (int)param_3;
            }
            else {
              iVar10 = iVar11;
              if (0x1a < iVar11) {
                iVar10 = 0x1a;
              }
              if (0 < iVar10) {
                iVar20 = iVar10;
              }
              if ((iVar20 == 0x1a) &&
                 (iVar11 = FGenericPlatformStricmp::Strnicmp
                                     (L"DataDrivenPlatformInfo.ini",
                                      local_1150 + ((longlong)iVar11 - (longlong)iVar20),0x1a),
                 iVar11 == 0)) goto LAB_148cb89ba;
              pTVar19 = &local_1128;
              local_1128._0_1_ = param_1->Id[0];
              local_1128._1_1_ = param_1->Id[1];
              local_1128._2_1_ = param_1->Id[2];
              local_1128._3_1_ = param_1->Id[3];
              local_1128._4_1_ = param_1->Id[4];
              local_1128._5_1_ = param_1->Id[5];
              local_1128._6_1_ = param_1->Id[6];
              local_1128._7_1_ = param_1->Id[7];
              local_1128._8_1_ = param_1->Id[8];
              local_1128._9_1_ = param_1->Id[9];
              local_1128._10_1_ = param_1->Id[10];
              local_1128._11_1_ = param_1->Id[0xb];
              this_00 = &(GStorageServerEngineStartupPrecache.Ptr)->PrecacheFileRequests;
              local_1128._12_4_ = (int)param_3;
            }
            TVar6.Ptr = GStorageServerEngineStartupPrecache.Ptr;
            TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::Enqueue<TTuple<FIoChunkId,int>_>
                      (this_00,pTVar19);
            (**(code **)((TVar6.Ptr)->HasWork->_padding_ + 0x10))();
            break;
          }
          iVar11 = *(int *)(*(longlong *)(lVar1 + 0xb8) + 8 + (longlong)iVar11 * 0x10);
        } while (iVar11 != -1);
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
  if (local_1160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1160.Data.AllocatorInstance.Data);
  }
  return;
}

// ConvertToAbsolutePathForExternalAppForRead @ 148cbf540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FStorageServerPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (FStorageServerPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  char cVar3;
  FString *pFVar4;
  size_t sVar5;
  void *pvVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *pwVar11;
  undefined1 auStack_8a8 [32];
  FStorageServerPlatformFile *local_888;
  FString local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.Base = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  pwVar9 = param_1;
  local_888 = this;
  local_868.CurPos = local_848;
  if (CookedDir == (FString *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FStorageServerPlatformFile::ConvertToAbsolutePathForExternalAppForRead'::__l5::
             _dynamic_atexit_destructor_for__Inner__);
      _Init_thread_footer(&::_TSS0);
    }
    CookedDir = &Inner;
    pFVar4 = FPaths::ProjectDir(&local_878);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
LAB_148cbf611:
      sVar5 = wcslen(pwVar8);
      iVar10 = (int)sVar5;
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      iVar10 = 0;
      if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_148cbf611;
    }
    uVar7 = (ulong64)iVar10;
    if (local_868.End < local_868.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
    }
    if (iVar10 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_868.CurPos,pwVar8,uVar7 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
    }
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
    if (local_868.End < local_868.CurPos + 0xd) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0xd);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Saved/Cooked/",0x1a);
    local_868.CurPos = (wchar_t *)((longlong)pvVar6 + 0x1a);
    if (local_868.End < (wchar_t *)((longlong)pvVar6 + 0x28)) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,7);
    }
    local_868.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_868.CurPos,7,"Windows",7)
    ;
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_868.CurPos,&u__,2);
    local_868.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
    if (local_868.End < (wchar_t *)((longlong)pvVar6 + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::operator=(&Inner,local_868.Base);
    pwVar11 = local_868.CurPos;
  }
  else {
    if ((CookedDir->Data).ArrayNum == 0) {
      pwVar8 = L"";
LAB_148cbf779:
      sVar5 = wcslen(pwVar8);
      iVar10 = (int)sVar5;
    }
    else {
      pwVar8 = (wchar_t *)(CookedDir->Data).AllocatorInstance.Data;
      iVar10 = 0;
      if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_148cbf779;
    }
    uVar7 = (ulong64)iVar10;
    pwVar11 = local_848;
    if (local_48 < local_848 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
      pwVar11 = local_868.CurPos;
    }
    this = local_888;
    if (iVar10 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pwVar11,pwVar8,uVar7 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
      this = local_888;
      pwVar11 = local_868.CurPos;
    }
  }
  for (; (*pwVar9 == L'.' || (*pwVar9 == L'/')); pwVar9 = pwVar9 + 1) {
  }
  if (((longlong)pwVar9 - (longlong)param_1 & 0xfffffffffffffffeU) == 0x12) {
    sVar5 = wcslen(pwVar9);
    uVar7 = (ulong64)(int)sVar5;
    if (local_868.End < pwVar11 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
      pwVar11 = local_868.CurPos;
    }
    if ((int)sVar5 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pwVar11,pwVar9,uVar7 * 2);
      pwVar11 = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
      local_868.CurPos = pwVar11;
    }
    this = local_888;
    pIVar1 = local_888->LowerLevel;
    if (pIVar1 != (IPlatformFile *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x78);
      if (local_868.End < pwVar11 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        pwVar11 = local_868.CurPos;
      }
      *pwVar11 = L'\0';
      cVar3 = (*pcVar2)(pIVar1,local_868.Base);
      if (cVar3 != '\0') {
        ::FString::ConstructFromPtrSize
                  (__return_storage_ptr__,local_868.Base,
                   (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
        goto LAB_148cbf8c9;
      }
    }
  }
  if (this->LowerLevel == (IPlatformFile *)0x0) {
    IPlatformFile::ConvertToAbsolutePathForExternalAppForRead
              ((IPlatformFile *)this,__return_storage_ptr__,param_1);
  }
  else {
    (**(code **)((longlong)*this->LowerLevel + 0x218))();
  }
LAB_148cbf8c9:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 148cbf940

FString * __thiscall
FStorageServerPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (FStorageServerPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    (**(code **)((longlong)*this->LowerLevel + 0x220))();
    return __return_storage_ptr__;
  }
  IPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
            ((IPlatformFile *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateDirectory @ 148cc0120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::CreateDirectory(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_888 [32];
  FString local_868;
  undefined4 local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  bVar7 = false;
  local_848.End = (wchar_t *)local_28;
  local_858 = 0;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  bVar3 = MakeStorageServerPath(this,param_1,&local_848);
  if (bVar3) {
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\0';
    ::FString::FString(&local_868,local_848.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar6 = local_868.Data.ArrayNum + -1;
    FVar2.Data = local_868.Data.AllocatorInstance.Data;
    if (local_868.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).Directories,uVar5,&local_868);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar7 = true;
    if (iVar6 != -1) {
      bVar3 = true;
      goto LAB_148cc022a;
    }
  }
  bVar3 = false;
LAB_148cc022a:
  if ((bVar7) && (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if ((bVar3) ||
     ((pIVar1 = this->LowerLevel, pIVar1 != (IPlatformFile *)0x0 &&
      (cVar4 = (**(code **)((longlong)*pIVar1 + 0x120))(pIVar1,param_1), cVar4 != '\0')))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return bVar3;
}

// DeleteDirectory @ 148cc1100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::DeleteDirectory(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_888 [32];
  FString local_868;
  undefined4 local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  bVar7 = false;
  local_848.End = (wchar_t *)local_28;
  local_858 = 0;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  bVar3 = MakeStorageServerPath(this,param_1,&local_848);
  if (bVar3) {
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\0';
    ::FString::FString(&local_868,local_848.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar6 = local_868.Data.ArrayNum + -1;
    FVar2.Data = local_868.Data.AllocatorInstance.Data;
    if (local_868.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).Directories,uVar5,&local_868);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar7 = true;
    if (iVar6 != -1) {
      bVar3 = true;
      goto LAB_148cc120a;
    }
  }
  bVar3 = false;
LAB_148cc120a:
  if ((bVar7) && (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if (((bVar3) || (pIVar1 = this->LowerLevel, pIVar1 == (IPlatformFile *)0x0)) ||
     (cVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,param_1), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return bVar3;
}

// DeleteFile @ 148cc1280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::DeleteFile(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_888 [32];
  FString local_868;
  undefined4 local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  bVar7 = false;
  local_858 = 0;
  if (((GPreferLocalForNonAssets) && (this->LowerLevel != (IPlatformFile *)0x0)) &&
     (cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x88))(), cVar3 != '\0')) {
    return true;
  }
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  local_848.End = (wchar_t *)local_28;
  bVar4 = MakeStorageServerPath(this,param_1,&local_848);
  if (bVar4) {
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\0';
    ::FString::FString(&local_868,local_848.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar6 = local_868.Data.ArrayNum + -1;
    FVar2.Data = local_868.Data.AllocatorInstance.Data;
    if (local_868.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar5,&local_868);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar7 = true;
    if (iVar6 != -1) {
      bVar4 = true;
      goto LAB_148cc13bf;
    }
  }
  bVar4 = false;
LAB_148cc13bf:
  if ((bVar7) && (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if (((bVar4) || (pIVar1 = this->LowerLevel, pIVar1 == (IPlatformFile *)0x0)) ||
     (cVar3 = (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1,param_1), cVar3 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return bVar7;
}

// DirectoryExists @ 148cc1b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::DirectoryExists(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_888 [32];
  FString local_868;
  undefined4 local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  bVar7 = false;
  local_848.End = (wchar_t *)local_28;
  local_858 = 0;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  bVar3 = MakeStorageServerPath(this,param_1,&local_848);
  if (bVar3) {
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\0';
    ::FString::FString(&local_868,local_848.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar6 = local_868.Data.ArrayNum + -1;
    FVar2.Data = local_868.Data.AllocatorInstance.Data;
    if (local_868.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).Directories,uVar5,&local_868);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar7 = true;
    if (iVar6 != -1) {
      bVar3 = true;
      goto LAB_148cc1c0a;
    }
  }
  bVar3 = false;
LAB_148cc1c0a:
  if ((bVar7) && (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if ((bVar3) ||
     ((pIVar1 = this->LowerLevel, pIVar1 != (IPlatformFile *)0x0 &&
      (cVar4 = (**(code **)((longlong)*pIVar1 + 0x118))(pIVar1,param_1), cVar4 != '\0')))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return bVar3;
}

// FileExists @ 148cc2e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::FileExists(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  bool bVar7;
  int iVar8;
  undefined1 auStack_898 [32];
  TStringView<wchar_t> local_878;
  undefined4 local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  bVar7 = false;
  local_858.Base = local_838;
  iVar8 = 0;
  local_868 = 0;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = (wchar_t *)local_38;
  bVar2 = MakeStorageServerPath(this,param_1,&local_858);
  if (bVar2) {
    bVar7 = true;
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString((FString *)&local_878,local_858.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar5 = local_878.Size + -1;
    pwVar1 = local_878.DataPtr;
    if (local_878.Size == 0) {
      iVar5 = iVar8;
      pwVar1 = L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar1);
    iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar4,(FString *)&local_878);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (iVar5 == -1) goto LAB_148cc2f0f;
    bVar2 = true;
  }
  else {
LAB_148cc2f0f:
    bVar2 = false;
  }
  if ((bVar7) && (local_878.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_878.DataPtr);
  }
  if (bVar2) {
    uVar3 = 1;
  }
  else {
    if (this->LowerLevel != (IPlatformFile *)0x0) {
      local_878.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar6 = wcslen(param_1);
        iVar8 = (int)sVar6;
      }
      local_878.Size = iVar8;
      bVar2 = IsNonServerFilenameAllowed(this,&local_878);
      if (bVar2) {
        uVar3 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,param_1);
        goto LAB_148cc2f8c;
      }
    }
    uVar3 = 0;
  }
LAB_148cc2f8c:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return (bool)uVar3;
}

// FileSize @ 148cc3970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __thiscall
FStorageServerPlatformFile::FileSize(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  size_t sVar3;
  int iVar4;
  undefined1 auStack_878 [32];
  TStringView<wchar_t> local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_878;
  local_848.Base = local_828;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  bVar1 = MakeStorageServerPath(this,param_1,&local_848);
  iVar4 = 0;
  if (bVar1) {
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\0';
    ::FString::FString((FString *)&local_858,local_848.Base);
    uVar2 = FStorageServerFileSystemTOC::GetFileSize(&this->ServerToc,(FString *)&local_858);
    if (local_858.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_858.DataPtr);
    }
    if (uVar2 < 0x8000000000000000) goto LAB_148cc3a8b;
  }
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    local_858.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_1);
      iVar4 = (int)sVar3;
    }
    local_858.Size = iVar4;
    bVar1 = IsNonServerFilenameAllowed(this,&local_858);
    if (bVar1) {
      uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x80))(this->LowerLevel,param_1);
      goto LAB_148cc3a8b;
    }
  }
  uVar2 = 0xffffffffffffffff;
LAB_148cc3a8b:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return uVar2;
}

// GetAccessTimeStamp @ 148cc6530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDateTime __thiscall
FStorageServerPlatformFile::GetAccessTimeStamp(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  FDateTime FVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  wchar_t *in_R8;
  undefined1 auStack_8b8 [32];
  FString local_898;
  wchar_t *local_888;
  int iStack_880;
  undefined4 uStack_87c;
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8b8;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  bVar2 = MakeStorageServerPath(this,in_R8,&local_868);
  uVar9 = 0;
  iVar8 = 0;
  if (bVar2) {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_898,local_868.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar4 = local_898.Data.ArrayNum + -1;
    FVar1.Data = local_898.Data.AllocatorInstance.Data;
    if (local_898.Data.ArrayNum == 0) {
      iVar4 = iVar8;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    iVar4 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar3,&local_898);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
    if (iVar4 != -1) {
      if (local_868.End < local_868.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      *local_868.CurPos = L'\0';
      local_888 = local_868.Base;
      if (local_868.Base != (wchar_t *)0x0) {
        sVar5 = wcslen(local_868.Base);
        iVar8 = (int)sVar5;
      }
      local_878._12_4_ = uStack_87c;
      local_878.Size = iVar8;
      local_878.DataPtr = local_888;
      iStack_880 = iVar8;
      bVar2 = IsAssumedImmutableTimeStampFilename(this,&local_878);
      if (bVar2) {
        *(long64 *)param_1 = GAssumedImmutableTimeStamp.Ticks;
      }
      else {
        FVar6 = FDateTime::Now();
        *(undefined8 *)param_1 = *(undefined8 *)FVar6.Ticks;
      }
      goto LAB_148cc6731;
    }
  }
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    iStack_880 = 0;
    local_888 = in_R8;
    if (in_R8 != (wchar_t *)0x0) {
      sVar5 = wcslen(in_R8);
      iStack_880 = (int)sVar5;
    }
    local_878._12_4_ = uStack_87c;
    local_878.Size = iStack_880;
    local_878.DataPtr = local_888;
    bVar2 = IsNonServerFilenameAllowed(this,&local_878);
    if (bVar2) {
      puVar7 = (undefined8 *)
               (**(code **)((longlong)*this->LowerLevel + 0xc0))(this->LowerLevel,&local_898);
      uVar9 = *puVar7;
    }
  }
  *(undefined8 *)param_1 = uVar9;
LAB_148cc6731:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return (FDateTime)(long64)param_1;
}

// GetAndResetConnectionStats @ 148cc69c0

void __thiscall
FStorageServerPlatformFile::GetAndResetConnectionStats
          (FStorageServerPlatformFile *this,FConnectionStats *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  atomic<double> aVar3;
  FStorageServerConnection *pFVar4;
  
  pFVar4 = (this->Connection).Ptr;
  LOCK();
  aVar2 = pFVar4->AccumulatedBytes;
  pFVar4->AccumulatedBytes = (atomic<unsigned___int64>)0x0;
  UNLOCK();
  param_1->AccumulatedBytes = (ulong64)aVar2;
  LOCK();
  aVar1 = pFVar4->RequestCount;
  pFVar4->RequestCount = (atomic<unsigned_int>)0x0;
  UNLOCK();
  param_1->RequestCount = (uint)aVar1;
  LOCK();
  aVar3 = pFVar4->MinRequestThroughput;
  pFVar4->MinRequestThroughput = (atomic<double>)0x7fefffffffffffff;
  UNLOCK();
  param_1->MinRequestThroughput = (double)aVar3;
  LOCK();
  aVar3 = pFVar4->MaxRequestThroughput;
  pFVar4->MaxRequestThroughput = (atomic<double>)0xffefffffffffffff;
  UNLOCK();
  param_1->MaxRequestThroughput = (double)aVar3;
  return;
}

// GetFilenameOnDisk @ 148cc7550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FStorageServerPlatformFile::GetFilenameOnDisk
          (FStorageServerPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  FString *pFVar7;
  undefined1 auStack_8c8 [32];
  TStringView<wchar_t> local_8a8;
  undefined4 local_898;
  FString local_890;
  void *local_880 [3];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8c8;
  bVar3 = false;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_898 = 0;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  bVar2 = MakeStorageServerPath(this,param_1,&local_868);
  if (bVar2) {
    bVar3 = true;
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString((FString *)&local_8a8,local_868.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar5 = local_8a8.Size + -1;
    pwVar1 = local_8a8.DataPtr;
    if (local_8a8.Size == 0) {
      iVar5 = 0;
      pwVar1 = L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar1);
    iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar4,(FString *)&local_8a8);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (iVar5 == -1) goto LAB_148cc7673;
    bVar2 = true;
  }
  else {
LAB_148cc7673:
    bVar2 = false;
  }
  if ((bVar3) && (local_8a8.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_8a8.DataPtr);
  }
  if (bVar2) {
    if (2 < (byte)LogStorageServerPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    ::FString::FString(__return_storage_ptr__,param_1);
    goto LAB_148cc7781;
  }
  if (this->LowerLevel == (IPlatformFile *)0x0) {
LAB_148cc7723:
    bVar2 = false;
    bVar3 = true;
    pFVar7 = ::FString::FString(&local_890,param_1);
  }
  else {
    iVar5 = 0;
    local_8a8.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar6 = wcslen(param_1);
      iVar5 = (int)sVar6;
    }
    local_8a8.Size = iVar5;
    bVar3 = IsNonServerFilenameAllowed(this,&local_8a8);
    if (!bVar3) goto LAB_148cc7723;
    bVar2 = true;
    bVar3 = false;
    pFVar7 = (FString *)
             (**(code **)((longlong)*this->LowerLevel + 200))(this->LowerLevel,local_880,param_1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if ((bVar3) && (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_880[0] != (void *)0x0)) {
    FMemory::Free(local_880[0]);
  }
LAB_148cc7781:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

// GetHostAddr @ 148cc77c0

TStringView<wchar_t> * __thiscall
FStorageServerPlatformFile::GetHostAddr
          (FStorageServerPlatformFile *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  FStorageServerConnection *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Connection).Ptr;
  __return_storage_ptr__->DataPtr = (wchar_t *)(pFVar2->CurrentHostAddr).Data.AllocatorInstance.Data
  ;
  iVar1 = (pFVar2->CurrentHostAddr).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// GetLowerLevel @ 148cc77f0

IPlatformFile * __thiscall
FStorageServerPlatformFile::GetLowerLevel(FStorageServerPlatformFile *this)

{
  return this->LowerLevel;
}

// GetName @ 148cc7880

wchar_t * __thiscall FStorageServerPlatformFile::GetName(FStorageServerPlatformFile *this)

{
  return L"StorageServer";
}

// GetStatData @ 148cc80d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFileStatData * __thiscall
FStorageServerPlatformFile::GetStatData
          (FStorageServerPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  undefined1 *puVar1;
  long64 lVar2;
  long64 lVar3;
  wchar_t *pwVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long64 lVar8;
  FDateTime FVar9;
  size_t sVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long64 lVar19;
  undefined1 auStack_8f8 [32];
  TStringView<wchar_t> local_8d8 [2];
  undefined1 local_8b8 [32];
  byte local_898;
  undefined7 uStack_897;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1024];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.End = (wchar_t *)local_68;
  bVar5 = MakeStorageServerPath(this,param_1,&local_888);
  iVar12 = 0;
  if (bVar5) {
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'\0';
    ::FString::FString((FString *)local_8d8,local_888.Base);
    lVar8 = FStorageServerFileSystemTOC::GetFileSize(&this->ServerToc,(FString *)local_8d8);
    if (local_8d8[0].DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_8d8[0].DataPtr);
    }
    if (-1 < lVar8) {
      FVar9 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
      lVar19 = *FVar9.Ticks;
      FVar9 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
      lVar2 = *FVar9.Ticks;
      FVar9 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
      lVar3 = *FVar9.Ticks;
      __return_storage_ptr__->bIsDirectory = false;
      __return_storage_ptr__->bIsReadOnly = true;
      __return_storage_ptr__->bIsValid = true;
      (__return_storage_ptr__->CreationTime).Ticks = lVar3;
      (__return_storage_ptr__->AccessTime).Ticks = lVar2;
      (__return_storage_ptr__->ModificationTime).Ticks = lVar19;
      __return_storage_ptr__->FileSize = lVar8;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      return __return_storage_ptr__;
    }
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'\0';
    ::FString::FString((FString *)local_8d8,local_888.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar7 = (int)local_8d8[0]._8_8_ + -1;
    pwVar4 = local_8d8[0].DataPtr;
    if ((int)local_8d8[0]._8_8_ == 0) {
      iVar7 = iVar12;
      pwVar4 = L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar4);
    iVar7 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).Directories,uVar6,(FString *)local_8d8);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (local_8d8[0].DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_8d8[0].DataPtr);
    }
    if (iVar7 != -1) {
      __return_storage_ptr__->bIsDirectory = true;
      __return_storage_ptr__->bIsValid = true;
      __return_storage_ptr__->bIsReadOnly = true;
      (__return_storage_ptr__->CreationTime).Ticks = 0;
      (__return_storage_ptr__->AccessTime).Ticks = 0;
      (__return_storage_ptr__->ModificationTime).Ticks = 0;
      __return_storage_ptr__->FileSize = 0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      return __return_storage_ptr__;
    }
  }
  lVar19 = _UNK_15076cb68;
  lVar8 = ___xmm_ffffffffffffffff0000000000000000;
  local_898 = local_898 & 0xf8;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    local_8d8[0].DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar10 = wcslen(param_1);
      iVar12 = (int)sVar10;
    }
    local_8d8[0].Size = iVar12;
    bVar5 = IsNonServerFilenameAllowed(this,local_8d8);
    if (bVar5) {
      puVar11 = (undefined4 *)
                (**(code **)((longlong)*this->LowerLevel + 0x130))
                          (this->LowerLevel,local_8b8,param_1);
      uVar15 = *puVar11;
      uVar16 = puVar11[1];
      uVar17 = puVar11[2];
      uVar18 = puVar11[3];
      lVar8 = *(long64 *)(puVar11 + 4);
      lVar19 = *(long64 *)(puVar11 + 6);
      uVar13 = (undefined4)*(undefined8 *)(puVar11 + 8);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 8) >> 0x20);
      goto LAB_148cc8336;
    }
  }
  uVar13 = (undefined4)CONCAT71(uStack_897,local_898);
  uVar14 = (undefined4)((uint7)uStack_897 >> 0x18);
LAB_148cc8336:
  *(undefined4 *)&(__return_storage_ptr__->CreationTime).Ticks = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CreationTime).Ticks + 4) = uVar16;
  *(undefined4 *)&(__return_storage_ptr__->AccessTime).Ticks = uVar17;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->AccessTime).Ticks + 4) = uVar18;
  (__return_storage_ptr__->ModificationTime).Ticks = lVar8;
  __return_storage_ptr__->FileSize = lVar19;
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(uVar14,uVar13);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return __return_storage_ptr__;
}

// GetTimeStamp @ 148cc8390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDateTime __thiscall
FStorageServerPlatformFile::GetTimeStamp(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  FDateTime FVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  wchar_t *in_R8;
  undefined1 auStack_8b8 [32];
  FString local_898;
  wchar_t *local_888;
  int iStack_880;
  undefined4 uStack_87c;
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8b8;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  bVar2 = MakeStorageServerPath(this,in_R8,&local_868);
  uVar9 = 0;
  iVar8 = 0;
  if (bVar2) {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_898,local_868.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar4 = local_898.Data.ArrayNum + -1;
    FVar1.Data = local_898.Data.AllocatorInstance.Data;
    if (local_898.Data.ArrayNum == 0) {
      iVar4 = iVar8;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    iVar4 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar3,&local_898);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
    if (iVar4 != -1) {
      if (local_868.End < local_868.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      *local_868.CurPos = L'\0';
      local_888 = local_868.Base;
      if (local_868.Base != (wchar_t *)0x0) {
        sVar5 = wcslen(local_868.Base);
        iVar8 = (int)sVar5;
      }
      local_878._12_4_ = uStack_87c;
      local_878.Size = iVar8;
      local_878.DataPtr = local_888;
      iStack_880 = iVar8;
      bVar2 = IsAssumedImmutableTimeStampFilename(this,&local_878);
      if (bVar2) {
        *(long64 *)param_1 = GAssumedImmutableTimeStamp.Ticks;
      }
      else {
        FVar6 = FDateTime::Now();
        *(undefined8 *)param_1 = *(undefined8 *)FVar6.Ticks;
      }
      goto LAB_148cc8591;
    }
  }
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    iStack_880 = 0;
    local_888 = in_R8;
    if (in_R8 != (wchar_t *)0x0) {
      sVar5 = wcslen(in_R8);
      iStack_880 = (int)sVar5;
    }
    local_878._12_4_ = uStack_87c;
    local_878.Size = iStack_880;
    local_878.DataPtr = local_888;
    bVar2 = IsNonServerFilenameAllowed(this,&local_878);
    if (bVar2) {
      puVar7 = (undefined8 *)
               (**(code **)((longlong)*this->LowerLevel + 0xb0))(this->LowerLevel,&local_898);
      uVar9 = *puVar7;
    }
  }
  *(undefined8 *)param_1 = uVar9;
LAB_148cc8591:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return (FDateTime)(long64)param_1;
}

// Initialize @ 148cc9e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStorageServerPlatformFile::Initialize
          (FStorageServerPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  int *piVar1;
  TDirectoryTree<FString> *this_00;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  FTreeNode *pFVar5;
  TSharedPtr<FJsonObject,1> *this_01;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TJsonReader<char8_t> *pTVar10;
  TJsonReader<char8_t> *pTVar11;
  FJsonObject *pFVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  TDirectoryTree<FString> *pTVar16;
  wchar_t wVar17;
  ulonglong uVar18;
  IPlatformFile IVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_398 [32];
  undefined1 local_358;
  bool local_357 [7];
  IPlatformFile local_350;
  uint local_348;
  wchar_t *local_340;
  TSharedPtr<FJsonObject,1> local_338;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_328;
  TSharedPtr<FJsonObject,1> *local_320;
  StackState local_318;
  FString local_2e0;
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  TRawPtrProxy<TJsonReader<char8_t>_> local_258 [2];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_248;
  FStorageServerPlatformFile *local_240;
  undefined1 local_238 [8];
  FString local_230;
  FName local_220;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TStringView<wchar_t> local_198;
  TSharedRef<TJsonReader<char8_t>,1> local_188;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  TStringView<wchar_t> local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [16];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_398;
  iVar9 = (this->HostAddrs).ArrayNum;
  this->LowerLevel = param_1;
  if (iVar9 < 1) {
    bVar7 = false;
  }
  else {
    local_340 = param_2;
    local_240 = this;
    ::FName::FName(&local_2b0,L"uasset");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,(FName *)local_238,(bool *)&local_2b0);
    ::FName::FName(&local_2a8,L"umap");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,(FName *)(local_238 + 4),(bool *)&local_2a8);
    ::FName::FName(&local_2a0,L"ubulk");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,&local_220,(bool *)&local_2a0);
    ::FName::FName(&local_298,L"uexp");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,(FName *)local_2d0,(bool *)&local_298);
    ::FName::FName(&local_290,L"uptnl");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,(FName *)(local_2c0 + 0xc),(bool *)&local_290);
    ::FName::FName(&local_288,L"ushaderbytecode");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,(FName *)(local_2d0 + 4),(bool *)&local_288);
    ::FName::FName(&local_280,L"ini");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedNonServerExtensions,(FName *)local_2c8,(bool *)&local_280);
    ::FName::FName(&local_278,L"uplugin");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->AssumedImmutableTimeStampExtensions,(FName *)(local_2c8 + 4),
               (bool *)&local_278);
    ::FName::FName(&local_270,L"uplugin");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->EngineStartupPrecacheExtensions,(FName *)local_2c0,(bool *)&local_270);
    ::FName::FName(&local_268,L"uproject");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->EngineStartupPrecacheExtensions,(FName *)(local_2c0 + 4),(bool *)&local_268);
    ::FName::FName(&local_260,L"ini");
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->EngineStartupPrecacheExtensions,(FName *)(local_2c0 + 8),(bool *)&local_260);
    TryFindProjectStoreMarkerFile(this,&local_350);
    IVar19 = local_350;
    pTVar11 = (TJsonReader<char8_t> *)0x0;
    if (local_350 != (IPlatformFile)0x0) {
      local_338.Object = (FJsonObject *)0x0;
      local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = ::operator_new(0x70);
      if (pTVar10 != (TJsonReader<char8_t> *)0x0) {
        (pTVar10->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar10->ParseState).ArrayNum = 0;
        (pTVar10->ParseState).ArrayMax = 0;
        pTVar10->_padding_ = (longlong)&___7__TJsonReader__Q__6B_;
        pTVar10->CurrentToken = None;
        pTVar10->Stream = (FArchive *)IVar19;
        (pTVar10->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar10->Identifier).Data.ArrayNum = 0;
        (pTVar10->Identifier).Data.ArrayMax = 0;
        (pTVar10->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar10->ErrorMessage).Data.ArrayNum = 0;
        (pTVar10->ErrorMessage).Data.ArrayMax = 0;
        (pTVar10->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar10->StringValue).Data.ArrayNum = 0;
        (pTVar10->StringValue).Data.ArrayMax = 0;
        pTVar10->NumberValue = 0.0;
        pTVar10->LineNumber = 1;
        pTVar10->CharacterNumber = 0;
        pTVar10->BoolValue = false;
        pTVar10->FinishedReadingRootObject = false;
        pTVar11 = pTVar10;
      }
      local_258[0].Object = pTVar11;
      TSharedRef<TJsonReader<char8_t>,1>::TSharedRef<TJsonReader<char8_t>,1><TJsonReader<char8_t>_>
                (&local_188,local_258);
      local_318.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.Identifier.Data.ArrayNum = 0;
      local_318.Identifier.Data.ArrayMax = 0;
      local_318.Object.Object = (FJsonObject *)0x0;
      local_318.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      local_318.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.Array.ArrayNum = 0;
      local_318.Array.ArrayMax = 0;
      bVar7 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char8_t>
                        (local_188.Object,&local_318,None);
      if (bVar7) {
        bVar7 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_318,&local_338);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.Object.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_318.Array.AllocatorInstance.Data,
                   local_318.Array.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_318.Array.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_318.Array.AllocatorInstance.Data);
        }
        if (local_318.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Identifier.Data.AllocatorInstance.Data);
        }
        if ((bVar7) && (local_338.Object != (FJsonObject *)0x0)) {
          local_320 = (TSharedPtr<FJsonObject,1> *)0x0;
          if ((local_338.Object == (FJsonObject *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          uStack_170 = 9;
          local_178 = L"zenserver";
          local_168._12_4_ = uStack_16c;
          local_168.Size = 9;
          local_168.DataPtr = L"zenserver";
          bVar7 = FJsonObject::TryGetObjectField(local_338.Object,&local_168,&local_320);
          this_01 = local_320;
          if ((bVar7) && (local_320 != (TSharedPtr<FJsonObject,1> *)0x0)) {
            pFVar12 = TSharedPtr<FJsonObject,1>::operator->(local_320);
            uStack_210 = 9;
            local_218 = L"projectid";
            local_158._12_4_ = uStack_20c;
            local_158.Size = 9;
            local_158.DataPtr = L"projectid";
            pFVar13 = FJsonObject::GetStringField(pFVar12,&local_148,&local_158);
            ::FString::operator=(&this->ServerProject,pFVar13);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            pFVar12 = TSharedPtr<FJsonObject,1>::operator->(this_01);
            uStack_200 = 7;
            local_208 = L"oplogid";
            local_138._12_4_ = uStack_1fc;
            local_138.Size = 7;
            local_138.DataPtr = L"oplogid";
            pFVar13 = FJsonObject::GetStringField(pFVar12,&local_128,&local_138);
            ::FString::operator=(&this->ServerPlatform,pFVar13);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            pFVar12 = TSharedPtr<FJsonObject,1>::operator->(this_01);
            uStack_1f0 = 7;
            local_1f8 = L"baseuri";
            local_118._12_4_ = uStack_1ec;
            local_118.Size = 7;
            local_118.DataPtr = L"baseuri";
            bVar7 = FJsonObject::TryGetStringField(pFVar12,&local_118,&this->BaseURI);
            if (!bVar7) {
              ::FString::Empty(&this->BaseURI);
            }
            pFVar12 = TSharedPtr<FJsonObject,1>::operator->(this_01);
            uStack_1e0 = 0x12;
            local_1e8 = L"workspacesharepath";
            local_108._12_4_ = uStack_1dc;
            local_108.Size = 0x12;
            local_108.DataPtr = L"workspacesharepath";
            bVar7 = FJsonObject::TryGetStringField(pFVar12,&local_108,&this->WorkspaceSharePath);
            if (!bVar7) {
              ::FString::Empty(&this->WorkspaceSharePath);
            }
            if (3 < (byte)LogStorageServerPlatformFile._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
            }
          }
          local_328 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
          if ((local_338.Object == (FJsonObject *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          local_1d8 = L"remapDirectories";
          uStack_1d0 = 0x10;
          local_f8._12_4_ = uStack_1cc;
          local_f8.Size = 0x10;
          local_f8.DataPtr = L"remapDirectories";
          bVar7 = FJsonObject::TryGetArrayField(local_338.Object,&local_f8,&local_328);
          if (bVar7) {
            this_00 = &this->RemapDirectoriesTree;
            local_248 = local_328;
            local_348 = local_328->ArrayNum;
            uVar18 = (ulonglong)(int)local_348;
            pFVar21 = (local_328->AllocatorInstance).Data;
            pFVar14 = pFVar21 + uVar18 * 0x10;
            while( true ) {
              if (local_248->ArrayNum != (int)uVar18) {
                local_358 = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_358);
              }
              if (pFVar21 == pFVar14) break;
              if ((*(longlong *)pFVar21 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              plVar15 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
              if ((*plVar15 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              local_1c8 = L"from";
              uStack_1c0 = 4;
              local_e8._12_4_ = uStack_1bc;
              local_e8.Size = 4;
              local_e8.DataPtr = L"from";
              FJsonObject::GetStringField((FJsonObject *)*plVar15,&local_230,&local_e8);
              if ((*plVar15 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              local_1b8 = L"to";
              uStack_1b0 = 2;
              local_d8._12_4_ = uStack_1ac;
              local_d8.Size = 2;
              local_d8.DataPtr = L"to";
              FJsonObject::GetStringField((FJsonObject *)*plVar15,&local_2e0,&local_d8);
              FVar6.Data = local_230.Data.AllocatorInstance.Data;
              local_1a8 = local_230.Data.AllocatorInstance.Data;
              iStack_1a0 = local_230.Data.ArrayNum + -1;
              if (local_230.Data.ArrayNum == 0) {
                iStack_1a0 = 0;
              }
              uVar4._4_4_ = uStack_19c;
              uVar4._0_4_ = iStack_1a0;
              local_198.DataPtr = (wchar_t *)local_230.Data.AllocatorInstance.Data;
              local_198._8_8_ = uVar4;
              if (iStack_1a0 == 0) {
                uVar2 = (this->RemapDirectoriesTree).Root.NumChildNodesAndFlags;
                pTVar16 = this_00;
                if (-1 < (int)uVar2) {
                  (this->RemapDirectoriesTree).Root.NumChildNodesAndFlags = uVar2 | 0x80000000;
                  (this_00->Root).Value.Pad[0] = '\0';
                  (this_00->Root).Value.Pad[1] = '\0';
                  (this_00->Root).Value.Pad[2] = '\0';
                  (this_00->Root).Value.Pad[3] = '\0';
                  (this_00->Root).Value.Pad[4] = '\0';
                  (this_00->Root).Value.Pad[5] = '\0';
                  (this_00->Root).Value.Pad[6] = '\0';
                  (this_00->Root).Value.Pad[7] = '\0';
                  pFVar5 = &(this->RemapDirectoriesTree).Root;
                  (pFVar5->Value).Pad[8] = '\0';
                  (pFVar5->Value).Pad[9] = '\0';
                  (pFVar5->Value).Pad[10] = '\0';
                  (pFVar5->Value).Pad[0xb] = '\0';
                  (pFVar5->Value).Pad[0xc] = '\0';
                  (pFVar5->Value).Pad[0xd] = '\0';
                  (pFVar5->Value).Pad[0xe] = '\0';
                  (pFVar5->Value).Pad[0xf] = '\0';
                  piVar1 = &(this->RemapDirectoriesTree).NumPaths;
                  *piVar1 = *piVar1 + 1;
                }
              }
              else {
                if ((this->RemapDirectoriesTree).bPathSeparatorInitialized == false) {
                  local_c8.DataPtr = (wchar_t *)local_230.Data.AllocatorInstance.Data;
                  local_c8._8_8_ = uVar4;
                  iVar9 = UE::String::FindFirstChar(&local_c8,L'/',CaseSensitive);
                  if (iVar9 == -1) {
                    local_b8.DataPtr = (wchar_t *)FVar6.Data;
                    local_b8._8_8_ = uVar4;
                    iVar9 = UE::String::FindFirstChar(&local_b8,L'\\',CaseSensitive);
                    if (iVar9 == -1) goto LAB_148cca66a;
                    wVar17 = L'\\';
                  }
                  else {
                    wVar17 = L'/';
                  }
                  TDirectoryTree<FString>::InitializePathSeparator(this_00,wVar17);
                }
LAB_148cca66a:
                local_98.Base = local_78;
                local_98.bIsDynamic = false;
                local_98.bIsExternal = false;
                local_98.CurPos = local_78;
                local_98.End = (wchar_t *)local_58;
                bVar7 = TDirectoryTree<FString>::NormalizePathForReading
                                  (this_00,&local_198,&local_98);
                if (bVar7) {
                  (this->RemapDirectoriesTree).bNeedDriveWithoutPathFixup =
                       (this->RemapDirectoriesTree).bPathSeparatorInitialized == false;
                }
                local_a8.DataPtr = local_198.DataPtr;
                local_a8.Size = local_198.Size;
                local_a8._12_4_ = local_198._12_4_;
                pTVar16 = (TDirectoryTree<FString> *)
                          TDirectoryTree<FString>::FTreeNode::FindOrAdd
                                    (&this_00->Root,&local_a8,local_357);
                if (local_357[0] == false) {
                  piVar1 = &(this->RemapDirectoriesTree).NumPaths;
                  *piVar1 = *piVar1 + 1;
                }
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
              }
              FVar6.Data = local_2e0.Data.AllocatorInstance.Data;
              if (pTVar16 != (TDirectoryTree<FString> *)&local_2e0) {
                piVar1 = (int *)((longlong)(pTVar16->Root).Value.Pad + 0xc);
                iVar9 = *piVar1;
                iVar20 = local_2e0.Data.ArrayNum;
                *(int *)((longlong)(pTVar16->Root).Value.Pad + 8) = iVar20;
                if ((iVar20 == 0) && (iVar9 == 0)) {
                  *piVar1 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar20,iVar9,(ForAnyElementType *)pTVar16,iVar20,piVar1);
                  if (iVar20 != 0) {
                    memcpy(*(FScriptContainerElement **)(pTVar16->Root).Value.Pad,FVar6.Data,
                           (longlong)iVar20 * 2);
                  }
                }
              }
              if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
              }
              if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_230.Data.AllocatorInstance.Data);
              }
              pFVar21 = pFVar21 + 0x10;
              uVar18 = (ulonglong)local_348;
            }
            TDirectoryTree<FString>::FTreeNode::Shrink(&this_00->Root);
            IVar19 = local_350;
            param_2 = local_340;
            this = local_240;
          }
        }
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.Object.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_318.Array.AllocatorInstance.Data,
                   local_318.Array.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_318.Array.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_318.Array.AllocatorInstance.Data);
        }
        if (local_318.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Identifier.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
    }
    bVar7 = FParse::Value(param_2,L"-ZenStoreProject=",&this->ServerProject,true,(wchar_t **)0x0);
    if ((bVar7) && (3 < (byte)LogStorageServerPlatformFile._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    bVar7 = FParse::Value(param_2,L"-ZenStorePlatform=",&this->ServerPlatform,true,(wchar_t **)0x0);
    if ((bVar7) && (3 < (byte)LogStorageServerPlatformFile._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    bVar7 = FParse::Value(param_2,L"-ZenStoreBaseURI=",&this->BaseURI,true,(wchar_t **)0x0);
    if ((bVar7) && (3 < (byte)LogStorageServerPlatformFile._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    bVar7 = FParse::Value(param_2,L"-ZenWorkspaceSharePath=",&this->WorkspaceSharePath,true,
                          (wchar_t **)0x0);
    if ((bVar7) && (3 < (byte)LogStorageServerPlatformFile._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    bVar7 = UE::IsUsingZenPakFileStreaming();
    if (bVar7) {
      InitializeConnection(this);
    }
    if (IVar19 != (IPlatformFile)0x0) {
      (*(code *)**(undefined8 **)IVar19)(IVar19,1);
    }
    bVar7 = true;
  }
  return bVar7;
}

// InitializeAfterProjectFilePath @ 148cca980

void __thiscall
FStorageServerPlatformFile::InitializeAfterProjectFilePath(FStorageServerPlatformFile *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  FModuleManager *pFVar6;
  FName *pFVar7;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pwVar4 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_28,pwVar4);
  pFVar5 = FPaths::ConvertRelativePathToFull(&local_18,&local_28);
  pFVar1 = &this->AbsEngineDir;
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AbsEngineDir).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->AbsEngineDir).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar4 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_28,pwVar4);
  pFVar5 = FPaths::ConvertRelativePathToFull(&local_18,&local_28);
  pFVar1 = &this->AbsProjectDir;
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AbsProjectDir).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->AbsProjectDir).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  InitializeConnection(this);
  pFVar6 = FModuleManager::Get();
  bVar3 = FModuleManager::ModuleExists(pFVar6,L"StorageServerClientDebug",(FString *)0x0);
  if (bVar3) {
    pFVar6 = FModuleManager::Get();
    pFVar7 = ::FName::FName(&local_res8,"StorageServerClientDebug");
    FModuleManager::LoadModule(pFVar6,*pFVar7,None);
  }
  return;
}

// InitializeConnection @ 148ccaaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStorageServerPlatformFile::InitializeConnection(FStorageServerPlatformFile *this)

{
  TUniquePtr<FStorageServerConnection,TDefaultDelete<FStorageServerConnection>_> *this_00;
  TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *pTVar1;
  ushort uVar2;
  int iVar3;
  FName FVar4;
  FStorageServerConnection *pFVar5;
  ICookOnTheFlyServerConnection *pIVar6;
  code *pcVar7;
  longlong *plVar8;
  TUniquePtr<FStorageServerEngineStartupPrecache,TDefaultDelete<FStorageServerEngineStartupPrecache>_>
  TVar9;
  TUniquePtr<FStorageServerEngineStartupPrecache,TDefaultDelete<FStorageServerEngineStartupPrecache>_>
  TVar10;
  bool bVar11;
  FName *pFVar12;
  FModuleManager *this_01;
  IModuleInterface *pIVar13;
  undefined8 *puVar14;
  TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
  *this_02;
  FString *pFVar15;
  FStorageServerEngineStartupPrecache *pFVar16;
  FAnsiString *pFVar17;
  TArrayView<FString_const_,int> *pTVar18;
  FStorageServerEngineStartupPrecache *pFVar19;
  FEvent *pFVar20;
  FPackageStore *pFVar21;
  TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *pTVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  FStorageServerEngineStartupPrecache *pFVar25;
  int iVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_138;
  FString local_128;
  FString local_118;
  FIoDispatcher *local_108;
  TSharedRef<IIoDispatcherBackend,1> local_100;
  TSharedRef<IPackageStoreBackend,1> local_f0;
  FString local_e0;
  FString local_d0;
  TStringView<char> local_c0;
  TSharedRef<IPackageStoreBackend,1> local_b0;
  FName local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TArrayView<FString_const_,int> local_78;
  FAnsiString local_68;
  TArrayView<FString_const_,int> local_58;
  
  this_00 = &this->Connection;
  if (this_00->Ptr == (FStorageServerConnection *)0x0) {
    pFVar12 = ::FName::FName(&local_a0,L"CookOnTheFly");
    FVar4 = *pFVar12;
    this_01 = FModuleManager::Get();
    pIVar13 = FModuleManager::LoadModuleChecked(this_01,FVar4);
    puVar14 = (undefined8 *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13,local_88);
    pTVar1 = &this->CookOnTheFlyServerConnection;
    pFVar25 = (FStorageServerEngineStartupPrecache *)0x0;
    if (pTVar1 != (TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *)puVar14) {
      pTVar1->Object = (ICookOnTheFlyServerConnection *)*puVar14;
      *puVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CookOnTheFlyServerConnection).SharedReferenceCount,
                 (FSharedReferencer<1> *)(puVar14 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    if (pTVar1->Object != (ICookOnTheFlyServerConnection *)0x0) {
      this_02 = (TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                 *)(**(code **)((longlong)*pTVar1->Object + 0x48))();
      TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FStorageServerPlatformFile>
                (this_02,(FStorageServerPlatformFile *)local_98,(pmf_a2b30a44)this);
      if ((pTVar1->Object == (ICookOnTheFlyServerConnection *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = (FString *)(**(code **)((longlong)*pTVar1->Object + 0x10))();
      ::FString::operator=(&this->ServerProject,pFVar15);
      if ((pTVar1->Object == (ICookOnTheFlyServerConnection *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = (FString *)(**(code **)((longlong)*pTVar1->Object + 0x18))();
      ::FString::operator=(&this->ServerPlatform,pFVar15);
    }
    pFVar16 = ::operator_new(0x68);
    pFVar19 = pFVar25;
    if (pFVar16 != (FStorageServerEngineStartupPrecache *)0x0) {
      *(undefined4 *)&(pFVar16->Cache).field_0x19 = 0;
      *(undefined2 *)&(pFVar16->Cache).field_0x1d = 0;
      (pFVar16->Cache).field_0x1f = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x28 = 0;
      (pFVar16->Cache).field_0x18 = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x30 = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar16->Cache).field_0x38 = 0xffefffffffffffff;
      pFVar16->_padding_ = 0;
      pFVar16->Connection = (FStorageServerConnection *)0x0;
      (pFVar16->CacheLock).Mutex.Mutex.Ptr = (void *)0x0;
      *(undefined8 *)&pFVar16->Cache = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x8 = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x10 = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x20 = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x40 = 0;
      *(undefined8 *)&(pFVar16->Cache).field_0x48 = 0;
      pFVar19 = pFVar16;
    }
    TUniquePtr<FStorageServerConnection,TDefaultDelete<FStorageServerConnection>_>::Reset
              (this_00,(FStorageServerConnection *)pFVar19);
    pFVar5 = this_00->Ptr;
    pFVar17 = MakeBaseURI(this,&local_68);
    uVar2 = this->HostPort;
    local_c0.DataPtr = (char *)(pFVar17->Data).AllocatorInstance.Data;
    iVar3 = (pFVar17->Data).ArrayNum;
    local_c0.Size = iVar3 + -1;
    if (iVar3 == 0) {
      local_c0.Size = 0;
    }
    pTVar18 = TArrayView<FString_const_,int>::
              TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                        (&local_58,&this->HostAddrs);
    local_78.DataPtr = pTVar18->DataPtr;
    local_78.ArrayNum = pTVar18->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    bVar11 = FStorageServerConnection::Initialize(pFVar5,&local_78,(uint)uVar2,&local_c0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pFVar16 = ::operator_new(0xd8);
      pFVar19 = pFVar25;
      if (pFVar16 != (FStorageServerEngineStartupPrecache *)0x0) {
        pFVar19 = FStorageServerEngineStartupPrecache::FStorageServerEngineStartupPrecache
                            (pFVar16,this_00->Ptr);
      }
      TVar9.Ptr = GStorageServerEngineStartupPrecache.Ptr;
      TVar10.Ptr = GStorageServerEngineStartupPrecache.Ptr;
      if ((GStorageServerEngineStartupPrecache.Ptr != pFVar19) &&
         (TVar10.Ptr = pFVar19,
         GStorageServerEngineStartupPrecache.Ptr != (FStorageServerEngineStartupPrecache *)0x0)) {
        plVar8 = &(GStorageServerEngineStartupPrecache.Ptr)->_padding_;
        GStorageServerEngineStartupPrecache.Ptr = pFVar19;
        (**(code **)(*plVar8 + 0x28))(TVar9.Ptr,1);
        TVar10.Ptr = GStorageServerEngineStartupPrecache.Ptr;
      }
      GStorageServerEngineStartupPrecache.Ptr = TVar10.Ptr;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddLambda<_FStorageServerPlatformFile::InitializeConnection_::__l11::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnFEngineLoopInitComplete,(<lambda_1> *)(local_98 + 8));
      bVar11 = SendGetFileListMessage(this);
      if (bVar11) {
        if (this->bAllowPackageIo != false) {
          local_108 = FIoDispatcher::Get();
          pFVar5 = this_00->Ptr;
          pFVar19 = ::operator_new(0x108);
          if (pFVar19 == (FStorageServerEngineStartupPrecache *)0x0) {
            local_100.Object = (IIoDispatcherBackend *)___xmm_00000000000000000000000000000018;
            local_100.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)_UNK_151cbb3a8;
            pFVar19 = pFVar25;
          }
          else {
            *(undefined4 *)&pFVar19->Connection = 1;
            *(undefined4 *)((longlong)&pFVar19->Connection + 4) = 1;
            pFVar19->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFStorageServerIoDispatcherBackend___00_SharedPointerInternals__6B_
            ;
            (pFVar19->CacheLock).Mutex.Mutex.Ptr =
                 &FStorageServerIoDispatcherBackend::_vftable__for__FRunnable__;
            *(undefined ***)&pFVar19->Cache =
                 &FStorageServerIoDispatcherBackend::_vftable__for__IIoDispatcherBackend__;
            *(FStorageServerConnection **)&(pFVar19->Cache).field_0x8 = pFVar5;
            *(undefined8 *)&(pFVar19->Cache).field_0x10 = 0;
            *(undefined8 *)&(pFVar19->Cache).field_0x18 = 0;
            *(undefined8 *)&(pFVar19->Cache).field_0x20 = 0;
            pFVar20 = FGenericPlatformProcess::GetSynchEventFromPool(false);
            *(FEvent **)&(pFVar19->Cache).field_0x28 = pFVar20;
            *(undefined8 *)&(pFVar19->Cache).field_0x30 = 0;
            *(undefined8 *)&(pFVar19->Cache).field_0x38 = 0;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)&(pFVar19->Cache).field_0x40,4000);
            (pFVar19->PrecacheFileRequests).First = (FNode *)0x0;
            *(undefined4 *)&(pFVar19->PrecacheFileRequests).TailCopy = 0;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)&(pFVar19->PrecacheFileRequests).NumElems,4000);
            *(undefined8 *)&(pFVar19->HighPriorityPrecacheFileRequests).NumElems = 0;
            pFVar20 = FGenericPlatformProcess::GetSynchEventFromPool(false);
            pFVar19->HasWork = pFVar20;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar19->IsCompleted,4000);
            *(undefined8 *)&pFVar19[1].Cache = 0;
            *(undefined8 *)&pFVar19[1].Cache.field_0x8 = 0;
            pFVar19[1].Cache.field_0x10 = 0;
            if ((pFVar19 == (FStorageServerEngineStartupPrecache *)0xfffffffffffffff0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_100.Object = (IIoDispatcherBackend *)&pFVar19->Cache;
            if (pFVar19 == (FStorageServerEngineStartupPrecache *)0xfffffffffffffff0) {
              local_100.Object = (IIoDispatcherBackend *)pFVar25;
            }
            LOCK();
            *(int *)&pFVar19->Connection = *(int *)&pFVar19->Connection + 1;
            UNLOCK();
            local_100.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar19;
          }
          FIoDispatcher::Mount(local_108,&local_100,0);
          if (pTVar1->Object == (ICookOnTheFlyServerConnection *)0x0) {
            pFVar21 = FPackageStore::Get();
            pTVar22 = SharedPointerInternals::
                      NewIntrusiveReferenceController<1,FStorageServerPackageStoreBackend,FStorageServerConnection_&>
                                (this_00->Ptr);
            local_b0.Object = (IPackageStoreBackend *)&pTVar22->ObjectStorage;
            if ((local_b0.Object == (IPackageStoreBackend *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pTVar22 != (TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *)0x0
               ) {
              LOCK();
              *(int *)&pTVar22->_padding_ = (int)pTVar22->_padding_ + 1;
              UNLOCK();
            }
            local_b0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pTVar22;
            FPackageStore::Mount(pFVar21,&local_b0,0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pTVar22);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar19);
          }
          else {
            pFVar21 = FPackageStore::Get();
            pIVar6 = pTVar1->Object;
            pFVar16 = ::operator_new(0x130);
            if (pFVar16 == (FStorageServerEngineStartupPrecache *)0x0) {
              local_f0.Object = ___xmm_00000000000000000000000000000010;
              local_f0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)_UNK_150651568;
            }
            else {
              *(undefined4 *)&pFVar16->Connection = 1;
              *(undefined4 *)((longlong)&pFVar16->Connection + 4) = 1;
              pFVar16->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFCookOnTheFlyPackageStoreBackend___00_SharedPointerInternals__6B_
              ;
              FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend
                        ((FCookOnTheFlyPackageStoreBackend *)&pFVar16->CacheLock,pIVar6);
              local_f0.Object = (IPackageStoreBackend *)&pFVar16->CacheLock;
              if ((local_f0.Object == (IPackageStoreBackend *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              LOCK();
              *(int *)&pFVar16->Connection = *(int *)&pFVar16->Connection + 1;
              UNLOCK();
              pFVar25 = pFVar16;
              local_f0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar16;
            }
            FPackageStore::Mount(pFVar21,&local_f0,0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar25);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar19);
          }
        }
      }
      else {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
      }
    }
    else if (this->bAbortOnConnectionFailure == false) {
      if (2 < (byte)LogStorageServerPlatformFile._0_1_) {
        iVar3 = (this->HostAddrs).ArrayNum;
        bVar11 = true;
        pFVar24 = (this->HostAddrs).AllocatorInstance.Data;
        pFVar28 = pFVar24 + (longlong)iVar3 * 0x10;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        while( true ) {
          if ((this->HostAddrs).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar24 == pFVar28) break;
          if (bVar11) {
            bVar11 = false;
          }
          else {
            ::FString::AppendChars(&local_118,L"\n",1);
          }
          iVar26 = *(int *)(pFVar24 + 8) + -1;
          if (*(int *)(pFVar24 + 8) == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_118,*(wchar_t **)pFVar24,iVar26);
          pFVar24 = pFVar24 + 0x10;
        }
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      bVar11 = FApp::IsUnattended();
      if (!bVar11) {
        ::FString::FString(&local_d0,L"Failed to connect");
        iVar3 = (this->HostAddrs).ArrayNum;
        bVar11 = true;
        pFVar24 = (this->HostAddrs).AllocatorInstance.Data;
        pFVar28 = pFVar24 + (longlong)iVar3 * 0x10;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        while( true ) {
          if ((this->HostAddrs).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar24 == pFVar28) break;
          if (bVar11) {
            bVar11 = false;
          }
          else {
            ::FString::AppendChars(&local_138,L"\n",1);
          }
          iVar26 = *(int *)(pFVar24 + 8) + -1;
          if (*(int *)(pFVar24 + 8) == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_138,*(wchar_t **)pFVar24,iVar26);
          pFVar24 = pFVar24 + 0x10;
        }
        ::FString::PrintfImpl
                  (&local_e0,
                   L"Network data streaming failed to connect to any of the following data sources:\n\n%s\n\nThis can be due to the sources being offline, the Unreal Zen Storage process not currently running, invalid addresses, firewall blocking, or the sources being on a different network from this device.\nPlease verify that your Unreal Zen Storage process is running using the ZenDashboard utility, and ue.projectstore file in the staged folder contains the valid IP address of the host PC in the \"remotehostnames\" section.\nIf these issues can\'t be addressed, you can use an installed build without network data streaming by building with the \'-pak\' argument. This process will now exit."
                  );
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_d0.Data.ArrayNum != 0) {
          FVar27.Data = local_d0.Data.AllocatorInstance.Data;
        }
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          FVar23.Data = local_e0.Data.AllocatorInstance.Data;
        }
        FWindowsPlatformMisc::MessageBoxExt(Ok,(wchar_t *)FVar23.Data,(wchar_t *)FVar27.Data);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      if (1 < (byte)LogStorageServerPlatformFile._0_1_) {
        iVar3 = (this->HostAddrs).ArrayNum;
        bVar11 = true;
        pFVar24 = (this->HostAddrs).AllocatorInstance.Data;
        pFVar28 = pFVar24 + (longlong)iVar3 * 0x10;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        while( true ) {
          if ((this->HostAddrs).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar24 == pFVar28) break;
          if (bVar11) {
            bVar11 = false;
          }
          else {
            ::FString::AppendChars(&local_128,L"\n",1);
          }
          iVar26 = *(int *)(pFVar24 + 8) + -1;
          if (*(int *)(pFVar24 + 8) == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_128,*(wchar_t **)pFVar24,iVar26);
          pFVar24 = pFVar24 + 0x10;
        }
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      FWindowsPlatformMisc::RequestExit(true,(wchar_t *)0x0);
    }
  }
  return;
}

// InternalOpenFile @ 148ccb6d0

IFileHandle * __thiscall
FStorageServerPlatformFile::InternalOpenFile
          (FStorageServerPlatformFile *this,FIoChunkId *param_1,long64 param_2,wchar_t *param_3)

{
  IFileHandle IVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  IFileHandle *pIVar6;
  ForAnyElementType FVar7;
  FString local_18;
  
  pIVar6 = ::operator_new(0x10078);
  if (pIVar6 != (IFileHandle *)0x0) {
    IVar1 = *(IFileHandle *)param_1->Id;
    uVar2 = param_1->Id[8];
    uVar3 = param_1->Id[9];
    uVar4 = param_1->Id[10];
    uVar5 = param_1->Id[0xb];
    *pIVar6 = (IFileHandle)&___7FStorageServerFileHandle__6B_;
    pIVar6[2] = IVar1;
    pIVar6[1] = (IFileHandle)this;
    pIVar6[3].field_0x0 = uVar2;
    pIVar6[3].field_0x1 = uVar3;
    pIVar6[3].field_0x2 = uVar4;
    pIVar6[3].field_0x3 = uVar5;
    ::FString::FString((FString *)(pIVar6 + 4),param_3);
    pIVar6[6] = (IFileHandle)0x0;
    pIVar6[7] = (IFileHandle)param_2;
    pIVar6[8] = (IFileHandle)0xffffffffffffffff;
    pIVar6[9] = (IFileHandle)0xffffffffffffffff;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar6 + 0x200a),4000);
    ::FString::PrintfImpl(&local_18,L"zen:%s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar7.Data = local_18.Data.AllocatorInstance.Data;
    }
    FPlatformFileTrace::BeginOpen((wchar_t *)FVar7.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FPlatformFileTrace::EndOpen((ulong64)pIVar6);
  }
  return pIVar6;
}

// IsAssumedImmutableTimeStampFilename @ 148ccc6c0

bool __thiscall
FStorageServerPlatformFile::IsAssumedImmutableTimeStampFilename
          (FStorageServerPlatformFile *this,TStringView<wchar_t> *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TStringView<wchar_t> *pTVar5;
  FName *pFVar6;
  ForElementType<FSetElementId> FVar7;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  pTVar5 = FPathViews::GetExtension(&local_18,param_1,false);
  pFVar6 = ::FName::FName(&local_res8,(int)*(undefined8 *)&pTVar5->Size,pTVar5->DataPtr,FNAME_Add);
  FVar1 = *pFVar6;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x8 !=
      *(int *)&(this->AssumedImmutableTimeStampExtensions).Elements.field_0x34) {
    FVar7 = (this->AssumedImmutableTimeStampExtensions).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->AssumedImmutableTimeStampExtensions).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->AssumedImmutableTimeStampExtensions).HashSize - 1U &
                    FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->AssumedImmutableTimeStampExtensions).Elements;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x10) == FVar1) goto LAB_148ccc75a;
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148ccc75a:
  return iVar4 != -1;
}

// IsEngineStartupPrecachableFilename @ 148ccc780

bool __thiscall
FStorageServerPlatformFile::IsEngineStartupPrecachableFilename
          (FStorageServerPlatformFile *this,TStringView<wchar_t> *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TStringView<wchar_t> *pTVar5;
  FName *pFVar6;
  ForElementType<FSetElementId> FVar7;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  pTVar5 = FPathViews::GetExtension(&local_18,param_1,false);
  pFVar6 = ::FName::FName(&local_res8,(int)*(undefined8 *)&pTVar5->Size,pTVar5->DataPtr,FNAME_Add);
  FVar1 = *pFVar6;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x8 !=
      *(int *)&(this->EngineStartupPrecacheExtensions).Elements.field_0x34) {
    FVar7 = (this->EngineStartupPrecacheExtensions).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->EngineStartupPrecacheExtensions).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->EngineStartupPrecacheExtensions).HashSize - 1U & FVar1.Number + uVar3) *
                    4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->EngineStartupPrecacheExtensions).Elements;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x10) == FVar1) goto LAB_148ccc82a;
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148ccc82a:
  return iVar4 != -1;
}

// IsNonServerFilenameAllowed @ 148cccc10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStorageServerPlatformFile::IsNonServerFilenameAllowed
          (FStorageServerPlatformFile *this,TStringView<wchar_t> *param_1)

{
  IPlatformFile *pIVar1;
  FName FVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  IPlatformFile *pIVar8;
  TStringView<wchar_t> *pTVar9;
  FName *pFVar10;
  FString *pFVar11;
  ForElementType<FSetElementId> FVar12;
  FName local_res8;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if ((this->HostAddrs).ArrayNum == 0) {
    return true;
  }
  pIVar1 = this->LowerLevel;
  pIVar8 = IPlatformFile::GetPlatformPhysical();
  if (pIVar1 == pIVar8) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar4 = FPathViews::IsRelativePath(&local_18);
    if (bVar4) {
      pTVar9 = FPathViews::GetExtension(&local_18,param_1,false);
      pFVar10 = ::FName::FName(&local_res8,(int)*(undefined8 *)&pTVar9->Size,pTVar9->DataPtr,
                               FNAME_Add);
      FVar2 = *pFVar10;
      uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(this->ExcludedNonServerExtensions).Elements.field_0x8 !=
          *(int *)&(this->ExcludedNonServerExtensions).Elements.field_0x34) {
        FVar12 = (this->ExcludedNonServerExtensions).Hash.SecondaryData;
        if (FVar12 == (ForElementType<FSetElementId>)0x0) {
          FVar12 = (ForElementType<FSetElementId>)&(this->ExcludedNonServerExtensions).Hash;
        }
        iVar7 = *(int *)((longlong)FVar12 +
                        (ulonglong)
                        ((this->ExcludedNonServerExtensions).HashSize - 1U & FVar2.Number + uVar6) *
                        4);
        if (iVar7 != -1) {
          lVar3 = *(longlong *)&(this->ExcludedNonServerExtensions).Elements;
          do {
            if (*(FName *)(lVar3 + (longlong)iVar7 * 0x10) == FVar2) {
              bVar4 = iVar7 == -1;
              if (bVar4) goto LAB_148cccd77;
              local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_28.Data.ArrayNum = 0;
              local_28.Data.ArrayMax = 0;
              pFVar11 = ::FString::ConstructFromPtrSize
                                  ((FString *)&local_18,param_1->DataPtr,
                                   (int)*(undefined8 *)&param_1->Size);
              if (&local_28 != pFVar11) {
                if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_28.Data.AllocatorInstance.Data);
                }
                local_28.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
                (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_28.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                local_28.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                (pFVar11->Data).ArrayNum = 0;
                (pFVar11->Data).ArrayMax = 0;
              }
              if (local_18.DataPtr != (wchar_t *)0x0) {
                FMemory::Free(local_18.DataPtr);
              }
              bVar5 = IsFileInDynamicPath(&local_28);
              if (!bVar5) goto LAB_148cccd77;
              break;
            }
            iVar7 = *(int *)(lVar3 + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      bVar4 = true;
LAB_148cccd77:
      if ((6 < (byte)LogStorageServerPlatformFile._0_1_) && (bVar4 == false)) {
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
      }
      return bVar4;
    }
  }
  return true;
}

// IsReadOnly @ 148ccce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::IsReadOnly(FStorageServerPlatformFile *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  bool bVar7;
  int iVar8;
  undefined1 auStack_898 [32];
  TStringView<wchar_t> local_878;
  undefined4 local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  bVar7 = false;
  local_858.Base = local_838;
  iVar8 = 0;
  local_868 = 0;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = (wchar_t *)local_38;
  bVar2 = MakeStorageServerPath(this,param_1,&local_858);
  if (bVar2) {
    bVar7 = true;
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString((FString *)&local_878,local_858.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar5 = local_878.Size + -1;
    pwVar1 = local_878.DataPtr;
    if (local_878.Size == 0) {
      iVar5 = iVar8;
      pwVar1 = L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar1);
    iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar4,(FString *)&local_878);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (iVar5 == -1) goto LAB_148cccf5f;
    bVar2 = true;
  }
  else {
LAB_148cccf5f:
    bVar2 = false;
  }
  if ((bVar7) && (local_878.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_878.DataPtr);
  }
  if (bVar2) {
    uVar3 = 1;
  }
  else {
    if (this->LowerLevel != (IPlatformFile *)0x0) {
      local_878.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar6 = wcslen(param_1);
        iVar8 = (int)sVar6;
      }
      local_878.Size = iVar8;
      bVar2 = IsNonServerFilenameAllowed(this,&local_878);
      if (bVar2) {
        uVar3 = (**(code **)((longlong)*this->LowerLevel + 0x98))(this->LowerLevel,param_1);
        goto LAB_148cccfdf;
      }
    }
    uVar3 = 0;
  }
LAB_148cccfdf:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return (bool)uVar3;
}

// IterateDirectory @ 148cce5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::IterateDirectory
          (FStorageServerPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_108 [32];
  FStorageServerPlatformFile *local_d8;
  FStorageServerPlatformFile *local_d0;
  code *local_c8;
  FStorageServerPlatformFile **local_c0;
  code *local_b8;
  FStorageServerPlatformFile **local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  FDirectoryVisitor *local_48;
  IPlatformFile *local_40;
  FStorageServerPlatformFile *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8[8] = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._0_8_ = &___7__FUniqueDirectoryStatVisitor_VFDirectoryVisitor_IPlatformFile___N__6B_;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_48 = param_2;
  local_40 = (IPlatformFile *)(**(code **)(this->_padding_ + 0x60))();
  local_c0 = &local_d8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_2>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
             ::Call;
  local_b0 = &local_d0;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
             ::Call;
  local_d8 = this;
  local_d0 = this;
  local_38 = this;
  bVar2 = FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool>::PerformMergedIteration
                    ((FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool> *)local_a8,
                     param_1,(TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)>
                              *)&local_b8,
                     (TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)>
                      *)&local_c8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return bVar2;
}

// IterateDirectoryRecursively @ 148cce910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::IterateDirectoryRecursively
          (FStorageServerPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_108 [32];
  FStorageServerPlatformFile *local_d8;
  FStorageServerPlatformFile *local_d0;
  code *local_c8;
  FStorageServerPlatformFile **local_c0;
  code *local_b8;
  FStorageServerPlatformFile **local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  FDirectoryVisitor *local_48;
  IPlatformFile *local_40;
  FStorageServerPlatformFile *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8[8] = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._0_8_ = &___7__FUniqueDirectoryStatVisitor_VFDirectoryVisitor_IPlatformFile___N__6B_;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_48 = param_2;
  local_40 = (IPlatformFile *)(**(code **)(this->_padding_ + 0x60))();
  local_c0 = &local_d8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_2>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
             ::Call;
  local_b0 = &local_d0;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_1>,bool,wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&>
             ::Call;
  local_d8 = this;
  local_d0 = this;
  local_38 = this;
  bVar2 = FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool>::PerformMergedIteration
                    ((FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool> *)local_a8,
                     param_1,(TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)>
                              *)&local_b8,
                     (TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)>
                      *)&local_c8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return bVar2;
}

// IterateDirectoryStat @ 148ccea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FStorageServerPlatformFile::IterateDirectoryStat
          (FStorageServerPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStackY_f8 [32];
  FStorageServerPlatformFile *local_c8;
  FStorageServerPlatformFile *local_c0;
  code *local_b8;
  FStorageServerPlatformFile **local_b0;
  code *local_a8;
  FStorageServerPlatformFile **local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  FDirectoryStatVisitor *local_40;
  IPlatformFile *local_38;
  FStorageServerPlatformFile *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = (undefined1  [8])
             &
             ___7__FUniqueDirectoryStatVisitor_VFDirectoryStatVisitor_IPlatformFile__AEBUFFileStatData____6B_
  ;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_40 = param_2;
  local_38 = (IPlatformFile *)(**(code **)(this->_padding_ + 0x60))();
  local_b0 = &local_c8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_2>,bool,wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&>
             ::Call;
  local_a0 = &local_c0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_1>,bool,wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&>
             ::Call;
  local_c8 = this;
  local_c0 = this;
  local_30 = this;
  bVar3 = FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>::
          PerformMergedIteration
                    ((FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>
                      *)local_98,param_1,
                     (TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&)>
                      *)&local_a8,
                     (TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&)>
                      *)&local_b8);
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar1 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar2 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  return bVar3;
}

// MakeBaseURI @ 148ccf910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148ccfa5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAnsiString * __thiscall
FStorageServerPlatformFile::MakeBaseURI
          (FStorageServerPlatformFile *this,FAnsiString *__return_storage_ptr__)

{
  ushort uVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FString_const_,int> *pTVar5;
  FString *pFVar6;
  void *pvVar7;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar8;
  size_t sVar9;
  FAnsiString *pFVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  wchar_t *pwVar16;
  int iVar17;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  longlong local_440;
  TArray<FString,TSizedDefaultAllocator<32>_> local_438;
  FAnsiString local_428;
  FAnsiString local_418;
  FStorageServerConnection local_408;
  undefined8 local_398;
  undefined8 uStack_390;
  TStringView<char> local_388;
  TArrayView<FString_const_,int> local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  TStringView<wchar_t> local_328;
  FString local_318;
  TArrayView<FString_const_,int> local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  undefined1 local_2c8 [16];
  Workspaces local_2b8;
  TStringBuilderBase<char> local_2a8;
  char local_288 [256];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_188;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_2a8.Base = local_288;
  local_2a8.bIsDynamic = false;
  local_2a8.bIsExternal = false;
  local_2a8.CurPos = local_288;
  local_2a8.End = (char *)&local_188;
  bVar4 = UE::IsUsingZenPakFileStreaming();
  pFVar14 = (FScriptContainerElement *)0x0;
  iVar15 = 0;
  pwVar16 = L"";
  iVar17 = 0;
  if ((bVar4) && (pFVar6 = &this->WorkspaceSharePath, 1 < (this->WorkspaceSharePath).Data.ArrayNum))
  {
    FPaths::NormalizeDirectoryName(pFVar6);
    uVar1 = this->HostPort;
    local_408.BaseURI.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.HttpClient.Ptr = (IStorageServerHttpClient *)0x0;
    local_408.CacheStrategy.Ptr = (ICacheStrategy *)0x0;
    local_408.BaseURI.Data.ArrayNum = 0;
    local_408.BaseURI.Data.ArrayMax = 0;
    local_408.MinRequestThroughput = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_408.MaxRequestThroughput = _UNK_150a9e6d8;
    local_408.CurrentHostAddr.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.CurrentHostAddr.Data.ArrayNum = 0;
    local_408.CurrentHostAddr.Data.ArrayMax = 0;
    local_408.AsyncQueryLatestServerChunkInfo.Object = (FAsyncQueryLatestServerChunkInfo *)0x0;
    local_408.AsyncQueryLatestServerChunkInfo.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_408.bIsUsingZenWorkspace = false;
    local_408.AccumulatedBytes = (atomic<unsigned___int64>)0x0;
    local_408.RequestCount = (atomic<unsigned_int>)0x0;
    local_388.DataPtr = "/ws";
    local_388.Size = 3;
    pTVar5 = TArrayView<FString_const_,int>::
             TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                       (&local_308,&this->HostAddrs);
    local_378.DataPtr = pTVar5->DataPtr;
    local_378.ArrayNum = pTVar5->ArrayNum;
    local_378._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    bVar4 = FStorageServerConnection::Initialize(&local_408,&local_378,(uint)uVar1,&local_388);
    if (bVar4) {
      FStorageServerConnection::GetWorkspaces
                (&local_408,(TIoStatusOr<FStorageServerConnection::Workspaces> *)local_2c8);
      if (local_2c8._8_4_ == Ok) {
        FindWorkspaceSharePath(&local_428,pFVar6,&local_2b8);
        if (1 < local_428.Data.ArrayNum) {
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_428.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_428.Data.ArrayNum;
          local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayMax = local_428.Data.ArrayMax;
          local_428.Data.ArrayNum = 0;
          local_428.Data.ArrayMax = 0;
          FIoStatus::operator=((FIoStatus *)local_2c8,Unknown);
          if ((local_2c8._8_4_ == Ok) &&
             (DestructItems<FStorageServerConnection::Workspaces::Workspace,int>
                        ((Workspace *)local_2b8.Workspaces.AllocatorInstance.Data,
                         local_2b8.Workspaces.ArrayNum),
             (Workspace *)local_2b8.Workspaces.AllocatorInstance.Data != (Workspace *)0x0)) {
            FMemory::Free(local_2b8.Workspaces.AllocatorInstance.Data);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_2c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_408.AsyncQueryLatestServerChunkInfo.SharedReferenceCount.
                     ReferenceController);
          if (local_408.CurrentHostAddr.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.CurrentHostAddr.Data.AllocatorInstance.Data);
          }
          if (local_408.BaseURI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.BaseURI.Data.AllocatorInstance.Data);
          }
          if (local_408.CacheStrategy.Ptr != (ICacheStrategy *)0x0) {
            (**(code **)(local_408.CacheStrategy.Ptr)->_padding_)(local_408.CacheStrategy.Ptr,1);
          }
          if (local_408.HttpClient.Ptr != (IStorageServerHttpClient *)0x0) {
            (**(code **)*local_408.HttpClient.Ptr)(local_408.HttpClient.Ptr,1);
          }
          goto LAB_148cd01fd;
        }
        if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data.AllocatorInstance.Data);
        }
        CreateWorkspaceShare(&local_418,&local_408,pFVar6,&local_2b8);
        if (1 < local_418.Data.ArrayNum) {
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_418.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_418.Data.ArrayNum;
          local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayMax = local_418.Data.ArrayMax;
          local_418.Data.ArrayNum = 0;
          local_418.Data.ArrayMax = 0;
          FIoStatus::operator=((FIoStatus *)local_2c8,Unknown);
          if ((local_2c8._8_4_ == Ok) &&
             (DestructItems<FStorageServerConnection::Workspaces::Workspace,int>
                        ((Workspace *)local_2b8.Workspaces.AllocatorInstance.Data,
                         local_2b8.Workspaces.ArrayNum),
             (Workspace *)local_2b8.Workspaces.AllocatorInstance.Data != (Workspace *)0x0)) {
            FMemory::Free(local_2b8.Workspaces.AllocatorInstance.Data);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_2c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_408.AsyncQueryLatestServerChunkInfo.SharedReferenceCount.
                     ReferenceController);
          if (local_408.CurrentHostAddr.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.CurrentHostAddr.Data.AllocatorInstance.Data);
          }
          if (local_408.BaseURI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.BaseURI.Data.AllocatorInstance.Data);
          }
          if (local_408.CacheStrategy.Ptr != (ICacheStrategy *)0x0) {
            (**(code **)(local_408.CacheStrategy.Ptr)->_padding_)(local_408.CacheStrategy.Ptr,1);
          }
          if (local_408.HttpClient.Ptr != (IStorageServerHttpClient *)0x0) {
            (**(code **)*local_408.HttpClient.Ptr)(local_408.HttpClient.Ptr,1);
          }
          goto LAB_148cd01fd;
        }
        if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_418.Data.AllocatorInstance.Data);
        }
        if (1 < (byte)LogStorageServerPlatformFile._0_1_) {
          iVar13 = local_408.CurrentHostAddr.Data.ArrayNum + -1;
          if (local_408.CurrentHostAddr.Data.ArrayNum == 0) {
            iVar13 = iVar15;
          }
          pFVar6 = ::FString::ConstructFromPtrSize
                             (&local_368,
                              (wchar_t *)local_408.CurrentHostAddr.Data.AllocatorInstance.Data,
                              iVar13);
          if (&local_2f8 != pFVar6) {
            pFVar14 = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
          local_348.Data.AllocatorInstance.Data = pFVar14;
          goto joined_r0x000148ccfd7a;
        }
      }
      else if (1 < (byte)LogStorageServerPlatformFile._0_1_) {
        FIoStatus::ToString((FIoStatus *)local_2c8,&local_348);
        iVar13 = local_408.CurrentHostAddr.Data.ArrayNum + -1;
        if (local_408.CurrentHostAddr.Data.ArrayNum == 0) {
          iVar13 = iVar17;
        }
        pFVar6 = ::FString::ConstructFromPtrSize
                           (&local_358,
                            (wchar_t *)local_408.CurrentHostAddr.Data.AllocatorInstance.Data,iVar13)
        ;
        if (&local_2e8 != pFVar6) {
          pFVar14 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
joined_r0x000148ccfd7a:
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
      }
      FIoStatus::operator=((FIoStatus *)local_2c8,Unknown);
      if ((local_2c8._8_4_ == Ok) &&
         (DestructItems<FStorageServerConnection::Workspaces::Workspace,int>
                    ((Workspace *)local_2b8.Workspaces.AllocatorInstance.Data,
                     local_2b8.Workspaces.ArrayNum),
         (Workspace *)local_2b8.Workspaces.AllocatorInstance.Data != (Workspace *)0x0)) {
        FMemory::Free(local_2b8.Workspaces.AllocatorInstance.Data);
      }
      FIoStatus::~FIoStatus((FIoStatus *)local_2c8);
    }
    else if (1 < (byte)LogStorageServerPlatformFile._0_1_) {
      iVar13 = local_408.CurrentHostAddr.Data.ArrayNum + -1;
      if (local_408.CurrentHostAddr.Data.ArrayNum == 0) {
        iVar13 = iVar17;
      }
      pFVar6 = ::FString::ConstructFromPtrSize
                         (&local_338,
                          (wchar_t *)local_408.CurrentHostAddr.Data.AllocatorInstance.Data,iVar13);
      if (&local_2d8 != pFVar6) {
        pFVar14 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_408.AsyncQueryLatestServerChunkInfo.SharedReferenceCount.ReferenceController);
    if (local_408.CurrentHostAddr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.CurrentHostAddr.Data.AllocatorInstance.Data);
    }
    if (local_408.BaseURI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.BaseURI.Data.AllocatorInstance.Data);
    }
    if (local_408.CacheStrategy.Ptr != (ICacheStrategy *)0x0) {
      (**(code **)(local_408.CacheStrategy.Ptr)->_padding_)(local_408.CacheStrategy.Ptr,1);
    }
    if (local_408.HttpClient.Ptr != (IStorageServerHttpClient *)0x0) {
      (**(code **)*local_408.HttpClient.Ptr)(local_408.HttpClient.Ptr,1);
    }
  }
  iVar13 = (this->BaseURI).Data.ArrayNum;
  if (iVar13 < 2) {
    if (local_2a8.End <
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + 5)) {
      TStringBuilderBase<char>::Extend(&local_2a8,5);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_2a8.CurPos,"/prj/",5);
    iVar13 = (this->ServerProject).Data.ArrayNum;
    local_2a8.CurPos = (char *)((longlong)pvVar7 + 5);
    if (iVar13 < 2) {
      uStack_390 = 0;
      local_398 = 0;
      local_328.DataPtr = (wchar_t *)0x0;
      local_328.Size = 0;
      local_328._12_4_ = 0;
      pFVar6 = FApp::GetZenStoreProjectId(&local_318,&local_328);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pTVar8 = StringCast<char,128,wchar_t>(&local_188,pwVar12);
      pcVar2 = pTVar8->Ptr;
      if (pcVar2 != (char *)0x0) {
        sVar9 = strlen(pcVar2);
        iVar17 = (int)sVar9;
      }
      uVar11 = (ulong64)iVar17;
      if (local_2a8.End <
          (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + uVar11)) {
        TStringBuilderBase<char>::Extend(&local_2a8,uVar11);
      }
      if (iVar17 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_2a8.CurPos,pcVar2,uVar11);
        local_2a8.CurPos = (char *)((longlong)pvVar7 + uVar11);
      }
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar14 = (this->ServerProject).Data.AllocatorInstance.Data;
      iVar13 = iVar13 + -1;
      if (local_2a8.End <
          (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + iVar13)) {
        TStringBuilderBase<char>::Extend(&local_2a8,(longlong)iVar13);
      }
      local_2a8.CurPos =
           FGenericPlatformString::Convert<wchar_t,char>
                     (local_2a8.CurPos,iVar13,(wchar_t *)pFVar14,iVar13);
    }
    if (local_2a8.End <
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + 7)) {
      TStringBuilderBase<char>::Extend(&local_2a8,7);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_2a8.CurPos,"/oplog/",7);
    iVar13 = (this->ServerPlatform).Data.ArrayNum;
    local_2a8.CurPos = (char *)((longlong)pvVar7 + 7);
    if (1 < iVar13) {
      pFVar14 = (this->ServerPlatform).Data.AllocatorInstance.Data;
      iVar13 = iVar13 + -1;
      uVar11 = (ulong64)iVar13;
      pTVar8 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + uVar11);
      goto LAB_148cd0190;
    }
    local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_438.ArrayNum = 0;
    local_438.ArrayMax = 0;
    FGenericPlatformMisc::GetValidTargetPlatforms(&local_438);
    if (local_438.ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetPlatformNames.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                         ,0x454,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FAnsiString *)(*pcVar3)();
        return pFVar10;
      }
      if (local_438.ArrayNum < 1) {
        local_448 = 0;
        local_440 = (longlong)local_438.ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FAnsiString *)(*pcVar3)();
          return pFVar10;
        }
      }
    }
    if (*(int *)(local_438.AllocatorInstance.Data + 8) != 0) {
      pwVar16 = *(wchar_t **)local_438.AllocatorInstance.Data;
    }
    pTVar8 = StringCast<char,128,wchar_t>(&local_e8,pwVar16);
    pcVar2 = pTVar8->Ptr;
    if (pcVar2 != (char *)0x0) {
      sVar9 = strlen(pcVar2);
      iVar15 = (int)sVar9;
    }
    uVar11 = (ulong64)iVar15;
    if (local_2a8.End <
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + uVar11)) {
      TStringBuilderBase<char>::Extend(&local_2a8,uVar11);
    }
    if (iVar15 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_2a8.CurPos,pcVar2,uVar11);
      local_2a8.CurPos = (char *)((longlong)pvVar7 + uVar11);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    DestructItems<FString,int>((FString *)local_438.AllocatorInstance.Data,local_438.ArrayNum);
    if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.AllocatorInstance.Data);
    }
  }
  else {
    pFVar14 = (this->BaseURI).Data.AllocatorInstance.Data;
    iVar13 = iVar13 + -1;
    uVar11 = (ulong64)iVar13;
    pTVar8 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + uVar11);
LAB_148cd0190:
    if (local_2a8.End < pTVar8) {
      TStringBuilderBase<char>::Extend(&local_2a8,uVar11);
    }
    local_2a8.CurPos =
         FGenericPlatformString::Convert<wchar_t,char>
                   (local_2a8.CurPos,iVar13,(wchar_t *)pFVar14,iVar13);
  }
  if (local_2a8.End < (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_2a8.CurPos + 1))
  {
    TStringBuilderBase<char>::Extend(&local_2a8,1);
  }
  *local_2a8.CurPos = '\0';
  FAnsiString::FAnsiString(__return_storage_ptr__,local_2a8.Base);
LAB_148cd01fd:
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2a8);
  return __return_storage_ptr__;
}

// MakeLocalPath @ 148cd0240

bool __thiscall
FStorageServerPlatformFile::MakeLocalPath
          (FStorageServerPlatformFile *this,wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar8 = (int)sVar4;
  }
  iVar3 = (int)*(undefined8 *)&(this->ServerEngineDirView).Size;
  iVar6 = iVar8;
  if (iVar3 < iVar8) {
    iVar6 = iVar3;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  iVar6 = 0;
  if (iVar3 == iVar7) {
    if ((iVar3 != 0) && (iVar7 != 0)) {
      iVar2 = iVar7;
      if (iVar3 < iVar7) {
        iVar2 = iVar3;
      }
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        ((this->ServerEngineDirView).DataPtr,param_1,(longlong)iVar2);
      if (iVar2 != 0) goto LAB_148cd031b;
    }
    if (iVar3 != iVar7) goto LAB_148cd031b;
    pwVar5 = FGenericPlatformMisc::EngineDir();
    if (pwVar5 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar5);
      iVar6 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar5,iVar6);
    iVar6 = (this->ServerEngineDirView).Size;
LAB_148cd02f3:
    iVar3 = iVar8;
    if (iVar8 - iVar6 < iVar8) {
      iVar3 = iVar8 - iVar6;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,param_1 + ((longlong)iVar8 - (longlong)iVar6),iVar6);
    bVar1 = true;
  }
  else {
LAB_148cd031b:
    iVar7 = (int)*(undefined8 *)&(this->ServerProjectDirView).Size;
    iVar3 = iVar8;
    if (iVar7 < iVar8) {
      iVar3 = iVar7;
    }
    iVar2 = iVar6;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar7 == iVar2) {
      if ((iVar7 != 0) && (iVar2 != 0)) {
        iVar3 = iVar2;
        if (iVar7 < iVar2) {
          iVar3 = iVar7;
        }
        iVar3 = FGenericPlatformStricmp::Strnicmp
                          ((this->ServerProjectDirView).DataPtr,param_1,(longlong)iVar3);
        if (iVar3 != 0) goto LAB_148cd0398;
      }
      if (iVar7 == iVar2) {
        pwVar5 = FGenericPlatformMisc::ProjectDir();
        if (pwVar5 != (wchar_t *)0x0) {
          sVar4 = wcslen(pwVar5);
          iVar6 = (int)sVar4;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar5,iVar6);
        iVar6 = (this->ServerProjectDirView).Size;
        goto LAB_148cd02f3;
      }
    }
LAB_148cd0398:
    bVar1 = false;
  }
  return bVar1;
}

// MakeStorageServerPath @ 148cd03c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::MakeStorageServerPath
          (FStorageServerPlatformFile *this,wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  FStorageServerPlatformFile *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  FStorageServerPlatformFile *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FStorageServerPlatformFile *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  wchar_t *local_1a8;
  undefined8 uStack_1a0;
  wchar_t *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TStringBuilderBase<wchar_t> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_248 = this;
  local_238 = (FScriptContainerElement *)FGenericPlatformMisc::EngineDir();
  lVar12 = 0;
  iVar11 = 0;
  iVar7 = iVar11;
  if (local_238 != (FScriptContainerElement *)0x0) {
    sVar8 = wcslen((wchar_t *)local_238);
    iVar7 = (int)sVar8;
  }
  local_258.DataPtr = FGenericPlatformMisc::ProjectDir();
  iVar9 = iVar11;
  if (local_258.DataPtr != (wchar_t *)0x0) {
    sVar8 = wcslen(local_258.DataPtr);
    iVar9 = (int)sVar8;
  }
  iVar14 = iVar11;
  local_228 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_1);
    iVar14 = (int)sVar8;
  }
  iVar6 = iVar14;
  if (iVar7 < iVar14) {
    iVar6 = iVar7;
  }
  iVar13 = iVar11;
  if (0 < iVar6) {
    iVar13 = iVar6;
  }
  iStack_220 = iVar14;
  if ((iVar7 == iVar13) &&
     ((((iVar7 == 0 || (iVar13 == 0)) ||
       (iVar6 = FGenericPlatformStricmp::Strnicmp((wchar_t *)local_238,param_1,(longlong)iVar13),
       iVar6 == 0)) && (iVar7 == iVar13)))) {
    local_1a8 = (local_248->ServerEngineDirView).DataPtr;
    uStack_1a0 = *(undefined8 *)&(local_248->ServerEngineDirView).Size;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,local_1a8,(int)*(undefined8 *)&(local_248->ServerEngineDirView).Size);
    iVar9 = iVar7;
LAB_148cd04c1:
    iVar7 = iVar14;
    if (iVar14 - iVar9 < iVar14) {
      iVar7 = iVar14 - iVar9;
    }
    if (0 < iVar7) {
      iVar11 = iVar7;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,param_1 + ((longlong)iVar14 - (longlong)iVar11),iVar11);
  }
  else {
    iVar7 = iVar14;
    if (iVar9 < iVar14) {
      iVar7 = iVar9;
    }
    iVar13 = 0;
    iVar6 = iVar13;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar9 == iVar6) {
      if ((iVar9 != 0) && (iVar6 != 0)) {
        iVar7 = iVar6;
        if (iVar9 < iVar6) {
          iVar7 = iVar9;
        }
        iVar7 = FGenericPlatformStricmp::Strnicmp(local_258.DataPtr,param_1,(longlong)iVar7);
        if (iVar7 != 0) goto LAB_148cd0568;
      }
      if (iVar9 == iVar6) {
        local_198 = (local_248->ServerProjectDirView).DataPtr;
        uStack_190 = *(undefined8 *)&(local_248->ServerProjectDirView).Size;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (param_2,local_198,(int)*(undefined8 *)&(local_248->ServerProjectDirView).Size);
        goto LAB_148cd04c1;
      }
    }
LAB_148cd0568:
    local_1f8._12_4_ = uStack_21c;
    local_1f8.Size = iStack_220;
    local_168.Base = (wchar_t *)&stack0xfffffffffffffeb8;
    local_168.CurPos = (wchar_t *)&stack0xfffffffffffffeb8;
    local_168.bIsDynamic = false;
    local_168.bIsExternal = false;
    local_168.End = (wchar_t *)&stack0xffffffffffffffb8;
    local_1f8.DataPtr = local_228;
    FPathViews::ToAbsolutePath(&local_1f8,&local_168);
    pFVar3 = local_248;
    local_258.DataPtr = (wchar_t *)0x0;
    local_258.Size = 0;
    local_238 = (local_248->AbsProjectDir).Data.AllocatorInstance.Data;
    iVar7 = (local_248->AbsProjectDir).Data.ArrayNum;
    iStack_230 = iVar7 + -1;
    if (iVar7 == 0) {
      iStack_230 = iVar13;
    }
    local_248 = (FStorageServerPlatformFile *)local_168.Base;
    local_1e8._12_4_ = uStack_22c;
    local_1e8.Size = iStack_230;
    iStack_240 = (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
    local_1d8._12_4_ = uStack_23c;
    local_1d8.Size = iStack_240;
    local_1d8.DataPtr = local_168.Base;
    local_1e8.DataPtr = (wchar_t *)local_238;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_1d8,&local_1e8,&local_258);
    if (bVar4) {
      uVar15 = *(undefined4 *)&(pFVar3->ServerProjectDirView).DataPtr;
      uVar16 = *(undefined4 *)((longlong)&(pFVar3->ServerProjectDirView).DataPtr + 4);
      iStack_180 = (pFVar3->ServerProjectDirView).Size;
      uStack_17c = *(undefined4 *)&(pFVar3->ServerProjectDirView).field_0xc;
      iVar7 = (int)*(undefined8 *)&(pFVar3->ServerProjectDirView).Size;
      local_188 = uVar15;
      uStack_184 = uVar16;
    }
    else {
      local_218 = (pFVar3->AbsEngineDir).Data.AllocatorInstance.Data;
      iVar7 = (pFVar3->AbsEngineDir).Data.ArrayNum;
      iStack_210 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_210 = iVar13;
      }
      local_208 = (FStorageServerPlatformFile *)local_168.Base;
      local_1c8._12_4_ = uStack_20c;
      local_1c8.Size = iStack_210;
      iStack_200 = (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
      local_1b8._12_4_ = uStack_1fc;
      local_1b8.Size = iStack_200;
      local_1b8.DataPtr = local_168.Base;
      local_1c8.DataPtr = (wchar_t *)local_218;
      bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_1b8,&local_1c8,&local_258);
      if (!bVar4) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        return false;
      }
      uVar15 = *(undefined4 *)&(pFVar3->ServerEngineDirView).DataPtr;
      uVar16 = *(undefined4 *)((longlong)&(pFVar3->ServerEngineDirView).DataPtr + 4);
      iStack_170 = (pFVar3->ServerEngineDirView).Size;
      uStack_16c = *(undefined4 *)&(pFVar3->ServerEngineDirView).field_0xc;
      iVar7 = (int)*(undefined8 *)&(pFVar3->ServerEngineDirView).Size;
      local_178 = uVar15;
      uStack_174 = uVar16;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,(wchar_t *)CONCAT44(uVar16,uVar15),iVar7)
    ;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,local_258.DataPtr,local_258.Size);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  }
  pwVar10 = param_2->Base;
  iVar7 = (int)((longlong)param_2->CurPos - (longlong)pwVar10 >> 1);
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pwVar1 = pwVar10 + iVar7;
  for (; pwVar10 != pwVar1; pwVar10 = pwVar10 + 1) {
    if (*pwVar10 == L'\\') {
      *pwVar10 = L'/';
    }
  }
  if ((0 < iVar14) && (param_1[(longlong)iVar14 + -1] == L'/')) {
    lVar12 = 1;
  }
  if (((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) < (int)lVar12) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0xe8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  param_2->CurPos = param_2->CurPos + -lVar12;
  return true;
}

// MoveFile @ 148cd0890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::MoveFile
          (FStorageServerPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  IFileHandle *pIVar11;
  longlong lVar12;
  uint *puVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  long64 lVar17;
  undefined1 auStackY_1108 [32];
  ForAnyElementType local_10d8;
  undefined8 local_10d0;
  FString local_10c8;
  FString local_10b8;
  undefined4 local_10a8;
  FIoChunkId local_10a0 [2];
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1108;
  local_10a8 = 0;
  bVar5 = false;
  if (this->LowerLevel == (IPlatformFile *)0x0) {
    return false;
  }
  if ((GPreferLocalForNonAssets) &&
     (cVar3 = (**(code **)((longlong)*this->LowerLevel + 0xa0))(), cVar3 != '\0')) {
    return true;
  }
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  bVar4 = MakeStorageServerPath(this,param_1,&local_868);
  pwVar16 = L"";
  if (bVar4) {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_10c8,local_868.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (local_10c8.Data.ArrayNum == 0) {
      pwVar14 = L"";
      local_10c8.Data.ArrayNum = 0;
    }
    else {
      local_10c8.Data.ArrayNum = local_10c8.Data.ArrayNum + -1;
      pwVar14 = (wchar_t *)local_10c8.Data.AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(local_10c8.Data.ArrayNum,pwVar14);
    iVar8 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar7,&local_10c8);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar5 = true;
    if (iVar8 == -1) goto LAB_148cd0a04;
    bVar4 = true;
  }
  else {
LAB_148cd0a04:
    bVar4 = false;
  }
  if ((bVar5) && (local_10c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_10c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    uVar6 = 0;
    goto LAB_148cd0d22;
  }
  local_1088.Base = local_1068;
  local_1088.bIsDynamic = false;
  local_1088.bIsExternal = false;
  local_1088.CurPos = local_1068;
  local_1088.End = (wchar_t *)&local_868;
  bVar5 = MakeStorageServerPath(this,param_2,&local_1088);
  if (bVar5) {
    lVar17 = -1;
    if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
    }
    *local_1088.CurPos = L'\0';
    ::FString::FString(&local_10b8,local_1088.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (local_10b8.Data.ArrayNum == 0) {
      local_10b8.Data.ArrayNum = 0;
    }
    else {
      local_10b8.Data.ArrayNum = local_10b8.Data.ArrayNum + -1;
      pwVar16 = (wchar_t *)local_10b8.Data.AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(local_10b8.Data.ArrayNum,pwVar16);
    iVar8 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar7,&local_10b8);
    if (iVar8 == -1) {
LAB_148cd0b8b:
      ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
      bVar5 = false;
    }
    else {
      lVar12 = (longlong)iVar8 * 0x20 + *(longlong *)&(this->ServerToc).FilePathToIndexMap;
      puVar13 = (uint *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        puVar13 = (uint *)0x0;
      }
      if (puVar13 == (uint *)0x0) goto LAB_148cd0b8b;
      uVar7 = *puVar13;
      lVar12 = (longlong)(int)uVar7;
      uVar9 = 0;
      if ((int)uVar7 < (this->ServerToc).Files.ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar1 = (this->ServerToc).Files.AllocatorInstance.Data;
      local_10a0[0].Id._0_8_ = *(undefined8 *)(pFVar1 + lVar12 * 0x28);
      local_10a0[0].Id._8_4_ = *(undefined4 *)(pFVar1 + lVar12 * 0x28 + 8);
      lVar17 = *(long64 *)(pFVar1 + lVar12 * 0x28 + 0x20);
      ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
      bVar5 = true;
    }
    if (local_10b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10b8.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_148cd0d00;
    plVar10 = (longlong *)
              (**(code **)((longlong)*this->LowerLevel + 0x110))(this->LowerLevel,param_1,0,0);
    if (plVar10 == (longlong *)0x0) {
      uVar6 = 0;
    }
    else {
      if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
      }
      *local_1088.CurPos = L'\0';
      pIVar11 = InternalOpenFile(this,local_10a0,lVar17,local_1088.Base);
      if (pIVar11 == (IFileHandle *)0x0) {
        uVar6 = 0;
        (**(code **)*plVar10)(plVar10,1);
      }
      else {
        local_10d8.Data = (FScriptContainerElement *)0x0;
        local_10d0 = 0;
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x10000,&local_10d8,(int *)&local_10d0,
                           (int *)((longlong)&local_10d0 + 4));
        memset(local_10d8.Data + iVar8,0,0x10000);
        for (lVar12 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11); lVar12 != 0;
            lVar12 = lVar12 - lVar15) {
          lVar15 = lVar12;
          if (0x10000 < lVar12) {
            lVar15 = 0x10000;
          }
          cVar3 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,local_10d8.Data,lVar15);
          if ((cVar3 == '\0') ||
             (cVar3 = (**(code **)(*plVar10 + 0x30))(plVar10,local_10d8.Data,lVar15), cVar3 == '\0')
             ) {
            uVar6 = 0;
            goto LAB_148cd0cd0;
          }
        }
        uVar6 = 1;
LAB_148cd0cd0:
        if (local_10d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10d8.Data);
        }
        (**(code **)*pIVar11)(pIVar11,1);
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  else {
LAB_148cd0d00:
    uVar6 = (**(code **)((longlong)*this->LowerLevel + 0xa0))(this->LowerLevel,param_1,param_2);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
LAB_148cd0d22:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return (bool)uVar6;
}

// OnCookOnTheFlyMessage @ 148cd1200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStorageServerPlatformFile::OnCookOnTheFlyMessage
          (FStorageServerPlatformFile *this,FCookOnTheFlyMessage *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FArchive *local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TArray<FIoChunkId,TSizedDefaultAllocator<32>_> local_58;
  wchar_t *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  if ((param_1->Header).MessageType == FilesAdded) {
    if (5 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    uVar7 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    UE::Cook::FCookOnTheFlyMessage::ReadBody(param_1);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(local_res10,&local_68);
    TArrayPrivateFriend::Serialize<FIoChunkId,TSizedDefaultAllocator<32>_>(local_res10,&local_58);
    if (local_res10 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    if (local_68.ArrayNum != local_58.ArrayNum) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Filenames.Num() == ChunkIds.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                         ,0x899,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar8 = (longlong)local_68.ArrayNum;
    iVar5 = local_68.ArrayNum;
    if (0 < local_68.ArrayNum) {
      do {
        uVar6 = ~uVar7 >> 0x1f;
        if (5 < (byte)LogCookOnTheFly._0_1_) {
          uVar3 = 0;
          if ((int)uVar7 < iVar5) {
            uVar3 = uVar6;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
          iVar5 = local_68.ArrayNum;
        }
        uVar4 = 0;
        uVar3 = uVar4;
        if ((int)uVar7 < iVar5) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
        iVar5 = *(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 8);
        uStack_40 = iVar5 - 1;
        if (iVar5 == 0) {
          uStack_40 = uVar4;
        }
        if ((int)uVar7 < local_58.ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_38._12_4_ = uStack_3c;
        local_38.Size = uStack_40;
        local_38.DataPtr = local_48;
        FStorageServerFileSystemTOC::AddFile
                  (&this->ServerToc,
                   (FIoChunkId *)(local_58.AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc),
                   &local_38,-1);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + -1;
        iVar5 = local_68.ArrayNum;
      } while (lVar8 != 0);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
      iVar5 = local_68.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,iVar5);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

// OpenMappedEx @ 148cd15b0

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FStorageServerPlatformFile::OpenMappedEx
          (FStorageServerPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  TStringView<wchar_t> local_18;
  
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    iVar2 = 0;
    local_18.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_1);
      iVar2 = (int)sVar3;
    }
    local_18.Size = iVar2;
    bVar1 = IsNonServerFilenameAllowed(this,&local_18);
    if (bVar1) {
      (**(code **)((longlong)*this->LowerLevel + 0x1b0))
                (this->LowerLevel,__return_storage_ptr__,param_1,param_2,param_3);
      return __return_storage_ptr__;
    }
  }
  ::FString::PrintfImpl((FString *)&local_18,L"Can\'t open mapped file \'%s\'");
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.DataPtr;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Size;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_18._12_4_;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// OpenRead @ 148cd1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IFileHandle * __thiscall
FStorageServerPlatformFile::OpenRead(FStorageServerPlatformFile *this,wchar_t *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  IFileHandle *pIVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  long64 lVar13;
  undefined1 auStack_8f8 [32];
  longlong local_8d8;
  longlong local_8d0;
  FString local_8c8;
  FIoChunkId local_8b8;
  wchar_t *local_8a8;
  uint uStack_8a0;
  undefined4 uStack_89c;
  wchar_t *local_898;
  uint uStack_890;
  undefined4 uStack_88c;
  TStringView<wchar_t> local_888;
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_868.Base = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  uVar12 = 0;
  if ((GPreferLocalForNonAssets) && (this->LowerLevel != (IPlatformFile *)0x0)) {
    uStack_8a0 = uVar12;
    local_8a8 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar8 = wcslen(param_1);
      uStack_8a0 = (uint)sVar8;
    }
    local_888._12_4_ = uStack_89c;
    local_888.Size = uStack_8a0;
    local_888.DataPtr = local_8a8;
    bVar4 = IsNonServerFilenameAllowed(this,&local_888);
    if ((bVar4) &&
       (pIVar9 = (IFileHandle *)
                 (**(code **)((longlong)*this->LowerLevel + 0xe8))(this->LowerLevel,param_1,param_2)
       , pIVar9 != (IFileHandle *)0x0)) goto LAB_148cd1940;
  }
  bVar4 = MakeStorageServerPath(this,param_1,&local_868);
  if (bVar4) {
    lVar13 = -1;
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_8c8,local_868.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    uVar5 = local_8c8.Data.ArrayNum - 1;
    FVar3.Data = local_8c8.Data.AllocatorInstance.Data;
    if (local_8c8.Data.ArrayNum == 0) {
      uVar5 = uVar12;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,(wchar_t *)FVar3.Data);
    iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar5,&local_8c8);
    if (iVar6 == -1) {
LAB_148cd1898:
      ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
      bVar4 = false;
    }
    else {
      lVar10 = (longlong)iVar6 * 0x20 + *(longlong *)&(this->ServerToc).FilePathToIndexMap;
      puVar11 = (uint *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        puVar11 = (uint *)0x0;
      }
      if (puVar11 == (uint *)0x0) goto LAB_148cd1898;
      uVar5 = *puVar11;
      lVar10 = (longlong)(int)uVar5;
      iVar6 = (this->ServerToc).Files.ArrayNum;
      uVar7 = uVar12;
      if ((int)uVar5 < iVar6) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_8d8 = lVar10, local_8d0 = (longlong)iVar6,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pIVar9 = (IFileHandle *)(*pcVar2)();
        return pIVar9;
      }
      pFVar1 = (this->ServerToc).Files.AllocatorInstance.Data;
      local_8b8.Id._0_8_ = *(undefined8 *)(pFVar1 + lVar10 * 0x28);
      local_8b8.Id._8_4_ = *(undefined4 *)(pFVar1 + lVar10 * 0x28 + 8);
      lVar13 = *(long64 *)(pFVar1 + lVar10 * 0x28 + 0x20);
      ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
      bVar4 = true;
    }
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pIVar9 = InternalOpenFile(this,&local_8b8,lVar13,param_1);
      goto LAB_148cd1940;
    }
  }
  if ((GPreferLocalForNonAssets == false) && (this->LowerLevel != (IPlatformFile *)0x0)) {
    local_898 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar8 = wcslen(param_1);
      uVar12 = (uint)sVar8;
    }
    local_878._12_4_ = uStack_88c;
    local_878.Size = uVar12;
    local_878.DataPtr = local_898;
    uStack_890 = uVar12;
    bVar4 = IsNonServerFilenameAllowed(this,&local_878);
    if (bVar4) {
      pIVar9 = (IFileHandle *)
               (**(code **)((longlong)*this->LowerLevel + 0xe8))(this->LowerLevel,param_1,param_2);
      goto LAB_148cd1940;
    }
  }
  pIVar9 = (IFileHandle *)0x0;
LAB_148cd1940:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return pIVar9;
}

// OpenWrite @ 148cd1980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IFileHandle * __thiscall
FStorageServerPlatformFile::OpenWrite
          (FStorageServerPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  IFileHandle *pIVar6;
  IFileHandle *pIVar7;
  undefined1 auStack_8b8 [32];
  FString local_898;
  undefined4 local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1024];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_8b8;
  pIVar6 = (IFileHandle *)0x0;
  local_878.Base = local_858;
  local_878.CurPos = local_858;
  local_888 = 0;
  local_878.End = (wchar_t *)local_58;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  bVar3 = MakeStorageServerPath(this,param_1,&local_878);
  pIVar7 = pIVar6;
  if (bVar3) {
    pIVar7 = (IFileHandle *)&DAT_00000001;
    if (local_878.End < local_878.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = L'\0';
    ::FString::FString(&local_898,local_878.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar5 = local_898.Data.ArrayNum + -1;
    FVar2.Data = local_898.Data.AllocatorInstance.Data;
    if (local_898.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar4,&local_898);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    if (iVar5 != -1) {
      bVar3 = true;
      goto LAB_148cd1a9a;
    }
  }
  bVar3 = false;
LAB_148cd1a9a:
  if ((pIVar7 != (IFileHandle *)0x0) &&
     (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (pIVar1 = this->LowerLevel, pIVar1 != (IPlatformFile *)0x0)) {
    pIVar6 = (IFileHandle *)(**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,param_1,param_2,param_3)
    ;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  return pIVar6;
}

// SendGetFileListMessage @ 148cdcbb0

bool __thiscall FStorageServerPlatformFile::SendGetFileListMessage(FStorageServerPlatformFile *this)

{
  TUniquePtr<FStorageServerEngineStartupPrecache,TDefaultDelete<FStorageServerEngineStartupPrecache>_>
  TVar1;
  bool bVar2;
  FStorageServerPlatformFile *local_res8;
  code *local_18;
  FStorageServerPlatformFile **local_10;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2088,"StorageServerPlatformFileGetFileList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
               ,0x828);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2088);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerPlatformFile::SendGetFileListMessage'::__l2::<lambda_1>,void,FIoChunkId,TStringView<wchar_t>,__int64>
             ::Call;
  local_res8 = this;
  FStorageServerConnection::FileManifestRequest
            ((this->Connection).Ptr,
             (TFunctionRef<void___cdecl(FIoChunkId,TStringView<wchar_t>,__int64)> *)&local_18);
  TVar1 = GStorageServerEngineStartupPrecache;
  LOCK();
  (GStorageServerEngineStartupPrecache.Ptr)->bExitWhenComplete = (atomic<bool>)0x1;
  UNLOCK();
  (**(code **)((TVar1.Ptr)->HasWork->_padding_ + 0x10))();
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SendGetStatDataMessage @ 148cdcc70

FFileStatData * __thiscall
FStorageServerPlatformFile::SendGetStatDataMessage
          (FStorageServerPlatformFile *this,FFileStatData *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long64 lVar3;
  bool bVar4;
  long64 local_res8;
  long64 local_res20;
  long64 local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2124,"StorageServerPlatformFileGetStatData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
               ,0x84c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2124);
  }
  lVar3 = FStorageServerConnection::ChunkSizeRequest((this->Connection).Ptr,param_1);
  if (lVar3 < 0) {
    (__return_storage_ptr__->CreationTime).Ticks = 0;
    (__return_storage_ptr__->AccessTime).Ticks = 0;
    (__return_storage_ptr__->ModificationTime).Ticks = 0;
    __return_storage_ptr__->bIsDirectory = false;
    __return_storage_ptr__->bIsValid = false;
    __return_storage_ptr__->bIsReadOnly = false;
    __return_storage_ptr__->FileSize = -1;
  }
  else {
    FDateTime::Now();
    FDateTime::Now();
    FDateTime::Now();
    (__return_storage_ptr__->CreationTime).Ticks = local_res8;
    (__return_storage_ptr__->AccessTime).Ticks = local_res20;
    (__return_storage_ptr__->ModificationTime).Ticks = local_28;
    __return_storage_ptr__->FileSize = lVar3;
    puVar2 = &__return_storage_ptr__->field_0x20;
    __return_storage_ptr__->bIsDirectory = false;
    __return_storage_ptr__->bIsValid = true;
    __return_storage_ptr__->bIsReadOnly = true;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// SendMessageToServer @ 148cdcd70

bool __thiscall
FStorageServerPlatformFile::SendMessageToServer
          (FStorageServerPlatformFile *this,wchar_t *param_1,IFileServerMessageHandler *param_2)

{
  ICookOnTheFlyServerConnection *pIVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_00;
  FCookOnTheFlyResponse *pFVar7;
  size_t _Size;
  undefined8 *local_res8;
  undefined8 *local_res20;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FCookOnTheFlyMessage local_68;
  FCookOnTheFlyMessage local_40;
  
  if (((this->CookOnTheFlyServerConnection).Object == (ICookOnTheFlyServerConnection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)((longlong)*(this->CookOnTheFlyServerConnection).Object + 0x30))();
  if ((cVar5 == '\0') ||
     (iVar6 = FGenericPlatformStricmp::Stricmp(param_1,L"RecompileShaders"), iVar6 != 0)) {
    bVar3 = false;
  }
  else {
    local_40.Header.MessageStatus = Ok;
    local_40.Header.CorrelationId = 0;
    local_40.Body.ArrayNum = 0;
    local_40.Body.ArrayMax = 0;
    local_40.Header.MessageType = RecompileShaders|Request;
    local_40.Header.Timestamp = 0;
    local_40.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Cook::FCookOnTheFlyMessage::WriteBody(&local_40);
    (**(code **)((longlong)*param_2 + 8))(param_2,local_res8);
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (((this->CookOnTheFlyServerConnection).Object == (ICookOnTheFlyServerConnection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->CookOnTheFlyServerConnection).Object;
    this_00 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
              (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_78,&local_40);
    pFVar7 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_00);
    local_68.Header.MessageType = *(ECookOnTheFlyMessage *)&pFVar7->field_0x0;
    local_68.Header.MessageStatus = *(ECookOnTheFlyMessageStatus *)&pFVar7->field_0x4;
    local_68.Header.CorrelationId = *(uint *)&pFVar7->field_0x8;
    local_68.Header._12_4_ = *(undefined4 *)&pFVar7->field_0xc;
    local_68.Header.Timestamp = *(long64 *)&pFVar7->field_0x10;
    local_68.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Body.ArrayNum = *(int *)&pFVar7->field_0x20;
    _Size = (size_t)local_68.Body.ArrayNum;
    _Src = *(void **)&pFVar7->field_0x18;
    if (local_68.Body.ArrayNum == 0) {
      local_68.Body.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_68.Body.ArrayNum,0,&local_68.Body.AllocatorInstance,
                 local_68.Body.ArrayNum,&local_68.Body.ArrayMax);
      memcpy(local_68.Body.AllocatorInstance.Data,_Src,_Size);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    bVar3 = false;
    if (local_68.Header.MessageStatus == Ok) {
      UE::Cook::FCookOnTheFlyMessage::ReadBody(&local_68);
      (**(code **)((longlong)*param_2 + 0x10))(param_2,local_res20);
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
      bVar3 = local_68.Header.MessageStatus == Ok;
    }
    if (local_68.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Body.AllocatorInstance.Data);
    }
    if (local_40.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Body.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// SendReadMessage @ 148cdd130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cdd243) */

long64 __thiscall
FStorageServerPlatformFile::SendReadMessage
          (FStorageServerPlatformFile *this,uchar *param_1,FIoChunkId *param_2,long64 param_3,
          long64 param_4)

{
  int *piVar1;
  int iVar2;
  FStorageServerConnection *this_00;
  FIoBuffer *pFVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStackY_b8 [32];
  FIoBuffer local_70;
  TOptional<FIoBuffer> local_68;
  TIoStatusOr<FIoBuffer> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2140,"StorageServerPlatformFileRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
               ,0x85c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2140);
  }
  this_00 = (this->Connection).Ptr;
  pFVar3 = FIoBuffer::FIoBuffer(&local_70,Wrap,param_1,param_4);
  uVar4 = 0;
  local_68.bIsSet = true;
  local_68.TypedValue.CorePtr.Reference =
       (TRefCountPtr<FIoBuffer::BufCore>)(pFVar3->CorePtr).Reference;
  (pFVar3->CorePtr).Reference = (BufCore *)0x0;
  FStorageServerConnection::ReadChunkRequest
            (this_00,&local_58,param_2,param_3,param_4,&local_68,false);
  if (local_70.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_70.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_70.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_70.CorePtr.Reference);
      ::operator_delete((void *)local_70.CorePtr.Reference,0x20);
    }
  }
  if (local_58.StatusValue.ErrorCode == Ok) {
    uVar4 = (ulonglong)
            CONCAT14(*(uchar *)((longlong)local_58.Value.Pad + 0x18),
                     *(uint *)((longlong)local_58.Value.Pad + 8));
  }
  FIoStatus::operator=(&local_58.StatusValue,Unknown);
  if ((local_58.StatusValue.ErrorCode == Ok) && (local_58.Value.Pad != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_58.Value.Pad);
    LOCK();
    piVar1 = (int *)((longlong)local_58.Value.Pad + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_58.Value.Pad);
      ::operator_delete((void *)local_58.Value.Pad,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_58.StatusValue);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar4;
}

// SetLowerLevel @ 148cde180

void __thiscall
FStorageServerPlatformFile::SetLowerLevel(FStorageServerPlatformFile *this,IPlatformFile *param_1)

{
  this->LowerLevel = param_1;
  return;
}

// SetReadOnly @ 148cde190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerPlatformFile::SetReadOnly
          (FStorageServerPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_898 [32];
  FString local_878;
  undefined4 local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  bVar7 = false;
  local_868 = 0;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  bVar3 = MakeStorageServerPath(this,param_1,&local_858);
  if (bVar3) {
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_878,local_858.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar6 = local_878.Data.ArrayNum + -1;
    FVar2.Data = local_878.Data.AllocatorInstance.Data;
    if (local_878.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar5,&local_878);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar7 = true;
    if (iVar6 != -1) {
      bVar3 = true;
      goto LAB_148cde2a3;
    }
  }
  bVar3 = false;
LAB_148cde2a3:
  if ((bVar7) && (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    pIVar1 = this->LowerLevel;
    if ((pIVar1 == (IPlatformFile *)0x0) ||
       (cVar4 = (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,param_1,param_2), cVar4 == '\0')) {
      param_2 = false;
    }
    else {
      param_2 = true;
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return param_2;
}

// SetTimeStamp @ 148cde330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStorageServerPlatformFile::SetTimeStamp
          (FStorageServerPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
  IPlatformFile *pIVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_898 [32];
  FString local_878;
  undefined4 local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  bVar6 = false;
  local_868 = 0;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  bVar3 = MakeStorageServerPath(this,param_1,&local_858);
  if (bVar3) {
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::FString(&local_878,local_858.Base);
    AcquireSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    iVar5 = local_878.Data.ArrayNum + -1;
    FVar2.Data = local_878.Data.AllocatorInstance.Data;
    if (local_878.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&(this->ServerToc).FilePathToIndexMap,uVar4,&local_878);
    ReleaseSRWLockShared((PSRWLOCK)&(this->ServerToc).TocLock);
    bVar6 = true;
    if (iVar5 != -1) {
      bVar3 = true;
      goto LAB_148cde443;
    }
  }
  bVar3 = false;
LAB_148cde443:
  if ((bVar6) && (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (pIVar1 = this->LowerLevel, pIVar1 != (IPlatformFile *)0x0)) {
    (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,param_1,param_2.Ticks);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// ShouldBeUsed @ 148cdec30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStorageServerPlatformFile::ShouldBeUsed
          (FStorageServerPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  int *piVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FJsonValue *this_00;
  code *pcVar4;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  IPlatformFile IVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  FName *pFVar13;
  FModuleManager *this_01;
  IModuleInterface *pIVar14;
  longlong lVar15;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar16;
  TJsonReader<char8_t> *pTVar17;
  TJsonReader<char8_t> *pTVar18;
  FJsonObject *pFVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint unaff_R14D;
  uint uVar24;
  TSharedPtr<FJsonObject,1> *this_02;
  undefined1 local_res20 [8];
  undefined1 local_218 [4];
  ushort local_214 [2];
  ForAnyElementType local_210;
  undefined8 local_208;
  uint local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  uint local_1b8;
  FString local_1b0;
  FString local_1a0;
  TSharedPtr<FJsonObject,1> *local_190;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_188;
  IPlatformFile local_180;
  TSharedPtr<FJsonObject,1> local_178;
  StackState local_168;
  TRawPtrProxy<TJsonReader<char8_t>_> local_130;
  FScriptContainerElement *local_128;
  TSharedPtr<FJsonObject,1> *local_120;
  FString *local_118;
  int local_110;
  FString local_108;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TSharedRef<TJsonReader<char8_t>,1> local_a8;
  FName local_98 [2];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  pwVar12 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar12,L"SkipZenStore");
  if (bVar7) {
    return false;
  }
  pTVar18 = (TJsonReader<char8_t> *)0x0;
  uVar24 = unaff_R14D & 0xffffff00;
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = 0;
  local_200 = uVar24;
  pFVar13 = ::FName::FName(local_98,L"CookOnTheFly");
  FVar2 = *pFVar13;
  this_01 = FModuleManager::Get();
  pIVar14 = FModuleManager::LoadModuleChecked(this_01,FVar2);
  (**(code **)((longlong)*pIVar14 + 0x40))(pIVar14,&local_1c8);
  if (local_1c8 != (longlong *)0x0) {
    if ((local_1c8 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    lVar15 = (**(code **)(*local_1c8 + 0x10))();
    if (1 < *(int *)(lVar15 + 8)) {
      if ((local_1c8 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pTVar16 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*local_1c8 + 0x20))(local_1c8,&local_118);
      TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                (&this->HostAddrs,pTVar16);
      DestructItems<FString,int>(local_118,local_110);
      if (local_118 != (FString *)0x0) {
        FMemory::Free(local_118);
      }
      if ((local_1c8 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      uVar9 = (**(code **)(*local_1c8 + 0x28))();
      this->HostPort = uVar9;
      bVar7 = true;
      goto LAB_148cdf880;
    }
  }
  TryFindProjectStoreMarkerFile(this,&local_180);
  IVar6 = local_180;
  if (local_180 != (IPlatformFile)0x0) {
    local_178.Object = (FJsonObject *)0x0;
    local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar17 = ::operator_new(0x70);
    if (pTVar17 != (TJsonReader<char8_t> *)0x0) {
      (pTVar17->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar17->ParseState).ArrayNum = 0;
      (pTVar17->ParseState).ArrayMax = 0;
      pTVar17->_padding_ = (longlong)&___7__TJsonReader__Q__6B_;
      pTVar17->CurrentToken = None;
      pTVar17->Stream = (FArchive *)IVar6;
      (pTVar17->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar17->Identifier).Data.ArrayNum = 0;
      (pTVar17->Identifier).Data.ArrayMax = 0;
      (pTVar17->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar17->ErrorMessage).Data.ArrayNum = 0;
      (pTVar17->ErrorMessage).Data.ArrayMax = 0;
      (pTVar17->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar17->StringValue).Data.ArrayNum = 0;
      (pTVar17->StringValue).Data.ArrayMax = 0;
      pTVar17->NumberValue = 0.0;
      pTVar17->LineNumber = 1;
      pTVar17->CharacterNumber = 0;
      pTVar17->BoolValue = false;
      pTVar17->FinishedReadingRootObject = false;
      pTVar18 = pTVar17;
    }
    local_130.Object = pTVar18;
    TSharedRef<TJsonReader<char8_t>,1>::TSharedRef<TJsonReader<char8_t>,1><TJsonReader<char8_t>_>
              (&local_a8,&local_130);
    local_168.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Identifier.Data.ArrayNum = 0;
    local_168.Identifier.Data.ArrayMax = 0;
    local_168.Object.Object = (FJsonObject *)0x0;
    local_168.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_168.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Array.ArrayNum = 0;
    local_168.Array.ArrayMax = 0;
    bVar7 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char8_t>
                      (local_a8.Object,&local_168,None);
    if (bVar7) {
      bVar7 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_168,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data,
                 local_168.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_168.Array.AllocatorInstance.Data);
      }
      if (local_168.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Identifier.Data.AllocatorInstance.Data);
      }
      if ((!bVar7) || (local_178.Object == (FJsonObject *)0x0)) goto LAB_148cdeed4;
      local_190 = (TSharedPtr<FJsonObject,1> *)0x0;
      if ((local_178.Object == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      uStack_f0 = 9;
      local_f8 = L"zenserver";
      local_88._12_4_ = uStack_ec;
      local_88.Size = 9;
      local_88.DataPtr = L"zenserver";
      bVar7 = FJsonObject::TryGetObjectField(local_178.Object,&local_88,&local_190);
      this_02 = local_190;
      if ((bVar7) && (local_120 = local_190, local_190 != (TSharedPtr<FJsonObject,1> *)0x0)) {
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        pFVar19 = TSharedPtr<FJsonObject,1>::operator->(local_190);
        uStack_e0 = 0xd;
        local_e8 = L"operatingmode";
        local_78._12_4_ = uStack_dc;
        local_78.Size = 0xd;
        local_78.DataPtr = L"operatingmode";
        bVar7 = FJsonObject::TryGetStringField(pFVar19,&local_78,&local_1a0);
        if (bVar7) {
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_1a0.Data.ArrayNum != 0) {
            FVar21.Data = local_1a0.Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,"Filesystem");
          local_200 = (uint)(iVar10 == 0);
        }
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
        pFVar19 = TSharedPtr<FJsonObject,1>::operator->(this_02);
        uStack_d0 = 8;
        local_d8 = L"hostname";
        local_68._12_4_ = uStack_cc;
        local_68.Size = 8;
        local_68.DataPtr = L"hostname";
        bVar7 = FJsonObject::TryGetStringField(pFVar19,&local_68,&local_1d8);
        if ((bVar7) && (1 < local_1d8.Data.ArrayNum)) {
          pTVar16 = &this->HostAddrs;
          pFVar23 = (pTVar16->AllocatorInstance).Data;
          if ((pFVar23 <= (FScriptContainerElement *)&local_1d8) &&
             (((FScriptContainerElement *)&local_1d8 <
               pFVar23 + (longlong)(this->HostAddrs).ArrayMax * 0x10 &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = (this->HostAddrs).ArrayNum;
          piVar1 = &(this->HostAddrs).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar16->AllocatorInstance,piVar1);
          }
          FVar21.Data = local_1d8.Data.AllocatorInstance.Data;
          (this->HostAddrs).ArrayNum = iVar10 + 1;
          pFVar23 = (pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(undefined8 *)pFVar23 = 0;
          lVar15 = (longlong)local_1d8.Data.ArrayNum;
          *(int *)(pFVar23 + 8) = local_1d8.Data.ArrayNum;
          if (local_1d8.Data.ArrayNum == 0) {
            *(int *)(pFVar23 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,
                       local_1d8.Data.ArrayNum,(int *)(pFVar23 + 0xc));
            memcpy(*(void **)pFVar23,FVar21.Data,lVar15 * 2);
          }
        }
        local_188 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
        pFVar19 = TSharedPtr<FJsonObject,1>::operator->(this_02);
        uStack_c0 = 0xf;
        local_c8 = L"remotehostnames";
        local_58._12_4_ = uStack_bc;
        local_58.Size = 0xf;
        local_58.DataPtr = L"remotehostnames";
        bVar7 = FJsonObject::TryGetArrayField(pFVar19,&local_58,&local_188);
        pTVar5 = local_188;
        if ((bVar7) &&
           (local_188 != (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0)) {
          local_1b8 = local_188->ArrayNum;
          uVar20 = (ulonglong)(int)local_1b8;
          pFVar23 = (local_188->AllocatorInstance).Data;
          local_128 = pFVar23 + uVar20 * 0x10;
          while( true ) {
            pFVar22 = local_128;
            if (pTVar5->ArrayNum != (int)uVar20) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            this_02 = local_120;
            if (pFVar23 == pFVar22) break;
            pTVar3 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
            this_00 = *(FJsonValue **)pFVar23;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((this_00 == (FJsonValue *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            FJsonValue::AsString(this_00,&local_1f8);
            if (1 < local_1f8.Data.ArrayNum) {
              ::FString::FString(&local_108,"hostname://");
              iVar10 = local_108.Data.ArrayNum + -1;
              FVar21.Data = local_108.Data.AllocatorInstance.Data;
              if (local_108.Data.ArrayNum == 0) {
                iVar10 = 0;
                FVar21.Data = (FScriptContainerElement *)L"";
              }
              bVar7 = ::FString::StartsWith(&local_1f8,(wchar_t *)FVar21.Data,iVar10,IgnoreCase);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (bVar7) {
                if (((local_210.Data <= (FScriptContainerElement *)&local_1f8) &&
                    ((FScriptContainerElement *)&local_1f8 <
                     local_210.Data + (longlong)local_208._4_4_ * 0x10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                iVar10 = (int)local_208;
                if ((int)local_208 == local_208._4_4_) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_210,(int *)((longlong)&local_208 + 4));
                }
                pFVar22 = local_210.Data + (longlong)iVar10 * 0x10;
                local_208 = CONCAT44(local_208._4_4_,iVar10 + 1);
              }
              else {
                pTVar16 = &this->HostAddrs;
                pFVar22 = (pTVar16->AllocatorInstance).Data;
                if (((pFVar22 <= (FScriptContainerElement *)&local_1f8) &&
                    ((FScriptContainerElement *)&local_1f8 <
                     pFVar22 + (longlong)(this->HostAddrs).ArrayMax * 0x10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                iVar10 = (this->HostAddrs).ArrayNum;
                piVar1 = &(this->HostAddrs).ArrayMax;
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar16->AllocatorInstance,piVar1);
                }
                (this->HostAddrs).ArrayNum = iVar10 + 1;
                pFVar22 = (pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
              }
              iVar10 = local_1f8.Data.ArrayNum;
              FVar21.Data = local_1f8.Data.AllocatorInstance.Data;
              *(undefined8 *)pFVar22 = 0;
              *(int *)(pFVar22 + 8) = local_1f8.Data.ArrayNum;
              if (local_1f8.Data.ArrayNum == 0) {
                *(int *)(pFVar22 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_1f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar22,
                           local_1f8.Data.ArrayNum,(int *)(pFVar22 + 0xc));
                memcpy(*(void **)pFVar22,FVar21.Data,(longlong)iVar10 * 2);
              }
            }
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            uVar20 = (ulonglong)local_1b8;
            pFVar23 = pFVar23 + 0x10;
          }
        }
        local_214[0] = 0;
        pFVar19 = TSharedPtr<FJsonObject,1>::operator->(this_02);
        uStack_b0 = 8;
        local_b8 = L"hostport";
        local_48._12_4_ = uStack_ac;
        local_48.Size = 8;
        local_48.DataPtr = L"hostport";
        bVar7 = FJsonObject::TryGetNumberField(pFVar19,&local_48,local_214);
        if ((bVar7) && (local_214[0] != 0)) {
          this->HostPort = local_214[0];
        }
        if (3 < (byte)LogStorageServerPlatformFile._0_1_) {
          iVar10 = (this->HostAddrs).ArrayNum;
          bVar7 = true;
          pFVar23 = (this->HostAddrs).AllocatorInstance.Data;
          local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar22 = pFVar23 + (longlong)iVar10 * 0x10;
          local_1b0.Data.ArrayNum = 0;
          local_1b0.Data.ArrayMax = 0;
          while( true ) {
            if ((this->HostAddrs).ArrayNum != iVar10) {
              local_218[0] = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_218);
            }
            if (pFVar23 == pFVar22) break;
            if (bVar7) {
              bVar7 = false;
            }
            else {
              ::FString::AppendChars(&local_1b0,L"+",1);
            }
            iVar11 = *(int *)(pFVar23 + 8) + -1;
            if (*(int *)(pFVar23 + 8) == 0) {
              iVar11 = 0;
            }
            ::FString::AppendChars(&local_1b0,*(wchar_t **)pFVar23,iVar11);
            pFVar23 = pFVar23 + 0x10;
          }
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        uVar24 = local_200;
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          uVar24 = local_200;
        }
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data,
                 local_168.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_168.Array.AllocatorInstance.Data);
      }
      if (local_168.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Identifier.Data.AllocatorInstance.Data);
      }
LAB_148cdeed4:
      if (1 < (byte)LogStorageServerPlatformFile._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  pwVar12 = FCommandLine::Get();
  bVar7 = FParse::Value(pwVar12,L"-ZenStoreHost=",&local_1e8,true,(wchar_t **)0x0);
  if (bVar7) {
    if (3 < (byte)LogStorageServerPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    pTVar16 = &this->HostAddrs;
    iVar10 = ::FString::ParseIntoArray(&local_1e8,pTVar16,L"+",true);
    if (iVar10 == 0) {
      pFVar23 = (pTVar16->AllocatorInstance).Data;
      if (((pFVar23 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 <
           pFVar23 + (longlong)(this->HostAddrs).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar10 = (this->HostAddrs).ArrayNum;
      piVar1 = &(this->HostAddrs).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar16->AllocatorInstance,piVar1);
      }
      FVar21.Data = local_1e8.Data.AllocatorInstance.Data;
      (this->HostAddrs).ArrayNum = iVar10 + 1;
      pFVar23 = (pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)&pFVar23->field_0x0 = 0;
      lVar15 = (longlong)local_1e8.Data.ArrayNum;
      *(int *)&pFVar23[8].field_0x0 = local_1e8.Data.ArrayNum;
      if (local_1e8.Data.ArrayNum == 0) {
        *(int *)(pFVar23 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,
                   local_1e8.Data.ArrayNum,(int *)(pFVar23 + 0xc));
        memcpy(*(void **)&pFVar23->field_0x0,FVar21.Data,lVar15 * 2);
      }
    }
  }
  bVar7 = FParse::Value(param_2,L"-ZenStorePort=",&this->HostPort);
  if ((bVar7) && (3 < (byte)LogStorageServerPlatformFile._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
  }
  pTVar16 = &this->HostAddrs;
  if ((pTVar16 == (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_210) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar10 = (int)local_208;
  if ((int)local_208 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,(int)local_208,&pTVar16->AllocatorInstance,
                        &(this->HostAddrs).ArrayNum,&(this->HostAddrs).ArrayMax);
    ConstructItems<FString,FString,int>
              ((pTVar16->AllocatorInstance).Data + (longlong)iVar11 * 0x10,(FString *)local_210.Data
               ,iVar10);
  }
  if (((char)uVar24 == '\0') || (bVar7 = UE::IsUsingZenPakFileStreaming(), bVar7)) {
    bVar7 = 0 < (this->HostAddrs).ArrayNum;
  }
  else {
    bVar7 = false;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_180 != (IPlatformFile)0x0) {
    (*(code *)**(undefined8 **)local_180)(local_180,1);
  }
LAB_148cdf880:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0);
  DestructItems<FString,int>((FString *)local_210.Data,(int)local_208);
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
  return bVar7;
}

// TryFindProjectStoreMarkerFile @ 148ce0e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
FStorageServerPlatformFile::TryFindProjectStoreMarkerFile
          (FStorageServerPlatformFile *this,IPlatformFile *param_1)

{
  void *_Src;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FString *pFVar6;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> TVar7;
  IFileHandle *pIVar8;
  FArchiveFileReaderGeneric *this_00;
  long64 lVar9;
  FArchiveFileReaderGeneric *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  longlong *in_R8;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_128;
  undefined8 local_120;
  FString local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FArchive *local_c8;
  FString local_c0;
  FString local_b0 [2];
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  FScriptContainerElement *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar10 = (FArchiveFileReaderGeneric *)0x0;
  if (in_R8 == (longlong *)0x0) {
    *param_1 = (IPlatformFile)0x0;
  }
  else {
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    local_100 = in_R8;
    local_c8 = (FArchive *)param_1;
    if ((this->CustomProjectStorePath).Data.ArrayNum < 2) {
      ::FString::FString(&local_d8,L"../../../");
      FPaths::RootDir(&local_e8);
      ::FString::FString(&local_c0,"Windows");
      iVar2 = local_c0.Data.ArrayNum;
      FVar14.Data = local_c0.Data.AllocatorInstance.Data;
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      pFVar6 = FPaths::ProjectDir(local_b0);
      local_70 = 5;
      local_60 = 6;
      local_58 = FVar14.Data;
      local_88.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      iVar4 = (pFVar6->Data).ArrayNum;
      local_88.Size = iVar4 + -1;
      if (iVar4 == 0) {
        local_88.Size = 0;
      }
      local_78 = L"Saved";
      local_68 = L"Cooked";
      local_50 = iVar2 + -1;
      if (iVar2 == 0) {
        local_50 = 0;
      }
      FPaths::CombineInternal(&local_f8,&local_88,4);
      if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
      }
      if (((local_128.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < local_128.Data + (longlong)local_120._4_4_ * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FArchive *)(*pcVar1)();
        return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)TVar7.Ptr;
      }
      iVar4 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      FVar11.Data = local_d8.Data.AllocatorInstance.Data;
      pFVar12 = local_128.Data + (longlong)iVar4 * 0x10;
      *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_d8.Data.ArrayNum;
      local_120._0_4_ = iVar4 + 1;
      if (local_d8.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_d8.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar12,FVar11.Data,(longlong)local_d8.Data.ArrayNum * 2);
      }
      if (((local_128.Data <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < local_128.Data + (longlong)local_120._4_4_ * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FArchive *)(*pcVar1)();
        return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)TVar7.Ptr;
      }
      if ((int)local_120 == local_120._4_4_) {
        local_120._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      FVar11.Data = local_f8.Data.AllocatorInstance.Data;
      lVar13 = (longlong)(int)local_120;
      local_120._0_4_ = (int)local_120 + 1;
      pFVar12 = local_128.Data + lVar13 * 0x10;
      *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_f8.Data.ArrayNum;
      if (local_f8.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_f8.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar12,FVar11.Data,(longlong)local_f8.Data.ArrayNum * 2);
      }
      if (((local_128.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_128.Data + (longlong)local_120._4_4_ * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FArchive *)(*pcVar1)();
        return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)TVar7.Ptr;
      }
      if ((int)local_120 == local_120._4_4_) {
        local_120._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      FVar11.Data = local_e8.Data.AllocatorInstance.Data;
      pFVar12 = local_128.Data + (longlong)(int)local_120 * 0x10;
      local_120 = CONCAT44(local_120._4_4_,(int)local_120 + 1);
      *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_e8.Data.ArrayNum;
      if (local_e8.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_e8.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar12,FVar11.Data,(longlong)local_e8.Data.ArrayNum * 2);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      in_R8 = local_100;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        in_R8 = local_100;
      }
    }
    else {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      local_120 = CONCAT44(local_120._4_4_,iVar4 + 1);
      ::FString::FString((FString *)(local_128.Data + (longlong)iVar4 * 0x10),
                         &this->CustomProjectStorePath);
    }
    iVar4 = (int)local_120;
    pFVar12 = local_128.Data + (longlong)(int)local_120 * 0x10;
    FVar14.Data = local_128.Data;
    while( true ) {
      if ((int)local_120 != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      if (FVar14.Data == pFVar12) {
        *(undefined8 *)local_c8 = 0;
        param_1 = (IPlatformFile *)local_c8;
        goto LAB_148ce14b2;
      }
      local_118.Data.ArrayNum = *(int *)(FVar14.Data + 8);
      lVar13 = (longlong)local_118.Data.ArrayNum;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_118.Data.ArrayNum == 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0x11,0,(ForAnyElementType *)&local_118,0,&local_118.Data.ArrayMax);
      }
      else {
        _Src = *(void **)FVar14.Data;
        uVar5 = local_118.Data.ArrayNum + 0x10;
        if ((int)uVar5 < local_118.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar5,0,(ForAnyElementType *)&local_118,local_118.Data.ArrayNum,
                   &local_118.Data.ArrayMax);
        memcpy(local_118.Data.AllocatorInstance.Data,_Src,lVar13 * 2);
        in_R8 = local_100;
      }
      ::FString::PathAppend(&local_118,L"ue.projectstore",0xf);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar11.Data = local_118.Data.AllocatorInstance.Data;
      }
      pIVar8 = (IFileHandle *)(**(code **)(*in_R8 + 0xe8))(in_R8,FVar11.Data,0);
      if (pIVar8 != (IFileHandle *)0x0) break;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      FVar14.Data = FVar14.Data + 0x10;
    }
    if (3 < (byte)LogStorageServerPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    this_00 = ::operator_new(0xe8);
    if (this_00 != (FArchiveFileReaderGeneric *)0x0) {
      lVar9 = (**(code **)((longlong)*pIVar8 + 0x50))(pIVar8);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar14.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar10 = FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
                          (this_00,pIVar8,(wchar_t *)FVar14.Data,lVar9,0x400,0);
    }
    param_1 = (IPlatformFile *)local_c8;
    *(FArchiveFileReaderGeneric **)local_c8 = pFVar10;
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
LAB_148ce14b2:
    DestructItems<FString,int>((FString *)local_128.Data,(int)local_120);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)param_1;
}

// UpdateFileList @ 148ce32b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStorageServerPlatformFile::UpdateFileList(FStorageServerPlatformFile *this)

{
  bool bVar1;
  
  if ((this->Connection).Ptr != (FStorageServerConnection *)0x0) {
    FStorageServerFileSystemTOC::Clear(&this->ServerToc);
    bVar1 = SendGetFileListMessage(this);
    if (!bVar1) {
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
      return;
    }
  }
  return;
}

