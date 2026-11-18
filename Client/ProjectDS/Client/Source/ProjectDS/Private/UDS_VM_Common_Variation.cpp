// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetVariation_WrapperImpl @ 14b629850

void __cdecl UDS_VM_Common_Variation::SetVariation_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xa0);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0xa0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::Variation.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Variation.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetVariation2_WrapperImpl @ 14b629860

void __cdecl UDS_VM_Common_Variation::SetVariation2_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xb0);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0xb0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::Variation2.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Variation2.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetVisibility_Variation_WrapperImpl @ 14b629870

void __cdecl
UDS_VM_Common_Variation::SetVisibility_Variation_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xc0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::Visibility_Variation.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Visibility_Variation.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetVariationColor_WrapperImpl @ 14b629880

void __cdecl UDS_VM_Common_Variation::SetVariationColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 200) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xd0) = uVar3;
  iStack_10 = FFieldNotificationClassDescriptor::VariationColor.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VariationColor.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetVariationStyleID_WrapperImpl @ 14b629890

void __cdecl UDS_VM_Common_Variation::SetVariationStyleID_WrapperImpl(void *param_1,void *param_2)

{
  SetVariationStyleID(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b6298d0

UClass * __cdecl UDS_VM_Common_Variation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Variation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Variation",
               &Z_Registration_Info_UClass_UDS_VM_Common_Variation.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Variation,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Variation>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Variation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Variation.InnerSingleton;
}

// UDS_VM_Common_Variation @ 14b62ceb0

UDS_VM_Common_Variation * __thiscall
UDS_VM_Common_Variation::UDS_VM_Common_Variation
          (UDS_VM_Common_Variation *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Variation__6B_;
  FText::FText(&this->Variation);
  FText::FText(&this->Variation2);
  (this->VariationColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  (this->VariationColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  (this->VariationColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  (this->VariationColor).field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081
  ;
  return this;
}

// UDS_VM_Common_Variation @ 14b62cf60

UDS_VM_Common_Variation * __thiscall
UDS_VM_Common_Variation::UDS_VM_Common_Variation
          (UDS_VM_Common_Variation *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Variation__6B_;
  FText::FText(&this->Variation);
  FText::FText(&this->Variation2);
  (this->VariationColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  (this->VariationColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  (this->VariationColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  (this->VariationColor).field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081
  ;
  return this;
}

// ~UDS_VM_Common_Variation @ 14b62ef80

void __thiscall UDS_VM_Common_Variation::~UDS_VM_Common_Variation(UDS_VM_Common_Variation *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Variation__6B_;
  pIVar1 = (this->Variation2).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->Variation).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6319f0

IClassDescriptor * __thiscall
UDS_VM_Common_Variation::GetFieldNotificationDescriptor(UDS_VM_Common_Variation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_Variation::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6325a0

UClass * __cdecl UDS_VM_Common_Variation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Variation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Variation",
               &Z_Registration_Info_UClass_UDS_VM_Common_Variation.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Variation,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Variation>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Variation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Variation.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_Variation @ 14b633010

void __cdecl UDS_VM_Common_Variation::StaticRegisterNativesUDS_VM_Common_Variation(void)

{
  return;
}

// OnSetViewModel @ 14bdd8d90

void __thiscall
UDS_VM_Common_Variation::OnSetViewModel
          (UDS_VM_Common_Variation *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FName FVar9;
  int iVar10;
  bool bVar11;
  FText *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSharedPtr<FDS_ViewModelContext_CommonVariation,1> local_c8;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FText local_48;
  FText local_38;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonVariation>(&local_c8,&local_58);
  if (local_c8.Object != (FDS_ViewModelContext_CommonVariation *)0x0) {
    if (local_c8.Object == (FDS_ViewModelContext_CommonVariation *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
    FVar9 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
    plVar1 = &this->_padding_;
    if ((ESlateVisibility)this->_padding_ != (local_c8.Object)->Visibility) {
      *(ESlateVisibility *)&this->_padding_ = (local_c8.Object)->Visibility;
      local_b0 = iVar10;
      local_b8 = FVar9;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_b8);
    }
    this->Visibility_Variation = (local_c8.Object)->VisibilityVariation;
    local_a0 = FFieldNotificationClassDescriptor::Visibility_Variation.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::Visibility_Variation.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_a8);
    pFVar12 = FText::FromString(&local_48,&(local_c8.Object)->Variation);
    pIVar3 = (this->Variation).TextData.Reference;
    pIVar4 = (pFVar12->TextData).Reference;
    if (pIVar3 != pIVar4) {
      (this->Variation).TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->Variation).Flags = pFVar12->Flags;
    local_90 = FFieldNotificationClassDescriptor::Variation.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::Variation.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_98);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::FromString(&local_38,&(local_c8.Object)->Variation2);
    pIVar3 = (this->Variation2).TextData.Reference;
    pIVar4 = (pFVar12->TextData).Reference;
    if (pIVar3 != pIVar4) {
      (this->Variation2).TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->Variation2).Flags = pFVar12->Flags;
    local_80 = FFieldNotificationClassDescriptor::Variation2.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::Variation2.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    fVar6 = ((local_c8.Object)->Color).field0_0x0._s_0.G;
    fVar7 = ((local_c8.Object)->Color).field0_0x0._s_0.B;
    fVar8 = ((local_c8.Object)->Color).field0_0x0._s_0.A;
    (this->VariationColor).field0_0x0._s_0.R = ((local_c8.Object)->Color).field0_0x0._s_0.R;
    (this->VariationColor).field0_0x0._s_0.G = fVar6;
    (this->VariationColor).field0_0x0._s_0.B = fVar7;
    (this->VariationColor).field0_0x0._s_0.A = fVar8;
    local_70 = FFieldNotificationClassDescriptor::VariationColor.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::VariationColor.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    this->VariationStyleID = (local_c8.Object)->VariationStyleID;
    local_60 = FFieldNotificationClassDescriptor::VariationStyleID.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::VariationStyleID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVariation2 @ 14bde9e30

void __thiscall
UDS_VM_Common_Variation::SetVariation2(UDS_VM_Common_Variation *this,FString *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  FText local_18;
  
  pFVar3 = FText::FromString(&local_18,param_1);
  pIVar1 = (this->Variation2).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->Variation2).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->Variation2).Flags = pFVar3->Flags;
  local_20 = FFieldNotificationClassDescriptor::Variation2.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Variation2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetVariation2 @ 14bde9ee0

void __thiscall UDS_VM_Common_Variation::SetVariation2(UDS_VM_Common_Variation *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Variation2).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Variation2).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Variation2).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::Variation2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Variation2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVariation @ 14bde9f70

void __thiscall
UDS_VM_Common_Variation::SetVariation(UDS_VM_Common_Variation *this,FString *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  FText local_18;
  
  pFVar3 = FText::FromString(&local_18,param_1);
  pIVar1 = (this->Variation).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->Variation).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->Variation).Flags = pFVar3->Flags;
  local_20 = FFieldNotificationClassDescriptor::Variation.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Variation.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetVariation @ 14bdea020

void __thiscall UDS_VM_Common_Variation::SetVariation(UDS_VM_Common_Variation *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Variation).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Variation).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Variation).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::Variation.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Variation.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVariationColor @ 14bdea0b0

void __thiscall
UDS_VM_Common_Variation::SetVariationColor(UDS_VM_Common_Variation *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  (this->VariationColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
  (this->VariationColor).field0_0x0._s_0.G = fVar1;
  (this->VariationColor).field0_0x0._s_0.B = fVar2;
  (this->VariationColor).field0_0x0._s_0.A = fVar3;
  local_10 = FFieldNotificationClassDescriptor::VariationColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VariationColor.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVariationStyleID @ 14bdea0f0

void __thiscall
UDS_VM_Common_Variation::SetVariationStyleID(UDS_VM_Common_Variation *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->VariationStyleID = param_1;
  local_10 = FFieldNotificationClassDescriptor::VariationStyleID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VariationStyleID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisibility_Variation @ 14bdea360

void __thiscall
UDS_VM_Common_Variation::SetVisibility_Variation
          (UDS_VM_Common_Variation *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->Visibility_Variation = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Visibility_Variation.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Variation.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

