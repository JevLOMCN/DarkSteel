// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FAttribute @ 1425bcbb0

FAttribute * __thiscall
FSlateAttributeDescriptor::FAttribute::FAttribute(FAttribute *this,FAttribute *param_1)

{
  this->Name = param_1->Name;
  this->Offset = param_1->Offset;
  this->Prerequisite = param_1->Prerequisite;
  this->ContainerName = param_1->ContainerName;
  this->SortOrder = param_1->SortOrder;
  this->ContainerIndex = param_1->ContainerIndex;
  FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute
            (&this->InvalidationReason,&param_1->InvalidationReason);
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
            (&this->OnValueChanged,&param_1->OnValueChanged);
  this->AttributeType = param_1->AttributeType;
  this->bAffectVisibility = param_1->bAffectVisibility;
  return this;
}

// FAttribute @ 1425bcc30

FAttribute * __thiscall
FSlateAttributeDescriptor::FAttribute::FAttribute
          (FAttribute *this,FName param_1,FName param_2,uint param_3,
          FInvalidateWidgetReasonAttribute *param_4)

{
  TDelegate<EInvalidateWidgetReason___cdecl(SWidget_const_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *this_00;
  
  this->Name = param_2;
  (this->Prerequisite).ComparisonIndex = 0;
  (this->Prerequisite).Number = 0;
  this->ContainerName = param_1;
  this->Offset = param_3;
  this_00 = &param_4->Getter;
  this->SortOrder = param_3 * 100;
  (this->InvalidationReason).Reason = param_4->Reason;
  *(undefined8 *)&(this->InvalidationReason).Getter = 0;
  *(undefined4 *)&(this->InvalidationReason).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->InvalidationReason).Getter = *(undefined8 *)this_00;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->InvalidationReason).Getter.field_0x8 =
       *(undefined4 *)&(param_4->Getter).field_0x8;
  *(undefined4 *)&(param_4->Getter).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  this->AttributeType = Contained;
  this->bAffectVisibility = false;
  if ((*(int *)&(param_4->Getter).field_0x8 != 0) && (*(undefined8 **)this_00 != (undefined8 *)0x0))
  {
    (**(code **)**(undefined8 **)this_00)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    *(undefined4 *)&(param_4->Getter).field_0x8 = 0;
  }
  if (*(void **)this_00 != (void *)0x0) {
    FMemory::Free(*(void **)this_00);
  }
  return this;
}

// FAttribute @ 1425bccf0

FAttribute * __thiscall
FSlateAttributeDescriptor::FAttribute::FAttribute
          (FAttribute *this,FName param_1,uint param_2,FInvalidateWidgetReasonAttribute *param_3)

{
  TDelegate<EInvalidateWidgetReason___cdecl(SWidget_const_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *this_00;
  
  this->Name = param_1;
  this_00 = &param_3->Getter;
  this->Offset = param_2;
  (this->Prerequisite).ComparisonIndex = 0;
  (this->Prerequisite).Number = 0;
  (this->ContainerName).ComparisonIndex = 0;
  (this->ContainerName).Number = 0;
  this->SortOrder = param_2 * 100;
  (this->InvalidationReason).Reason = param_3->Reason;
  *(undefined8 *)&(this->InvalidationReason).Getter = 0;
  *(undefined4 *)&(this->InvalidationReason).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->InvalidationReason).Getter = *(undefined8 *)this_00;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->InvalidationReason).Getter.field_0x8 =
       *(undefined4 *)&(param_3->Getter).field_0x8;
  *(undefined4 *)&(param_3->Getter).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  this->AttributeType = Member;
  this->bAffectVisibility = false;
  if ((*(int *)&(param_3->Getter).field_0x8 != 0) && (*(undefined8 **)this_00 != (undefined8 *)0x0))
  {
    (**(code **)**(undefined8 **)this_00)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    *(undefined4 *)&(param_3->Getter).field_0x8 = 0;
  }
  if (*(void **)this_00 != (void *)0x0) {
    FMemory::Free(*(void **)this_00);
  }
  return this;
}

// GetInvalidationReason @ 1425e1560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EInvalidateWidgetReason __thiscall
FSlateAttributeDescriptor::FAttribute::GetInvalidationReason(FAttribute *this,SWidget *param_1)

{
  longlong *plVar1;
  char cVar2;
  EInvalidateWidgetReason EVar3;
  
  if ((*(int *)&(this->InvalidationReason).Getter.field_0x8 != 0) &&
     (plVar1 = *(longlong **)&(this->InvalidationReason).Getter, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      if (*(int *)&(this->InvalidationReason).Getter.field_0x8 != 0) {
        plVar1 = *(longlong **)&(this->InvalidationReason).Getter;
                    /* WARNING: Could not recover jumptable at 0x0001425e15a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        EVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
        return EVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x0001425e15b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      EVar3 = (**(code **)(_DAT_00000000 + 0x60))(0,param_1);
      return EVar3;
    }
  }
  return (this->InvalidationReason).Reason;
}

