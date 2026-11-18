// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// Emplace<FString_const_&> @ 142ab68d0

FCachedVolumeInfo * __thiscall
TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
::Emplace<FString_const_&>
          (TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FCachedVolumeInfo *pFVar6;
  wchar_t *pwVar7;
  TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *__return_storage_ptr__;
  wchar_t *pwVar8;
  longlong lVar9;
  TKeyInitializer<FString_const_&> local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>_const_,int,FString,TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8.Key._0_1_,(TLess<FString_const_&>)local_res8.Key._0_1_);
  pwVar8 = L"";
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCachedVolumeInfo *)(*pcVar2)();
      return pFVar6;
    }
    if (-1 < iVar4) goto LAB_142ab6943;
  }
  else {
LAB_142ab6943:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if (iVar4 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FCachedVolumeInfo *)(*pcVar2)();
          return pFVar6;
        }
      }
      pFVar1 = (this->Pairs).AllocatorInstance.Data;
      lVar9 = (longlong)iVar4 * 0xc0;
      if (*(int *)(pFVar1 + lVar9 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(pFVar1 + lVar9);
      }
      if ((param_1->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar7);
      if (-1 < iVar5) {
        __return_storage_ptr__ =
             (TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
             ((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
                  (__return_storage_ptr__,1);
        goto LAB_142ab69ec;
      }
    }
  }
  TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar4,1);
  __return_storage_ptr__ =
       (TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
       ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0xc0);
LAB_142ab69ec:
  local_res8.Key = param_1;
  TKeyInitializer<FString_const_&>::
  operator<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>_TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>
            (&local_res8,__return_storage_ptr__);
  return (FCachedVolumeInfo *)&__return_storage_ptr__->field_0x10;
}

