// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticStruct @ 14e11b880

UScriptStruct * __cdecl FOptimusDataTypeRef::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDataTypeRef.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDataTypeRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataTypeRef,(UObject *)pUVar1,
                         L"OptimusDataTypeRef");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDataTypeRef.OuterSingleton;
}

// FOptimusDataTypeRef @ 14e151750

FOptimusDataTypeRef * __thiscall
FOptimusDataTypeRef::FOptimusDataTypeRef
          (FOptimusDataTypeRef *this,TSharedPtr<FOptimusDataType_const_,1> *param_1)

{
  undefined1 *this_00;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  this_00 = &(this->TypeObject).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TypeObject).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TypeObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TypeObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TypeObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Set(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FOptimusDataTypeRef @ 14e1612c0

void __thiscall FOptimusDataTypeRef::~FOptimusDataTypeRef(FOptimusDataTypeRef *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&(this->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator-> @ 14e166390

FOptimusDataType * __thiscall FOptimusDataTypeRef::operator->(FOptimusDataTypeRef *this)

{
  FOptimusDataType *pFVar1;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar2;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  pTVar2 = Resolve(this,&local_18);
  pFVar1 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar1;
}

// PostSerialize @ 14e2006f0

void __thiscall FOptimusDataTypeRef::PostSerialize(FOptimusDataTypeRef *this,FArchive *param_1)

{
  longlong lVar1;
  FOptimusDataTypeRegistry *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  UObject *local_res10;
  
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar2 = FOptimusDataTypeRegistry::Get();
    pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&pFVar2->RegisteredTypes,this->TypeName);
    plVar4 = (longlong *)&pTVar3->field_0x10;
    if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      lVar1 = *plVar4;
      pTVar5 = (TReferenceControllerBase<1> *)plVar4[1];
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (lVar1 != 0) {
        local_res10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x2c));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res10);
        }
        FSoftObjectPtr::operator=(&(this->TypeObject).SoftObjectPtr,(FObjectPtr)&local_res10);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// Resolve @ 14e219960

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRef::Resolve
          (FOptimusDataTypeRef *this,TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  FOptimusDataTypeRegistry *this_00;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar5;
  UObject *pUVar6;
  UScriptStruct *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  FSharedReferencer<1> FVar10;
  FOptimusDataType *pFVar11;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *local_30;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  pTVar5 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this_00->RegisteredTypes,this->TypeName);
  if ((pTVar5 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
     (&pTVar5->field_0x10 == (undefined1 *)0x0)) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar11 = *(FOptimusDataType **)&pTVar5->field_0x10;
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar11;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (__return_storage_ptr__->Object != (FOptimusDataType *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TypeObject);
  if (pUVar6 == (UObject *)0x0) {
    if (*(longlong *)&(this->TypeObject).SoftObjectPtr.field_0x8 == 0) {
      return __return_storage_ptr__;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->TypeObject).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TypeObject);
    if (pUVar6 == (UObject *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar7 = (UScriptStruct *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TypeObject);
  if (pUVar7 != (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_14e219a58;
  }
  pUVar7 = (UScriptStruct *)0x0;
LAB_14e219a58:
  bVar4 = FOptimusDataTypeRegistry::RegisterStructType(this_00,pUVar7);
  if (bVar4) {
    pTVar5 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&this_00->RegisteredTypes,this->TypeName);
    if ((pTVar5 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
       (&pTVar5->field_0x10 == (undefined1 *)0x0)) {
      bVar3 = false;
      bVar4 = true;
      puVar9 = &local_48;
      pFVar11 = (FOptimusDataType *)0x0;
      local_40 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar11 = *(FOptimusDataType **)&pTVar5->field_0x10;
      bVar3 = true;
      bVar4 = false;
      local_30 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar9 = &local_38;
    }
    FVar10.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    puVar9[1] = 0;
    *puVar9 = 0;
    local_58.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    }
    if (__return_storage_ptr__ != &local_58) {
      __return_storage_ptr__->Object = pFVar11;
      local_58.Object = (FOptimusDataType *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_58.SharedReferenceCount);
      FVar10.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Set @ 14e21bb50

void __thiscall
FOptimusDataTypeRef::Set(FOptimusDataTypeRef *this,TSharedPtr<FOptimusDataType_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *local_res18 [2];
  
  if (param_1->Object == (FOptimusDataType *)0x0) {
    (this->TypeName).ComparisonIndex = 0;
    (this->TypeName).Number = 0;
    *(undefined8 *)&(this->TypeObject).SoftObjectPtr = 0;
    *(undefined8 *)&(this->TypeObject).SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&(this->TypeObject).SoftObjectPtr.field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->TypeObject).SoftObjectPtr.field_0x18,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  this->TypeName = param_1->Object->TypeName;
  if (param_1->Object == (FOptimusDataType *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0] = FWeakObjectPtr::Get(&(param_1->Object->TypeObject).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FSoftObjectPtr::operator=(&(this->TypeObject).SoftObjectPtr,(FObjectPtr)local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

