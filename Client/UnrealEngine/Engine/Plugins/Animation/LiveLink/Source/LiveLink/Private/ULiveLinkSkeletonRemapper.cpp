// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 11

// StaticClass @ 14cff29e0

UClass * __cdecl ULiveLinkSkeletonRemapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkSkeletonRemapper",
               &Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton,
               StaticRegisterNativesULiveLinkSkeletonRemapper,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkSkeletonRemapper>,
               InternalVTableHelperCtorCaller<ULiveLinkSkeletonRemapper>,local_res8,
               ULiveLinkSubjectRemapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton;
}

// ULiveLinkSkeletonRemapper @ 14d014300

ULiveLinkSkeletonRemapper * __thiscall
ULiveLinkSkeletonRemapper::ULiveLinkSkeletonRemapper
          (ULiveLinkSkeletonRemapper *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper((ULiveLinkSubjectRemapper *)this,param_1);
  this_00 = &(this->ReferenceSkeleton).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ULiveLinkSkeletonRemapper__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Instance).Object = (FLiveLinkSkeletonRemapperWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ULiveLinkSkeletonRemapper @ 14d014370

ULiveLinkSkeletonRemapper * __thiscall
ULiveLinkSkeletonRemapper::ULiveLinkSkeletonRemapper
          (ULiveLinkSkeletonRemapper *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper((ULiveLinkSubjectRemapper *)this,param_1);
  this_00 = &(this->ReferenceSkeleton).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ULiveLinkSkeletonRemapper__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Instance).Object = (FLiveLinkSkeletonRemapperWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ULiveLinkSkeletonRemapper @ 14d017430

void __thiscall
ULiveLinkSkeletonRemapper::~ULiveLinkSkeletonRemapper(ULiveLinkSkeletonRemapper *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkSkeletonRemapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  ULiveLinkSubjectRemapper::~ULiveLinkSubjectRemapper((ULiveLinkSubjectRemapper *)this);
  return;
}

// CreateWorker @ 14d038830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkSubjectRemapperWorker,1> * __thiscall
ULiveLinkSkeletonRemapper::CreateWorker
          (ULiveLinkSkeletonRemapper *this,
          TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *__return_storage_ptr__)

{
  undefined1 *this_00;
  TSharedPtr<FLiveLinkSkeletonRemapperWorker,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *pTVar5;
  FLiveLinkSkeletonRemapperWorker *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_01;
  FLiveLinkSkeletonRemapperWorker *local_28;
  FSharedReferencer<1> FStack_20;
  
  FStack_20.ReferenceController = ::operator_new(0x68);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FLiveLinkSkeletonRemapperWorker *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar6 = (FLiveLinkSkeletonRemapperWorker *)(FStack_20.ReferenceController + 1);
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLiveLinkSkeletonRemapperWorker___00_SharedPointerInternals__6B_
    ;
    FStack_20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3]._padding_ = 0;
    FStack_20.ReferenceController[5]._padding_ = 0;
    FStack_20.ReferenceController[6]._padding_ = 0;
    FStack_20.ReferenceController[1]._padding_ = (longlong)&___7FLiveLinkSkeletonRemapperWorker__6B_
    ;
    FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2]._padding_ = 0;
    FStack_20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&FStack_20.ReferenceController[4]._padding_ = 0;
    *(undefined4 *)((longlong)&FStack_20.ReferenceController[4]._padding_ + 4) = 0x80;
    FStack_20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    FStack_20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    if (pFVar6 == (FLiveLinkSkeletonRemapperWorker *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = FStack_20.ReferenceController;
    local_28 = pFVar6;
  }
  pTVar1 = &this->Instance;
  if (pTVar1 != (TSharedPtr<FLiveLinkSkeletonRemapperWorker,1> *)&local_28) {
    pTVar1->Object = pFVar6;
    local_28 = (FLiveLinkSkeletonRemapperWorker *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Instance).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar1->Object == (FLiveLinkSkeletonRemapperWorker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar6 = pTVar1->Object;
  this_01 = &pFVar6->BoneNameMap;
  if (this_01 !=
      (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *)
      &this->_padding_) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar6->BoneNameMap).field_0x38,
               (int *)&(pFVar6->BoneNameMap).field_0x48,
               (ForElementType<FSetElementId> *)&this->_padding_,(int)this->_padding_);
    iVar2 = (int)this->_padding_;
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar2,(ForAnyElementType *)this_01,(int *)&(pFVar6->BoneNameMap).field_0x8,
               (int *)&(pFVar6->BoneNameMap).field_0xc);
    this_00 = &(pFVar6->BoneNameMap).field_0x10;
    *(int *)&(pFVar6->BoneNameMap).field_0x30 = (int)this->_padding_;
    *(undefined4 *)&(pFVar6->BoneNameMap).field_0x34 =
         *(undefined4 *)((longlong)&this->_padding_ + 4);
    if ((longlong *)this_00 != &this->_padding_) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)this_01,(void *)this->_padding_,(longlong)iVar2 * 0x18);
    }
  }
  __return_storage_ptr__->Object = (ILiveLinkSubjectRemapperWorker *)pTVar1->Object;
  pTVar7 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052ac0

UClass * __cdecl ULiveLinkSkeletonRemapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkSkeletonRemapper",
               &Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton,
               StaticRegisterNativesULiveLinkSkeletonRemapper,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkSkeletonRemapper>,
               InternalVTableHelperCtorCaller<ULiveLinkSkeletonRemapper>,local_res8,
               ULiveLinkSubjectRemapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton;
}

// GetSupportedRole @ 14d057150

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkSkeletonRemapper::GetSupportedRole(ULiveLinkSkeletonRemapper *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetWorker @ 14d058300

TSharedPtr<ILiveLinkSubjectRemapperWorker,1> * __thiscall
ULiveLinkSkeletonRemapper::GetWorker
          (ULiveLinkSkeletonRemapper *this,
          TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (ILiveLinkSubjectRemapperWorker *)(this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Initialize @ 14d05bb20

void __thiscall
ULiveLinkSkeletonRemapper::Initialize(ULiveLinkSkeletonRemapper *this,FLiveLinkSubjectKey *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this_00;
  UClass *pUVar7;
  FLiveLinkSkeletonStaticData *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  undefined8 local_res18 [2];
  longlong *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  pIVar5 = IModularFeatures::Get();
  lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
  plVar11 = (longlong *)0x0;
  plVar9 = (longlong *)(lVar6 + -8);
  if (lVar6 == 0) {
    plVar9 = plVar11;
  }
  this_00 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
            (**(code **)(*plVar9 + 0x188))(plVar9,param_1,1);
  (**(code **)(*plVar9 + 0xd8))(plVar9,&local_38,param_1);
  plVar9 = local_38;
  if ((this_00 != (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
     (local_38 != (longlong *)0x0)) {
    pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    plVar4 = local_38;
    if (pUVar7 != (UClass *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if (((int)plVar9[7] < iVar2) ||
         ((longlong *)*(undefined1 **)(plVar9[6] + (longlong)iVar2 * 8) != &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (local_38 != (longlong *)0x0)) {
        pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        if (pUVar7 != (UClass *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)plVar4[7] < iVar2) ||
             ((longlong *)*(undefined1 **)(plVar4[6] + (longlong)iVar2 * 8) != &pUVar7->_padding_))
          {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar11 = local_38;
          }
        }
        pUVar7 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
        if (pUVar7 != (UClass *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)plVar11[7] < iVar2) ||
             ((longlong *)*(undefined1 **)(plVar11[6] + (longlong)iVar2 * 8) != &pUVar7->_padding_))
          {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pFVar8 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::
                     Cast<FLiveLinkSkeletonStaticData>(this_00);
            pFVar10 = (pFVar8->BoneNames).AllocatorInstance.Data;
            iVar2 = (pFVar8->BoneNames).ArrayNum;
            pFVar1 = pFVar10 + (longlong)iVar2 * 8;
            while( true ) {
              if ((pFVar8->BoneNames).ArrayNum != iVar2) {
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              if (pFVar10 == pFVar1) break;
              local_res18[0] = *(undefined8 *)pFVar10;
              local_30 = local_res18;
              local_28 = local_res18;
              TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                        ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                          *)&this->_padding_,
                         (TPairInitializer<FName_const_&,FName_const_&> *)(local_res18 + 1),
                         (bool *)&local_30);
              pFVar10 = pFVar10 + 8;
            }
          }
        }
      }
    }
  }
  return;
}

// IsValidRemapper @ 14d060a80

bool __thiscall ULiveLinkSkeletonRemapper::IsValidRemapper(ULiveLinkSkeletonRemapper *this)

{
  return true;
}

// StaticRegisterNativesULiveLinkSkeletonRemapper @ 14d080860

void __cdecl ULiveLinkSkeletonRemapper::StaticRegisterNativesULiveLinkSkeletonRemapper(void)

{
  return;
}

