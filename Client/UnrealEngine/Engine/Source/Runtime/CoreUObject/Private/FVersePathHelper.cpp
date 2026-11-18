// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// IsGeneratedBlueprintClass @ 141ea9190

bool __thiscall
UE::AssetRegistry::Private::FVersePathHelper::IsGeneratedBlueprintClass
          (FVersePathHelper *this,FTopLevelAssetPath *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong64 uVar13;
  UClass *pUVar14;
  longlong lVar15;
  ulonglong uVar16;
  ForElementType<FSetElementId> FVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  FName *_Src;
  int iVar20;
  int iVar21;
  int local_res8 [2];
  FTopLevelAssetPath *local_res10;
  uint local_res18;
  undefined1 local_b8 [8];
  undefined1 local_b0 [16];
  FTopLevelAssetPath local_a0;
  FSparseArrayAllocationInfo local_90;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68;
  FTopLevelAssetPath local_58;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetData.cpp"
                         ,0x9b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar13 = GetRegisteredNativeClassesVersionNumber();
  iVar21 = -1;
  if (((this->VersionNumber).bIsSet == false) || ((this->VersionNumber).TypedValue != uVar13)) {
    if ((FVersePathHelper *)local_b8 != this) {
      (this->VersionNumber).TypedValue = uVar13;
      (this->VersionNumber).bIsSet = true;
    }
    _Src = (FName *)0x0;
    if (*(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x8 !=
        *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34) {
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
      UnhashElements(&this->GeneratedBlueprintClassPaths);
      iVar18 = *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0xc;
      *(undefined4 *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x8 = 0;
      if (iVar18 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)&this->GeneratedBlueprintClassPaths,0,
                   (int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0xc);
      }
      *(undefined4 *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x28 = 0;
    }
    local_a0.PackageName.ComparisonIndex.Value = 0;
    local_a0.PackageName.Number = 0;
    local_a0.AssetName.ComparisonIndex.Value = 0;
    local_a0.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath
              (&local_a0,ScriptPackageNameEngine,ClassNameBlueprintGeneratedClass);
    local_78.PackageName = local_a0.PackageName;
    local_78.AssetName = local_a0.AssetName;
    pUVar14 = Z_Construct_UClass_UClass_NoRegister();
    pUVar14 = (UClass *)StaticFindObject(pUVar14,&local_78,None);
    if (pUVar14 != (UClass *)0x0) {
      local_b0._0_8_ = (FScriptContainerElement *)0x0;
      local_b0._8_8_ = 0;
      GetDerivedClasses(pUVar14,(TArray<UClass_*,TSizedDefaultAllocator<32>_> *)local_b0,true);
      TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::Reserve
                (&this->GeneratedBlueprintClassPaths,local_b0._8_4_ + 1);
      if ((pUVar14->ClassFlags & CLASS_Abstract) == CLASS_None) {
        UStruct::GetStructPathName((UStruct *)pUVar14,&local_68);
        iVar18 = *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34;
        iVar20 = 1;
        if (iVar18 == 0) {
          iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,4,1,(ForAnyElementType *)&this->GeneratedBlueprintClassPaths,
                              (int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x8,
                              (int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->GeneratedBlueprintClassPaths).Elements.field_0x10,false);
        }
        else {
          iVar10 = *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x30;
          iVar18 = iVar18 + -1;
          lVar3 = *(longlong *)&(this->GeneratedBlueprintClassPaths).Elements;
          iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar10 * 0x18);
          *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x30 = iVar2;
          *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34 = iVar18;
          if (iVar18 != 0) {
            *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&this->GeneratedBlueprintClassPaths,&local_90,iVar10);
        if (local_90.Pointer != (FName *)0x0) {
          *(FName *)local_90.Pointer = local_68.PackageName;
          *(FName *)((longlong)local_90.Pointer + 8) = local_68.AssetName;
          (((FName *)((longlong)local_90.Pointer + 0x10))->ComparisonIndex).Value = 0xffffffff;
          _Src = local_90.Pointer;
        }
        FVar4 = _Src[1];
        local_res8[0] = local_90.Index;
        uVar11 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        FVar5 = *_Src;
        local_res18 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        local_res18 = local_res18 + FVar5.Number;
        iVar18 = *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x8;
        iVar10 = *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34;
        local_res18 = local_res18 * 0x40 + -0x61c88647 + uVar11 + FVar4.Number + (local_res18 >> 2)
                      ^ local_res18;
        if ((iVar18 - iVar10 != 1) && (iVar18 != iVar10)) {
          FVar17 = (this->GeneratedBlueprintClassPaths).Hash.SecondaryData;
          if (FVar17 == (ForElementType<FSetElementId>)0x0) {
            FVar17 = (ForElementType<FSetElementId>)&(this->GeneratedBlueprintClassPaths).Hash;
          }
          iVar18 = *(int *)((longlong)FVar17 +
                           (ulonglong)
                           ((this->GeneratedBlueprintClassPaths).HashSize - 1U & local_res18) * 4);
          if (iVar18 != -1) {
            lVar3 = *(longlong *)&(this->GeneratedBlueprintClassPaths).Elements;
            do {
              lVar15 = (longlong)iVar18;
              if ((*(FName *)(lVar3 + lVar15 * 0x18) == *_Src) &&
                 (*(FName *)(lVar3 + 8 + lVar15 * 0x18) == _Src[1])) {
                if (iVar18 != -1) {
                  memmove((void *)(lVar3 + (longlong)iVar18 * 0x18),_Src,0x10);
                  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)&this->GeneratedBlueprintClassPaths,local_90.Index,1);
                  param_1 = local_res10;
                  local_res8[0] = iVar18;
                  goto LAB_141ea9507;
                }
                break;
              }
              iVar18 = *(int *)(lVar3 + 0x10 + lVar15 * 0x18);
            } while (iVar18 != -1);
          }
        }
        uVar11 = *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x8 -
                 *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34;
        if (3 < uVar11) {
          uVar16 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar20 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((int)uVar11 < 1) || (iVar20 <= (this->GeneratedBlueprintClassPaths).HashSize)) {
          uVar11 = (this->GeneratedBlueprintClassPaths).HashSize - 1U & local_res18;
          _Src[2].Number = uVar11;
          FVar17 = (this->GeneratedBlueprintClassPaths).Hash.SecondaryData;
          if (FVar17 == (ForElementType<FSetElementId>)0x0) {
            FVar17 = (ForElementType<FSetElementId>)&(this->GeneratedBlueprintClassPaths).Hash;
          }
          uVar16 = (longlong)(this->GeneratedBlueprintClassPaths).HashSize - 1U &
                   (longlong)(int)uVar11;
          _Src[2].ComparisonIndex.Value = *(uint *)((longlong)FVar17 + uVar16 * 4);
          *(int *)((longlong)FVar17 + uVar16 * 4) = local_res8[0];
          param_1 = local_res10;
        }
        else {
          (this->GeneratedBlueprintClassPaths).HashSize = iVar20;
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
          Rehash(&this->GeneratedBlueprintClassPaths);
          param_1 = local_res10;
        }
      }
LAB_141ea9507:
      uVar7 = local_b0._8_4_;
      pFVar1 = (FScriptContainerElement *)(local_b0._0_8_ + (longlong)(int)local_b0._8_4_ * 8);
      pFVar19 = (FScriptContainerElement *)local_b0._0_8_;
      while( true ) {
        if (local_b0._8_4_ != uVar7) {
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar19 == pFVar1) break;
        if (((*(UStruct **)pFVar19)[1]._padding_ & 0x100000000) == 0) {
          UStruct::GetStructPathName(*(UStruct **)pFVar19,&local_58);
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
          Emplace<FTopLevelAssetPath>
                    (&this->GeneratedBlueprintClassPaths,(FTopLevelAssetPath *)&stack0x00000020,
                     (bool *)&local_58);
        }
        pFVar19 = pFVar19 + 8;
      }
      if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
    }
  }
  FVar4 = param_1->AssetName;
  uVar11 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  FVar5 = param_1->PackageName;
  uVar12 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
  uVar12 = uVar12 + FVar5.Number;
  iVar18 = iVar21;
  if (*(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x8 !=
      *(int *)&(this->GeneratedBlueprintClassPaths).Elements.field_0x34) {
    FVar17 = (this->GeneratedBlueprintClassPaths).Hash.SecondaryData;
    if (FVar17 == (ForElementType<FSetElementId>)0x0) {
      FVar17 = (ForElementType<FSetElementId>)&(this->GeneratedBlueprintClassPaths).Hash;
    }
    iVar20 = *(int *)((longlong)FVar17 +
                     (ulonglong)
                     ((this->GeneratedBlueprintClassPaths).HashSize - 1U &
                     (uVar12 * 0x40 + uVar11 + FVar4.Number + -0x61c88647 + (uVar12 >> 2) ^ uVar12))
                     * 4);
    if (iVar20 != -1) {
      lVar3 = *(longlong *)&(this->GeneratedBlueprintClassPaths).Elements;
      do {
        lVar15 = (longlong)iVar20;
        if ((*(FName *)(lVar3 + lVar15 * 0x18) == param_1->PackageName) &&
           (iVar18 = iVar20, *(FName *)(lVar3 + 8 + lVar15 * 0x18) == param_1->AssetName)) break;
        iVar20 = *(int *)(lVar3 + 0x10 + lVar15 * 0x18);
        iVar18 = iVar21;
      } while (iVar20 != -1);
    }
  }
  return iVar18 != -1;
}

