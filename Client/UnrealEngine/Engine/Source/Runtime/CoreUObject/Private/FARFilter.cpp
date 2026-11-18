// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// StaticStruct @ 141e4f140

UScriptStruct * __cdecl FARFilter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARFilter.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FARFilter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARFilter,(UObject *)pUVar1,L"ARFilter");
  }
  return Z_Registration_Info_UScriptStruct_FARFilter.OuterSingleton;
}

// FARFilter @ 141e565a0

FARFilter * __thiscall FARFilter::FARFilter(FARFilter *this)

{
  (this->PackageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageNames).ArrayNum = 0;
  (this->PackageNames).ArrayMax = 0;
  (this->PackagePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackagePaths).ArrayNum = 0;
  (this->PackagePaths).ArrayMax = 0;
  (this->SoftObjectPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftObjectPaths).ArrayNum = 0;
  (this->SoftObjectPaths).ArrayMax = 0;
  (this->ClassNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassNames).ArrayNum = 0;
  (this->ClassNames).ArrayMax = 0;
  (this->ClassPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassPaths).ArrayNum = 0;
  (this->ClassPaths).ArrayMax = 0;
  *(undefined8 *)&this->TagsAndValues = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x8 = 0;
  *(undefined8 *)&(this->TagsAndValues).field_0x20 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x28 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagsAndValues).field_0x34 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TagsAndValues).field_0x40 = 0;
  *(undefined4 *)&(this->TagsAndValues).field_0x48 = 0;
  *(undefined8 *)&(this->RecursiveClassesExclusionSet).Elements = 0;
  *(undefined8 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RecursiveClassesExclusionSet).Elements.field_0x30 = 0xffffffff;
  (this->RecursiveClassesExclusionSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RecursiveClassesExclusionSet).HashSize = 0;
  *(undefined8 *)&(this->RecursiveClassPathsExclusionSet).Elements = 0;
  *(undefined8 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x30 = 0xffffffff;
  (this->RecursiveClassPathsExclusionSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RecursiveClassPathsExclusionSet).HashSize = 0;
  this->bRecursivePaths = false;
  this->bRecursiveClasses = false;
  this->bIncludeOnlyOnDiskAssets = false;
  this->WithoutPackageFlags = 0;
  this->WithPackageFlags = 0;
  return this;
}

// ~FARFilter @ 141e575f0

void __thiscall FARFilter::~FARFilter(FARFilter *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->RecursiveClassPathsExclusionSet).HashSize = 0;
  FVar1 = (this->RecursiveClassPathsExclusionSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RecursiveClassPathsExclusionSet).Elements);
  (this->RecursiveClassesExclusionSet).HashSize = 0;
  FVar1 = (this->RecursiveClassesExclusionSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RecursiveClassesExclusionSet).Elements);
  *(undefined4 *)&(this->TagsAndValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TagsAndValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagsAndValues);
  pFVar3 = (this->ClassPaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ClassNames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->SoftObjectPaths).AllocatorInstance.Data,
             (this->SoftObjectPaths).ArrayNum);
  pFVar3 = (this->SoftObjectPaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PackagePaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PackageNames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator== @ 141e58140

bool __thiscall FARFilter::operator==(FARFilter *this,FARFilter *param_1)

{
  int iVar1;
  FNameLexicalLess local_res8;
  
  iVar1 = Algo::
          CompareAsInt<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,FNameLexicalLess>
                    (&this->PackageNames,&param_1->PackageNames,local_res8);
  if (iVar1 == 0) {
    iVar1 = Algo::
            CompareAsInt<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,FNameLexicalLess>
                      (&this->PackagePaths,&param_1->PackagePaths,local_res8);
    if (iVar1 == 0) {
      iVar1 = Algo::
              CompareAsInt<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,FSoftObjectPathLexicalLess>
                        (&this->SoftObjectPaths,&param_1->SoftObjectPaths,
                         (FSoftObjectPathLexicalLess)local_res8);
      if (iVar1 == 0) {
        iVar1 = Algo::
                CompareAsInt<TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,FTopLevelAssetPathLexicalLess>
                          (&this->ClassPaths,&param_1->ClassPaths,
                           (FTopLevelAssetPathLexicalLess)local_res8);
        if (iVar1 == 0) {
          iVar1 = Algo::
                  CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>
                            (&this->TagsAndValues,&param_1->TagsAndValues,local_res8,
                             (FOptionalFStringIgnoreCaseLess)local_res8);
          if (iVar1 == 0) {
            iVar1 = Algo::
                    CompareSet<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FTopLevelAssetPathLexicalLess>
                              (&this->RecursiveClassPathsExclusionSet,
                               &param_1->RecursiveClassPathsExclusionSet,
                               (FTopLevelAssetPathLexicalLess)local_res8);
            if ((((iVar1 == 0) && (this->bRecursivePaths == param_1->bRecursivePaths)) &&
                (this->bRecursiveClasses == param_1->bRecursiveClasses)) &&
               (((this->bIncludeOnlyOnDiskAssets == param_1->bIncludeOnlyOnDiskAssets &&
                 (this->WithoutPackageFlags == param_1->WithoutPackageFlags)) &&
                (this->WithPackageFlags == param_1->WithPackageFlags)))) {
              DestructItems<TTuple<FName,TOptional<FString>_>,int>
                        ((TTuple<FName,TOptional<FString>_> *)0x0,0);
              return true;
            }
          }
          DestructItems<TTuple<FName,TOptional<FString>_>,int>
                    ((TTuple<FName,TOptional<FString>_> *)0x0,0);
          return false;
        }
      }
    }
  }
  return false;
}

// operator< @ 141e58280

bool __thiscall FARFilter::operator<(FARFilter *this,FARFilter *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  FNameLexicalLess local_res8;
  
  iVar2 = Algo::
          CompareAsInt<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,FNameLexicalLess>
                    (&this->PackageNames,&param_1->PackageNames,local_res8);
  if (iVar2 == 0) {
    iVar2 = Algo::
            CompareAsInt<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,FNameLexicalLess>
                      (&this->PackagePaths,&param_1->PackagePaths,local_res8);
    if (iVar2 == 0) {
      iVar2 = Algo::
              CompareAsInt<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,FSoftObjectPathLexicalLess>
                        (&this->SoftObjectPaths,&param_1->SoftObjectPaths,
                         (FSoftObjectPathLexicalLess)local_res8);
      if (iVar2 == 0) {
        iVar2 = Algo::
                CompareAsInt<TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,FTopLevelAssetPathLexicalLess>
                          (&this->ClassPaths,&param_1->ClassPaths,
                           (FTopLevelAssetPathLexicalLess)local_res8);
        if (iVar2 == 0) {
          iVar2 = Algo::
                  CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>
                            (&this->TagsAndValues,&param_1->TagsAndValues,local_res8,
                             (FOptionalFStringIgnoreCaseLess)local_res8);
          if (iVar2 == 0) {
            iVar2 = Algo::
                    CompareSet<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FTopLevelAssetPathLexicalLess>
                              (&this->RecursiveClassPathsExclusionSet,
                               &param_1->RecursiveClassPathsExclusionSet,
                               (FTopLevelAssetPathLexicalLess)local_res8);
            if (iVar2 == 0) {
              cVar1 = this->bRecursivePaths;
              if ((((bool)cVar1 == param_1->bRecursivePaths) &&
                  (cVar1 = this->bRecursiveClasses, (bool)cVar1 == param_1->bRecursiveClasses)) &&
                 (cVar1 = this->bIncludeOnlyOnDiskAssets,
                 (bool)cVar1 == param_1->bIncludeOnlyOnDiskAssets)) {
                bVar3 = this->WithoutPackageFlags < param_1->WithoutPackageFlags;
                if ((this->WithoutPackageFlags == param_1->WithoutPackageFlags) &&
                   (bVar3 = this->WithPackageFlags < param_1->WithPackageFlags,
                   this->WithPackageFlags == param_1->WithPackageFlags)) {
                  return false;
                }
                return bVar3;
              }
              return cVar1 == '\0';
            }
          }
        }
      }
    }
  }
  return SUB41((uint)iVar2 >> 0x1f,0);
}

// Save @ 141e5f820

void __thiscall FARFilter::Save(FARFilter *this,FCbWriter *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  FTopLevelAssetPath *pFVar8;
  ForAnyElementType this_00;
  int iVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FString local_208;
  TArray<TTuple<FName,TOptional<FString>_>,TSizedDefaultAllocator<32>_> local_1f8;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> local_1e8;
  char *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  char *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  char *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  char *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  char *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  char *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  char *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  TStringView<char8_t> local_118;
  TStringView<char8_t> local_108;
  TStringView<char8_t> local_f8;
  TStringView<char8_t> local_e8;
  FTopLevelAssetPath local_d8;
  FString local_c8;
  TStringView<char8_t> local_b8;
  TStringView<char8_t> local_a8;
  TStringView<char8_t> local_98;
  TStringView<char8_t> local_88;
  TStringView<char8_t> local_78;
  TStringView<char8_t> local_68;
  TStringView<char8_t> local_58;
  TStringView<char8_t> local_48;
  
  FCbWriter::BeginObject(param_1);
  uStack_1d0 = 7;
  local_1d8 = "Version";
  local_118._12_4_ = uStack_1cc;
  local_118.Size = 7;
  local_118.DataPtr = "Version";
  FCbWriter::SetNameOrAddString(param_1,&local_118);
  FCbWriter::AddInteger(param_1,1);
  uStack_1c0 = 0xc;
  local_1c8 = "PackageNames";
  local_108._12_4_ = uStack_1bc;
  local_108.Size = 0xc;
  local_108.DataPtr = "PackageNames";
  FCbWriter::SetNameOrAddString(param_1,&local_108);
  FCbWriter::operator<<<FName,TSizedDefaultAllocator<32>,0>(param_1,&this->PackageNames);
  uStack_1b0 = 0xc;
  local_1b8 = "PackagePaths";
  local_f8._12_4_ = uStack_1ac;
  local_f8.Size = 0xc;
  local_f8.DataPtr = "PackagePaths";
  FCbWriter::SetNameOrAddString(param_1,&local_f8);
  FCbWriter::operator<<<FName,TSizedDefaultAllocator<32>,0>(param_1,&this->PackagePaths);
  uStack_1a0 = 0xf;
  local_1a8 = "SoftObjectPaths";
  local_e8._12_4_ = uStack_19c;
  local_e8.Size = 0xf;
  local_e8.DataPtr = "SoftObjectPaths";
  FCbWriter::SetNameOrAddString(param_1,&local_e8);
  FCbWriter::BeginArray(param_1);
  iVar4 = (this->SoftObjectPaths).ArrayNum;
  pFVar6 = (FName *)(this->SoftObjectPaths).AllocatorInstance.Data;
  pFVar10 = pFVar6 + (longlong)iVar4 * 4;
  while( true ) {
    if ((this->SoftObjectPaths).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar10) break;
    FCbWriter::BeginArray(param_1);
    local_d8.PackageName = *pFVar6;
    local_d8.AssetName = pFVar6[1];
    FTopLevelAssetPath::WriteCompactBinary(&local_d8,param_1);
    uVar1 = pFVar6[3].ComparisonIndex.Value;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    iVar9 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar9 = 0;
    }
    pFVar5 = ::FString::ConstructFromPtrSize(&local_c8,(uchar *)pFVar6[2],iVar9);
    if (&local_208 != pFVar5) {
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      local_208.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_208.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    FCbWriter::operator<<(param_1,&local_208);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    FCbWriter::EndArray(param_1);
    pFVar6 = pFVar6 + 4;
  }
  FCbWriter::EndArray(param_1);
  uStack_190 = 10;
  local_198 = "ClassPaths";
  local_b8._12_4_ = uStack_18c;
  local_b8.Size = 10;
  local_b8.DataPtr = "ClassPaths";
  FCbWriter::SetNameOrAddString(param_1,&local_b8);
  FCbWriter::operator<<<FTopLevelAssetPath,TSizedDefaultAllocator<32>,0>(param_1,&this->ClassPaths);
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::Array((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
           *)&this->TagsAndValues,&local_1f8);
  uStack_180 = 0xd;
  local_188 = "TagsAndValues";
  local_a8._12_4_ = uStack_17c;
  local_a8.Size = 0xd;
  local_a8.DataPtr = "TagsAndValues";
  FCbWriter::SetNameOrAddString(param_1,&local_a8);
  FCbWriter::BeginArray(param_1);
  iVar4 = local_1f8.ArrayNum;
  pFVar7 = local_1f8.AllocatorInstance.Data + 0x14;
  pFVar6 = (FName *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 0x18);
  while( true ) {
    if (local_1f8.ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,TOptional<FString>_>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((FName *)(pFVar7 + -0x14) == pFVar6) break;
    iVar9 = *(int *)pFVar7;
    FCbWriter::BeginArray(param_1);
    FCbWriter::operator<<(param_1,*(FName *)(pFVar7 + -0x14));
    FCbWriter::AddBool(param_1,iVar9 != -1);
    if (iVar9 != -1) {
      if (*(int *)pFVar7 == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FCbWriter::operator<<(param_1,(FString *)(pFVar7 + -0xc));
    }
    FCbWriter::EndArray(param_1);
    pFVar7 = pFVar7 + 0x18;
  }
  FCbWriter::EndArray(param_1);
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Array
            (&this->RecursiveClassPathsExclusionSet,&local_1e8);
  uStack_170 = 0x1f;
  local_178 = "RecursiveClassPathsExclusionSet";
  local_98._12_4_ = uStack_16c;
  local_98.Size = 0x1f;
  local_98.DataPtr = "RecursiveClassPathsExclusionSet";
  FCbWriter::SetNameOrAddString(param_1,&local_98);
  FCbWriter::BeginArray(param_1);
  iVar4 = local_1e8.ArrayNum;
  pFVar8 = (FTopLevelAssetPath *)(local_1e8.AllocatorInstance.Data + (longlong)iVar4 * 0x10);
  this_00.Data = local_1e8.AllocatorInstance.Data;
  while( true ) {
    if (local_1e8.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((FTopLevelAssetPath *)this_00.Data == pFVar8) break;
    FTopLevelAssetPath::WriteCompactBinary((FTopLevelAssetPath *)this_00.Data,param_1);
    this_00.Data = this_00.Data + 0x10;
  }
  FCbWriter::EndArray(param_1);
  uStack_160 = 0xf;
  local_168 = "bRecursivePaths";
  local_88._12_4_ = uStack_15c;
  local_88.Size = 0xf;
  local_88.DataPtr = "bRecursivePaths";
  FCbWriter::SetNameOrAddString(param_1,&local_88);
  FCbWriter::AddBool(param_1,this->bRecursivePaths);
  uStack_150 = 0x11;
  local_158 = "bRecursiveClasses";
  local_78._12_4_ = uStack_14c;
  local_78.Size = 0x11;
  local_78.DataPtr = "bRecursiveClasses";
  FCbWriter::SetNameOrAddString(param_1,&local_78);
  FCbWriter::AddBool(param_1,this->bRecursiveClasses);
  uStack_140 = 0x18;
  local_148 = "bIncludeOnlyOnDiskAssets";
  local_68._12_4_ = uStack_13c;
  local_68.Size = 0x18;
  local_68.DataPtr = "bIncludeOnlyOnDiskAssets";
  FCbWriter::SetNameOrAddString(param_1,&local_68);
  FCbWriter::AddBool(param_1,this->bIncludeOnlyOnDiskAssets);
  uStack_130 = 0x13;
  local_138 = "WithoutPackageFlags";
  local_58._12_4_ = uStack_12c;
  local_58.Size = 0x13;
  local_58.DataPtr = "WithoutPackageFlags";
  FCbWriter::SetNameOrAddString(param_1,&local_58);
  FCbWriter::AddInteger(param_1,this->WithoutPackageFlags);
  uStack_120 = 0x10;
  local_128 = "WithPackageFlags";
  local_48._12_4_ = uStack_11c;
  local_48.Size = 0x10;
  local_48.DataPtr = "WithPackageFlags";
  FCbWriter::SetNameOrAddString(param_1,&local_48);
  FCbWriter::AddInteger(param_1,this->WithPackageFlags);
  FCbWriter::EndObject(param_1);
  if ((FTopLevelAssetPath *)local_1e8.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FName,TOptional<FString>_>,int>
            ((TTuple<FName,TOptional<FString>_> *)local_1f8.AllocatorInstance.Data,
             local_1f8.ArrayNum);
  if ((TTuple<FName,TOptional<FString>_> *)local_1f8.AllocatorInstance.Data !=
      (TTuple<FName,TOptional<FString>_> *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  return;
}

// SortForSaving @ 141e604b0

void __thiscall FARFilter::SortForSaving(FARFilter *this)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *this_00;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FKeyComparisonClass<FNameLexicalLess> local_res20;
  FValueComparisonClass<FOptionalFStringIgnoreCaseLess> local_28;
  undefined1 *local_20;
  
  AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
            ((FName *)(this->PackageNames).AllocatorInstance.Data,(this->PackageNames).ArrayNum,
             local_res8[0],(FNameLexicalLess)local_res8[0]);
  AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
            ((FName *)(this->PackagePaths).AllocatorInstance.Data,(this->PackagePaths).ArrayNum,
             local_res8[0],(FNameLexicalLess)local_res8[0]);
  AlgoImpl::IntroSortInternal<FSoftObjectPath,int,FIdentityFunctor,FSoftObjectPathLexicalLess>
            ((FSoftObjectPath *)(this->SoftObjectPaths).AllocatorInstance.Data,
             (this->SoftObjectPaths).ArrayNum,local_res8[0],
             (FSoftObjectPathLexicalLess)local_res8[0]);
  AlgoImpl::IntroSortInternal<FTopLevelAssetPath,int,FIdentityFunctor,FTopLevelAssetPathLexicalLess>
            ((FTopLevelAssetPath *)(this->ClassPaths).AllocatorInstance.Data,
             (this->ClassPaths).ArrayNum,local_res8[0],(FTopLevelAssetPathLexicalLess)local_res8[0])
  ;
  local_res20.Predicate.Predicate = (TDereferenceWrapper<FName,FNameLexicalLess>)local_res8;
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>
            ((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
              *)&this->TagsAndValues,&local_res20);
  local_28.Predicate.Predicate =
       (TDereferenceWrapper<TOptional<FString>,FOptionalFStringIgnoreCaseLess>)local_res10;
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>
            ((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
              *)&this->TagsAndValues,&local_28);
  this_00 = &this->RecursiveClassPathsExclusionSet;
  local_20 = local_res18;
  if (0 < *(int *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x8 -
          *(int *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x34) {
    TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00);
    iVar4 = *(int *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x8 -
            *(int *)&(this->RecursiveClassPathsExclusionSet).Elements.field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> **)&this_00->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>
              (pTVar1,iVar4,local_res8[0],
               (FElementCompareClass<FTopLevelAssetPathLexicalLess> *)&local_20);
  }
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Rehash
            (this_00);
  return;
}

// PostSerialize @ 141eafe90

void __thiscall FARFilter::PostSerialize(FARFilter *this,FArchive *param_1)

{
  return;
}

