// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// CreateEmptyPackage @ 141f2bfd0

FPackageStoreEntryResource * __cdecl
FPackageStoreEntryResource::CreateEmptyPackage
          (FPackageStoreEntryResource *__return_storage_ptr__,FName param_1,bool param_2)

{
  ulong64 uVar1;
  FPackageId FVar2;
  FName local_res8;
  FName local_res10;
  
  __return_storage_ptr__->Flags = None;
  (__return_storage_ptr__->PackageId).Id = 0;
  (__return_storage_ptr__->ImportedPackageIds).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ImportedPackageIds).ArrayNum = 0;
  (__return_storage_ptr__->ImportedPackageIds).ArrayMax = 0;
  (__return_storage_ptr__->ShaderMapHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShaderMapHashes).ArrayNum = 0;
  (__return_storage_ptr__->ShaderMapHashes).ArrayMax = 0;
  (__return_storage_ptr__->OptionalSegmentImportedPackageIds).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayNum = 0;
  (__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayMax = 0;
  (__return_storage_ptr__->SoftPackageReferences).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SoftPackageReferences).ArrayNum = 0;
  (__return_storage_ptr__->SoftPackageReferences).ArrayMax = 0;
  __return_storage_ptr__->PackageName = param_1;
  local_res10 = param_1;
  FVar2 = FPackageId::FromName(&local_res8);
                    /* WARNING: Load size is inaccurate */
  uVar1 = *FVar2.Id;
  __return_storage_ptr__->Flags = (uint)param_2 << 3;
  (__return_storage_ptr__->PackageId).Id = uVar1;
  return __return_storage_ptr__;
}

// FromCbObject @ 141f2fdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPackageStoreEntryResource * __cdecl
FPackageStoreEntryResource::FromCbObject
          (FPackageStoreEntryResource *__return_storage_ptr__,FCbObjectView *param_1)

{
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulong64 uVar10;
  TStringView<char8_t> *pTVar11;
  FName *pFVar12;
  FPackageId FVar13;
  FPackageStoreEntryResource *pFVar14;
  longlong lVar15;
  FCbObjectView *this;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_528 [32];
  ulong64 *local_508;
  FScriptContainerElement *local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined8 local_4e8;
  FPackageStoreEntryResource *local_4d8;
  ulong64 local_4d0;
  ulong64 local_4c8;
  ulong64 local_4c0;
  FCbObjectView *local_4b8;
  FScriptContainerElement *local_4b0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  TCbFieldIterator<FCbFieldView> local_478;
  TCbFieldIterator<FCbFieldView> local_460;
  TCbFieldIterator<FCbFieldView> local_448;
  TCbFieldIterator<FCbFieldView> local_430;
  char *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  char *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  char *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  char *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  char *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  char *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  char *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  char *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  FScriptContainerElement *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  char *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  char *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  TStringView<char8_t> local_368;
  TStringView<char8_t> local_358;
  FCbFieldView local_348;
  TStringView<char8_t> local_338;
  FCbFieldView local_328;
  TStringView<char8_t> local_318;
  FCbFieldView local_308;
  FCbFieldView local_2f8;
  TStringView<char8_t> local_2e8;
  FCbFieldView local_2d8;
  TStringView<char8_t> local_2c8;
  FCbFieldView local_2b8;
  FCbFieldView local_2a8;
  TStringView<char8_t> local_298;
  TStringView<wchar_t> local_288;
  TStringView<char8_t> local_278;
  FCbFieldView local_268;
  TStringView<char8_t> local_258;
  FCbFieldView local_248;
  FCbFieldView local_238;
  TStringView<char8_t> local_228;
  FCbFieldView local_218;
  TStringView<char8_t> local_208;
  FCbFieldView local_1f8;
  FCbFieldView local_1e8;
  FName local_1d8;
  FName local_1d0;
  TStringView<char8_t> local_1c8;
  FCbFieldView local_1b8;
  TStringView<char8_t> local_1a8;
  uchar *local_198;
  undefined8 uStack_190;
  TStringView<char8_t> local_188;
  uchar *local_178;
  undefined8 uStack_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_528;
  pTVar1 = &__return_storage_ptr__->OptionalSegmentImportedPackageIds;
  pTVar2 = &__return_storage_ptr__->ImportedPackageIds;
  pTVar3 = &__return_storage_ptr__->ShaderMapHashes;
  uStack_3f0 = 5;
  pTVar4 = &__return_storage_ptr__->SoftPackageReferences;
  pFVar5 = &__return_storage_ptr__->PackageName;
  __return_storage_ptr__->Flags = None;
  (__return_storage_ptr__->PackageId).Id = 0;
  pFVar5->ComparisonIndex = 0;
  pFVar5->Number = 0;
  local_3f8 = "flags";
  local_1c8._12_4_ = uStack_3ec;
  local_1c8.Size = 5;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ImportedPackageIds).ArrayNum = 0;
  (__return_storage_ptr__->ImportedPackageIds).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShaderMapHashes).ArrayNum = 0;
  (__return_storage_ptr__->ShaderMapHashes).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayNum = 0;
  (__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SoftPackageReferences).ArrayNum = 0;
  (__return_storage_ptr__->SoftPackageReferences).ArrayMax = 0;
  local_1c8.DataPtr = "flags";
  local_4d8 = __return_storage_ptr__;
  local_4b8 = param_1;
  FCbObjectView::FindView(param_1,&local_1b8,&local_1c8);
  uVar10 = FCbFieldView::AsInteger(&local_1b8,0,(FIntegerParams)0x40);
  uStack_3e0 = 0xb;
  local_4d8->Flags = (EPackageStoreEntryFlags)uVar10;
  local_3e8 = "packagename";
  local_368._12_4_ = uStack_3dc;
  local_368.Size = 0xb;
  local_368.DataPtr = "packagename";
  FCbObjectView::FindView(local_4b8,&local_348,&local_368);
  uStack_490 = 0;
  local_498 = 0;
  local_358.DataPtr = (uchar *)0x0;
  local_358.Size = 0;
  local_358._12_4_ = 0;
  pTVar11 = FCbFieldView::AsString(&local_348,&local_1a8,&local_358);
  local_198 = pTVar11->DataPtr;
  uStack_190 = *(undefined8 *)&pTVar11->Size;
  pFVar12 = ::FName::FName(&local_1d0,(int)*(undefined8 *)&pTVar11->Size,local_198,FNAME_Add);
  *pFVar5 = *pFVar12;
  FVar13 = FPackageId::FromName(&local_1d8);
  this = local_4b8;
  uStack_3d0 = 0x12;
                    /* WARNING: Load size is inaccurate */
  (local_4d8->PackageId).Id = *FVar13.Id;
  local_3d8 = "importedpackageids";
  local_338._12_4_ = uStack_3cc;
  local_338.Size = 0x12;
  local_338.DataPtr = "importedpackageids";
  FCbObjectView::FindView(local_4b8,&local_328,&local_338);
  if ((local_328.TypeWithFlags & CustomByName) != None) {
    uStack_410 = 0x12;
    local_418 = "importedpackageids";
    local_318._12_4_ = uStack_40c;
    local_318.Size = 0x12;
    local_318.DataPtr = "importedpackageids";
    FCbObjectView::FindView(this,&local_308,&local_318);
    FCbFieldView::CreateViewIterator(&local_308,(FCbFieldViewIterator *)&local_478);
    while (((byte)local_478._padding_ & 0x1f) != 0) {
      local_4d0 = FCbFieldView::AsInteger(&local_2f8,0,(FIntegerParams)0x80);
      pFVar20 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar20 <= (FScriptContainerElement *)&local_4d0) &&
         (lVar15 = (longlong)(__return_storage_ptr__->ImportedPackageIds).ArrayMax,
         (FScriptContainerElement *)&local_4d0 < pFVar20 + lVar15 * 8)) {
        local_4f0 = (longlong)(__return_storage_ptr__->ImportedPackageIds).ArrayNum;
        local_4e8 = 8;
        local_508 = &local_4d0;
        local_500 = pFVar20;
        local_4f8 = lVar15;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FPackageStoreEntryResource *)(*pcVar7)();
          return pFVar14;
        }
      }
      iVar9 = (__return_storage_ptr__->ImportedPackageIds).ArrayNum;
      if (iVar9 == (__return_storage_ptr__->ImportedPackageIds).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,
                           &(__return_storage_ptr__->ImportedPackageIds).ArrayMax);
      }
      (__return_storage_ptr__->ImportedPackageIds).ArrayNum = iVar9 + 1;
      *(ulong64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_4d0;
      TCbFieldIterator<FCbFieldView>::operator++(&local_478);
    }
  }
  uStack_3b0 = 0xf;
  local_3b8 = "shadermaphashes";
  local_2e8._12_4_ = uStack_3ac;
  local_2e8.Size = 0xf;
  local_2e8.DataPtr = "shadermaphashes";
  FCbObjectView::FindView(this,&local_2d8,&local_2e8);
  if ((local_2d8.TypeWithFlags & CustomByName) != None) {
    local_3a8 = "shadermaphashes";
    uStack_3a0 = 0xf;
    local_2c8._12_4_ = uStack_39c;
    local_2c8.Size = 0xf;
    local_2c8.DataPtr = "shadermaphashes";
    FCbObjectView::FindView(this,&local_2b8,&local_2c8);
    FCbFieldView::AsArrayView(&local_2b8,(FCbArrayView *)&local_2a8);
    FCbFieldView::CreateViewIterator(&local_2a8,(FCbFieldViewIterator *)&local_460);
    while (((byte)local_460._padding_ & 0x1f) != 0) {
      iVar9 = (__return_storage_ptr__->ShaderMapHashes).ArrayNum;
      if (iVar9 == (__return_storage_ptr__->ShaderMapHashes).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,&pTVar3->AllocatorInstance,
                           &(__return_storage_ptr__->ShaderMapHashes).ArrayMax);
      }
      (__return_storage_ptr__->ShaderMapHashes).ArrayNum = iVar9 + 1;
      pFVar20 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x14;
      local_4b0 = pFVar20;
      DefaultConstructItems<FSHAHash,int>(pFVar20,1);
      uStack_480 = 0;
      local_488 = 0;
      local_298.DataPtr = (uchar *)0x0;
      local_298.Size = 0;
      local_298._12_4_ = 0;
      pTVar11 = FCbFieldView::AsString((FCbFieldView *)&local_460,&local_188,&local_298);
      local_178 = pTVar11->DataPtr;
      uStack_170 = *(undefined8 *)&pTVar11->Size;
      puVar6 = pTVar11->DataPtr;
      iVar9 = (int)*(undefined8 *)&pTVar11->Size;
      local_68.Data = (FScriptContainerElement *)0x0;
      if (puVar6 == (uchar *)0x0) {
        local_60 = (FScriptContainerElement *)0x0;
        local_58 = 0;
      }
      else {
        iVar19 = 0;
        if ((0 < iVar9) && (iVar19 = 0, puVar6[(longlong)iVar9 + -1] == '\0')) {
          iVar19 = 1;
          iVar9 = iVar9 + -1;
        }
        local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar6,iVar9);
        uVar17 = local_58 + iVar19;
        uVar16 = uVar17;
        if (uVar17 < 0x81) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_141f30212;
          }
        }
        else {
LAB_141f30212:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar16,2)
          ;
        }
        local_60 = local_168;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          local_60 = local_68.Data;
        }
        UE::Core::Private::Convert((wchar_t *)local_60,uVar17,puVar6,iVar19 + iVar9);
        pFVar20 = local_4b0;
      }
      local_398 = local_60;
      iStack_390 = local_58;
      if ((local_58 != 0x28) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Src.Len() == GetStringLen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                             ,0x109,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FPackageStoreEntryResource *)(*pcVar7)();
        return pFVar14;
      }
      local_288._12_4_ = uStack_38c;
      local_288.Size = iStack_390;
      local_288.DataPtr = (wchar_t *)local_398;
      UE::String::HexToBytes(&local_288,(uchar *)pFVar20);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TCbFieldIterator<FCbFieldView>::operator++(&local_460);
      this = local_4b8;
    }
  }
  piVar18 = &(__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayMax;
  uStack_380 = 0x21;
  local_388 = "optionalsegmentimportedpackageids";
  local_278._12_4_ = uStack_37c;
  local_278.Size = 0x21;
  local_278.DataPtr = "optionalsegmentimportedpackageids";
  FCbObjectView::FindView(this,&local_268,&local_278);
  if ((local_268.TypeWithFlags & CustomByName) != None) {
    local_378 = "optionalsegmentimportedpackageids";
    uStack_370 = 0x21;
    local_258._12_4_ = uStack_36c;
    local_258.Size = 0x21;
    local_258.DataPtr = "optionalsegmentimportedpackageids";
    FCbObjectView::FindView(this,&local_248,&local_258);
    FCbFieldView::CreateViewIterator(&local_248,(FCbFieldViewIterator *)&local_448);
    while (((byte)local_448._padding_ & 0x1f) != 0) {
      local_4c8 = FCbFieldView::AsInteger(&local_238,0,(FIntegerParams)0x80);
      pFVar20 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar20 <= (FScriptContainerElement *)&local_4c8) &&
         ((FScriptContainerElement *)&local_4c8 < pFVar20 + (longlong)*piVar18 * 8)) {
        local_4f0 = (longlong)(__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayNum;
        local_4e8 = 8;
        local_508 = &local_4c8;
        local_500 = pFVar20;
        local_4f8 = (longlong)*piVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FPackageStoreEntryResource *)(*pcVar7)();
          return pFVar14;
        }
      }
      iVar9 = (__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayNum;
      if (iVar9 == *piVar18) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar18);
      }
      (__return_storage_ptr__->OptionalSegmentImportedPackageIds).ArrayNum = iVar9 + 1;
      *(ulong64 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_4c8;
      TCbFieldIterator<FCbFieldView>::operator++(&local_448);
    }
  }
  uStack_400 = 0x15;
  local_408 = "softpackagereferences";
  local_228._12_4_ = uStack_3fc;
  local_228.Size = 0x15;
  local_228.DataPtr = "softpackagereferences";
  FCbObjectView::FindView(this,&local_218,&local_228);
  if ((local_218.TypeWithFlags & CustomByName) != None) {
    local_3c8 = "softpackagereferences";
    uStack_3c0 = 0x15;
    local_208._12_4_ = uStack_3bc;
    local_208.Size = 0x15;
    local_208.DataPtr = "softpackagereferences";
    FCbObjectView::FindView(this,&local_1f8,&local_208);
    FCbFieldView::CreateViewIterator(&local_1f8,(FCbFieldViewIterator *)&local_430);
    while (((byte)local_430._padding_ & 0x1f) != 0) {
      local_4c0 = FCbFieldView::AsInteger(&local_1e8,0,(FIntegerParams)0x80);
      pFVar20 = (pTVar4->AllocatorInstance).Data;
      if ((pFVar20 <= (FScriptContainerElement *)&local_4c0) &&
         (lVar15 = (longlong)(__return_storage_ptr__->SoftPackageReferences).ArrayMax,
         (FScriptContainerElement *)&local_4c0 < pFVar20 + lVar15 * 8)) {
        local_4f0 = (longlong)(__return_storage_ptr__->SoftPackageReferences).ArrayNum;
        local_4e8 = 8;
        local_508 = &local_4c0;
        local_500 = pFVar20;
        local_4f8 = lVar15;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FPackageStoreEntryResource *)(*pcVar7)();
          return pFVar14;
        }
      }
      iVar9 = (__return_storage_ptr__->SoftPackageReferences).ArrayNum;
      if (iVar9 == (__return_storage_ptr__->SoftPackageReferences).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar4->AllocatorInstance,
                           &(__return_storage_ptr__->SoftPackageReferences).ArrayMax);
      }
      pFVar20 = (pTVar4->AllocatorInstance).Data;
      (__return_storage_ptr__->SoftPackageReferences).ArrayNum = iVar9 + 1;
      *(ulong64 *)(pFVar20 + (longlong)iVar9 * 8) = local_4c0;
      TCbFieldIterator<FCbFieldView>::operator++(&local_430);
    }
  }
  return local_4d8;
}

