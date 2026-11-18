// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147516460

UClass * __cdecl UAssetMappingTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetMappingTable",
               &Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton,
               StaticRegisterNativesUAssetMappingTable,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAssetMappingTable>,
               InternalVTableHelperCtorCaller<UAssetMappingTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton;
}

// UAssetMappingTable @ 1475323d0

UAssetMappingTable * __thiscall
UAssetMappingTable::UAssetMappingTable(UAssetMappingTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAssetMappingTable__6B_;
  (this->MappedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MappedAssets).ArrayNum = 0;
  (this->MappedAssets).ArrayMax = 0;
  return this;
}

// UAssetMappingTable @ 147532410

UAssetMappingTable * __thiscall
UAssetMappingTable::UAssetMappingTable(UAssetMappingTable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAssetMappingTable__6B_;
  (this->MappedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MappedAssets).ArrayNum = 0;
  (this->MappedAssets).ArrayMax = 0;
  return this;
}

// ~UAssetMappingTable @ 147533bc0

void __thiscall UAssetMappingTable::~UAssetMappingTable(UAssetMappingTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAssetMappingTable__6B_;
  pFVar1 = (this->MappedAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 14754d470

void __thiscall UAssetMappingTable::Clear(UAssetMappingTable *this)

{
  int *piVar1;
  
  piVar1 = &(this->MappedAssets).ArrayMax;
  (this->MappedAssets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MappedAssets).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindMappedAsset @ 147554650

int __thiscall
UAssetMappingTable::FindMappedAsset(UAssetMappingTable *this,UAnimationAsset *param_1)

{
  UAnimationAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->MappedAssets).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->MappedAssets).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pUVar1 = *(UAnimationAsset **)((this->MappedAssets).AllocatorInstance.Data + lVar7);
      if (pUVar1 == (UAnimationAsset *)0x0) {
        bVar3 = param_1 == (UAnimationAsset *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_1;
      }
      if (bVar3) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->MappedAssets).ArrayNum);
  }
  return -1;
}

// GetMappedAsset @ 14755d110

UAnimationAsset * __thiscall
UAssetMappingTable::GetMappedAsset(UAssetMappingTable *this,UAnimationAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UAnimationAsset *pUVar4;
  uint uVar5;
  
  if (param_1 != (UAnimationAsset *)0x0) {
    uVar3 = FindMappedAsset(this,param_1);
    if (uVar3 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar3 < (this->MappedAssets).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UAnimationAsset *)(*pcVar1)();
          return pUVar4;
        }
      }
      pUVar4 = *(UAnimationAsset **)
                ((this->MappedAssets).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10 + 8);
      if (pUVar4 != (UAnimationAsset *)0x0) {
        param_1 = pUVar4;
      }
    }
  }
  return param_1;
}

// GetPrivateStaticClass @ 14755ee30

UClass * __cdecl UAssetMappingTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetMappingTable",
               &Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton,
               StaticRegisterNativesUAssetMappingTable,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAssetMappingTable>,
               InternalVTableHelperCtorCaller<UAssetMappingTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton;
}

// RefreshAssetList @ 147572740

void __thiscall
UAssetMappingTable::RefreshAssetList
          (UAssetMappingTable *this,TArray<UAnimationAsset_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  ForAnyElementType local_48;
  int local_40 [2];
  
  RemovedUnusedSources(this);
  iVar9 = (this->MappedAssets).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&local_48,local_40,local_40 + 1);
  memset(local_48.Data + iVar6,0,(longlong)iVar9);
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar9 = param_1->ArrayNum;
  local_res10 = pFVar8 + (longlong)iVar9 * 8;
  do {
    while( true ) {
      pFVar4 = local_res10;
      if (param_1->ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UAnimationAsset_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar4) {
        uVar10 = local_40[0] - 1;
        if (-1 < (int)uVar10) {
          lVar11 = (longlong)(int)uVar10;
          lVar14 = lVar11 << 4;
          do {
            uVar13 = ~uVar10 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar10 < local_40[0]) {
              uVar7 = uVar13;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (local_48.Data[lVar11] == (FScriptContainerElement)0x0) {
              uVar7 = 0;
              if ((int)uVar10 < (this->MappedAssets).ArrayNum) {
                uVar7 = uVar13;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pFVar8 = (this->MappedAssets).AllocatorInstance.Data + lVar14;
              iVar9 = (this->MappedAssets).ArrayNum + ~uVar10;
              if (iVar9 != 0) {
                memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar9 << 4);
              }
              piVar1 = &(this->MappedAssets).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&(this->MappedAssets).AllocatorInstance,
                         (this->MappedAssets).ArrayNum,&(this->MappedAssets).ArrayMax);
            }
            lVar11 = lVar11 + -1;
            lVar14 = lVar14 + -0x10;
            uVar10 = uVar10 - 1;
          } while (-1 < (int)uVar10);
        }
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        return;
      }
      lVar11 = *(longlong *)pFVar8;
      uVar10 = 0;
      lVar14 = 0;
      if (0 < (this->MappedAssets).ArrayNum) break;
LAB_1475728e0:
      pFVar8 = pFVar8 + 8;
    }
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->MappedAssets).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)((this->MappedAssets).AllocatorInstance.Data + lVar12);
      if (lVar2 == 0) {
        bVar5 = lVar11 == 0;
      }
      else {
        bVar5 = lVar2 == lVar11;
      }
      if (bVar5) {
        if (-1 < (int)uVar10) {
          if ((int)uVar10 < local_40[0]) {
            uVar7 = 0;
            if ((int)uVar10 < local_40[0]) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            local_48.Data[lVar14] = (FScriptContainerElement)0x1;
          }
        }
        goto LAB_1475728e0;
      }
      uVar10 = uVar10 + 1;
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar10 < (this->MappedAssets).ArrayNum);
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// RemapAsset @ 147573a40

bool __thiscall
UAssetMappingTable::RemapAsset
          (UAssetMappingTable *this,UAnimationAsset *param_1,UAnimationAsset *param_2)

{
  TArray<FAssetMapping,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  UAnimationAsset *pUVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  UAnimationAsset *local_28;
  UObject *local_20;
  
  if (param_1 == (UAnimationAsset *)0x0) {
    return false;
  }
  if ((((param_2 != (UAnimationAsset *)0x0) && (param_1 != param_2)) &&
      (param_1->_padding_ == param_2->_padding_)) &&
     ((param_1->Skeleton).field0_0x0.DebugPtr == (param_2->Skeleton).field0_0x0.DebugPtr)) {
    pcVar4 = *(code **)(param_2->_padding_ + 0x2d0);
    cVar6 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    cVar7 = (*pcVar4)(param_2);
    if (cVar6 == cVar7) {
      uVar10 = FindMappedAsset(this,param_1);
      pTVar1 = &this->MappedAssets;
      if (uVar10 == 0xffffffff) {
        local_28 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        local_20 = (UObject *)0x0;
        if (((pFVar12 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar12 + (longlong)(this->MappedAssets).ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar10 = (this->MappedAssets).ArrayNum;
        piVar2 = &(this->MappedAssets).ArrayMax;
        if (uVar10 == *piVar2) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->MappedAssets).ArrayNum = uVar10 + 1;
        pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
        *(UAnimationAsset **)pFVar12 = local_28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28 != (UAnimationAsset *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_28);
        }
        *(UObject **)(pFVar12 + 8) = local_20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_20);
        }
      }
      uVar13 = 0;
      if ((int)uVar10 < (this->MappedAssets).ArrayNum) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
      pUVar5 = *(UAnimationAsset **)pFVar12;
      if ((((pUVar5 != (UAnimationAsset *)0x0) && (pUVar5 != param_2)) &&
          (pUVar5->_padding_ == param_2->_padding_)) &&
         ((pUVar5->Skeleton).field0_0x0.DebugPtr == (param_2->Skeleton).field0_0x0.DebugPtr)) {
        pcVar4 = *(code **)(pUVar5->_padding_ + 0x2d0);
        cVar6 = (**(code **)(param_2->_padding_ + 0x2d0))(param_2);
        cVar7 = (*pcVar4)(pUVar5);
        if (cVar7 == cVar6) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(UAnimationAsset **)(pFVar12 + 8) = param_2;
          return true;
        }
        return false;
      }
      return false;
    }
  }
  uVar10 = FindMappedAsset(this,param_1);
  if (uVar10 != 0xffffffff) {
    uVar13 = 0;
    if ((int)uVar10 < (this->MappedAssets).ArrayNum) {
      uVar13 = ~uVar10 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    iVar3 = (this->MappedAssets).ArrayNum;
    pFVar12 = (this->MappedAssets).AllocatorInstance.Data;
    iVar11 = iVar3 + ~uVar10;
    if (1 < iVar11) {
      iVar11 = 1;
    }
    if (iVar11 != 0) {
      memmove(pFVar12 + (longlong)(int)uVar10 * 0x10,pFVar12 + (longlong)(iVar3 - iVar11) * 0x10,
              (longlong)iVar11 << 4);
    }
    piVar2 = &(this->MappedAssets).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->MappedAssets).AllocatorInstance,(this->MappedAssets).ArrayNum,
               &(this->MappedAssets).ArrayMax);
  }
  return true;
}

// RemovedUnusedSources @ 1475750e0

void __thiscall UAssetMappingTable::RemovedUnusedSources(UAssetMappingTable *this)

{
  TArray<FAssetMapping,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar12 = 0;
  if (0 < (this->MappedAssets).ArrayNum) {
    pTVar1 = &this->MappedAssets;
    lVar14 = 0;
    do {
      uVar13 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < (this->MappedAssets).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      plVar3 = *(longlong **)(pFVar10 + lVar14);
      if ((((plVar3 == (longlong *)0x0) ||
           (plVar4 = *(longlong **)(pFVar10 + lVar14 + 8), plVar4 == (longlong *)0x0)) ||
          (plVar3 == plVar4)) || ((plVar3[2] != plVar4[2] || (plVar3[7] != plVar4[7])))) {
LAB_1475751cf:
        uVar9 = 0;
        if ((int)uVar12 < (this->MappedAssets).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data + lVar14;
        iVar11 = (this->MappedAssets).ArrayNum + ~uVar12;
        if (iVar11 != 0) {
          memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar11 << 4);
        }
        piVar2 = &(this->MappedAssets).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,(this->MappedAssets).ArrayNum,
                   &(this->MappedAssets).ArrayMax);
        uVar12 = uVar12 - 1;
        lVar14 = lVar14 + -0x10;
      }
      else {
        pcVar5 = *(code **)(*plVar3 + 0x2d0);
        cVar7 = (**(code **)(*plVar4 + 0x2d0))();
        cVar8 = (*pcVar5)(plVar3);
        if (cVar8 != cVar7) goto LAB_1475751cf;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar12 < (this->MappedAssets).ArrayNum);
  }
  return;
}

// StaticRegisterNativesUAssetMappingTable @ 14757ace0

void __cdecl UAssetMappingTable::StaticRegisterNativesUAssetMappingTable(void)

{
  return;
}

