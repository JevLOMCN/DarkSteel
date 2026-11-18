// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// FDuplicateDataWriter @ 141f211f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FDuplicateDataWriter * __thiscall
FDuplicateDataWriter::FDuplicateDataWriter
          (FDuplicateDataWriter *this,FUObjectAnnotationSparse<FDuplicatedObject,0> *param_1,
          FLargeMemoryData *param_2,UObject *param_3,UObject *param_4,EObjectFlags param_5,
          EObjectFlags param_6,EInternalObjectFlags param_7,EInternalObjectFlags param_8,
          FObjectInstancingGraph *param_9,uint param_10,bool param_11)

{
  uint *puVar1;
  byte bVar2;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->DuplicatedObjectAnnotation = param_1;
  this->Offset = 0;
  this->_padding_ = (longlong)&___7FDuplicateDataWriter__6B_;
  this->FlagMask = param_5;
  this->ApplyFlags = param_6;
  this->InternalFlagMask = param_7;
  this->ApplyInternalFlags = param_8;
  this->bAssignExternalPackages = param_11;
  (this->UnserializedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnserializedObjects).ArrayNum = 0;
  (this->UnserializedObjects).ArrayMax = 0;
  this->InstanceGraph = param_9;
  this->ObjectData = param_2;
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT31((uint3)(param_10 >> 0x1e),~(byte)(param_10 >> 0x16)) & 0xffffff01);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | param_10 | 0x1000;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0x77 | 8;
  AddDuplicate(this,param_3,param_4);
  return this;
}

// operator<< @ 141f25000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchive * __thiscall FDuplicateDataWriter::operator<<(FDuplicateDataWriter *this,FField **param_1)

{
  return (FArchive *)this;
}

// operator<< @ 141f25010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchive * __thiscall FDuplicateDataWriter::operator<<(FDuplicateDataWriter *this,UObject **param_1)

{
  longlong lVar1;
  UObject *local_res8;
  
  if (((*param_1 == (UObject *)0x0) || ((*(uint *)&(*param_1)->field_0x8 >> 0x17 & 1) != 0)) ||
     (((*(uint *)&(*param_1)->field_0x8 >> 0x19 & 1) != 0 &&
      ((this->_padding_ & 0x40000000000000) == 0)))) {
    lVar1 = this->_padding_;
    param_1 = &local_res8;
    local_res8 = (UObject *)0x0;
  }
  else {
    GetDuplicatedObject(this,*param_1,true);
    lVar1 = this->_padding_;
  }
  (**(code **)(lVar1 + 0x188))(this,param_1,8);
  return (FArchive *)this;
}

// operator<< @ 141f25090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchive * __thiscall
FDuplicateDataWriter::operator<<(FDuplicateDataWriter *this,FLazyObjectPtr *param_1)

{
  bool bVar1;
  UObjectBase *pUVar2;
  UObjectBase *pUVar3;
  FGuid *pFVar4;
  FDuplicatedObject local_58;
  TPersistentObjectPtr<FUniqueObjectGuid> local_48;
  FGuid local_30;
  
  if ((this->_padding_ & 0x40000000000000) == 0) {
    pUVar2 = (UObjectBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if ((pUVar2 == (UObjectBase *)0x0) &&
       (((*(int *)&param_1->field_0x14 != 0 || *(int *)&param_1->field_0x10 != 0) ||
        *(int *)&param_1->field_0xc != 0) || *(int *)&param_1->field_0x8 != 0)) {
      pUVar3 = (UObjectBase *)
               FUniqueObjectGuid::ResolveObject((FUniqueObjectGuid *)&param_1->field_0x8);
      local_58._0_8_ = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      bVar1 = TPersistentObjectPtr<FUniqueObjectGuid>::CanCacheObjectPointer
                        ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_1,(FObjectPtr)&local_58);
      if (bVar1) {
        local_58._0_8_ = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObjectBase *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_58);
      }
      if ((pUVar3 == (UObjectBase *)0x0) || ((pUVar3->ObjectFlags >> 0x1e & 1) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      pUVar2 = (UObjectBase *)0x0;
      if (bVar1) {
        pUVar2 = pUVar3;
      }
    }
    pUVar3 = (UObjectBase *)0x0;
    if ((pUVar2 != (UObjectBase *)0x0) && ((pUVar2->ObjectFlags >> 0x1e & 1) == 0)) {
      FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
                (this->DuplicatedObjectAnnotation,&local_58,pUVar2);
      pUVar3 = (UObjectBase *)0x0;
      if (local_58.bIsDefault == false) {
        pUVar3 = (UObjectBase *)
                 FWeakObjectPtr::GetEvenIfUnreachable(&local_58.DuplicatedObject.WeakPtr);
      }
    }
    if (pUVar3 != (UObjectBase *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      local_48.WeakPtr.ObjectIndex = 0;
      local_48.WeakPtr.ObjectSerialNumber = 0;
      local_48.ObjectID.Guid.C = 0;
      local_48.ObjectID.Guid.D = 0;
      local_48.ObjectID.Guid.A = 0;
      local_48.ObjectID.Guid.B = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      local_58._0_8_ = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_48,(FObjectPtr)&local_58);
      pFVar4 = &local_48.ObjectID.Guid;
      goto LAB_141f251fd;
    }
  }
  local_30.A = *(uint *)&param_1->field_0x8;
  local_30.B = *(uint *)&param_1->field_0xc;
  local_30.C = *(uint *)&param_1->field_0x10;
  local_30.D = *(uint *)&param_1->field_0x14;
  pFVar4 = &local_30;
LAB_141f251fd:
  ::operator<<((FArchive *)this,pFVar4);
  return (FArchive *)this;
}

// operator<< @ 141f25220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchive * __thiscall
FDuplicateDataWriter::operator<<(FDuplicateDataWriter *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = param_1->field0_0x0;
  (**(code **)(this->_padding_ + 0x168))(this,local_res8);
  return (FArchive *)this;
}

// operator<< @ 141f25250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchive * __thiscall FDuplicateDataWriter::operator<<(FDuplicateDataWriter *this,FName *param_1)

{
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res8[0] = (param_1->ComparisonIndex).Value;
  local_res18[0] = param_1->Number;
  local_res10[0] = local_res8[0];
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8,4);
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res10,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10,4);
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18,4);
  return (FArchive *)this;
}

// AddDuplicate @ 141f28dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FDuplicateDataWriter::AddDuplicate(FDuplicateDataWriter *this,UObject *param_1,UObject *param_2)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FUObjectAnnotationSparse<FDuplicatedObject,0> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UObjectBase *pUVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  undefined1 local_res8 [8];
  UObjectBase *local_res10;
  UObjectBase *local_res18;
  UObject *local_res20;
  UObject *local_98;
  undefined4 local_90;
  FWeakObjectPtr FStack_8c;
  undefined8 local_80;
  int local_78;
  FDuplicatedObject local_70;
  UObjectBase **local_60;
  undefined8 *local_58;
  
  local_res10 = (UObjectBase *)param_1;
  if (param_2 != (UObject *)0x0) {
    bVar7 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)param_2,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar7) {
      UObjectBase::AtomicallySetFlags
                ((UObjectBase *)param_2,RF_NeedPostLoadSubobjects|RF_NeedPostLoad);
    }
  }
  FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
            (this->DuplicatedObjectAnnotation,&local_70,local_res10);
  if (local_70.bIsDefault == false) {
    local_98 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_70.DuplicatedObject.WeakPtr,(FObjectPtr)&local_98);
  }
  else {
    this_00 = this->DuplicatedObjectAnnotation;
    local_90 = CONCAT31(local_90._1_3_,param_2 == (UObject *)0x0);
    pUVar9 = (UObject *)0x0;
    if (param_2 != (UObject *)0xffffffffffffffff) {
      pUVar9 = param_2;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FStack_8c.ObjectIndex = 0;
    FStack_8c.ObjectSerialNumber = 0;
    local_res20 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&FStack_8c,(FObjectPtr)&local_res20);
    local_res18 = local_res10;
    if (local_res10 == (UObjectBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_80 = CONCAT44(FStack_8c.ObjectIndex,local_90);
    local_78 = FStack_8c.ObjectSerialNumber;
    if ((char)local_90 == '\0') {
      SRWLock = &this_00->AnnotationMapCritical;
      if (SRWLock == (FPlatformRWLock *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      iVar8 = *(int *)&(this_00->AnnotationMap).field_0x34;
      iVar3 = *(int *)&(this_00->AnnotationMap).field_0x8;
      local_60 = &local_res18;
      local_58 = &local_80;
      TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FDuplicatedObject_const_&>_>
                ((TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
                  *)&this_00->AnnotationMap,
                 (TPairInitializer<UObjectBase_const_*_const_&,FDuplicatedObject_const_&> *)
                 local_res8,(bool *)&local_60);
      pUVar6 = local_res18;
      SRWLock_00 = &this_00->AnnotationCacheCritical;
      if (SRWLock_00 == (FPlatformRWLock *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
      (this_00->AnnotationCacheValue).bIsDefault = (bool)(undefined1)local_80;
      *(undefined3 *)&(this_00->AnnotationCacheValue).field_0x1 = local_80._1_3_;
      (this_00->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectIndex = local_80._4_4_;
      (this_00->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectSerialNumber = local_78;
      this_00->AnnotationCacheKey = pUVar6;
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      if (iVar3 == iVar8) {
        FUObjectAnnotationSparse<FDuplicatedObject,0>::ProcessRegistration(this_00);
      }
    }
    else {
      FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAnnotation(this_00,local_res18);
    }
  }
  pTVar2 = &this->UnserializedObjects;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar4 + (longlong)(this->UnserializedObjects).ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->UnserializedObjects).ArrayNum;
  piVar1 = &(this->UnserializedObjects).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->UnserializedObjects).ArrayNum = iVar8 + 1;
  *(UObjectBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_res10;
  return;
}

// GetArchiveName @ 141f32ed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall
FDuplicateDataWriter::GetArchiveName(FDuplicateDataWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDuplicateDataWriter");
  return __return_storage_ptr__;
}

// GetDuplicatedObject @ 141f34850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FDuplicateDataWriter::GetDuplicatedObject(FDuplicateDataWriter *this,UObject *param_1,bool param_2)

{
  EInternalObjectFlags EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  UObjectBase *this_00;
  UPackage *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  FDuplicatedObject local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    return (UObject *)0x0;
  }
  FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
            (this->DuplicatedObjectAnnotation,&local_b8,(UObjectBase *)param_1);
  if (local_b8.bIsDefault == false) {
    pUVar5 = FWeakObjectPtr::GetEvenIfUnreachable(&local_b8.DuplicatedObject.WeakPtr);
    return pUVar5;
  }
  if (!param_2) {
    return (UObject *)0x0;
  }
  local_a8._8_8_ = GetDuplicatedObject(this,*(UObject **)&param_1->field_0x20,true);
  if ((UObject *)local_a8._8_8_ == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,*(UClass **)&param_1->field_0x10);
  local_a8._16_4_ = *(uint *)&param_1->field_0x18;
  local_a8._20_4_ = *(uint *)&param_1->field_0x1c;
  local_a8._24_4_ = this->FlagMask & *(EObjectFlags *)&param_1->field_0x8 | this->ApplyFlags;
  EVar1 = this->InternalFlagMask;
  iVar2 = *(int *)&param_1->field_0xc;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar3)();
    return pUVar5;
  }
  if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
    pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
  }
  else {
    pFVar6 = (FUObjectItem *)0x0;
  }
  local_a8._28_4_ =
       (EInternalObjectFlags)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) & EVar1 |
       this->ApplyInternalFlags;
  local_a8._40_8_ = UObject::GetArchetype(param_1);
  local_a8._48_8_ = this->InstanceGraph;
  local_a8[0x20] = true;
  this_00 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (this->bAssignExternalPackages != false) {
    pUVar7 = UObjectBase::GetExternalPackage((UObjectBase *)param_1);
    pUVar7 = (UPackage *)GetDuplicatedObject(this,(UObject *)pUVar7,false);
    if (pUVar7 != (UPackage *)0x0) {
      pUVar8 = Z_Construct_UClass_UPackage_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) goto LAB_141f349ec;
    }
  }
  pUVar7 = (UPackage *)0x0;
LAB_141f349ec:
  UObjectBase::SetExternalPackage(this_00,pUVar7);
  AddDuplicate(this,param_1,(UObject *)this_00);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return (UObject *)this_00;
}

// Seek @ 141f43f90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDuplicateDataWriter::Seek(FDuplicateDataWriter *this,long64 param_1)

{
  this->Offset = param_1;
  return;
}

// Serialize @ 141f44860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FDuplicateDataWriter::Serialize(FDuplicateDataWriter *this,void *param_1,long64 param_2)

{
  bool bVar1;
  
  bVar1 = FLargeMemoryData::Write(this->ObjectData,param_1,this->Offset,param_2);
  if (bVar1) {
    this->Offset = this->Offset + param_2;
  }
  return;
}

// Tell @ 141f4e0b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

long64 __thiscall FDuplicateDataWriter::Tell(FDuplicateDataWriter *this)

{
  return this->Offset;
}

// TotalSize @ 141f4e0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

long64 __thiscall FDuplicateDataWriter::TotalSize(FDuplicateDataWriter *this)

{
  return this->ObjectData->NumBytes;
}

