// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 17

// StaticClass @ 14cff5db0

UClass * __cdecl ULiveLinkAnimationVirtualSubject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton,
               StaticRegisterNativesULiveLinkAnimationVirtualSubject,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationVirtualSubject>,local_res8,
               ULiveLinkVirtualSubject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton;
}

// ULiveLinkAnimationVirtualSubject @ 14d0131b0

ULiveLinkAnimationVirtualSubject * __thiscall
ULiveLinkAnimationVirtualSubject::ULiveLinkAnimationVirtualSubject
          (ULiveLinkAnimationVirtualSubject *this,FVTableHelper *param_1)

{
  ULiveLinkVirtualSubject::ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this,param_1);
  this->LocationBehavior = Combine;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  (this->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attachments).ArrayNum = 0;
  (this->Attachments).ArrayMax = 0;
  *(undefined8 *)&this->ChildBonesInfo = 0;
  *(undefined8 *)&(this->ChildBonesInfo).field_0x8 = 0;
  *(undefined8 *)&(this->ChildBonesInfo).field_0x20 = 0;
  this->RotationBehavior = Combine;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x28 = 0;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x34 = 0;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChildBonesInfo).field_0x40 = 0;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x48 = 0;
  *(undefined8 *)&this->BoneNameToIndex = 0;
  *(undefined8 *)&(this->BoneNameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneNameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x48 = 0;
  this->bSubjectsNeedSorting = false;
  return this;
}

// ULiveLinkAnimationVirtualSubject @ 14d013290

ULiveLinkAnimationVirtualSubject * __thiscall
ULiveLinkAnimationVirtualSubject::ULiveLinkAnimationVirtualSubject
          (ULiveLinkAnimationVirtualSubject *this)

{
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  
  pFVar1 = FObjectInitializer::Get();
  ULiveLinkVirtualSubject::ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this,pFVar1);
  this->LocationBehavior = Combine;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  (this->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attachments).ArrayNum = 0;
  (this->Attachments).ArrayMax = 0;
  *(undefined8 *)&this->ChildBonesInfo = 0;
  *(undefined8 *)&(this->ChildBonesInfo).field_0x8 = 0;
  *(undefined8 *)&(this->ChildBonesInfo).field_0x20 = 0;
  this->RotationBehavior = Combine;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x28 = 0;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x34 = 0;
  *(undefined8 *)&(this->ChildBonesInfo).field_0x40 = 0;
  *(undefined4 *)&(this->ChildBonesInfo).field_0x48 = 0;
  *(undefined8 *)&this->BoneNameToIndex = 0;
  *(undefined8 *)&(this->BoneNameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->BoneNameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x48 = 0;
  this->bSubjectsNeedSorting = false;
  pUVar2 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  this->bInvalidate = true;
  return this;
}

// ~ULiveLinkAnimationVirtualSubject @ 14d016dd0

void __thiscall
ULiveLinkAnimationVirtualSubject::~ULiveLinkAnimationVirtualSubject
          (ULiveLinkAnimationVirtualSubject *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneNameToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameToIndex);
  *(undefined4 *)&(this->ChildBonesInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChildBonesInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildBonesInfo);
  DestructItems<FLiveLinkVirtualSubjectBoneAttachment,int>
            ((FLiveLinkVirtualSubjectBoneAttachment *)(this->Attachments).AllocatorInstance.Data,
             (this->Attachments).ArrayNum);
  pFVar2 = (this->Attachments).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this);
  return;
}

// operator() @ 14d019fa0

TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> * __thiscall
`ULiveLinkAnimationVirtualSubject::SortSubjects'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FLiveLinkSubjectName param_1)

{
  longlong *plVar1;
  FName _Src;
  uint uVar2;
  FName *pFVar3;
  longlong *plVar4;
  FName *pFVar5;
  
  plVar1 = *(longlong **)this;
  uVar2 = ::GetTypeHash(param_1.Name.ComparisonIndex.Value);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    uVar2 = *(uint *)((longlong)plVar4 +
                     (ulonglong)((int)plVar1[9] - 1U & param_1.Name.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar3 = (FName *)((longlong)(int)uVar2 * 0x20 + *plVar1);
        if (*pFVar3 == param_1.Name) {
          (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pFVar5 = pFVar3 + 1;
          if (pFVar3 == (FName *)0x0) {
            pFVar5 = (FName *)0x0;
          }
          if (pFVar5 == (FName *)0x0) goto LAB_14d01a020;
          uVar2 = pFVar5[1].ComparisonIndex.Value;
          _Src = *pFVar5;
          __return_storage_ptr__->ArrayNum = uVar2;
          if (uVar2 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar2,0,&__return_storage_ptr__->AllocatorInstance,uVar2,
                       &__return_storage_ptr__->ArrayMax);
            memcpy((__return_storage_ptr__->AllocatorInstance).Data,(void *)_Src,
                   (longlong)(int)uVar2 << 3);
            return __return_storage_ptr__;
          }
          goto LAB_14d01a023;
        }
        uVar2 = pFVar3[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14d01a020:
  __return_storage_ptr__->ArrayNum = 0;
LAB_14d01a023:
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// AreSubjectsValid @ 14d023880

bool __thiscall
ULiveLinkAnimationVirtualSubject::AreSubjectsValid
          (ULiveLinkAnimationVirtualSubject *this,
          TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  iVar3 = (int)this->_padding_;
  if (iVar3 < 1) {
    return false;
  }
  plVar9 = (longlong *)this->_padding_;
  plVar1 = plVar9 + iVar3;
  do {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<FLiveLinkSubjectName_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar9 == plVar1) {
      return true;
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar2 = pFVar10 + (longlong)param_1->ArrayNum * 0x18;
    while( true ) {
      if (pFVar10 == pFVar2) {
        return false;
      }
      if (*(longlong *)(pFVar10 + 0x10) == *plVar9) break;
      pFVar10 = pFVar10 + 0x18;
    }
    if (pFVar10 == (FScriptContainerElement *)0x0) {
      return false;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0xd8))((longlong *)this->_padding_,local_res18);
    lVar8 = local_res18[0];
    if ((local_res18[0] == 0) ||
       (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), lVar6 = local_res18[0],
       pUVar7 == (UClass *)0x0)) {
      return false;
    }
    iVar4 = (int)pUVar7->_padding_;
    if (*(int *)(lVar8 + 0x38) < iVar4) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar7->_padding_) {
      return false;
    }
    if (local_res18[0] == 0) {
      return false;
    }
    pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar7 == (UClass *)0x0) {
LAB_14d02399f:
      lVar8 = 0;
    }
    else {
      iVar4 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      lVar8 = local_res18[0];
      if (!bVar5) goto LAB_14d02399f;
    }
    pUVar7 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
    lVar6 = local_res18[0];
    if (pUVar7 == (UClass *)0x0) {
LAB_14d0239cf:
      if ((local_res18[0] == 0) ||
         (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14d023a0e:
        lVar8 = 0;
      }
      else {
        iVar4 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        lVar8 = local_res18[0];
        if (!bVar5) goto LAB_14d023a0e;
      }
      pUVar7 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
      if (pUVar7 == (UClass *)0x0) {
        return false;
      }
      iVar4 = (int)pUVar7->_padding_;
      if (*(int *)(lVar8 + 0x38) < iVar4) {
        return false;
      }
      if ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_) {
        return false;
      }
    }
    else {
      iVar4 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14d0239cf;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}

// BuildFrame @ 14d025c10

void __thiscall
ULiveLinkAnimationVirtualSubject::BuildFrame
          (ULiveLinkAnimationVirtualSubject *this,
          TArray<FLiveLinkSubjectFrameData,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *this_00;
  longlong *plVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  FFrameRate FVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this_01;
  FLiveLinkSkeletonStaticData *pFVar16;
  UScriptStruct *pUVar17;
  longlong lVar18;
  UClass *pUVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  int iVar27;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar28;
  float fStackX_c;
  ulonglong local_res18;
  int local_res20 [2];
  uint local_14c;
  FLiveLinkAnimationFrameData *local_148;
  longlong local_140;
  longlong local_138;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FSparseArrayAllocationInfo local_a8;
  FStructOnScope local_98;
  undefined4 local_54;
  
  this_01 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
            (**(code **)(this->_padding_ + 0xb8))(&this->_padding_);
  pFVar16 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                      (this_01);
  pUVar17 = FLiveLinkAnimationFrameData::StaticStruct();
  FStructOnScope::FStructOnScope(&local_98,(UStruct *)pUVar17);
  local_148 = (FLiveLinkAnimationFrameData *)(**(code **)(local_98._padding_ + 0x18))(&local_98);
  lVar18 = (**(code **)(local_98._padding_ + 0x20))(&local_98);
  if (lVar18 != 0) {
    pUVar19 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar21 = (int)pUVar19->_padding_;
    if (((iVar21 <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar21 * 8)
         == &pUVar19->_padding_)) &&
       (pUVar17 = FLiveLinkAnimationFrameData::StaticStruct(), pUVar17 != (UScriptStruct *)0x0)) {
      iVar21 = (int)pUVar17->_padding_;
      if ((*(int *)(lVar18 + 0x38) < iVar21) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar21 * 8) !=
          &pUVar17->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) goto LAB_14d025ce5;
    }
  }
  local_148 = (FLiveLinkAnimationFrameData *)0x0;
LAB_14d025ce5:
  uVar14 = (pFVar16->BoneNames).ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  (local_148->Transforms).ArrayNum = 0;
  if ((local_148->Transforms).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar14,&(local_148->Transforms).AllocatorInstance,0,
               &(local_148->Transforms).ArrayMax);
  }
  this_00 = &local_148->_padding_;
  bVar12 = 1 < (int)local_148->_padding_;
  if (!bVar12) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)local_148->_padding_);
  piVar4 = (int *)((longlong)&local_148->_padding_ + 4);
  *(undefined4 *)&local_148->_padding_ = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,piVar4);
  }
  *(undefined4 *)&local_148->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&local_148->_padding_ + 4) = 0;
  iVar21 = *(int *)((longlong)&local_148->_padding_ + 4);
  *(undefined4 *)&local_148->_padding_ = 0;
  if ((iVar21 < 0) || (0x80 < iVar21)) {
    *(undefined4 *)((longlong)&local_148->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&local_148->_padding_,0);
  }
  if (bVar12) {
    *(undefined4 *)&local_148->_padding_ = 1;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)this_00);
  }
  plVar1 = &local_148->_padding_;
  piVar4 = (int *)((longlong)&local_148->_padding_ + 4);
  *(undefined4 *)&local_148->_padding_ = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)plVar1,0,piVar4);
  }
  if ((param_1->ArrayNum != (int)this->_padding_) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSubjectSnapshots.Num() == Subjects.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkAnimationVirtualSubject.cpp"
                          ,0xfc,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar21 = param_1->ArrayNum;
  local_14c = 0;
  if (0 < iVar21) {
    local_138 = 0;
    local_140 = 0;
    do {
      pTVar28 = &local_148->Transforms;
      uVar22 = ~local_14c >> 0x1f;
      uVar14 = 0;
      if ((int)local_14c < iVar21) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar24 = (param_1->AllocatorInstance).Data + local_140 + 0x28;
      lVar18 = (**(code **)(*(longlong *)pFVar24 + 0x10))(pFVar24);
      if ((lVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("SubjectSnapShotData.FrameData.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkAnimationVirtualSubject.cpp"
                              ,0x101,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar18 = (**(code **)(*(longlong *)pFVar24 + 0x10))(pFVar24);
      lVar20 = (**(code **)(*(longlong *)pFVar24 + 0x20))(pFVar24);
      if (lVar20 != 0) {
        pUVar19 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar21 = (int)pUVar19->_padding_;
        if (((iVar21 <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar21 * 8) ==
             &pUVar19->_padding_)) &&
           (pUVar17 = FLiveLinkAnimationFrameData::StaticStruct(), pUVar17 != (UScriptStruct *)0x0))
        {
          iVar21 = (int)pUVar17->_padding_;
          if ((*(int *)(lVar20 + 0x38) < iVar21) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar21 * 8) !=
              &pUVar17->_padding_)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((bVar12) && (lVar18 != 0)) {
            if ((pTVar28 ==
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(lVar18 + 0xa0)
                ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)this != (void*)&Source",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x96e,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar21 = *(int *)(lVar18 + 0xa8);
            if (iVar21 != 0) {
              iVar13 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x60,0x10,iVar21,&pTVar28->AllocatorInstance,
                                  &(local_148->Transforms).ArrayNum,
                                  &(local_148->Transforms).ArrayMax);
              memcpy((pTVar28->AllocatorInstance).Data + (longlong)iVar13 * 0x60,
                     *(void **)(lVar18 + 0xa0),(longlong)iVar21 * 0x60);
            }
          }
        }
      }
      lVar18 = (**(code **)(*(longlong *)pFVar24 + 0x10))(pFVar24);
      if ((plVar1 == (undefined8 *)(lVar18 + 0x70)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar21 = *(int *)(lVar18 + 0x78);
      if (iVar21 != 0) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar21,(ForAnyElementType *)plVar1,(int *)&local_148->_padding_,
                            (int *)((longlong)&local_148->_padding_ + 4));
        memcpy((void *)(*plVar1 + (longlong)iVar13 * 4),*(void **)(lVar18 + 0x70),
               (longlong)iVar21 << 2);
      }
      lVar18 = (**(code **)(*(longlong *)pFVar24 + 0x10))(pFVar24);
      iVar13 = 0;
      iVar27 = 0;
      uVar14 = 1;
      iVar21 = *(int *)(lVar18 + 0x38);
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar18 + 0x20);
      iVar15 = 0;
      if (iVar21 != 0) {
        pTVar26 = pTVar2;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x30) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x30);
        }
        uVar25 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
        while (uVar25 == 0) {
          iVar13 = iVar13 + 1;
          iVar27 = iVar27 + 0x20;
          iVar15 = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d026104;
          uVar25 = *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        }
        uVar14 = -uVar25 & uVar25;
        uVar3 = (ulonglong)uVar14 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar15 = (int)lVar20 + -1 + iVar27;
        if (iVar21 < iVar15) {
          iVar15 = iVar21;
        }
      }
LAB_14d026104:
      uVar25 = *(uint *)(lVar18 + 0x38);
      uVar23 = uVar25 & 0xffffffe0;
      TStack_d0._padding_ = CONCAT44(uVar14,iVar13);
      TStack_d0.CurrentBitIndex = iVar15;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar25 >> 5;
      TStack_d0._28_4_ = local_54;
      TStack_d0.BaseBitIndex = iVar27;
      uStack_b0 = CONCAT44(uStack_dc,*(int *)(lVar18 + 0x18) - *(int *)(lVar18 + 0x44));
      TStack_d0.Array = pTVar2;
      if ((((int)uVar25 < 0) || (iVar21 < (int)uVar25)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar14 = *(uint *)(lVar18 + 0x38);
      if (uVar25 != uVar14) {
        pTVar26 = pTVar2;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x30) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x30);
        }
        uVar25 = -1 << ((byte)uVar25 & 0x1f) &
                 *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar25 == 0) {
          iVar13 = iVar13 + 1;
          uVar23 = uVar23 + 0x20;
          uVar25 = uVar14;
          if ((int)(((int)(uVar14 - 1) >> 0x1f & 0x1fU) + (uVar14 - 1)) >> 5 < iVar13)
          goto LAB_14d026210;
          uVar25 = *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        }
        uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar25 = (int)lVar20 + -1 + uVar23;
        if ((int)uVar14 < (int)uVar25) {
          uVar25 = uVar14;
        }
      }
LAB_14d026210:
      while( true ) {
        if (*(int *)(lVar18 + 0x18) - *(int *)(lVar18 + 0x44) != (int)uStack_b0) {
          local_res18 = local_res18 & 0xffffffffffffff00;
          `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res18);
        }
        lVar20 = (longlong)TStack_d0.CurrentBitIndex;
        if ((TStack_d0.CurrentBitIndex == uVar25) && (TStack_d0.Array == pTVar2)) break;
        lVar5 = *(longlong *)(lVar18 + 0x10);
        uVar14 = 0;
        if ((int)local_14c < (int)this->_padding_) {
          uVar14 = uVar22;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar21 = *(int *)((longlong)&local_148->_padding_ + 4);
        lVar6 = this->_padding_;
        if (iVar21 == 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,1,(ForAnyElementType *)this_00,(int *)&local_148->_padding_,
                              (int *)((longlong)&local_148->_padding_ + 4));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&local_148->_padding_,false);
        }
        else {
          iVar13 = (int)local_148->_padding_;
          lVar7 = *this_00;
          iVar27 = *(int *)((longlong)iVar13 * 0x20 + 4 + lVar7);
          iVar21 = iVar21 + -1;
          *(int *)&local_148->_padding_ = iVar27;
          *(int *)((longlong)&local_148->_padding_ + 4) = iVar21;
          if (iVar21 != 0) {
            *(undefined4 *)((longlong)iVar27 * 0x20 + lVar7) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,&local_a8,iVar13);
        pvVar11 = local_a8.Pointer;
        if (local_a8.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
          *(undefined8 *)local_a8.Pointer = *(undefined8 *)(lVar6 + (longlong)(int)local_14c * 8);
          ::FString::FString((FString *)((longlong)local_a8.Pointer + 8),
                             (FString *)(lVar20 * 0x20 + lVar5 + 8));
          *(undefined4 *)((longlong)pvVar11 + 0x18) = 0xffffffff;
        }
        uVar8 = *(undefined8 *)pvVar11;
        local_res20[0] = local_a8.Index;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar8);
        uVar14 = (int)((ulonglong)uVar8 >> 0x20) + uVar14;
        bVar12 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 ::TryReplaceExisting
                           ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                             *)this_00,uVar14,pvVar11,local_res20,(bool *)0x0);
        if (!bVar12) {
          TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                          *)this_00,uVar14,pvVar11,local_res20[0]);
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
      uVar14 = 0;
      if ((int)local_14c < (int)this->_padding_) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (this->_padding_ == *(longlong *)(local_138 + this->_padding_)) {
        lVar20 = (**(code **)(*(longlong *)pFVar24 + 0x10))();
        lVar18 = *(longlong *)(lVar20 + 0x68);
        local_148->_padding_ = *(longlong *)(lVar20 + 0x60);
        local_148->_padding_ = lVar18;
      }
      local_138 = local_138 + 8;
      local_14c = local_14c + 1;
      local_140 = local_140 + 0x50;
      iVar21 = param_1->ArrayNum;
    } while ((int)local_14c < iVar21);
  }
  local_res18 = 0;
  lVar18 = local_148->_padding_;
  if ((((int)lVar18 == 0) && (fStackX_c = (float)((ulonglong)lVar18 >> 0x20), fStackX_c == 0.0)) &&
     (FApp::CurrentFrameTime.bIsSet != (bool)(char)lVar18)) {
    FVar10 = FApp::CurrentFrameTime.TypedValue.Rate;
    local_148->_padding_ = (longlong)FApp::CurrentFrameTime.TypedValue.Time;
    local_148->_padding_ = (longlong)FVar10;
  }
  ProcessAttachmentsForFrameData(this,local_148);
  ULiveLinkVirtualSubject::UpdateFrameDataSnapshot
            ((ULiveLinkVirtualSubject *)this,
             (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_98);
  FStructOnScope::~FStructOnScope(&local_98);
  return;
}

// BuildSkeleton @ 14d026a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULiveLinkAnimationVirtualSubject::BuildSkeleton
          (ULiveLinkAnimationVirtualSubject *this,
          TArray<FLiveLinkSubjectFrameData,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  UScriptStruct *pUVar12;
  longlong lVar13;
  UClass *pUVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  ForAnyElementType *pFVar18;
  byte bVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  FName FVar22;
  FName FVar23;
  FName FVar24;
  FName FVar25;
  FNameEntryId FVar26;
  FName FVar27;
  FNameEntryId FVar28;
  uint uVar29;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8 [8];
  ForAnyElementType local_1f0;
  int local_1e8 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_1e0;
  longlong local_1d0;
  ForAnyElementType *local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b0;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  TArray<int,TSizedDefaultAllocator<32>_> local_188;
  int local_178;
  int local_174;
  undefined1 local_170 [16];
  TArray<FLiveLinkSubjectFrameData,TSizedDefaultAllocator<32>_> *local_160;
  TTuple<FName,FName> local_158;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FStructOnScope local_e8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_160 = param_1;
  bVar8 = ULiveLinkVirtualSubject::HasValidStaticData((ULiveLinkVirtualSubject *)this);
  if ((bVar8) && (this->bInvalidate == false)) {
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    ProcessAttachmentsForStaticData(this,&local_188);
    if (local_188.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_188.AllocatorInstance.Data);
    return;
  }
  TSet<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>,TDefaultMapHashableKeyFuncs<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>,TDefaultMapHashableKeyFuncs<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,0>,FDefaultSetAllocator>
           *)&this->ChildBonesInfo);
  TSet<TTuple<TTuple<FName,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>,FDefaultSetAllocator>
           *)&this->BoneNameToIndex);
  pUVar12 = FLiveLinkSkeletonStaticData::StaticStruct();
  FStructOnScope::FStructOnScope(&local_e8,(UStruct *)pUVar12);
  local_1c8 = (ForAnyElementType *)(**(code **)(local_e8._padding_ + 0x18))(&local_e8);
  lVar13 = (**(code **)(local_e8._padding_ + 0x20))(&local_e8);
  FVar22.ComparisonIndex.Value = 0;
  FVar22.Number = 0;
  if (lVar13 != 0) {
    pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar20 = (int)pUVar14->_padding_;
    if (((iVar20 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar20 * 8)
         == &pUVar14->_padding_)) &&
       (pUVar12 = FLiveLinkSkeletonStaticData::StaticStruct(), pUVar12 != (UScriptStruct *)0x0)) {
      iVar20 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar13 + 0x38) < iVar20) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar20 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) goto LAB_14d026b8a;
    }
  }
  local_1c8 = (ForAnyElementType *)0x0;
LAB_14d026b8a:
  if ((param_1->ArrayNum != (int)this->_padding_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSubjectSnapshots.Num() == Subjects.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkAnimationVirtualSubject.cpp"
                         ,0xb9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar20 = param_1->ArrayNum;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  uVar9 = 0;
  if (0 < iVar20) {
    local_1d0 = 0;
    local_190 = 0;
    FVar23 = FVar22;
    do {
      lVar15 = local_190;
      lVar13 = local_1d0;
      FVar28 = FVar23.ComparisonIndex.Value;
      FVar25.ComparisonIndex.Value = ~FVar28.Value >> 0x1f;
      FVar24.ComparisonIndex.Value = 0;
      if ((int)FVar28.Value < iVar20) {
        FVar24.ComparisonIndex.Value = FVar25.ComparisonIndex.Value;
      }
      if ((FVar24.ComparisonIndex.Value == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar21 = (param_1->AllocatorInstance).Data + lVar15;
      local_170._8_8_ = pFVar21;
      lVar15 = (**(code **)(*(longlong *)pFVar21 + 0x10))(pFVar21);
      if ((lVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SubjectSnapShotData.StaticData.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkAnimationVirtualSubject.cpp"
                             ,0xc5,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = (**(code **)(*(longlong *)pFVar21 + 0x10))(pFVar21);
      lVar16 = (**(code **)(*(longlong *)pFVar21 + 0x20))(pFVar21);
      if (lVar16 != 0) {
        pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar20 = (int)pUVar14->_padding_;
        if (((iVar20 <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar20 * 8) ==
             &pUVar14->_padding_)) &&
           (pUVar12 = FLiveLinkSkeletonStaticData::StaticStruct(), pUVar12 != (UScriptStruct *)0x0))
        {
          iVar20 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar16 + 0x38) < iVar20) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar20 * 8) !=
              &pUVar12->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((bVar8) && (lVar15 != 0)) {
            if (this->bAppendSubjectNameToBones == false) {
              local_1a0 = 0;
              FVar23 = FVar22;
            }
            else {
              FVar24.ComparisonIndex.Value = uVar9;
              if ((int)FVar28.Value < (int)this->_padding_) {
                FVar24.ComparisonIndex.Value = FVar25.ComparisonIndex.Value;
              }
              if ((FVar24.ComparisonIndex.Value == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar23 = *(FName *)(local_1d0 + this->_padding_);
            }
            lVar16 = local_1d0;
            LiveLinkAnimationVirtualSubjectUtils::AddToBoneNames
                      (&local_1e0,(TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x10),
                       FVar23,(TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                               *)local_98);
            LiveLinkAnimationVirtualSubjectUtils::AddToBoneParents
                      (&local_1b0,(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x20));
            lVar13 = local_1d0;
            if (0 < local_1e0.ArrayNum) {
              local_198 = 0;
              FVar27 = FVar22;
              do {
                lVar13 = local_198;
                FVar24.ComparisonIndex.Value = uVar9;
                if ((int)FVar28.Value < (int)this->_padding_) {
                  FVar24.ComparisonIndex.Value = FVar25.ComparisonIndex.Value;
                }
                iVar20 = local_1e0.ArrayNum;
                if (FVar24.ComparisonIndex.Value == 0) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar8) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar20 = local_1e0.ArrayNum;
                }
                lVar15 = this->_padding_;
                FVar26 = FVar27.ComparisonIndex.Value;
                FVar24.ComparisonIndex.Value = uVar9;
                if ((int)FVar26.Value < iVar20) {
                  FVar24.ComparisonIndex.Value = ~FVar26.Value >> 0x1f;
                }
                if ((FVar24.ComparisonIndex.Value == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_170._0_8_ = *(undefined8 *)(lVar16 + lVar15);
                local_158._8_8_ = *(undefined8 *)(local_1e0.AllocatorInstance.Data + lVar13);
                local_158._0_8_ = local_170._0_8_;
                FVar24.ComparisonIndex.Value = ::GetTypeHash((FNameEntryId)(uint)local_170._0_8_);
                uVar4 = local_158._8_8_;
                FVar24.ComparisonIndex.Value = local_170._4_4_ + FVar24.ComparisonIndex.Value;
                uVar10 = ::GetTypeHash((FNameEntryId)local_158._8_4_);
                puVar17 = (uint *)TMapBase<TTuple<FName,FName>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>_>
                                  ::FindOrAddImpl<TTuple<FName,FName>_>
                                            ((TMapBase<TTuple<FName,FName>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,int,0>_>
                                              *)&this->BoneNameToIndex,
                                             FVar24.ComparisonIndex.Value * 0x40 +
                                             (FVar24.ComparisonIndex.Value >> 2) +
                                             uVar10 + SUB84(uVar4,4) + -0x61c88647 ^
                                             FVar24.ComparisonIndex.Value,&local_158);
                local_198 = local_198 + 8;
                *puVar17 = FVar26.Value;
                FVar27.ComparisonIndex.Value = FVar26.Value + 1;
                FVar27.Number = 0;
                lVar16 = local_1d0;
                lVar13 = local_1d0;
              } while ((int)FVar27.ComparisonIndex.Value < local_1e0.ArrayNum);
            }
          }
        }
      }
      pFVar18 = (ForAnyElementType *)(**(code **)(*(longlong *)local_170._8_8_ + 0x10))();
      if ((&local_1f0 == pFVar18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar20 = *(int *)&pFVar18[1].Data;
      if (iVar20 != 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,iVar20,&local_1f0,local_1e8,local_1e8 + 1);
        memcpy(local_1f0.Data + (longlong)iVar11 * 8,pFVar18->Data,(longlong)iVar20 << 3);
      }
      local_1d0 = lVar13 + 8;
      local_190 = local_190 + 0x50;
      FVar23.ComparisonIndex.Value = FVar28.Value + 1;
      FVar23.Number = 0;
      iVar20 = local_160->ArrayNum;
      param_1 = local_160;
    } while ((int)FVar23.ComparisonIndex.Value < iVar20);
  }
  ProcessAttachmentsForStaticData(this,&local_1b0);
  uVar10 = local_70;
  uStack_13c = 1;
  uStack_12c = uVar9;
  FVar24.ComparisonIndex.Value = uVar9;
  FVar25.ComparisonIndex.Value = uVar9;
  if (local_70 != 0) {
    puVar17 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar17 = local_78;
    }
    uVar29 = *puVar17;
    FVar23 = FVar22;
    FVar24.ComparisonIndex.Value = 0;
    FVar25.ComparisonIndex.Value = 0;
    while (uVar29 == 0) {
      FVar24.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value + 1;
      FVar24.Number = 0;
      FVar25.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value + 0x20;
      FVar25.Number = 0;
      uStack_12c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
          (int)FVar24.ComparisonIndex.Value) goto LAB_14d02706f;
      FVar22 = FVar24;
      FVar23 = FVar25;
      uVar29 = puVar17[(int)FVar24.ComparisonIndex.Value];
    }
    uStack_13c = -uVar29 & uVar29;
    uVar3 = (ulonglong)uStack_13c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_178 = (int)lVar13;
    uStack_12c = local_178 + -1 + FVar25.ComparisonIndex.Value;
    if ((int)local_70 < (int)uStack_12c) {
      uStack_12c = local_70;
    }
  }
LAB_14d02706f:
  local_148 = (longlong *)local_98;
  uStack_124 = local_a4;
  local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar29 = local_70 & 0xffffffe0;
  iStack_120 = local_98._8_4_ - local_64;
  uStack_130 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_12c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_13c,FVar24.ComparisonIndex.Value);
  iVar20 = (int)local_70 >> 5;
  TStack_110._28_4_ = local_a4;
  TStack_110.BaseBitIndex = FVar25.ComparisonIndex.Value;
  uStack_f0 = CONCAT44(uStack_11c,iStack_120);
  bVar19 = (byte)local_70;
  uStack_140 = FVar24.ComparisonIndex.Value;
  local_128 = FVar25.ComparisonIndex.Value;
  local_118 = local_148;
  TStack_110.Array = local_138;
  if (((int)local_70 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar10 != local_70) {
    puVar17 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar17 = local_78;
    }
    FVar24.ComparisonIndex.Value = -1 << (bVar19 & 0x1f) & puVar17[iVar20];
    while (FVar24.ComparisonIndex.Value == 0) {
      iVar20 = iVar20 + 1;
      uVar29 = uVar29 + 0x20;
      uVar10 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar20)
      goto LAB_14d027191;
      FVar24.ComparisonIndex.Value = puVar17[iVar20];
    }
    uVar3 = (ulonglong)(-FVar24.ComparisonIndex.Value & FVar24.ComparisonIndex.Value) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_174 = (int)lVar13;
    uVar10 = local_174 + -1 + uVar29;
    if ((int)local_70 < (int)uVar10) {
      uVar10 = local_70;
    }
  }
LAB_14d027191:
  while( true ) {
    plVar7 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      local_1f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    FVar6.Data = local_1e0.AllocatorInstance.Data;
    iVar20 = local_1e0.ArrayNum;
    if (((TStack_110.CurrentBitIndex == uVar10) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar7 == (longlong *)local_98)) {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(local_1c8 + 2);
      if (pTVar1 != &local_1e0) {
        lVar13 = (longlong)local_1e0.ArrayNum;
        piVar2 = (int *)((longlong)&local_1c8[3].Data + 4);
        iVar11 = *piVar2;
        *(int *)&local_1c8[3].Data = local_1e0.ArrayNum;
        if ((local_1e0.ArrayNum == 0) && (iVar11 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_1e0.ArrayNum,iVar11,(ForAnyElementType *)pTVar1,local_1e0.ArrayNum,
                     piVar2);
          if (iVar20 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,FVar6.Data,lVar13 << 3);
          }
        }
      }
      FVar6.Data = local_1b0.AllocatorInstance.Data;
      pFVar18 = local_1c8;
      lVar13 = (longlong)local_1b0.ArrayNum;
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = local_1b0.ArrayNum;
      if (local_1b0.ArrayNum == 0) {
        local_1c0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1b0.ArrayNum,0,&local_1c0.AllocatorInstance,local_1b0.ArrayNum,
                   &local_1c0.ArrayMax);
        memcpy(local_1c0.AllocatorInstance.Data,FVar6.Data,lVar13 << 2);
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar18 + 4),&local_1c0);
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
      if (pFVar18 != &local_1f0) {
        if (pFVar18->Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18->Data);
        }
        pFVar18->Data = local_1f0.Data;
        local_1f0.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar18[1].Data = local_1e8[0];
        *(int *)((longlong)&pFVar18[1].Data + 4) = local_1e8[1];
        local_1e8[0] = 0;
        local_1e8[1] = 0;
      }
      ULiveLinkVirtualSubject::UpdateStaticDataSnapshot
                ((ULiveLinkVirtualSubject *)this,
                 (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_e8);
      this->bInvalidate = false;
      (**(code **)(this->_padding_ + 0x2d8))(this);
      if (local_1f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      FStructOnScope::~FStructOnScope(&local_e8);
      return;
    }
    lVar13 = *plVar7;
    FVar24.ComparisonIndex.Value = *(uint *)(lVar13 + (longlong)TStack_110.CurrentBitIndex * 0x14);
    uVar4 = *(undefined8 *)(lVar13 + 4 + (longlong)TStack_110.CurrentBitIndex * 0x14);
    FVar25.ComparisonIndex.Value = uVar9;
    if ((int)FVar24.ComparisonIndex.Value < local_1e0.ArrayNum) {
      FVar25.ComparisonIndex.Value = ~FVar24.ComparisonIndex.Value >> 0x1f;
    }
    if ((FVar25.ComparisonIndex.Value == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    *(undefined8 *)
     (local_1e0.AllocatorInstance.Data + (longlong)(int)FVar24.ComparisonIndex.Value * 8) = uVar4;
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// BuildSubjectSnapshot @ 14d027d10

bool __thiscall
ULiveLinkAnimationVirtualSubject::BuildSubjectSnapshot
          (ULiveLinkAnimationVirtualSubject *this,
          TArray<FLiveLinkSubjectFrameData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FLiveLinkSubjectFrameData *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  undefined8 *puVar14;
  FScriptContainerElement *local_res8 [2];
  uint local_res18;
  UObject *local_res20;
  UObject *local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  
  uVar2 = (uint)this->_padding_;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  pFVar3 = (FLiveLinkSubjectFrameData *)(param_1->AllocatorInstance).Data;
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    DestructItems<FLiveLinkSubjectFrameData,int>(pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar2,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLiveLinkSubjectFrameData,int>(pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  local_res18 = (uint)this->_padding_;
  uVar11 = (ulonglong)(int)local_res18;
  puVar14 = (undefined8 *)this->_padding_;
  local_50 = puVar14 + uVar11;
  do {
    puVar10 = local_50;
    if ((int)this->_padding_ != (int)uVar11) {
      `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar14 == puVar10) {
      return true;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    local_res8[0] = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x50;
    DefaultConstructItems<FLiveLinkSubjectFrameData,int>(local_res8[0],1);
    (**(code **)(*(longlong *)this->_padding_ + 0xd0))
              ((longlong *)this->_padding_,&local_res20,*puVar14);
    pUVar12 = local_res20;
    if ((local_res20 == (UObject *)0x0) ||
       (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar13 = local_res20,
       pUVar9 == (UClass *)0x0)) {
LAB_14d027f0c:
      puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_48);
      pUVar13 = (UObject *)*puVar10;
LAB_14d027f1f:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
    }
    else {
      iVar8 = (int)pUVar9->_padding_;
      if ((*(int *)&pUVar12[1].field_0x10 < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((!bVar6) || (local_res20 == (UObject *)0x0)) goto LAB_14d027f0c;
      pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      if (pUVar9 == (UClass *)0x0) {
LAB_14d027ebc:
        pUVar12 = (UObject *)0x0;
      }
      else {
        iVar8 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar13[1].field_0x10 < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar8 * 8)
            != &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pUVar12 = local_res20;
        if (!bVar6) goto LAB_14d027ebc;
      }
      pUVar9 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
      pUVar13 = local_res20;
      if (pUVar9 == (UClass *)0x0) goto LAB_14d027f0c;
      iVar8 = (int)pUVar9->_padding_;
      if ((*(int *)&pUVar12[1].field_0x10 < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14d027f0c;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res20 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_res20);
        }
        goto LAB_14d027f1f;
      }
    }
    plVar4 = (longlong *)this->_padding_;
    pcVar5 = *(code **)(*plVar4 + 0x198);
    local_58 = pUVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    cVar7 = (*pcVar5)(plVar4,*puVar14,&local_58,local_res8[0]);
    if (cVar7 == '\0') {
      return false;
    }
    uVar11 = (ulonglong)local_res18;
    puVar14 = puVar14 + 1;
  } while( true );
}

// DoesSkeletonNeedRebuilding @ 14d03a8f0

bool __thiscall
ULiveLinkAnimationVirtualSubject::DoesSkeletonNeedRebuilding(ULiveLinkAnimationVirtualSubject *this)

{
  bool bVar1;
  
  bVar1 = ULiveLinkVirtualSubject::HasValidStaticData((ULiveLinkVirtualSubject *)this);
  if ((bVar1) && (this->bInvalidate == false)) {
    return false;
  }
  return true;
}

// GetPrivateStaticClass @ 14d051e30

UClass * __cdecl ULiveLinkAnimationVirtualSubject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton,
               StaticRegisterNativesULiveLinkAnimationVirtualSubject,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationVirtualSubject>,local_res8,
               ULiveLinkVirtualSubject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton;
}

// PostSkeletonRebuild @ 14d06ccc0

void __thiscall
ULiveLinkAnimationVirtualSubject::PostSkeletonRebuild(ULiveLinkAnimationVirtualSubject *this)

{
  return;
}

// ProcessAttachmentsForFrameData @ 14d06fbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULiveLinkAnimationVirtualSubject::ProcessAttachmentsForFrameData
          (ULiveLinkAnimationVirtualSubject *this,FLiveLinkAnimationFrameData *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  uint uVar5;
  EBoneTransformResolution EVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  TMap<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,0>_>
  *pTVar18;
  __m128d _Var19;
  __m128d _Var20;
  bool bVar21;
  longlong lVar22;
  uint *puVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong local_2c0;
  undefined1 local_2b8 [4];
  int local_2b4;
  int local_2b0;
  TMap<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,0>_>
  *local_2a8;
  undefined1 auStack_2a0 [20];
  uint uStack_28c;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined1 local_260 [16];
  double local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  double local_220;
  undefined4 local_1fc;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  _Var19.m128d_f64 = local_1f8.Translation.XY.m128d_f64;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  puVar1 = &(this->ChildBonesInfo).field_0x10;
  local_1f8.Rotation.XY.m128d_f64[1]._0_4_ = 0;
  iVar4 = *(int *)&(this->ChildBonesInfo).field_0x28;
  local_2a8 = &this->ChildBonesInfo;
  iVar28 = 0;
  local_1f8.Rotation.XY.m128d_f64[1]._4_4_ = 1;
  local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ = 0;
  if (iVar4 != 0) {
    puVar23 = *(uint **)&(this->ChildBonesInfo).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar26 = *puVar23;
    while (uVar26 == 0) {
      lVar22 = (longlong)local_1f8.Rotation.XY.m128d_f64[1]._0_4_;
      iVar28 = iVar28 + 0x20;
      local_1f8.Rotation.XY.m128d_f64[1]._0_4_ = local_1f8.Rotation.XY.m128d_f64[1]._0_4_ + 1;
      local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <
          local_1f8.Rotation.XY.m128d_f64[1]._0_4_) goto LAB_14d06fc9e;
      uVar26 = puVar23[lVar22 + 1];
    }
    local_1f8.Rotation.XY.m128d_f64[1]._4_4_ = -uVar26 & uVar26;
    uVar2 = (ulonglong)local_1f8.Rotation.XY.m128d_f64[1]._4_4_ * 2 + 1;
    lVar22 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_2b4 = (int)lVar22;
    local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ = iVar28 + -1 + local_2b4;
    if (iVar4 < local_1f8.Rotation.ZW.m128d_f64[1]._4_4_) {
      local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ = iVar4;
    }
  }
LAB_14d06fc9e:
  uVar26 = *(uint *)&(this->ChildBonesInfo).field_0x28;
  auVar17._4_8_ = local_1f8.Translation.XY.m128d_f64[1];
  auVar17._0_4_ = local_1fc;
  local_1f8.Translation.XY.m128d_f64[0] = (double)(auVar17._0_8_ << 0x20);
  uVar24 = uVar26 & 0xffffffe0;
  local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ = 0xffffffff;
  local_1f8.Rotation.XY.m128d_f64[0] = (double)local_2a8;
  local_1f8.Translation.XY.m128d_f64[1]._4_4_ = _Var19.m128d_f64[1]._4_4_;
  local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
       *(int *)&(this->ChildBonesInfo).field_0x8 - *(int *)&(this->ChildBonesInfo).field_0x34;
  _Var19.m128d_f64 = local_1f8.Translation.XY.m128d_f64;
  local_1f8.Rotation.ZW.m128d_f64[0] = (double)puVar1;
  local_1f8.Translation.XY.m128d_f64[0]._0_4_ = iVar28;
  _Var20.m128d_f64 = local_1f8.Translation.XY.m128d_f64;
  auStack_2a0._0_8_ = local_1f8.Rotation.XY.m128d_f64[1];
  iVar28 = (int)uVar26 >> 5;
  local_1f8.Translation.XY.m128d_f64[1] = _Var19.m128d_f64[1];
  stack0xfffffffffffffd70 = local_1f8.Rotation.ZW.m128d_f64[1];
  local_288 = local_1f8.Translation.XY.m128d_f64[0];
  dStack_280 = local_1f8.Translation.XY.m128d_f64[1];
  auStack_2a0._8_8_ = puVar1;
  local_1f8.Translation.XY.m128d_f64 = _Var20.m128d_f64;
  if ((((int)uVar26 < 0) || (iVar4 < (int)uVar26)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->ChildBonesInfo).field_0x28;
  if (uVar26 != uVar5) {
    puVar27 = *(undefined1 **)&(this->ChildBonesInfo).field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = puVar1;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar28 * 4);
    while (uVar26 == 0) {
      lVar22 = (longlong)iVar28;
      uVar24 = uVar24 + 0x20;
      iVar28 = iVar28 + 1;
      uVar26 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_14d06fe00;
      uVar26 = *(uint *)(puVar27 + lVar22 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_2b0 = (int)lVar22;
    uVar26 = (uVar24 - 1) + local_2b0;
    if ((int)uVar5 < (int)uVar26) {
      uVar26 = uVar5;
    }
  }
LAB_14d06fe00:
  do {
    pTVar18 = local_2a8;
    if (*(int *)&local_2a8->field_0x8 - *(int *)&local_2a8->field_0x34 != dStack_280._0_4_) {
      local_2b8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    if (((uStack_28c == uVar26) && ((undefined1 *)auStack_2a0._8_8_ == puVar1)) &&
       (pTVar18 == &this->ChildBonesInfo)) {
      return;
    }
    iVar4 = (param_1->Transforms).ArrayNum;
    puVar23 = (uint *)(*(longlong *)pTVar18 + (longlong)(int)uStack_28c * 0x90);
    local_138.Rotation.XY.m128d_f64[0] = *(double *)(puVar23 + 8);
    local_138.Rotation.XY.m128d_f64[1] = *(double *)(puVar23 + 10);
    uVar24 = puVar23[4];
    local_138.Rotation.ZW.m128d_f64[0] = *(double *)(puVar23 + 0xc);
    local_138.Rotation.ZW.m128d_f64[1] = *(double *)(puVar23 + 0xe);
    local_138.Translation.XY.m128d_f64[0] = *(double *)(puVar23 + 0x10);
    local_138.Translation.XY.m128d_f64[1] = *(double *)(puVar23 + 0x12);
    local_138.Translation.ZW.m128d_f64[0] = *(double *)(puVar23 + 0x14);
    local_138.Translation.ZW.m128d_f64[1] = *(double *)(puVar23 + 0x16);
    uVar5 = 0;
    if ((int)uVar24 < iVar4) {
      uVar5 = ~uVar24 >> 0x1f;
    }
    local_138.Scale3D.XY.m128d_f64[0] = *(double *)(puVar23 + 0x18);
    local_138.Scale3D.XY.m128d_f64[1] = *(double *)(puVar23 + 0x1a);
    local_138.Scale3D.ZW.m128d_f64[0] = *(double *)(puVar23 + 0x1c);
    local_138.Scale3D.ZW.m128d_f64[1] = *(double *)(puVar23 + 0x1e);
    if ((uVar5 == 0) &&
       (local_2c8 = (longlong)(int)uVar24, local_2c0 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar5 = *puVar23;
    iVar4 = (param_1->Transforms).ArrayNum;
    pFVar25 = (param_1->Transforms).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x60;
    uVar24 = 0;
    if ((int)uVar5 < iVar4) {
      uVar24 = ~uVar5 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (local_2c8 = (longlong)(int)uVar5, local_2c0 = (longlong)iVar4,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EVar6 = this->LocationBehavior;
    pFVar7 = (param_1->Transforms).AllocatorInstance.Data;
    uVar46 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar47 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    lVar22 = (longlong)(int)uVar5 * 0x60;
    local_198.Rotation.XY.m128d_f64[1]._0_4_ = uVar46;
    local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_198.Rotation.XY.m128d_f64[1]._4_4_ = uVar47;
    uVar48 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar49 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_198.Rotation.ZW.m128d_f64[1]._0_4_ = uVar48;
    local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_198.Rotation.ZW.m128d_f64[1]._4_4_ = uVar49;
    uVar50 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    uVar51 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_198.Translation.XY.m128d_f64[1]._0_4_ = uVar50;
    local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_198.Translation.XY.m128d_f64[1]._4_4_ = uVar51;
    uVar52 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    uVar53 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_198.Translation.ZW.m128d_f64[1]._0_4_ = uVar52;
    local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_198.Translation.ZW.m128d_f64[1]._4_4_ = uVar53;
    uVar54 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar55 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_198.Scale3D.XY.m128d_f64[1]._0_4_ = uVar54;
    local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_198.Scale3D.XY.m128d_f64[1]._4_4_ = uVar55;
    local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    if (EVar6 == KeepParent) {
      local_198.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar25 + 0x20);
      local_198.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar25 + 0x24);
      local_198.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar25 + 0x28);
      local_198.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar25 + 0x2c);
      local_198.Translation.ZW.m128d_f64[0] = *(double *)(pFVar25 + 0x30);
      local_230 = local_198.Translation.XY.m128d_f64[0]._0_4_;
      uStack_22c = local_198.Translation.XY.m128d_f64[0]._4_4_;
      uStack_228 = local_198.Translation.XY.m128d_f64[1]._0_4_;
      uStack_224 = local_198.Translation.XY.m128d_f64[1]._4_4_;
      local_220 = local_198.Translation.ZW.m128d_f64[0];
LAB_14d070109:
      local_198.Translation.ZW.m128d_f64[1] = 0.0;
    }
    else {
      if (EVar6 == KeepChild) {
        pFVar3 = pFVar7 + lVar22 + 0x20;
        local_198.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)pFVar3;
        local_198.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar3 + 4);
        local_198.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar3 + 8);
        local_198.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar3 + 0xc);
        local_198.Translation.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar22 + 0x30);
        local_248 = local_198.Translation.XY.m128d_f64[0]._0_4_;
        uStack_244 = local_198.Translation.XY.m128d_f64[0]._4_4_;
        uStack_240 = local_198.Translation.XY.m128d_f64[1]._0_4_;
        uStack_23c = local_198.Translation.XY.m128d_f64[1]._4_4_;
        local_238 = local_198.Translation.ZW.m128d_f64[0];
        goto LAB_14d070109;
      }
      if (EVar6 == Combine) {
        auVar31 = *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x10);
        local_268 = *(double *)(pFVar25 + 0x30);
        local_278 = *(double *)(pFVar25 + 0x20);
        dStack_270 = *(double *)(pFVar25 + 0x28);
        dVar11 = local_268 * *(double *)(pFVar7 + lVar22 + 0x50);
        dVar12 = *(double *)(pFVar7 + lVar22 + 0x50 + 8) * 0.0;
        auVar35 = *(undefined1 (*) [16])(pFVar7 + lVar22);
        dVar15 = *(double *)(pFVar7 + lVar22 + 0x18);
        auVar29 = *(undefined1 (*) [16])(pFVar7 + lVar22);
        auVar34 = blendpd(auVar29,auVar31,2);
        dVar13 = local_278 * *(double *)(pFVar7 + lVar22 + 0x40);
        dVar14 = dStack_270 * *(double *)(pFVar7 + lVar22 + 0x40 + 8);
        uVar41 = (undefined4)((ulonglong)dVar14 >> 0x20);
        auVar43._8_4_ = SUB84(dVar14,0);
        auVar43._0_8_ = dVar13;
        auVar43._12_4_ = uVar41;
        dVar9 = auVar31._0_8_;
        auVar44._0_8_ = auVar43._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar13;
        auVar44._8_8_ = dVar11 * auVar29._8_8_ - dVar9 * dVar14;
        auVar37._8_4_ = SUB84(dVar14,0);
        auVar37._0_8_ = dVar13;
        auVar37._12_4_ = uVar41;
        auVar29._8_4_ = SUB84(dVar12,0);
        auVar29._0_8_ = dVar11;
        auVar29._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar29 = blendpd(auVar37,auVar29,2);
        auVar30._0_8_ = auVar29._0_8_ * dVar9 - auVar34._0_8_ * dVar11;
        auVar30._8_8_ = auVar29._8_8_ * auVar31._8_8_ - auVar34._8_8_ * dVar12;
        auVar29 = blendpd(auVar44,auVar30,2);
        dVar12 = auVar44._8_8_ + auVar44._8_8_;
        dVar10 = auVar30._0_8_ + auVar30._0_8_;
        uVar41 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar45._0_8_ = auVar29._0_8_ + auVar29._0_8_;
        auVar45._8_8_ = auVar29._8_8_ + auVar29._8_8_;
        auVar39._8_4_ = SUB84(dVar10,0);
        auVar39._0_8_ = dVar12;
        auVar39._12_4_ = uVar41;
        auVar34._8_4_ = SUB84(dVar10,0);
        auVar34._0_8_ = dVar12;
        auVar34._12_4_ = uVar41;
        auVar29 = blendpd(auVar34,auVar45,2);
        auVar37 = blendpd(auVar35,auVar31,2);
        auVar40._0_8_ = auVar39._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar12;
        auVar40._8_8_ = auVar45._0_8_ * auVar35._8_8_ - dVar9 * dVar10;
        auVar35._0_8_ = auVar29._0_8_ * dVar9 - auVar37._0_8_ * auVar45._0_8_;
        auVar35._8_8_ = auVar29._8_8_ * auVar31._8_8_ - auVar37._8_8_ * auVar45._8_8_;
        auVar31._8_4_ = SUB84(auVar40._8_8_,0);
        auVar31._0_8_ = auVar40._0_8_;
        auVar31._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
        auVar29 = blendpd(auVar40,auVar35,2);
        local_250 = auVar45._0_8_ * dVar15 + dVar11 + auVar29._0_8_ +
                    *(double *)(pFVar7 + lVar22 + 0x30);
        dVar9 = dVar12 * dVar15 + dVar13 + auVar31._8_8_ + *(double *)(pFVar7 + lVar22 + 0x20);
        dVar12 = dVar10 * dVar15 + dVar14 + auVar35._0_8_ + *(double *)(pFVar7 + lVar22 + 0x20 + 8);
        uVar41 = SUB84(dVar12,0);
        uVar42 = (undefined4)((ulonglong)dVar12 >> 0x20);
        local_198.Translation.ZW.m128d_f64[1] = 0.0;
        local_198.Translation.ZW.m128d_f64[0] = local_250;
        local_260._8_4_ = uVar41;
        local_260._0_8_ = dVar9;
        local_260._12_4_ = uVar42;
        local_198.Translation.XY.m128d_f64[1]._0_4_ = uVar41;
        local_198.Translation.XY.m128d_f64[0] = dVar9;
        local_198.Translation.XY.m128d_f64[1]._4_4_ = uVar42;
      }
    }
    EVar6 = this->RotationBehavior;
    if (EVar6 == KeepParent) {
      local_198.Rotation.XY.m128d_f64[0] = *(double *)pFVar25;
      local_198.Rotation.XY.m128d_f64[1] = *(double *)(pFVar25 + 8);
      local_198.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar25 + 0x10);
      local_198.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar25 + 0x14);
      local_198.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar25 + 0x18);
      local_198.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar25 + 0x1c);
LAB_14d070211:
    }
    else {
      if (EVar6 == KeepChild) {
        local_198.Rotation.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar22);
        local_198.Rotation.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar22 + 8);
        pFVar25 = pFVar7 + lVar22 + 0x10;
        local_198.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)pFVar25;
        local_198.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar25 + 4);
        local_198.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar25 + 8);
        local_198.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar25 + 0xc);
        goto LAB_14d070211;
      }
      if (EVar6 == Combine) {
        auVar31 = *(undefined1 (*) [16])(pFVar25 + 0x10);
        dVar13 = *(double *)pFVar25;
        dVar14 = *(double *)(pFVar25 + 8);
        dVar15 = *(double *)(pFVar7 + lVar22);
        dVar16 = *(double *)(pFVar7 + lVar22 + 8);
        auVar35 = *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x10);
        dVar12 = auVar31._0_8_;
        dVar38 = auVar31._8_8_;
        auVar36._8_4_ = auVar31._0_4_;
        auVar36._0_8_ = dVar38;
        auVar36._12_4_ = auVar31._4_4_;
        dVar11 = auVar35._8_8_;
        auVar32._8_4_ = auVar35._8_4_;
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = auVar35._12_4_;
        dVar10 = auVar35._0_8_;
        auVar33._8_4_ = auVar35._0_4_;
        auVar33._0_8_ = dVar10;
        auVar33._12_4_ = auVar35._4_4_;
        local_198.Rotation.XY.m128d_f64[0] =
             dVar38 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar11 * dVar13 +
             dVar16 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_198.Rotation.XY.m128d_f64[1] =
             auVar36._8_8_ * dVar15 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar32._8_8_ * dVar14 +
             dVar16 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar33._8_8_ * dVar13 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar9 = dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar11 * dVar38 +
                dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_198.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
        local_198.Rotation.ZW.m128d_f64[0] =
             dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar11 * dVar12 +
             dVar16 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar38 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_198.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
      }
    }
    local_1f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar46;
    local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar47;
    local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar48;
    local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar49;
    local_1f8.Translation.XY.m128d_f64[1]._0_4_ = uVar50;
    local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1f8.Translation.XY.m128d_f64[1]._4_4_ = uVar51;
    local_1f8.Translation.ZW.m128d_f64[1]._0_4_ = uVar52;
    local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1f8.Translation.ZW.m128d_f64[1]._4_4_ = uVar53;
    local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar54;
    local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar55;
    local_198.Scale3D.ZW.m128d_f64[0] = local_1f8.Scale3D.ZW.m128d_f64[0];
    local_198.Scale3D.ZW.m128d_f64[1] = local_1f8.Scale3D.ZW.m128d_f64[1];
    UE::Math::TTransform<double>::Multiply(&local_1f8,&local_198,&local_138);
    *(double *)(pFVar7 + lVar22) = local_1f8.Rotation.XY.m128d_f64[0];
    *(double *)(pFVar7 + lVar22 + 8) = local_1f8.Rotation.XY.m128d_f64[1];
    stack0xfffffffffffffd70 = (double)CONCAT44(uStack_28c,auStack_2a0._16_4_ & ~auStack_2a0._4_4_);
    *(double *)(pFVar7 + lVar22 + 0x10) = local_1f8.Rotation.ZW.m128d_f64[0];
    *(double *)(pFVar7 + lVar22 + 0x10 + 8) = local_1f8.Rotation.ZW.m128d_f64[1];
    *(double *)(pFVar7 + lVar22 + 0x20) = local_1f8.Translation.XY.m128d_f64[0];
    *(double *)(pFVar7 + lVar22 + 0x20 + 8) = local_1f8.Translation.XY.m128d_f64[1];
    *(double *)(pFVar7 + lVar22 + 0x30) = local_1f8.Translation.ZW.m128d_f64[0];
    *(double *)(pFVar7 + lVar22 + 0x30 + 8) = local_1f8.Translation.ZW.m128d_f64[1];
    *(double *)(pFVar7 + lVar22 + 0x40) = local_1f8.Scale3D.XY.m128d_f64[0];
    *(double *)(pFVar7 + lVar22 + 0x40 + 8) = local_1f8.Scale3D.XY.m128d_f64[1];
    *(double *)(pFVar7 + lVar22 + 0x50) = local_1f8.Scale3D.ZW.m128d_f64[0];
    *(double *)(pFVar7 + lVar22 + 0x50 + 8) = local_1f8.Scale3D.ZW.m128d_f64[1];
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2a0);
  } while( true );
}

// ProcessAttachmentsForStaticData @ 14d070330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULiveLinkAnimationVirtualSubject::ProcessAttachmentsForStaticData
          (ULiveLinkAnimationVirtualSubject *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  FChildBoneInfo *pFVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  FName *pFVar17;
  TQuat<double> *pTVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  FLiveLinkVirtualSubjectBoneAttachment *pFVar21;
  FName *pFVar22;
  FLiveLinkVirtualSubjectBoneAttachment *this_00;
  uint uVar23;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [4];
  uint local_204;
  uint local_200;
  FLiveLinkVirtualSubjectBoneAttachment *local_1f8;
  undefined1 local_1f0 [8];
  TPairInitializer<int_const_&,ULiveLinkAnimationVirtualSubject::FChildBoneInfo_&&> local_1e8;
  uint *local_1d8;
  uint *local_1d0;
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198 [2];
  TQuat<double> local_168;
  TSet<FLiveLinkSubjectName,DefaultKeyFuncs<FLiveLinkSubjectName,0>,FDefaultSetAllocator> local_148;
  uint local_f8 [4];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  double local_a8 [2];
  double local_98 [2];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_238;
  this_00 = (FLiveLinkVirtualSubjectBoneAttachment *)(this->Attachments).AllocatorInstance.Data;
  local_200 = (this->Attachments).ArrayNum;
  uVar19 = (ulonglong)(int)local_200;
  uVar23 = 0xffffffff;
  pFVar21 = this_00 + uVar19;
  local_204 = 0xffffffff;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  local_1f8 = pFVar21;
  local_1e8.Value = (FChildBoneInfo *)param_1;
  do {
    if ((this->Attachments).ArrayNum != (int)uVar19) {
      local_208[0] = 0;
      `TCheckedPointerIterator<FLiveLinkVirtualSubjectBoneAttachment,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_208);
    }
    if (this_00 == pFVar21) {
      local_148.HashSize = 0;
      if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FLiveLinkSubjectName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FLiveLinkSubjectName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_148.Elements);
      return;
    }
    bVar14 = FLiveLinkVirtualSubjectBoneAttachment::IsValid
                       (this_00,(TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *)
                                &this->_padding_);
    if (bVar14) {
      TSet<FLiveLinkSubjectName,DefaultKeyFuncs<FLiveLinkSubjectName,0>,FDefaultSetAllocator>::
      Emplace<FLiveLinkSubjectName_const_&>
                (&local_148,(FLiveLinkSubjectName *)local_1f0,(bool *)&this_00->ChildSubject);
      TSet<FLiveLinkSubjectName,DefaultKeyFuncs<FLiveLinkSubjectName,0>,FDefaultSetAllocator>::
      Emplace<FLiveLinkSubjectName_const_&>
                (&local_148,(FLiveLinkSubjectName *)(local_1f0 + 4),(bool *)this_00);
      FVar3 = (this_00->ParentSubject).Name;
      FVar4 = this_00->ParentBone;
      uVar15 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar15 = FVar3.Number + uVar15;
      uVar16 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      if (*(int *)&(this->BoneNameToIndex).field_0x8 != *(int *)&(this->BoneNameToIndex).field_0x34)
      {
        puVar5 = *(undefined1 **)&(this->BoneNameToIndex).field_0x40;
        puVar20 = &(this->BoneNameToIndex).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar20 = puVar5;
        }
        uVar15 = *(uint *)(puVar20 +
                          (ulonglong)
                          (*(int *)&(this->BoneNameToIndex).field_0x48 - 1U &
                          (FVar4.Number + uVar15 * 0x40 + (uVar15 >> 2) + uVar16 + 0x9e3779b9 ^
                          uVar15)) * 4);
        if (uVar15 != 0xffffffff) {
          do {
            pFVar17 = (FName *)((longlong)(int)uVar15 * 0x1c + *(longlong *)&this->BoneNameToIndex);
            if ((*pFVar17 == FVar3) && (pFVar17[1] == FVar4)) {
              if (uVar15 != 0xffffffff) {
                pFVar22 = pFVar17 + 2;
                if (pFVar17 == (FName *)0x0) {
                  pFVar22 = (FName *)0x0;
                }
                if (pFVar22 != (FName *)0x0) {
                  uVar23 = (pFVar22->ComparisonIndex).Value;
                }
              }
              break;
            }
            uVar15 = pFVar17[2].Number;
          } while (uVar15 != 0xffffffff);
        }
      }
      FVar3 = (this_00->ChildSubject).Name;
      FVar4 = this_00->ChildBone;
      uVar15 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar15 = FVar3.Number + uVar15;
      uVar16 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      pFVar13 = local_1e8.Value;
      if (*(int *)&(this->BoneNameToIndex).field_0x8 != *(int *)&(this->BoneNameToIndex).field_0x34)
      {
        puVar5 = *(undefined1 **)&(this->BoneNameToIndex).field_0x40;
        puVar20 = &(this->BoneNameToIndex).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar20 = puVar5;
        }
        uVar15 = *(uint *)(puVar20 +
                          (ulonglong)
                          (*(int *)&(this->BoneNameToIndex).field_0x48 - 1U &
                          (FVar4.Number + uVar15 * 0x40 + (uVar15 >> 2) + uVar16 + 0x9e3779b9 ^
                          uVar15)) * 4);
        if (uVar15 != 0xffffffff) {
          do {
            pFVar17 = (FName *)((longlong)(int)uVar15 * 0x1c + *(longlong *)&this->BoneNameToIndex);
            if ((*pFVar17 == FVar3) && (pFVar17[1] == FVar4)) {
              if (uVar15 != 0xffffffff) {
                pFVar22 = pFVar17 + 2;
                if (pFVar17 == (FName *)0x0) {
                  pFVar22 = (FName *)0x0;
                }
                if (pFVar22 != (FName *)0x0) {
                  local_204 = (pFVar22->ComparisonIndex).Value;
                }
              }
              break;
            }
            uVar15 = pFVar17[2].Number;
          } while (uVar15 != 0xffffffff);
        }
      }
      uVar15 = local_204;
      pFVar21 = local_1f8;
      if ((uVar23 != 0xffffffff) && (local_204 != 0xffffffff)) {
        if (-1 < (int)local_204) {
          iVar2 = (int)(local_1e8.Value)->_padding_;
          if ((int)local_204 < iVar2) {
            uVar16 = 0;
            if ((int)local_204 < iVar2) {
              uVar16 = ~local_204 >> 0x1f;
            }
            if (uVar16 == 0) {
              local_218 = (longlong)(int)local_204;
              local_210 = (longlong)iVar2;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar14) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            *(uint *)(*(longlong *)pFVar13 + (longlong)(int)uVar15 * 4) = uVar23;
          }
        }
        _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        dVar7 = (this_00->LocationOffset).field0_0x0._s_0.X;
        dVar8 = (this_00->LocationOffset).field0_0x0._s_0.Y;
        dVar1 = (this_00->LocationOffset).field0_0x0._s_0.Z;
        local_1c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_1c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_1b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_1b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_1a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_1a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_198[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_198[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        pTVar18 = UE::Math::TRotator<double>::Quaternion(&this_00->RotationOffset,&local_168);
        _Var12 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
        _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
        local_e8 = pTVar18->X;
        dStack_e0 = pTVar18->Y;
        local_d8 = pTVar18->Z;
        dStack_d0 = pTVar18->W;
        local_1d8 = &local_204;
        local_1d0 = local_f8;
        uStack_b0 = 0;
        UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] = _Var9.m128d_f64[0];
        UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] = _Var9.m128d_f64[1];
        local_a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] = _Var11.m128d_f64[0];
        UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] = _Var11.m128d_f64[1];
        local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        UE::Math::TTransform<double>::Identity.Scale3D.XY = _Var10;
        UE::Math::TTransform<double>::Identity.Scale3D.ZW = _Var12;
        local_f8[0] = uVar23;
        local_c8 = dVar7;
        dStack_c0 = dVar8;
        local_b8 = dVar1;
        TSet<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>,TDefaultMapHashableKeyFuncs<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<int_const_&,ULiveLinkAnimationVirtualSubject::FChildBoneInfo_&&>_>
                  ((TSet<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>,TDefaultMapHashableKeyFuncs<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo,0>,FDefaultSetAllocator>
                    *)&this->ChildBonesInfo,&local_1e8,(bool *)&local_1d8);
        pFVar21 = local_1f8;
      }
    }
    uVar19 = (ulonglong)local_200;
    this_00 = this_00 + 1;
  } while( true );
}

// SortSubjects @ 14d07fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULiveLinkAnimationVirtualSubject::SortSubjects(ULiveLinkAnimationVirtualSubject *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ForElementType<FSetElementId> FVar10;
  longlong lVar11;
  FLiveLinkVirtualSubjectBoneAttachment *this_00;
  FScriptContainerElement *pFVar12;
  FLiveLinkVirtualSubjectBoneAttachment *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_e8 [32];
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98;
  undefined1 local_97 [3];
  int local_94;
  FScriptContainerElement *local_90;
  TSet<TTuple<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar1 = (this->Attachments).ArrayNum;
  if (iVar1 != 0) {
    this_00 = (FLiveLinkVirtualSubjectBoneAttachment *)(this->Attachments).AllocatorInstance.Data;
    pFVar13 = this_00 + iVar1;
    while( true ) {
      if ((this->Attachments).ArrayNum != iVar1) {
        local_98 = 0;
        `TCheckedPointerIterator<FLiveLinkVirtualSubjectBoneAttachment,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_98);
      }
      if (this_00 == pFVar13) {
        return;
      }
      bVar6 = FLiveLinkVirtualSubjectBoneAttachment::IsValid
                        (this_00,(TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *)
                                 &this->_padding_);
      if (bVar6) break;
      this_00 = this_00 + 1;
    }
    pFVar12 = (this->Attachments).AllocatorInstance.Data;
    iVar1 = (this->Attachments).ArrayNum;
    local_88.Elements._0_8_ = 0;
    pFVar14 = pFVar12 + 0x10;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    pFVar16 = pFVar12 + (longlong)iVar1 * 0x60;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    while( true ) {
      if ((this->Attachments).ArrayNum != iVar1) {
        local_97[0] = 0;
        `TCheckedPointerIterator<FLiveLinkVirtualSubjectBoneAttachment,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_97);
      }
      if (pFVar12 == pFVar16) break;
      if (*(longlong *)pFVar14 != 0) {
        lVar2 = *(longlong *)pFVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        uVar7 = uVar7 + (int)((ulonglong)lVar2 >> 0x20);
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar10 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_88.Hash.SecondaryData;
          }
          iVar8 = *(int *)((longlong)FVar10 + (ulonglong)(local_88.HashSize - 1U & uVar7) * 4);
          if (iVar8 != -1) {
            do {
              plVar9 = (longlong *)((longlong)iVar8 * 0x20 + local_88.Elements._0_8_);
              if (*plVar9 == *(longlong *)pFVar12) {
                if (plVar9 != (longlong *)0x0) goto LAB_14d07fe97;
                break;
              }
              iVar8 = (int)plVar9[3];
            } while (iVar8 != -1);
          }
        }
        local_c8 = (FScriptContainerElement *)0x0;
        local_90 = pFVar12;
        TSet<TTuple<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FLiveLinkSubjectName_const_&>_>
                  (&local_88,(uint)&local_94,
                   (TKeyInitializer<FLiveLinkSubjectName_const_&> *)(ulonglong)uVar7,
                   (bool *)&local_90);
        plVar9 = (longlong *)((longlong)local_94 * 0x20 + local_88.Elements._0_8_);
LAB_14d07fe97:
        pFVar3 = (FScriptContainerElement *)plVar9[1];
        if ((pFVar3 <= pFVar14) &&
           (pFVar14 < pFVar3 + (longlong)*(int *)((longlong)plVar9 + 0x14) * 8)) {
          local_b0 = (longlong)(int)plVar9[2];
          local_a8 = 8;
          local_c8 = pFVar14;
          local_c0 = pFVar3;
          local_b8 = (longlong)*(int *)((longlong)plVar9 + 0x14);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = (int)plVar9[2];
        if (iVar8 == *(int *)((longlong)plVar9 + 0x14)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)(plVar9 + 1),
                             (int *)((longlong)plVar9 + 0x14));
        }
        *(int *)(plVar9 + 2) = iVar8 + 1;
        *(longlong *)(((ForAnyElementType *)(plVar9 + 1))->Data + (longlong)iVar8 * 8) =
             *(longlong *)pFVar14;
      }
      pFVar12 = pFVar12 + 0x60;
      pFVar14 = pFVar14 + 0x60;
    }
    bVar6 = Algo::
            KahnTopologicalSort<TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_&,_ULiveLinkAnimationVirtualSubject::SortSubjects_::__l2::<lambda_1>_>
                      ((TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                       (TMap<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_88,None);
    if ((!bVar6) && (2 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar1 = (int)this->_padding_;
    lVar11 = 0;
    lVar2 = this->_padding_;
    iVar8 = iVar1 / 2;
    if (0 < iVar8) {
      puVar15 = (undefined8 *)(lVar2 + (longlong)(iVar1 + -1) * 8);
      do {
        uVar4 = *(undefined8 *)(lVar2 + lVar11 * 8);
        *(undefined8 *)(lVar2 + lVar11 * 8) = *puVar15;
        lVar11 = lVar11 + 1;
        *puVar15 = uVar4;
        puVar15 = puVar15 + -1;
      } while (lVar11 < iVar8);
    }
    this->bSubjectsNeedSorting = false;
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  return;
}

// StaticRegisterNativesULiveLinkAnimationVirtualSubject @ 14d080660

void __cdecl
ULiveLinkAnimationVirtualSubject::StaticRegisterNativesULiveLinkAnimationVirtualSubject(void)

{
  return;
}

// Update @ 14d087540

void __thiscall ULiveLinkAnimationVirtualSubject::Update(ULiveLinkAnimationVirtualSubject *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  FLiveLinkVirtualSubjectBoneAttachment *this_00;
  FLiveLinkVirtualSubjectBoneAttachment *pFVar4;
  undefined1 local_res8 [8];
  TArray<FLiveLinkSubjectFrameData,TSizedDefaultAllocator<32>_> local_28;
  TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0xa0))();
  if (cVar2 == '\0') {
    ULiveLinkVirtualSubject::InvalidateFrameData
              ((ULiveLinkVirtualSubject *)&this[-1].BoneNameToIndex.field_0x30);
  }
  ULiveLinkVirtualSubject::UpdateTranslatorsForThisFrame
            ((ULiveLinkVirtualSubject *)&this[-1].BoneNameToIndex.field_0x30);
  (**(code **)(*(longlong *)this->_padding_ + 0x100))((longlong *)this->_padding_,&local_18,0,0);
  bVar3 = AreSubjectsValid((ULiveLinkAnimationVirtualSubject *)&this[-1].BoneNameToIndex.field_0x30,
                           &local_18);
  if (bVar3) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((this->BoneNameToIndex).field_0x28 != '\0') {
      SortSubjects((ULiveLinkAnimationVirtualSubject *)&this[-1].BoneNameToIndex.field_0x30);
    }
    cVar2 = (**(code **)(this->_padding_ + 0xa0))(this);
    if ((cVar2 == '\0') &&
       (bVar3 = BuildSubjectSnapshot
                          ((ULiveLinkAnimationVirtualSubject *)&this[-1].BoneNameToIndex.field_0x30,
                           &local_28), bVar3)) {
      (**(code **)(*(longlong *)&this[-1].BoneNameToIndex.field_0x30 + 0x2c8))
                (&this[-1].BoneNameToIndex.field_0x30,&local_28);
      (**(code **)(*(longlong *)&this[-1].BoneNameToIndex.field_0x30 + 0x2d0))
                (&this[-1].BoneNameToIndex.field_0x30,&local_28);
    }
    DestructItems<FLiveLinkSubjectFrameData,int>
              ((FLiveLinkSubjectFrameData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FLiveLinkSubjectFrameData *)local_28.AllocatorInstance.Data !=
        (FLiveLinkSubjectFrameData *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = (FLiveLinkVirtualSubjectBoneAttachment *)this->_padding_;
    iVar1 = (int)this->_padding_;
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FLiveLinkVirtualSubjectBoneAttachment,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar4) break;
      FLiveLinkVirtualSubjectBoneAttachment::IsValid
                (this_00,(TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *)
                         &this->_padding_);
      this_00 = this_00 + 1;
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

