// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14758be20

UClass * __cdecl UPreviewMeshCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PreviewMeshCollection",
               &Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton,
               StaticRegisterNativesUPreviewMeshCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPreviewMeshCollection>,
               InternalVTableHelperCtorCaller<UPreviewMeshCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton;
}

// UPreviewMeshCollection @ 1475a7e40

UPreviewMeshCollection * __thiscall
UPreviewMeshCollection::UPreviewMeshCollection(UPreviewMeshCollection *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__IPreviewCollectionInterface__;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  return this;
}

// UPreviewMeshCollection @ 1475a7e80

UPreviewMeshCollection * __thiscall
UPreviewMeshCollection::UPreviewMeshCollection
          (UPreviewMeshCollection *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__IPreviewCollectionInterface__;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  return this;
}

// ~UPreviewMeshCollection @ 1475aac50

void __thiscall UPreviewMeshCollection::~UPreviewMeshCollection(UPreviewMeshCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__IPreviewCollectionInterface__;
  DestructItems<FPreviewMeshCollectionEntry,int>
            ((FPreviewMeshCollectionEntry *)(this->SkeletalMeshes).AllocatorInstance.Data,
             (this->SkeletalMeshes).ArrayNum);
  pFVar1 = (this->SkeletalMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IPreviewCollectionInterface__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPreviewSkeletalMeshes @ 1475d7bb0

void __thiscall
UPreviewMeshCollection::GetPreviewSkeletalMeshes
          (UPreviewMeshCollection *this,TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<TSubclassOf<UAnimInstance>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  uint uVar12;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  longlong local_res8;
  UObject *local_38;
  UObject *local_30;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar2);
  }
  uVar12 = 0;
  if (0 < (int)this->_padding_) {
    local_res8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->_padding_ + local_res8);
      pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if (pUVar10 == (UObject *)0x0) {
        if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          goto LAB_1475d7cd1;
        }
      }
      else {
LAB_1475d7cd1:
        if (pUVar10 != (UObject *)0x0) {
          pUVar11 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar9 = (int)pUVar11->_padding_;
          if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
              &pUVar11->_padding_)) {
            pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
            if (pUVar10 == (UObject *)0x0) {
LAB_1475d7d38:
              pUVar10 = (UObject *)0x0;
            }
            else {
              pUVar11 = Z_Construct_UClass_USkeletalMesh_NoRegister();
              iVar9 = (int)pUVar11->_padding_;
              if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8)
                  != &pUVar11->_padding_)) goto LAB_1475d7d38;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            local_30 = pUVar10;
            if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
                ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)*piVar1 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_1->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_1->AllocatorInstance,piVar1);
            }
            this_01 = this_00 + 1;
            param_1->ArrayNum = iVar9 + 1;
            *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_30;
            local_38 = (UObject *)0x0;
            pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
            if (pUVar10 == (UObject *)0x0) {
              pUVar6 = local_38;
              if (this_00[1].ObjectID.AssetPath.PackageName != (FName)0x0) {
                FSoftObjectPath::TryLoad(&this_00[1].ObjectID,(FUObjectSerializeContext *)0x0);
                pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
                goto LAB_1475d7e17;
              }
            }
            else {
LAB_1475d7e17:
              pUVar6 = local_38;
              if (pUVar10 != (UObject *)0x0) {
                pUVar11 = UAnimBlueprint::StaticClass();
                iVar9 = (int)pUVar11->_padding_;
                pUVar6 = local_38;
                if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8)
                    == &pUVar11->_padding_)) {
                  pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
                  if (pUVar10 == (UObject *)0x0) {
LAB_1475d7e7e:
                    pUVar10 = (UObject *)0x0;
                  }
                  else {
                    pUVar11 = UAnimBlueprint::StaticClass();
                    iVar9 = (int)pUVar11->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) +
                         (longlong)iVar9 * 8) != &pUVar11->_padding_)) goto LAB_1475d7e7e;
                  }
                  lVar4 = *(longlong *)&pUVar10[1].field_0x8;
                  pUVar6 = local_38;
                  if ((lVar4 != 0) &&
                     (pUVar11 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 = local_38,
                     pUVar11 != (UClass *)0x0)) {
                    iVar9 = (int)pUVar11->_padding_;
                    if ((*(int *)(lVar4 + 0x38) < iVar9) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 8) !=
                        &pUVar11->_padding_)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    if (((bVar7) &&
                        (pUVar10 = *(UObject **)&pUVar10[1].field_0x8, pUVar10 != (UObject *)0x0))
                       && (pUVar6 = pUVar10, UE::GC::GIsIncrementalReachabilityPending != false)) {
                      UE::GC::MarkAsReachable(pUVar10);
                    }
                  }
                }
              }
            }
            local_38 = pUVar6;
            pFVar3 = (param_2->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
                ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar2 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == *piVar2) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,piVar2);
            }
            param_2->ArrayNum = iVar9 + 1;
            *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_38);
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      local_res8 = local_res8 + 0x50;
    } while ((int)uVar12 < (int)this->_padding_);
  }
  return;
}

// GetPrivateStaticClass @ 1475dbf50

UClass * __cdecl UPreviewMeshCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PreviewMeshCollection",
               &Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton,
               StaticRegisterNativesUPreviewMeshCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPreviewMeshCollection>,
               InternalVTableHelperCtorCaller<UPreviewMeshCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton;
}

// StaticRegisterNativesUPreviewMeshCollection @ 1475fee20

void __cdecl UPreviewMeshCollection::StaticRegisterNativesUPreviewMeshCollection(void)

{
  return;
}

// _getUObject @ 1476058f0

UObject * __thiscall UPreviewMeshCollection::_getUObject(UPreviewMeshCollection *this)

{
  return (UObject *)&this[-1]._padding_;
}

