// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 35

// StaticClass @ 14cd93110

UClass * __cdecl UGeometryScriptLibrary_StaticMeshFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_StaticMeshFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_StaticMeshFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_StaticMeshFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_StaticMeshFunctions @ 14cda6180

UGeometryScriptLibrary_StaticMeshFunctions * __thiscall
UGeometryScriptLibrary_StaticMeshFunctions::UGeometryScriptLibrary_StaticMeshFunctions
          (UGeometryScriptLibrary_StaticMeshFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_StaticMeshFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_StaticMeshFunctions @ 14cda61b0

UGeometryScriptLibrary_StaticMeshFunctions * __thiscall
UGeometryScriptLibrary_StaticMeshFunctions::UGeometryScriptLibrary_StaticMeshFunctions
          (UGeometryScriptLibrary_StaticMeshFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_StaticMeshFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_StaticMeshFunctions @ 14cda6b60

void __thiscall
UGeometryScriptLibrary_StaticMeshFunctions::~UGeometryScriptLibrary_StaticMeshFunctions
          (UGeometryScriptLibrary_StaticMeshFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_StaticMeshFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CheckStaticMeshHasAvailableLOD @ 14cdca540

bool __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CheckStaticMeshHasAvailableLOD
          (UStaticMesh *param_1,FGeometryScriptMeshReadLOD param_2,
          EGeometryScriptSearchOutcomePins *param_3,UGeometryScriptDebug *param_4)

{
  bool bVar1;
  int iVar2;
  FText *pFVar3;
  EGeometryScriptSearchOutcomePins EVar4;
  int iStackX_14;
  FText local_18;
  
  *param_3 = NotFound;
  if (param_1 == (UStaticMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CheckStaticMeshHasAvailableLOD_InvalidInput1",
                        L"CheckStaticMeshHasAvailableLOD: FromStaticMeshAsset is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return false;
    }
  }
  else if (param_2.LODType == RenderData) {
    iStackX_14 = param_2.LODIndex;
    if (((longlong)param_2 < 0) || (iVar2 = UStaticMesh::GetNumLODs(param_1), iVar2 <= iStackX_14))
    {
      EVar4 = NotFound;
      bVar1 = false;
    }
    else {
      EVar4 = Found;
      bVar1 = true;
    }
    *param_3 = EVar4;
    if (param_1->bAllowCPUAccess != '\0') {
      return bVar1;
    }
    *param_3 = NotFound;
  }
  return false;
}

// ConvertMaterialListToMaterialMap @ 14cdce190

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
* __cdecl UGeometryScriptLibrary_StaticMeshFunctions::ConvertMaterialListToMaterialMap
                    (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
                     *__return_storage_ptr__,
                    TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
                    TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
  *pTVar8;
  FName *pFVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  TPairInitializer<FName_const_&,UMaterialInterface_*_const_&> local_res18;
  int local_e8;
  uint uStack_e4;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FName local_c8;
  longlong local_c0;
  FString local_b8;
  TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a0;
  FString local_80;
  FName *local_70;
  longlong *local_68;
  FName local_60;
  FString local_58;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res18.Key = (FName *)param_2;
  if ((param_2->ArrayNum != param_1->ArrayNum) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  uVar14 = param_1->ArrayNum;
  if (uVar14 <= (uint)(*(int *)&__return_storage_ptr__->field_0x8 -
                      *(int *)&__return_storage_ptr__->field_0x34)) goto LAB_14cdce45d;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14cdce45d;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar15 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar15 = 0;
        goto LAB_14cdce2a0;
      }
    }
    else {
LAB_14cdce2a0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar15,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = 0;
      do {
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar7 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(puVar10 + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    iVar11 = *(int *)&__return_storage_ptr__->field_0x28;
    local_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    uStack_e4 = 1;
    local_e8 = 0;
    iStack_d4 = 0;
    iStack_d0 = 0;
    if (iVar11 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)local_a0.Array;
      }
      uVar14 = *puVar17;
      iStack_d0 = 0;
      local_e8 = 0;
      while (uVar14 == 0) {
        iStack_d0 = iStack_d0 + 0x20;
        lVar13 = (longlong)local_e8;
        local_e8 = local_e8 + 1;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e8) goto LAB_14cdce3af;
        uVar14 = puVar17[lVar13 + 1];
      }
      uStack_e4 = -uVar14 & uVar14;
      uVar12 = (ulonglong)uStack_e4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iStack_d4 = (int)lVar13 + -1 + iStack_d0;
      if (iVar11 < iStack_d4) {
LAB_14cdce3af:
        iStack_d4 = iVar11;
      }
    }
    local_a0._padding_ = CONCAT44(uStack_e4,local_e8);
    local_a0.CurrentBitIndex = iStack_d4;
    local_a0.UnvisitedBitMask = 0xffffffff;
    local_a0._28_4_ = uStack_cc;
    local_a0.BaseBitIndex = iStack_d0;
    param_2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)local_res18.Key;
    local_a8 = __return_storage_ptr__;
    if (iStack_d4 < iVar11) {
      do {
        uVar1 = *(undefined8 *)(*(longlong *)local_a8 + (longlong)iStack_d4 * 0x18);
        lVar13 = *(longlong *)local_a8 + (longlong)iStack_d4 * 0x18;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar14 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                 uVar14 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)(lVar13 + 0x14) = uVar14;
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar12 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(puVar10 + uVar12 * 4);
        *(int *)(puVar10 + uVar12 * 4) = iStack_d4;
        local_a0.UnvisitedBitMask = local_a0.UnvisitedBitMask & ~local_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a0);
        param_2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)local_res18.Key;
        iStack_d4 = local_a0.CurrentBitIndex;
      } while (local_a0.CurrentBitIndex < (local_a0.Array)->NumBits);
    }
  }
LAB_14cdce45d:
  iVar11 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar11) {
    lVar13 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < iVar11) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
                  *)(*pcVar2)();
        return pTVar8;
      }
      local_c0 = *(longlong *)((param_1->AllocatorInstance).Data + lVar13);
      if (((int)uVar14 < 0) || (param_2->ArrayNum <= (int)uVar14)) {
        if (local_c0 == 0) {
          bVar4 = true;
          ::FString::FString(&local_58,L"Material");
        }
        else {
          local_res18.Value = *(UMaterialInterface ***)(local_c0 + 0x18);
          bVar5 = true;
          ::FName::ToString((FName *)&local_res18.Value,&local_80);
        }
        bVar3 = true;
        ::FString::PrintfImpl(&local_b8,L"%s_%d");
        iVar11 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        pFVar9 = ::FName::FName(&local_60,iVar11,(wchar_t *)local_b8.Data.AllocatorInstance.Data,
                                FNAME_Add);
      }
      else {
        if (((int)uVar14 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
                    *)(*pcVar2)();
          return pTVar8;
        }
        pFVar9 = (FName *)((param_2->AllocatorInstance).Data + lVar13);
      }
      local_c8 = *pFVar9;
      if ((bVar3) &&
         (bVar3 = false, local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      local_70 = &local_c8;
      local_68 = &local_c0;
      TSet<TTuple<FName,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UMaterialInterface_*_const_&>_>
                ((TSet<TTuple<FName,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res18,(bool *)&local_70);
      iVar11 = param_1->ArrayNum;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar14 < iVar11);
  }
  return __return_storage_ptr__;
}

// ConvertMaterialMapToMaterialList @ 14cdce650

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::ConvertMaterialMapToMaterialList
          (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
           *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  uint local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  int local_cc;
  ForElementType<unsigned_int> local_c8;
  TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  uVar14 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  iVar12 = 0;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar14 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar2 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar14,&param_3->AllocatorInstance,0,piVar2);
  }
  iVar5 = *(int *)&param_1->field_0x28;
  local_c8 = (ForElementType<unsigned_int>)&param_1->field_0x10;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)local_c8;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      local_a0 = local_a0 + 0x20;
      iVar12 = iVar12 + 1;
      iStack_a4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cdce783;
      uVar14 = (puVar16 + 1)[lVar11];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar4 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_a4 = local_a0 + -1 + local_d0;
    if (iVar5 < iStack_a4) {
      iStack_a4 = iVar5;
    }
  }
LAB_14cdce783:
  local_b0 = &param_1->field_0x10;
  uStack_9c = local_44;
  iStack_98 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  TStack_88._padding_ = CONCAT44(uStack_b4,iVar12);
  local_e8 = *(uint *)&param_1->field_0x28;
  uStack_a8 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  uVar14 = local_e8 & 0xffffffe0;
  iVar13 = (int)local_e8 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_1;
  iStack_b8 = iVar12;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)local_e8 < 0) || (iVar5 < (int)local_e8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(int *)((longlong)local_c8 + 0x18);
  FVar17 = local_c8;
  if (local_e8 != uVar6) {
    FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_c8;
    }
    uVar18 = -1 << ((byte)local_e8 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar13 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      local_e8 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cdce8b0;
      uVar18 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar11 * 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    local_e8 = local_cc + -1 + uVar14;
    if ((int)uVar6 < (int)local_e8) {
      local_e8 = uVar6;
    }
  }
LAB_14cdce8b0:
  while( true ) {
    pTVar9 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      FVar17 = (ForElementType<unsigned_int>)&param_1->field_0x10;
    }
    if (((TStack_88.CurrentBitIndex == local_e8) &&
        ((ForElementType<unsigned_int>)TStack_88.Array == FVar17)) && (pTVar9 == param_1)) {
      return;
    }
    puVar3 = (undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    local_e0 = *puVar3;
    uStack_d8 = puVar3[1];
    pFVar7 = (param_2->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&uStack_d8) &&
        ((FScriptContainerElement *)&uStack_d8 < pFVar7 + (longlong)*piVar1 * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = param_2->ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar12 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 8) = uStack_d8;
    pFVar7 = (param_3->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) break;
    iVar12 = param_3->ArrayNum;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&param_3->AllocatorInstance,piVar2);
    }
    param_3->ArrayNum = iVar12 + 1;
    *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_e0;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    FVar17 = (ForElementType<unsigned_int>)&param_1->field_0x10;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// CopyMeshFromSkeletalMesh @ 14cdd0850

UDynamicMesh * __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh
          (USkeletalMesh *param_1,UDynamicMesh *param_2,
          FGeometryScriptCopyMeshFromAssetOptions param_3,FGeometryScriptMeshReadLOD param_4,
          EGeometryScriptOutcomePins *param_5,UGeometryScriptDebug *param_6)

{
  FSkeletalMeshLODRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  longlong *plVar5;
  UDynamicMesh *pUVar6;
  FReferenceSkeleton *pFVar7;
  bool bStackX_19;
  int iStackX_24;
  ConversionOptions local_2c8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FDynamicMesh3 local_258;
  
  *param_5 = Failure;
  if (param_1 == (USkeletalMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_2a8,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshFromSkeletalMesh_InvalidInput1",
                        L"CopyMeshFromSkeletalMesh: FromSkeletalMeshAsset is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar4);
  }
  else {
    if (param_2 == (UDynamicMesh *)0x0) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_298,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMeshFromSkeletalMesh_InvalidInput2",
                          L"CopyMeshFromSkeletalMesh: ToDynamicMesh is Null");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar4);
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
      return (UDynamicMesh *)0x0;
    }
    if (param_4.LODType == RenderData) {
      plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))();
      if (plVar5 == (longlong *)0x0) {
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_278,L"UGeometryScriptLibrary_MeshAssetFunctions",
                            L"CopyMeshFromSkeletalMesh_RenderDataNotAvailable",
                            L"CopyMeshFromSkeletalMesh: Renderdata is not available");
        UE::Geometry::AppendError(param_6,InvalidInputs,pFVar4);
        local_2a8.TextData.Reference = local_278.TextData.Reference;
      }
      else {
        iStackX_24 = param_4.LODIndex;
        if (iStackX_24 <= (int)plVar5[1] + -1) {
          if (((longlong)param_4 < 0 || (int)plVar5[1] <= iStackX_24) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UDynamicMesh *)(*pcVar2)();
            return pUVar6;
          }
          pFVar1 = *(FSkeletalMeshLODRenderData **)(*plVar5 + (longlong)iStackX_24 * 8);
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_258);
          bStackX_19 = param_3.bRequestTangents;
          local_2c8.bWantTangents = bStackX_19;
          local_2c8.BuildScale.field0_0x0._s_0.X =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_2c8.BuildScale.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_2c8.bWantNormals = true;
          local_2c8.BuildScale.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_2c8.bWantUVs = true;
          local_2c8.bWantVertexColors = true;
          local_2c8.bWantMaterialIDs = true;
          local_2c8.bWantSkinWeights = true;
          pFVar7 = (FReferenceSkeleton *)(**(code **)(param_1->_padding_ + 800))(param_1);
          UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert
                    (pFVar1,pFVar7,&local_2c8,&local_258);
          UDynamicMesh::SetMesh(param_2,&local_258);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_258);
          *param_5 = Success;
          return param_2;
        }
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_288,L"UGeometryScriptLibrary_MeshAssetFunctions",
                            L"CopyMeshFromSkeletalMesh_RenderDataLDONotAvailable",
                            L"CopyMeshFromSkeletalMesh: Renderdata for specified LOD is not available"
                           );
        UE::Geometry::AppendError(param_6,InvalidInputs,pFVar4);
        local_2a8.TextData.Reference = local_288.TextData.Reference;
      }
    }
    else {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_268,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMeshFromSkeletalMesh_SourceMesh_EditorOnly",
                          L"CopyMeshFromSkeletalMesh: Source Meshes are not available at Runtime");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar4);
      local_2a8.TextData.Reference = local_268.TextData.Reference;
    }
  }
  if (local_2a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
  }
  return param_2;
}

// CopyMeshFromStaticMeshV2 @ 14cdd0c80

UDynamicMesh * __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMeshV2
          (UStaticMesh *param_1,UDynamicMesh *param_2,
          FGeometryScriptCopyMeshFromAssetOptions param_3,FGeometryScriptMeshReadLOD param_4,
          EGeometryScriptOutcomePins *param_5,bool param_6,UGeometryScriptDebug *param_7)

{
  code *pcVar1;
  EGeometryScriptOutcomePins *pEVar2;
  bool bVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  uint uVar6;
  EMeshLODType EVar7;
  bool bStackX_19;
  bool bStackX_1a;
  bool bStackX_1b;
  int iStackX_24;
  FText local_278;
  FText local_268;
  FText local_258;
  FDynamicMesh3 local_248;
  
  pEVar2 = param_5;
  *param_5 = Failure;
  if (param_1 == (UStaticMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_268,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshFromAsset_InvalidInput1",
                        L"CopyMeshFromStaticMesh: FromStaticMeshAsset is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar4);
  }
  else {
    if (param_2 == (UDynamicMesh *)0x0) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_258,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMeshFromAsset_InvalidInput2",
                          L"CopyMeshFromStaticMesh: ToDynamicMesh is Null");
      UE::Geometry::AppendError(param_7,InvalidInputs,pFVar4);
      if (local_258.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
      }
      return (UDynamicMesh *)0x0;
    }
    uVar6 = param_4._0_4_ & 0xff;
    if (param_4.LODType == MaxAvailable) {
      EVar7 = MaxAvailable;
    }
    else if (uVar6 == 1) {
      EVar7 = HiResSourceModel;
    }
    else if (uVar6 == 2) {
      EVar7 = SourceModel;
    }
    else {
      if ((uVar6 != 3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshAssetFunctions.cpp"
                             ,0x3c,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UDynamicMesh *)(*pcVar1)();
        return pUVar5;
      }
      EVar7 = RenderData;
    }
    bStackX_19 = param_3.bRequestTangents;
    param_5._1_1_ = bStackX_19;
    bStackX_1a = param_3.bIgnoreRemoveDegenerates;
    param_5._2_1_ = bStackX_1a;
    bStackX_1b = param_3.bUseBuildScale;
    param_5._3_1_ = bStackX_1b;
    param_5._4_1_ = param_6;
    param_5._0_1_ = param_3.bApplyBuildSettings;
    param_5._5_1_ = 1;
    FText::FText(&local_278);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248);
    iStackX_24 = param_4.LODIndex;
    bVar3 = UE::Conversion::StaticMeshToDynamicMesh
                      (param_1,&local_248,&local_278,(FStaticMeshConversionOptions *)&param_5,EVar7,
                       iStackX_24,true);
    if (bVar3) {
      UDynamicMesh::SetMesh(param_2,&local_248);
      *pEVar2 = Success;
    }
    else {
      UE::Geometry::AppendError(param_7,InvalidInputs,&local_278);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
    local_268.TextData.Reference = local_278.TextData.Reference;
  }
  if (local_268.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
  }
  return param_2;
}

// CopyMeshToSkeletalMesh @ 14cdd11e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh
          (UDynamicMesh *param_1,USkeletalMesh *param_2,
          FGeometryScriptCopyMeshToAssetOptions *param_3,FGeometryScriptMeshWriteLOD param_4,
          EGeometryScriptOutcomePins *param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  *param_5 = Failure;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshToSkeletalMesh_InvalidInput1",
                        L"CopyMeshToSkeletalMesh: FromDynamicMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions(param_3);
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (USkeletalMesh *)0x0) {
    pwVar3 = L"CopyMeshToSkeletalMesh: ToSkeletalMeshAsset is Null";
    pwVar2 = L"CopyMeshToSkeletalMesh_InvalidInput2";
  }
  else if (param_4.bWriteHiResSource == false) {
    pwVar3 = L"CopyMeshToSkeletalMesh: Not currently supported at Runtime";
    pwVar2 = L"CopyMeshToSkeletalMesh_EditorOnly";
  }
  else {
    pwVar3 = L"CopyMeshToSkeletalMesh: Writing HiResSource LOD is not yet supported";
    pwVar2 = L"CopyMeshToSkeletalMesh_Unsupported";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions(param_3);
  return param_1;
}

// CopyMeshToStaticMesh @ 14cdd12e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh
          (UDynamicMesh *param_1,UStaticMesh *param_2,FGeometryScriptCopyMeshToAssetOptions *param_3
          ,FGeometryScriptMeshWriteLOD param_4,EGeometryScriptOutcomePins *param_5,bool param_6,
          UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  *param_5 = Failure;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshToAsset_InvalidInput1",
                        L"CopyMeshToStaticMesh: FromDynamicMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions(param_3);
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UStaticMesh *)0x0) {
    pwVar3 = L"CopyMeshToStaticMesh: ToStaticMeshAsset is Null";
    pwVar2 = L"CopyMeshToAsset_InvalidInput2";
  }
  else {
    pwVar3 = L"CopyMeshToStaticMesh: Not currently supported at Runtime";
    pwVar2 = L"CopyMeshToAsset_EditorOnly";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions(param_3);
  return param_1;
}

// CopyMorphTargetToSkeletalMesh @ 14cdd13c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CopyMorphTargetToSkeletalMesh
          (UDynamicMesh *param_1,USkeletalMesh *param_2,FName param_3,
          FGeometryScriptCopyMorphTargetToAssetOptions param_4,FGeometryScriptMeshWriteLOD param_5,
          EGeometryScriptOutcomePins *param_6,UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  *param_6 = Failure;
  if (param_2 == (USkeletalMesh *)0x0) {
    pwVar3 = L"CopyMorphTargetToSkeletalMesh: ToSkeletalMeshAsset is Null";
    pwVar2 = L"CopyMorphTargetToSkeletalMesh_InvalidInput1";
  }
  else {
    if (param_1 == (UDynamicMesh *)0x0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMorphTargetToSkeletalMesh_InvalidInput2",
                          L"CopyMorphTargetToSkeletalMesh: FromDynamicMesh is Null");
      UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return (UDynamicMesh *)0x0;
    }
    pwVar3 = L"CopyMorphTargetToSkeletalMesh: Not currently supported at Runtime";
    pwVar2 = L"CopyMorphTargetToSkeletalMesh_EditorOnly";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return param_1;
}

// CopySkinWeightProfileToSkeletalMesh @ 14cdd1480

UDynamicMesh * __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::CopySkinWeightProfileToSkeletalMesh
          (UDynamicMesh *param_1,USkeletalMesh *param_2,FName param_3,FName param_4,
          FGeometryScriptCopySkinWeightProfileToAssetOptions *param_5,
          FGeometryScriptMeshWriteLOD param_6,EGeometryScriptOutcomePins *param_7,
          UGeometryScriptDebug *param_8)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  *param_7 = Failure;
  if (param_2 == (USkeletalMesh *)0x0) {
    pwVar3 = L"CopySkinWeightProfileToSkeletalMesh: ToSkeletalMeshAsset is Null";
    pwVar2 = L"CopySkinWeightProfileToSkeletalMesh_InvalidInput1";
  }
  else {
    if (param_1 == (UDynamicMesh *)0x0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopySkinWeightProfileToSkeletalMesh_InvalidInput2",
                          L"CopySkinWeightProfileToSkeletalMesh: FromDynamicMesh is Null");
      UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return (UDynamicMesh *)0x0;
    }
    pwVar3 = L"CopySkinWeightProfileToSkeletalMesh: Not currently supported at Runtime";
    pwVar2 = L"CopySkinWeightProfileToSkeletalMesh_EditorOnly";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return param_1;
}

// GetLODMaterialListFromSkeletalMesh @ 14cdd6f80

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::GetLODMaterialListFromSkeletalMesh
          (USkeletalMesh *param_1,FGeometryScriptMeshReadLOD param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_5,EGeometryScriptOutcomePins *param_6,
          UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  *param_6 = Failure;
  if (param_1 == (USkeletalMesh *)0x0) {
    pwVar3 = L"GetLODMaterialListFromSkeletalMesh: FromSkeletalMeshAsset is Null";
    pwVar2 = L"GetLODMaterialListFromSkeletalMesh_InvalidInput1";
  }
  else {
    pwVar3 = L"GetLODMaterialListFromSkeletalMesh: Not available at Runtime";
    pwVar2 = L"GetLODMaterialListFromSkeletalMesh_EditorOnly";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshAssetFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// GetMaterialListFromSkeletalMesh @ 14cdd72c0

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromSkeletalMesh
          (USkeletalMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,UGeometryScriptDebug *param_4)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_48;
  FText local_40;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"GetMaterialListFromSkeletalMesh_InvalidInput1",
                        L"GetMaterialListFromSkeletalMesh: FromSkeletalMeshAsset is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar8);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x3c0))();
    uVar11 = *(uint *)(plVar9 + 1);
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar11 = *(uint *)(plVar9 + 1);
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar2 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar11,&param_3->AllocatorInstance,0,piVar2);
    }
    iVar7 = (int)plVar9[1];
    uVar11 = 0;
    if (0 < iVar7) {
      lVar12 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < iVar7) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_48 = *(undefined8 *)(*plVar9 + lVar12);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 8)) &&
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
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
        uVar6 = 0;
        if ((int)uVar11 < (int)plVar9[1]) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        pFVar10 = (FScriptContainerElement *)(*plVar9 + 8 + lVar12);
        if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)*piVar2 * 8)) &&
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
        iVar7 = param_3->ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_3->AllocatorInstance,piVar2);
        }
        param_3->ArrayNum = iVar7 + 1;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x30;
        *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             *(undefined8 *)pFVar10;
        iVar7 = (int)plVar9[1];
      } while ((int)uVar11 < iVar7);
    }
  }
  return;
}

// GetMaterialListFromStaticMesh @ 14cdd7600

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromStaticMesh
          (UStaticMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,UGeometryScriptDebug *param_4)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_48;
  FText local_40;
  
  if (param_1 == (UStaticMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"GetMaterialListFromStaticMesh_InvalidInput1",
                        L"GetMaterialListFromStaticMesh: FromStaticMeshAsset is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar8);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    uVar10 = (param_1->StaticMaterials).ArrayNum;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar10 = (param_1->StaticMaterials).ArrayNum;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar2 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar10,&param_3->AllocatorInstance,0,piVar2);
    }
    iVar7 = (param_1->StaticMaterials).ArrayNum;
    uVar10 = 0;
    if (0 < iVar7) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_48 = *(undefined8 *)((param_1->StaticMaterials).AllocatorInstance.Data + lVar11);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 8)) &&
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
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
        uVar6 = 0;
        if ((int)uVar10 < (param_1->StaticMaterials).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        pFVar9 = (param_1->StaticMaterials).AllocatorInstance.Data + lVar11 + 8;
        if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (longlong)*piVar2 * 8)) &&
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
        iVar7 = param_3->ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_3->AllocatorInstance,piVar2);
        }
        param_3->ArrayNum = iVar7 + 1;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x38;
        *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             *(undefined8 *)pFVar9;
        iVar7 = (param_1->StaticMaterials).ArrayNum;
      } while ((int)uVar10 < iVar7);
    }
  }
  return;
}

// GetNumStaticMeshLODsOfType @ 14cdd7c60

int __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::GetNumStaticMeshLODsOfType
          (UStaticMesh *param_1,EGeometryScriptLODType param_2)

{
  FStaticMeshRenderData *pFVar1;
  
  if (((param_1 != (UStaticMesh *)0x0) && (param_2 == RenderData)) &&
     (param_1->bAllowCPUAccess != '\0')) {
    pFVar1 = (param_1->RenderData).Ptr;
    if (pFVar1 != (FStaticMeshRenderData *)0x0) {
      return (pFVar1->LODResources).Array.ArrayNum;
    }
    return 0;
  }
  return 0;
}

// GetPrivateStaticClass @ 14cdd8c20

UClass * __cdecl UGeometryScriptLibrary_StaticMeshFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_StaticMeshFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_StaticMeshFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_StaticMeshFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.InnerSingleton;
}

// GetSectionMaterialListFromStaticMesh @ 14cdd91f0

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh
          (UStaticMesh *param_1,FGeometryScriptMeshReadLOD param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_5,EGeometryScriptOutcomePins *param_6,
          UGeometryScriptDebug *param_7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint local_58 [2];
  undefined8 local_50;
  FText local_48;
  FText local_38;
  
  *param_6 = Failure;
  if (param_1 == (UStaticMesh *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"GetSectionMaterialListFromStaticMesh_InvalidInput1",
                         L"GetSectionMaterialListFromStaticMesh: FromStaticMeshAsset is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar10);
  }
  else {
    if (param_2.LODType == RenderData) {
      piVar1 = &param_3->ArrayMax;
      param_3->ArrayNum = 0;
      if (param_3->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&param_3->AllocatorInstance,0,piVar1);
      }
      piVar2 = &param_4->ArrayMax;
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_4->AllocatorInstance,0,piVar2);
      }
      piVar3 = &param_5->ArrayMax;
      param_5->ArrayNum = 0;
      if (param_5->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&param_5->AllocatorInstance,0,piVar3);
      }
      iVar8 = (param_1->StaticMaterials).ArrayNum;
      local_58[0] = 0;
      if (0 < iVar8) {
        do {
          uVar9 = local_58[0];
          uVar7 = 0;
          if ((int)local_58[0] < iVar8) {
            uVar7 = ~local_58[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_50 = *(undefined8 *)
                      ((param_1->StaticMaterials).AllocatorInstance.Data +
                      (longlong)(int)uVar9 * 0x38);
          pFVar4 = (param_3->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = param_3->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar8 + 1;
          *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_50;
          pFVar4 = (param_4->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 < pFVar4 + (longlong)*piVar2 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = param_4->ArrayNum;
          if (iVar8 == *piVar2) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_4->AllocatorInstance,piVar2);
          }
          param_4->ArrayNum = iVar8 + 1;
          *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_58[0];
          lVar11 = (longlong)(int)local_58[0];
          uVar9 = 0;
          if ((int)local_58[0] < (param_1->StaticMaterials).ArrayNum) {
            uVar9 = ~local_58[0] >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar12 = (param_1->StaticMaterials).AllocatorInstance.Data + lVar11 * 0x38 + 8;
          pFVar4 = (param_5->AllocatorInstance).Data;
          if (((pFVar4 <= pFVar12) && (pFVar12 < pFVar4 + (longlong)*piVar3 * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = param_5->ArrayNum;
          if (iVar8 == *piVar3) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_5->AllocatorInstance,piVar3);
          }
          param_5->ArrayNum = iVar8 + 1;
          *(undefined8 *)((param_5->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               *(undefined8 *)pFVar12;
          iVar8 = (param_1->StaticMaterials).ArrayNum;
          local_58[0] = local_58[0] + 1;
        } while ((int)local_58[0] < iVar8);
      }
      *param_6 = Success;
      return;
    }
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_38,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"GetSectionMaterialListFromStaticMesh_EditorOnly",
                         L"GetSectionMaterialListFromStaticMesh: Source Models are not available at Runtime"
                        );
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar10);
    local_48.TextData.Reference = local_38.TextData.Reference;
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions @ 14cde73a0

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::
StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCheckStaticMeshHasAvailableLOD @ 14cdf5880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCheckStaticMeshHasAvailableLOD
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UStaticMesh *pUVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  FText *this;
  byte *pbVar10;
  byte local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  int iStack_74;
  longlong local_70;
  UStaticMesh *local_68;
  FText local_60;
  undefined2 local_50;
  ITextData *local_48;
  uint local_40;
  
  local_68 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = local_78 & 0xffffff00;
  iStack_74 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = 0;
  pbVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar10 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pUVar5 = local_68;
  lVar4 = local_70;
  iVar8 = iStack_74;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pbVar10 = 1;
  if (local_68 == (UStaticMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_60,L"UGeometryScriptLibrary_MeshAssetFunctions",
                      L"CheckStaticMeshHasAvailableLOD_InvalidInput1",
                      L"CheckStaticMeshHasAvailableLOD: FromStaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_48 = (this->TextData).Reference;
    local_50 = 0x200;
    if (local_48 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48 + 8))(local_48,local_res18);
    }
    local_40 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_50) &&
          (&local_50 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = *(int *)(lVar4 + 0x30);
      if (iVar8 == *(int *)(lVar4 + 0x34)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar8 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar8 * 0x18);
      *puVar1 = (undefined1)local_50;
      puVar1[1] = local_50._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_48;
      if (local_48 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48 + 8))(local_48,local_res20);
      }
      *(uint *)(puVar1 + 0x10) = local_40;
    }
    if (local_48 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48 + 0x10))();
    }
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
  }
  else if ((char)local_78 == '\x03') {
    if ((iStack_74 < 0) || (iVar9 = UStaticMesh::GetNumLODs(local_68), iVar9 <= iVar8)) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *pbVar10 = bVar7;
    if (pUVar5->bAllowCPUAccess == '\0') {
      *pbVar10 = 1;
      bVar7 = 1;
    }
    *(byte *)param_3 = bVar7 ^ 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execConvertMaterialListToMaterialMap @ 14cdfa230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execConvertMaterialListToMaterialMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TSet<TTuple<FName,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>,FDefaultSetAllocator>
  *pTVar2;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStack_b8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_98;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar3 = &local_88;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar4 = &local_98;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = (TSet<TTuple<FName,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>,FDefaultSetAllocator>
            *)ConvertMaterialListToMaterialMap
                        ((TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
                          *)local_78,pTVar3,pTVar4);
  if (param_3 != pTVar2) {
    TSet<TTuple<FName,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>,FDefaultSetAllocator>_>
              (param_3,pTVar2);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execConvertMaterialMapToMaterialList @ 14cdfa3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execConvertMaterialMapToMaterialList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
  *pTVar3;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 auStackY_c8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_98;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar3 = (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
            *)local_78;
  if ((TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
       *)0x0) {
    pTVar3 = (TMap<FName,UMaterialInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UMaterialInterface_*,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar4 = &local_88;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar5 = &local_98;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertMaterialMapToMaterialList(pTVar3,pTVar4,pTVar5);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execCopyMeshFromSkeletalMesh @ 14cdfb4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  code *pcVar6;
  uint uVar7;
  UGeometryScriptDebug *pUVar8;
  UDynamicMesh *this;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  FText *pFVar12;
  longlong *plVar13;
  FReferenceSkeleton *pFVar14;
  longlong lVar15;
  uint uVar16;
  uchar *puVar17;
  uchar local_res10 [8];
  undefined8 *local_res18;
  undefined4 local_res20 [2];
  uint local_388;
  uint uStack_384;
  undefined2 local_380;
  ITextData *local_378;
  uint local_370;
  undefined2 local_368;
  ITextData *local_360;
  uint local_358;
  undefined2 local_350;
  ITextData *local_348;
  uint local_340;
  undefined2 local_338;
  ITextData *local_330;
  uint local_328;
  undefined4 local_320;
  UGeometryScriptDebug *local_318;
  UDynamicMesh *local_310;
  longlong *local_308;
  uint local_300;
  uint uStack_2fc;
  ConversionOptions local_2f8;
  undefined1 local_2d8 [4];
  undefined1 local_2d4 [4];
  undefined1 local_2d0 [4];
  undefined1 local_2cc [4];
  undefined1 local_2c8 [4];
  undefined1 local_2c4 [4];
  undefined1 local_2c0 [8];
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FDynamicMesh3 local_268;
  
  local_308 = (longlong *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  local_310 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_310,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_310);
  }
  local_res20[0] = 0x1010101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_388 = local_388 & 0xffffff00;
  uStack_384 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_388,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_388);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_318 = (UGeometryScriptDebug *)0x0;
  puVar17 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  plVar9 = local_308;
  this = local_310;
  pUVar8 = local_318;
  uVar7 = uStack_384;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_300 = local_388;
  uStack_2fc = uStack_384;
  local_320 = local_res20[0];
  *puVar17 = '\0';
  if (local_308 == (longlong *)0x0) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2b8,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"CopyMeshFromSkeletalMesh_InvalidInput1",
                         L"CopyMeshFromSkeletalMesh: FromSkeletalMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar12);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_378 = (pFVar12->TextData).Reference;
    local_380 = 0x200;
    if (local_378 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378 + 8))(local_378,local_2d8);
    }
    local_370 = pFVar12->Flags;
    if (pUVar8 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar8->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_380) &&
          ((FScriptContainerElement *)&local_380 <
           pFVar4 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (pUVar8->Messages).ArrayNum;
      piVar1 = &(pUVar8->Messages).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
      }
      (pUVar8->Messages).ArrayNum = iVar11 + 1;
      pFVar4 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar11 * 0x18;
      *pFVar4 = local_380._0_1_;
      pFVar4[1] = local_380._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_378;
      if (local_378 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_378 + 8))(local_378,local_2d4);
      }
      *(uint *)(pFVar4 + 0x10) = local_370;
    }
    if (local_378 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378 + 0x10))();
    }
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_310 == (UDynamicMesh *)0x0) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_2a8,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshFromSkeletalMesh_InvalidInput2",
                           L"CopyMeshFromSkeletalMesh: ToDynamicMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar12);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_360 = (pFVar12->TextData).Reference;
      local_368 = 0x200;
      if (local_360 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_360 + 8))(local_360,local_2d0);
      }
      local_358 = pFVar12->Flags;
      if (pUVar8 != (UGeometryScriptDebug *)0x0) {
        pFVar4 = (pUVar8->Messages).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_368) &&
            ((FScriptContainerElement *)&local_368 <
             pFVar4 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (pUVar8->Messages).ArrayNum;
        piVar1 = &(pUVar8->Messages).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
        }
        (pUVar8->Messages).ArrayNum = iVar11 + 1;
        pFVar4 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar11 * 0x18;
        *pFVar4 = local_368._0_1_;
        pFVar4[1] = local_368._1_1_;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(ITextData **)(pFVar4 + 8) = local_360;
        if (local_360 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_360 + 8))(local_360,local_2cc);
        }
        *(uint *)(pFVar4 + 0x10) = local_358;
      }
      if (local_360 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_360 + 0x10))();
      }
      if (local_2a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
      }
      *local_res18 = 0;
      return;
    }
    if ((char)local_388 == '\x03') {
      plVar13 = (longlong *)(**(code **)(*local_308 + 0x398))(local_308);
      if (plVar13 == (longlong *)0x0) {
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_288,L"UGeometryScriptLibrary_MeshAssetFunctions",
                             L"CopyMeshFromSkeletalMesh_RenderDataNotAvailable",
                             L"CopyMeshFromSkeletalMesh: Renderdata is not available");
        if (1 < (byte)LogGeometry._0_1_) {
          FText::ToString(pFVar12);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        }
        local_330 = (pFVar12->TextData).Reference;
        local_338 = 0x200;
        if (local_330 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_330 + 8))(local_330,local_2c0);
        }
        local_328 = pFVar12->Flags;
        if (pUVar8 != (UGeometryScriptDebug *)0x0) {
          pFVar4 = (pUVar8->Messages).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_338) &&
              ((FScriptContainerElement *)&local_338 <
               pFVar4 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (pUVar8->Messages).ArrayNum;
          piVar1 = &(pUVar8->Messages).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
          }
          (pUVar8->Messages).ArrayNum = iVar11 + 1;
          pFVar4 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar11 * 0x18;
          *pFVar4 = local_338._0_1_;
          pFVar4[1] = local_338._1_1_;
          *(undefined8 *)(pFVar4 + 8) = 0;
          *(ITextData **)(pFVar4 + 8) = local_330;
          if (local_330 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_330 + 8))(local_330,&local_300);
          }
          *(uint *)(pFVar4 + 0x10) = local_328;
        }
        local_278.TextData.Reference = local_288.TextData.Reference;
        if (local_330 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_330 + 0x10))();
          local_278.TextData.Reference = local_288.TextData.Reference;
        }
      }
      else {
        if ((int)uVar7 <= (int)plVar13[1] + -1) {
          lVar15 = (longlong)(int)uStack_2fc;
          uVar16 = 0;
          if ((int)uVar7 < (int)plVar13[1]) {
            uVar16 = ~uVar7 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = *(FSkeletalMeshLODRenderData **)(*plVar13 + lVar15 * 8);
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
          local_2f8.bWantTangents = (bool)local_320._1_1_;
          local_2f8.BuildScale.field0_0x0._s_0.X =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_2f8.BuildScale.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_2f8.bWantNormals = true;
          local_2f8.BuildScale.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_2f8.bWantUVs = true;
          local_2f8.bWantVertexColors = true;
          local_2f8.bWantMaterialIDs = true;
          local_2f8.bWantSkinWeights = true;
          pFVar14 = (FReferenceSkeleton *)(**(code **)(*plVar9 + 800))(plVar9);
          UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert
                    (pFVar5,pFVar14,&local_2f8,&local_268);
          UDynamicMesh::SetMesh(this,&local_268);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
          *puVar17 = '\x01';
          goto LAB_14cdfbd98;
        }
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_298,L"UGeometryScriptLibrary_MeshAssetFunctions",
                             L"CopyMeshFromSkeletalMesh_RenderDataLDONotAvailable",
                             L"CopyMeshFromSkeletalMesh: Renderdata for specified LOD is not available"
                            );
        if (1 < (byte)LogGeometry._0_1_) {
          FText::ToString(pFVar12);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        }
        local_348 = (pFVar12->TextData).Reference;
        local_350 = 0x200;
        if (local_348 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_348 + 8))(local_348,local_2c8);
        }
        local_340 = pFVar12->Flags;
        if (pUVar8 != (UGeometryScriptDebug *)0x0) {
          pFVar4 = (pUVar8->Messages).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_350) &&
              ((FScriptContainerElement *)&local_350 <
               pFVar4 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (pUVar8->Messages).ArrayNum;
          piVar1 = &(pUVar8->Messages).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
          }
          (pUVar8->Messages).ArrayNum = iVar11 + 1;
          pFVar4 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar11 * 0x18;
          *pFVar4 = local_350._0_1_;
          pFVar4[1] = local_350._1_1_;
          *(undefined8 *)(pFVar4 + 8) = 0;
          *(ITextData **)(pFVar4 + 8) = local_348;
          if (local_348 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_348 + 8))(local_348,local_2c4);
          }
          *(uint *)(pFVar4 + 0x10) = local_340;
        }
        local_278.TextData.Reference = local_298.TextData.Reference;
        if (local_348 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_348 + 0x10))();
          local_278.TextData.Reference = local_298.TextData.Reference;
        }
      }
    }
    else {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_278,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshFromSkeletalMesh_SourceMesh_EditorOnly",
                           L"CopyMeshFromSkeletalMesh: Source Meshes are not available at Runtime");
      UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar12);
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
  }
LAB_14cdfbd98:
  *local_res18 = this;
  return;
}

// execCopyMeshFromStaticMesh @ 14cdfbdc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  UDynamicMesh *this;
  UStaticMesh *pUVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  uint uVar11;
  EMeshLODType EVar12;
  uchar *puVar13;
  uchar local_res10 [8];
  undefined8 *local_res18;
  undefined4 local_res20 [2];
  FStaticMeshConversionOptions local_338;
  undefined4 local_330;
  uint local_328;
  int iStack_324;
  undefined2 local_320;
  ITextData *local_318;
  uint local_310;
  undefined2 local_308;
  ITextData *local_300;
  uint local_2f8;
  undefined2 local_2f0;
  ITextData *local_2e8;
  uint local_2e0;
  longlong local_2d8;
  UDynamicMesh *local_2d0;
  UStaticMesh *local_2c8;
  FText local_2c0;
  undefined1 local_2b0 [4];
  undefined1 local_2ac [4];
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  uint local_298;
  int iStack_294;
  FText local_290;
  FText local_280;
  FDynamicMesh3 local_268;
  
  local_2c8 = (UStaticMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_2d0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d0);
  }
  local_res20[0] = 0x1010101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_328 = local_328 & 0xffffff00;
  iStack_324 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_328,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_328);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_2d8 = 0;
  puVar13 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d8);
  }
  pUVar7 = local_2c8;
  this = local_2d0;
  lVar6 = local_2d8;
  uVar5 = local_res20[0];
  local_298 = local_328;
  iStack_294 = iStack_324;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_330 = local_res20[0];
  uVar11 = local_328 & 0xff;
  *puVar13 = '\0';
  if (local_2c8 == (UStaticMesh *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_290,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"CopyMeshFromAsset_InvalidInput1",
                         L"CopyMeshFromStaticMesh: FromStaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_318 = (pFVar10->TextData).Reference;
    local_320 = 0x200;
    if (local_318 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318 + 8))(local_318,local_2b0);
    }
    local_310 = pFVar10->Flags;
    if (lVar6 != 0) {
      if (((*(undefined2 **)(lVar6 + 0x28) <= &local_320) &&
          (&local_320 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(lVar6 + 0x30);
      if (iVar9 == *(int *)(lVar6 + 0x34)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
      }
      *(int *)(lVar6 + 0x30) = iVar9 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar9 * 0x18);
      *puVar2 = (undefined1)local_320;
      puVar2[1] = local_320._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_318;
      if (local_318 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_318 + 8))(local_318,local_2ac);
      }
      *(uint *)(puVar2 + 0x10) = local_310;
    }
    local_2c0.TextData.Reference = local_290.TextData.Reference;
    if (local_318 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318 + 0x10))();
      local_2c0.TextData.Reference = local_290.TextData.Reference;
    }
  }
  else {
    if (local_2d0 == (UDynamicMesh *)0x0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_280,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshFromAsset_InvalidInput2",
                           L"CopyMeshFromStaticMesh: ToDynamicMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_300 = (pFVar10->TextData).Reference;
      local_308 = 0x200;
      if (local_300 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300 + 8))(local_300,local_2a8);
      }
      local_2f8 = pFVar10->Flags;
      if (lVar6 != 0) {
        if (((*(undefined2 **)(lVar6 + 0x28) <= &local_308) &&
            (&local_308 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(lVar6 + 0x30);
        if (iVar9 == *(int *)(lVar6 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
        }
        *(int *)(lVar6 + 0x30) = iVar9 + 1;
        puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar9 * 0x18);
        *puVar2 = (undefined1)local_308;
        puVar2[1] = local_308._1_1_;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(ITextData **)(puVar2 + 8) = local_300;
        if (local_300 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_300 + 8))(local_300,local_2a4);
        }
        *(uint *)(puVar2 + 0x10) = local_2f8;
      }
      if (local_300 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300 + 0x10))();
      }
      if (local_280.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
      }
      *local_res18 = 0;
      return;
    }
    if ((char)local_328 == '\0') {
      EVar12 = MaxAvailable;
    }
    else if (uVar11 == 1) {
      EVar12 = HiResSourceModel;
    }
    else if (uVar11 == 2) {
      EVar12 = SourceModel;
    }
    else {
      if ((uVar11 != 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshAssetFunctions.cpp"
                             ,0x3c,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar12 = RenderData;
    }
    local_338.bRequestTangents = (bool)local_330._1_1_;
    local_338.bIgnoreRemoveDegenerates = (bool)local_330._2_1_;
    local_338.bUseBuildScale = (bool)local_330._3_1_;
    local_338.bApplyBuildSettings = SUB41(uVar5,0);
    local_338.bUseSectionMaterialIndices = true;
    local_338.bIncludeNonManifoldSrcInfo = true;
    FText::FText(&local_2c0);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
    bVar8 = UE::Conversion::StaticMeshToDynamicMesh
                      (pUVar7,&local_268,&local_2c0,&local_338,EVar12,iStack_294,true);
    if (bVar8) {
      UDynamicMesh::SetMesh(this,&local_268);
      *puVar13 = '\x01';
    }
    else {
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_2c0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_2f0 = 0x200;
      local_2e8 = local_2c0.TextData.Reference;
      if (local_2c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2c0.TextData.Reference + 8))
                  (local_2c0.TextData.Reference,local_2a0);
      }
      local_2e0 = local_2c0.Flags;
      if (lVar6 != 0) {
        if (((*(undefined2 **)(lVar6 + 0x28) <= &local_2f0) &&
            (&local_2f0 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(lVar6 + 0x30);
        if (iVar9 == *(int *)(lVar6 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
        }
        *(int *)(lVar6 + 0x30) = iVar9 + 1;
        puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar9 * 0x18);
        *puVar2 = (undefined1)local_2f0;
        puVar2[1] = local_2f0._1_1_;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(ITextData **)(puVar2 + 8) = local_2e8;
        if (local_2e8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2e8 + 8))(local_2e8,local_29c);
        }
        *(uint *)(puVar2 + 0x10) = local_2e0;
      }
      if (local_2e8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e8 + 0x10))();
      }
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  }
  if (local_2c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
  }
  *local_res18 = this;
  return;
}

// execCopyMeshFromStaticMeshV2 @ 14cdfc500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromStaticMeshV2
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  UDynamicMesh *this;
  UStaticMesh *pUVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  uint uVar11;
  EMeshLODType EVar12;
  uchar *puVar13;
  uchar local_res10 [8];
  undefined8 *local_res18;
  undefined1 local_res20;
  undefined4 local_338;
  FStaticMeshConversionOptions local_334;
  int local_32c;
  undefined4 local_328;
  uint local_320;
  int iStack_31c;
  undefined2 local_318;
  ITextData *local_310;
  uint local_308;
  undefined2 local_300;
  ITextData *local_2f8;
  uint local_2f0;
  undefined2 local_2e8;
  ITextData *local_2e0;
  uint local_2d8;
  longlong local_2d0;
  UDynamicMesh *local_2c8;
  UStaticMesh *local_2c0;
  FText local_2b8;
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  undefined1 local_298 [4];
  undefined1 local_294 [4];
  uint local_290;
  int iStack_28c;
  FText local_288;
  FText local_278;
  FDynamicMesh3 local_268;
  
  local_2c0 = (UStaticMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c0);
  }
  local_2c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_338 = 0x1010101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_338,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_338);
  }
  local_320 = local_320 & 0xffffff00;
  iStack_31c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_320,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_320);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_32c = 0;
  puVar13 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_32c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_32c);
  }
  local_res20 = local_32c != 0;
  local_2d0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d0);
  }
  pUVar7 = local_2c0;
  this = local_2c8;
  lVar6 = local_2d0;
  uVar5 = local_338;
  local_290 = local_320;
  iStack_28c = iStack_31c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar11 = local_320 & 0xff;
  local_328 = local_338;
  *puVar13 = '\0';
  if (local_2c0 == (UStaticMesh *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_288,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"CopyMeshFromAsset_InvalidInput1",
                         L"CopyMeshFromStaticMesh: FromStaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_310 = (pFVar10->TextData).Reference;
    local_318 = 0x200;
    if (local_310 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310 + 8))(local_310,local_2a8);
    }
    local_308 = pFVar10->Flags;
    if (lVar6 != 0) {
      if (((*(undefined2 **)(lVar6 + 0x28) <= &local_318) &&
          (&local_318 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(lVar6 + 0x30);
      if (iVar9 == *(int *)(lVar6 + 0x34)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
      }
      *(int *)(lVar6 + 0x30) = iVar9 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar9 * 0x18);
      *puVar2 = (undefined1)local_318;
      puVar2[1] = local_318._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_310;
      if (local_310 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_310 + 8))(local_310,local_2a4);
      }
      *(uint *)(puVar2 + 0x10) = local_308;
    }
    local_2b8.TextData.Reference = local_288.TextData.Reference;
    if (local_310 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310 + 0x10))();
      local_2b8.TextData.Reference = local_288.TextData.Reference;
    }
  }
  else {
    if (local_2c8 == (UDynamicMesh *)0x0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_278,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshFromAsset_InvalidInput2",
                           L"CopyMeshFromStaticMesh: ToDynamicMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_2f8 = (pFVar10->TextData).Reference;
      local_300 = 0x200;
      if (local_2f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f8 + 8))(local_2f8,local_2a0);
      }
      local_2f0 = pFVar10->Flags;
      if (lVar6 != 0) {
        if (((*(undefined2 **)(lVar6 + 0x28) <= &local_300) &&
            (&local_300 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(lVar6 + 0x30);
        if (iVar9 == *(int *)(lVar6 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
        }
        *(int *)(lVar6 + 0x30) = iVar9 + 1;
        puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar9 * 0x18);
        *puVar2 = (undefined1)local_300;
        puVar2[1] = local_300._1_1_;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(ITextData **)(puVar2 + 8) = local_2f8;
        if (local_2f8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2f8 + 8))(local_2f8,local_29c);
        }
        *(uint *)(puVar2 + 0x10) = local_2f0;
      }
      if (local_2f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f8 + 0x10))();
      }
      if (local_278.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
      }
      *local_res18 = 0;
      return;
    }
    if ((char)local_320 == '\0') {
      EVar12 = MaxAvailable;
    }
    else if (uVar11 == 1) {
      EVar12 = HiResSourceModel;
    }
    else if (uVar11 == 2) {
      EVar12 = SourceModel;
    }
    else {
      if ((uVar11 != 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshAssetFunctions.cpp"
                             ,0x3c,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar12 = RenderData;
    }
    local_334.bRequestTangents = (bool)local_328._1_1_;
    local_334.bIgnoreRemoveDegenerates = (bool)local_328._2_1_;
    local_334.bUseBuildScale = (bool)local_328._3_1_;
    local_334.bUseSectionMaterialIndices = (bool)local_res20;
    local_334.bApplyBuildSettings = SUB41(uVar5,0);
    local_334.bIncludeNonManifoldSrcInfo = true;
    FText::FText(&local_2b8);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
    bVar8 = UE::Conversion::StaticMeshToDynamicMesh
                      (pUVar7,&local_268,&local_2b8,&local_334,EVar12,iStack_28c,true);
    if (bVar8) {
      UDynamicMesh::SetMesh(this,&local_268);
      *puVar13 = '\x01';
    }
    else {
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_2b8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_2e8 = 0x200;
      local_2e0 = local_2b8.TextData.Reference;
      if (local_2b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b8.TextData.Reference + 8))
                  (local_2b8.TextData.Reference,local_298);
      }
      local_2d8 = local_2b8.Flags;
      if (lVar6 != 0) {
        if (((*(undefined2 **)(lVar6 + 0x28) <= &local_2e8) &&
            (&local_2e8 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(lVar6 + 0x30);
        if (iVar9 == *(int *)(lVar6 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
        }
        *(int *)(lVar6 + 0x30) = iVar9 + 1;
        puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar9 * 0x18);
        *puVar2 = (undefined1)local_2e8;
        puVar2[1] = local_2e8._1_1_;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(ITextData **)(puVar2 + 8) = local_2e0;
        if (local_2e0 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2e0 + 8))(local_2e0,local_294);
        }
        *(uint *)(puVar2 + 0x10) = local_2d8;
      }
      if (local_2e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e0 + 0x10))();
      }
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  }
  if (local_2b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
  }
  *local_res18 = this;
  return;
}

// execCopyMeshToSkeletalMesh @ 14cdfd850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshToSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  UGeometryScriptDebug *pUVar6;
  TObjectPtr<UMaterialInterface> *pTVar7;
  void *_Src;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  longlong lVar11;
  longlong lVar12;
  uchar *puVar13;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_248 [2];
  undefined2 local_240;
  ITextData *local_238;
  uint local_230;
  undefined2 local_228;
  ITextData *local_220;
  uint local_218;
  UGeometryScriptDebug *local_210;
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  TObjectPtr<UMaterialInterface> *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  FMeshNaniteSettings local_1b8;
  undefined2 local_148;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  undefined1 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  FMeshNaniteSettings local_f8;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_200 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_208 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_1f8 = 0;
  uStack_1c0 = 0x42c80000;
  local_1bc = 0;
  local_1f4 = 0x10000;
  local_1b8.bVoxelOpacity = '\0';
  local_1b8.bVoxelNDF = '\x01';
  local_1b8.bSeparable = '\0';
  local_1b8.bLerpUVs = '\x01';
  local_1b8.bExplicitTangents = '\0';
  local_1b8.bEnabled = '\0';
  local_1f0 = 0;
  local_1e8 = (TObjectPtr<UMaterialInterface> *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 1;
  local_1b8.ShapePreservation = None;
  local_1b8.PositionPrecision = -0x80000000;
  local_1b8.NormalPrecision = -1;
  local_1b8.TangentPrecision = -1;
  local_1b8.BoneWeightPrecision = -1;
  local_1b8.TargetMinimumResidencyInKB = 0;
  local_1b8.KeepPercentTriangles = 1.0;
  local_1b8.TrimRelativeError = 0.0;
  local_1b8.GenerateFallback = PlatformDefault;
  local_1b8.FallbackTarget = Auto;
  local_1b8.FallbackPercentTriangles = 1.0;
  local_1b8.FallbackRelativeError = 1.0;
  local_1b8.MaxEdgeLengthFactor = 0.0;
  local_1b8.NumRays = 0x40;
  local_1b8.VoxelLevel = 0;
  local_1b8.RayBackUp = 0.0;
  local_1b8.DisplacementUVChannel = 0;
  local_1b8.DisplacementMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.DisplacementMaps.ArrayNum = 0;
  local_1b8.DisplacementMaps.ArrayMax = 0;
  local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.NaniteAssemblyData.Parts.ArrayNum = 0;
  local_1b8.NaniteAssemblyData.Parts.ArrayMax = 0;
  local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.NaniteAssemblyData.Nodes.ArrayNum = 0;
  local_1b8.NaniteAssemblyData.Nodes.ArrayMax = 0;
  local_148 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_248[0] = local_248[0] & 0xffffff00;
  local_248[1] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_248,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_248);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_210 = (UGeometryScriptDebug *)0x0;
  puVar13 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  pTVar7 = local_1e8;
  pUVar6 = local_210;
  uVar5 = local_248[0];
  iVar9 = (int)local_1e0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_138 = (undefined1)local_1f8;
  local_137 = local_1f8._1_1_;
  local_136 = local_1f8._2_1_;
  local_135 = local_1f8._3_1_;
  local_134 = (undefined1)local_1f4;
  local_133 = local_1f4._1_1_;
  local_132 = local_1f4._2_1_;
  local_131 = local_1f4._3_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_130 = local_1f0;
  local_120 = (int)local_1e0;
  if ((int)local_1e0 == 0) {
    local_11c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_1e0,0,&local_128,(int)local_1e0,&local_11c);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              (local_128.Data,pTVar7,iVar9);
  }
  _Src = local_1d8;
  lVar12 = (longlong)(int)local_1d0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = (int)local_1d0;
  if ((int)local_1d0 == 0) {
    local_10c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_1d0,0,&local_118,(int)local_1d0,&local_10c);
    memcpy(local_118.Data,_Src,lVar12 << 3);
  }
  local_104 = CONCAT44(uStack_1c0,local_1c4);
  local_108 = local_1c8;
  local_fc = local_1bc;
  FMeshNaniteSettings::FMeshNaniteSettings(&local_f8,&local_1b8);
  lVar12 = local_200;
  local_88 = (undefined1)local_148;
  local_87 = local_148._1_1_;
  *puVar13 = '\0';
  if (local_200 == 0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"CopyMeshToSkeletalMesh_InvalidInput1",
                         L"CopyMeshToSkeletalMesh: FromDynamicMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_238 = (pFVar10->TextData).Reference;
    local_240 = 0x200;
    if (local_238 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238 + 8))(local_238,local_res18);
    }
    local_230 = pFVar10->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_240) &&
          ((FScriptContainerElement *)&local_240 <
           pFVar3 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      lVar12 = (longlong)iVar9;
      (pUVar6->Messages).ArrayNum = iVar9 + 1;
      pFVar3 = (pUVar6->Messages).AllocatorInstance.Data;
      pFVar3[lVar12 * 0x18] = local_240._0_1_;
      pFVar3[lVar12 * 0x18 + 1] = local_240._1_1_;
      *(undefined8 *)(pFVar3 + lVar12 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar12 * 0x18 + 8) = local_238;
      if (local_238 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238 + 8))(local_238,local_res20);
      }
      *(uint *)(pFVar3 + lVar12 * 0x18 + 0x10) = local_230;
    }
    if (local_238 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238 + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    DestructItems<FNaniteAssemblyNode,int>
              ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Nodes.ArrayNum);
    if ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
        (FNaniteAssemblyNode *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
    }
    DestructItems<FNaniteAssemblyPart,int>
              ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Parts.ArrayNum);
    if ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
        (FNaniteAssemblyPart *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data);
    }
    if (local_f8.DisplacementMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DisplacementMaps.AllocatorInstance.Data);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    lVar12 = 0;
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
  else {
    if (local_208 == 0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshToSkeletalMesh_InvalidInput2",
                           L"CopyMeshToSkeletalMesh: ToSkeletalMeshAsset is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_220 = (pFVar10->TextData).Reference;
      local_228 = 0x200;
      if (local_220 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_220 + 8))(local_220,local_80);
      }
      local_218 = pFVar10->Flags;
      if (pUVar6 != (UGeometryScriptDebug *)0x0) {
        pFVar3 = (pUVar6->Messages).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_228) &&
            ((FScriptContainerElement *)&local_228 <
             pFVar3 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (pUVar6->Messages).ArrayNum;
        piVar1 = &(pUVar6->Messages).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
        }
        lVar11 = (longlong)iVar9;
        (pUVar6->Messages).ArrayNum = iVar9 + 1;
        pFVar3 = (pUVar6->Messages).AllocatorInstance.Data;
        pFVar3[lVar11 * 0x18] = local_228._0_1_;
        pFVar3[lVar11 * 0x18 + 1] = local_228._1_1_;
        *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 8) = 0;
        *(ITextData **)(pFVar3 + lVar11 * 0x18 + 8) = local_220;
        if (local_220 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_220 + 8))(local_220,local_7c);
        }
        *(uint *)(pFVar3 + lVar11 * 0x18 + 0x10) = local_218;
      }
      local_58.TextData.Reference = local_68.TextData.Reference;
      if (local_220 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_220 + 0x10))();
        local_58.TextData.Reference = local_68.TextData.Reference;
      }
    }
    else if ((char)uVar5 == '\0') {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshToSkeletalMesh_EditorOnly",
                           L"CopyMeshToSkeletalMesh: Not currently supported at Runtime");
      UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar10);
      local_58.TextData.Reference = local_48.TextData.Reference;
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"UGeometryScriptLibrary_MeshAssetFunctions",
                           L"CopyMeshToSkeletalMesh_Unsupported",
                           L"CopyMeshToSkeletalMesh: Writing HiResSource LOD is not yet supported");
      UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar10);
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    DestructItems<FNaniteAssemblyNode,int>
              ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Nodes.ArrayNum);
    if ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
        (FNaniteAssemblyNode *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
    }
    DestructItems<FNaniteAssemblyPart,int>
              ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Parts.ArrayNum);
    if ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
        (FNaniteAssemblyPart *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data);
    }
    if (local_f8.DisplacementMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DisplacementMaps.AllocatorInstance.Data);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
  *(longlong *)param_3 = lVar12;
  DestructItems<FNaniteAssemblyNode,int>
            ((FNaniteAssemblyNode *)local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
             local_1b8.NaniteAssemblyData.Nodes.ArrayNum);
  if ((FNaniteAssemblyNode *)local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
      (FNaniteAssemblyNode *)0x0) {
    FMemory::Free(local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
  }
  DestructItems<FNaniteAssemblyPart,int>
            ((FNaniteAssemblyPart *)local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data,
             local_1b8.NaniteAssemblyData.Parts.ArrayNum);
  if ((FNaniteAssemblyPart *)local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
      (FNaniteAssemblyPart *)0x0) {
    FMemory::Free(local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data);
  }
  if (local_1b8.DisplacementMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.DisplacementMaps.AllocatorInstance.Data);
  }
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1e8 != (TObjectPtr<UMaterialInterface> *)0x0) {
    FMemory::Free(local_1e8);
  }
  return;
}

// execCopyMeshToStaticMesh @ 14cdfe100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshToStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  void *_Src;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uchar *puVar10;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined2 local_268;
  ITextData *local_260;
  uint local_258;
  undefined2 local_250;
  ITextData *local_248;
  uint local_240;
  undefined2 local_238;
  ITextData *local_230;
  uint local_228;
  undefined1 local_220 [4];
  undefined4 local_21c;
  longlong local_218;
  longlong local_210;
  longlong local_208 [2];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  TObjectPtr<UMaterialInterface> *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  FMeshNaniteSettings local_1b8;
  undefined2 local_148;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  undefined1 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  FMeshNaniteSettings local_f8;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_208[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_208);
  }
  local_210 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_1f8 = 0;
  uStack_1c0 = 0x42c80000;
  local_1bc = 0;
  local_1f4 = 0x10000;
  local_1b8.bVoxelOpacity = '\0';
  local_1b8.bVoxelNDF = '\x01';
  local_1b8.bSeparable = '\0';
  local_1b8.bLerpUVs = '\x01';
  local_1b8.bExplicitTangents = '\0';
  local_1b8.bEnabled = '\0';
  local_1f0 = 0;
  local_1e8 = (TObjectPtr<UMaterialInterface> *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 1;
  local_1b8.ShapePreservation = None;
  local_1b8.PositionPrecision = -0x80000000;
  local_1b8.NormalPrecision = -1;
  local_1b8.TangentPrecision = -1;
  local_1b8.BoneWeightPrecision = -1;
  local_1b8.TargetMinimumResidencyInKB = 0;
  local_1b8.KeepPercentTriangles = 1.0;
  local_1b8.TrimRelativeError = 0.0;
  local_1b8.GenerateFallback = PlatformDefault;
  local_1b8.FallbackTarget = Auto;
  local_1b8.FallbackPercentTriangles = 1.0;
  local_1b8.FallbackRelativeError = 1.0;
  local_1b8.MaxEdgeLengthFactor = 0.0;
  local_1b8.NumRays = 0x40;
  local_1b8.VoxelLevel = 0;
  local_1b8.RayBackUp = 0.0;
  local_1b8.DisplacementUVChannel = 0;
  local_1b8.DisplacementMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.DisplacementMaps.ArrayNum = 0;
  local_1b8.DisplacementMaps.ArrayMax = 0;
  local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.NaniteAssemblyData.Parts.ArrayNum = 0;
  local_1b8.NaniteAssemblyData.Parts.ArrayMax = 0;
  local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.NaniteAssemblyData.Nodes.ArrayNum = 0;
  local_1b8.NaniteAssemblyData.Nodes.ArrayMax = 0;
  local_148 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_220[0] = 0;
  local_21c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_220,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_220);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_218 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  pTVar4 = local_1e8;
  lVar2 = local_218;
  iVar6 = (int)local_1e0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = (int)local_1e0;
  local_138 = (undefined1)local_1f8;
  local_137 = local_1f8._1_1_;
  local_136 = local_1f8._2_1_;
  local_135 = local_1f8._3_1_;
  local_134 = (undefined1)local_1f4;
  local_133 = local_1f4._1_1_;
  local_132 = local_1f4._2_1_;
  local_131 = local_1f4._3_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_130 = local_1f0;
  if ((int)local_1e0 == 0) {
    local_11c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_1e0,0,&local_128,(int)local_1e0,&local_11c);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              (local_128.Data,pTVar4,iVar6);
  }
  _Src = local_1d8;
  lVar9 = (longlong)(int)local_1d0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = (int)local_1d0;
  if ((int)local_1d0 == 0) {
    local_10c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_1d0,0,&local_118,(int)local_1d0,&local_10c);
    memcpy(local_118.Data,_Src,lVar9 << 3);
  }
  local_104 = CONCAT44(uStack_1c0,local_1c4);
  local_108 = local_1c8;
  local_fc = local_1bc;
  FMeshNaniteSettings::FMeshNaniteSettings(&local_f8,&local_1b8);
  lVar9 = local_208[0];
  local_88 = (undefined1)local_148;
  local_87 = local_148._1_1_;
  *puVar10 = '\0';
  if (local_208[0] == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshToAsset_InvalidInput1",
                        L"CopyMeshToStaticMesh: FromDynamicMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_260 = (pFVar7->TextData).Reference;
    local_268 = 0x200;
    if (local_260 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260 + 8))(local_260,local_res20);
    }
    local_258 = pFVar7->Flags;
    if (lVar2 != 0) {
      if (((*(undefined2 **)(lVar2 + 0x28) <= &local_268) &&
          (&local_268 < *(undefined2 **)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar2 + 0x30);
      if (iVar6 == *(int *)(lVar2 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
      }
      lVar9 = (longlong)iVar6;
      *(int *)(lVar2 + 0x30) = iVar6 + 1;
      lVar2 = *(longlong *)(lVar2 + 0x28);
      *(undefined1 *)(lVar2 + lVar9 * 0x18) = (undefined1)local_268;
      *(undefined1 *)(lVar2 + 1 + lVar9 * 0x18) = local_268._1_1_;
      *(undefined8 *)(lVar2 + 8 + lVar9 * 0x18) = 0;
      *(ITextData **)(lVar2 + 8 + lVar9 * 0x18) = local_260;
      if (local_260 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_260 + 8))(local_260,local_80);
      }
      *(uint *)(lVar2 + 0x10 + lVar9 * 0x18) = local_258;
    }
    if (local_260 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260 + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    DestructItems<FNaniteAssemblyNode,int>
              ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Nodes.ArrayNum);
    if ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
        (FNaniteAssemblyNode *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
    }
    DestructItems<FNaniteAssemblyPart,int>
              ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Parts.ArrayNum);
    if ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
        (FNaniteAssemblyPart *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data);
    }
    if (local_f8.DisplacementMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DisplacementMaps.AllocatorInstance.Data);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    lVar9 = 0;
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
  else {
    if (local_210 == 0) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMeshToAsset_InvalidInput2",
                          L"CopyMeshToStaticMesh: ToStaticMeshAsset is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_248 = (pFVar7->TextData).Reference;
      local_250 = 0x200;
      if (local_248 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248 + 8))(local_248,local_7c);
      }
      local_240 = pFVar7->Flags;
      if (lVar2 != 0) {
        if (((*(undefined2 **)(lVar2 + 0x28) <= &local_250) &&
            (&local_250 < *(undefined2 **)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x34) * 0xc))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(lVar2 + 0x30);
        if (iVar6 == *(int *)(lVar2 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
        }
        lVar8 = (longlong)iVar6;
        *(int *)(lVar2 + 0x30) = iVar6 + 1;
        lVar2 = *(longlong *)(lVar2 + 0x28);
        *(undefined1 *)(lVar2 + lVar8 * 0x18) = (undefined1)local_250;
        *(undefined1 *)(lVar2 + 1 + lVar8 * 0x18) = local_250._1_1_;
        *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18) = 0;
        *(ITextData **)(lVar2 + 8 + lVar8 * 0x18) = local_248;
        if (local_248 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_248 + 8))(local_248,local_78);
        }
        *(uint *)(lVar2 + 0x10 + lVar8 * 0x18) = local_240;
      }
      local_48.TextData.Reference = local_58.TextData.Reference;
      if (local_248 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248 + 0x10))();
        local_48.TextData.Reference = local_58.TextData.Reference;
      }
    }
    else {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMeshToAsset_EditorOnly",
                          L"CopyMeshToStaticMesh: Not currently supported at Runtime");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_230 = (pFVar7->TextData).Reference;
      local_238 = 0x200;
      if (local_230 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_230 + 8))(local_230,local_74);
      }
      local_228 = pFVar7->Flags;
      if (lVar2 != 0) {
        if (((*(undefined2 **)(lVar2 + 0x28) <= &local_238) &&
            (&local_238 < *(undefined2 **)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x34) * 0xc))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(lVar2 + 0x30);
        if (iVar6 == *(int *)(lVar2 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
        }
        lVar8 = (longlong)iVar6;
        *(int *)(lVar2 + 0x30) = iVar6 + 1;
        lVar2 = *(longlong *)(lVar2 + 0x28);
        *(undefined1 *)(lVar2 + lVar8 * 0x18) = (undefined1)local_238;
        *(undefined1 *)(lVar2 + 1 + lVar8 * 0x18) = local_238._1_1_;
        *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18) = 0;
        *(ITextData **)(lVar2 + 8 + lVar8 * 0x18) = local_230;
        if (local_230 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_230 + 8))(local_230,local_70);
        }
        *(uint *)(lVar2 + 0x10 + lVar8 * 0x18) = local_228;
      }
      if (local_230 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_230 + 0x10))();
      }
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    DestructItems<FNaniteAssemblyNode,int>
              ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Nodes.ArrayNum);
    if ((FNaniteAssemblyNode *)local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
        (FNaniteAssemblyNode *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
    }
    DestructItems<FNaniteAssemblyPart,int>
              ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data,
               local_f8.NaniteAssemblyData.Parts.ArrayNum);
    if ((FNaniteAssemblyPart *)local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
        (FNaniteAssemblyPart *)0x0) {
      FMemory::Free(local_f8.NaniteAssemblyData.Parts.AllocatorInstance.Data);
    }
    if (local_f8.DisplacementMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DisplacementMaps.AllocatorInstance.Data);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
  *(longlong *)param_3 = lVar9;
  DestructItems<FNaniteAssemblyNode,int>
            ((FNaniteAssemblyNode *)local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data,
             local_1b8.NaniteAssemblyData.Nodes.ArrayNum);
  if ((FNaniteAssemblyNode *)local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data !=
      (FNaniteAssemblyNode *)0x0) {
    FMemory::Free(local_1b8.NaniteAssemblyData.Nodes.AllocatorInstance.Data);
  }
  DestructItems<FNaniteAssemblyPart,int>
            ((FNaniteAssemblyPart *)local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data,
             local_1b8.NaniteAssemblyData.Parts.ArrayNum);
  if ((FNaniteAssemblyPart *)local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data !=
      (FNaniteAssemblyPart *)0x0) {
    FMemory::Free(local_1b8.NaniteAssemblyData.Parts.AllocatorInstance.Data);
  }
  if (local_1b8.DisplacementMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.DisplacementMaps.AllocatorInstance.Data);
  }
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1e8 != (TObjectPtr<UMaterialInterface> *)0x0) {
    FMemory::Free(local_1e8);
  }
  return;
}

// execCopyMorphTargetToSkeletalMesh @ 14cdfeb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopyMorphTargetToSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined2 local_e8;
  ITextData *local_e0;
  uint local_d8;
  undefined2 local_d0;
  ITextData *local_c8;
  uint local_c0;
  undefined2 local_b8;
  ITextData *local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  FText local_60;
  FText local_50;
  FText local_40;
  
  local_80 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res18[0] = 0x100;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_98[0] = 0;
  local_94 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_90 = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  lVar5 = local_80;
  lVar4 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar9 = '\0';
  if (local_88 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMorphTargetToSkeletalMesh_InvalidInput1",
                        L"CopyMorphTargetToSkeletalMesh: ToSkeletalMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_e0 = (pFVar8->TextData).Reference;
    local_e8 = 0x200;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res20);
    }
    local_d8 = pFVar8->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_e8) &&
          (&local_e8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_e8;
      puVar1[1] = local_e8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_e0;
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 8))(local_e0,local_78);
      }
      *(uint *)(puVar1 + 0x10) = local_d8;
    }
    local_40.TextData.Reference = local_60.TextData.Reference;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 0x10))();
      local_40.TextData.Reference = local_60.TextData.Reference;
    }
  }
  else {
    if (local_80 == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_50,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopyMorphTargetToSkeletalMesh_InvalidInput2",
                          L"CopyMorphTargetToSkeletalMesh: FromDynamicMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_c8 = (pFVar8->TextData).Reference;
      local_d0 = 0x200;
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 8))(local_c8,local_74);
      }
      local_c0 = pFVar8->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_d0) &&
            (&local_d0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar4 + 0x30);
        if (iVar7 == *(int *)(lVar4 + 0x34)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        *(int *)(lVar4 + 0x30) = iVar7 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
        *puVar1 = (undefined1)local_d0;
        puVar1[1] = local_d0._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_c8;
        if (local_c8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8 + 8))(local_c8,local_70);
        }
        *(uint *)(puVar1 + 0x10) = local_c0;
      }
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 0x10))();
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
      *(undefined8 *)param_3 = 0;
      return;
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMorphTargetToSkeletalMesh_EditorOnly",
                        L"CopyMorphTargetToSkeletalMesh: Not currently supported at Runtime");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b0 = (pFVar8->TextData).Reference;
    local_b8 = 0x200;
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 8))(local_b0,local_6c);
    }
    local_a8 = pFVar8->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_b8) &&
          (&local_b8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_b8;
      puVar1[1] = local_b8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_b0;
      if (local_b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0 + 8))(local_b0,local_68);
      }
      *(uint *)(puVar1 + 0x10) = local_a8;
    }
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 0x10))();
    }
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  *(longlong *)param_3 = lVar5;
  return;
}

// execCopySkinWeightProfileToSkeletalMesh @ 14cdff1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execCopySkinWeightProfileToSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  undefined2 local_res18;
  undefined1 local_res1a;
  undefined1 local_res20 [8];
  undefined2 local_e8;
  ITextData *local_e0;
  uint local_d8;
  undefined2 local_d0;
  ITextData *local_c8;
  uint local_c0;
  undefined2 local_b8;
  ITextData *local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_78 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_80 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_a0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_98 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18 = 0x101;
  local_res1a = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_90[0] = 0;
  local_8c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88 = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  lVar5 = local_78;
  lVar4 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar9 = '\0';
  if (local_80 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopySkinWeightProfileToSkeletalMesh_InvalidInput1",
                        L"CopySkinWeightProfileToSkeletalMesh: ToSkeletalMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_e0 = (pFVar8->TextData).Reference;
    local_e8 = 0x200;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res20);
    }
    local_d8 = pFVar8->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_e8) &&
          (&local_e8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_e8;
      puVar1[1] = local_e8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_e0;
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 8))(local_e0,local_70);
      }
      *(uint *)(puVar1 + 0x10) = local_d8;
    }
    local_38.TextData.Reference = local_58.TextData.Reference;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 0x10))();
      local_38.TextData.Reference = local_58.TextData.Reference;
    }
  }
  else {
    if (local_78 == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UGeometryScriptLibrary_MeshAssetFunctions",
                          L"CopySkinWeightProfileToSkeletalMesh_InvalidInput2",
                          L"CopySkinWeightProfileToSkeletalMesh: FromDynamicMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_c8 = (pFVar8->TextData).Reference;
      local_d0 = 0x200;
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 8))(local_c8,local_6c);
      }
      local_c0 = pFVar8->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_d0) &&
            (&local_d0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar4 + 0x30);
        if (iVar7 == *(int *)(lVar4 + 0x34)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        *(int *)(lVar4 + 0x30) = iVar7 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
        *puVar1 = (undefined1)local_d0;
        puVar1[1] = local_d0._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_c8;
        if (local_c8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8 + 8))(local_c8,local_68);
        }
        *(uint *)(puVar1 + 0x10) = local_c0;
      }
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      *(undefined8 *)param_3 = 0;
      return;
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopySkinWeightProfileToSkeletalMesh_EditorOnly",
                        L"CopySkinWeightProfileToSkeletalMesh: Not currently supported at Runtime");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b0 = (pFVar8->TextData).Reference;
    local_b8 = 0x200;
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 8))(local_b0,local_64);
    }
    local_a8 = pFVar8->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_b8) &&
          (&local_b8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_b8;
      puVar1[1] = local_b8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_b0;
      if (local_b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0 + 8))(local_b0,local_60);
      }
      *(uint *)(puVar1 + 0x10) = local_a8;
    }
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 0x10))();
    }
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  *(longlong *)param_3 = lVar5;
  return;
}

// execGetLODMaterialListFromSkeletalMesh @ 14ce04070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execGetLODMaterialListFromSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  uchar *puVar9;
  uchar local_res10 [16];
  undefined1 local_res20 [8];
  undefined2 local_d8;
  ITextData *local_d0;
  uint local_c8;
  undefined2 local_c0;
  ITextData *local_b8;
  uint local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  longlong local_a0;
  longlong local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  FText local_50;
  FText local_40;
  
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8[0] = 0;
  local_a4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80 = (void *)0x0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90 = (void *)0x0;
  local_88 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a0 = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  lVar5 = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar9 = '\0';
  if (local_98 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"GetLODMaterialListFromSkeletalMesh_InvalidInput1",
                        L"GetLODMaterialListFromSkeletalMesh: FromSkeletalMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_d0 = (pFVar8->TextData).Reference;
    local_d8 = 0x200;
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 8))(local_d0,local_res20);
    }
    local_c8 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_d8) &&
          (&local_d8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_d8;
      puVar2[1] = local_d8._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_d0;
      if (local_d0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0 + 8))(local_d0,local_60);
      }
      *(uint *)(puVar2 + 0x10) = local_c8;
    }
    local_40.TextData.Reference = local_50.TextData.Reference;
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 0x10))();
      local_40.TextData.Reference = local_50.TextData.Reference;
    }
  }
  else {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"GetLODMaterialListFromSkeletalMesh_EditorOnly",
                        L"GetLODMaterialListFromSkeletalMesh: Not available at Runtime");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b8 = (pFVar8->TextData).Reference;
    local_c0 = 0x200;
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 8))(local_b8,local_5c);
    }
    local_b0 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_c0) &&
          (&local_c0 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_c0;
      puVar2[1] = local_c0._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_b8;
      if (local_b8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8 + 8))(local_b8,local_58);
      }
      *(uint *)(puVar2 + 0x10) = local_b0;
    }
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 0x10))();
    }
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetMaterialListFromSkeletalMesh @ 14ce04e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execGetMaterialListFromSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int *piVar2;
  FField **ppFVar3;
  undefined1 *puVar4;
  FProperty *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FText *this;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ForAnyElementType *pFVar14;
  ForAnyElementType *pFVar15;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_a8;
  longlong local_a0;
  undefined2 local_98;
  ITextData *local_90;
  uint local_88;
  longlong local_80;
  longlong *local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  FText local_50;
  
  local_78 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar3 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  pFVar15 = &local_60;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar15 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80 = 0;
  pFVar14 = &local_70;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar14 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  lVar7 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78 == (longlong *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"UGeometryScriptLibrary_MeshAssetFunctions",
                      L"GetMaterialListFromSkeletalMesh_InvalidInput1",
                      L"GetMaterialListFromSkeletalMesh: FromSkeletalMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_90 = (this->TextData).Reference;
    local_98 = 0x200;
    if (local_90 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90 + 8))(local_90,local_res10);
    }
    local_88 = this->Flags;
    if (lVar7 != 0) {
      if (((*(undefined2 **)(lVar7 + 0x28) <= &local_98) &&
          (&local_98 < *(undefined2 **)(lVar7 + 0x28) + (longlong)*(int *)(lVar7 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)(lVar7 + 0x30);
      if (iVar9 == *(int *)(lVar7 + 0x34)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar7 + 0x28),(int *)(lVar7 + 0x34));
      }
      *(int *)(lVar7 + 0x30) = iVar9 + 1;
      puVar4 = (undefined1 *)(*(longlong *)(lVar7 + 0x28) + (longlong)iVar9 * 0x18);
      *puVar4 = (undefined1)local_98;
      puVar4[1] = local_98._1_1_;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(ITextData **)(puVar4 + 8) = local_90;
      if (local_90 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90 + 8))(local_90,local_res20);
      }
      *(uint *)(puVar4 + 0x10) = local_88;
    }
    if (local_90 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    plVar11 = (longlong *)(**(code **)(*local_78 + 0x3c0))();
    uVar13 = *(uint *)(plVar11 + 1);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    iVar9 = *(int *)((longlong)&pFVar15[1].Data + 4);
    piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
    *(undefined4 *)&pFVar15[1].Data = 0;
    if (iVar9 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,pFVar15,0,piVar1);
    }
    uVar13 = *(uint *)(plVar11 + 1);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    iVar9 = *(int *)((longlong)&pFVar14[1].Data + 4);
    piVar2 = (int *)((longlong)&pFVar14[1].Data + 4);
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar9 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar13,pFVar14,0,piVar2);
    }
    iVar9 = (int)plVar11[1];
    uVar13 = 0;
    if (0 < iVar9) {
      local_a0 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar9) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_a8 = *(undefined8 *)(local_a0 + *plVar11);
        if (((pFVar15->Data <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar15->Data + (longlong)*piVar1 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)&pFVar15[1].Data;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar15,piVar1);
        }
        *(int *)&pFVar15[1].Data = iVar9 + 1;
        *(undefined8 *)(pFVar15->Data + (longlong)iVar9 * 8) = local_a8;
        uVar10 = 0;
        if ((int)uVar13 < (int)plVar11[1]) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = (FScriptContainerElement *)(*plVar11 + local_a0 + 8);
        if (((pFVar14->Data <= pFVar12) && (pFVar12 < pFVar14->Data + (longlong)*piVar2 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)&pFVar14[1].Data;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar14,piVar2);
        }
        local_a0 = local_a0 + 0x30;
        *(int *)&pFVar14[1].Data = iVar9 + 1;
        uVar13 = uVar13 + 1;
        *(undefined8 *)(pFVar14->Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar12;
        iVar9 = (int)plVar11[1];
      } while ((int)uVar13 < iVar9);
    }
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// execGetMaterialListFromStaticMesh @ 14ce053a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execGetMaterialListFromStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int *piVar2;
  FField **ppFVar3;
  undefined1 *puVar4;
  FProperty *pFVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FText *this;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ForAnyElementType *pFVar14;
  ForAnyElementType *pFVar15;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_a8;
  longlong local_a0;
  undefined2 local_98;
  ITextData *local_90;
  uint local_88;
  longlong local_80;
  longlong local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  FText local_50;
  
  local_78 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar3 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  pFVar15 = &local_60;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar15 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80 = 0;
  pFVar14 = &local_70;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar14 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  lVar8 = local_78;
  lVar7 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78 == 0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"UGeometryScriptLibrary_MeshAssetFunctions",
                      L"GetMaterialListFromStaticMesh_InvalidInput1",
                      L"GetMaterialListFromStaticMesh: FromStaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_90 = (this->TextData).Reference;
    local_98 = 0x200;
    if (local_90 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90 + 8))(local_90,local_res10);
    }
    local_88 = this->Flags;
    if (lVar7 != 0) {
      if (((*(undefined2 **)(lVar7 + 0x28) <= &local_98) &&
          (&local_98 < *(undefined2 **)(lVar7 + 0x28) + (longlong)*(int *)(lVar7 + 0x34) * 0xc)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)(lVar7 + 0x30);
      if (iVar10 == *(int *)(lVar7 + 0x34)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar7 + 0x28),(int *)(lVar7 + 0x34));
      }
      *(int *)(lVar7 + 0x30) = iVar10 + 1;
      puVar4 = (undefined1 *)(*(longlong *)(lVar7 + 0x28) + (longlong)iVar10 * 0x18);
      *puVar4 = (undefined1)local_98;
      puVar4[1] = local_98._1_1_;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(ITextData **)(puVar4 + 8) = local_90;
      if (local_90 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90 + 8))(local_90,local_res20);
      }
      *(uint *)(puVar4 + 0x10) = local_88;
    }
    if (local_90 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    uVar13 = *(uint *)(local_78 + 0x178);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    iVar10 = *(int *)((longlong)&pFVar15[1].Data + 4);
    piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
    *(undefined4 *)&pFVar15[1].Data = 0;
    if (iVar10 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,pFVar15,0,piVar1);
    }
    uVar13 = *(uint *)(lVar8 + 0x178);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    iVar10 = *(int *)((longlong)&pFVar14[1].Data + 4);
    piVar2 = (int *)((longlong)&pFVar14[1].Data + 4);
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar10 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar13,pFVar14,0,piVar2);
    }
    iVar10 = *(int *)(lVar8 + 0x178);
    uVar13 = 0;
    if (0 < iVar10) {
      local_a0 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar13 < iVar10) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_a8 = *(undefined8 *)(local_a0 + *(longlong *)(lVar8 + 0x170));
        if (((pFVar15->Data <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar15->Data + (longlong)*piVar1 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = *(int *)&pFVar15[1].Data;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar15,piVar1);
        }
        *(int *)&pFVar15[1].Data = iVar10 + 1;
        *(undefined8 *)(pFVar15->Data + (longlong)iVar10 * 8) = local_a8;
        uVar11 = 0;
        if ((int)uVar13 < *(int *)(lVar8 + 0x178)) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = (FScriptContainerElement *)(*(longlong *)(lVar8 + 0x170) + local_a0 + 8);
        if (((pFVar14->Data <= pFVar12) && (pFVar12 < pFVar14->Data + (longlong)*piVar2 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = *(int *)&pFVar14[1].Data;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,pFVar14,piVar2);
        }
        local_a0 = local_a0 + 0x38;
        *(int *)&pFVar14[1].Data = iVar10 + 1;
        uVar13 = uVar13 + 1;
        *(undefined8 *)(pFVar14->Data + (longlong)iVar10 * 8) = *(undefined8 *)pFVar12;
        iVar10 = *(int *)(lVar8 + 0x178);
      } while ((int)uVar13 < iVar10);
    }
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// execGetNumStaticMeshLODsOfType @ 14ce05c80

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execGetNumStaticMeshLODsOfType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  char local_res10 [8];
  UStaticMesh *local_res18 [2];
  
  local_res18[0] = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] != (UStaticMesh *)0x0) && (local_res10[0] == '\x03')) &&
     (local_res18[0]->bAllowCPUAccess != '\0')) {
    iVar2 = UStaticMesh::GetNumLODs(local_res18[0]);
    *(int *)param_3 = iVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetSectionMaterialListFromStaticMesh @ 14ce06360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_StaticMeshFunctions::execGetSectionMaterialListFromStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int *piVar2;
  FField **ppFVar3;
  undefined1 *puVar4;
  int *piVar5;
  ForAnyElementType *pFVar6;
  FProperty *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FText *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType *pFVar16;
  uchar *puVar17;
  ForAnyElementType *pFVar18;
  ForAnyElementType *pFVar19;
  uchar local_res10 [16];
  undefined1 local_res20 [8];
  uint local_108 [2];
  longlong local_100;
  char local_f8 [4];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined2 local_e8;
  ITextData *local_e0;
  uint local_d8;
  undefined2 local_d0;
  ITextData *local_c8;
  uint local_c0;
  longlong local_b8;
  longlong local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  uchar *local_68;
  FText local_60;
  FText local_50;
  
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar3 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_f8[0] = '\0';
  local_f4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  pFVar18 = &local_88;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar18 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  pFVar16 = &local_98;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar16 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar19 = &local_a8;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    pFVar19 = pFVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b8 = 0;
  puVar17 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  local_68 = puVar17;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  lVar14 = local_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_100 = local_b0;
  *puVar17 = '\0';
  if (local_b0 == 0) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_60,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"GetSectionMaterialListFromStaticMesh_InvalidInput1",
                         L"GetSectionMaterialListFromStaticMesh: FromStaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar13);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_e0 = (pFVar13->TextData).Reference;
    local_e8 = 0x200;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res20);
    }
    local_d8 = pFVar13->Flags;
    if (lVar14 != 0) {
      if (((*(undefined2 **)(lVar14 + 0x28) <= &local_e8) &&
          (&local_e8 < *(undefined2 **)(lVar14 + 0x28) + (longlong)*(int *)(lVar14 + 0x34) * 0xc))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)(lVar14 + 0x30);
      if (iVar10 == *(int *)(lVar14 + 0x34)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar14 + 0x28),(int *)(lVar14 + 0x34));
      }
      *(int *)(lVar14 + 0x30) = iVar10 + 1;
      puVar4 = (undefined1 *)(*(longlong *)(lVar14 + 0x28) + (longlong)iVar10 * 0x18);
      *puVar4 = (undefined1)local_e8;
      puVar4[1] = local_e8._1_1_;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(ITextData **)(puVar4 + 8) = local_e0;
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 8))(local_e0,local_78);
      }
      *(uint *)(puVar4 + 0x10) = local_d8;
    }
    local_50.TextData.Reference = local_60.TextData.Reference;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 0x10))();
      local_50.TextData.Reference = local_60.TextData.Reference;
    }
  }
  else {
    if (local_f8[0] == '\x03') {
      iVar10 = *(int *)((longlong)&pFVar18[1].Data + 4);
      piVar1 = (int *)((longlong)&pFVar18[1].Data + 4);
      *(undefined4 *)&pFVar18[1].Data = 0;
      if (iVar10 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,pFVar18,0,piVar1);
      }
      iVar10 = *(int *)((longlong)&pFVar16[1].Data + 4);
      piVar5 = (int *)((longlong)&pFVar16[1].Data + 4);
      *(undefined4 *)&pFVar16[1].Data = 0;
      if (iVar10 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar16,0,piVar5);
      }
      iVar10 = *(int *)((longlong)&pFVar19[1].Data + 4);
      piVar2 = (int *)((longlong)&pFVar19[1].Data + 4);
      *(undefined4 *)&pFVar19[1].Data = 0;
      if (iVar10 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,pFVar19,0,piVar2);
      }
      local_108[0] = 0;
      iVar10 = *(int *)(local_100 + 0x178);
      if (0 < iVar10) {
        do {
          uVar12 = local_108[0];
          uVar11 = 0;
          if ((int)local_108[0] < iVar10) {
            uVar11 = ~local_108[0] >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_f0 = *(undefined8 *)
                      ((longlong)(int)uVar12 * 0x38 + *(longlong *)(local_100 + 0x170));
          if (((pFVar18->Data <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 < pFVar18->Data + (longlong)*piVar1 * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = *(int *)&pFVar18[1].Data;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar18,piVar1);
          }
          *(int *)&pFVar18[1].Data = iVar10 + 1;
          *(undefined8 *)(pFVar18->Data + (longlong)iVar10 * 8) = local_f0;
          if (((pFVar16->Data <= (FScriptContainerElement *)local_108) &&
              ((FScriptContainerElement *)local_108 < pFVar16->Data + (longlong)*piVar5 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = *(int *)&pFVar16[1].Data;
          if (iVar10 == *piVar5) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar16,piVar5);
          }
          *(int *)&pFVar16[1].Data = iVar10 + 1;
          *(uint *)(pFVar16->Data + (longlong)iVar10 * 4) = local_108[0];
          lVar14 = (longlong)(int)local_108[0];
          uVar12 = 0;
          if ((int)local_108[0] < *(int *)(local_100 + 0x178)) {
            uVar12 = ~local_108[0] >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar15 = (FScriptContainerElement *)
                    (*(longlong *)(local_100 + 0x170) + lVar14 * 0x38 + 8);
          if (((pFVar19->Data <= pFVar15) && (pFVar15 < pFVar19->Data + (longlong)*piVar2 * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = *(int *)&pFVar19[1].Data;
          if (iVar10 == *piVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,pFVar19,piVar2);
          }
          *(int *)&pFVar19[1].Data = iVar10 + 1;
          *(undefined8 *)(pFVar19->Data + (longlong)iVar10 * 8) = *(undefined8 *)pFVar15;
          local_108[0] = local_108[0] + 1;
          iVar10 = *(int *)(local_100 + 0x178);
        } while ((int)local_108[0] < iVar10);
      }
      *local_68 = '\x01';
      goto LAB_14ce06bf5;
    }
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_50,L"UGeometryScriptLibrary_MeshAssetFunctions",
                         L"GetSectionMaterialListFromStaticMesh_EditorOnly",
                         L"GetSectionMaterialListFromStaticMesh: Source Models are not available at Runtime"
                        );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar13);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c8 = (pFVar13->TextData).Reference;
    local_d0 = 0x200;
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 8))(local_c8,local_74);
    }
    local_c0 = pFVar13->Flags;
    if (lVar14 != 0) {
      if (((*(undefined2 **)(lVar14 + 0x28) <= &local_d0) &&
          (&local_d0 < *(undefined2 **)(lVar14 + 0x28) + (longlong)*(int *)(lVar14 + 0x34) * 0xc))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)(lVar14 + 0x30);
      if (iVar10 == *(int *)(lVar14 + 0x34)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar14 + 0x28),(int *)(lVar14 + 0x34));
      }
      *(int *)(lVar14 + 0x30) = iVar10 + 1;
      puVar4 = (undefined1 *)(*(longlong *)(lVar14 + 0x28) + (longlong)iVar10 * 0x18);
      *puVar4 = (undefined1)local_d0;
      puVar4[1] = local_d0._1_1_;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(ITextData **)(puVar4 + 8) = local_c8;
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 8))(local_c8,local_70);
      }
      *(uint *)(puVar4 + 0x10) = local_c0;
    }
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 0x10))();
    }
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
LAB_14ce06bf5:
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

