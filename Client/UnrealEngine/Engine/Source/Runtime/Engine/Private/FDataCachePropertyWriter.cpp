// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FDataCachePropertyWriter @ 1477ec4b0

FDataCachePropertyWriter * __thiscall
FDataCachePropertyWriter::FDataCachePropertyWriter
          (FDataCachePropertyWriter *this,UObject *param_1,FInstanceCacheDataBase *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  this->_padding_ = (longlong)&param_2->SavedProperties;
  this->_padding_ = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xbd;
  *(undefined8 *)&(this->PropertiesToSkip).Elements = 0;
  *(undefined8 *)&(this->PropertiesToSkip).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesToSkip).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&___7FDataCachePropertyWriter__6B_;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x30 = 0xffffffff;
  (this->PropertiesToSkip).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PropertiesToSkip).HashSize = 0;
  (this->DuplicatedObjectAnnotation)._padding_ =
       (longlong)&___7__FUObjectAnnotationSparse_UFDuplicatedObject___0A___6B_;
  this->CacheObject = param_1;
  (this->DuplicatedObjectAnnotation).AnnotationMapCritical.Mutex.Mutex.Ptr = (void *)0x0;
  (this->DuplicatedObjectAnnotation).AnnotationCacheCritical.Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&(this->DuplicatedObjectAnnotation).AnnotationMap = 0;
  *(undefined8 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x8 = 0;
  *(undefined8 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x20 = 0;
  *(undefined4 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x28 = 0;
  *(undefined4 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x34 = 0;
  *(undefined4 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x40 = 0;
  *(undefined4 *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x48 = 0;
  (this->DuplicatedObjectAnnotation).AnnotationCacheKey = (UObjectBase *)0x0;
  (this->DuplicatedObjectAnnotation).AnnotationCacheValue.DuplicatedObject.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->DuplicatedObjectAnnotation).bRegistered = false;
  (this->DuplicatedObjectAnnotation).AnnotationCacheValue.bIsDefault = true;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 | 0x20000200;
  this->InstanceData = param_2;
  return this;
}

// ~FDataCachePropertyWriter @ 1477f3360

void __thiscall FDataCachePropertyWriter::~FDataCachePropertyWriter(FDataCachePropertyWriter *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FDataCachePropertyWriter__6B_;
  FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAllAnnotations
            (&this->DuplicatedObjectAnnotation);
  FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
            (&this->DuplicatedObjectAnnotation);
  (this->PropertiesToSkip).HashSize = 0;
  FVar1 = (this->PropertiesToSkip).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PropertiesToSkip).Elements);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 1477f5850

FArchive * __thiscall
FDataCachePropertyWriter::operator<<(FDataCachePropertyWriter *this,UObject **param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInstanceCacheDataBase *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObjectBaseUtility *this_00;
  FArchive *pFVar9;
  uint local_res8 [2];
  UObject *local_18 [2];
  
  this_00 = (UObjectBaseUtility *)*param_1;
  if ((this_00 != (UObjectBaseUtility *)0x0) && (this->CacheObject != (UObject *)0x0)) {
    bVar7 = UObjectBaseUtility::IsIn(this_00,this->CacheObject);
    if (bVar7) {
      this_00 = (UObjectBaseUtility *)GetDuplicatedObject(this,*param_1);
    }
  }
  local_res8[0] = 0xffffffff;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pFVar3 = this->InstanceData;
    local_res8[0] = (pFVar3->ReferencedObjects).ArrayNum;
    pTVar1 = &pFVar3->ReferencedObjects;
    local_18[0] = (UObject *)this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar4 + (longlong)(pFVar3->ReferencedObjects).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar6)();
        return pFVar9;
      }
    }
    iVar8 = (pFVar3->ReferencedObjects).ArrayNum;
    piVar2 = &(pFVar3->ReferencedObjects).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (pFVar3->ReferencedObjects).ArrayNum = iVar8 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
  }
  plVar5 = (longlong *)this->_padding_;
  if ((ulonglong)plVar5[1] < *plVar5 + 4U) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    *plVar5 = *plVar5 + 4;
  }
  return (FArchive *)this;
}

// operator<< @ 1477f59e0

FArchive * __thiscall
FDataCachePropertyWriter::operator<<(FDataCachePropertyWriter *this,FLazyObjectPtr *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] =
       TPersistentObjectPtr<FUniqueObjectGuid>::Get
                 ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_1);
  (**(code **)(this->_padding_ + 0x168))(this,local_res8);
  return (FArchive *)this;
}

// operator<< @ 1477f5a20

FArchive * __thiscall
FDataCachePropertyWriter::operator<<(FDataCachePropertyWriter *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 1477f5a30

FArchive * __thiscall
FDataCachePropertyWriter::operator<<(FDataCachePropertyWriter *this,FName *param_1)

{
  longlong *plVar1;
  uint local_res8 [8];
  
  local_res8[0] =
       TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                 (&this->InstanceData->ReferencedNames,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
  return (FArchive *)this;
}

// GetDuplicatedObject @ 1478371d0

UObject * __thiscall
FDataCachePropertyWriter::GetDuplicatedObject(FDataCachePropertyWriter *this,UObject *param_1)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  FUObjectAnnotationSparse<FDuplicatedObject,0> *this_00;
  int iVar2;
  FInstanceCacheDataBase *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UObject *pUVar9;
  UObjectBase *pUVar10;
  UClass *pUVar11;
  UObjectBase *pUVar12;
  FPlatformRWLock *pFVar13;
  FScriptContainerElement *pFVar14;
  UObjectBase *pUVar15;
  TPairInitializer<UObjectBase_const_*_const_&,FDuplicatedObject_const_&> local_res10;
  undefined8 local_res20;
  undefined4 local_b8;
  FWeakObjectPtr FStack_b4;
  undefined1 local_a8 [8];
  int local_a0;
  undefined8 local_98;
  int local_90;
  UObjectBase *local_88;
  FDuplicatedObject local_80;
  uint local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  FDuplicatedObject *local_68;
  UObjectBase *local_60;
  FDuplicatedObject local_58;
  UObjectBase **local_48;
  undefined8 *local_40;
  
  pUVar10 = (UObjectBase *)param_1;
  if ((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    this_00 = &this->DuplicatedObjectAnnotation;
    SRWLock = &(this->DuplicatedObjectAnnotation).AnnotationCacheCritical;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UObject *)(*pcVar5)();
      return pUVar9;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pUVar15 = (UObjectBase *)0x0;
    if ((UObjectBase *)param_1 == (this->DuplicatedObjectAnnotation).AnnotationCacheKey) {
      local_a8[0] = (this->DuplicatedObjectAnnotation).AnnotationCacheValue.bIsDefault;
      local_a8._1_3_ =
           *(undefined3 *)&(this->DuplicatedObjectAnnotation).AnnotationCacheValue.field_0x1;
      local_a8._4_4_ =
           (this->DuplicatedObjectAnnotation).AnnotationCacheValue.DuplicatedObject.WeakPtr.
           ObjectIndex;
      pFVar13 = SRWLock;
      local_a0 = (this->DuplicatedObjectAnnotation).AnnotationCacheValue.DuplicatedObject.WeakPtr.
                 ObjectSerialNumber;
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pFVar13 = &(this->DuplicatedObjectAnnotation).AnnotationMapCritical;
      if ((pFVar13 == (FPlatformRWLock *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0xa2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UObject *)(*pcVar5)();
        return pUVar9;
      }
      AcquireSRWLockShared((PSRWLOCK)pFVar13);
      local_68 = TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
                 ::Find((TMapBase<UObjectBase_const_*,FDuplicatedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>_>
                         *)&(this->DuplicatedObjectAnnotation).AnnotationMap,(UObjectBase *)param_1)
      ;
      if (local_68 == (FDuplicatedObject *)0x0) {
        local_80.bIsDefault = true;
        local_80.DuplicatedObject.WeakPtr.ObjectIndex = 0;
        local_80.DuplicatedObject.WeakPtr.ObjectSerialNumber = 0;
        FUObjectAnnotationSparse<FDuplicatedObject,0>::SetAnnotationCacheKeyAndValue
                  (this_00,(UObjectBase *)param_1,&local_80);
        local_74 = CONCAT31(local_74._1_3_,1);
        uStack_70 = 0;
        local_a8 = (undefined1  [8])(ulonglong)local_74;
        local_6c = 0;
        local_a0 = 0;
      }
      else {
        local_58.DuplicatedObject.WeakPtr.ObjectSerialNumber =
             (local_68->DuplicatedObject).WeakPtr.ObjectSerialNumber;
        local_58.bIsDefault = local_68->bIsDefault;
        local_58._1_3_ = *(undefined3 *)&local_68->field_0x1;
        local_58.DuplicatedObject.WeakPtr.ObjectIndex =
             (local_68->DuplicatedObject).WeakPtr.ObjectIndex;
        FUObjectAnnotationSparse<FDuplicatedObject,0>::SetAnnotationCacheKeyAndValue
                  (this_00,(UObjectBase *)param_1,&local_58);
        local_a8[0] = local_68->bIsDefault;
        local_a8._1_3_ = *(undefined3 *)&local_68->field_0x1;
        local_a8._4_4_ = (local_68->DuplicatedObject).WeakPtr.ObjectIndex;
        local_a0 = (local_68->DuplicatedObject).WeakPtr.ObjectSerialNumber;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)pFVar13);
    if (local_a8[0] == '\0') {
      pUVar10 = (UObjectBase *)
                FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(local_a8 + 4));
    }
    else if (*(UObject **)&param_1->field_0x20 == this->CacheObject) {
      local_res10.Value = (FDuplicatedObject *)0x0;
      pUVar9 = FInstanceCacheDataBase::GetUniqueTransientObject
                         (this->InstanceData,*(UClass **)&param_1->field_0x10);
      pUVar11 = Z_Construct_UClass_UObject_NoRegister();
      pUVar10 = (UObjectBase *)DuplicateObject_Internal(pUVar11,param_1,pUVar9,(FName)0x0);
      pFVar3 = this->InstanceData;
      piVar1 = &(pFVar3->DuplicatedObjects).ArrayMax;
      iVar7 = (pFVar3->DuplicatedObjects).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar3->DuplicatedObjects).AllocatorInstance,piVar1);
      }
      pFVar14 = (pFVar3->DuplicatedObjects).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      (pFVar3->DuplicatedObjects).ArrayNum = iVar7 + 1;
      *(UObjectBase **)pFVar14 = pUVar10;
      *(undefined4 *)(pFVar14 + 8) = 0;
      for (pUVar12 = pUVar10; pUVar12 != (UObjectBase *)0x0;
          pUVar12 = (UObjectBase *)(pUVar12->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr) {
        uVar8 = (int)pUVar15 + 1;
        *(uint *)(pFVar14 + 8) = uVar8;
        pUVar15 = (UObjectBase *)(ulonglong)uVar8;
      }
    }
    else {
      bVar6 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,this->CacheObject);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object->IsIn(CacheObject)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentInstanceDataCache.cpp"
                             ,0x57,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UObject *)(*pcVar5)();
        return pUVar9;
      }
      pUVar12 = (UObjectBase *)GetDuplicatedObject(this,*(UObject **)&param_1->field_0x20);
      if (pUVar12 != (UObjectBase *)0x0) {
        FVar4.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        FVar4.Number = *(uint *)&param_1->field_0x1c;
        pUVar10 = FindObjectWithOuter(pUVar12,*(UClass **)&param_1->field_0x10,FVar4);
        if (pUVar10 == (UObjectBase *)0x0) {
          local_res20 = 0;
          pUVar10 = (UObjectBase *)DuplicateObject<UObject>(param_1,(UObject *)pUVar12,(FName)0x0);
        }
        local_b8 = CONCAT31(local_b8._1_3_,pUVar10 == (UObjectBase *)0x0);
        if (pUVar10 != (UObjectBase *)0xffffffffffffffff) {
          pUVar15 = pUVar10;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObjectBase *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        FStack_b4.ObjectIndex = 0;
        FStack_b4.ObjectSerialNumber = 0;
        local_60 = pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObjectBase *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        FWeakObjectPtr::operator=(&FStack_b4,(FObjectPtr)&local_60);
        local_98 = CONCAT44(FStack_b4.ObjectIndex,local_b8);
        local_90 = FStack_b4.ObjectSerialNumber;
        local_88 = (UObjectBase *)param_1;
        if (pUVar10 == (UObjectBase *)0x0) {
          FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAnnotation
                    (this_00,(UObjectBase *)param_1);
        }
        else {
          pFVar13 = &(this->DuplicatedObjectAnnotation).AnnotationMapCritical;
          if ((pFVar13 == (FPlatformRWLock *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                 ,0xa2,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pUVar9 = (UObject *)(*pcVar5)();
            return pUVar9;
          }
          AcquireSRWLockExclusive((PSRWLOCK)pFVar13);
          iVar7 = *(int *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x34;
          iVar2 = *(int *)&(this->DuplicatedObjectAnnotation).AnnotationMap.field_0x8;
          local_48 = &local_88;
          local_40 = &local_98;
          TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FDuplicatedObject_const_&>_>
                    ((TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
                      *)&(this->DuplicatedObjectAnnotation).AnnotationMap,&local_res10,
                     (bool *)&local_48);
          pUVar15 = local_88;
          if ((SRWLock == (FPlatformRWLock *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                 ,0xa2,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pUVar9 = (UObject *)(*pcVar5)();
            return pUVar9;
          }
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
          (this->DuplicatedObjectAnnotation).AnnotationCacheValue.bIsDefault =
               (bool)(undefined1)local_98;
          *(undefined3 *)&(this->DuplicatedObjectAnnotation).AnnotationCacheValue.field_0x1 =
               local_98._1_3_;
          (this->DuplicatedObjectAnnotation).AnnotationCacheValue.DuplicatedObject.WeakPtr.
          ObjectIndex = local_98._4_4_;
          (this->DuplicatedObjectAnnotation).AnnotationCacheValue.DuplicatedObject.WeakPtr.
          ObjectSerialNumber = local_90;
          (this->DuplicatedObjectAnnotation).AnnotationCacheKey = pUVar15;
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
          ReleaseSRWLockExclusive((PSRWLOCK)pFVar13);
          if (iVar2 == iVar7) {
            FUObjectAnnotationSparse<FDuplicatedObject,0>::ProcessRegistration(this_00);
          }
        }
      }
    }
  }
  return (UObject *)pUVar10;
}

// SerializeProperties @ 1478648b0

void __thiscall FDataCachePropertyWriter::SerializeProperties(FDataCachePropertyWriter *this)

{
  int iVar1;
  UStruct *this_00;
  UObject *pUVar2;
  FIdentityFunctor local_res8 [8];
  
  pUVar2 = this->CacheObject;
  if (pUVar2 != (UObject *)0x0) {
    this_00 = *(UStruct **)&pUVar2->field_0x10;
    pUVar2 = UObject::GetArchetype(pUVar2);
    UStruct::SerializeTaggedProperties
              (this_00,(FArchive *)this,(uchar *)this->CacheObject,this_00,(uchar *)pUVar2,
               (UObject *)0x0);
    iVar1 = (this->InstanceData->DuplicatedObjects).ArrayNum;
    if (0 < iVar1) {
      AlgoImpl::
      StableSortInternal<FDataCacheDuplicatedObjectData,FIdentityFunctor,TDereferenceWrapper<FDataCacheDuplicatedObjectData,_FDataCachePropertyWriter::SerializeProperties_::__l8::<lambda_1>_>_>
                ((FDataCacheDuplicatedObjectData *)
                 (this->InstanceData->DuplicatedObjects).AllocatorInstance.Data,iVar1,local_res8[0],
                 (<lambda_1> *)local_res8);
    }
  }
  return;
}

// ShouldSkipProperty @ 14786f930

bool __thiscall
FDataCachePropertyWriter::ShouldSkipProperty(FDataCachePropertyWriter *this,FProperty *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  
  pUVar4 = Z_Construct_UClass_UScriptStruct_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&param_1->_padding_,pUVar4);
  if (((!bVar2) || (uVar5 = param_1->_padding_ & 0xfffffffffffffffe, uVar5 == 0)) ||
     ((*(byte *)(uVar5 + 0xb0) & 0x20) == 0)) {
    if ((((param_1->PropertyFlags >> 0xd & 1) != 0) ||
        ((param_1->PropertyFlags & (CPF_Interp|CPF_Edit)) == CPF_None)) ||
       ((*(uint *)(param_1->_padding_ + 0x18) >> 0x19 & 1) != 0)) {
      return true;
    }
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(this->PropertiesToSkip).Elements.field_0x8 !=
        *(int *)&(this->PropertiesToSkip).Elements.field_0x34) {
      FVar7 = (this->PropertiesToSkip).Hash.SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&(this->PropertiesToSkip).Hash;
      }
      iVar3 = *(int *)((longlong)FVar7 +
                      (ulonglong)((this->PropertiesToSkip).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6))
                      * 4);
      if (iVar3 != -1) {
        lVar1 = *(longlong *)&(this->PropertiesToSkip).Elements;
        do {
          if (*(FProperty **)(lVar1 + (longlong)iVar3 * 0x10) == param_1) {
            return true;
          }
          iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
        } while (iVar3 != -1);
      }
    }
  }
  return false;
}

