// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// FPCGAttributeAccessorKeysEntries @ 149e344e0

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  (this->Entries).DataPtr = (long64 *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->ExtractedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtractedEntries).ArrayNum = 0;
  (this->ExtractedEntries).ArrayMax = 0;
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e34510

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,TArrayView<__int64_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGAttributeAccessorKeysEntries *pFVar4;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  iVar1 = param_1->ArrayNum;
  (this->Entries).DataPtr = param_1->DataPtr;
  (this->Entries).ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGAttributeAccessorKeysEntries *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->ExtractedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtractedEntries).ArrayNum = 0;
  (this->ExtractedEntries).ArrayMax = 0;
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e34580

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,TArrayView<__int64,int> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  iVar1 = param_1->ArrayNum;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  (this->Entries).DataPtr = param_1->DataPtr;
  (this->Entries).ArrayNum = iVar1;
  *(undefined4 *)&(this->Entries).field_0xc = uVar2;
  (this->ExtractedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtractedEntries).ArrayNum = 0;
  (this->ExtractedEntries).ArrayMax = 0;
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e345b0

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,FPCGMetadataDomain *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPCGAttributeAccessorKeysEntries *pFVar5;
  undefined4 uStack_c;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  (this->Entries).DataPtr = (long64 *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->ExtractedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtractedEntries).ArrayNum = 0;
  (this->ExtractedEntries).ArrayMax = 0;
  InitializeFromMetadata(this,param_1,param_2);
  pFVar2 = (this->ExtractedEntries).AllocatorInstance.Data;
  iVar1 = (this->ExtractedEntries).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPCGAttributeAccessorKeysEntries *)(*pcVar3)();
      return pFVar5;
    }
  }
  (this->Entries).DataPtr = (long64 *)pFVar2;
  *(ulonglong *)&(this->Entries).ArrayNum = CONCAT44(uStack_c,iVar1);
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e34640

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,UPCGMetadata *param_1,bool param_2)

{
  FPCGMetadataDomain *pFVar1;
  
  if ((param_1 == (UPCGMetadata *)0x0) || (PCGMetadataDomainID::Default.Flag == Invalid)) {
    pFVar1 = (FPCGMetadataDomain *)0x0;
  }
  else {
    pFVar1 = UPCGMetadata::FindOrCreateMetadataDomain(param_1,&PCGMetadataDomainID::Default);
  }
  FPCGAttributeAccessorKeysEntries(this,pFVar1,param_2);
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e346b0

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,FPCGMetadataAttributeBase *param_1)

{
  UPCGMetadata *pUVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  FPCGMetadataDomain *pFVar3;
  FPCGMetadataDomain *pFVar4;
  
  if ((param_1->Metadata == (FPCGMetadataDomain *)0x0) ||
     (pUVar1 = param_1->Metadata->TopMetadata, pUVar1 == (UPCGMetadata *)0x0)) {
    pFVar4 = (FPCGMetadataDomain *)0x0;
  }
  else {
    pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&pUVar1->MetadataDomains,&PCGMetadataDomainID::Default);
    pFVar4 = (FPCGMetadataDomain *)0x0;
    pFVar3 = (FPCGMetadataDomain *)&pTVar2->field_0x10;
    if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar3 = pFVar4;
    }
    if (pFVar3 != (FPCGMetadataDomain *)0x0) {
      pFVar4 = (FPCGMetadataDomain *)pFVar3->_padding_;
    }
  }
  FPCGAttributeAccessorKeysEntries(this,pFVar4,false);
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e34720

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,FPCGMetadataDomain *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPCGAttributeAccessorKeysEntries *pFVar5;
  undefined4 uStack_c;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  (this->Entries).DataPtr = (long64 *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->ExtractedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtractedEntries).ArrayNum = 0;
  (this->ExtractedEntries).ArrayMax = 0;
  InitializeFromMetadata(this,param_1,param_2);
  pFVar2 = (this->ExtractedEntries).AllocatorInstance.Data;
  iVar1 = (this->ExtractedEntries).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPCGAttributeAccessorKeysEntries *)(*pcVar3)();
      return pFVar5;
    }
  }
  (this->Entries).DataPtr = (long64 *)pFVar2;
  *(ulonglong *)&(this->Entries).ArrayNum = CONCAT44(uStack_c,iVar1);
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e347b0

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,UPCGMetadata *param_1,bool param_2)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataDomain *pFVar2;
  FPCGMetadataDomain *pFVar3;
  
  pFVar3 = (FPCGMetadataDomain *)0x0;
  if (param_1 != (UPCGMetadata *)0x0) {
    pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_1->MetadataDomains,&PCGMetadataDomainID::Default);
    pFVar3 = (FPCGMetadataDomain *)0x0;
    pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
    if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar2 = pFVar3;
    }
    if (pFVar2 != (FPCGMetadataDomain *)0x0) {
      pFVar3 = (FPCGMetadataDomain *)pFVar2->_padding_;
    }
  }
  FPCGAttributeAccessorKeysEntries(this,pFVar3,param_2);
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  return this;
}

// FPCGAttributeAccessorKeysEntries @ 149e34820

FPCGAttributeAccessorKeysEntries * __thiscall
FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries
          (FPCGAttributeAccessorKeysEntries *this,long64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPCGAttributeAccessorKeysEntries *pFVar6;
  undefined4 uStack_c;
  
  *(undefined1 *)&this->_padding_ = 0;
  piVar1 = &(this->ExtractedEntries).ArrayMax;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
  (this->Entries).DataPtr = (long64 *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->ExtractedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtractedEntries).ArrayNum = 0;
  *piVar1 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&(this->ExtractedEntries).AllocatorInstance,piVar1);
  (this->ExtractedEntries).ArrayNum = iVar5 + 1;
  *(long64 *)((this->ExtractedEntries).AllocatorInstance.Data + (longlong)iVar5 * 8) = param_1;
  pFVar2 = (this->ExtractedEntries).AllocatorInstance.Data;
  iVar5 = (this->ExtractedEntries).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPCGAttributeAccessorKeysEntries *)(*pcVar3)();
      return pFVar6;
    }
  }
  (this->Entries).DataPtr = (long64 *)pFVar2;
  *(ulonglong *)&(this->Entries).ArrayNum = CONCAT44(uStack_c,iVar5);
  return this;
}

// GetMetadataEntryKeys @ 149e5b4d0

bool __thiscall
FPCGAttributeAccessorKeysEntries::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysEntries *this,int param_1,TArrayView<__int64_*,int> *param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long64 **pplVar10;
  
  pplVar10 = param_2->DataPtr;
  iVar9 = (this->Entries).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar1 = (this->Entries).DataPtr;
      uVar5 = param_1 + 1;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *pplVar10 = plVar1 + param_1;
      iVar9 = (this->Entries).ArrayNum;
      pplVar10 = pplVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetMetadataEntryKeys @ 149e5b650

bool __thiscall
FPCGAttributeAccessorKeysEntries::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysEntries *this,int param_1,
          TArrayView<__int64_const_*,int> *param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long64 **pplVar10;
  
  pplVar10 = param_2->DataPtr;
  iVar9 = (this->Entries).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar1 = (this->Entries).DataPtr;
      uVar5 = param_1 + 1;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *pplVar10 = plVar1 + param_1;
      iVar9 = (this->Entries).ArrayNum;
      pplVar10 = pplVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetNum @ 149e5c3e0

int __thiscall FPCGAttributeAccessorKeysEntries::GetNum(FPCGAttributeAccessorKeysEntries *this)

{
  return (this->Entries).ArrayNum;
}

// InitializeFromMetadata @ 149e773a0

void __thiscall
FPCGAttributeAccessorKeysEntries::InitializeFromMetadata
          (FPCGAttributeAccessorKeysEntries *this,FPCGMetadataDomain *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong local_28 [2];
  
  if (param_1 != (FPCGMetadataDomain *)0x0) {
    if (((this->ExtractedEntries).ArrayNum != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExtractedEntries.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorKeys.cpp"
                           ,0x46,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)&param_1->ItemLock);
    uVar6 = (longlong)(param_1->ParentKeys).ArrayNum + param_1->ItemKeyOffset;
    ReleaseSRWLockShared((PSRWLOCK)&param_1->ItemLock);
    if (0 < (longlong)uVar6) {
      iVar5 = (int)uVar6;
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar6 & 0xffffffff);
      }
      piVar1 = &(this->ExtractedEntries).ArrayMax;
      if ((this->ExtractedEntries).ArrayMax < iVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar5,&(this->ExtractedEntries).AllocatorInstance,
                   (this->ExtractedEntries).ArrayNum,piVar1);
      }
      local_28[0] = 0;
      do {
        pFVar2 = (this->ExtractedEntries).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ExtractedEntries).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ExtractedEntries).AllocatorInstance,piVar1);
          (this->ExtractedEntries).ArrayNum = iVar5;
        }
        (this->ExtractedEntries).ArrayNum = iVar5 + 1;
        *(longlong *)((this->ExtractedEntries).AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_28[0];
        local_28[0] = local_28[0] + 1;
      } while (local_28[0] < (longlong)uVar6);
    }
    if (((this->ExtractedEntries).ArrayNum == 0) && (param_2)) {
      pFVar2 = (this->ExtractedEntries).AllocatorInstance.Data;
      if ((pFVar2 < (FScriptContainerElement *)0x151fdc5f9) &&
         ((&PCGInvalidEntryKey < pFVar2 + (longlong)(this->ExtractedEntries).ArrayMax * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->ExtractedEntries).ArrayNum;
      piVar1 = &(this->ExtractedEntries).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ExtractedEntries).AllocatorInstance,piVar1);
      }
      (this->ExtractedEntries).ArrayNum = iVar5 + 1;
      *(undefined8 *)((this->ExtractedEntries).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           0xffffffffffffffff;
    }
  }
  return;
}

