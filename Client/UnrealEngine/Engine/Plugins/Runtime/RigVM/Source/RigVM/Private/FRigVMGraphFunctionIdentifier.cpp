// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// StaticStruct @ 14a0adca0

UScriptStruct * __cdecl FRigVMGraphFunctionIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier,(UObject *)pUVar1,
                         L"RigVMGraphFunctionIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionIdentifier.OuterSingleton;
}

// operator== @ 14a0c8400

bool __thiscall
FRigVMGraphFunctionIdentifier::operator==
          (FRigVMGraphFunctionIdentifier *this,FRigVMGraphFunctionIdentifier *param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FSoftObjectPath local_58;
  FSoftObjectPath local_38;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  iVar2 = 0;
  bVar1 = FSoftObjectPath::operator==(&this->HostObject,&param_1->HostObject);
  if (bVar1) {
    pFVar3 = GetLibraryNodePath(param_1);
    local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.AssetPath.PackageName.Number = 0;
    local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.AssetPath.AssetName.Number = 0;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.SubPathString.Data.ArrayNum = 0;
    local_38.SubPathString.Data.ArrayMax = 0;
    local_88.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    iVar7 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar4 = iVar2;
    }
    local_88.Size = iVar4;
    FSoftObjectPath::SetPath(&local_38,&local_88);
    iVar4 = 0;
    iVar7 = local_38.SubPathString.Data.ArrayNum + -1;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      iVar7 = iVar4;
    }
    pFVar3 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_88,
                        (uchar *)local_38.SubPathString.Data.AllocatorInstance.Data,iVar7);
    pFVar9 = pFVar6;
    iVar7 = iVar2;
    if (&local_78 != pFVar3) {
      pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.DataPtr);
    }
    pFVar3 = GetLibraryNodePath(this);
    local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_58.AssetPath.PackageName.Number = 0;
    local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetPath.AssetName.Number = 0;
    local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.SubPathString.Data.ArrayNum = 0;
    local_58.SubPathString.Data.ArrayMax = 0;
    local_88.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    iVar8 = (pFVar3->Data).ArrayNum;
    iVar5 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar5 = iVar4;
    }
    local_88.Size = iVar5;
    FSoftObjectPath::SetPath(&local_58,&local_88);
    iVar8 = local_58.SubPathString.Data.ArrayNum + -1;
    if (local_58.SubPathString.Data.ArrayNum == 0) {
      iVar8 = iVar4;
    }
    pFVar3 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_88,
                        (uchar *)local_58.SubPathString.Data.AllocatorInstance.Data,iVar8);
    if (&local_68 != pFVar3) {
      pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.DataPtr);
    }
    local_68.Data.AllocatorInstance.Data = pFVar6;
    if (iVar2 == iVar7) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar6,(wchar_t *)pFVar9);
        bVar1 = iVar2 == 0;
        goto LAB_14a0c8570;
      }
    }
    else {
      bVar1 = iVar7 + iVar2 == 1;
LAB_14a0c8570:
      pFVar6 = (FScriptContainerElement *)&DAT_0000000f;
      local_78.Data.AllocatorInstance.Data = pFVar9;
      if (!bVar1) goto LAB_14a0c858e;
    }
    bVar1 = true;
    pFVar6 = (FScriptContainerElement *)&DAT_0000000f;
  }
  else {
LAB_14a0c858e:
    bVar1 = false;
    pFVar9 = local_78.Data.AllocatorInstance.Data;
  }
  if ((((ulonglong)pFVar6 & 8) != 0) &&
     (pFVar6 = (FScriptContainerElement *)(ulonglong)((uint)pFVar6 & 0xfffffff7),
     local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar6 & 4) != 0) &&
     (pFVar6 = (FScriptContainerElement *)(ulonglong)((uint)pFVar6 & 0xfffffffb),
     local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar6 & 2) != 0) &&
     (pFVar6 = (FScriptContainerElement *)(ulonglong)((uint)pFVar6 & 0xfffffffd),
     pFVar9 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar9);
  }
  if ((((ulonglong)pFVar6 & 1) != 0) &&
     (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// operator() @ 14a0c9290

bool __thiscall
`FRigVMGraphFunctionIdentifier::GetVariants'::__l8::<lambda_1>::operator()
          (void *this,FRigVMVariantRef *param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  TStringView<wchar_t> local_38;
  FSoftObjectPath local_28;
  
  pFVar3 = FRigVMGraphFunctionIdentifier::GetLibraryNodePath
                     (*(FRigVMGraphFunctionIdentifier **)this);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_38.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_38);
  bVar2 = FSoftObjectPath::operator==(&param_1->ObjectPath,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetFunctionName @ 14a0e6190

FString * __thiscall
FRigVMGraphFunctionIdentifier::GetFunctionName
          (FRigVMGraphFunctionIdentifier *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (((this->HostObject).AssetPath.PackageName != (FName)0x0) &&
     (pFVar3 = GetLibraryNodePath(this), 1 < (pFVar3->Data).ArrayNum)) {
    if (((this->LibraryNodePath).Data.ArrayNum < 2) &&
       ((this->LibraryNode_DEPRECATED).AssetPath.PackageName != (FName)0x0)) {
      pFVar4 = FSoftObjectPath::ToString(&this->LibraryNode_DEPRECATED,&local_28);
      pFVar3 = &this->LibraryNodePath;
      if (pFVar3 != pFVar4) {
        pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->LibraryNodePath).Data.ArrayNum = (pFVar4->Data).ArrayNum;
        (this->LibraryNodePath).Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    local_38.Data.ArrayNum = (this->LibraryNodePath).Data.ArrayNum;
    lVar5 = (longlong)local_38.Data.ArrayNum;
    pFVar1 = (this->LibraryNodePath).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,lVar5 * 2);
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::FString(&local_28,L".");
    bVar2 = ::FString::Split(&local_38,&local_28,(FString *)0x0,&local_48,CaseSensitive,FromEnd);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLibraryNodePath @ 14a0e7790

FString * __thiscall
FRigVMGraphFunctionIdentifier::GetLibraryNodePath(FRigVMGraphFunctionIdentifier *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar1 = &this->LibraryNodePath;
  if (((this->LibraryNodePath).Data.ArrayNum < 2) &&
     ((this->LibraryNode_DEPRECATED).AssetPath.PackageName != (FName)0x0)) {
    pFVar3 = FSoftObjectPath::ToString(&this->LibraryNode_DEPRECATED,&local_18);
    if (pFVar1 != pFVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->LibraryNodePath).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->LibraryNodePath).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// GetVariantIdentifiers @ 14a0f2e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a0f2ef5) */

TArray<FRigVMGraphFunctionIdentifier,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMGraphFunctionIdentifier::GetVariantIdentifiers
          (FRigVMGraphFunctionIdentifier *this,
          TArray<FRigVMGraphFunctionIdentifier,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FName *pFVar7;
  UObject *pUVar8;
  undefined8 uVar9;
  FRigVMGraphFunctionData *pFVar10;
  TArray<FRigVMGraphFunctionIdentifier,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  FSoftObjectPath *this_00;
  ForAnyElementType this_01;
  FRigVMVariantRef *pFVar13;
  undefined1 auStack_528 [32];
  undefined8 *local_508;
  FScriptContainerElement *local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined8 local_4e8;
  undefined1 local_4d0 [8];
  FSoftObjectPath local_4c8;
  undefined8 local_4a8;
  TArray<FRigVMVariantRef,TSizedDefaultAllocator<32>_> local_4a0;
  undefined8 local_490;
  FScriptContainerElement *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  TStringView<wchar_t> local_478;
  FString local_468;
  FString local_458;
  undefined1 local_448 [296];
  void *local_320;
  undefined4 local_318;
  ForAnyElementType local_310;
  FRigVMNodeLayout local_300;
  FRigVMGraphFunctionHeader local_248;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_528;
  GetVariants(this,&local_4a0,param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar13 = (FRigVMVariantRef *)
            (local_4a0.AllocatorInstance.Data + (longlong)local_4a0.ArrayNum * 0x40);
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_01.Data = local_4a0.AllocatorInstance.Data;
  do {
    if ((FRigVMVariantRef *)this_01.Data == pFVar13) {
      DestructItems<FRigVMVariantRef,int>
                ((FRigVMVariantRef *)local_4a0.AllocatorInstance.Data,local_4a0.ArrayNum);
      if ((FRigVMVariantRef *)local_4a0.AllocatorInstance.Data != (FRigVMVariantRef *)0x0) {
        FMemory::Free(local_4a0.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar6 = FSoftObjectPath::ToString((FSoftObjectPath *)this_01.Data,&local_458);
    local_4c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_4c8.AssetPath.PackageName.Number = 0;
    local_4c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_4c8.AssetPath.AssetName.Number = 0;
    local_4c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c8.SubPathString.Data.ArrayNum = 0;
    local_4c8.SubPathString.Data.ArrayMax = 0;
    local_488 = (pFVar6->Data).AllocatorInstance.Data;
    iVar5 = (pFVar6->Data).ArrayNum;
    iStack_480 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_480 = 0;
    }
    local_478._12_4_ = uStack_47c;
    local_478.Size = iStack_480;
    local_478.DataPtr = (wchar_t *)local_488;
    FSoftObjectPath::SetPath(&local_4c8,&local_478);
    local_4a8 = 0;
    pFVar7 = (FName *)FSoftObjectPath::ToString(&local_4c8,&local_468);
    FRigVMGraphFunctionHeader::GetFunctionNameFromObjectPath((FString *)local_4d0,pFVar7);
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    if ((FName)local_4d0 == (FName)0x0) {
LAB_14a0f3089:
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader((FRigVMGraphFunctionHeader *)local_448);
    }
    else if ((FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._0_8_ == 0) ||
            (pUVar8 = FSoftObjectPath::ResolveObject(&local_4c8), pUVar8 != (UObject *)0x0)) {
LAB_14a0f3061:
      pFVar10 = FRigVMGraphFunctionData::FindFunctionData
                          (&local_4c8,(FName *)local_4d0,(bool *)0x0,(FString *)0x0);
      if (pFVar10 == (FRigVMGraphFunctionData *)0x0) goto LAB_14a0f3089;
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader
                ((FRigVMGraphFunctionHeader *)local_448,&pFVar10->Header);
    }
    else {
      local_490 = 0;
      UE::Core::Private::Function::CheckCallable
                ((void *)FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._0_8_);
      uVar3 = FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._0_8_;
      plVar12 = (longlong *)&FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc.field_0x10;
      if (FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._40_8_ != 0) {
        plVar12 = (longlong *)FRigVMGraphFunctionHeader::FindFunctionHeaderFromPathFunc._40_8_;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      local_508 = &local_490;
      (*(code *)uVar3)(&local_248,uVar9);
      if ((local_248.LibraryPointer.HostObject.AssetPath.PackageName == (FName)0x0) ||
         (pFVar6 = GetLibraryNodePath(&local_248.LibraryPointer), (pFVar6->Data).ArrayNum < 2)) {
        FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_248);
        goto LAB_14a0f3061;
      }
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader
                ((FRigVMGraphFunctionHeader *)local_448,&local_248);
      FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_248);
    }
    if (local_4c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if (((FName)local_448._48_8_ != (FName)0x0) &&
       (pFVar6 = GetLibraryNodePath((FRigVMGraphFunctionIdentifier *)local_448),
       1 < (pFVar6->Data).ArrayNum)) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)local_448) &&
         ((FScriptContainerElement *)local_448 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x50)) {
        local_4f0 = (longlong)__return_storage_ptr__->ArrayNum;
        local_4e8 = 0x50;
        local_508 = (undefined8 *)local_448;
        local_500 = pFVar1;
        local_4f8 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TArray<FRigVMGraphFunctionIdentifier,TSizedDefaultAllocator<32>_> *)(*pcVar2)()
          ;
          return pTVar11;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      this_00 = (FSoftObjectPath *)
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x50);
      FSoftObjectPath::FSoftObjectPath(this_00,(FSoftObjectPath *)local_448);
      ::FString::FString((FString *)(this_00 + 1),(FString *)(local_448 + 0x20));
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)&this_00[1].SubPathString,(FSoftObjectPath *)(local_448 + 0x30))
      ;
    }
    FRigVMNodeLayout::~FRigVMNodeLayout(&local_300);
    if (local_310.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data);
    }
    local_318 = 0;
    if (local_320 != (void *)0x0) {
      FMemory::Free(local_320);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_448 + 0xe8));
    DestructItems<FRigVMGraphFunctionArgument,int>
              ((FRigVMGraphFunctionArgument *)local_448._216_8_,local_448._224_4_);
    if ((FRigVMGraphFunctionArgument *)local_448._216_8_ != (FRigVMGraphFunctionArgument *)0x0) {
      FMemory::Free((void *)local_448._216_8_);
    }
    if ((FScriptContainerElement *)local_448._200_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._200_8_);
    }
    if ((FScriptContainerElement *)local_448._184_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._184_8_);
    }
    if ((FScriptContainerElement *)local_448._168_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._168_8_);
    }
    if ((ITextData *)local_448._152_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_448._152_8_ + 0x10))();
    }
    if ((FScriptContainerElement *)local_448._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._120_8_);
    }
    DestructItems<FRigVMTag,int>((FRigVMTag *)local_448._96_8_,local_448._104_4_);
    if ((FRigVMTag *)local_448._96_8_ != (FRigVMTag *)0x0) {
      FMemory::Free((void *)local_448._96_8_);
    }
    if ((FScriptContainerElement *)local_448._64_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._64_8_);
    }
    if ((FScriptContainerElement *)local_448._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._32_8_);
    }
    if ((FScriptContainerElement *)local_448._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_448._16_8_);
    }
    this_01.Data = this_01.Data + 0x40;
  } while( true );
}

// GetVariants @ 14a0f32f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMVariantRef,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMGraphFunctionIdentifier::GetVariants
          (FRigVMGraphFunctionIdentifier *this,
          TArray<FRigVMVariantRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_288 [32];
  ForAnyElementType local_268;
  undefined8 local_260;
  FRigVMGraphFunctionIdentifier *local_258 [2];
  FRigVMGraphFunctionHeader local_248;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (GetVariantRefsByGuidFunc._0_8_ == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    FRigVMGraphFunctionHeader::FindGraphFunctionHeader(&local_248,this,(bool *)0x0,(FString *)0x0);
    UE::Core::Private::Function::CheckCallable((void *)GetVariantRefsByGuidFunc._0_8_);
    uVar2 = GetVariantRefsByGuidFunc._0_8_;
    plVar8 = (longlong *)&GetVariantRefsByGuidFunc.field_0x10;
    if (GetVariantRefsByGuidFunc._40_8_ != 0) {
      plVar8 = (longlong *)GetVariantRefsByGuidFunc._40_8_;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*(code *)uVar2)(&local_268,uVar7,&local_248.Variant);
    FVar3.Data = local_268.Data;
    iVar4 = (int)local_260;
    iVar11 = (int)local_260;
    if ((!param_1) && (local_258[0] = this, (int)local_260 != 0)) {
      iVar11 = 0;
      bVar5 = `FRigVMGraphFunctionIdentifier::GetVariants'::__l8::<lambda_1>::operator()
                        (local_258,(FRigVMVariantRef *)local_268.Data);
      bVar5 = !bVar5;
      iVar9 = 0;
      do {
        iVar1 = iVar9;
        do {
          iVar1 = iVar1 + 1;
          if (iVar4 <= iVar1) break;
          bVar6 = `FRigVMGraphFunctionIdentifier::GetVariants'::__l8::<lambda_1>::operator()
                            (local_258,(FRigVMVariantRef *)(FVar3.Data + (longlong)iVar1 * 0x40));
        } while (bVar5 == !bVar6);
        iVar10 = iVar1 - iVar9;
        if (bVar5 == false) {
          DestructItems<FRigVMVariantRef,int>
                    ((FRigVMVariantRef *)(FVar3.Data + (longlong)iVar9 * 0x40),iVar10);
        }
        else {
          if (iVar11 != iVar9) {
            memmove(FVar3.Data + (longlong)iVar11 * 0x40,FVar3.Data + (longlong)iVar9 * 0x40,
                    (longlong)iVar10 << 6);
          }
          iVar11 = iVar11 + iVar10;
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar9 = iVar1;
      } while (iVar1 < iVar4);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_268.Data;
    local_268.Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayMax = local_260._4_4_;
    local_260 = 0;
    __return_storage_ptr__->ArrayNum = iVar11;
    DestructItems<FRigVMVariantRef,int>((FRigVMVariantRef *)0x0,0);
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data);
    }
    FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_248);
  }
  return __return_storage_ptr__;
}

// IsVariant @ 14a0fa170

bool __thiscall FRigVMGraphFunctionIdentifier::IsVariant(FRigVMGraphFunctionIdentifier *this)

{
  int iVar1;
  TArray<FRigVMVariantRef,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMVariantRef,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = GetVariants(this,&local_18,false);
  iVar1 = pTVar2->ArrayNum;
  DestructItems<FRigVMVariantRef,int>
            ((FRigVMVariantRef *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FRigVMVariantRef *)local_18.AllocatorInstance.Data != (FRigVMVariantRef *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar1 != 0;
}

// IsVariantOf @ 14a0fa1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMGraphFunctionIdentifier::IsVariantOf
          (FRigVMGraphFunctionIdentifier *this,FRigVMGraphFunctionIdentifier *param_1)

{
  undefined1 auStack_438 [32];
  FRigVMGraphFunctionHeader local_418;
  FRigVMGraphFunctionHeader local_218;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_438;
  FRigVMGraphFunctionHeader::FindGraphFunctionHeader(&local_218,this,(bool *)0x0,(FString *)0x0);
  FRigVMGraphFunctionHeader::FindGraphFunctionHeader(&local_418,param_1,(bool *)0x0,(FString *)0x0);
  FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_418);
  FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_218);
  return ((local_218.Variant.Guid.D == local_418.Variant.Guid.D &&
          local_218.Variant.Guid.C == local_418.Variant.Guid.C) &&
         local_218.Variant.Guid.B == local_418.Variant.Guid.B) &&
         local_218.Variant.Guid.A == local_418.Variant.Guid.A;
}

