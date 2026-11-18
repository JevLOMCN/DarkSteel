// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 3

// StaticStruct @ 14da57610

UScriptStruct * __cdecl FPVExportParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVExportParams.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVExportParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVExportParams,(UObject *)pUVar1,
                         L"PVExportParams");
  }
  return Z_Registration_Info_UScriptStruct_FPVExportParams.OuterSingleton;
}

// GetMeshClass @ 14da96c90

UClass * __thiscall FPVExportParams::GetMeshClass(FPVExportParams *this)

{
  UClass *pUVar1;
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (this->ExportMeshType != StaticMesh) {
    pUVar1 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    return pUVar1;
  }
  if (Z_Registration_Info_UClass_UStaticMesh.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMesh",
               &Z_Registration_Info_UClass_UStaticMesh.InnerSingleton,
               UStaticMesh::StaticRegisterNativesUStaticMesh,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMesh>,
               InternalVTableHelperCtorCaller<UStaticMesh>,aFStackX_8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMesh.InnerSingleton;
}

// Validate @ 14daacb60

bool __thiscall FPVExportParams::Validate(FPVExportParams *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  FScriptContainerElement *local_b8;
  int local_b0;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  if (this->ExportMeshType == StaticMesh) {
    pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
  }
  else {
    pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  }
  pFVar5 = ::FName::ToString(&this->MeshName,(FString *)&local_a8);
  bVar3 = PV::Utilities::ValidateAssetPathAndName
                    (pFVar5,&(this->ContentBrowserFolder).Path,pUVar4,param_1);
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  if (bVar3) {
    if (this->ExportMeshType == SkeletalMesh) {
      pUVar4 = Z_Construct_UClass_USkeleton_NoRegister();
      ::FName::ToString(&this->MeshName,&local_d8);
      ::FString::PrintfImpl((FString *)&local_a8,L"%s_Skeleton");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      bVar3 = PV::Utilities::ValidateAssetPathAndName
                        ((FString *)&local_a8,&(this->ContentBrowserFolder).Path,pUVar4,param_1);
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      if (!bVar3) goto LAB_14daad020;
    }
    if (this->ReplacePolicy == Replace) {
      pFVar5 = ::FName::ToString(&this->MeshName,(FString *)&local_a8);
      local_c8.DataPtr = (wchar_t *)(this->ContentBrowserFolder).Path.Data.AllocatorInstance.Data;
      iVar1 = (this->ContentBrowserFolder).Path.Data.ArrayNum;
      local_b8 = (pFVar5->Data).AllocatorInstance.Data;
      iVar2 = (pFVar5->Data).ArrayNum;
      local_c8.Size = iVar1 + -1;
      if (iVar1 == 0) {
        local_c8.Size = 0;
      }
      local_b0 = iVar2 + -1;
      if (iVar2 == 0) {
        local_b0 = 0;
      }
      FPaths::CombineInternal(&local_d8,&local_c8,2);
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      if (this->ExportMeshType == StaticMesh) {
        pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
      }
      else {
        pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      }
      bVar3 = PV::Utilities::DoesConflictingPackageExist(&local_d8,pUVar4);
      if (bVar3) {
        if (this->ExportMeshType == StaticMesh) {
          pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
        }
        else {
          pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        }
        local_res8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_res8,(FString *)&local_c8);
        pFVar7 = (FScriptContainerElement *)L"";
        if (local_c8.Size != 0) {
          pFVar7 = (FScriptContainerElement *)local_c8.DataPtr;
        }
        FStringFormatArg::FStringFormatArg(&local_a8,(wchar_t *)pFVar7);
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar6.Data = local_d8.Data.AllocatorInstance.Data;
        }
        FStringFormatArg::FStringFormatArg(&local_88,(wchar_t *)FVar6.Data);
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_108.AllocatorInstance.Data,&local_a8,2);
        ::FString::FormatImpl
                  (&local_f8,
                   L"Create a Unique name for the output as another asset of different type {0} exists with same name {1}"
                   ,&local_108);
        if (param_1 != &local_f8) {
          pFVar7 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (param_1->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          (param_1->Data).ArrayNum = local_f8.Data.ArrayNum;
          (param_1->Data).ArrayMax = local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        FVar6.Data = local_a8.StringValue.Data.AllocatorInstance.Data;
        if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
          FVar6.Data = local_a8.StringValue.Data.AllocatorInstance.Data;
        }
LAB_14daacff9:
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
        if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.DataPtr);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        goto LAB_14daad020;
      }
      if (this->ExportMeshType == SkeletalMesh) {
        ::FName::ToString(&this->MeshName,(FString *)&local_a8);
        ::FString::PrintfImpl((FString *)&local_108,L"%s_Skeleton");
        if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_a8._0_8_);
        }
        local_a8._0_8_ = (this->ContentBrowserFolder).Path.Data.AllocatorInstance.Data;
        iVar1 = (this->ContentBrowserFolder).Path.Data.ArrayNum;
        local_a8.field1_0x8.IntValue._0_4_ = iVar1 + -1;
        if (iVar1 == 0) {
          local_a8.field1_0x8.IntValue._0_4_ = 0;
        }
        local_a8.StringValue.Data.AllocatorInstance.Data = local_108.AllocatorInstance.Data;
        local_a8.StringValue.Data.ArrayNum = local_108.ArrayNum + -1;
        if (local_108.ArrayNum == 0) {
          local_a8.StringValue.Data.ArrayNum = 0;
        }
        FPaths::CombineInternal((FString *)&local_c8,(TStringView<wchar_t> *)&local_a8,2);
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        pUVar4 = Z_Construct_UClass_USkeleton_NoRegister();
        bVar3 = PV::Utilities::DoesConflictingPackageExist((FString *)&local_c8,pUVar4);
        if (bVar3) {
          pUVar4 = Z_Construct_UClass_USkeleton_NoRegister();
          local_res8 = (FName)pUVar4->_padding_;
          ::FName::ToString(&local_res8,(FString *)&local_a8);
          pFVar7 = (FScriptContainerElement *)L"";
          if (local_a8.field1_0x8.IntValue._0_4_ != 0) {
            pFVar7 = (FScriptContainerElement *)local_a8._0_8_;
          }
          FStringFormatArg::FStringFormatArg(&local_68,(wchar_t *)pFVar7);
          pFVar7 = (FScriptContainerElement *)L"";
          if (local_c8.Size != 0) {
            pFVar7 = (FScriptContainerElement *)local_c8.DataPtr;
          }
          FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)pFVar7);
          local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_108.AllocatorInstance.Data,&local_68,2);
          ::FString::FormatImpl
                    (&local_e8,
                     L"Create a Unique name for the output as another asset of different type {0} exists with same name {1}"
                     ,&local_108);
          if (param_1 != &local_e8) {
            pFVar7 = (param_1->Data).AllocatorInstance.Data;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
            (param_1->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
            (param_1->Data).ArrayNum = local_e8.Data.ArrayNum;
            (param_1->Data).ArrayMax = local_e8.Data.ArrayMax;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
          if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_108.AllocatorInstance.Data);
          }
          if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
          }
          FVar6.Data = (FScriptContainerElement *)local_a8._0_8_;
          if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
            FVar6.Data = (FScriptContainerElement *)local_a8._0_8_;
          }
          goto LAB_14daacff9;
        }
        if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.DataPtr);
        }
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
  }
  else {
LAB_14daad020:
    bVar3 = false;
  }
  return bVar3;
}

