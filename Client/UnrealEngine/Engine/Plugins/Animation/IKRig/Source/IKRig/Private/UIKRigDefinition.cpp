// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 16

// StaticClass @ 14def56c0

UClass * __cdecl UIKRigDefinition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigDefinition",
               &Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton,
               StaticRegisterNativesUIKRigDefinition,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigDefinition>,
               InternalVTableHelperCtorCaller<UIKRigDefinition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton;
}

// UIKRigDefinition @ 14df19d90

UIKRigDefinition * __thiscall
UIKRigDefinition::UIKRigDefinition(UIKRigDefinition *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Skeleton).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).BoneNames.ArrayNum = 0;
  (this->Skeleton).BoneNames.ArrayMax = 0;
  (this->Skeleton).ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).ParentIndices.ArrayNum = 0;
  (this->Skeleton).ParentIndices.ArrayMax = 0;
  (this->Skeleton).ExcludedBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).ExcludedBones.ArrayNum = 0;
  (this->Skeleton).ExcludedBones.ArrayMax = 0;
  (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CurrentPoseGlobal.ArrayNum = 0;
  (this->Skeleton).CurrentPoseGlobal.ArrayMax = 0;
  (this->Skeleton).CurrentPoseLocal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CurrentPoseLocal.ArrayNum = 0;
  (this->Skeleton).CurrentPoseLocal.ArrayMax = 0;
  (this->Skeleton).RefPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).RefPoseGlobal.ArrayNum = 0;
  (this->Skeleton).RefPoseGlobal.ArrayMax = 0;
  (this->Skeleton).CachedEndOfBranchIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CachedEndOfBranchIndices.ArrayNum = 0;
  (this->Skeleton).CachedEndOfBranchIndices.ArrayMax = 0;
  (this->Goals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Goals).ArrayNum = 0;
  (this->Goals).ArrayMax = 0;
  (this->SolverStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverStack).ArrayNum = 0;
  (this->SolverStack).ArrayMax = 0;
  (this->RetargetDefinition).RootBone.ComparisonIndex = 0;
  (this->RetargetDefinition).RootBone.Number = 0;
  (this->RetargetDefinition).BoneChains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetDefinition).BoneChains.ArrayNum = 0;
  (this->RetargetDefinition).BoneChains.ArrayMax = 0;
  (this->Solvers_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solvers_DEPRECATED).ArrayNum = 0;
  (this->Solvers_DEPRECATED).ArrayMax = 0;
  return this;
}

// UIKRigDefinition @ 14df19e80

UIKRigDefinition * __thiscall
UIKRigDefinition::UIKRigDefinition(UIKRigDefinition *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Skeleton).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).BoneNames.ArrayNum = 0;
  (this->Skeleton).BoneNames.ArrayMax = 0;
  (this->Skeleton).ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).ParentIndices.ArrayNum = 0;
  (this->Skeleton).ParentIndices.ArrayMax = 0;
  (this->Skeleton).ExcludedBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).ExcludedBones.ArrayNum = 0;
  (this->Skeleton).ExcludedBones.ArrayMax = 0;
  (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CurrentPoseGlobal.ArrayNum = 0;
  (this->Skeleton).CurrentPoseGlobal.ArrayMax = 0;
  (this->Skeleton).CurrentPoseLocal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CurrentPoseLocal.ArrayNum = 0;
  (this->Skeleton).CurrentPoseLocal.ArrayMax = 0;
  (this->Skeleton).RefPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).RefPoseGlobal.ArrayNum = 0;
  (this->Skeleton).RefPoseGlobal.ArrayMax = 0;
  (this->Skeleton).CachedEndOfBranchIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CachedEndOfBranchIndices.ArrayNum = 0;
  (this->Skeleton).CachedEndOfBranchIndices.ArrayMax = 0;
  (this->Goals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Goals).ArrayNum = 0;
  (this->Goals).ArrayMax = 0;
  (this->SolverStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverStack).ArrayNum = 0;
  (this->SolverStack).ArrayMax = 0;
  (this->RetargetDefinition).RootBone.ComparisonIndex = 0;
  (this->RetargetDefinition).RootBone.Number = 0;
  (this->RetargetDefinition).BoneChains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetDefinition).BoneChains.ArrayNum = 0;
  (this->RetargetDefinition).BoneChains.ArrayMax = 0;
  (this->Solvers_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solvers_DEPRECATED).ArrayNum = 0;
  (this->Solvers_DEPRECATED).ArrayMax = 0;
  return this;
}

// ~UIKRigDefinition @ 14df1c600

void __thiscall UIKRigDefinition::~UIKRigDefinition(UIKRigDefinition *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->Solvers_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RetargetDefinition).BoneChains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->SolverStack).AllocatorInstance.Data,
             (this->SolverStack).ArrayNum);
  pFVar1 = (this->SolverStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Goals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRigSkeleton::~FIKRigSkeleton(&this->Skeleton);
  pvVar2 = *(void **)&(this->PreviewSkeletalMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPreviewMesh @ 14df3be40

USkeletalMesh * __thiscall UIKRigDefinition::GetPreviewMesh(UIKRigDefinition *this)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkeletalMesh *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 == (USkeletalMesh *)0x0) {
    if (this->_padding_ == 0) {
      return (USkeletalMesh *)0x0;
    }
    FSoftObjectPath::TryLoad((FSoftObjectPath *)&this->_padding_,(FUObjectSerializeContext *)0x0);
    pUVar2 = (USkeletalMesh *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  }
  if (pUVar2 != (USkeletalMesh *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkeletalMesh *)0x0;
}

// GetPrivateStaticClass @ 14df3d080

UClass * __cdecl UIKRigDefinition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigDefinition",
               &Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton,
               StaticRegisterNativesUIKRigDefinition,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigDefinition>,
               InternalVTableHelperCtorCaller<UIKRigDefinition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigDefinition.InnerSingleton;
}

// GetRetargetChainByName @ 14df3e800

FBoneChain * __thiscall
UIKRigDefinition::GetRetargetChainByName(UIKRigDefinition *this,FName param_1)

{
  int iVar1;
  FBoneChain *pFVar2;
  FBoneChain *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RetargetDefinition).BoneChains.ArrayNum;
  pFVar3 = (FBoneChain *)(this->RetargetDefinition).BoneChains.AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->RetargetDefinition).BoneChains.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->ChainName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FBoneChain *)0x0;
}

// GetRetargetChainNames @ 14df3e880

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UIKRigDefinition::GetRetargetChainNames
          (UIKRigDefinition *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar1 = (this->RetargetDefinition).BoneChains.ArrayNum;
  iVar7 = 0;
  pFVar8 = (this->RetargetDefinition).BoneChains.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->RetargetDefinition).BoneChains.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar7 = (int)local_20;
    }
    if (pFVar8 == pFVar9) break;
    iVar5 = iVar7;
    if ((local_28.Data <= pFVar8) && (pFVar8 < local_28.Data + (longlong)local_20._4_4_ * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = (int)local_20;
    }
    if (iVar5 == local_20._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_28,(int *)((longlong)&local_20 + 4));
    }
    iVar7 = iVar5 + 1;
    local_20 = CONCAT44(local_20._4_4_,iVar7);
    uVar2 = *(undefined8 *)pFVar8;
    pFVar8 = pFVar8 + 0x30;
    *(undefined8 *)(local_28.Data + (longlong)iVar5 * 8) = uVar2;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = iVar7;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  return __return_storage_ptr__;
}

// GetSolverStructs @ 14df40490

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
UIKRigDefinition::GetSolverStructs(UIKRigDefinition *this)

{
  return &this->SolverStack;
}

// PostDuplicate @ 14df4c3e0

void __thiscall UIKRigDefinition::PostDuplicate(UIKRigDefinition *this,bool param_1)

{
  return;
}

// PostLoad @ 14df4c760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UIKRigDefinition::PostLoad(UIKRigDefinition *this)

{
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  UScriptStruct *pUVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UPackage *pUVar10;
  UScriptStruct *pUVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  byte bVar14;
  FInstancedStruct *this_00;
  longlong lVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  undefined1 local_res8 [8];
  FName local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_58;
  uchar *local_50;
  FString local_48;
  
  UObject::PostLoad((UObject *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Standalone);
  pFVar13 = (this->Solvers_DEPRECATED).AllocatorInstance.Data;
  iVar19 = 0;
  iVar17 = (this->Solvers_DEPRECATED).ArrayNum;
  pFVar6 = pFVar13 + (longlong)iVar17 * 8;
LAB_14df4c7a0:
  do {
    if ((this->Solvers_DEPRECATED).ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UIKRigSolver>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar6) {
      iVar17 = (this->SolverStack).ArrayNum;
      lVar12 = (longlong)iVar17;
      if (iVar17 != 0) {
        pFVar6 = (this->SolverStack).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar6 + 8) == 0) || (*(longlong *)pFVar6 == 0)) {
          bVar18 = 0;
        }
        else {
          bVar18 = 1;
        }
        lVar15 = 0;
        iVar17 = 0;
        do {
          lVar15 = lVar15 + 1;
          iVar9 = iVar17 + 1;
          if (lVar15 < lVar12) {
            pFVar13 = pFVar6 + lVar15 * 0x10;
            do {
              if ((*(longlong *)(pFVar13 + 8) == 0) || (*(longlong *)pFVar13 == 0)) {
                bVar14 = 0;
              }
              else {
                bVar14 = 1;
              }
              if (bVar18 != bVar14) break;
              iVar9 = iVar9 + 1;
              lVar15 = lVar15 + 1;
              pFVar13 = pFVar13 + 0x10;
            } while (lVar15 < lVar12);
          }
          iVar16 = iVar9 - iVar17;
          if (bVar18 == 0) {
            DestructItems<FInstancedStruct,int>
                      ((FInstancedStruct *)(pFVar6 + (longlong)iVar17 * 0x10),iVar16);
          }
          else {
            if (iVar19 != iVar17) {
              memmove(pFVar6 + (longlong)iVar19 * 0x10,pFVar6 + (longlong)iVar17 * 0x10,
                      (longlong)iVar16 << 4);
            }
            iVar19 = iVar19 + iVar16;
          }
          bVar18 = bVar18 ^ 1;
          iVar17 = iVar9;
        } while (lVar15 < lVar12);
        (this->SolverStack).ArrayNum = iVar19;
      }
      return;
    }
    pUVar3 = *(UObject **)pFVar13;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14df4c7ef;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14df4c7ef:
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_58.ObjectPtr);
      (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3,&local_58);
      if ((local_50 != (uchar *)0x0) && (local_58.DebugPtr != (UScriptStruct *)0x0)) {
        pUVar11 = Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton;
        for (pUVar4 = (UScriptStruct *)(local_58.DebugPtr)->_padding_;
            pUVar4 != (UScriptStruct *)0x0; pUVar4 = (UScriptStruct *)pUVar4->_padding_) {
          if (pUVar11 == (UScriptStruct *)0x0) {
            pUVar10 = Z_Construct_UPackage__Script_IKRig();
            pUVar11 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar10,
                                      L"IKRigSolverBase");
            Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton = pUVar11;
          }
          if (pUVar4 == pUVar11) {
            pTVar2 = &this->SolverStack;
            pTVar5 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar2->AllocatorInstance).Data;
            if (((pTVar5 <= &local_58) &&
                (&local_58 < pTVar5 + (longlong)(this->SolverStack).ArrayMax * 2)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar9 = (this->SolverStack).ArrayNum;
            piVar1 = &(this->SolverStack).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->SolverStack).ArrayNum = iVar9 + 1;
            this_00 = (FInstancedStruct *)
                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
            (this_00->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
            this_00->StructMemory = (uchar *)0x0;
            FInstancedStruct::InitializeAs(this_00,local_58.DebugPtr,local_50);
            FInstancedStruct::Reset((FInstancedStruct *)&local_58.ObjectPtr);
            pFVar13 = pFVar13 + 8;
            goto LAB_14df4c7a0;
          }
        }
      }
      if (2 < (byte)LogTemp._0_1_) {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res10.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res10,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      FInstancedStruct::Reset((FInstancedStruct *)&local_58.ObjectPtr);
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// Serialize @ 14df53cb0

void __thiscall UIKRigDefinition::Serialize(UIKRigDefinition *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014df53cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return;
}

// Serialize @ 14df53ce0

void __thiscall UIKRigDefinition::Serialize(UIKRigDefinition *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FIKRigObjectVersion::GUID);
  return;
}

// SetPreviewMesh @ 14df55850

void __thiscall
UIKRigDefinition::SetPreviewMesh(UIKRigDefinition *this,USkeletalMesh *param_1,bool param_2)

{
  USkeletalMesh *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUIKRigDefinition @ 14df5a100

void __cdecl UIKRigDefinition::StaticRegisterNativesUIKRigDefinition(void)

{
  return;
}

// _getUObject @ 14df62d70

UObject * __thiscall UIKRigDefinition::_getUObject(UIKRigDefinition *this)

{
  return (UObject *)&this[-1].RetargetDefinition;
}

