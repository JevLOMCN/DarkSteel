// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FCollisionPrimitivesMechanicGeometryChange @ 14cac8ec0

FCollisionPrimitivesMechanicGeometryChange * __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicGeometryChange::
FCollisionPrimitivesMechanicGeometryChange
          (FCollisionPrimitivesMechanicGeometryChange *this,TSharedPtr<FKAggregateGeom,1> *param_1,
          TSharedPtr<FKAggregateGeom,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_;
  (this->GeometryPrevious).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->GeometryPrevious).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->GeometryNew).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->GeometryNew).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ChangeStamp = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Apply @ 14caea750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicGeometryChange::Apply
          (FCollisionPrimitivesMechanicGeometryChange *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UCollisionPrimitivesMechanic::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14caea78a;
  }
  param_1 = (UObject *)0x0;
LAB_14caea78a:
  if ((this->GeometryNew).Object == (FKAggregateGeom *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UpdateCollisionGeometry((UCollisionPrimitivesMechanic *)param_1,(this->GeometryNew).Object);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCollisionPrimitivesMechanic *)param_1)->OnCollisionGeometryChanged);
  return;
}

// HasExpired @ 14cb1a5a0

bool __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicGeometryChange::HasExpired
          (FCollisionPrimitivesMechanicGeometryChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UCollisionPrimitivesMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb1a5da;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a5da:
  return *(int *)&param_1[0x23].field_0x20 != this->ChangeStamp;
}

// Revert @ 14cb324b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicGeometryChange::Revert
          (FCollisionPrimitivesMechanicGeometryChange *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UCollisionPrimitivesMechanic::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14cb324ea;
  }
  param_1 = (UObject *)0x0;
LAB_14cb324ea:
  if ((this->GeometryPrevious).Object == (FKAggregateGeom *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UpdateCollisionGeometry((UCollisionPrimitivesMechanic *)param_1,(this->GeometryPrevious).Object);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCollisionPrimitivesMechanic *)param_1)->OnCollisionGeometryChanged);
  return;
}

// ToString @ 14cb41030

FString * __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicGeometryChange::ToString
          (FCollisionPrimitivesMechanicGeometryChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FCollisionPrimitivesMechanicGeometryChange");
  return __return_storage_ptr__;
}

