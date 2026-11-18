// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 8

// AddAsset @ 144436de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UE::Dataflow::FContextAssetStore::AddAsset
          (FContextAssetStore *this,FString *param_1,UClass *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *this_00;
  longlong *plVar4;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FString local_d8;
  UObject *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_2 == (UClass *)0x0) {
    return (UObject *)0x0;
  }
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,param_2);
  local_b8._8_8_ = GetTransientPackage();
  local_b8._24_4_ = RF_Public;
  this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UObject *)0x0) goto LAB_144436fd8;
    GC::MarkAsReachable(this_00);
  }
  if (this_00 != (UObject *)0x0) {
    iVar3 = (param_1->Data).ArrayNum;
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = CONCAT44(local_e0._4_4_,iVar3);
    if (iVar3 == 0) {
      local_e0 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_e8,iVar3,(int *)((longlong)&local_e0 + 4));
      memcpy(local_e8.Data,pFVar2,(longlong)iVar3 * 2);
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_d8,(UObject *)0x0);
    local_c8 = this_00;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(this_00);
    }
    iVar3 = (this->AssetData).ArrayNum;
    piVar1 = &(this->AssetData).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->AssetData).AllocatorInstance,piVar1);
    }
    (this->AssetData).ArrayNum = iVar3 + 1;
    pFVar2 = (this->AssetData).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar3 * 0x28) = 0;
    pFVar2 = pFVar2 + (longlong)iVar3 * 0x28;
    *(FScriptContainerElement **)pFVar2 = local_e8.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar2 + 8) = (undefined4)local_e0;
    *(undefined4 *)(pFVar2 + 0xc) = local_e0._4_4_;
    local_e0 = 0;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + 0x10) = local_d8.Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + 0x18) = local_d8.Data.ArrayNum;
    *(int *)(pFVar2 + 0x1c) = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    *(UObject **)(pFVar2 + 0x20) = local_c8;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_c8);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    if (local_b8._64_8_ != 0) {
      plVar4 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
      return this_00;
    }
    return this_00;
  }
LAB_144436fd8:
  if (local_b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return (UObject *)0x0;
}

// AddReferencedObjects @ 1444371c0

void __thiscall
UE::Dataflow::FContextAssetStore::AddReferencedObjects
          (FContextAssetStore *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->AssetData).ArrayNum;
  pFVar3 = (this->AssetData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->AssetData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Dataflow::FContextAssetStore::FAssetData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3 + 0x20,0,0);
    pFVar3 = pFVar3 + 0x28;
  }
  return;
}

// ClearAssets @ 1444387b0

void __thiscall UE::Dataflow::FContextAssetStore::ClearAssets(FContextAssetStore *this)

{
  int *piVar1;
  
  DestructItems<UE::Dataflow::FContextAssetStore::FAssetData,int>
            ((FAssetData *)(this->AssetData).AllocatorInstance.Data,(this->AssetData).ArrayNum);
  piVar1 = &(this->AssetData).ArrayMax;
  (this->AssetData).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->AssetData).AllocatorInstance,0,piVar1);
  }
  return;
}

// CommitAsset @ 14443bd60

UObject * __thiscall
UE::Dataflow::FContextAssetStore::CommitAsset(FContextAssetStore *this,FAssetData *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  UPackage *pUVar4;
  FName *pFVar5;
  FName FVar6;
  FName FVar7;
  FString *pFVar8;
  UObjectBase *this_00;
  UObject *pUVar9;
  ForAnyElementType FVar10;
  int iVar11;
  longlong lVar12;
  FName local_res10 [2];
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1->TransientAsset).field0_0x0.DebugPtr != (UObject *)0x0) {
    local_58.Data.ArrayNum = (param_1->PersistentPath).Data.ArrayNum;
    lVar12 = (longlong)local_58.Data.ArrayNum;
    _Src = (param_1->PersistentPath).Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    pUVar4 = FindPackage((UObject *)0x0,(wchar_t *)FVar10.Data);
    if (pUVar4 != (UPackage *)0x0) {
      iVar11 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      pFVar5 = ::FName::FName(local_res10,iVar11,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar7 = *pFVar5;
      FVar6 = (FName)Z_Construct_UClass_UPackage_NoRegister();
      FVar7 = MakeUniqueObjectName
                        ((UObject *)(local_res10 + 1),(UClass *)0x0,FVar6,
                         FVar7.ComparisonIndex.Value.Value);
      pFVar8 = ::FName::ToString((FName *)FVar7,&local_38);
      if (&local_58 != pFVar8) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    pUVar4 = CreatePackage((wchar_t *)FVar10.Data);
    if (pUVar4 != (UPackage *)0x0) {
      FPaths::GetBaseFilename(&local_48,&local_58,true);
      iVar11 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      pFVar5 = ::FName::FName(&local_res20,iVar11,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pUVar9 = (param_1->TransientAsset).field0_0x0.DebugPtr;
      this_00 = (UObjectBase *)
                DuplicateObject_Internal
                          (*(UClass **)&pUVar9->field_0x10,pUVar9,(UObject *)pUVar4,*pFVar5);
      if (this_00 != (UObjectBase *)0x0) {
        UObjectBase::AtomicallySetFlags(this_00,RF_Standalone);
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
        pIVar2 = AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
        if (AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                             ,0x111,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pUVar9 = (UObject *)(*pcVar1)();
            return pUVar9;
          }
        }
        (**(code **)((longlong)*pIVar2 + 0x2a8))(pIVar2,this_00);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        return (UObject *)this_00;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return (UObject *)0x0;
}

// CommitAsset @ 14443bfb0

UObject * __thiscall
UE::Dataflow::FContextAssetStore::CommitAsset(FContextAssetStore *this,FString *param_1)

{
  FAssetData *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = TArray<UE::Dataflow::FContextAssetStore::FAssetData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Dataflow::FContextAssetStore::FindByTransientPath_::__l2::<lambda_1>_>
                     (&this->AssetData,(<lambda_1>)param_1);
  if (pFVar1 != (FAssetData *)0x0) {
    pUVar2 = CommitAsset(this,pFVar1);
    return pUVar2;
  }
  return (UObject *)0x0;
}

// CommitAsset @ 14443bff0

UObject * __thiscall
UE::Dataflow::FContextAssetStore::CommitAsset(FContextAssetStore *this,UObject *param_1)

{
  FAssetData *pFVar1;
  UObject *pUVar2;
  FAssetData *pFVar3;
  bool bVar4;
  
  pFVar3 = (FAssetData *)(this->AssetData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (this->AssetData).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (UObject *)0x0;
    }
    pUVar2 = (pFVar3->TransientAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UObject *)0x0) {
      bVar4 = param_1 == (UObject *)0x0;
    }
    else {
      bVar4 = pUVar2 == param_1;
    }
    if (bVar4) break;
    pFVar3 = pFVar3 + 1;
  }
  pUVar2 = CommitAsset(this,pFVar3);
  return pUVar2;
}

// FindByTransientAsset @ 144446400

FAssetData * __thiscall
UE::Dataflow::FContextAssetStore::FindByTransientAsset(FContextAssetStore *this,UObject *param_1)

{
  FAssetData *pFVar1;
  UObject *pUVar2;
  FAssetData *pFVar3;
  bool bVar4;
  
  pFVar3 = (FAssetData *)(this->AssetData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (this->AssetData).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (FAssetData *)0x0;
    }
    pUVar2 = (pFVar3->TransientAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UObject *)0x0) {
      bVar4 = param_1 == (UObject *)0x0;
    }
    else {
      bVar4 = pUVar2 == param_1;
    }
    if (bVar4) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FindByTransientPath @ 144446440

FAssetData * __thiscall
UE::Dataflow::FContextAssetStore::FindByTransientPath(FContextAssetStore *this,FString *param_1)

{
  FAssetData *pFVar1;
  
  pFVar1 = TArray<UE::Dataflow::FContextAssetStore::FAssetData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Dataflow::FContextAssetStore::FindByTransientPath_::__l2::<lambda_1>_>
                     (&this->AssetData,(<lambda_1>)param_1);
  return pFVar1;
}

