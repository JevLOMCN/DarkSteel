// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// FPackageDependencyData @ 142ad6d80

FPackageDependencyData * __thiscall
FPackageDependencyData::FPackageDependencyData
          (FPackageDependencyData *this,FPackageDependencyData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  this->PackageName = param_1->PackageName;
  FAssetPackageData::FAssetPackageData(&this->PackageData,&param_1->PackageData);
  (this->PackageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageDependencies).AllocatorInstance.Data =
       (param_1->PackageDependencies).AllocatorInstance.Data;
  (param_1->PackageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageDependencies).ArrayNum = (param_1->PackageDependencies).ArrayNum;
  (this->PackageDependencies).ArrayMax = (param_1->PackageDependencies).ArrayMax;
  (param_1->PackageDependencies).ArrayNum = 0;
  (param_1->PackageDependencies).ArrayMax = 0;
  (this->SearchableNameDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchableNameDependencies).AllocatorInstance.Data =
       (param_1->SearchableNameDependencies).AllocatorInstance.Data;
  (param_1->SearchableNameDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchableNameDependencies).ArrayNum = (param_1->SearchableNameDependencies).ArrayNum;
  (this->SearchableNameDependencies).ArrayMax = (param_1->SearchableNameDependencies).ArrayMax;
  (param_1->SearchableNameDependencies).ArrayNum = 0;
  (param_1->SearchableNameDependencies).ArrayMax = 0;
  iVar1 = (param_1->DependsNodeReservations).NameDependenciesSize;
  iVar2 = (param_1->DependsNodeReservations).ManageDependenciesSize;
  iVar3 = (param_1->DependsNodeReservations).ReferencersSize;
  (this->DependsNodeReservations).PackageDependenciesSize =
       (param_1->DependsNodeReservations).PackageDependenciesSize;
  (this->DependsNodeReservations).NameDependenciesSize = iVar1;
  (this->DependsNodeReservations).ManageDependenciesSize = iVar2;
  (this->DependsNodeReservations).ReferencersSize = iVar3;
  this->bHasPackageData = param_1->bHasPackageData;
  this->bHasDependencyData = param_1->bHasDependencyData;
  return this;
}

// FPackageDependencyData @ 142ad6e60

FPackageDependencyData * __thiscall
FPackageDependencyData::FPackageDependencyData
          (FPackageDependencyData *this,FPackageDependencyData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FSearchableNamesDependency *pFVar7;
  undefined8 uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  TMap<FIoChunkId,FIoHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>_>
  *this_00;
  
  this->PackageName = param_1->PackageName;
  uVar9 = (param_1->PackageData).CookedHash.Bytes[0];
  uVar10 = (param_1->PackageData).CookedHash.Bytes[1];
  uVar11 = (param_1->PackageData).CookedHash.Bytes[2];
  uVar12 = (param_1->PackageData).CookedHash.Bytes[3];
  uVar13 = (param_1->PackageData).CookedHash.Bytes[4];
  uVar14 = (param_1->PackageData).CookedHash.Bytes[5];
  uVar15 = (param_1->PackageData).CookedHash.Bytes[6];
  uVar8 = *(undefined8 *)((param_1->PackageData).CookedHash.Bytes + 7);
  (this->PackageData).CookedHash.bIsValid = (param_1->PackageData).CookedHash.bIsValid;
  (this->PackageData).CookedHash.Bytes[0] = uVar9;
  (this->PackageData).CookedHash.Bytes[1] = uVar10;
  (this->PackageData).CookedHash.Bytes[2] = uVar11;
  (this->PackageData).CookedHash.Bytes[3] = uVar12;
  (this->PackageData).CookedHash.Bytes[4] = uVar13;
  (this->PackageData).CookedHash.Bytes[5] = uVar14;
  (this->PackageData).CookedHash.Bytes[6] = uVar15;
  *(undefined8 *)((this->PackageData).CookedHash.Bytes + 7) = uVar8;
  (this->PackageData).CookedHash.Bytes[0xf] = (param_1->PackageData).CookedHash.Bytes[0xf];
  (this->PackageData).Extension = (param_1->PackageData).Extension;
  (this->PackageData).Flags = (param_1->PackageData).Flags;
  this_00 = &(this->PackageData).ChunkHashes;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->PackageData).ChunkHashes.field_0x8 = 0;
  *(undefined8 *)&(this->PackageData).ChunkHashes.field_0x20 = 0;
  *(undefined4 *)&(this->PackageData).ChunkHashes.field_0x28 = 0;
  *(undefined4 *)&(this->PackageData).ChunkHashes.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageData).ChunkHashes.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackageData).ChunkHashes.field_0x34 = 0;
  *(undefined8 *)&(this->PackageData).ChunkHashes.field_0x40 = 0;
  *(undefined4 *)&(this->PackageData).ChunkHashes.field_0x48 = 0;
  TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
               *)&(param_1->PackageData).ChunkHashes);
  pTVar1 = &(this->PackageData).ImportedClasses;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PackageData).ImportedClasses.ArrayMax;
  iVar5 = (param_1->PackageData).ImportedClasses.ArrayNum;
  pFVar6 = (param_1->PackageData).ImportedClasses.AllocatorInstance.Data;
  (this->PackageData).ImportedClasses.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar3 = &this->PackageDependencies;
  (this->PackageData).DiskSize = (param_1->PackageData).DiskSize;
  (this->PackageData).FileVersionUE = (param_1->PackageData).FileVersionUE;
  (this->PackageData).FileVersionLicenseeUE = (param_1->PackageData).FileVersionLicenseeUE;
  piVar2 = &(this->PackageDependencies).ArrayMax;
  iVar5 = (param_1->PackageData).CustomVersions.Ptr.ArrayNum;
  uVar16 = *(undefined4 *)&(param_1->PackageData).CustomVersions.Ptr.field_0xc;
  (this->PackageData).CustomVersions.Ptr.DataPtr = (param_1->PackageData).CustomVersions.Ptr.DataPtr
  ;
  (this->PackageData).CustomVersions.Ptr.ArrayNum = iVar5;
  *(undefined4 *)&(this->PackageData).CustomVersions.Ptr.field_0xc = uVar16;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PackageDependencies).ArrayNum;
  pFVar6 = (param_1->PackageDependencies).AllocatorInstance.Data;
  (this->PackageDependencies).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar4 = &this->SearchableNameDependencies;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SearchableNameDependencies).ArrayMax;
  iVar5 = (param_1->SearchableNameDependencies).ArrayNum;
  pFVar7 = (FSearchableNamesDependency *)
           (param_1->SearchableNameDependencies).AllocatorInstance.Data;
  (this->SearchableNameDependencies).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FPackageDependencyData::FSearchableNamesDependency,FPackageDependencyData::FSearchableNamesDependency,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar5);
  }
  iVar5 = (param_1->DependsNodeReservations).NameDependenciesSize;
  iVar17 = (param_1->DependsNodeReservations).ManageDependenciesSize;
  iVar18 = (param_1->DependsNodeReservations).ReferencersSize;
  (this->DependsNodeReservations).PackageDependenciesSize =
       (param_1->DependsNodeReservations).PackageDependenciesSize;
  (this->DependsNodeReservations).NameDependenciesSize = iVar5;
  (this->DependsNodeReservations).ManageDependenciesSize = iVar17;
  (this->DependsNodeReservations).ReferencersSize = iVar18;
  this->bHasPackageData = param_1->bHasPackageData;
  this->bHasDependencyData = param_1->bHasDependencyData;
  return this;
}

// ~FPackageDependencyData @ 142adabf0

void __thiscall FPackageDependencyData::~FPackageDependencyData(FPackageDependencyData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>
            ((FSearchableNamesDependency *)(this->SearchableNameDependencies).AllocatorInstance.Data
             ,(this->SearchableNameDependencies).ArrayNum);
  pFVar1 = (this->SearchableNameDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PackageDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PackageData).ImportedClasses.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PackageData).ChunkHashes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PackageData).ChunkHashes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PackageData).ChunkHashes);
  return;
}

// GetImportPackageName @ 142b59030

FName __thiscall
FPackageDependencyData::GetImportPackageName
          (FPackageDependencyData *this,TArrayView<FObjectImport_const_,int> *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int iVar5;
  int iVar6;
  undefined4 in_register_00000084;
  longlong *plVar7;
  uint in_R9D;
  
  plVar7 = (longlong *)CONCAT44(in_register_00000084,param_2);
  iVar5 = (int)plVar7[1];
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      if (((int)in_R9D < 0) || (iVar5 <= (int)in_R9D)) break;
      if (((int)in_R9D < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
      uVar1 = *(uint *)(*plVar7 + 8 + (longlong)(int)in_R9D * 0x38);
      if (uVar1 == 0) {
        param_1->DataPtr = *(FObjectImport **)(*plVar7 + (longlong)(int)in_R9D * 0x38);
        return (FName)param_1;
      }
      if (-1 < (int)uVar1) break;
      iVar5 = (int)plVar7[1];
      iVar6 = iVar6 + 1;
      in_R9D = ~uVar1;
    } while (iVar6 < iVar5);
  }
  param_1->DataPtr = (FObjectImport *)0x0;
  return (FName)param_1;
}

// LoadDependenciesFromPackageHeader @ 142b5be80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FPackageDependencyData::LoadDependenciesFromPackageHeader
          (FPackageDependencyData *this,FName param_1,TArrayView<FObjectImport_const_,int> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,TBitArray<FDefaultBitArrayAllocator> *param_5,
          TBitArray<FDefaultBitArrayAllocator> *param_6,
          TArray<TTuple<FName,UE::AssetRegistry::EExtraDependencyFlags>,TSizedDefaultAllocator<32>_>
          *param_7)

{
  int *piVar1;
  TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  ForElementType<unsigned_int> FVar4;
  FScriptContainerElement *pFVar5;
  FSearchableNamesDependency *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FPackageDependencyData *pFVar12;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  size_t sVar18;
  FString *pFVar19;
  FName *pFVar20;
  ForElementType<unsigned_int> FVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  FName *pFVar26;
  uint uVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  FName FVar29;
  int iVar30;
  TArrayView<FObjectImport_const_,int> *pTVar31;
  wchar_t *pwVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar36;
  int *piVar37;
  FPackageDependencyData *pFVar38;
  TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *pTVar39;
  FName local_res10 [3];
  undefined1 auStackY_1238 [32];
  undefined1 local_11e8;
  undefined1 local_11e7;
  FIdentityFunctor local_11e6 [2];
  int local_11e4;
  FName local_11e0;
  ulonglong local_11d8;
  TBitArray<FDefaultBitArrayAllocator> *local_11d0;
  FName local_11c8;
  wchar_t *local_11b8;
  int iStack_11b0;
  int iStack_11ac;
  FName local_11a8;
  uint local_11a0;
  FName local_119c;
  undefined4 local_1194;
  FName local_1190;
  undefined4 local_1188;
  FName local_1180;
  FPackageDependencyData *local_1178;
  TArrayView<FObjectImport_const_,int> *local_1170;
  undefined8 local_1168;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_1160;
  wchar_t *local_1158;
  int iStack_1150;
  undefined4 uStack_114c;
  int local_1148;
  int local_1144;
  FName local_1140;
  FName local_1138;
  FName local_1130;
  FString local_1128;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_1118;
  int iStack_1110;
  undefined4 uStack_110c;
  undefined1 *local_1108;
  undefined4 uStack_1100;
  int iStack_10fc;
  int local_10f8;
  undefined4 uStack_10f4;
  int iStack_10f0;
  undefined4 uStack_10ec;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_10e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_10e0;
  undefined8 uStack_10c0;
  FName local_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 local_10a0;
  wchar_t *local_1098;
  int iStack_1090;
  undefined4 uStack_108c;
  wchar_t *local_1088;
  int iStack_1080;
  undefined4 uStack_107c;
  FObjectImport *local_1078;
  undefined8 uStack_1070;
  wchar_t *local_1068;
  int iStack_1060;
  undefined4 uStack_105c;
  wchar_t *local_1058;
  int iStack_1050;
  undefined4 uStack_104c;
  FObjectImport *local_1048;
  undefined8 uStack_1040;
  wchar_t *local_1038;
  int iStack_1030;
  undefined4 uStack_102c;
  TStringView<wchar_t> local_1028;
  TStringView<wchar_t> local_1018;
  TStringView<wchar_t> local_1008;
  TStringView<wchar_t> local_ff8;
  TStringView<wchar_t> local_fe8;
  TStringView<wchar_t> local_fd8;
  TStringView<wchar_t> local_fc8;
  TStringView<wchar_t> local_fb8;
  TStringView<wchar_t> local_fa8;
  TStringView<wchar_t> local_f98;
  TStringView<wchar_t> local_f88;
  FString local_f78;
  FName local_f68 [2];
  TStringView<wchar_t> local_f58;
  TStringView<wchar_t> local_f48;
  TStringView<wchar_t> local_f38 [2];
  undefined4 local_f0c;
  TStringBuilderBase<wchar_t> local_f08;
  wchar_t local_ee8 [256];
  TStringBuilderBase<wchar_t> local_ce8;
  wchar_t local_cc8 [256];
  TStringBuilderBase<wchar_t> local_ac8;
  wchar_t local_aa8 [256];
  TStringBuilderBase<wchar_t> local_8a8;
  wchar_t local_888 [1035];
  wchar_t local_72 [5];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1238;
  local_1160 = param_4;
  local_res10[0] = param_1;
  local_11d0 = (TBitArray<FDefaultBitArrayAllocator> *)param_3;
  local_1178 = this;
  local_1170 = param_2;
  local_1068 = FPackagePath::GetExternalActorsFolderName();
  iVar16 = 0;
  if (local_1068 != (wchar_t *)0x0) {
    sVar18 = wcslen(local_1068);
    iVar16 = (int)sVar18;
  }
  local_8a8.Base = local_888;
  local_8a8.CurPos = local_888;
  local_8a8.bIsDynamic = false;
  local_8a8.bIsExternal = false;
  local_8a8.End = local_72;
  iStack_1060 = iVar16;
  ::FName::AppendString(local_res10,&local_8a8);
  iVar30 = 0;
  local_f58._12_4_ = uStack_105c;
  local_f58.Size = iStack_1060;
  pwVar25 = (wchar_t *)0x0;
  iStack_1050 = (int)((longlong)local_8a8.CurPos - (longlong)local_8a8.Base >> 1);
  local_1058 = local_8a8.Base;
  local_f48._12_4_ = uStack_104c;
  local_f48.Size = iStack_1050;
  local_f48.DataPtr = local_8a8.Base;
  local_11e4 = 0;
  local_f58.DataPtr = local_1068;
  local_11d8 = 1;
  iVar15 = UE::String::FindFirst(&local_f48,&local_f58,IgnoreCase);
  pTVar31 = local_1170;
  if (iVar15 != -1) {
    iVar22 = (int)((longlong)local_8a8.CurPos - (longlong)local_8a8.Base >> 1);
    iVar15 = (iVar22 - iVar16) - iVar15;
    iVar16 = iVar22;
    if (iVar15 < iVar22) {
      iVar16 = iVar15;
    }
    iVar30 = 0;
    if (0 < iVar16) {
      iVar30 = iVar16;
    }
    pwVar25 = local_8a8.Base + ((longlong)iVar22 - (longlong)iVar30);
    local_11e4 = iVar30;
  }
  pTVar39 = &this->PackageDependencies;
  iStack_11ac = local_1128.Data.ArrayMax;
  iVar16 = local_1170->ArrayNum;
  uVar33 = param_3->ArrayNum + iVar16;
  iStack_11b0 = iVar30;
  local_11b8 = pwVar25;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  piVar37 = &(this->PackageDependencies).ArrayNum;
  piVar1 = &(this->PackageDependencies).ArrayMax;
  *piVar37 = 0;
  if ((this->PackageDependencies).ArrayMax < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar33,&pTVar39->AllocatorInstance,0,piVar1);
  }
  if ((iVar16 != param_5->NumBits) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ImportMap.Num() == ImportUsedInGame.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageDependencyData.cpp"
                          ,0x53,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pwVar25 = local_11b8;
  uVar8._4_4_ = iStack_11ac;
  uVar8._0_4_ = iStack_11b0;
  uVar33 = 0;
  if (0 < pTVar31->ArrayNum) {
    do {
      local_1048 = pTVar31->DataPtr;
      uStack_1040 = *(undefined8 *)&pTVar31->ArrayNum;
      iVar16 = pTVar31->ArrayNum;
      iVar30 = 0;
      uVar27 = uVar33;
      if (0 < iVar16) {
        do {
          if (((int)uVar27 < 0) || (iVar16 <= (int)uVar27)) break;
          uVar17 = 0;
          if ((int)uVar27 < iVar16) {
            uVar17 = ~uVar27 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = local_1048[(int)uVar27]._padding_;
          if (uVar17 == 0) {
            local_1180 = (FName)local_1048[(int)uVar27]._padding_;
            goto LAB_142b5c145;
          }
          if (-1 < (int)uVar17) break;
          iVar30 = iVar30 + 1;
          uVar27 = ~uVar17;
        } while (iVar30 < iVar16);
      }
      local_1180.ComparisonIndex.Value = 0;
      local_1180.Number = 0;
LAB_142b5c145:
      FVar29 = local_1180;
      if ((((int)uVar33 < 0) || (param_5->NumBits <= (int)uVar33)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = (param_5->AllocatorInstance).SecondaryData;
      FVar21 = (ForElementType<unsigned_int>)param_5;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = FVar4;
      }
      uVar27 = uVar33;
      if ((int)uVar33 < 0) {
        uVar27 = uVar33 + 0x1f;
      }
      bVar14 = (*(uint *)((longlong)FVar21 + (longlong)((int)uVar27 >> 5) * 4) >> (uVar33 & 0x1f) &
               1) != 0;
      if (local_11e4 != 0) {
        local_f08.Base = local_ee8;
        local_f08.CurPos = local_ee8;
        local_f08.bIsDynamic = false;
        local_f08.bIsExternal = false;
        local_f08.End = (wchar_t *)&local_ce8;
        local_1140 = FVar29;
        ::FName::AppendString(&local_1140,&local_f08);
        local_1038 = local_f08.Base;
        iStack_1030 = (int)((longlong)local_f08.CurPos - (longlong)local_f08.Base >> 1);
        local_f38[0]._12_4_ = uStack_102c;
        local_f38[0].Size = iStack_1030;
        local_f38[0].DataPtr = local_f08.Base;
        FPathViews::GetMountPointNameFromPath(&local_1028,local_f38,(bool *)0x0,true);
        local_1008.DataPtr = pwVar25;
        iVar15 = (int)((longlong)local_f08.CurPos - (longlong)local_f08.Base >> 1);
        iVar30 = (iVar15 - local_1028.Size) + -1;
        iVar16 = iVar15;
        if (iVar30 < iVar15) {
          iVar16 = iVar30;
        }
        iStack_11b0 = 0;
        if (0 < iVar16) {
          iStack_11b0 = iVar16;
        }
        local_11b8 = local_f08.Base + ((longlong)iVar15 - (longlong)iStack_11b0);
        local_1018._12_4_ = iStack_11ac;
        local_1018.Size = iStack_11b0;
        local_1018.DataPtr = local_11b8;
        local_1008._8_8_ = uVar8;
        iVar16 = UE::String::FindFirst(&local_1008,&local_1018,(Type)local_11d8);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f08);
        bVar14 = bVar14 && iVar16 == -1;
      }
      pFVar20 = (FName *)(pTVar39->AllocatorInstance).Data;
      local_11a0 = CONCAT31(local_11a0._1_3_,bVar14 * '\x02') | 1;
      local_11a8 = FVar29;
      if (((pFVar20 <= &local_11a8) &&
          (&local_11a8 < (FName *)((longlong)pFVar20 + (longlong)*piVar1 * 0xc))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = *piVar37;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar39->AllocatorInstance,piVar1);
      }
      uVar33 = uVar33 + 1;
      *piVar37 = iVar16 + 1;
      pFVar5 = (pTVar39->AllocatorInstance).Data;
      *(FName *)(pFVar5 + (longlong)iVar16 * 0xc) = local_11a8;
      *(uint *)(pFVar5 + (longlong)iVar16 * 0xc + 8) = local_11a0;
      pTVar31 = local_1170;
    } while ((int)uVar33 < local_1170->ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>
            ((FPackageDependency *)(pTVar39->AllocatorInstance).Data,*piVar37,local_11e6[0],
             (FSortPackageDependency *)local_11e6);
  pFVar12 = local_1178;
  uVar33 = *piVar37;
  pFVar5 = (pTVar39->AllocatorInstance).Data;
  if (1 < (int)uVar33) {
    pFVar23 = pFVar5;
    pFVar10 = pFVar5;
    while (pFVar11 = pFVar10, pFVar9 = pFVar23, pFVar10 = pFVar11 + 0xc,
          pFVar10 != pFVar5 + (longlong)(int)uVar33 * 0xc) {
      if (((*(longlong *)pFVar9 != *(longlong *)pFVar10) ||
          (pFVar23 = pFVar9, pFVar9[8] != pFVar11[0x14])) &&
         (pFVar23 = pFVar9 + 0xc, pFVar23 != pFVar10)) {
        *(longlong *)pFVar23 = *(longlong *)pFVar10;
        *(undefined4 *)(pFVar9 + 0x14) = *(undefined4 *)(pFVar11 + 0x14);
      }
    }
    lVar24 = (longlong)(pFVar9 + (0xc - (longlong)pFVar5)) / 6 +
             ((longlong)(pFVar9 + (0xc - (longlong)pFVar5)) >> 0x3f);
    uVar33 = (int)(lVar24 >> 1) - (int)(lVar24 >> 0x3f);
  }
  pTVar39 = &local_1178->PackageDependencies;
  iVar16 = (local_1178->PackageDependencies).ArrayNum;
  if (iVar16 < (int)uVar33) {
    iVar30 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,uVar33 - iVar16,&pTVar39->AllocatorInstance,piVar37,piVar1);
    DefaultConstructItems<FPackageDependencyData::FPackageDependency,int>
              ((pTVar39->AllocatorInstance).Data + (longlong)iVar30 * 0xc,uVar33 - iVar16);
  }
  else {
    if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
    }
    if ((int)uVar33 < iVar16) {
      uVar27 = iVar16 - uVar33;
      if (((int)(uVar27 | uVar33) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar27 != 0) {
        pFVar5 = (pTVar39->AllocatorInstance).Data + (longlong)(int)uVar33 * 0xc;
        iVar16 = ((pFVar12->PackageDependencies).ArrayNum - uVar27) - uVar33;
        if (iVar16 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar27 * 0xc,(longlong)iVar16 * 0xc);
        }
        piVar37 = &(pFVar12->PackageDependencies).ArrayNum;
        *piVar37 = *piVar37 - uVar27;
      }
    }
  }
  pTVar28 = local_11d0;
  if ((*(int *)((longlong)local_11d0 + 8) != param_6->NumBits) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoftPackageReferenceList.Num() == SoftPackageUsedInGame.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageDependencyData.cpp"
                          ,0x69,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = *(int *)((longlong)pTVar28 + 8);
  uVar33 = 0;
  pFVar38 = pFVar12;
  if (0 < iVar16) {
    pTVar39 = &pFVar12->PackageDependencies;
    local_11b8 = (wchar_t *)0x0;
    uVar27 = (Type)local_11d8;
    do {
      pwVar32 = local_11b8;
      uVar17 = 0;
      if ((int)uVar33 < iVar16) {
        uVar17 = ~uVar33 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1168 = 0;
      local_10b0 = 0;
      FVar29 = *(FName *)((longlong)pwVar32 +
                         (longlong)
                         (((TArray<FName,TSizedDefaultAllocator<32>_> *)pTVar28)->AllocatorInstance)
                         .Data);
      local_10a8 = 0;
      local_10a0 = 0;
      local_10b8 = FVar29;
      if ((((int)uVar33 < 0) || (param_6->NumBits <= (int)uVar33)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = (param_6->AllocatorInstance).SecondaryData;
      FVar21 = (ForElementType<unsigned_int>)param_6;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = FVar4;
      }
      uVar17 = uVar33;
      if ((int)uVar33 < 0) {
        uVar17 = uVar33 + 0x1f;
      }
      bVar14 = (*(uint *)((longlong)FVar21 + (longlong)((int)uVar17 >> 5) * 4) & uVar27) != 0;
      if (local_11e4 != 0) {
        local_ce8.Base = local_cc8;
        local_ce8.CurPos = local_cc8;
        local_ce8.bIsDynamic = false;
        local_ce8.bIsExternal = false;
        local_ce8.End = (wchar_t *)&local_ac8;
        local_1138 = FVar29;
        ::FName::AppendString(&local_1138,&local_ce8);
        local_1098 = local_ce8.Base;
        iStack_1090 = (int)((longlong)local_ce8.CurPos - (longlong)local_ce8.Base >> 1);
        local_ff8._12_4_ = uStack_108c;
        local_ff8.Size = iStack_1090;
        local_ff8.DataPtr = local_ce8.Base;
        FPathViews::GetMountPointNameFromPath(&local_fe8,&local_ff8,(bool *)0x0,true);
        local_fc8.DataPtr = pwVar25;
        iVar15 = (int)((longlong)local_ce8.CurPos - (longlong)local_ce8.Base >> 1);
        iVar30 = (iVar15 - local_fe8.Size) + -1;
        iVar16 = iVar15;
        if (iVar30 < iVar15) {
          iVar16 = iVar30;
        }
        iStack_1150 = 0;
        if (0 < iVar16) {
          iStack_1150 = iVar16;
        }
        local_1158 = local_ce8.Base + ((longlong)iVar15 - (longlong)iStack_1150);
        local_fd8._12_4_ = uStack_114c;
        local_fd8.Size = iStack_1150;
        local_fd8.DataPtr = local_1158;
        local_fc8._8_8_ = uVar8;
        iVar16 = UE::String::FindFirst(&local_fc8,&local_fd8,(Type)local_11d8);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ce8);
        bVar14 = bVar14 && iVar16 == -1;
        pwVar32 = local_11b8;
      }
      pFVar20 = (FName *)(pTVar39->AllocatorInstance).Data;
      local_1194 = CONCAT31(local_1194._1_3_,bVar14 * '\x02');
      local_119c = FVar29;
      if (((pFVar20 <= &local_119c) &&
          (&local_119c <
           (FName *)((longlong)pFVar20 + (longlong)(pFVar12->PackageDependencies).ArrayMax * 0xc)))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = (pFVar12->PackageDependencies).ArrayNum;
      if (iVar16 == (pFVar12->PackageDependencies).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar39->AllocatorInstance,
                            &(pFVar12->PackageDependencies).ArrayMax);
      }
      local_11b8 = pwVar32 + 4;
      (pFVar12->PackageDependencies).ArrayNum = iVar16 + 1;
      uVar33 = uVar33 + 1;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
      pFVar5 = (pTVar39->AllocatorInstance).Data;
      *(FName *)(pFVar5 + (longlong)iVar16 * 0xc) = local_119c;
      *(undefined4 *)(pFVar5 + (longlong)iVar16 * 0xc + 8) = local_1194;
      iVar16 = *(int *)((longlong)local_11d0 + 8);
      pTVar28 = local_11d0;
      pFVar38 = local_1178;
    } while ((int)uVar33 < iVar16);
  }
  pTVar39 = &pFVar38->PackageDependencies;
  iVar16 = param_7->ArrayNum;
  pFVar20 = (FName *)(param_7->AllocatorInstance).Data;
  local_11d0 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pFVar20 + (longlong)iVar16 * 0xc);
  while( true ) {
    pTVar28 = local_11d0;
    if (param_7->ArrayNum != iVar16) {
      local_11e8 = 0;
      `TCheckedPointerIterator<TTuple<FName,enum_UE::AssetRegistry::EExtraDependencyFlags>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_11e8);
    }
    pTVar36 = local_1160;
    pFVar12 = local_1178;
    if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar20 == pTVar28) break;
    uVar33 = pFVar20[1].ComparisonIndex.Value;
    FVar29 = *pFVar20;
    if (local_11e4 == 0) {
LAB_142b5c9d0:
      pFVar26 = (FName *)(pTVar39->AllocatorInstance).Data;
      local_1188 = CONCAT31(local_1188._1_3_,((byte)uVar33 & 1) << 2);
      local_1190 = FVar29;
      if (((pFVar26 <= &local_1190) &&
          (&local_1190 <
           (FName *)((longlong)pFVar26 + (longlong)(pFVar38->PackageDependencies).ArrayMax * 0xc)))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar30 = (pFVar38->PackageDependencies).ArrayNum;
      if (iVar30 == (pFVar38->PackageDependencies).ArrayMax) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar39->AllocatorInstance,
                            &(pFVar38->PackageDependencies).ArrayMax);
      }
      (pFVar38->PackageDependencies).ArrayNum = iVar30 + 1;
      pFVar5 = (pTVar39->AllocatorInstance).Data;
      *(FName *)(pFVar5 + (longlong)iVar30 * 0xc) = local_1190;
      *(undefined4 *)(pFVar5 + (longlong)iVar30 * 0xc + 8) = local_1188;
    }
    else {
      local_ac8.Base = local_aa8;
      local_ac8.CurPos = local_aa8;
      local_ac8.bIsDynamic = false;
      local_ac8.bIsExternal = false;
      local_ac8.End = (wchar_t *)&local_8a8;
      local_1130 = FVar29;
      ::FName::AppendString(&local_1130,&local_ac8);
      local_1088 = local_ac8.Base;
      iStack_1080 = (int)((longlong)local_ac8.CurPos - (longlong)local_ac8.Base >> 1);
      local_fb8._12_4_ = uStack_107c;
      local_fb8.Size = iStack_1080;
      local_fb8.DataPtr = local_ac8.Base;
      FPathViews::GetMountPointNameFromPath(&local_fa8,&local_fb8,(bool *)0x0,true);
      local_f88.DataPtr = pwVar25;
      iVar22 = (int)((longlong)local_ac8.CurPos - (longlong)local_ac8.Base >> 1);
      iVar15 = (iVar22 - local_fa8.Size) + -1;
      iVar30 = iVar22;
      if (iVar15 < iVar22) {
        iVar30 = iVar15;
      }
      iStack_1150 = 0;
      if (0 < iVar30) {
        iStack_1150 = iVar30;
      }
      local_1158 = local_ac8.Base + ((longlong)iVar22 - (longlong)iStack_1150);
      local_f98._12_4_ = uStack_114c;
      local_f98.Size = iStack_1150;
      local_f98.DataPtr = local_1158;
      local_f88._8_8_ = uVar8;
      iVar30 = UE::String::FindFirst(&local_f88,&local_f98,(Type)local_11d8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ac8);
      if (iVar30 == -1) goto LAB_142b5c9d0;
    }
    pFVar20 = (FName *)&pFVar20[1].Number;
  }
  uVar33 = *(int *)&local_1160->field_0x8 - *(int *)&local_1160->field_0x34;
  pTVar2 = &local_1178->SearchableNameDependencies;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  piVar37 = &(local_1178->SearchableNameDependencies).ArrayMax;
  pFVar6 = (FSearchableNamesDependency *)(pTVar2->AllocatorInstance).Data;
  iVar16 = (local_1178->SearchableNameDependencies).ArrayNum;
  if (*piVar37 < (int)uVar33) {
    DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>(pFVar6,iVar16);
    (pFVar12->SearchableNameDependencies).ArrayNum = 0;
    if (*piVar37 != uVar33) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar33,&pTVar2->AllocatorInstance,0,piVar37);
    }
  }
  else {
    DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>(pFVar6,iVar16);
    (pFVar12->SearchableNameDependencies).ArrayNum = 0;
  }
  iVar16 = *(int *)&pTVar36->field_0x28;
  local_1108 = &pTVar36->field_0x10;
  iStack_1110 = 0;
  local_10f8 = 0;
  iStack_10fc = 0;
  if (iVar16 != 0) {
    puVar35 = *(uint **)&pTVar36->field_0x20;
    if (*(uint **)&pTVar36->field_0x20 == (uint *)0x0) {
      puVar35 = (uint *)local_1108;
    }
    uVar33 = *puVar35;
    while (uVar33 == 0) {
      lVar24 = (longlong)iStack_1110;
      local_10f8 = local_10f8 + 0x20;
      iStack_1110 = iStack_1110 + 1;
      iStack_10fc = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1110) goto LAB_142b5cb81;
      uVar33 = puVar35[lVar24 + 1];
    }
    local_11d8 = (ulonglong)(-uVar33 & uVar33);
    uVar3 = local_11d8 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_1148 = (int)lVar24;
    iStack_10fc = local_1148 + -1 + local_10f8;
    if (iVar16 < iStack_10fc) {
      iStack_10fc = iVar16;
    }
  }
LAB_142b5cb81:
  uVar33 = *(uint *)&pTVar36->field_0x28;
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar36->field_0x10;
  uStack_110c = (undefined4)local_11d8;
  uStack_10f4 = local_f0c;
  iStack_10f0 = *(int *)&pTVar36->field_0x8 - *(int *)&pTVar36->field_0x34;
  uStack_1100 = 0xffffffff;
  uVar27 = uVar33 & 0xffffffe0;
  TStack_10e0.CurrentBitIndex = iStack_10fc;
  TStack_10e0.UnvisitedBitMask = 0xffffffff;
  local_1118 = pTVar36;
  TStack_10e0._padding_ = CONCAT44(uStack_110c,iStack_1110);
  local_10e8 = pTVar36;
  iVar30 = (int)uVar33 >> 5;
  TStack_10e0._28_4_ = local_f0c;
  TStack_10e0.BaseBitIndex = local_10f8;
  uStack_10c0 = CONCAT44(uStack_10ec,iStack_10f0);
  local_11d0 = pTVar28;
  TStack_10e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1108;
  if ((((int)uVar33 < 0) || (iVar16 < (int)uVar33)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar17 = *(uint *)&pTVar36->field_0x28;
  if (uVar33 != uVar17) {
    puVar34 = (undefined1 *)pTVar28;
    if (*(undefined1 **)&pTVar36->field_0x20 != (undefined1 *)0x0) {
      puVar34 = *(undefined1 **)&pTVar36->field_0x20;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar30 * 4);
    while (uVar33 == 0) {
      lVar24 = (longlong)iVar30;
      uVar27 = uVar27 + 0x20;
      iVar30 = iVar30 + 1;
      uVar33 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
      goto LAB_142b5cc8f;
      uVar33 = *(uint *)(puVar34 + lVar24 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_1144 = (int)lVar24;
    uVar33 = local_1144 + -1 + uVar27;
    if ((int)uVar17 < (int)uVar33) {
      uVar33 = uVar17;
    }
  }
LAB_142b5cc8f:
  do {
    pTVar13 = local_10e8;
    if (*(int *)&local_10e8->field_0x8 - *(int *)&local_10e8->field_0x34 != (int)uStack_10c0) {
      local_11e7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_11e7);
    }
    pTVar31 = local_1170;
    if (((TStack_10e0.CurrentBitIndex == uVar33) && (TStack_10e0.Array == pTVar28)) &&
       (pTVar13 == pTVar36)) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8a8);
      return;
    }
    iVar30 = 0;
    piVar37 = (int *)((longlong)TStack_10e0.CurrentBitIndex * 0x20 + *(longlong *)pTVar13);
    local_11c8.ComparisonIndex.Value = 0;
    local_11c8.Number = 0;
    local_11e0.ComparisonIndex.Value = 0;
    local_11e0.Number = 0;
    iVar16 = *piVar37;
    if (iVar16 < 1) {
      if (((iVar16 < 0) && (uVar27 = -iVar16 - 1, -1 < (int)uVar27)) &&
         ((int)uVar27 < local_1170->ArrayNum)) {
        if (((int)uVar27 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pTVar31->DataPtr[(int)uVar27]._padding_ != 0) {
          local_11c8 = (FName)pTVar31->DataPtr[(int)uVar27]._padding_;
        }
        FVar29 = local_11c8;
        local_1078 = pTVar31->DataPtr;
        uStack_1070 = *(undefined8 *)&pTVar31->ArrayNum;
        iVar16 = pTVar31->ArrayNum;
        if (0 < iVar16) {
          do {
            if (((int)uVar27 < 0) || (iVar16 <= (int)uVar27)) break;
            uVar17 = 0;
            if ((int)uVar27 < iVar16) {
              uVar17 = ~uVar27 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = local_1078[(int)uVar27]._padding_;
            if (uVar17 == 0) {
              local_11e0 = (FName)local_1078[(int)uVar27]._padding_;
              if (local_11e0 == (FName)0x0) goto LAB_142b5ce8e;
              goto LAB_142b5cebe;
            }
            if (-1 < (int)uVar17) break;
            iVar30 = iVar30 + 1;
            uVar27 = ~uVar17;
          } while (iVar30 < iVar16);
        }
        local_11e0.ComparisonIndex.Value = 0;
        local_11e0.Number = 0;
      }
    }
    else {
      local_11e0 = local_res10[0];
      pFVar19 = ::FName::ToString(&local_11e0,&local_1128);
      pFVar19 = FPackageName::GetLongPackageAssetName(&local_f78,pFVar19);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      pFVar20 = ::FName::FName(local_f68,pwVar25);
      FVar29 = *pFVar20;
      local_11c8 = FVar29;
      if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f78.Data.AllocatorInstance.Data);
      }
      if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1128.Data.AllocatorInstance.Data);
      }
LAB_142b5cebe:
      iVar16 = (pFVar12->SearchableNameDependencies).ArrayNum;
      if (iVar16 == (pFVar12->SearchableNameDependencies).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(pFVar12->SearchableNameDependencies).AllocatorInstance,
                            &(pFVar12->SearchableNameDependencies).ArrayMax);
      }
      (pFVar12->SearchableNameDependencies).ArrayNum = iVar16 + 1;
      pFVar26 = (FName *)((pFVar12->SearchableNameDependencies).AllocatorInstance.Data +
                         (longlong)iVar16 * 0x20);
      pFVar26[2].ComparisonIndex = 0;
      pFVar26[2].Number = 0;
      pFVar26[3].Number = 0;
      pFVar26->ComparisonIndex = 0;
      pFVar26->Number = 0;
      pFVar20 = pFVar26 + 2;
      pFVar26[1].ComparisonIndex = 0;
      pFVar26[1].Number = 0;
      pFVar26[3].ComparisonIndex.Value = 0;
      *pFVar26 = local_11e0;
      pFVar26[1] = FVar29;
      if (pFVar20 != (FName *)(piVar37 + 2)) {
        uVar27 = piVar37[4];
        FVar29 = *(FName *)(piVar37 + 2);
        uVar17 = pFVar26[3].Number;
        pFVar26[3].ComparisonIndex.Value = uVar27;
        if ((uVar27 == 0) && (uVar17 == 0)) {
          pFVar26[3].Number = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar27,uVar17,(ForAnyElementType *)pFVar20,uVar27,(int *)&pFVar26[3].Number
                    );
          if (uVar27 != 0) {
            memcpy((void *)*pFVar20,(void *)FVar29,(longlong)(int)uVar27 << 3);
          }
        }
      }
    }
LAB_142b5ce8e:
    TStack_10e0.UnvisitedBitMask = TStack_10e0.UnvisitedBitMask & ~TStack_10e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_10e0);
    pTVar36 = local_1160;
    pTVar28 = local_11d0;
  } while( true );
}

