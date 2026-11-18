// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FMaterialResourceProxyReader @ 147f64d80

FMaterialResourceProxyReader * __thiscall
FMaterialResourceProxyReader::FMaterialResourceProxyReader
          (FMaterialResourceProxyReader *this,FArchive *param_1,Type param_2,Type param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FMaterialResourceProxyReader *pFVar4;
  
  this->_padding_ = 0;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  this->OffsetToEnd = -1;
  this->_padding_ = (longlong)&___7FMaterialResourceProxyReader__6B_;
  lVar1 = this->_padding_;
  (this->Names).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Names).ArrayNum = 0;
  (this->Names).ArrayMax = 0;
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerArchive.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x1546,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMaterialResourceProxyReader *)(*pcVar2)();
      return pFVar4;
    }
  }
  Initialize(this,param_2,param_3,param_2 != Num);
  return this;
}

// FMaterialResourceProxyReader @ 147f64e40

FMaterialResourceProxyReader * __thiscall
FMaterialResourceProxyReader::FMaterialResourceProxyReader
          (FMaterialResourceProxyReader *this,wchar_t *param_1,uint param_2,Type param_3,
          Type param_4)

{
  longlong *plVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  
  pIVar2 = IFileManager::Get();
  pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,param_1,1);
  this->_padding_ = (longlong)pFVar3;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,pFVar3);
  plVar1 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)&___7FMaterialResourceProxyReader__6B_;
  this->OffsetToEnd = -1;
  (this->Names).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Names).ArrayNum = 0;
  (this->Names).ArrayMax = 0;
  (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2);
  Initialize(this,param_3,param_4,false);
  return this;
}

// ~FMaterialResourceProxyReader @ 147f689f0

void __thiscall
FMaterialResourceProxyReader::~FMaterialResourceProxyReader(FMaterialResourceProxyReader *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
  this->_padding_ = (longlong)&___7FMaterialResourceProxyReader__6B_;
  if (this->OffsetToEnd != -1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
  }
  pFVar1 = (this->Names).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f68a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}

// operator<< @ 147f6a5f0

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FMaterialResourceProxyReader::operator<<(FMaterialResourceProxyReader *this,FName *param_1)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  FArchive *pFVar8;
  longlong lVar9;
  uint local_res8 [4];
  uint local_res18 [4];
  
  pFVar8 = (FArchive *)this->_padding_;
  puVar2 = (uint *)**(undefined8 **)&pFVar8->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  puVar2 = (uint *)**(undefined8 **)&pFVar8->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  uVar5 = local_res18[0];
  lVar9 = (longlong)(int)local_res8[0];
  if ((-1 < (int)local_res8[0]) && (iVar1 = (this->Names).ArrayNum, (int)local_res8[0] < iVar1)) {
    uVar7 = 0;
    if ((int)local_res8[0] < iVar1) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FArchive *)(*pcVar3)();
      return pFVar8;
    }
    FVar4.Number = uVar5;
    FVar4.ComparisonIndex.Value = *(uint *)((this->Names).AllocatorInstance.Data + lVar9 * 8);
    *param_1 = FVar4;
    return (FArchive *)this;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  return (FArchive *)this;
}

// GetArchiveName @ 147f792e0

FString * __thiscall
FMaterialResourceProxyReader::GetArchiveName
          (FMaterialResourceProxyReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMaterialResourceProxyReader");
  return __return_storage_ptr__;
}

// Initialize @ 147f7f1b0

void __thiscall
FMaterialResourceProxyReader::Initialize
          (FMaterialResourceProxyReader *this,Type param_1,Type param_2,bool param_3)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FArchive *pFVar3;
  uint *puVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint local_res8 [2];
  uint local_858;
  FName local_854;
  TArray<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_> local_848;
  FNameEntrySerialized local_838;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5494,"FMaterialResourceProxyReader_Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
               ,0x1576);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5494);
  }
  pFVar3 = (FArchive *)this->_padding_;
  puVar4 = (uint *)**(undefined8 **)&pFVar3->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar4;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  pTVar2 = &this->Names;
  if (-1 < (int)local_res8[0]) {
    piVar1 = &(this->Names).ArrayMax;
    iVar11 = 0;
    (this->Names).ArrayNum = 0;
    if (*piVar1 != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_res8[0],&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)local_res8[0]) {
      do {
        local_838.bIsWide = false;
        local_838.NonCasePreservingHash = 0;
        local_838.CasePreservingHash = 0;
        ::operator<<((FArchive *)this->_padding_,&local_838);
        ::FName::FName(&local_854,&local_838);
        pFVar5 = (FName *)(pTVar2->AllocatorInstance).Data;
        if ((pFVar5 <= &local_854) && (&local_854 < pFVar5 + *piVar1)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar9 = (this->Names).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar2->AllocatorInstance,piVar1);
        }
        iVar11 = iVar11 + 1;
        (this->Names).ArrayNum = iVar9 + 1;
        *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_854;
      } while (iVar11 < (int)local_res8[0]);
    }
    local_848.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_848.ArrayNum = 0;
    local_848.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_>
              ((FArchive *)this->_padding_,&local_848);
    if (local_848.ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(int *)local_848.AllocatorInstance.Data != 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Locs[0].Offset == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                         ,0x1584,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar3 = (FArchive *)this->_padding_;
    puVar4 = (uint *)**(undefined8 **)&pFVar3->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
      if ((pFVar3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&local_858,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar3,&local_858);
      }
    }
    else {
      local_858 = *puVar4;
      **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
    }
    lVar10 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    this->OffsetToFirstResource = lVar10;
    if (param_3) {
      this->OffsetToEnd = (int)local_858 + lVar10;
    }
    if (local_848.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.AllocatorInstance.Data);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

// Seek @ 147f85e40

void __thiscall
FMaterialResourceProxyReader::Seek(FMaterialResourceProxyReader *this,long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147f85e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))
            ((longlong *)this->_padding_,param_1 + this->OffsetToFirstResource);
  return;
}

// Tell @ 147f8bbd0

long64 __thiscall FMaterialResourceProxyReader::Tell(FMaterialResourceProxyReader *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  return lVar1 - this->OffsetToFirstResource;
}

