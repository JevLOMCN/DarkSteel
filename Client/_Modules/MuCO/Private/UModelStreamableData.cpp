// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 9

// StaticClass @ 14ab9a470

UClass * __cdecl UModelStreamableData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelStreamableData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"ModelStreamableData",
               &Z_Registration_Info_UClass_UModelStreamableData.InnerSingleton,
               StaticRegisterNativesUModelStreamableData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModelStreamableData>,
               InternalVTableHelperCtorCaller<UModelStreamableData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelStreamableData.InnerSingleton;
}

// UModelStreamableData @ 14aba0dc0

UModelStreamableData * __thiscall
UModelStreamableData::UModelStreamableData(UModelStreamableData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModelStreamableData__6B_;
  (this->StreamingData).Object = (FModelStreamableBulkData *)0x0;
  (this->StreamingData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UModelStreamableData @ 14aba2f60

void __thiscall UModelStreamableData::~UModelStreamableData(UModelStreamableData *this)

{
  this->_padding_ = (longlong)&___7UModelStreamableData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamingData).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14aba5810

UClass * __cdecl UModelStreamableData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelStreamableData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"ModelStreamableData",
               &Z_Registration_Info_UClass_UModelStreamableData.InnerSingleton,
               StaticRegisterNativesUModelStreamableData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModelStreamableData>,
               InternalVTableHelperCtorCaller<UModelStreamableData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelStreamableData.InnerSingleton;
}

// Serialize @ 14aba6920

void __thiscall
UModelStreamableData::Serialize(UModelStreamableData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUModelStreamableData @ 14aba69f0

void __cdecl UModelStreamableData::StaticRegisterNativesUModelStreamableData(void)

{
  return;
}

// UModelStreamableData @ 14abbdc30

UModelStreamableData * __thiscall
UModelStreamableData::UModelStreamableData(UModelStreamableData *this)

{
  TSharedPtr<FModelStreamableBulkData,1> *pTVar1;
  TSharedRef<FModelStreamableBulkData,1> *pTVar2;
  FModelStreamableBulkData *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FModelStreamableBulkData,1> local_18;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UModelStreamableData__6B_;
  pTVar1 = &this->StreamingData;
  pTVar1->Object = (FModelStreamableBulkData *)0x0;
  (this->StreamingData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2 = MakeShared<FModelStreamableBulkData,1>(&local_18);
  local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28 = pTVar2->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FModelStreamableBulkData,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FModelStreamableBulkData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StreamingData).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// PostLoad @ 14abebce0

void __thiscall UModelStreamableData::PostLoad(UModelStreamableData *this)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  int iVar4;
  FName local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  UObject::PostLoad((UObject *)this);
  if ((this->StreamingData).Object != (FModelStreamableBulkData *)0x0) {
    pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    local_res8[0] = (FName)pUVar3->_padding_;
    ::FName::ToString(local_res8,&local_18);
    ::FString::FString(&local_28,L"");
    FPackageName::LongPackageNameToFilename(&local_38,&local_18,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FPaths::MakeStandardFilename(&local_38);
    if ((this->StreamingData).Object == (FModelStreamableBulkData *)0x0) {
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
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              (&((this->StreamingData).Object)->FullFilePath,
               (wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 14abf07c0

void __thiscall UModelStreamableData::Serialize(UModelStreamableData *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  bool bVar4;
  FModelStreamableBulkData *this_00;
  UObject *pUVar5;
  uint uVar6;
  bool bVar7;
  uint local_res10 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  bVar7 = SUB41(uVar6,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = uVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar6 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14abf0859;
  }
  else {
    uVar6 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar7 = uVar6 != 0;
LAB_14abf0859:
  if (((bVar7 != false) &&
      (bVar4 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
      !bVar4)) && ((param_1->field_0x2b & 4) == 0)) {
    if (((this->StreamingData).Object == (FModelStreamableBulkData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StreamingData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x871,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = TSharedPtr<FModelStreamableBulkData,1>::operator->(&this->StreamingData);
    pUVar5 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this);
    FModelStreamableBulkData::Serialize(this_00,param_1,pUVar5,bVar7);
  }
  return;
}

