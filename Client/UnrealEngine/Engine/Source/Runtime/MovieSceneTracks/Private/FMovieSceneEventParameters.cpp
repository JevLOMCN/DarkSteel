// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// StaticStruct @ 1467287f0

UScriptStruct * __cdecl FMovieSceneEventParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEventParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEventParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventParameters,(UObject *)pUVar1,
                         L"MovieSceneEventParameters");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEventParameters.OuterSingleton;
}

// GetInstance @ 1467950c0

void __thiscall
FMovieSceneEventParameters::GetInstance(FMovieSceneEventParameters *this,FStructOnScope *param_1)

{
  FWeakObjectPtr FVar1;
  UScriptStruct *pUVar2;
  UClass *pUVar3;
  uchar *puVar4;
  int iVar5;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  FEventParameterReader local_b8;
  
  pUVar2 = (UScriptStruct *)
           FSoftObjectPath::TryLoad(&this->StructType,(FUObjectSerializeContext *)0x0);
  if (pUVar2 != (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar5 = (int)pUVar3->_padding_;
    if ((iVar5 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar3->_padding_)) goto LAB_146795114;
  }
  pUVar2 = (UScriptStruct *)0x0;
LAB_146795114:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FVar1 = local_res8;
  (**(code **)(param_1->_padding_ + 0x40))(param_1);
  (param_1->ScriptStruct).WeakPtr = FVar1;
  (**(code **)param_1->_padding_)(param_1);
  puVar4 = (uchar *)(**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (((pUVar2 != (UScriptStruct *)0x0) &&
      (iVar5 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4),
      0 < (int)(~(iVar5 - 1U) & (int)pUVar2->_padding_ + -1 + iVar5))) &&
     ((this->StructBytes).ArrayNum != 0)) {
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_b8);
    local_b8._padding_ = 0;
    local_b8._padding_ = (longlong)&___7FEventParameterReader__6B_;
    local_b8.Bytes = &this->StructBytes;
    FArchiveState::SetIsLoading((FArchiveState *)&local_b8,true);
    FArchive::UsingCustomVersion((FArchive *)&local_b8,&EventParameterVersionGUID);
    (**(code **)(local_b8._padding_ + 0x110))(&local_b8,this->PackageFileVersion);
    (**(code **)(local_b8._padding_ + 0x118))(&local_b8,this->LicenseePackageFileVersion);
    FEventParameterReader::Read(&local_b8,pUVar2,puVar4);
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  return;
}

// OverwriteWith @ 1467b0ec0

void __thiscall
FMovieSceneEventParameters::OverwriteWith(FMovieSceneEventParameters *this,uchar *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  undefined7 uVar7;
  FEventParameterWriter local_a8;
  
  if (param_1 == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstancePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneEventSection.cpp"
                       ,0x104,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = 0;
  pUVar4 = (UScriptStruct *)
           FSoftObjectPath::TryLoad(&this->StructType,(FUObjectSerializeContext *)0x0);
  if (pUVar4 != (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    lVar6 = pUVar4->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar6 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_1467b0f3a;
  }
  pUVar4 = (UScriptStruct *)0x0;
LAB_1467b0f3a:
  local_a8.Bytes = &this->StructBytes;
  if (pUVar4 == (UScriptStruct *)0x0) {
    (this->StructBytes).ArrayNum = 0;
    if ((this->StructBytes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(local_a8.Bytes)->AllocatorInstance,0,&(this->StructBytes).ArrayMax);
    }
  }
  else {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_a8);
    local_a8._padding_ = local_a8._padding_ | 0x40000;
    uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
    local_a8._padding_ = (longlong)&___7FEventParameterWriter__6B_;
    local_a8._padding_ = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_a8,true);
    (**(code **)(local_a8._padding_ + 0x108))(&local_a8,CONCAT71(uVar7,1));
    FArchive::UsingCustomVersion((FArchive *)&local_a8,&EventParameterVersionGUID);
    FEventParameterWriter::Write(&local_a8,pUVar4,param_1);
    FArchive::~FArchive((FArchive *)&local_a8);
  }
  return;
}

// Serialize @ 1467c1190

bool __thiscall
FMovieSceneEventParameters::Serialize(FMovieSceneEventParameters *this,FArchive *param_1)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID),
     7 < iVar4)) {
    (**(code **)(*(longlong *)param_1 + 0x140))(param_1,this);
  }
  else {
    local_res8 = (UObject *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,local_res8);
    pFVar1 = &(this->StructType).SubPathString;
    (this->StructType).AssetPath.PackageName = local_28.AssetPath.PackageName;
    (this->StructType).AssetPath.AssetName = local_28.AssetPath.AssetName;
    if (pFVar1 != &local_28.SubPathString) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
      (this->StructType).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
      (this->StructType).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&this->StructBytes);
  if ((param_1->field_0x28 & 1) != 0) {
    uVar3 = *(undefined4 *)&param_1->field_0x44;
    (this->PackageFileVersion).FileVersionUE4 = *(undefined4 *)&param_1->field_0x40;
    (this->PackageFileVersion).FileVersionUE5 = uVar3;
    this->LicenseePackageFileVersion = *(int *)&param_1->field_0x48;
  }
  return true;
}

