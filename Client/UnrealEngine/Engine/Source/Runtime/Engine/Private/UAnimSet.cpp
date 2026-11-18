// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147519270

UClass * __cdecl UAnimSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSet",&Z_Registration_Info_UClass_UAnimSet.InnerSingleton,
               StaticRegisterNativesUAnimSet,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSet>,InternalVTableHelperCtorCaller<UAnimSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSet.InnerSingleton;
}

// UAnimSet @ 147531f60

UAnimSet * __thiscall UAnimSet::UAnimSet(UAnimSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSet__6B_;
  (this->TrackBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackBoneNames).ArrayNum = 0;
  (this->TrackBoneNames).ArrayMax = 0;
  (this->LinkupCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkupCache).ArrayNum = 0;
  (this->LinkupCache).ArrayMax = 0;
  (this->BoneUseAnimTranslation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneUseAnimTranslation).ArrayNum = 0;
  (this->BoneUseAnimTranslation).ArrayMax = 0;
  (this->ForceUseMeshTranslation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceUseMeshTranslation).ArrayNum = 0;
  (this->ForceUseMeshTranslation).ArrayMax = 0;
  (this->UseTranslationBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UseTranslationBoneNames).ArrayNum = 0;
  (this->UseTranslationBoneNames).ArrayMax = 0;
  (this->ForceMeshTranslationBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceMeshTranslationBoneNames).ArrayNum = 0;
  (this->ForceMeshTranslationBoneNames).ArrayMax = 0;
  (this->PreviewSkelMeshName).ComparisonIndex = 0;
  (this->PreviewSkelMeshName).Number = 0;
  (this->BestRatioSkelMeshName).ComparisonIndex = 0;
  (this->BestRatioSkelMeshName).Number = 0;
  *(undefined8 *)&this->SkelMesh2LinkupCache = 0;
  *(undefined8 *)&(this->SkelMesh2LinkupCache).field_0x8 = 0;
  *(undefined8 *)&(this->SkelMesh2LinkupCache).field_0x20 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x28 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x34 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkelMesh2LinkupCache).field_0x40 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x48 = 0;
  return this;
}

// UAnimSet @ 147532010

UAnimSet * __thiscall UAnimSet::UAnimSet(UAnimSet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSet__6B_;
  (this->TrackBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackBoneNames).ArrayNum = 0;
  (this->TrackBoneNames).ArrayMax = 0;
  (this->LinkupCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkupCache).ArrayNum = 0;
  (this->LinkupCache).ArrayMax = 0;
  (this->BoneUseAnimTranslation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneUseAnimTranslation).ArrayNum = 0;
  (this->BoneUseAnimTranslation).ArrayMax = 0;
  (this->ForceUseMeshTranslation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceUseMeshTranslation).ArrayNum = 0;
  (this->ForceUseMeshTranslation).ArrayMax = 0;
  (this->UseTranslationBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UseTranslationBoneNames).ArrayNum = 0;
  (this->UseTranslationBoneNames).ArrayMax = 0;
  (this->ForceMeshTranslationBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceMeshTranslationBoneNames).ArrayNum = 0;
  (this->ForceMeshTranslationBoneNames).ArrayMax = 0;
  (this->PreviewSkelMeshName).ComparisonIndex = 0;
  (this->PreviewSkelMeshName).Number = 0;
  (this->BestRatioSkelMeshName).ComparisonIndex = 0;
  (this->BestRatioSkelMeshName).Number = 0;
  *(undefined8 *)&this->SkelMesh2LinkupCache = 0;
  *(undefined8 *)&(this->SkelMesh2LinkupCache).field_0x8 = 0;
  *(undefined8 *)&(this->SkelMesh2LinkupCache).field_0x20 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x28 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x34 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkelMesh2LinkupCache).field_0x40 = 0;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x48 = 0;
  return this;
}

// ~UAnimSet @ 147533a40

void __thiscall UAnimSet::~UAnimSet(UAnimSet *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAnimSet__6B_;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkelMesh2LinkupCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkelMesh2LinkupCache);
  pFVar2 = (this->ForceMeshTranslationBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UseTranslationBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForceUseMeshTranslation).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneUseAnimTranslation).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAnimSetMeshLinkup,int>
            ((FAnimSetMeshLinkup *)(this->LinkupCache).AllocatorInstance.Data,
             (this->LinkupCache).ArrayNum);
  pFVar2 = (this->LinkupCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrackBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanPlayOnSkeletalMesh @ 14754d270

bool __thiscall UAnimSet::CanPlayOnSkeletalMesh(UAnimSet *this,USkeletalMesh *param_1)

{
  return true;
}

// ClearAllAnimSetLinkupCaches @ 14754d4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAnimSet::ClearAllAnimSetLinkupCaches(void)

{
  longlong lVar1;
  code *pcVar2;
  FUObjectItem *pFVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  EInternalObjectFlags EVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  FUObjectItem *pFVar10;
  UClass *pUVar11;
  UObjectBase *pUVar12;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *this;
  uint uVar13;
  UObjectBase *pUVar14;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  UObjectBase *local_98;
  UObjectBase *local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TIterator local_68;
  UClass *local_50;
  EObjectFlags local_48;
  EInternalObjectFlags local_44;
  
  QueryPerformanceCounter(&local_res8);
  pUVar14 = (UObjectBase *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UObject_NoRegister();
  local_68.Index = -1;
  local_68.Array = &GUObjectArray;
  local_68.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_68);
  local_48 = RF_ClassDefaultObject;
  local_50 = pUVar9;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_44 = EVar6 | EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  if ((pUVar9 == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                         ,0x70,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
  do {
    pFVar3 = local_68.CurrentObject;
    pUVar12 = pUVar14;
    if (local_68.CurrentObject != (FUObjectItem *)0x0) {
      pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
    }
    if (((local_48 & pUVar12->ObjectFlags) == RF_NoFlags) &&
       (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar12->InternalIndex),
       (local_44 & (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)
       ) == Borrowed)) {
      pUVar11 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar9 == pUVar11) break;
      pUVar11 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar7 = (int)pUVar9->_padding_;
      if ((iVar7 <= (int)pUVar11->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar7 * 8) ==
          &pUVar9->_padding_)) break;
    }
    bVar4 = FUObjectArray::TIterator::Advance(&local_68);
    pUVar9 = local_50;
    pFVar3 = local_68.CurrentObject;
  } while (bVar4);
joined_r0x00014754d5f3:
  do {
    if (pFVar3 == (FUObjectItem *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
      pUVar12 = pUVar14;
      if (0 < (int)local_80) {
        do {
          uVar13 = (uint)pUVar14;
          uVar8 = 0;
          if ((int)uVar13 < (int)local_80) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)(local_88.Data + (longlong)&pUVar12->_padding_);
          DestructItems<FAnimSetMeshLinkup,int>
                    (*(FAnimSetMeshLinkup **)(lVar1 + 0x40),*(int *)(lVar1 + 0x48));
          *(undefined4 *)(lVar1 + 0x48) = 0;
          if (*(int *)(lVar1 + 0x4c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(lVar1 + 0x40),0,(int *)(lVar1 + 0x4c));
          }
          uVar8 = 0;
          if ((int)uVar13 < (int)local_80) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)(local_88.Data + (longlong)&pUVar12->_padding_);
          this = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0xa0);
          bVar4 = 1 < *(int *)(lVar1 + 0xe8);
          if (!bVar4) {
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            UnhashElements(this);
          }
          *(undefined4 *)(lVar1 + 0xa8) = 0;
          if (*(int *)(lVar1 + 0xac) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,0,(ForAnyElementType *)this,0,(int *)(lVar1 + 0xac));
          }
          *(undefined4 *)(lVar1 + 0xd0) = 0xffffffff;
          *(undefined4 *)(lVar1 + 0xd4) = 0;
          *(undefined4 *)(lVar1 + 200) = 0;
          if ((*(int *)(lVar1 + 0xcc) < 0) || (0x80 < *(int *)(lVar1 + 0xcc))) {
            *(undefined4 *)(lVar1 + 0xcc) = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0xb0),0);
          }
          if (bVar4) {
            *(undefined4 *)(lVar1 + 0xe8) = 1;
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Rehash(this);
          }
          pUVar14 = (UObjectBase *)(ulonglong)(uVar13 + 1);
          pUVar12 = (UObjectBase *)&pUVar12->ObjectFlags;
        } while ((int)(uVar13 + 1) < (int)local_80);
      }
      if (4 < (byte)LogAnimation._0_1_) {
        QueryPerformanceCounter(&local_res10);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      return;
    }
    pUVar12 = (pFVar3->field1_0x8).Object;
    if (pUVar12 == (UObjectBase *)0x0) {
LAB_14754d6fa:
      local_98 = (UObjectBase *)0x0;
    }
    else {
      pUVar11 = StaticClass();
      pUVar9 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar7 = (int)pUVar11->_padding_;
      if (((int)pUVar9->_padding_ < iVar7) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar7 * 8) !=
          &pUVar11->_padding_)) goto LAB_14754d6fa;
      local_98 = pUVar12;
      if (((pUVar12->ObjectFlags >> 0x1e & 1) == 0) &&
         (bVar4 = UObjectBaseUtility::IsTemplate
                            ((UObjectBaseUtility *)pUVar12,RF_ArchetypeObject|RF_ClassDefaultObject)
         , !bVar4)) {
        if ((local_88.Data <= (FScriptContainerElement *)&local_98) &&
           (((FScriptContainerElement *)&local_98 < local_88.Data + (longlong)local_80._4_4_ * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = (int)local_80;
        if ((int)local_80 == local_80._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_88,(int *)((longlong)&local_80 + 4));
        }
        local_80 = CONCAT44(local_80._4_4_,iVar7 + 1);
        *(UObjectBase **)(local_88.Data + (longlong)iVar7 * 8) = local_98;
      }
    }
    if ((pFVar3 == (FUObjectItem *)0x0) ||
       (pUVar12 = (pFVar3->field1_0x8).Object, pUVar12 == (UObjectBase *)0x0)) {
LAB_14754d804:
      local_90 = (UObjectBase *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      pUVar9 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar7 = (int)pUVar11->_padding_;
      if (((int)pUVar9->_padding_ < iVar7) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar7 * 8) !=
          &pUVar11->_padding_)) goto LAB_14754d804;
      local_90 = pUVar12;
      if (((pUVar12->ObjectFlags >> 0x1e & 1) == 0) &&
         (bVar4 = UObjectBaseUtility::IsTemplate
                            ((UObjectBaseUtility *)pUVar12,RF_ArchetypeObject|RF_ClassDefaultObject)
         , !bVar4)) {
        if ((local_78.Data <= (FScriptContainerElement *)&local_90) &&
           (((FScriptContainerElement *)&local_90 < local_78.Data + (longlong)local_70._4_4_ * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = (int)local_70;
        if ((int)local_70 == local_70._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_78,(int *)((longlong)&local_70 + 4));
        }
        local_70 = CONCAT44(local_70._4_4_,iVar7 + 1);
        *(UObjectBase **)(local_78.Data + (longlong)iVar7 * 8) = local_90;
      }
    }
    do {
      do {
        bVar4 = FUObjectArray::TIterator::Advance(&local_68);
        pFVar3 = local_68.CurrentObject;
        if (!bVar4) goto joined_r0x00014754d5f3;
        pUVar12 = pUVar14;
        if (local_68.CurrentObject != (FUObjectItem *)0x0) {
          pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_48 & pUVar12->ObjectFlags) != RF_NoFlags);
      pUVar12 = pUVar14;
      if (local_68.CurrentObject != (FUObjectItem *)0x0) {
        pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
      }
      pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar12->InternalIndex);
    } while ((local_44 &
             (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// FindAnimSequence @ 1475544d0

UAnimSequence * __thiscall UAnimSet::FindAnimSequence(UAnimSet *this,FName param_1)

{
  return (UAnimSequence *)0x0;
}

// GetMeshLinkupIndex @ 14755d600

int __thiscall UAnimSet::GetMeshLinkupIndex(UAnimSet *this,USkeletalMesh *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  uint local_res8 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res10;
  int **local_38;
  uint *local_30;
  FString local_28;
  
  pwVar8 = L"";
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSet.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar5 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_res10.Value,pwVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->SkelMesh2LinkupCache,(FName)local_res10.Value);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = (this->LinkupCache).ArrayNum;
    piVar6 = &(this->LinkupCache).ArrayMax;
    if (local_res8[0] == *piVar6) {
      local_res8[0] =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&(this->LinkupCache).AllocatorInstance,piVar6);
    }
    pFVar7 = (this->LinkupCache).AllocatorInstance.Data + (longlong)(int)local_res8[0] * 0x10;
    (this->LinkupCache).ArrayNum = local_res8[0] + 1;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    local_38 = &local_res10.Value;
    local_30 = local_res8;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->SkelMesh2LinkupCache,&local_res10,(bool *)&local_38);
    lVar9 = (longlong)(int)local_res8[0];
    uVar4 = 0;
    if ((int)local_res8[0] < (this->LinkupCache).ArrayNum) {
      uVar4 = ~local_res8[0] >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    FAnimSetMeshLinkup::BuildLinkup
              ((FAnimSetMeshLinkup *)((this->LinkupCache).AllocatorInstance.Data + lVar9 * 0x10),
               param_1,this);
    return local_res8[0];
  }
  return *piVar6;
}

// GetPrivateStaticClass @ 14755e9d0

UClass * __cdecl UAnimSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSet",&Z_Registration_Info_UClass_UAnimSet.InnerSingleton,
               StaticRegisterNativesUAnimSet,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSet>,InternalVTableHelperCtorCaller<UAnimSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSet.InnerSingleton;
}

// GetSkeletalMeshMatchRatio @ 1475629f0

float __thiscall UAnimSet::GetSkeletalMeshMatchRatio(UAnimSet *this,USkeletalMesh *param_1)

{
  FName FVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  iVar5 = (this->TrackBoneNames).ArrayNum;
  iVar9 = 0;
  uVar10 = 0;
  if (0 < iVar5) {
    lVar11 = 0;
    do {
      lVar6 = (**(code **)(param_1->_padding_ + 800))();
      uVar8 = 0;
      if ((int)uVar10 < (this->TrackBoneNames).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      iVar5 = -1;
      FVar1 = *(FName *)((this->TrackBoneNames).AllocatorInstance.Data + lVar11);
      if ((FVar1 != (FName)0x0) &&
         (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)(lVar6 + 0x90),FVar1), piVar7 != (int *)0x0)) {
        iVar5 = *piVar7;
      }
      iVar3 = iVar9 + 1;
      if (iVar5 == -1) {
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
      iVar5 = (this->TrackBoneNames).ArrayNum;
    } while ((int)uVar10 < iVar5);
  }
  if ((iVar5 != 0) && (iVar9 != 0)) {
    return (float)iVar9 / (float)iVar5;
  }
  return 0.0;
}

// PostLoad @ 147571dd0

void __thiscall UAnimSet::PostLoad(UAnimSet *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UAnimSet **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// RemoveAnimSequenceFromAnimSet @ 147573d80

bool __thiscall UAnimSet::RemoveAnimSequenceFromAnimSet(UAnimSet *this,UAnimSequence *param_1)

{
  return false;
}

// ResetAnimSet @ 147575e50

void __thiscall UAnimSet::ResetAnimSet(UAnimSet *this)

{
  return;
}

// StaticRegisterNativesUAnimSet @ 14757abf0

void __cdecl UAnimSet::StaticRegisterNativesUAnimSet(void)

{
  return;
}

