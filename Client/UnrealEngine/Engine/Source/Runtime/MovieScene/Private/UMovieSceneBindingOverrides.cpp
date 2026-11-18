// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// StaticClass @ 1461e4dd0

UClass * __cdecl UMovieSceneBindingOverrides::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingOverrides",
               &Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingOverrides,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingOverrides>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingOverrides>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton;
}

// UMovieSceneBindingOverrides @ 1461fd790

UMovieSceneBindingOverrides * __thiscall
UMovieSceneBindingOverrides::UMovieSceneBindingOverrides
          (UMovieSceneBindingOverrides *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneBindingOverrides__6B_;
  (this->BindingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingData).ArrayNum = 0;
  (this->BindingData).ArrayMax = 0;
  *(undefined8 *)&this->LookupMap = 0;
  *(undefined8 *)&(this->LookupMap).field_0x8 = 0;
  *(undefined8 *)&(this->LookupMap).field_0x20 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x28 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LookupMap).field_0x34 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LookupMap).field_0x40 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x48 = 0;
  return this;
}

// UMovieSceneBindingOverrides @ 1461fd7f0

UMovieSceneBindingOverrides * __thiscall
UMovieSceneBindingOverrides::UMovieSceneBindingOverrides
          (UMovieSceneBindingOverrides *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLookupDirty = true;
  this->_padding_ = (longlong)&___7UMovieSceneBindingOverrides__6B_;
  (this->BindingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingData).ArrayNum = 0;
  (this->BindingData).ArrayMax = 0;
  *(undefined8 *)&this->LookupMap = 0;
  *(undefined8 *)&(this->LookupMap).field_0x8 = 0;
  *(undefined8 *)&(this->LookupMap).field_0x20 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x28 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LookupMap).field_0x34 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LookupMap).field_0x40 = 0;
  *(undefined4 *)&(this->LookupMap).field_0x48 = 0;
  return this;
}

// ~UMovieSceneBindingOverrides @ 1461ffa10

void __thiscall
UMovieSceneBindingOverrides::~UMovieSceneBindingOverrides(UMovieSceneBindingOverrides *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneBindingOverrides__6B_;
  *(undefined4 *)&(this->LookupMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LookupMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LookupMap);
  DestructItems<FMovieSceneBindingOverrideData,int>
            ((FMovieSceneBindingOverrideData *)(this->BindingData).AllocatorInstance.Data,
             (this->BindingData).ArrayNum);
  pFVar2 = (this->BindingData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146200ac0

bool __thiscall
`UMovieSceneBindingOverrides::RemoveBinding'::__l2::<lambda_1>::operator()
          (void *this,FMovieSceneBindingOverrideData *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UObject *local_res8;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  pUVar1 = *(UObject **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res8);
  bVar2 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(param_1->Object).SoftObjectPtr.field_0x8,&local_30);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((((bVar2) &&
       (((*(uint *)((longlong)this + 0x14) == (param_1->ObjectBindingId).Guid.D &&
         *(uint *)((longlong)this + 0x10) == (param_1->ObjectBindingId).Guid.C) &&
        *(uint *)((longlong)this + 0xc) == (param_1->ObjectBindingId).Guid.B) &&
        *(uint *)((longlong)this + 8) == (param_1->ObjectBindingId).Guid.A)) &&
      (*(int *)((longlong)this + 0x18) == (param_1->ObjectBindingId).SequenceID)) &&
     (*(int *)((longlong)this + 0x1c) == (param_1->ObjectBindingId).ResolveParentIndex)) {
    return true;
  }
  return false;
}

// AddBinding @ 146204a90

void __thiscall
UMovieSceneBindingOverrides::AddBinding
          (UMovieSceneBindingOverrides *this,FMovieSceneObjectBindingID *param_1,UObject *param_2,
          bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res18 [4];
  UObject *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  TPersistentObjectPtr<FSoftObjectPath> local_50;
  FScriptContainerElement local_28;
  
  if (param_2 != (UObject *)0x0) {
    local_res18[0] = (this->BindingData).ArrayNum;
    TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
    Emplace<FGuid_const_&,int>
              ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_> *
               )&this->LookupMap,&param_1->Guid,local_res18);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0xffffffff00000000;
    local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ObjectID.SubPathString.Data.ArrayNum = 0;
    local_50.ObjectID.SubPathString.Data.ArrayMax = 0;
    local_50.WeakPtr.ObjectIndex = 0;
    local_50.WeakPtr.ObjectSerialNumber = 0;
    local_50.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_50.ObjectID.AssetPath.AssetName.Number = 0;
    local_50.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_50.ObjectID.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_50.ObjectID.SubPathString,0);
    local_68._0_4_ = (param_1->Guid).A;
    local_68._4_4_ = (param_1->Guid).B;
    uStack_60._0_4_ = (param_1->Guid).C;
    uStack_60._4_4_ = (param_1->Guid).D;
    local_28 = (FScriptContainerElement)0x1;
    local_58._0_4_ = param_1->SequenceID;
    local_58._4_4_ = param_1->ResolveParentIndex;
    local_78[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_50,(FObjectPtr)local_78);
    pFVar2 = (this->BindingData).AllocatorInstance.Data;
    local_28 = (FScriptContainerElement)!param_3;
    if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar2 + (longlong)(this->BindingData).ArrayMax * 0x48)) &&
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
    iVar5 = (this->BindingData).ArrayNum;
    piVar1 = &(this->BindingData).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&(this->BindingData).AllocatorInstance,piVar1);
    }
    (this->BindingData).ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5;
    pFVar2 = (this->BindingData).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar6 * 0x48) = local_68;
    *(undefined8 *)(pFVar2 + lVar6 * 0x48 + 8) = uStack_60;
    *(undefined8 *)(pFVar2 + lVar6 * 0x48 + 0x10) = local_58;
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
              ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar2 + lVar6 * 0x48 + 0x18),&local_50);
    pFVar2[lVar6 * 0x48 + 0x40] = local_28;
    if (local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14621b700

UClass * __cdecl UMovieSceneBindingOverrides::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingOverrides",
               &Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingOverrides,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingOverrides>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingOverrides>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton;
}

// LocateBoundObjects @ 146222ab0

bool __thiscall
UMovieSceneBindingOverrides::LocateBoundObjects
          (UMovieSceneBindingOverrides *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_*> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  FUObjectItem *pFVar12;
  ForElementType<UObject_*> FVar13;
  longlong lVar14;
  uint local_res8 [2];
  UObject *local_res10;
  UObject *local_78;
  TBaseKeyIterator<1> local_70;
  TBaseKeyIterator<1> local_58;
  
  if (this->bLookupDirty != false) {
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
                *)&this->LookupMap);
    local_res8[0] = 0;
    if (0 < (this->BindingData).ArrayNum) {
      do {
        uVar1 = local_res8[0];
        uVar8 = 0;
        if ((int)local_res8[0] < (this->BindingData).ArrayNum) {
          uVar8 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
        Emplace<FGuid_const_&,int_const_&>
                  ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>
                    *)&this->LookupMap,
                   (FGuid *)((this->BindingData).AllocatorInstance.Data +
                            (longlong)(int)uVar1 * 0x48),(int *)local_res8);
        local_res8[0] = local_res8[0] + 1;
      } while ((int)local_res8[0] < (this->BindingData).ArrayNum);
    }
    this->bLookupDirty = false;
  }
  TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
  TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_58,
             (TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
              *)&this->LookupMap,(TRetainedRef<FGuid_const_>)param_1);
  local_70._16_8_ = ZEXT48((uint)local_58.Index);
  bVar5 = true;
  local_70.Set = local_58.Set;
  do {
    if (local_58.Index == 0xffffffff) {
      return bVar5;
    }
    uVar1 = *(uint *)((longlong)local_58.Index * 0x1c + 0x10 +
                     *(longlong *)&(local_70.Set)->Elements);
    lVar14 = (longlong)(int)uVar1;
    uVar8 = 0;
    if ((int)uVar1 < (this->BindingData).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar2 = (this->BindingData).AllocatorInstance.Data;
    bVar7 = bVar5;
    if (*(uint *)(pFVar2 + lVar14 * 0x48 + 0x10) == param_2.Value) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar2 + lVar14 * 0x48 + 0x18));
      if ((pUVar10 == (UObject *)0x0) && (*(longlong *)(pFVar2 + lVar14 * 0x48 + 0x20) != 0)) {
        pUVar11 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(pFVar2 + lVar14 * 0x48 + 0x20))
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        bVar7 = (*IsInAsyncLoadingThread)();
        if (((bVar7) && (pUVar11 != (UObject *)0x0)) &&
           (pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar11->field_0xc),
           ((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_146222ce1:
          if ((*(uint *)&pUVar11->field_0x8 >> 0x1e & 1) != 0) goto LAB_146222cf1;
          bVar7 = true;
        }
        else {
          local_res10 = pUVar11;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)(pFVar2 + lVar14 * 0x48 + 0x18),(FObjectPtr)&local_res10);
          if (pUVar11 != (UObject *)0x0) goto LAB_146222ce1;
LAB_146222cf1:
          bVar7 = false;
        }
        pUVar10 = (UObject *)0x0;
        if (bVar7) {
          pUVar10 = pUVar11;
        }
      }
      bVar7 = false;
      if (pFVar2[lVar14 * 0x48 + 0x40] == (FScriptContainerElement)0x0) {
        bVar7 = bVar5;
      }
      local_78 = pUVar10;
      if (pUVar10 != (UObject *)0x0) {
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<UObject_*>)param_3;
        if (FVar3 != (ForElementType<UObject_*>)0x0) {
          FVar13 = FVar3;
        }
        if ((ulonglong)FVar13 <= &local_78) {
          FVar13 = (ForElementType<UObject_*>)param_3;
          if (FVar3 != (ForElementType<UObject_*>)0x0) {
            FVar13 = FVar3;
          }
          if ((&local_78 < (UObject **)((longlong)FVar13 + (longlong)param_3->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar9 + 1;
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<UObject_*>)param_3;
        if (FVar3 != (ForElementType<UObject_*>)0x0) {
          FVar13 = FVar3;
        }
        *(UObject **)((longlong)FVar13 + (longlong)iVar9 * 8) = local_78;
      }
    }
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
    TBaseKeyIterator<1>::operator++(&local_70);
    bVar5 = bVar7;
    local_58.Index = local_70.Index;
  } while( true );
}

// RebuildLookupMap @ 14622a930

void __thiscall UMovieSceneBindingOverrides::RebuildLookupMap(UMovieSceneBindingOverrides *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint local_res8 [2];
  
  TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
              *)&this->LookupMap);
  local_res8[0] = 0;
  if (0 < (this->BindingData).ArrayNum) {
    do {
      uVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < (this->BindingData).ArrayNum) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
      Emplace<FGuid_const_&,int_const_&>
                ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>
                  *)&this->LookupMap,
                 (FGuid *)((this->BindingData).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x48)
                 ,(int *)local_res8);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (this->BindingData).ArrayNum);
  }
  this->bLookupDirty = false;
  return;
}

// RemoveBinding @ 14622f480

void __thiscall
UMovieSceneBindingOverrides::RemoveBinding
          (UMovieSceneBindingOverrides *this,FMovieSceneObjectBindingID *param_1,UObject *param_2)

{
  int iVar1;
  FMovieSceneBindingOverrideData *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UObject *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_40._0_4_ = (param_1->Guid).A;
  local_40._4_4_ = (param_1->Guid).B;
  uStack_38._0_4_ = (param_1->Guid).C;
  uStack_38._4_4_ = (param_1->Guid).D;
  iVar1 = (this->BindingData).ArrayNum;
  local_30._0_4_ = param_1->SequenceID;
  local_30._4_4_ = param_1->ResolveParentIndex;
  if (iVar1 != 0) {
    pFVar2 = (FMovieSceneBindingOverrideData *)(this->BindingData).AllocatorInstance.Data;
    iVar8 = 0;
    local_48 = param_2;
    bVar4 = `UMovieSceneBindingOverrides::RemoveBinding'::__l2::<lambda_1>::operator()
                      (&local_48,pFVar2);
    bVar4 = !bVar4;
    iVar6 = 0;
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = `UMovieSceneBindingOverrides::RemoveBinding'::__l2::<lambda_1>::operator()
                          (&local_48,pFVar2 + iVar3);
      } while (bVar4 == !bVar5);
      iVar7 = iVar3 - iVar6;
      if (bVar4 == false) {
        DestructItems<FMovieSceneBindingOverrideData,int>(pFVar2 + iVar6,iVar7);
      }
      else {
        if (iVar8 != iVar6) {
          memmove(pFVar2 + iVar8,pFVar2 + iVar6,(longlong)iVar7 * 0x48);
        }
        iVar8 = iVar8 + iVar7;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar1);
    (this->BindingData).ArrayNum = iVar8;
    if (iVar1 != iVar8) {
      this->bLookupDirty = true;
    }
  }
  return;
}

// ResetBinding @ 146230710

void __thiscall
UMovieSceneBindingOverrides::ResetBinding
          (UMovieSceneBindingOverrides *this,FMovieSceneObjectBindingID *param_1)

{
  int iVar1;
  <lambda_1> local_28;
  
  local_28.Binding.Guid.A = (param_1->Guid).A;
  local_28.Binding.Guid.B = (param_1->Guid).B;
  local_28.Binding.Guid.C = (param_1->Guid).C;
  local_28.Binding.Guid.D = (param_1->Guid).D;
  local_28.Binding.SequenceID = param_1->SequenceID;
  local_28.Binding.ResolveParentIndex = param_1->ResolveParentIndex;
  iVar1 = TArray<FMovieSceneBindingOverrideData,TSizedDefaultAllocator<32>_>::
          RemoveAll<_UMovieSceneBindingOverrides::ResetBinding_::__l2::<lambda_1>_>
                    (&this->BindingData,&local_28);
  if (iVar1 != 0) {
    this->bLookupDirty = true;
  }
  return;
}

// ResetBindings @ 146230750

void __thiscall UMovieSceneBindingOverrides::ResetBindings(UMovieSceneBindingOverrides *this)

{
  int *piVar1;
  int iVar2;
  FMovieSceneBindingOverrideData *pFVar3;
  
  iVar2 = (this->BindingData).ArrayNum;
  if (iVar2 != 0) {
    piVar1 = &(this->BindingData).ArrayMax;
    pFVar3 = (FMovieSceneBindingOverrideData *)(this->BindingData).AllocatorInstance.Data;
    if ((this->BindingData).ArrayMax < 0) {
      DestructItems<FMovieSceneBindingOverrideData,int>(pFVar3,iVar2);
      (this->BindingData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&(this->BindingData).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FMovieSceneBindingOverrideData,int>(pFVar3,iVar2);
      (this->BindingData).ArrayNum = 0;
    }
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
                *)&this->LookupMap);
    this->bLookupDirty = false;
  }
  return;
}

// SetBinding @ 146234610

void __thiscall
UMovieSceneBindingOverrides::SetBinding
          (UMovieSceneBindingOverrides *this,FMovieSceneObjectBindingID *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined8 local_res18;
  byte local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TPersistentObjectPtr<FSoftObjectPath> local_b0;
  FScriptContainerElement local_88;
  UObject *local_78;
  FScriptContainerElement *local_70;
  <lambda_1> local_68;
  
  local_68.Binding.Guid.A = (param_1->Guid).A;
  local_68.Binding.Guid.B = (param_1->Guid).B;
  local_68.Binding.Guid.C = (param_1->Guid).C;
  local_68.Binding.Guid.D = (param_1->Guid).D;
  local_68.Binding.SequenceID = param_1->SequenceID;
  local_68.Binding.ResolveParentIndex = param_1->ResolveParentIndex;
  local_res20 = param_3;
  iVar6 = TArray<FMovieSceneBindingOverrideData,TSizedDefaultAllocator<32>_>::
          RemoveAll<_UMovieSceneBindingOverrides::ResetBinding_::__l2::<lambda_1>_>
                    (&this->BindingData,&local_68);
  if (iVar6 != 0) {
    this->bLookupDirty = true;
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  iVar6 = param_2->ArrayNum;
  local_70 = pFVar9 + (longlong)iVar6 * 8;
  while( true ) {
    pFVar3 = local_70;
    if (param_2->ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar3) break;
    pUVar2 = *(UObject **)pFVar9;
    if (pUVar2 != (UObject *)0x0) {
      local_res10[0] = (this->BindingData).ArrayNum;
      TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
      Emplace<FGuid_const_&,int>
                ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>
                  *)&this->LookupMap,&param_1->Guid,local_res10);
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0xffffffff00000000;
      local_b0.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_b0.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_b0.WeakPtr.ObjectIndex = 0;
      local_b0.WeakPtr.ObjectSerialNumber = 0;
      local_res18 = 0;
      local_b0.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_b0.ObjectID.AssetPath.AssetName.Number = 0;
      local_b0.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_b0.ObjectID.AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&local_b0.ObjectID.SubPathString,0);
      local_c8._0_4_ = (param_1->Guid).A;
      local_c8._4_4_ = (param_1->Guid).B;
      uStack_c0._0_4_ = (param_1->Guid).C;
      uStack_c0._4_4_ = (param_1->Guid).D;
      local_88 = (FScriptContainerElement)0x1;
      local_b8._0_4_ = param_1->SequenceID;
      local_b8._4_4_ = param_1->ResolveParentIndex;
      local_78 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_b0,(FObjectPtr)&local_78);
      pFVar3 = (this->BindingData).AllocatorInstance.Data;
      local_88 = (FScriptContainerElement)(local_res20 ^ 1);
      if ((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
         ((FScriptContainerElement *)&local_c8 <
          pFVar3 + (longlong)(this->BindingData).ArrayMax * 0x48)) {
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
      iVar7 = (this->BindingData).ArrayNum;
      piVar1 = &(this->BindingData).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&(this->BindingData).AllocatorInstance,piVar1);
      }
      (this->BindingData).ArrayNum = iVar7 + 1;
      lVar8 = (longlong)iVar7;
      pFVar3 = (this->BindingData).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar8 * 0x48) = local_c8;
      *(undefined8 *)(pFVar3 + lVar8 * 0x48 + 8) = uStack_c0;
      *(undefined8 *)(pFVar3 + lVar8 * 0x48 + 0x10) = local_b8;
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar3 + lVar8 * 0x48 + 0x18),&local_b0);
      pFVar3[lVar8 * 0x48 + 0x40] = local_88;
      if (local_b0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// StaticRegisterNativesUMovieSceneBindingOverrides @ 146237ba0

void __cdecl UMovieSceneBindingOverrides::StaticRegisterNativesUMovieSceneBindingOverrides(void)

{
  return;
}

