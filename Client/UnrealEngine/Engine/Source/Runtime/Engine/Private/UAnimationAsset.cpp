// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 1473cb210

UClass * __cdecl UAnimationAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAsset",
               &Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton,
               StaticRegisterNativesUAnimationAsset,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationAsset>,
               InternalVTableHelperCtorCaller<UAnimationAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton;
}

// UAnimationAsset @ 1473d8770

UAnimationAsset * __thiscall
UAnimationAsset::UAnimationAsset(UAnimationAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->SkeletonGuid).A = 0;
  (this->SkeletonGuid).B = 0;
  (this->SkeletonGuid).C = 0;
  (this->SkeletonGuid).D = 0;
  (this->SkeletonVirtualBoneGuid).A = 0;
  (this->SkeletonVirtualBoneGuid).B = 0;
  (this->SkeletonVirtualBoneGuid).C = 0;
  (this->SkeletonVirtualBoneGuid).D = 0;
  (this->MetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaData).ArrayNum = 0;
  (this->MetaData).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// UAnimationAsset @ 1473d87e0

UAnimationAsset * __thiscall
UAnimationAsset::UAnimationAsset(UAnimationAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->SkeletonGuid).A = 0;
  (this->SkeletonGuid).B = 0;
  (this->SkeletonGuid).C = 0;
  (this->SkeletonGuid).D = 0;
  (this->SkeletonVirtualBoneGuid).A = 0;
  (this->SkeletonVirtualBoneGuid).B = 0;
  (this->SkeletonVirtualBoneGuid).C = 0;
  (this->SkeletonVirtualBoneGuid).D = 0;
  (this->MetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaData).ArrayNum = 0;
  (this->MetaData).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// ~UAnimationAsset @ 1473db4a0

void __thiscall UAnimationAsset::~UAnimationAsset(UAnimationAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 1473e1030

void __thiscall UAnimationAsset::AddAssetUserData(UAnimationAsset *this,UAssetUserData *param_1)

{
  uint *puVar1;
  code *pcVar2;
  UObject **ppUVar3;
  longlong *plVar4;
  UAssetUserData **ppUVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar8 = (UObject *)(*pcVar2)(this,local_res18);
    if (pUVar8 != (UObject *)0x0) {
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      ppUVar3 = *(UObject ***)&(this->SkeletonGuid).C;
      if (((ppUVar3 <= &local_48) && (&local_48 < ppUVar3 + (int)(this->SkeletonVirtualBoneGuid).B))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (this->SkeletonVirtualBoneGuid).A;
      if (uVar7 != 0) {
        uVar12 = 0;
        plVar4 = *(longlong **)&(this->SkeletonGuid).C;
        bVar6 = (UObject *)*plVar4 != local_48;
        lVar9 = 0;
        pUVar8 = local_48;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          do {
            lVar9 = lVar9 + 1;
            uVar11 = uVar11 + 1;
            if ((int)uVar7 <= lVar9) break;
          } while (bVar6 == ((UObject *)plVar4[lVar9] != pUVar8));
          if (bVar6 != false) {
            if (uVar12 != uVar10) {
              memmove(plVar4 + (int)uVar12,plVar4 + (int)uVar10,
                      (longlong)(int)(uVar11 - uVar10) << 3);
              pUVar8 = local_48;
            }
            uVar12 = uVar12 + (uVar11 - uVar10);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          uVar10 = uVar11;
        } while (lVar9 < (int)uVar7);
        (this->SkeletonVirtualBoneGuid).A = uVar12;
      }
    }
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    ppUVar5 = *(UAssetUserData ***)&(this->SkeletonGuid).C;
    if (((ppUVar5 <= &local_40) && (&local_40 < ppUVar5 + (int)(this->SkeletonVirtualBoneGuid).B))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = (this->SkeletonVirtualBoneGuid).A;
    puVar1 = &(this->SkeletonVirtualBoneGuid).B;
    if (uVar7 == *puVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&(this->SkeletonGuid).C,(int *)puVar1);
    }
    (this->SkeletonVirtualBoneGuid).A = uVar7 + 1;
    *(UAssetUserData **)(*(longlong *)&(this->SkeletonGuid).C + (longlong)(int)uVar7 * 8) = local_40
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AddMetaData @ 1473e12e0

void __thiscall UAnimationAsset::AddMetaData(UAnimationAsset *this,UAnimMetaData *param_1)

{
  TArray<TObjectPtr<UAnimMetaData>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UAnimMetaData *local_18 [2];
  
  pTVar1 = &this->MetaData;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimMetaData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->MetaData).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->MetaData).ArrayNum;
  piVar2 = &(this->MetaData).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->MetaData).ArrayNum = iVar6 + 1;
  *(UAnimMetaData **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UAnimMetaData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// FindMetaDataByClass @ 1473fcc90

UAnimMetaData * __thiscall
UAnimationAsset::FindMetaDataByClass(UAnimationAsset *this,TSubclassOf<UAnimMetaData> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UAnimMetaData *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar3 != 0) &&
     (pUVar6 = Z_Construct_UClass_UAnimMetaData_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar3 = *(longlong *)param_1.Class.field0_0x0;
      if (lVar3 == 0) {
        return (UAnimMetaData *)0x0;
      }
      pFVar7 = (this->MetaData).AllocatorInstance.Data;
      iVar2 = (this->MetaData).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->MetaData).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UAnimMetaData>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        pUVar4 = *(UAnimMetaData **)pFVar7;
        if (pUVar4 != (UAnimMetaData *)0x0) {
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            return pUVar4;
          }
        }
        pFVar7 = pFVar7 + 8;
      }
      return (UAnimMetaData *)0x0;
    }
  }
  return (UAnimMetaData *)0x0;
}

// GetAssetUserDataArray @ 1474000f0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimationAsset::GetAssetUserDataArray(UAnimationAsset *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&(this->SkeletonGuid).C;
}

// GetAssetUserDataOfClass @ 147400100

UAssetUserData * __thiscall
UAnimationAsset::GetAssetUserDataOfClass(UAnimationAsset *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (int)(this->SkeletonVirtualBoneGuid).A) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (int)(this->SkeletonVirtualBoneGuid).A) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + *(longlong *)&(this->SkeletonGuid).C);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1474001a6;
LAB_1474001d4:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1474001d4;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1474001a6:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1474001d4;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1474001d4;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)(this->SkeletonVirtualBoneGuid).A);
  }
  return (UAssetUserData *)0x0;
}

// GetMaxCurrentTime @ 147402a50

float __thiscall UAnimationAsset::GetMaxCurrentTime(UAnimationAsset *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147402a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  return fVar1;
}

// GetPlayLength @ 147403310

float __thiscall UAnimationAsset::GetPlayLength(UAnimationAsset *this)

{
  return 0.0;
}

// GetPreviewMesh @ 147403380

USkeletalMesh * __thiscall UAnimationAsset::GetPreviewMesh(UAnimationAsset *this,bool param_1)

{
  return (USkeletalMesh *)0x0;
}

// GetPreviewMesh @ 147403390

USkeletalMesh * __thiscall UAnimationAsset::GetPreviewMesh(UAnimationAsset *this)

{
  return (USkeletalMesh *)0x0;
}

// GetPrivateStaticClass @ 147403d40

UClass * __cdecl UAnimationAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAsset",
               &Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton,
               StaticRegisterNativesUAnimationAsset,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationAsset>,
               InternalVTableHelperCtorCaller<UAnimationAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton;
}

// GetUniqueMarkerNames @ 147405ca0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAnimationAsset::GetUniqueMarkerNames(UAnimationAsset *this)

{
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// IsValidAdditive @ 1474081c0

bool __thiscall UAnimationAsset::IsValidAdditive(UAnimationAsset *this)

{
  return false;
}

// PostLoad @ 14740d9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimationAsset::PostLoad(UAnimationAsset *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  USkeleton *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,Animation,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Animation,true);
  UObject::PostLoad((UObject *)this);
  pUVar3 = (this->Skeleton).field0_0x0.DebugPtr;
  if (pUVar3 != (USkeleton *)0x0) {
    UObject::ConditionalPreload((UObject *)pUVar3);
    UObject::ConditionalPostLoad((UObject *)(this->Skeleton).field0_0x0.DebugPtr);
  }
  pUVar3 = (this->Skeleton).field0_0x0.DebugPtr;
  if (((pUVar3 != (USkeleton *)0x0) &&
      (uVar1 = (pUVar3->Guid).A, uVar4 = (pUVar3->Guid).B, uVar2 = (pUVar3->Guid).C,
      uVar5 = (pUVar3->Guid).D,
      ((uVar4 != (this->SkeletonGuid).B || uVar5 != (this->SkeletonGuid).D) ||
      uVar2 != (this->SkeletonGuid).C) || uVar1 != (this->SkeletonGuid).A)) &&
     (2 < (byte)LogAnimation._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((((this->Skeleton).field0_0x0.DebugPtr != (USkeleton *)0x0) &&
      ((((this->SkeletonGuid).D == 0 && (this->SkeletonGuid).C == 0) && (this->SkeletonGuid).B == 0)
       && (this->SkeletonGuid).A == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Skeleton==0 || SkeletonGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                         ,0x14d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemoveMetaData @ 14740eba0

void __thiscall UAnimationAsset::RemoveMetaData(UAnimationAsset *this,UAnimMetaData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UAnimMetaData *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UAnimMetaData *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimMetaData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->MetaData).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->MetaData).ArrayMax * 8)) &&
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
  iVar1 = (this->MetaData).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->MetaData).AllocatorInstance.Data;
    bVar4 = *(UAnimMetaData **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UAnimMetaData **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->MetaData).ArrayNum = iVar9;
  }
  return;
}

// RemoveMetaData @ 14740ed30

void __thiscall
UAnimationAsset::RemoveMetaData(UAnimationAsset *this,TArrayView<UAnimMetaData_*,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  UAnimMetaData **ppUVar3;
  UAnimMetaData **ppUVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  
  iVar10 = (this->MetaData).ArrayNum;
  lVar8 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar1 = (this->MetaData).AllocatorInstance.Data;
    ppUVar4 = param_1->DataPtr;
    iVar10 = 0;
    ppUVar3 = ppUVar4 + param_1->ArrayNum;
    for (; ppUVar4 != ppUVar3; ppUVar4 = ppUVar4 + 1) {
      if (*ppUVar4 == *(UAnimMetaData **)pFVar1) {
        bVar9 = 0;
        goto LAB_14740ed9b;
      }
    }
    bVar9 = 1;
LAB_14740ed9b:
    lVar7 = 0;
    iVar5 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar6 = iVar5 + 1;
      if (lVar7 < lVar8) {
        do {
          for (ppUVar3 = param_1->DataPtr; ppUVar3 != param_1->DataPtr + param_1->ArrayNum;
              ppUVar3 = ppUVar3 + 1) {
            if (*ppUVar3 == *(UAnimMetaData **)(pFVar1 + lVar7 * 8)) {
              bVar2 = 0;
              goto LAB_14740edf7;
            }
          }
          bVar2 = 1;
LAB_14740edf7:
          if (bVar9 != bVar2) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar8);
      }
      if (bVar9 != 0) {
        if (iVar10 != iVar5) {
          memmove(pFVar1 + (longlong)iVar10 * 8,pFVar1 + (longlong)iVar5 * 8,
                  (longlong)(iVar6 - iVar5) << 3);
        }
        iVar10 = iVar10 + (iVar6 - iVar5);
      }
      bVar9 = bVar9 ^ 1;
      iVar5 = iVar6;
    } while (lVar7 < lVar8);
    (this->MetaData).ArrayNum = iVar10;
  }
  return;
}

// RemoveUserDataOfClass @ 14740f050

void __thiscall
UAnimationAsset::RemoveUserDataOfClass(UAnimationAsset *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  uint uVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar6 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (int)(this->SkeletonVirtualBoneGuid).A) {
    do {
      uVar7 = (uint)pUVar6;
      uVar8 = 0;
      if ((int)uVar7 < (int)(this->SkeletonVirtualBoneGuid).A) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + *(longlong *)&(this->SkeletonGuid).C);
      if (lVar1 != 0) {
        pUVar6 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar6 != (UObject *)0x0) goto LAB_14740f108;
LAB_14740f136:
          pUVar6 = pUVar10;
        }
        else {
          if (pUVar6 == (UObject *)0x0) goto LAB_14740f136;
          UE::GC::MarkAsReachable(pUVar6);
LAB_14740f108:
          pUVar5 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar5 == (UClass *)0x0) goto LAB_14740f136;
          iVar4 = (int)pUVar5->_padding_;
          if ((*(int *)&pUVar6[1].field_0x10 < iVar4) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar4 * 8)
              != &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14740f136;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar6[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar6[1].field_0x10 * 8) ==
            &pUVar6[1].field_0x8)) {
          uVar8 = 0;
          if ((int)uVar7 < (int)(this->SkeletonVirtualBoneGuid).A) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(*(longlong *)&(this->SkeletonGuid).C + (longlong)(int)uVar7 * 8);
          iVar4 = ((this->SkeletonVirtualBoneGuid).A - uVar7) + -1;
          if (iVar4 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
          }
          uVar8 = (this->SkeletonVirtualBoneGuid).A - 1;
          (this->SkeletonVirtualBoneGuid).A = uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&(this->SkeletonGuid).C,uVar8,
                     (int *)&(this->SkeletonVirtualBoneGuid).B);
          return;
        }
      }
      pUVar6 = (UObject *)(ulonglong)(uVar7 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar7 + 1) < (int)(this->SkeletonVirtualBoneGuid).A);
  }
  return;
}

// ResetSkeleton @ 14740f650

void __thiscall UAnimationAsset::ResetSkeleton(UAnimationAsset *this,USkeleton *param_1)

{
  return;
}

// Serialize @ 147417f70

void __thiscall UAnimationAsset::Serialize(UAnimationAsset *this,FArchive *param_1)

{
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,Animation,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Animation,true);
  UObject::Serialize((UObject *)this,param_1);
  if (0x151 < *(int *)&param_1->field_0x40) {
    ::operator<<(param_1,&this->SkeletonGuid);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Serialize @ 147417ff0

void __thiscall UAnimationAsset::Serialize(UAnimationAsset *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetPreviewMesh @ 147419630

void __thiscall
UAnimationAsset::SetPreviewMesh(UAnimationAsset *this,USkeletalMesh *param_1,bool param_2)

{
  return;
}

// SetSkeleton @ 147419640

void __thiscall UAnimationAsset::SetSkeleton(UAnimationAsset *this,USkeleton *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Skeleton).field0_0x0.DebugPtr = param_1;
    uVar1 = (param_1->Guid).B;
    uVar2 = (param_1->Guid).C;
    uVar3 = (param_1->Guid).D;
    (this->SkeletonGuid).A = (param_1->Guid).A;
    (this->SkeletonGuid).B = uVar1;
    (this->SkeletonGuid).C = uVar2;
    (this->SkeletonGuid).D = uVar3;
    return;
  }
  (this->Skeleton).field0_0x0.DebugPtr = param_1;
  if (param_1 != (USkeleton *)0x0) {
    uVar1 = (param_1->Guid).B;
    uVar2 = (param_1->Guid).C;
    uVar3 = (param_1->Guid).D;
    (this->SkeletonGuid).A = (param_1->Guid).A;
    (this->SkeletonGuid).B = uVar1;
    (this->SkeletonGuid).C = uVar2;
    (this->SkeletonGuid).D = uVar3;
    return;
  }
  (this->SkeletonGuid).C = 0;
  (this->SkeletonGuid).D = 0;
  (this->SkeletonGuid).A = 0;
  (this->SkeletonGuid).B = 0;
  return;
}

// StaticRegisterNativesUAnimationAsset @ 147419c10

void __cdecl UAnimationAsset::StaticRegisterNativesUAnimationAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimationAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickAssetPlayer @ 14741a390

void __thiscall
UAnimationAsset::TickAssetPlayer
          (UAnimationAsset *this,FAnimTickRecord *param_1,FAnimNotifyQueue *param_2,
          FAnimAssetTickContext *param_3)

{
  return;
}

// ValidateSkeleton @ 14741bf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimationAsset::ValidateSkeleton(UAnimationAsset *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  USkeleton *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString local_18;
  
  pUVar3 = (this->Skeleton).field0_0x0.DebugPtr;
  if (((pUVar3 != (USkeleton *)0x0) &&
      (uVar1 = (pUVar3->Guid).A, uVar4 = (pUVar3->Guid).B, uVar2 = (pUVar3->Guid).C,
      uVar5 = (pUVar3->Guid).D,
      ((uVar4 != (this->SkeletonGuid).B || uVar5 != (this->SkeletonGuid).D) ||
      uVar2 != (this->SkeletonGuid).C) || uVar1 != (this->SkeletonGuid).A)) &&
     (2 < (byte)LogAnimation._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// _getUObject @ 14741da10

UObject * __thiscall UAnimationAsset::_getUObject(UAnimationAsset *this)

{
  return (UObject *)&this[-1].SkeletonVirtualBoneGuid.C;
}

// _getUObject`adjustor{8}' @ 14741da1c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UAnimationAsset::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UAnimationAsset::_getUObject_adjustor_8__(UAnimationAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAnimationAsset *)&this[-1].AssetUserData.ArrayNum);
  return (UObject *)pUVar1;
}

// execFindMetaDataByClass @ 14741dce0

void __cdecl
UAnimationAsset::execFindMetaDataByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  UObject *local_res18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar6 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res18 == (UObject *)0x0) goto LAB_14741de1c;
  }
  else {
    if (local_res18 == (UObject *)0x0) goto LAB_14741de1c;
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar7 = Z_Construct_UClass_UAnimMetaData_NoRegister();
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)&pUVar6[1].field_0x10 < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar8 = *(longlong **)&param_1[2].field_0x10;
      iVar2 = *(int *)&param_1[2].field_0x18;
      plVar1 = plVar8 + iVar2;
      while( true ) {
        if (*(int *)&param_1[2].field_0x18 != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UAnimMetaData>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (plVar8 == plVar1) break;
        lVar4 = *plVar8;
        if (lVar4 != 0) {
          if ((*(int *)&pUVar6[1].field_0x10 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)&pUVar6[1].field_0x10 * 8) == &pUVar6[1].field_0x8)) {
            *(longlong *)param_3 = lVar4;
            return;
          }
        }
        plVar8 = plVar8 + 1;
      }
      *(undefined8 *)param_3 = 0;
      return;
    }
  }
LAB_14741de1c:
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetPlayLength @ 14741e010

void __cdecl UAnimationAsset::execGetPlayLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

