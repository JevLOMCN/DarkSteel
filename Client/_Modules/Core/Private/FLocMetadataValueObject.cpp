// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FLocMetadataValueObject @ 1416d5f80

FLocMetadataValueObject * __thiscall
FLocMetadataValueObject::FLocMetadataValueObject
          (FLocMetadataValueObject *this,FStructuredArchiveSlot param_1)

{
  code *pcVar1;
  FSlotBase FVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FArchiveState *pFVar6;
  FLocMetadataValueObject *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSlotBase local_res10;
  
  this->_padding_ = (longlong)&___7FLocMetadataValueObject__6B_;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pTVar4 = ::operator_new(0x50);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar5;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar4->_padding_ = 0;
    pTVar4->SharedReferenceCount = (atomic<int>)0x0;
    pTVar4->WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[3]._padding_ + 4) = 0;
    pTVar4[4]._padding_ = 0;
    pTVar8 = pTVar4;
  }
  (this->Value).Object = (FLocMetadataObject *)pTVar8;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    *(undefined ***)&pTVar4->_padding_ =
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataObject__U__DefaultDeleter_VFLocMetadataObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar8;
    pTVar5 = pTVar4;
  }
  (this->Value).SharedReferenceCount.ReferenceController = pTVar5;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  if ((pFVar6->ArIsLoading == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slot.GetArchiveState().IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                         ,0x279,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FLocMetadataValueObject *)(*pcVar1)();
    return pFVar7;
  }
  FVar2.StructuredArchive = local_res10.StructuredArchive;
  if (((this->Value).Object == (FLocMetadataObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FLocMetadataValueObject *)(*pcVar1)();
    return pFVar7;
  }
  ::operator<<((FStructuredArchiveSlot)FVar2.StructuredArchive,(this->Value).Object);
  return this;
}

// AsObject @ 1416e1290

TSharedPtr<FLocMetadataObject,1> * __thiscall
FLocMetadataValueObject::AsObject
          (FLocMetadataValueObject *this,TSharedPtr<FLocMetadataObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Value).Object;
  pTVar1 = (this->Value).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Clone @ 1416e3700

TSharedRef<FLocMetadataValue,1> * __thiscall
FLocMetadataValueObject::Clone
          (FLocMetadataValueObject *this,TSharedRef<FLocMetadataValue,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *this_00;
  TSharedRef<FLocMetadataValue,1> *pTVar3;
  atomic<int> *paVar4;
  TRawPtrProxy<FLocMetadataObject> local_res10;
  TRawPtrProxy<FLocMetadataValueObject> local_res18;
  TSharedRef<FLocMetadataObject,1> local_18;
  
  this_00 = ::operator_new(0x50);
  local_res10.Object = (FLocMetadataObject *)0x0;
  if (this_00 != (FLocMetadataObject *)0x0) {
    if ((this->Value).Object == (FLocMetadataObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FLocMetadataValue,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    local_res10.Object = FLocMetadataObject::FLocMetadataObject(this_00,(this->Value).Object);
  }
  TSharedRef<FLocMetadataObject,1>::TSharedRef<FLocMetadataObject,1><FLocMetadataObject>
            (&local_18,&local_res10);
  local_res18.Object = ::operator_new(0x18);
  if (local_res18.Object == (FLocMetadataValueObject *)0x0) {
    local_res18.Object = (FLocMetadataValueObject *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar4 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar4 = &(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    (local_res18.Object)->_padding_ = (longlong)&___7FLocMetadataValueObject__6B_;
    ((local_res18.Object)->Value).Object = local_18.Object;
    ((local_res18.Object)->Value).SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  TSharedRef<FLocMetadataValue,1>::TSharedRef<FLocMetadataValue,1><FLocMetadataValueObject>
            (__return_storage_ptr__,&local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// EqualTo @ 1416ecda0

bool __thiscall
FLocMetadataValueObject::EqualTo(FLocMetadataValueObject *this,FLocMetadataValue *param_1)

{
  FLocMetadataValue *pFVar1;
  FLocMetadataObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar2 = (this->Value).Object;
  pFVar1 = param_1 + 1;
  if (pFVar2 == (FLocMetadataObject *)0x0) {
    bVar4 = false;
    if (*pFVar1 == (FLocMetadataValue)0x0) {
      return true;
    }
  }
  else {
    bVar4 = *pFVar1 == (FLocMetadataValue)0x0;
  }
  if ((pFVar2 != (FLocMetadataObject *)0x0) != !bVar4) {
    return false;
  }
  if (pFVar2 == (FLocMetadataObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
  }
  pFVar2 = (this->Value).Object;
  if (*pFVar1 == (FLocMetadataValue)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
  }
  bVar4 = FLocMetadataObject::operator==(pFVar2,(FLocMetadataObject *)*pFVar1);
  return bVar4;
}

// GetType @ 1416fc6c0

ELocMetadataType __thiscall FLocMetadataValueObject::GetType(FLocMetadataValueObject *this)

{
  return Object;
}

// GetTypeString @ 1416fc740

FString * __thiscall
FLocMetadataValueObject::GetTypeString
          (FLocMetadataValueObject *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Object");
  return __return_storage_ptr__;
}

// LessThan @ 141703c80

bool __thiscall
FLocMetadataValueObject::LessThan(FLocMetadataValueObject *this,FLocMetadataValue *param_1)

{
  FLocMetadataValue *pFVar1;
  FLocMetadataObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar2 = (this->Value).Object;
  pFVar1 = param_1 + 1;
  if (pFVar2 == (FLocMetadataObject *)0x0) {
    bVar4 = false;
    if (*pFVar1 == (FLocMetadataValue)0x0) {
      return false;
    }
  }
  else {
    bVar4 = *pFVar1 == (FLocMetadataValue)0x0;
  }
  bVar4 = !bVar4;
  if ((pFVar2 != (FLocMetadataObject *)0x0) == bVar4) {
    if (pFVar2 == (FLocMetadataObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
    }
    pFVar2 = (this->Value).Object;
    if (*pFVar1 == (FLocMetadataValue)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
    }
    bVar4 = FLocMetadataObject::operator<(pFVar2,(FLocMetadataObject *)*pFVar1);
  }
  return bVar4;
}

// Serialize @ 1417101d0

void __cdecl
FLocMetadataValueObject::Serialize(FLocMetadataValueObject *param_1,FStructuredArchiveSlot param_2)

{
  code *pcVar1;
  FSlotBase FVar2;
  bool bVar3;
  FArchiveState *pFVar4;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_2;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  if (pFVar4->ArIsLoading != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x280,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.StructuredArchive = local_res10[0].StructuredArchive;
  if ((param_1->Value).Object == (FLocMetadataObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::operator<<((FStructuredArchiveSlot)FVar2.StructuredArchive,(param_1->Value).Object);
  return;
}

// ToString @ 141715e00

FString * __thiscall
FLocMetadataValueObject::ToString(FLocMetadataValueObject *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->Value).Object == (FLocMetadataObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FLocMetadataObject::ToString((this->Value).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

