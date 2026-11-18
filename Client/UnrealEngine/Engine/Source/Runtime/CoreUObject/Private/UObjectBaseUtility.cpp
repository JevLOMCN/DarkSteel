// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 51

// CanBeClusterRoot @ 141e5a720

bool __thiscall UObjectBaseUtility::CanBeClusterRoot(UObjectBaseUtility *this)

{
  return false;
}

// OnClusterMarkedAsPendingKill @ 141e5f0f0

void __thiscall UObjectBaseUtility::OnClusterMarkedAsPendingKill(UObjectBaseUtility *this)

{
  return;
}

// MarkAsGarbage @ 141eada00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UObjectBaseUtility::MarkAsGarbage(UObjectBaseUtility *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRooted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0xb8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  do {
    lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((uVar5 >> 0x15 & 1) != 0) break;
    if (((ulonglong)pFVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (pFVar4->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
    }
    UNLOCK();
  } while (!bVar3);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  FUObjectItem::ClearRootFlags(pFVar4,Async);
  return;
}

// AtomicallyClearInternalFlags @ 141edd8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UObjectBaseUtility::AtomicallyClearInternalFlags
          (UObjectBaseUtility *this,EInternalObjectFlags param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FUObjectItem *this_00;
  EInternalObjectFlags EVar5;
  EInternalObjectFlags EVar6;
  
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (((((EInternalObjectFlags)((ulonglong)(this_00->field0_0x0).FlagsAndRefCount >> 0x20) & param_1
        ) >> 0x15 & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ObjectItem->GetFlags() & (FlagsToClear & EInternalObjectFlags::Garbage)) == EInternalObjectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0x13c,
                         L"ClearInternalFlags should not clear Garbage flag. Use ClearGarbage() instead"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((param_1 &
       ~(PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
         ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|AutoRTFMConstructionAborted|
         ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0)) != Borrowed) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32(FlagToClear) & ~int32((EInternalObjectFlags::Remote | EInternalObjectFlags::RemoteReference | EInternalObjectFlags::Borrowed | EInternalObjectFlags::ReachabilityFlag0 | EInternalObjectFlags::ReachabilityFlag1 | EInternalObjectFlags::ReachabilityFlag2 | EInternalObjectFlags::AutoRTFMConstructionAborted | EInternalObjectFlags::LoaderImport | EInternalObjectFlags::Garbage | EInternalObjectFlags::ReachableInCluster | EInternalObjectFlags::ClusterRoot | EInternalObjectFlags::Native | EInternalObjectFlags::Async | EInternalObjectFlags::AsyncLoadingPhase1 | EInternalObjectFlags::AsyncLoadingPhase2 | EInternalObjectFlags::RootSet | EInternalObjectFlags::PendingConstruction | EInternalObjectFlags::Unreachable))) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0xf4,L"%d is not a valid internal flag value"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EVar6 = param_1 & ~(Unreachable|ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
  if ((param_1 & (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) !=
      Borrowed) {
    bVar3 = FUObjectItem::ClearRootFlags(this_00,EVar6);
    return bVar3;
  }
  do {
    lVar1 = (this_00->field0_0x0).FlagsAndRefCount;
    EVar5 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
    if ((EVar6 & EVar5) == Borrowed) {
      return false;
    }
    if (((ulonglong)this_00 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (this_00->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (this_00->field0_0x0).FlagsAndRefCount =
           (longlong)(int)(~EVar6 & EVar5) << 0x20 | (longlong)(int)lVar1;
    }
    UNLOCK();
  } while (!bVar3);
  return true;
}

// ClearFlags @ 141ee04a0

void __thiscall UObjectBaseUtility::ClearFlags(UObjectBaseUtility *this,EObjectFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_1 & RF_MirroredGarbage) != RF_NoFlags) &&
     ((param_1 & RF_MirroredGarbage & *(EObjectFlags *)&this->field_0x8) != RF_NoFlags)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(FlagsToClear & RF_MirroredGarbage) || (GetFlags() & (FlagsToClear & RF_MirroredGarbage)) == RF_NoFlags"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x53,
                       L"RF_MirroredGarbage can not be cleared through ClearFlags function. Use ClearGarbage() instead"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this,param_1);
  return;
}

// SetFlags @ 141f11120

void __thiscall UObjectBaseUtility::SetFlags(UObjectBaseUtility *this,EObjectFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_1 & RF_MirroredGarbage) != RF_NoFlags) &&
     ((*(EObjectFlags *)&this->field_0x8 & param_1 & RF_MirroredGarbage) !=
      (param_1 & RF_MirroredGarbage))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x4b,
                       L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,param_1);
  return;
}

// ThisThreadAtomicallyClearedRFUnreachable @ 142090d10

bool __thiscall
UObjectBaseUtility::ThisThreadAtomicallyClearedRFUnreachable(UObjectBaseUtility *this)

{
  longlong lVar1;
  FUObjectItem *pFVar2;
  uint uVar3;
  bool bVar4;
  
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  do {
    lVar1 = (pFVar2->field0_0x0).FlagsAndRefCount;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((uVar3 >> 0x1c & 1) == 0) {
      return false;
    }
    if (((ulonglong)pFVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar4 = lVar1 == (pFVar2->field0_0x0).FlagsAndRefCount;
    if (bVar4) {
      (pFVar2->field0_0x0).FlagsAndRefCount =
           ((longlong)(int)uVar3 & 0xffffffffefffffffU) << 0x20 | (longlong)(int)lVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return true;
}

// IsA<UClass> @ 14209f560

bool __thiscall UObjectBaseUtility::IsA<UClass>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// GetLinkerCustomVersion @ 1420faaf0

int __thiscall UObjectBaseUtility::GetLinkerCustomVersion(UObjectBaseUtility *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FLinkerLoad *pFVar4;
  UPackage *pUVar5;
  FCustomVersionContainer *pFVar6;
  longlong *this_00;
  TOptional<FCustomVersion> *pTVar7;
  FCustomVersion *pFVar8;
  FGuid *pFVar9;
  FGuid local_58;
  FGuid local_48;
  TOptional<FCustomVersion> local_38;
  
  pFVar4 = GetLinker(this);
  if (pFVar4 != (FLinkerLoad *)0x0) {
LAB_1420fabc6:
    local_48.A = param_1->A;
    local_48.B = param_1->B;
    local_48.C = param_1->C;
    local_48.D = param_1->D;
    this_00 = &pFVar4->_padding_;
    pFVar9 = &local_48;
LAB_1420fabda:
    pFVar8 = FCustomVersionContainer::GetVersion((FCustomVersionContainer *)this_00,pFVar9);
    if (pFVar8 != (FCustomVersion *)0x0) {
      return pFVar8->Version;
    }
    return -1;
  }
  pUVar5 = GetOutermost(this);
  if (pUVar5 == (UPackage *)this) {
    pUVar5 = CastChecked<UPackage,UObject_const_>((UObject *)this);
    pFVar4 = FLinkerLoad::FindExistingLinkerForPackage(pUVar5);
    if (pFVar4 != (FLinkerLoad *)0x0) goto LAB_1420fabc6;
  }
  pUVar5 = GetOutermost(this);
  if (pUVar5 != (UPackage *)0x0) {
    pUVar5 = GetOutermost(this);
    pFVar6 = UPackage::GetLinkerCustomVersions(pUVar5);
    if ((pFVar6->Versions).ArrayNum != 0) {
      pUVar5 = GetOutermost(this);
      this_00 = (longlong *)UPackage::GetLinkerCustomVersions(pUVar5);
      local_58.A = param_1->A;
      local_58.B = param_1->B;
      local_58.C = param_1->C;
      local_58.D = param_1->D;
      pFVar9 = &local_58;
      goto LAB_1420fabda;
    }
  }
  pTVar7 = FCurrentCustomVersions::Get(&local_38,param_1);
  if (pTVar7->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return (pTVar7->TypedValue).Version;
}

// GetLinkerLicenseeUEVersion @ 1420faca0

int __thiscall UObjectBaseUtility::GetLinkerLicenseeUEVersion(UObjectBaseUtility *this)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *pFVar2;
  UPackage *pUVar3;
  
  pFVar2 = GetLinker(this);
  if (pFVar2 == (FLinkerLoad *)0x0) {
    pUVar3 = GetOutermost(this);
    if (pUVar3 == (UPackage *)this) {
      pUVar3 = CastChecked<UPackage,UObject_const_>((UObject *)this);
      pFVar2 = FLinkerLoad::FindExistingLinkerForPackage(pUVar3);
      if (pFVar2 != (FLinkerLoad *)0x0) goto LAB_1420fad08;
    }
    pUVar3 = GetOutermost(this);
    if (pUVar3 != (UPackage *)0x0) {
      pUVar3 = GetOutermost(this);
      pFVar1 = (pUVar3->AdditionalInfo).Ptr;
      if (pFVar1 != (FAdditionalInfo *)0x0) {
        return pFVar1->LinkerLicenseeVersion;
      }
    }
    return GPackageFileLicenseeUEVersion;
  }
LAB_1420fad08:
  return (int)pFVar2->_padding_;
}

// GetLinkerUEVersion @ 1420fad20

FPackageFileVersion __thiscall UObjectBaseUtility::GetLinkerUEVersion(UObjectBaseUtility *this)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *pFVar2;
  UPackage *pUVar3;
  FAdditionalInfo *pFVar4;
  FPackageFileVersion in_RDX;
  
  pFVar2 = GetLinker(this);
  if (pFVar2 == (FLinkerLoad *)0x0) {
    pUVar3 = GetOutermost(this);
    if (pUVar3 == (UPackage *)this) {
      pUVar3 = CastChecked<UPackage,UObject_const_>((UObject *)this);
      pFVar2 = FLinkerLoad::FindExistingLinkerForPackage(pUVar3);
      if (pFVar2 != (FLinkerLoad *)0x0) goto LAB_1420fadaf;
    }
    pUVar3 = GetOutermost(this);
    if (pUVar3 != (UPackage *)0x0) {
      pUVar3 = GetOutermost(this);
      pFVar1 = (pUVar3->AdditionalInfo).Ptr;
      pFVar4 = (FAdditionalInfo *)&GPackageFileUEVersion;
      if (pFVar1 != (FAdditionalInfo *)0x0) {
        pFVar4 = pFVar1;
      }
      *(FPackageFileVersion *)in_RDX = pFVar4->LinkerPackageVersion;
      return in_RDX;
    }
    *(FPackageFileVersion *)in_RDX = GPackageFileUEVersion;
    return in_RDX;
  }
LAB_1420fadaf:
  *(longlong *)in_RDX = pFVar2->_padding_;
  return in_RDX;
}

// AddToCluster @ 14225ffe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectBaseUtility::AddToCluster(UObjectBaseUtility *this,UObjectBaseUtility *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUObjectItem *pFVar7;
  FUObjectCluster *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_248 [32];
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  int local_1c0 [2];
  UObjectBaseUtility *local_1b8;
  UObjectBaseUtility **local_1b0;
  TFastReferenceCollector<FClusterReferenceProcessor,UE::GC::TDefaultCollector<FClusterReferenceProcessor>_>
  local_1a8;
  FClusterReferenceProcessor local_1a0 [4];
  FWorkerContext local_140;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_248;
  if ((param_1 == (UObjectBaseUtility *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusterRootOrObjectFromCluster",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x72,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)&param_1->field_0xc;
  pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
  if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
    iVar6 = pFVar7->ClusterRootIndex;
  }
  if (iVar6 != 0) {
    if (0 < iVar6) {
      if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
        pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
      }
      else {
        pFVar7 = (FUObjectItem *)0x0;
      }
    }
    pFVar8 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar7->ClusterRootIndex);
    if (pFVar8 != (FUObjectCluster *)0x0) {
      iVar6 = pFVar8->RootIndex;
      if (param_2) {
        local_1c0[0] = *(int *)&this->field_0xc;
        uVar10 = 0xffffffff;
        uVar11 = 0;
        if (0 < (pFVar8->MutableObjects).ArrayNum) {
          lVar12 = 0;
          do {
            if (uVar10 != 0xffffffff) {
              return;
            }
            iVar6 = (pFVar8->MutableObjects).ArrayNum;
            uVar5 = 0;
            if ((int)uVar11 < iVar6) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if (uVar5 == 0) {
              local_228 = (FScriptContainerElement *)(longlong)(int)uVar11;
              local_220 = (FScriptContainerElement *)(longlong)iVar6;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar2 = (pFVar8->MutableObjects).AllocatorInstance.Data;
            if (local_1c0[0] < *(int *)(pFVar2 + lVar12)) {
              if ((pFVar2 <= (FScriptContainerElement *)local_1c0) &&
                 (lVar9 = (longlong)(pFVar8->MutableObjects).ArrayMax,
                 (FScriptContainerElement *)local_1c0 < pFVar2 + lVar9 * 4)) {
                local_210 = (longlong)(pFVar8->MutableObjects).ArrayNum;
                local_208 = 4;
                local_228 = (FScriptContainerElement *)local_1c0;
                local_220 = pFVar2;
                local_218 = lVar9;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              iVar6 = (pFVar8->MutableObjects).ArrayNum;
              piVar1 = &(pFVar8->MutableObjects).ArrayMax;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&(pFVar8->MutableObjects).AllocatorInstance,piVar1);
                (pFVar8->MutableObjects).ArrayNum = iVar6;
              }
              (pFVar8->MutableObjects).ArrayNum = iVar6 + 1;
              pFVar2 = (pFVar8->MutableObjects).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
              memmove(pFVar2 + 4,pFVar2,(longlong)(int)(iVar6 - uVar11) << 2);
              *(int *)((pFVar8->MutableObjects).AllocatorInstance.Data + lVar12) = local_1c0[0];
              uVar10 = uVar11;
            }
            else {
              iVar6 = (pFVar8->MutableObjects).ArrayNum;
              uVar5 = 0;
              if ((int)uVar11 < iVar6) {
                uVar5 = ~uVar11 >> 0x1f;
              }
              if (uVar5 == 0) {
                local_228 = (FScriptContainerElement *)(longlong)(int)uVar11;
                local_220 = (FScriptContainerElement *)(longlong)iVar6;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              if (*(int *)((pFVar8->MutableObjects).AllocatorInstance.Data + lVar12) == local_1c0[0]
                 ) {
                uVar10 = uVar11;
              }
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 4;
          } while ((int)uVar11 < (pFVar8->MutableObjects).ArrayNum);
          if (uVar10 != 0xffffffff) {
            return;
          }
        }
        pFVar2 = (pFVar8->MutableObjects).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_1c0) &&
           (lVar12 = (longlong)(pFVar8->MutableObjects).ArrayMax,
           (FScriptContainerElement *)local_1c0 < pFVar2 + lVar12 * 4)) {
          local_210 = (longlong)(pFVar8->MutableObjects).ArrayNum;
          local_208 = 4;
          local_228 = (FScriptContainerElement *)local_1c0;
          local_220 = pFVar2;
          local_218 = lVar12;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = (pFVar8->MutableObjects).ArrayNum;
        piVar1 = &(pFVar8->MutableObjects).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(pFVar8->MutableObjects).AllocatorInstance,piVar1);
        }
        (pFVar8->MutableObjects).ArrayNum = iVar6 + 1;
        *(int *)((pFVar8->MutableObjects).AllocatorInstance.Data + (longlong)iVar6 * 4) =
             local_1c0[0];
      }
      else {
        pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
        local_1a0[0].Outermost =
             (UObject *)GetOutermost((UObjectBaseUtility *)(pFVar7->field1_0x8).Object);
        local_1b0 = &local_1b8;
        local_1b8 = this;
        local_1a0[0].ClusterRootIndex = iVar6;
        local_1a0[0].Cluster = pFVar8;
        UE::GC::FWorkerContext::FWorkerContext(&local_140);
        local_140.InitialNativeReferences.DataPtr = (UObject ***)&local_1b0;
        local_140.InitialNativeReferences.ArrayNum = 1;
        local_140.InitialNativeReferences._12_4_ = local_1a0[1].Cluster._4_4_;
        local_1a8.Processor = local_1a0;
        UE::GC::
        TFastReferenceCollector<FClusterReferenceProcessor,UE::GC::TDefaultCollector<FClusterReferenceProcessor>_>
        ::ProcessObjectArray(&local_1a8,&local_140);
        UE::GC::FWorkerContext::~FWorkerContext(&local_140);
      }
    }
  }
  return;
}

// CanBeInCluster @ 1422649d0

bool __thiscall UObjectBaseUtility::CanBeInCluster(UObjectBaseUtility *this)

{
  undefined1 uVar1;
  
  if (*(longlong **)&this->field_0x20 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422649dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)&this->field_0x20 + 0x28))();
    return (bool)uVar1;
  }
  return true;
}

// ClearGarbage @ 142265110

void __thiscall UObjectBaseUtility::ClearGarbage(UObjectBaseUtility *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FUObjectItem *pFVar6;
  
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_MirroredGarbage);
  iVar1 = *(int *)&this->field_0xc;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  else {
    pFVar6 = (FUObjectItem *)0x0;
  }
  do {
    lVar2 = (pFVar6->field0_0x0).FlagsAndRefCount;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((uVar5 >> 0x15 & 1) == 0) {
      return;
    }
    if (((ulonglong)pFVar6 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar4 = lVar2 == (pFVar6->field0_0x0).FlagsAndRefCount;
    if (bVar4) {
      (pFVar6->field0_0x0).FlagsAndRefCount =
           ((longlong)(int)uVar5 & 0xffffffffffdfffffU) << 0x20 | (longlong)(int)lVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return;
}

// ClearInternalFlags @ 1422651e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObjectBaseUtility::ClearInternalFlags(UObjectBaseUtility *this,EInternalObjectFlags param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *this_00;
  
  iVar1 = *(int *)&this->field_0xc;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    this_00 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  else {
    this_00 = (FUObjectItem *)0x0;
  }
  if (((param_1 & Garbage) != Borrowed) &&
     ((param_1 & Garbage &
      (EInternalObjectFlags)((ulonglong)(this_00->field0_0x0).FlagsAndRefCount >> 0x20)) != Borrowed
     )) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(FlagsToClear & EInternalObjectFlags::Garbage) || (ObjectItem->GetFlags() & (FlagsToClear & EInternalObjectFlags::Garbage)) == EInternalObjectFlags::None"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x12f,
                       L"ClearInternalFlags should not clear Garbage flag. Use ClearGarbage() instead"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUObjectItem::ThisThreadAtomicallyClearedFlag(this_00,param_1);
  return;
}

// CreateCluster @ 142266c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObjectBaseUtility::CreateCluster(UObjectBaseUtility *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UObjectBaseUtility::CreateCluster(void)_::_2_::FStat_STAT_FArchiveRealtimeGC_CreateCluster>
  FVar13;
  FUObjectItem *pFVar14;
  FUObjectCluster *pFVar15;
  FUObjectItem *pFVar16;
  FScriptContainerElement *pFVar17;
  FNameEntryId FVar18;
  FName FVar19;
  undefined1 auStackY_298 [32];
  undefined1 local_200;
  FIdentityFunctor local_1ff;
  FIdentityFunctor local_1fe;
  FIdentityFunctor local_1fd [5];
  uint local_1f8;
  uint uStack_1f4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1f0;
  FColor_u_0 local_1e0 [2];
  FName local_1d8;
  FName local_1d0;
  TFastReferenceCollector<FClusterReferenceProcessor,UE::GC::TDefaultCollector<FClusterReferenceProcessor>_>
  local_1c0;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FClusterReferenceProcessor local_1a8;
  FName local_190;
  FName local_188 [9];
  FWorkerContext local_140;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((GCreateGCClusters == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GCreateGCClusters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x3a1,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (FUObjectItem *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FArchiveRealtimeGC_CreateCluster ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UObjectBaseUtility::CreateCluster(void)_::_2_::FStat_STAT_FArchiveRealtimeGC_CreateCluster>
         )0x0) {
      pFVar12 = ::FName::FName(&local_190,"STAT_FArchiveRealtimeGC_CreateCluster");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveRealtimeGC_CreateCluster,
                 *pFVar12,L"UObjectBaseUtility::CreateCluster","STATGROUP_GC","STATCAT_Advanced",
                 L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_FArchiveRealtimeGC_CreateCluster;
  if (StatPtr_STAT_FArchiveRealtimeGC_CreateCluster ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UObjectBaseUtility::CreateCluster(void)_::_2_::FStat_STAT_FArchiveRealtimeGC_CreateCluster>
       )0x0) {
    pFVar12 = ::FName::FName(local_188,"STAT_FArchiveRealtimeGC_CreateCluster");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UObjectBaseUtility::CreateCluster(void)_::_2_::FStat_STAT_FArchiveRealtimeGC_CreateCluster>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FArchiveRealtimeGC_CreateCluster,*pFVar12,
                          L"UObjectBaseUtility::CreateCluster","STATGROUP_GC","STATCAT_Advanced",
                          L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar8 = false;
  bVar6 = false;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e0[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d8.ComparisonIndex.Value = FVar18.Value;
        local_1d8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                   ,0x3a3);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f8 = FVar18.Value;
      uStack_1f4 = uVar10;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar5 = true;
      goto LAB_142266df0;
    }
  }
  bVar5 = false;
  FVar19 = local_1d0;
LAB_142266df0:
  iVar2 = *(int *)&this->field_0xc;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
    pFVar14 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
  }
  if ((pFVar14->ClusterRootIndex == 0) &&
     (((uint)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0)) {
    if (((*(uint *)&this->field_0x8 >> 10 & 1) != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAnyFlags(RF_NeedLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                           ,0x3ac,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1f8 = FUObjectClusterContainer::AllocateCluster
                          (&GUObjectClusters,*(int *)&this->field_0xc);
    pFVar15 = FUObjectClusterContainer::operator[](&GUObjectClusters,local_1f8);
    if ((pFVar15->Objects).ArrayMax < 0x40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x40,&(pFVar15->Objects).AllocatorInstance,(pFVar15->Objects).ArrayNum,
                 &(pFVar15->Objects).ArrayMax);
    }
    local_1a8.Outermost = (UObject *)GetOutermost(this);
    local_1a8.ClusterRootIndex = *(int *)&this->field_0xc;
    local_1a8.Cluster = pFVar15;
    UE::GC::FWorkerContext::FWorkerContext(&local_140);
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_1f0.AllocatorInstance,1,&local_1f0.ArrayMax);
    *(UObjectBaseUtility **)local_1f0.AllocatorInstance.Data = this;
    UE::GC::PadObjectArray(&local_1f0);
    iStack_1b0 = local_1f0.ArrayNum;
    FVar7.Data = local_1f0.AllocatorInstance.Data;
    local_1b8 = local_1f0.AllocatorInstance.Data;
    if ((local_1f0.ArrayNum < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((iStack_1b0 != 0) &&
        (bVar9 = UObjectBase::IsValidLowLevel
                           (*(UObjectBase **)(FVar7.Data + (ulonglong)(iStack_1b0 + 0xf) * 8)),
        !bVar9)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                           ,0x181,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_140.InitialObjects._12_4_ = uStack_1ac;
    local_140.InitialObjects.ArrayNum = iStack_1b0;
    local_1c0.Processor = &local_1a8;
    local_140.InitialObjects.DataPtr = (UObject **)local_1b8;
    UE::GC::
    TFastReferenceCollector<FClusterReferenceProcessor,UE::GC::TDefaultCollector<FClusterReferenceProcessor>_>
    ::ProcessObjectArray(&local_1c0,&local_140);
    if ((pFVar14->ClusterRootIndex != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootItem->GetOwnerIndex() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                           ,0x3ba,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14->ClusterRootIndex = ~local_1f8;
    do {
      lVar3 = (pFVar14->field0_0x0).FlagsAndRefCount;
      uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
      if ((uVar10 >> 0x18 & 1) != 0) break;
      if (((ulonglong)pFVar14 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar9 = lVar3 == (pFVar14->field0_0x0).FlagsAndRefCount;
      if (bVar9) {
        (pFVar14->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar10 << 0x20 | (longlong)(int)lVar3 | 0x100000000000000;
      }
      UNLOCK();
    } while (!bVar9);
    iVar2 = (pFVar15->Objects).ArrayNum;
    pFVar17 = (pFVar15->Objects).AllocatorInstance.Data;
    iVar11 = GMinGCClusterSize;
    if (GMinGCClusterSize < 1) {
      iVar11 = 1;
    }
    if (iVar2 < iVar11) {
      pFVar1 = pFVar17 + (longlong)iVar2 * 4;
      while( true ) {
        if ((pFVar15->Objects).ArrayNum != iVar2) {
          local_200 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_200)
          ;
        }
        if (pFVar17 == pFVar1) break;
        pFVar16 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*(int *)pFVar17);
        pFVar17 = pFVar17 + 4;
        pFVar16->ClusterRootIndex = 0;
      }
      FUObjectClusterContainer::FreeCluster(&GUObjectClusters,local_1f8);
      if ((pFVar14->ClusterRootIndex != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootItem->GetOwnerIndex() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                             ,0x3e4,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((((uint)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RootItem->HasAnyFlags(EInternalObjectFlags::ClusterRoot)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                             ,0x3e5,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)pFVar17,iVar2,local_1ff,(TLess<void> *)&local_1ff);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(pFVar15->ReferencedClusters).AllocatorInstance.Data,
                 (pFVar15->ReferencedClusters).ArrayNum,local_1fe,(TLess<void> *)&local_1fe);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(pFVar15->MutableObjects).AllocatorInstance.Data,
                 (pFVar15->MutableObjects).ArrayNum,local_1fd[0],(TLess<void> *)local_1fd);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    UE::GC::FWorkerContext::~FWorkerContext(&local_140);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// DetachExternalPackage @ 142269700

void __thiscall UObjectBaseUtility::DetachExternalPackage(UObjectBaseUtility *this)

{
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_HasExternalPackage);
  return;
}

// FindNearestCommonBaseClass @ 14226c720

UClass * __thiscall
UObjectBaseUtility::FindNearestCommonBaseClass(UObjectBaseUtility *this,UClass *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  UClass *pUVar4;
  bool bVar5;
  
  if (param_1 != (UClass *)0x0) {
    pUVar4 = *(UClass **)&this->field_0x10;
    plVar1 = &pUVar4->_padding_;
    if (pUVar4 != (UClass *)0x0) {
      iVar2 = (int)pUVar4->_padding_;
      if (((int)param_1->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != plVar1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return pUVar4;
      }
    }
    iVar2 = (int)param_1->_padding_;
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar2 <= iVar3) &&
       ((longlong *)*(undefined1 **)(*plVar1 + (longlong)iVar2 * 8) == &param_1->_padding_)) {
      return param_1;
    }
    for (pUVar4 = (UClass *)param_1->_padding_; pUVar4 != (UClass *)0x0;
        pUVar4 = (UClass *)pUVar4->_padding_) {
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar3 < iVar2) ||
         ((longlong *)*(undefined1 **)(*plVar1 + (longlong)iVar2 * 8) != &pUVar4->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return pUVar4;
      }
    }
  }
  return (UClass *)0x0;
}

// GetFullGroupName @ 14226f2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UObjectBaseUtility::GetFullGroupName
          (UObjectBaseUtility *this,FString *__return_storage_ptr__,bool param_1)

{
  bool bVar1;
  bool bVar2;
  UPackage *pUVar3;
  FString *pFVar4;
  UObjectBaseUtility *this_00;
  undefined1 auStack_298 [32];
  FString local_278;
  undefined4 local_268;
  FString local_260;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_268 = 0;
  this_00 = this;
  if (param_1) {
    this_00 = *(UObjectBaseUtility **)&this->field_0x20;
  }
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pFVar4 = ::FString::FString(&local_260,L"");
    bVar2 = false;
    bVar1 = true;
  }
  else {
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
          (TObjectPtr<UObject>_u_0)0x0) {
        pUVar3 = CastChecked<UPackage,UObject>((UObject *)this);
      }
      else {
        pUVar3 = (UPackage *)0x0;
        if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
          pUVar3 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
        }
      }
      if (pUVar3 != (UPackage *)0x0) break;
      this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
    }
    local_248.Base = local_228;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.CurPos = local_228;
    local_278.Data.ArrayNum = 0;
    local_278.Data.ArrayMax = 0;
    local_248.End = (wchar_t *)local_28;
    local_248.bIsDynamic = false;
    local_248.bIsExternal = false;
    GetPathName(this_00,(UObject *)pUVar3,&local_248);
    ::FString::AppendChars
              (&local_278,local_248.Base,
               (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
    pFVar4 = &local_278;
    bVar2 = true;
    bVar1 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if ((bVar1) && (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFullName @ 14226f410

FString * __thiscall
UObjectBaseUtility::GetFullName
          (UObjectBaseUtility *this,FString *__return_storage_ptr__,UObject *param_1,
          EObjectFullNameFlags param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  GetFullName(this,param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetFullName @ 14226f440

void __thiscall
UObjectBaseUtility::GetFullName
          (UObjectBaseUtility *this,TStringBuilderBase<wchar_t> *param_1,UObject *param_2,
          EObjectFullNameFlags param_3)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  FName local_18 [2];
  
  bVar1 = IsThisNotNull(this,"UObjectBaseUtility::GetFullName");
  if (bVar1) {
    this_00 = *(UObjectBaseUtility **)&this->field_0x10;
    if ((param_3 & IncludeClassPackage) == None) {
      local_18[0].ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
      local_18[0].Number = *(uint *)&this_00->field_0x1c;
      ::FName::AppendString(local_18,param_1);
    }
    else {
      GetPathName(this_00,(UObject *)0x0,param_1);
    }
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L' ';
    param_1->CurPos = param_1->CurPos + 1;
    GetPathName(this,param_2,param_1);
  }
  else {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"None",4);
  }
  return;
}

// GetFullName @ 14226f510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectBaseUtility::GetFullName
          (UObjectBaseUtility *this,UObject *param_1,FString *param_2,EObjectFullNameFlags param_3)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  UClass *pUVar2;
  void *pvVar3;
  undefined1 auStack_288 [32];
  FName local_268 [2];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  bVar1 = IsThisNotNull(this,"UObjectBaseUtility::GetFullName");
  if (!bVar1) {
    if (local_258.End < local_258.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,4);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_258.CurPos,&u_None,8);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + 8);
    goto LAB_14226f731;
  }
  pvVar3 = *(void **)&this->field_0x10;
  if ((param_3 & IncludeClassPackage) == None) {
LAB_14226f645:
    local_268[0] = *(FName *)((longlong)pvVar3 + 0x18);
    ::FName::AppendString(local_268,&local_258);
  }
  else {
    if (pvVar3 != (void *)0x0) {
      bVar1 = IsThisNotNull(pvVar3,"UObjectBaseUtility::GetPathName");
      if (bVar1) {
        this_00 = *(UObjectBaseUtility **)((longlong)pvVar3 + 0x20);
        if (this_00 == (UObjectBaseUtility *)0x0) goto LAB_14226f645;
        GetPathName(this_00,(UObject *)0x0,&local_258);
        pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
        if (*(UClass **)&this_00->field_0x10 == pUVar2) {
LAB_14226f616:
          if (local_258.End < local_258.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_258,1);
          }
          *local_258.CurPos = L'.';
        }
        else {
          pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
          if (*(UClass **)(*(longlong *)&this_00->field_0x20 + 0x10) != pUVar2) goto LAB_14226f616;
          if (local_258.End < local_258.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_258,1);
          }
          *local_258.CurPos = L':';
        }
        local_258.CurPos = local_258.CurPos + 1;
        goto LAB_14226f645;
      }
    }
    if (local_258.End < local_258.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,4);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_258.CurPos,&u_None,8);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + 8);
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L' ';
  local_258.CurPos = local_258.CurPos + 1;
  GetPathName(this,param_1,&local_258);
LAB_14226f731:
  ::FString::AppendChars
            (param_2,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// GetImplementingOuterObject @ 14226f8e0

UObjectBaseUtility * __thiscall
UObjectBaseUtility::GetImplementingOuterObject(UObjectBaseUtility *this,UClass *param_1)

{
  UObjectBaseUtility *pUVar1;
  bool bVar2;
  
  pUVar1 = *(UObjectBaseUtility **)&this->field_0x20;
  while( true ) {
    if (pUVar1 == (UObjectBaseUtility *)0x0) {
      return (UObjectBaseUtility *)0x0;
    }
    if ((*(UClass **)&pUVar1->field_0x10 != (UClass *)0x0) &&
       (bVar2 = UClass::ImplementsInterface(*(UClass **)&pUVar1->field_0x10,param_1), bVar2)) break;
    pUVar1 = *(UObjectBaseUtility **)&pUVar1->field_0x20;
  }
  return pUVar1;
}

// GetInterfaceAddress @ 14226fa40

void * __thiscall UObjectBaseUtility::GetInterfaceAddress(UObjectBaseUtility *this,UClass *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  void *pvVar8;
  UObjectBaseUtility *pUVar9;
  uint uVar10;
  UObjectBaseUtility *pUVar12;
  UObjectBaseUtility *pUVar11;
  
  pUVar12 = (UObjectBaseUtility *)0x0;
  if (((param_1 == (UClass *)0x0) || ((param_1->ClassFlags & CLASS_Interface) == CLASS_None)) ||
     (pUVar7 = Z_Construct_UClass_UInterface_NoRegister(), param_1 == pUVar7)) {
    return (void *)0x0;
  }
  pUVar7 = *(UClass **)&this->field_0x10;
  pUVar9 = pUVar12;
  if ((param_1->ClassFlags & CLASS_Native) == CLASS_None) {
    bVar5 = UClass::ImplementsInterface(pUVar7,param_1);
    pUVar9 = this;
    if (!bVar5) {
      pUVar9 = pUVar12;
    }
  }
  else {
    do {
      pUVar11 = pUVar12;
      if (pUVar7 == (UClass *)0x0) {
        return pUVar9;
      }
LAB_14226fac0:
      uVar10 = (uint)pUVar11;
      if (((int)uVar10 < 0) || ((pUVar7->Interfaces).ArrayNum <= (int)uVar10)) goto LAB_14226fbad;
      if (((int)uVar10 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar4)();
        return pvVar8;
      }
      pFVar2 = (pUVar7->Interfaces).AllocatorInstance.Data;
      if (pFVar2[(longlong)(int)uVar10 * 0x10 + 0xc] != (FScriptContainerElement)0x0) {
LAB_14226fb44:
        pUVar11 = (UObjectBaseUtility *)(ulonglong)(uVar10 + 1);
        goto LAB_14226fac0;
      }
      lVar3 = *(longlong *)(pFVar2 + (longlong)(int)uVar10 * 0x10);
      iVar1 = (int)param_1->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &param_1->_padding_)) goto LAB_14226fb44;
      uVar6 = 0;
      if ((int)uVar10 < (pUVar7->Interfaces).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar4)();
        return pvVar8;
      }
      pUVar9 = (UObjectBaseUtility *)
               (&this->field_0x0 +
               *(int *)((pUVar7->Interfaces).AllocatorInstance.Data +
                       (longlong)(int)uVar10 * 0x10 + 8));
LAB_14226fbad:
      pUVar7 = (UClass *)pUVar7->_padding_;
    } while (pUVar9 == (UObjectBaseUtility *)0x0);
  }
  return pUVar9;
}

// GetNativeInterfaceAddress @ 14226fcb0

void * __thiscall
UObjectBaseUtility::GetNativeInterfaceAddress(UObjectBaseUtility *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  UClass *pUVar8;
  uint uVar9;
  
  if ((param_1 == (UClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterfaceClass != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBaseUtility.cpp"
                         ,0x1f9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  if (((param_1->ClassFlags & (CLASS_Interface|CLASS_Native)) != (CLASS_Interface|CLASS_Native)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterfaceClass->HasAllClassFlags(CLASS_Interface | CLASS_Native)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBaseUtility.cpp"
                         ,0x1fa,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  pUVar8 = Z_Construct_UClass_UInterface_NoRegister();
  if ((param_1 == pUVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterfaceClass != UInterface::StaticClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBaseUtility.cpp"
                         ,0x1fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  lVar2 = *(longlong *)&this->field_0x10;
  do {
    if (lVar2 == 0) {
      return (void *)0x0;
    }
    for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < *(int *)(lVar2 + 0x1e8))); uVar9 = uVar9 + 1)
    {
      if (((int)uVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar4)();
        return pvVar7;
      }
      if (*(char *)(*(longlong *)(lVar2 + 0x1e0) + 0xc + (longlong)(int)uVar9 * 0x10) == '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + (longlong)(int)uVar9 * 0x10);
        iVar1 = (int)param_1->_padding_;
        if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
            &param_1->_padding_)) {
          uVar6 = 0;
          if ((int)uVar9 < *(int *)(lVar2 + 0x1e8)) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pvVar7 = (void *)(*pcVar4)();
            return pvVar7;
          }
          if (*(int *)(*(longlong *)(lVar2 + 0x1e0) + 8 + (longlong)(int)uVar9 * 0x10) != 0) {
            uVar6 = 0;
            if ((int)uVar9 < *(int *)(lVar2 + 0x1e8)) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pvVar7 = (void *)(*pcVar4)();
              return pvVar7;
            }
            return &this->field_0x0 +
                   *(int *)(*(longlong *)(lVar2 + 0x1e0) + 8 + (longlong)(int)uVar9 * 0x10);
          }
        }
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x40);
  } while( true );
}

// GetOutermost @ 142270090

UPackage * __thiscall UObjectBaseUtility::GetOutermost(UObjectBaseUtility *this)

{
  UPackage *pUVar1;
  
  while( true ) {
    if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
        (TObjectPtr<UObject>_u_0)0x0) {
      pUVar1 = CastChecked<UPackage,UObject>((UObject *)this);
    }
    else {
      pUVar1 = (UPackage *)0x0;
      if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
        pUVar1 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
      }
    }
    if (pUVar1 != (UPackage *)0x0) break;
    this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
  }
  return pUVar1;
}

// GetOutermostObject @ 1422700e0

UObject * __thiscall UObjectBaseUtility::GetOutermostObject(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UObject *)0x0;
  }
  do {
    do {
      pUVar3 = (UObject *)this;
      this = *(UObjectBaseUtility **)&pUVar3->field_0x20;
      pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
    } while (*(int *)(*(longlong *)&((UObject *)this)->field_0x10 + 0x38) < iVar1);
  } while ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&((UObject *)this)->field_0x10 + 0x30) + (longlong)iVar1 * 8
            ) != &pUVar2->_padding_);
  return pUVar3;
}

// GetPackage @ 142270160

UPackage * __thiscall UObjectBaseUtility::GetPackage(UObjectBaseUtility *this)

{
  UPackage *pUVar1;
  
  while( true ) {
    if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
        (TObjectPtr<UObject>_u_0)0x0) {
      pUVar1 = CastChecked<UPackage,UObject>((UObject *)this);
    }
    else {
      pUVar1 = (UPackage *)0x0;
      if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
        pUVar1 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
      }
    }
    if (pUVar1 != (UPackage *)0x0) break;
    this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
  }
  return pUVar1;
}

// GetPathName @ 142270240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UObjectBaseUtility::GetPathName
          (UObjectBaseUtility *this,FString *__return_storage_ptr__,UObject *param_1)

{
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  GetPathName(this,param_1,&local_238);
  ::FString::AppendChars
            (__return_storage_ptr__,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// GetPathName @ 1422702f0

void __thiscall
UObjectBaseUtility::GetPathName
          (UObjectBaseUtility *this,UObject *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  UClass *pUVar2;
  wchar_t wVar3;
  FName local_res8;
  
  if (this == (UObjectBaseUtility *)param_1) {
LAB_142270399:
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"None",4);
    return;
  }
  bVar1 = IsThisNotNull(this,"UObjectBaseUtility::GetPathName");
  if (!bVar1) goto LAB_142270399;
  this_00 = *(UObjectBaseUtility **)&this->field_0x20;
  if ((this_00 == (UObjectBaseUtility *)0x0) || (this_00 == (UObjectBaseUtility *)param_1))
  goto LAB_14227036e;
  GetPathName(this_00,param_1,param_2);
  pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
  if (*(UClass **)&this_00->field_0x10 == pUVar2) {
LAB_142270361:
    wVar3 = L'.';
  }
  else {
    pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
    wVar3 = L':';
    if (*(UClass **)(*(longlong *)&this_00->field_0x20 + 0x10) != pUVar2) goto LAB_142270361;
  }
  ::operator<<(param_2,wVar3);
LAB_14227036e:
  local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8.Number = *(uint *)&this->field_0x1c;
  ::FName::AppendString(&local_res8,param_2);
  return;
}

// GetPathName @ 1422703d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectBaseUtility::GetPathName(UObjectBaseUtility *this,UObject *param_1,FString *param_2)

{
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  GetPathName(this,param_1,&local_238);
  ::FString::AppendChars
            (param_2,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return;
}

// GetTypedOuter @ 1422716e0

UObject * __thiscall UObjectBaseUtility::GetTypedOuter(UObjectBaseUtility *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  
  pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
  if (param_1 == pUVar2) {
    `UObjectBaseUtility::GetTypedOuter'::__l2::<lambda_1>::operator()(local_res8);
  }
  pUVar3 = *(UObject **)&this->field_0x20;
  while( true ) {
    if (pUVar3 == (UObject *)0x0) {
      return (UObject *)0x0;
    }
    iVar1 = (int)param_1->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &param_1->_padding_)) break;
    pUVar3 = *(UObject **)&pUVar3->field_0x20;
  }
  return pUVar3;
}

// GetVersePath @ 142271790

FVersePath * __thiscall
UObjectBaseUtility::GetVersePath(UObjectBaseUtility *this,FVersePath *__return_storage_ptr__)

{
  FTopLevelAssetPath local_18;
  
  local_18.PackageName.ComparisonIndex.Value = 0;
  local_18.PackageName.Number = 0;
  local_18.AssetName.ComparisonIndex.Value = 0;
  local_18.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_18,(UObject *)this);
  FPackageName::GetVersePath(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// IsDefaultSubobject @ 142274910

bool __thiscall UObjectBaseUtility::IsDefaultSubobject(UObjectBaseUtility *this)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  if (((*(uint *)&this->field_0x8 & 0x10) != 0) || (*(longlong *)&this->field_0x20 == 0)) {
    return false;
  }
  if (((*(uint *)(*(longlong *)&this->field_0x20 + 8) & 0x10) == 0) &&
     (pUVar1 = *(UObject **)(*(longlong *)&this->field_0x10 + 0x110),
     pUVar2 = GetArchetypeImpl((UObject *)this,(IObjectArchetypePolicy *)0x0), pUVar2 == pUVar1)) {
    return false;
  }
  return true;
}

// IsIn @ 1422749f0

bool __thiscall UObjectBaseUtility::IsIn(UObjectBaseUtility *this,UObject *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  
  pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pUVar2 = *(UObject **)&this->field_0x20;
    while( true ) {
      if (pUVar2 == (UObject *)0x0) {
        return param_1 == (UObject *)0x0;
      }
      if (pUVar2 == param_1) break;
      pUVar2 = *(UObject **)&pUVar2->field_0x20;
    }
    return true;
  }
  if (param_1 != (UObject *)this) {
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
          (TObjectPtr<UObject>_u_0)0x0) {
        pUVar4 = CastChecked<UPackage,UObject>((UObject *)this);
      }
      else {
        pUVar4 = (UPackage *)0x0;
        if ((*(EObjectFlags *)((longlong)this + 8) >> 0x1c & 1) != 0) {
          pUVar4 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
        }
      }
      if (pUVar4 != (UPackage *)0x0) break;
      this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
    }
    if (pUVar4 == (UPackage *)param_1) {
      return true;
    }
  }
  return false;
}

// IsIn @ 142274ac0

bool __thiscall UObjectBaseUtility::IsIn(UObjectBaseUtility *this,UPackage *param_1)

{
  UPackage *pUVar1;
  
  if (param_1 != (UPackage *)this) {
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
          (TObjectPtr<UObject>_u_0)0x0) {
        pUVar1 = CastChecked<UPackage,UObject>((UObject *)this);
      }
      else {
        pUVar1 = (UPackage *)0x0;
        if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
          pUVar1 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
        }
      }
      if (pUVar1 != (UPackage *)0x0) break;
      this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
    }
    if (pUVar1 == param_1) {
      return true;
    }
  }
  return false;
}

// IsInA @ 142274b30

bool __thiscall UObjectBaseUtility::IsInA(UObjectBaseUtility *this,UClass *param_1)

{
  int iVar1;
  
  if (this != (UObjectBaseUtility *)0x0) {
    iVar1 = (int)param_1->_padding_;
    do {
      if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &param_1->_padding_)) {
        return true;
      }
      this = *(UObjectBaseUtility **)&this->field_0x20;
    } while (this != (UObjectBaseUtility *)0x0);
  }
  return param_1 == (UClass *)0x0;
}

// IsInOuter @ 142274b70

bool __thiscall UObjectBaseUtility::IsInOuter(UObjectBaseUtility *this,UObject *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = *(UObject **)&this->field_0x20;
  while( true ) {
    if (pUVar1 == (UObject *)0x0) {
      return param_1 == (UObject *)0x0;
    }
    if (pUVar1 == param_1) break;
    pUVar1 = *(UObject **)&pUVar1->field_0x20;
  }
  return true;
}

// IsInPackage @ 142274ba0

bool __thiscall UObjectBaseUtility::IsInPackage(UObjectBaseUtility *this,UPackage *param_1)

{
  UPackage *pUVar1;
  
  if (param_1 != (UPackage *)this) {
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
          (TObjectPtr<UObject>_u_0)0x0) {
        pUVar1 = CastChecked<UPackage,UObject>((UObject *)this);
      }
      else {
        pUVar1 = (UPackage *)0x0;
        if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
          pUVar1 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
        }
      }
      if (pUVar1 != (UPackage *)0x0) break;
      this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
    }
    if (pUVar1 == param_1) {
      return true;
    }
  }
  return false;
}

// IsPackageExternal @ 142274cb0

bool __thiscall UObjectBaseUtility::IsPackageExternal(UObjectBaseUtility *this)

{
  return (bool)((byte)((uint)*(undefined4 *)&this->field_0x8 >> 0x1c) & 1);
}

// IsTemplate @ 1422753e0

bool __thiscall UObjectBaseUtility::IsTemplate(UObjectBaseUtility *this,EObjectFlags param_1)

{
  while( true ) {
    if (this == (UObjectBaseUtility *)0x0) {
      return false;
    }
    if ((param_1 & *(EObjectFlags *)&this->field_0x8) != RF_NoFlags) break;
    this = *(UObjectBaseUtility **)&this->field_0x20;
  }
  return true;
}

// IsTemplateForSubobjects @ 142275410

bool __thiscall
UObjectBaseUtility::IsTemplateForSubobjects(UObjectBaseUtility *this,EObjectFlags param_1)

{
  if (((*(uint *)&this->field_0x8 & 0x20) != 0) && ((*(uint *)&this->field_0x8 & 0x10) == 0)) {
    do {
      if ((param_1 & *(EObjectFlags *)&this->field_0x8) != RF_NoFlags) {
        return true;
      }
      this = *(UObjectBaseUtility **)&this->field_0x20;
    } while (this != (UObjectBaseUtility *)0x0);
  }
  return false;
}

// MarkPackageDirty @ 1422796a0

bool __thiscall UObjectBaseUtility::MarkPackageDirty(UObjectBaseUtility *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  UPackage *this_00;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  FDestructionSentinel local_38;
  
  this_00 = (UPackage *)0x0;
  if (this != (UObjectBaseUtility *)0x0) {
    do {
      if (this_00 != (UPackage *)0x0) goto LAB_1422796f7;
      if ((*(EObjectFlags *)((longlong)this + 8) & RF_Transient) != RF_NoFlags) {
        return true;
      }
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
          (TObjectPtr<UObject>_u_0)0x0) {
        this_00 = CastChecked<UPackage,UObject>((UObject *)this);
      }
      else {
        this_00 = (UPackage *)0x0;
        if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
          this_00 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
        }
      }
      this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
    } while ((TObjectPtr<UObject>_u_0)this != (TObjectPtr<UObject>_u_0)0x0);
    if (this_00 != (UPackage *)0x0) {
LAB_1422796f7:
      if (PRIVATE_GIsRunningCommandlet == false) {
        (*IsInAsyncLoadingThread)();
        return false;
      }
      bVar10 = this_00->bDirty;
      if (bVar10 == 0) {
        UPackage::SetDirtyFlag(this_00,true);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UPackage::PackageMarkedDirtyEvent,(FWriteAccessScope *)&local_38);
      bVar3 = false;
      UPackage::PackageMarkedDirtyEvent._28_4_ = UPackage::PackageMarkedDirtyEvent._28_4_ + 1;
      uVar9 = UPackage::PackageMarkedDirtyEvent._16_4_ - 1;
      if (-1 < (int)uVar9) {
        lVar8 = (longlong)(int)uVar9 << 4;
        bVar3 = false;
        do {
          uVar7 = 0;
          if ((int)uVar9 < (int)UPackage::PackageMarkedDirtyEvent._16_4_) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((*(int *)(lVar8 + 8 + UPackage::PackageMarkedDirtyEvent._8_8_) == 0) ||
              (plVar1 = *(longlong **)(lVar8 + UPackage::PackageMarkedDirtyEvent._8_8_),
              plVar1 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,this_00,bVar10), cVar6 == '\0')) {
            bVar3 = true;
          }
          lVar8 = lVar8 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      UPackage::PackageMarkedDirtyEvent._28_4_ = UPackage::PackageMarkedDirtyEvent._28_4_ + -1;
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UPackage::PackageMarkedDirtyEvent,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return true;
}

// ReattachExternalPackage @ 14227edc0

void __thiscall UObjectBaseUtility::ReattachExternalPackage(UObjectBaseUtility *this)

{
  UPackage *pUVar1;
  
  if ((*(uint *)&this->field_0x8 >> 0x1c & 1) == 0) {
    pUVar1 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
    if (pUVar1 != (UPackage *)0x0) {
      UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_HasExternalPackage);
      return;
    }
  }
  return;
}

// ReloadObjectsFromModifiedConfigSections @ 142280de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UObjectBaseUtility::ReloadObjectsFromModifiedConfigSections(FConfigModificationTracker *param_1)

{
  TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
  *pTVar1;
  FString *this;
  FName *pFVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  UObjectBaseUtility *pUVar6;
  code *pcVar7;
  int iVar8;
  FName *pFVar9;
  LARGE_INTEGER LVar10;
  FConfigModificationTracker *pFVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  size_t sVar17;
  UClass *pUVar18;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  int iVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType FVar32;
  FName FVar33;
  FName *this_01;
  ForAnyElementType FVar34;
  undefined1 *puVar35;
  FName FVar36;
  int iVar37;
  undefined1 auStackY_e78 [32];
  undefined1 local_e28;
  undefined1 local_e27 [7];
  ForAnyElementType local_e20;
  undefined8 local_e18;
  ForAnyElementType local_e10;
  undefined8 local_e08;
  undefined1 local_e00;
  undefined1 local_dff;
  undefined1 local_dfe;
  undefined1 local_dfd [5];
  UObject *local_df8;
  uint local_df0;
  FString local_de8;
  UObject *local_dd8;
  undefined8 local_dd0;
  FName FStack_dc8;
  undefined8 local_dc0;
  uint uStack_db8;
  uint uStack_db4;
  int local_db0;
  undefined4 uStack_dac;
  int iStack_da8;
  undefined4 uStack_da4;
  int local_da0;
  uint uStack_d9c;
  FName FStack_d98;
  uint local_d90;
  uint uStack_d8c;
  uint uStack_d88;
  undefined4 uStack_d84;
  FName *local_d80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d78;
  undefined8 local_d58;
  LARGE_INTEGER local_d50;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_d48;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FConfigModificationTracker *local_cd8;
  FString local_cd0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_cc0;
  FScriptContainerElement *local_c98;
  int iStack_c90;
  undefined4 uStack_c8c;
  FScriptContainerElement *local_c88;
  int iStack_c80;
  undefined4 uStack_c7c;
  FScriptContainerElement *local_c78;
  int iStack_c70;
  undefined4 uStack_c6c;
  wchar_t *local_c68;
  undefined8 uStack_c60;
  FScriptContainerElement *local_c58;
  int iStack_c50;
  undefined4 uStack_c4c;
  FString local_c48;
  FString local_c38;
  int local_c28;
  int local_c24;
  LARGE_INTEGER local_c20;
  FString local_c18;
  TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
  *local_c08;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c00;
  int iStack_be0;
  undefined4 uStack_bdc;
  TStringView<wchar_t> local_bd8;
  TStringView<wchar_t> local_bc8;
  FString local_bb8;
  TStringView<wchar_t> local_ba8;
  TStringView<wchar_t> local_b98;
  FString local_b88;
  TStringView<wchar_t> local_b78;
  TMap<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
  *local_b68;
  longlong lStack_b60;
  FName local_b58;
  undefined8 uStack_b50;
  int iStack_b4c;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b30;
  FName FStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined4 local_aec;
  TStringBuilderBase<wchar_t> local_ae8;
  wchar_t local_ac8 [256];
  TStringBuilderBase<wchar_t> local_8c8;
  wchar_t local_8a8 [256];
  TStringBuilderBase<wchar_t> local_6a8;
  wchar_t local_688 [256];
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [256];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_e78;
  local_e10.Data = (FScriptContainerElement *)0x0;
  puVar35 = &(param_1->ModifiedSectionsPerBranch).field_0x10;
  local_e08 = 0;
  pTVar1 = &param_1->ModifiedSectionsPerBranch;
  local_e20.Data = (FScriptContainerElement *)0x0;
  local_e18 = 0;
  local_cc0._padding_._0_4_ = 0;
  local_cc0._padding_._4_4_ = 1;
  local_cc0.UnvisitedBitMask = 0xffffffff;
  local_cc0.CurrentBitIndex = 0;
  local_cc0.BaseBitIndex = 0;
  local_cd8 = param_1;
  local_cc0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
  if (*(int *)&(param_1->ModifiedSectionsPerBranch).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_cc0);
  }
  uVar26 = *(uint *)&(param_1->ModifiedSectionsPerBranch).field_0x28;
  TStack_d78._padding_ = CONCAT44(local_cc0._padding_._4_4_,(undefined4)local_cc0._padding_);
  local_d58._0_4_ =
       *(int *)&(param_1->ModifiedSectionsPerBranch).field_0x8 -
       *(int *)&(param_1->ModifiedSectionsPerBranch).field_0x34;
  bVar19 = (byte)uVar26 & 0x1f;
  TStack_d78.CurrentBitIndex = local_cc0.CurrentBitIndex;
  TStack_d78.UnvisitedBitMask = local_cc0.UnvisitedBitMask;
  TStack_d78._28_4_ = local_cc0._28_4_;
  TStack_d78.BaseBitIndex = local_cc0.BaseBitIndex;
  TStack_d78.Array = local_cc0.Array;
  iVar25 = (int)uVar26 >> 5;
  uStack_d9c = 1 << bVar19;
  uVar28 = -1 << bVar19;
  uVar29 = uVar26 & 0xffffffe0;
  TStack_c00.Array = local_cc0.Array;
  uStack_bdc = local_d58._4_4_;
  local_da0 = iVar25;
  FStack_d98 = (FName)puVar35;
  local_d90 = uVar28;
  uStack_d8c = uVar26;
  uStack_d88 = uVar29;
  local_c08 = pTVar1;
  TStack_c00._padding_ = TStack_d78._padding_;
  TStack_c00._16_8_ = TStack_d78._16_8_;
  TStack_c00._24_8_ = TStack_d78._24_8_;
  iStack_be0 = (int)local_d58;
  if (((int)uVar26 < 0) &&
     (local_d80 = (FName *)pTVar1,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar30 = *(uint *)&(param_1->ModifiedSectionsPerBranch).field_0x28;
  if (uVar26 != uVar30) {
    puVar4 = *(undefined1 **)&(param_1->ModifiedSectionsPerBranch).field_0x20;
    if (puVar4 != (undefined1 *)0x0) {
      puVar35 = puVar4;
    }
    uVar28 = uVar28 & *(uint *)(puVar35 + (longlong)iVar25 * 4);
    while (uVar28 == 0) {
      uStack_d88 = uVar29 + 0x20;
      local_da0 = iVar25 + 1;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < local_da0)
      goto LAB_142280fa8;
      uVar28 = *(uint *)(puVar35 + (longlong)iVar25 * 4 + 4);
      local_d90 = 0xffffffff;
      iVar25 = local_da0;
      uVar29 = uStack_d88;
    }
    uStack_d9c = -uVar28 & uVar28;
    uVar23 = (ulonglong)uStack_d9c * 2 + 1;
    lVar21 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_df0 = (uint)lVar21;
    uStack_d8c = local_df0 + -1 + uVar29;
    if ((int)uVar30 < (int)uStack_d8c) {
LAB_142280fa8:
      uStack_d8c = uVar30;
    }
  }
  TStack_d78._padding_ = CONCAT44(uStack_d9c,local_da0);
  TStack_d78.CurrentBitIndex = uStack_d8c;
  TStack_d78.UnvisitedBitMask = local_d90;
  TStack_d78._28_4_ = uStack_d84;
  TStack_d78.BaseBitIndex = uStack_d88;
  TStack_d78.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_d98;
  local_d58 = CONCAT44(local_d58._4_4_,
                       *(int *)&(param_1->ModifiedSectionsPerBranch).field_0x8 -
                       *(int *)&(param_1->ModifiedSectionsPerBranch).field_0x34);
  local_b58 = FStack_d98;
  uStack_b40 = local_d58;
  local_d80 = (FName *)pTVar1;
  local_b68 = pTVar1;
  lStack_b60 = TStack_d78._padding_;
  uStack_b50 = TStack_d78._16_8_;
  local_b48 = TStack_d78._24_8_;
  do {
    pTVar1 = local_c08;
    if (*(int *)&local_c08->field_0x8 - *(int *)&local_c08->field_0x34 != iStack_be0) {
      local_e28 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e28);
    }
    if (((TStack_c00.CurrentBitIndex == iStack_b4c) && ((FName)TStack_c00.Array == local_b58)) &&
       (pTVar1 == local_b68)) {
      QueryPerformanceCounter(&local_d50);
      uVar22 = (ulonglong)(int)(uint)local_e08;
      local_df0 = (uint)local_e08;
      local_d50.QuadPart = (longlong)local_e10.Data + uVar22 * 8;
      FVar34.Data = local_e10.Data;
      uVar23 = uVar22;
      do {
        LVar10 = local_d50;
        if ((int)uVar22 != (int)uVar23) {
          `TCheckedPointerIterator<UClass_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_e00);
        }
        pFVar11 = local_cd8;
        if (FVar34.Data == (FScriptContainerElement *)LVar10.QuadPart) {
          iVar25 = (int)local_e18;
          uVar23 = (ulonglong)(int)local_e18;
          pFVar27 = local_e20.Data + uVar23 * 8;
          FVar34.Data = local_e20.Data;
          while( true ) {
            if ((int)uVar23 != iVar25) {
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_dfd);
            }
            if (FVar34.Data == pFVar27) break;
            pUVar6 = *(UObjectBaseUtility **)FVar34.Data;
            if (5 < (byte)LogConfig._0_1_) {
              local_268.Base = local_248;
              local_d28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_268.CurPos = local_248;
              local_d28.Data.ArrayNum = 0;
              local_d28.Data.ArrayMax = 0;
              local_268.End = (wchar_t *)local_48;
              local_268.bIsDynamic = false;
              local_268.bIsExternal = false;
              GetPathName(pUVar6,(UObject *)0x0,&local_268);
              ::FString::AppendChars
                        (&local_d28,local_268.Base,
                         (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_Reloading__s_150889550,
                         (FLogCategoryBase *)&LogConfig);
              if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d28.Data.AllocatorInstance.Data);
              }
            }
            UObject::LoadConfig((UObject *)pUVar6,(UClass *)0x0,(wchar_t *)0x0,9,(FProperty *)0x0,
                                (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                                 *)0x0);
            uVar23 = local_e18 & 0xffffffff;
            FVar34.Data = FVar34.Data + 8;
          }
          if (4 < (byte)LogCore._0_1_) {
            QueryPerformanceCounter(&local_c20);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
          }
          if (local_e20.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e20.Data);
          }
          if (local_e10.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e10.Data);
          }
          return;
        }
        bVar13 = true;
        pUVar18 = *(UClass **)FVar34.Data;
        bVar14 = true;
        if (((local_cd8->ClassesToSkipSubclasses).ArrayNum != 0) ||
           ((local_cd8->ClassesToSkipInstances).ArrayNum != 0)) {
          local_ae8.bIsDynamic = false;
          local_ae8.bIsExternal = false;
          local_de8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_de8.Data.ArrayNum = 0;
          local_de8.Data.ArrayMax = 0;
          local_ae8.Base = local_ac8;
          local_ae8.CurPos = local_ac8;
          local_ae8.End = (wchar_t *)&local_8c8;
          GetPathName((UObjectBaseUtility *)pUVar18,(UObject *)0x0,&local_ae8);
          ::FString::AppendChars
                    (&local_de8,local_ae8.Base,
                     (int)((longlong)local_ae8.CurPos - (longlong)local_ae8.Base >> 1));
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ae8);
          pFVar27 = (pFVar11->ClassesToSkipInstances).AllocatorInstance.Data;
          pFVar31 = pFVar27 + (longlong)(pFVar11->ClassesToSkipInstances).ArrayNum * 0x10;
          iVar25 = local_de8.Data.ArrayNum;
          for (; pFVar27 != pFVar31; pFVar27 = pFVar27 + 0x10) {
            iVar37 = *(int *)(pFVar27 + 8);
            if (iVar37 == iVar25) {
              if (1 < iVar37) {
                iVar25 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar27,
                                    (wchar_t *)local_de8.Data.AllocatorInstance.Data);
                bVar14 = iVar25 == 0;
                iVar25 = local_de8.Data.ArrayNum;
                goto LAB_142281ab8;
              }
LAB_142281aca:
              bVar13 = false;
              break;
            }
            bVar14 = iVar37 + iVar25 == 1;
LAB_142281ab8:
            if (bVar14) goto LAB_142281aca;
          }
          pFVar27 = (local_cd8->ClassesToSkipSubclasses).AllocatorInstance.Data;
          pFVar31 = pFVar27 + (longlong)(local_cd8->ClassesToSkipSubclasses).ArrayNum * 0x10;
          for (; pFVar27 != pFVar31; pFVar27 = pFVar27 + 0x10) {
            iVar37 = *(int *)(pFVar27 + 8);
            if (iVar37 == iVar25) {
              if (1 < iVar37) {
                iVar25 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar27,
                                    (wchar_t *)local_de8.Data.AllocatorInstance.Data);
                bVar14 = iVar25 == 0;
                iVar25 = local_de8.Data.ArrayNum;
                goto LAB_142281b18;
              }
LAB_142281c83:
              bVar14 = false;
              goto LAB_142281b2e;
            }
            bVar14 = iVar37 + iVar25 == 1;
LAB_142281b18:
            if (bVar14) goto LAB_142281c83;
          }
          bVar14 = true;
LAB_142281b2e:
          if (local_de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_de8.Data.AllocatorInstance.Data);
          }
        }
        local_d38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d38.ArrayNum = 0;
        local_d38.ArrayMax = 0;
        if (bVar13) {
          GetObjectsOfClass(pUVar18,&local_d38,bVar14,RF_NoFlags,Borrowed);
          iVar25 = local_d38.ArrayNum;
          pFVar27 = local_d38.AllocatorInstance.Data + (longlong)local_d38.ArrayNum * 8;
          FVar32.Data = local_d38.AllocatorInstance.Data;
          while( true ) {
            if (local_d38.ArrayNum != iVar25) {
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_dff);
            }
            if (FVar32.Data == pFVar27) break;
            pUVar6 = *(UObjectBaseUtility **)FVar32.Data;
            if ((pUVar6 != (UObjectBaseUtility *)0x0) &&
               ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0)) {
              if (5 < (byte)LogConfig._0_1_) {
                local_8c8.bIsDynamic = false;
                local_8c8.bIsExternal = false;
                local_d18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_d18.Data.ArrayNum = 0;
                local_d18.Data.ArrayMax = 0;
                local_8c8.Base = local_8a8;
                local_8c8.CurPos = local_8a8;
                local_8c8.End = (wchar_t *)&local_6a8;
                GetPathName(pUVar6,(UObject *)0x0,&local_8c8);
                ::FString::AppendChars
                          (&local_d18,local_8c8.Base,
                           (int)((longlong)local_8c8.CurPos - (longlong)local_8c8.Base >> 1));
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8c8);
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_Reloading__s_150889550,
                           (FLogCategoryBase *)&LogConfig);
                if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d18.Data.AllocatorInstance.Data);
                }
              }
              UObject::LoadConfig((UObject *)pUVar6,(UClass *)0x0,(wchar_t *)0x0,9,(FProperty *)0x0,
                                  (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                                   *)0x0);
            }
            FVar32.Data = FVar32.Data + 8;
          }
        }
        else {
          if ((pUVar18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar18);
          }
          pUVar6 = (UObjectBaseUtility *)(pUVar18->ClassDefaultObject).field0_0x0.DebugPtr;
          if (5 < (byte)LogConfig._0_1_) {
            local_d08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_6a8.Base = local_688;
            local_d08.Data.ArrayNum = 0;
            local_d08.Data.ArrayMax = 0;
            local_6a8.CurPos = local_688;
            local_6a8.bIsDynamic = false;
            local_6a8.bIsExternal = false;
            local_6a8.End = (wchar_t *)&local_488;
            GetPathName(pUVar6,(UObject *)0x0,&local_6a8);
            ::FString::AppendChars
                      (&local_d08,local_6a8.Base,
                       (int)((longlong)local_6a8.CurPos - (longlong)local_6a8.Base >> 1));
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6a8);
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Reloading__s_150889550,
                       (FLogCategoryBase *)&LogConfig);
            if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d08.Data.AllocatorInstance.Data);
            }
          }
          UObject::LoadConfig((UObject *)pUVar6,(UClass *)0x0,(wchar_t *)0x0,9,(FProperty *)0x0,
                              (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                               *)0x0);
          if (bVar14 != false) {
            local_d48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d48.ArrayNum = 0;
            local_d48.ArrayMax = 0;
            GetDerivedClasses(pUVar18,&local_d48,true);
            iVar25 = local_d48.ArrayNum;
            uVar23 = (ulonglong)local_d48.ArrayNum;
            pFVar27 = local_d48.AllocatorInstance.Data + uVar23 * 8;
            FVar32.Data = local_d48.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar23 != iVar25) {
                `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_dfe);
              }
              if (FVar32.Data == pFVar27) break;
              pUVar18 = *(UClass **)FVar32.Data;
              if ((pUVar18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar18);
              }
              pUVar6 = (UObjectBaseUtility *)(pUVar18->ClassDefaultObject).field0_0x0.DebugPtr;
              if (5 < (byte)LogConfig._0_1_) {
                local_488.Base = local_468;
                local_cf8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_488.CurPos = local_468;
                local_cf8.Data.ArrayNum = 0;
                local_cf8.Data.ArrayMax = 0;
                local_488.End = (wchar_t *)&local_268;
                local_488.bIsDynamic = false;
                local_488.bIsExternal = false;
                GetPathName(pUVar6,(UObject *)0x0,&local_488);
                ::FString::AppendChars
                          (&local_cf8,local_488.Base,
                           (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1));
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_Reloading__s_150889550,
                           (FLogCategoryBase *)&LogConfig);
                if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
                }
              }
              UObject::LoadConfig((UObject *)pUVar6,(UClass *)0x0,(wchar_t *)0x0,9,(FProperty *)0x0,
                                  (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                                   *)0x0);
              uVar23 = local_d48._8_8_ & 0xffffffff;
              FVar32.Data = FVar32.Data + 8;
            }
            uVar23 = (ulonglong)local_df0;
            if (local_d48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d48.AllocatorInstance.Data);
            }
          }
        }
        if (local_d38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d38.AllocatorInstance.Data);
        }
        uVar22 = local_e08 & 0xffffffff;
        FVar34.Data = FVar34.Data + 8;
      } while( true );
    }
    TStack_d78._padding_._0_4_ = 0;
    this_01 = (FName *)((longlong)TStack_c00.CurrentBitIndex * 0x60 + *(longlong *)pTVar1);
    TStack_d78._padding_._4_4_ = 1;
    uVar26 = this_01[6].ComparisonIndex.Value;
    FVar36 = (FName)(this_01 + 3);
    local_db0 = 0;
    pFVar2 = this_01 + 1;
    uStack_db4 = 0;
    if (uVar26 != 0) {
      FVar33 = FVar36;
      if (this_01[5] != (FName)0x0) {
        FVar33 = this_01[5];
      }
      uVar28 = *(uint *)FVar33;
      while (uVar28 == 0) {
        lVar21 = (longlong)(int)TStack_d78._padding_;
        local_db0 = local_db0 + 0x20;
        TStack_d78._padding_._0_4_ = (int)TStack_d78._padding_ + 1;
        uStack_db4 = uVar26;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)TStack_d78._padding_) goto LAB_1422810e0;
        uVar28 = ((uint *)((longlong)FVar33 + 4))[lVar21];
      }
      TStack_d78._padding_._4_4_ = -uVar28 & uVar28;
      uVar23 = (ulonglong)TStack_d78._padding_._4_4_ * 2 + 1;
      lVar21 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_c28 = (int)lVar21;
      uStack_db4 = local_c28 + -1 + local_db0;
      if ((int)uVar26 < (int)uStack_db4) {
        uStack_db4 = uVar26;
      }
    }
LAB_1422810e0:
    uVar28 = this_01[6].ComparisonIndex.Value;
    uStack_dac = local_aec;
    bVar19 = (byte)uVar28 & 0x1f;
    iStack_da8 = this_01[2].ComparisonIndex.Value - this_01[7].Number;
    uVar30 = uVar28 & 0xffffffe0;
    TStack_d78.CurrentBitIndex = uStack_db4;
    TStack_d78.UnvisitedBitMask = 0xffffffff;
    iVar25 = (int)uVar28 >> 5;
    uVar29 = -1 << bVar19;
    local_dd0 = CONCAT44(1 << bVar19,iVar25);
    local_dc0 = CONCAT44(uVar28,uVar29);
    TStack_d78._28_4_ = local_aec;
    TStack_d78.BaseBitIndex = local_db0;
    local_d58 = CONCAT44(uStack_da4,iStack_da8);
    FStack_dc8 = FVar36;
    uStack_db8 = uVar30;
    local_d80 = pFVar2;
    TStack_d78.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar36;
    if ((((int)uVar28 < 0) || ((int)uVar26 < (int)uVar28)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar33 = FStack_dc8;
    uVar26 = this_01[6].ComparisonIndex.Value;
    if (uVar28 != uVar26) {
      if (this_01[5] != (FName)0x0) {
        FVar36 = this_01[5];
      }
      uVar29 = uVar29 & *(uint *)((longlong)FVar36 + (longlong)iVar25 * 4);
      while (uVar29 == 0) {
        uStack_db8 = uVar30 + 0x20;
        lVar21 = (longlong)iVar25;
        iVar25 = iVar25 + 1;
        uVar23 = (ulonglong)local_dd0 >> 0x20;
        local_dd0 = CONCAT44((int)uVar23,iVar25);
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_14228121b;
        uVar29 = ((uint *)((longlong)FVar36 + 4))[lVar21];
        local_dc0 = 0xffffffff;
        uVar30 = uStack_db8;
      }
      local_dd0 = CONCAT44(-uVar29 & uVar29,(undefined4)local_dd0);
      uVar23 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_c24 = (int)lVar21;
      iVar25 = local_c24 + -1 + uVar30;
      local_dc0 = CONCAT44(iVar25,(undefined4)local_dc0);
      if ((int)uVar26 < iVar25) {
LAB_14228121b:
        local_dc0 = CONCAT44(uVar26,(undefined4)local_dc0);
      }
    }
    iVar37 = 0;
    bVar13 = false;
    uStack_b18 = CONCAT44(uStack_db4,uStack_db8);
    local_b30 = local_dd0;
    FStack_b28 = FStack_dc8;
    local_b20 = local_dc0;
    uVar12 = local_b20;
    local_b20._4_4_ = (int)((ulonglong)local_dc0 >> 0x20);
    iVar25 = local_b20._4_4_;
    local_b20 = uVar12;
    while( true ) {
      pFVar9 = local_d80;
      if (local_d80[1].ComparisonIndex.Value - local_d80[6].Number != (int)local_d58) {
        local_e27[0] = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e27);
      }
      if (((TStack_d78.CurrentBitIndex == iVar25) && ((FName)TStack_d78.Array == FVar33)) &&
         (pFVar9 == pFVar2)) break;
      this = (FString *)((longlong)*pFVar9 + (longlong)TStack_d78.CurrentBitIndex * 0x18);
      if (5 < (byte)LogConfig._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      ::FString::FString(&local_c18," ");
      iVar16 = local_c18.Data.ArrayNum + -1;
      FVar34.Data = local_c18.Data.AllocatorInstance.Data;
      if (local_c18.Data.ArrayNum == 0) {
        iVar16 = iVar37;
        FVar34.Data = (FScriptContainerElement *)L"";
      }
      iVar16 = ::FString::Find(this,(wchar_t *)FVar34.Data,iVar16,IgnoreCase,FromStart,-1);
      if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c18.Data.AllocatorInstance.Data);
      }
      if (iVar16 == -1) {
        ::FString::FString(&local_c38,L"/Script/");
        ::FString::FString(&local_c48,L"/Game/");
        local_df8 = (UObject *)0x0;
        iVar16 = local_c38.Data.ArrayNum + -1;
        FVar34.Data = local_c38.Data.AllocatorInstance.Data;
        if (local_c38.Data.ArrayNum == 0) {
          iVar16 = iVar37;
          FVar34.Data = (FScriptContainerElement *)L"";
        }
        bVar14 = ::FString::StartsWith(this,(wchar_t *)FVar34.Data,iVar16,IgnoreCase);
        if (bVar14) {
          if ((this->Data).ArrayNum == 0) {
            local_c78 = (FScriptContainerElement *)0x15060d16c;
LAB_142281651:
            sVar17 = wcslen((wchar_t *)local_c78);
            iVar16 = (int)sVar17;
          }
          else {
            local_c78 = (this->Data).AllocatorInstance.Data;
            iVar16 = iVar37;
            if (local_c78 != (FScriptContainerElement *)0x0) goto LAB_142281651;
          }
          iStack_c70 = iVar16;
          pUVar18 = Z_Construct_UClass_UClass_NoRegister();
          local_b78._12_4_ = uStack_c6c;
          local_b78.Size = iStack_c70;
          local_b78.DataPtr = (wchar_t *)local_c78;
          local_df8 = StaticFindFirstObject
                                (pUVar18,&local_b78,EnsureIfAmbiguous|NativeFirst|ExactClass,
                                 NoLogging,(wchar_t *)0x0);
        }
        else {
          iVar16 = local_c48.Data.ArrayNum + -1;
          FVar34.Data = local_c48.Data.AllocatorInstance.Data;
          if (local_c48.Data.ArrayNum == 0) {
            iVar16 = iVar37;
            FVar34.Data = (FScriptContainerElement *)L"";
          }
          bVar14 = ::FString::StartsWith(this,(wchar_t *)FVar34.Data,iVar16,IgnoreCase);
          if (bVar14) {
            uStack_c60._0_4_ = 0;
            uStack_c60._4_4_ = 0;
            local_c68 = (wchar_t *)0x0;
            if ((this->Data).ArrayNum == 0) {
              local_c58 = (FScriptContainerElement *)0x15060d16c;
LAB_1422816fe:
              sVar17 = wcslen((wchar_t *)local_c58);
              iVar16 = (int)sVar17;
            }
            else {
              local_c58 = (this->Data).AllocatorInstance.Data;
              iVar16 = iVar37;
              if (local_c58 != (FScriptContainerElement *)0x0) goto LAB_1422816fe;
            }
            iStack_c50 = iVar16;
            pUVar18 = Z_Construct_UClass_UClass_NoRegister();
            local_bc8._12_4_ = uStack_c4c;
            local_bc8.Size = iStack_c50;
            local_bd8.DataPtr = local_c68;
            local_bd8.Size = (int)uStack_c60;
            local_bd8._12_4_ = uStack_c60._4_4_;
            local_bc8.DataPtr = (wchar_t *)local_c58;
            local_df8 = StaticLoadObject(pUVar18,(UObject *)0x0,&local_bc8,&local_bd8,0,
                                         (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
          }
        }
        if ((local_df8 != (UObject *)0x0) && ((local_df8[5].field_0xc & 4) != 0)) {
          if ((local_e10.Data <= (FScriptContainerElement *)&local_df8) &&
             (((FScriptContainerElement *)&local_df8 <
               local_e10.Data + (longlong)local_e08._4_4_ * 8 &&
              (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = (uint)local_e08;
          if ((uint)local_e08 == local_e08._4_4_) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_e10,(int *)((longlong)&local_e08 + 4));
          }
          local_e08 = CONCAT44(local_e08._4_4_,iVar16 + 1);
          *(UObject **)(local_e10.Data + (longlong)iVar16 * 8) = local_df8;
        }
        FVar34.Data = local_c38.Data.AllocatorInstance.Data;
        if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c48.Data.AllocatorInstance.Data);
          FVar34.Data = local_c38.Data.AllocatorInstance.Data;
        }
      }
      else {
        iVar3 = (this->Data).ArrayNum;
        iVar20 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar20 = iVar37;
        }
        if (iVar16 < iVar20) {
          iVar20 = iVar16;
        }
        iVar8 = iVar37;
        if (0 < iVar20) {
          iVar8 = iVar20;
        }
        if (iVar3 == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = (wchar_t *)(this->Data).AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_cd0,pwVar24,iVar8);
        ::FString::RightChop(this,&local_ce8,iVar16 + 1);
        if (local_ce8.Data.ArrayNum == 0) {
          local_c98 = (FScriptContainerElement *)0x15060d16c;
LAB_1422813a0:
          sVar17 = wcslen((wchar_t *)local_c98);
          iVar16 = (int)sVar17;
        }
        else {
          local_c98 = local_ce8.Data.AllocatorInstance.Data;
          iVar16 = iVar37;
          if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_1422813a0;
        }
        iStack_c90 = iVar16;
        pUVar18 = Z_Construct_UClass_UClass_NoRegister();
        local_ba8._12_4_ = uStack_c8c;
        local_ba8.Size = iStack_c90;
        local_ba8.DataPtr = (wchar_t *)local_c98;
        pUVar18 = (UClass *)
                  StaticFindFirstObject
                            (pUVar18,&local_ba8,EnsureIfAmbiguous|NativeFirst,Error,
                             L"UGameFeatureData::ReloadConfigs");
        if ((pUVar18 == (UClass *)0x0) || ((pUVar18->ClassFlags & CLASS_Config) == CLASS_None)) {
          if (2 < (byte)LogCore._0_1_) {
            ::FName::ToString(this_01,&local_b88);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
            if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b88.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (local_cd0.Data.ArrayNum == 0) {
            local_c88 = (FScriptContainerElement *)0x15060d16c;
LAB_14228142b:
            sVar17 = wcslen((wchar_t *)local_c88);
            iVar16 = (int)sVar17;
          }
          else {
            local_c88 = local_cd0.Data.AllocatorInstance.Data;
            iVar16 = iVar37;
            if (local_cd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_14228142b;
          }
          local_b98._12_4_ = uStack_c7c;
          local_b98.Size = iVar16;
          local_b98.DataPtr = (wchar_t *)local_c88;
          iStack_c80 = iVar16;
          local_dd8 = StaticFindFirstObject
                                (pUVar18,&local_b98,ExactClass,Warning,
                                 L"UObjectBaseUtility::ReloadObjectsFromModifiedConfigSections");
          if ((local_dd8 != (UObject *)0x0) && ((*(uint *)&local_dd8->field_0x8 >> 0x1e & 1) == 0))
          {
            if ((local_e20.Data <= (FScriptContainerElement *)&local_dd8) &&
               (((FScriptContainerElement *)&local_dd8 <
                 local_e20.Data + (longlong)local_e18._4_4_ * 8 &&
                (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)))) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar16 = (int)local_e18;
            if ((int)local_e18 == local_e18._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_e20,(int *)((longlong)&local_e18 + 4));
            }
            local_e18 = CONCAT44(local_e18._4_4_,iVar16 + 1);
            *(UObject **)(local_e20.Data + (longlong)iVar16 * 8) = local_dd8;
          }
        }
        FVar34.Data = local_cd0.Data.AllocatorInstance.Data;
        if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
          FVar34.Data = local_cd0.Data.AllocatorInstance.Data;
        }
      }
      if (FVar34.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar34.Data);
      }
      TStack_d78.UnvisitedBitMask = TStack_d78.UnvisitedBitMask & ~TStack_d78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d78);
    }
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::TSOnConfigSectionsChanged();
    ::FName::ToString(this_01,&local_bb8);
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    uVar26 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar26) {
      lVar21 = (longlong)(int)uVar26 << 4;
      do {
        uVar28 = 0;
        if ((int)uVar26 < (this_00->InvocationList).ArrayNum) {
          uVar28 = ~uVar26 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar27 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar27 + lVar21 + 8) == 0) ||
            (plVar5 = *(longlong **)(pFVar27 + lVar21), plVar5 == (longlong *)0x0)) ||
           (cVar15 = (**(code **)(*plVar5 + 0x68))(), cVar15 == '\0')) {
          bVar13 = true;
        }
        lVar21 = lVar21 + -0x10;
        uVar26 = uVar26 - 1;
      } while (-1 < (int)uVar26);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar13) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
    }
    TStack_c00.UnvisitedBitMask = TStack_c00.UnvisitedBitMask & ~TStack_c00._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c00);
  } while( true );
}

// RootPackageHasAnyFlags @ 1422848c0

bool __thiscall UObjectBaseUtility::RootPackageHasAnyFlags(UObjectBaseUtility *this,uint param_1)

{
  UPackage *pUVar1;
  
  while( true ) {
    if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr ==
        (TObjectPtr<UObject>_u_0)0x0) {
      pUVar1 = CastChecked<UPackage,UObject>((UObject *)this);
    }
    else {
      pUVar1 = (UPackage *)0x0;
      if ((*(uint *)((longlong)this + 8) >> 0x1c & 1) != 0) {
        pUVar1 = GetObjectExternalPackageThreadSafe((UObjectBase *)this);
      }
    }
    if (pUVar1 != (UPackage *)0x0) break;
    this = (UObjectBaseUtility *)((TObjectPtr<UObject>_u_0 *)((longlong)this + 0x20))->DebugPtr;
  }
  return (param_1 & (uint)pUVar1->PackageFlagsPrivate) != 0;
}

// SetInternalFlags @ 1422856a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObjectBaseUtility::SetInternalFlags(UObjectBaseUtility *this,EInternalObjectFlags param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *this_00;
  
  iVar1 = *(int *)&this->field_0xc;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    this_00 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  else {
    this_00 = (FUObjectItem *)0x0;
  }
  if (((param_1 & Garbage) != Borrowed) &&
     ((param_1 & Garbage) !=
      ((EInternalObjectFlags)((ulonglong)(this_00->field0_0x0).FlagsAndRefCount >> 0x20) & Garbage))
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(FlagsToSet & EInternalObjectFlags::Garbage) || (FlagsToSet & EInternalObjectFlags::Garbage) == (ObjectItem->GetFlags() & EInternalObjectFlags::Garbage)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x10b,
                       L"SetInternalFlags should not set the Garbage flag. Use MarkAsGarbage instead"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUObjectItem::ThisThreadAtomicallySetFlag(this_00,param_1);
  return;
}

// GetLinker @ 14229d770

FLinkerLoad * __thiscall UObjectBaseUtility::GetLinker(UObjectBaseUtility *this)

{
  code *pcVar1;
  bool bVar2;
  FLinkerLoad *pFVar3;
  FLinkerIndexPair local_18;
  
  if (this == (UObjectBaseUtility *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x3ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinkerLoad *)(*pcVar1)();
      return pFVar3;
    }
  }
  FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::GetAnnotation
            (&LinkerAnnotation,&local_18,*(int *)&this->field_0xc);
  if ((local_18.LinkerIndex == -1) != (local_18.Linker == (FLinkerLoad *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinkerLoad *)(*pcVar1)();
      return pFVar3;
    }
  }
  return local_18.Linker;
}

// GetLinkerIndex @ 14229d820

int __thiscall UObjectBaseUtility::GetLinkerIndex(UObjectBaseUtility *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FLinkerIndexPair local_18;
  
  if (this == (UObjectBaseUtility *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x3ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::GetAnnotation
            (&LinkerAnnotation,&local_18,*(int *)&this->field_0xc);
  if ((local_18.Linker == (FLinkerLoad *)0x0) != (local_18.LinkerIndex == -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!((Linker == nullptr) ^ (LinkerIndex == INDEX_NONE))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectLinker.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return local_18.LinkerIndex;
}

// IsA<UClass_*> @ 142305730

bool __thiscall UObjectBaseUtility::IsA<UClass_*>(UObjectBaseUtility *this,UClass *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &param_1->_padding_)) {
    return true;
  }
  return false;
}

// operator() @ 150489370

bool __thiscall `UObjectBaseUtility::GetTypedOuter'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4838989143864246582>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4838989143864246582>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

