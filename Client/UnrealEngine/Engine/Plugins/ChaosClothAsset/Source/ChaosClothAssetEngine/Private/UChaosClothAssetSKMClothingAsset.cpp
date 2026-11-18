// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 13

// StaticClass @ 14dc27400

UClass * __cdecl UChaosClothAssetSKMClothingAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingAsset",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingAsset.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetSKMClothingAsset,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothAssetSKMClothingAsset>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingAsset>,local_res8,
               UClothingAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingAsset.InnerSingleton;
}

// UChaosClothAssetSKMClothingAsset @ 14dc35300

UChaosClothAssetSKMClothingAsset * __thiscall
UChaosClothAssetSKMClothingAsset::UChaosClothAssetSKMClothingAsset
          (UChaosClothAssetSKMClothingAsset *this,FVTableHelper *param_1)

{
  UClothingAssetBase::UClothingAssetBase((UClothingAssetBase *)this,param_1);
  this->ClothSimulationModelIndex = -1;
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingAsset__6B_;
  (this->Asset).field0_0x0.DebugPtr = (UChaosClothAssetBase *)0x0;
  (this->LODHasAnySimulationMeshData).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->LODHasAnySimulationMeshData).NumBits = 0;
  (this->LODHasAnySimulationMeshData).MaxBits = 0x80;
  return this;
}

// UChaosClothAssetSKMClothingAsset @ 14dc35350

UChaosClothAssetSKMClothingAsset * __thiscall
UChaosClothAssetSKMClothingAsset::UChaosClothAssetSKMClothingAsset
          (UChaosClothAssetSKMClothingAsset *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  FGuid *pFVar2;
  FGuid local_18;
  
  UClothingAssetBase::UClothingAssetBase((UClothingAssetBase *)this,param_1);
  this->ClothSimulationModelIndex = -1;
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingAsset__6B_;
  (this->Asset).field0_0x0.DebugPtr = (UChaosClothAssetBase *)0x0;
  (this->LODHasAnySimulationMeshData).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->LODHasAnySimulationMeshData).NumBits = 0;
  (this->LODHasAnySimulationMeshData).MaxBits = 0x80;
  pFVar2 = FGuid::NewGuid(&local_18);
  lVar1 = *(longlong *)&pFVar2->C;
  this->_padding_ = *(longlong *)pFVar2;
  this->_padding_ = lVar1;
  return this;
}

// ~UChaosClothAssetSKMClothingAsset @ 14dc36530

void __thiscall
UChaosClothAssetSKMClothingAsset::~UChaosClothAssetSKMClothingAsset
          (UChaosClothAssetSKMClothingAsset *this)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingAsset__6B_;
  FVar1 = (this->LODHasAnySimulationMeshData).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  UClothingAssetBase::~UClothingAssetBase((UClothingAssetBase *)this);
  return;
}

// CalculateLODHasAnySimulationMeshData @ 14dc3d900

void __thiscall
UChaosClothAssetSKMClothingAsset::CalculateLODHasAnySimulationMeshData
          (UChaosClothAssetSKMClothingAsset *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  UChaosClothAssetBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong64 uVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  FChaosClothSimulationModel *local_28;
  TReferenceControllerBase<1> *local_20;
  
  uVar12 = 0;
  (this->LODHasAnySimulationMeshData).NumBits = 0;
  pUVar2 = (this->Asset).field0_0x0.DebugPtr;
  if ((pUVar2 != (UChaosClothAssetBase *)0x0) && (this->ClothSimulationModelIndex != -1)) {
    (**(code **)(pUVar2->_padding_ + 0x4d0))();
    if (local_28 != (FChaosClothSimulationModel *)0x0) {
      this_00 = &this->LODHasAnySimulationMeshData;
      if ((local_28 == (FChaosClothSimulationModel *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->LODHasAnySimulationMeshData).NumBits;
      iVar7 = (local_28->ClothSimulationLodModels).ArrayNum;
      (this->LODHasAnySimulationMeshData).NumBits = iVar7;
      if ((this->LODHasAnySimulationMeshData).MaxBits < iVar7) {
        uVar13 = iVar7 + 0x1fU >> 5;
        if (uVar13 < 5) {
          iVar7 = 4;
        }
        else {
          uVar8 = FMemory::QuantizeSize((ulonglong)uVar13 << 2,0);
          iVar7 = (int)(uVar8 >> 2);
          if (iVar7 < (int)uVar13) {
            iVar7 = 0x7fffffff;
          }
        }
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,iVar6 + 0x1fU >> 5,iVar7,4);
        (this->LODHasAnySimulationMeshData).MaxBits = iVar7 << 5;
      }
      iVar6 = (this->LODHasAnySimulationMeshData).NumBits;
      uVar10 = iVar6 >> 0x1f & 0x1f;
      uVar13 = iVar6 + uVar10;
      iVar6 = (uVar13 & 0x1f) - uVar10;
      uVar14 = uVar12;
      if (iVar6 != 0) {
        FVar11 = (this->LODHasAnySimulationMeshData).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<unsigned_int>)0x0) {
          FVar11 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)uVar13 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
      }
      while( true ) {
        if ((local_28 == (FChaosClothSimulationModel *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (int)uVar12;
        if ((local_28->ClothSimulationLodModels).ArrayNum <= iVar6) break;
        iVar7 = FChaosClothSimulationModel::GetNumVertices(local_28,iVar6);
        if (iVar7 < 1) {
LAB_14dc3db16:
          bVar4 = false;
          if (-1 < iVar6) goto LAB_14dc3db1d;
LAB_14dc3db23:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          if ((local_28 == (FChaosClothSimulationModel *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((iVar6 < 0) || ((local_28->ClothSimulationLodModels).ArrayNum <= iVar6))
          goto LAB_14dc3db16;
          if ((iVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = *(int *)((local_28->ClothSimulationLodModels).AllocatorInstance.Data +
                          uVar14 + 0x28);
          if (iVar7 / 3 + (iVar7 >> 0x1f) +
              (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f) < 1)
          goto LAB_14dc3db16;
          bVar4 = true;
LAB_14dc3db1d:
          if ((this->LODHasAnySimulationMeshData).NumBits <= iVar6) goto LAB_14dc3db23;
        }
        FVar11 = (this->LODHasAnySimulationMeshData).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<unsigned_int>)this_00;
        if (FVar11 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar11;
        }
        iVar7 = iVar6;
        if (iVar6 < 0) {
          iVar7 = iVar6 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
        uVar13 = 1 << ((byte)uVar12 & 0x1f);
        if (bVar4) {
          uVar12 = (ulonglong)(iVar6 + 1);
          *puVar1 = uVar13 | *puVar1;
          uVar14 = uVar14 + 0x1f0;
        }
        else {
          uVar12 = (ulonglong)(iVar6 + 1);
          *puVar1 = ~uVar13 & *puVar1;
          uVar14 = uVar14 + 0x1f0;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return;
}

// GetClothSimulationModelIds @ 14dc4ad90

/* WARNING: Removing unreachable block (ram,0x00014dc4b038) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetSKMClothingAsset::GetClothSimulationModelIds
          (UChaosClothAssetSKMClothingAsset *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  UChaosClothAssetBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  uint *puVar9;
  FName *pFVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  FName local_res8;
  undefined1 local_res10 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  FGuid local_a8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  undefined1 local_58 [16];
  FString local_48;
  
  iVar13 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar2 = (this->Asset).field0_0x0.DebugPtr;
  if (pUVar2 != (UChaosClothAssetBase *)0x0) {
    uVar5 = (**(code **)(pUVar2->_padding_ + 0x4c8))();
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar5,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    iVar14 = iVar13;
    if (0 < (int)uVar5) {
      do {
        pUVar2 = (this->Asset).field0_0x0.DebugPtr;
        plVar7 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x4d0))(pUVar2,local_c8,iVar14);
        if (*plVar7 == 0) {
LAB_14dc4ae92:
          bVar4 = false;
        }
        else {
          pUVar2 = (this->Asset).field0_0x0.DebugPtr;
          iVar13 = 2;
          plVar7 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x4d0))(pUVar2,local_d8,iVar14);
          if ((*plVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          if (*(int *)(*plVar7 + 8) == 0) goto LAB_14dc4ae92;
          bVar4 = true;
        }
        if (iVar13 != 0) {
          iVar13 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0);
        if (bVar4) {
          pUVar2 = (this->Asset).field0_0x0.DebugPtr;
          puVar9 = (uint *)(**(code **)(pUVar2->_padding_ + 0x4f0))(pUVar2,local_58,iVar14);
          pUVar2 = (this->Asset).field0_0x0.DebugPtr;
          local_b8 = *puVar9;
          uStack_b4 = puVar9[1];
          uStack_b0 = puVar9[2];
          uStack_ac = puVar9[3];
          pFVar10 = (FName *)(**(code **)(pUVar2->_padding_ + 0x4d8))(pUVar2,local_res10);
          local_a8.B = uStack_b4;
          local_a8.A = local_b8;
          local_a8.D = uStack_ac;
          local_a8.C = uStack_b0;
          local_res8 = *pFVar10;
          pFVar11 = ::FName::ToString(&local_res8,&local_48);
          FStringFormatArg::FStringFormatArg(&local_98,pFVar11);
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          FGuid::AppendString(&local_a8,&local_e8,Digits);
          FStringFormatArg::FStringFormatArg(&local_78,&local_e8);
          local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_108.AllocatorInstance.Data,&local_98,2);
          ::FString::FormatImpl(&local_f8,L"{0}-{1}",&local_108);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
          if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_108.AllocatorInstance.Data);
          }
          if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar12 = 0;
          *(FScriptContainerElement **)pFVar12 = local_f8.Data.AllocatorInstance.Data;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar12 + 8) = local_f8.Data.ArrayNum;
          *(int *)(pFVar12 + 0xc) = local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar5);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dc4e350

UClass * __cdecl UChaosClothAssetSKMClothingAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingAsset",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingAsset.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetSKMClothingAsset,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothAssetSKMClothingAsset>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingAsset>,local_res8,
               UClothingAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingAsset.InnerSingleton;
}

// IsValid @ 14dc52ae0

bool __thiscall UChaosClothAssetSKMClothingAsset::IsValid(UChaosClothAssetSKMClothingAsset *this)

{
  return this->ClothSimulationModelIndex != -1;
}

// PostLoad @ 14dc53850

void __thiscall UChaosClothAssetSKMClothingAsset::PostLoad(UChaosClothAssetSKMClothingAsset *this)

{
  UObject::PostLoad((UObject *)this);
  CalculateLODHasAnySimulationMeshData(this);
  return;
}

// PostUpdateAllAssets @ 14dc53aa0

void __thiscall
UChaosClothAssetSKMClothingAsset::PostUpdateAllAssets(UChaosClothAssetSKMClothingAsset *this)

{
  return;
}

// RefreshBoneMapping @ 14dc54460

void __thiscall
UChaosClothAssetSKMClothingAsset::RefreshBoneMapping
          (UChaosClothAssetSKMClothingAsset *this,USkeletalMesh *param_1)

{
  return;
}

// StaticRegisterNativesUChaosClothAssetSKMClothingAsset @ 14dc5a7d0

void __cdecl
UChaosClothAssetSKMClothingAsset::StaticRegisterNativesUChaosClothAssetSKMClothingAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UChaosClothAssetSKMClothingAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetClothSimulationModelIds @ 14dc618e0

void __cdecl
UChaosClothAssetSKMClothingAsset::execGetClothSimulationModelIds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetClothSimulationModelIds((UChaosClothAssetSKMClothingAsset *)param_1,&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

