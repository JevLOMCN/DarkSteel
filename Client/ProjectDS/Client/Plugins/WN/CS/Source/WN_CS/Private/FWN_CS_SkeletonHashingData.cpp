// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69c0c0

UScriptStruct * __cdecl FWN_CS_SkeletonHashingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_SkeletonHashingData,(UObject *)pUVar1,
                         L"WN_CS_SkeletonHashingData");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.OuterSingleton;
}

// FWN_CS_SkeletonHashingData @ 14a6a1da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FWN_CS_SkeletonHashingData * __thiscall
FWN_CS_SkeletonHashingData::FWN_CS_SkeletonHashingData
          (FWN_CS_SkeletonHashingData *this,USkeleton *param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FWN_CS_SkeletonHashingData *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  FReferenceSkeleton *pFVar12;
  undefined7 uVar14;
  ForAnyElementType *pFVar13;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStackY_498 [32];
  undefined1 local_468 [8];
  ForAnyElementType local_460;
  undefined8 local_458;
  void *local_450;
  ulonglong local_448;
  void *local_440;
  ulonglong local_438;
  undefined8 local_430;
  undefined8 local_428;
  FWN_CS_SkeletonHashingData *local_420;
  FString local_418;
  FArchiveState local_408;
  undefined8 local_378;
  void **local_370;
  undefined8 local_368;
  FArchiveState local_358;
  undefined8 local_2c8;
  void **local_2c0;
  undefined8 local_2b8;
  FObjectAndNameAsStringProxyArchive local_2a8;
  FObjectAndNameAsStringProxyArchive local_208;
  FReferenceSkeleton local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  this->SkeletonPathHash = 0;
  this->AllErrorDatasHash = 0;
  this->AllWarningDatasHash = 0;
  this->RefSkeletonHash = 0;
  iVar17 = 0;
  this->SocketsHash = 0;
  local_420 = this;
  if (param_1 == (USkeleton *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7986910441928392351>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_CS\\Source\\WN_CS\\Private\\WN_CS_CharacterDescs.cpp"
                       ,0x161,"InSkeleton != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FWN_CS_SkeletonHashingData *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_418,(UObject *)0x0);
  iVar6 = (pFVar8->Data).ArrayNum;
  if (iVar6 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    iVar17 = iVar6 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar9);
  this->SkeletonPathHash = uVar5;
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  pFVar12 = &param_1->ReferenceSkeleton;
  FReferenceSkeleton::FReferenceSkeleton(&local_168,pFVar12);
  local_440 = (void *)0x0;
  local_438 = 0;
  local_358._padding_ = 0;
  local_358.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_430 = 0;
  local_358.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_358.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_358.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_358._40_8_ = 0;
  local_358.ArSerializingDefaults = 0;
  local_358.ArPortFlags = 0;
  local_358.ArMaxSerializeSize = 0;
  local_358.ArUEVer.FileVersionUE4 = 0;
  local_358.ArUEVer.FileVersionUE5 = 0;
  local_358.ArLicenseeUEVer = 0;
  local_358.ArEngineVer.Major = 0;
  local_358.ArEngineVer.Minor = 0;
  local_358.ArEngineVer.Patch = 0;
  local_358.ArEngineVer._6_2_ = 0;
  local_358.ArEngineVer.Changelist = 0;
  local_358.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_358.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_358.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_358.SerializedProperty = (FProperty *)0x0;
  local_358.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_358.bCustomVersionsAreReset = false;
  local_358._129_7_ = 0;
  local_358.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_358);
  local_2c8 = 0;
  local_358._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_2c0 = &local_440;
  uVar14 = (undefined7)((ulonglong)pFVar12 >> 8);
  local_2b8 = 0;
  FArchiveState::SetIsSaving(&local_358,true);
  (**(code **)(local_358._padding_ + 0x108))(&local_358,CONCAT71(uVar14,1));
  local_358._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
            (&local_208,(FArchive *)&local_358,false);
  local_208._padding_._3_1_ = local_208._padding_._3_1_ & 0xbf;
  ::operator<<((FArchive *)&local_208,&local_168);
  pFVar13 = (ForAnyElementType *)(local_438 & 0xffffffff);
  uVar5 = (*FCrc::MemCrc32Func)(local_440,(int)local_438,0);
  this->RefSkeletonHash = uVar5;
  pFVar15 = (param_1->Sockets).AllocatorInstance.Data;
  iVar17 = (param_1->Sockets).ArrayNum;
  local_460.Data = (FScriptContainerElement *)0x0;
  local_458 = 0;
  pFVar1 = pFVar15 + (longlong)iVar17 * 8;
  while( true ) {
    if ((param_1->Sockets).ArrayNum != iVar17) {
      `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_468);
    }
    if (pFVar15 == pFVar1) break;
    pUVar2 = *(UObject **)pFVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_450 = (void *)0x0;
    local_448 = 0;
    local_408._padding_ = 0;
    local_408.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_428 = 0;
    local_408.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_408.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_408.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_408._40_8_ = 0;
    local_408.ArSerializingDefaults = 0;
    local_408.ArPortFlags = 0;
    local_408.ArMaxSerializeSize = 0;
    local_408.ArUEVer.FileVersionUE4 = 0;
    local_408.ArUEVer.FileVersionUE5 = 0;
    local_408.ArLicenseeUEVer = 0;
    local_408.ArEngineVer.Major = 0;
    local_408.ArEngineVer.Minor = 0;
    local_408.ArEngineVer.Patch = 0;
    local_408.ArEngineVer._6_2_ = 0;
    local_408.ArEngineVer.Changelist = 0;
    local_408.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_408.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_408.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_408.SerializedProperty = (FProperty *)0x0;
    local_408.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_408.bCustomVersionsAreReset = false;
    local_408._129_7_ = 0;
    local_408.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_408);
    local_370 = &local_450;
    local_378 = 0;
    local_408._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    uVar14 = (undefined7)((ulonglong)pFVar13 >> 8);
    local_368 = 0;
    FArchiveState::SetIsSaving(&local_408,true);
    (**(code **)(local_408._padding_ + 0x108))(&local_408,CONCAT71(uVar14,1));
    local_408._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
              (&local_2a8,(FArchive *)&local_408,false);
    local_2a8._padding_._3_1_ = local_2a8._padding_._3_1_ & 0xbf;
    (**(code **)(*(longlong *)pUVar2 + 200))(pUVar2,&local_2a8);
    pFVar13 = (ForAnyElementType *)(local_448 & 0xffffffff);
    uVar5 = (*FCrc::MemCrc32Func)(local_450,(int)local_448,0);
    iVar6 = (int)local_458;
    if ((int)local_458 == local_458._4_4_) {
      pFVar13 = &local_460;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar13,(int *)((longlong)&local_458 + 4));
    }
    local_458 = CONCAT44(local_458._4_4_,iVar6 + 1);
    *(uint *)(local_460.Data + (longlong)iVar6 * 4) = uVar5;
    FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_2a8);
    FArchive::~FArchive((FArchive *)&local_408);
    if (local_450 != (void *)0x0) {
      FMemory::Free(local_450);
    }
    pFVar15 = pFVar15 + 8;
  }
  uVar5 = (*FCrc::MemCrc32Func)(local_460.Data,(int)local_458 * 4,0);
  pFVar7 = local_420;
  local_420->SocketsHash = uVar5;
  local_420->AllErrorDatasHash = local_420->RefSkeletonHash;
  uVar11 = local_420->RefSkeletonHash - uVar5 ^ uVar5 >> 0xd;
  uVar10 = (-0x61c88647 - uVar5) - uVar11 ^ uVar11 << 8;
  uVar16 = (uVar5 - uVar10) - uVar11 ^ uVar10 >> 0xd;
  uVar11 = (uVar11 - uVar16) - uVar10 ^ uVar16 >> 0xc;
  uVar5 = (uVar10 - uVar11) - uVar16 ^ uVar11 << 0x10;
  uVar16 = (uVar16 - uVar5) - uVar11 ^ uVar5 >> 5;
  uVar10 = (uVar11 - uVar16) - uVar5 ^ uVar16 >> 3;
  uVar5 = (uVar5 - uVar10) - uVar16 ^ uVar10 << 10;
  local_420->AllWarningDatasHash = (uVar16 - uVar5) - uVar10 ^ uVar5 >> 0xf;
  if (local_460.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data);
  }
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_208);
  FArchive::~FArchive((FArchive *)&local_358);
  if (local_440 != (void *)0x0) {
    FMemory::Free(local_440);
  }
  FReferenceSkeleton::~FReferenceSkeleton(&local_168);
  return pFVar7;
}

