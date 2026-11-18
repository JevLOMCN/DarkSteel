// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// operator<< @ 14da1bd70

FArchive * __thiscall
FastGeo::FAssetRemapArchive::operator<<(FAssetRemapArchive *this,UObject **param_1)

{
  int iVar1;
  longlong *plVar2;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  UObject *pUVar12;
  uint *puVar13;
  uint local_res8 [2];
  uint local_res18 [2];
  
  if ((this->_padding_ & 1) == 0) {
    if ((this->_padding_ & 4) != 0) {
      pUVar12 = *param_1;
      local_res8[0] = 0xffffffff;
      if (pUVar12 != (UObject *)0x0) {
        puVar13 = (uint *)0x0;
        uVar8 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        puVar7 = puVar13;
        if (*(int *)&(this->UniqueAssets).field_0x8 != *(int *)&(this->UniqueAssets).field_0x34) {
          puVar10 = *(undefined1 **)&(this->UniqueAssets).field_0x40;
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &(this->UniqueAssets).field_0x38;
          }
          uVar8 = *(uint *)(puVar10 +
                           (ulonglong)
                           (*(int *)&(this->UniqueAssets).field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8))
                           * 4);
          if (uVar8 != 0xffffffff) {
            do {
              puVar7 = (uint *)(*(longlong *)&this->UniqueAssets + (longlong)(int)uVar8 * 0x18);
              if (*(UObject **)(*(longlong *)&this->UniqueAssets + (longlong)(int)uVar8 * 0x18) ==
                  pUVar12) break;
              uVar8 = puVar7[4];
              puVar7 = puVar13;
            } while (uVar8 != 0xffffffff);
          }
        }
        puVar9 = puVar7 + 2;
        if (puVar7 == (uint *)0x0) {
          puVar9 = puVar13;
        }
        if (puVar9 != (uint *)0x0) {
          local_res8[0] = *puVar9;
        }
      }
      plVar2 = (longlong *)this->_padding_;
      if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
        *plVar2 = *plVar2 + 4;
        return (FArchive *)this;
      }
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
        return (FArchive *)this;
      }
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
    return (FArchive *)this;
  }
  plVar2 = (longlong *)this->_padding_;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  lVar11 = (longlong)(int)local_res18[0];
  if (-1 < (int)local_res18[0]) {
    pTVar3 = this->UniqueAssetsArray;
    iVar1 = pTVar3->ArrayNum;
    if ((int)local_res18[0] < iVar1) {
      uVar8 = 0;
      if ((int)local_res18[0] < iVar1) {
        uVar8 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar4)();
        return pFVar6;
      }
      pUVar12 = *(UObject **)((pTVar3->AllocatorInstance).Data + lVar11 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
        *param_1 = pUVar12;
        return (FArchive *)this;
      }
      goto LAB_14da1be6d;
    }
  }
  pUVar12 = (UObject *)0x0;
LAB_14da1be6d:
  *param_1 = pUVar12;
  return (FArchive *)this;
}

// operator<< @ 14da1bfb0

FArchive * __thiscall
FastGeo::FAssetRemapArchive::operator<<(FAssetRemapArchive *this,FLazyObjectPtr *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                     ,0x50,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return (FArchive *)this;
}

// operator<< @ 14da1bff0

FArchive * __thiscall
FastGeo::FAssetRemapArchive::operator<<(FAssetRemapArchive *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FArchive *pFVar2;
  FObjectPtr_u_0 local_res8;
  
  local_res8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  pFVar2 = (FArchive *)(**(code **)(this->_padding_ + 0x168))(this,&local_res8);
  FVar1 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.Handle != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  (param_1->field0_0x0).Handle = (UObject *)FVar1;
  return pFVar2;
}

// operator<< @ 14da1c060

FArchive * __thiscall
FastGeo::FAssetRemapArchive::operator<<(FAssetRemapArchive *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                     ,0x52,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return (FArchive *)this;
}

// operator<< @ 14da1c0a0

FArchive * __thiscall
FastGeo::FAssetRemapArchive::operator<<(FAssetRemapArchive *this,FSoftObjectPtr *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return (FArchive *)this;
}

// operator<< @ 14da1c0e0

FArchive * __thiscall
FastGeo::FAssetRemapArchive::operator<<(FAssetRemapArchive *this,FWeakObjectPtr *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                     ,0x53,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return (FArchive *)this;
}

