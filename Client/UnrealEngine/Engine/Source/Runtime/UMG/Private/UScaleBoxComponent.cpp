// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 32

// GetHorizontalAlignment_WrapperImpl @ 146966350

void __cdecl UScaleBoxComponent::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x58);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146966360

void __cdecl UScaleBoxComponent::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x58) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146966390;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SScaleBox **)((longlong)param_1 + 0x68) != (SScaleBox *)0x0) {
      SScaleBox::SetHAlign(*(SScaleBox **)((longlong)param_1 + 0x68),(uint)bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146966390:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetVerticalAlignment_WrapperImpl @ 1469663c0

void __cdecl UScaleBoxComponent::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x59);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 1469663d0

void __cdecl UScaleBoxComponent::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x59) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146966400;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SScaleBox **)((longlong)param_1 + 0x68) != (SScaleBox *)0x0) {
      SScaleBox::SetVAlign(*(SScaleBox **)((longlong)param_1 + 0x68),(uint)bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146966400:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetStretch_WrapperImpl @ 146966430

void __cdecl UScaleBoxComponent::GetStretch_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x5a);
  return;
}

// SetStretch_WrapperImpl @ 146966480

void __cdecl UScaleBoxComponent::SetStretch_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x5a) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469664b0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SScaleBox **)((longlong)param_1 + 0x68) != (SScaleBox *)0x0) {
      SScaleBox::SetStretch(*(SScaleBox **)((longlong)param_1 + 0x68),(uint)bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1469664b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetStretchDirection_WrapperImpl @ 1469664e0

void __cdecl UScaleBoxComponent::GetStretchDirection_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x5b);
  return;
}

// SetStretchDirection_WrapperImpl @ 1469664f0

void __cdecl UScaleBoxComponent::SetStretchDirection_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x5b) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146966520;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SScaleBox **)((longlong)param_1 + 0x68) != (SScaleBox *)0x0) {
      SScaleBox::SetStretchDirection(*(SScaleBox **)((longlong)param_1 + 0x68),(uint)bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146966520:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetUserSpecifiedScale_WrapperImpl @ 146966550

void __cdecl UScaleBoxComponent::GetUserSpecifiedScale_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x5c);
  return;
}

// SetUserSpecifiedScale_WrapperImpl @ 146966560

void __cdecl UScaleBoxComponent::SetUserSpecifiedScale_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x5c) = fVar1;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146966592;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SScaleBox **)((longlong)param_1 + 0x68) != (SScaleBox *)0x0) {
      SScaleBox::SetUserSpecifiedScale(*(SScaleBox **)((longlong)param_1 + 0x68),fVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146966592:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetIgnoreInheritedScale_WrapperImpl @ 1469665c0

void __cdecl UScaleBoxComponent::GetIgnoreInheritedScale_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x60);
  return;
}

// SetIgnoreInheritedScale_WrapperImpl @ 1469665d0

void __cdecl UScaleBoxComponent::SetIgnoreInheritedScale_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x60) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146966600;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SScaleBox **)((longlong)param_1 + 0x68) != (SScaleBox *)0x0) {
      SScaleBox::SetIgnoreInheritedScale(*(SScaleBox **)((longlong)param_1 + 0x68),bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146966600:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// StaticClass @ 146966630

UClass * __cdecl UScaleBoxComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBoxComponent",
               &Z_Registration_Info_UClass_UScaleBoxComponent.InnerSingleton,
               StaticRegisterNativesUScaleBoxComponent,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UScaleBoxComponent>,
               InternalVTableHelperCtorCaller<UScaleBoxComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBoxComponent.InnerSingleton;
}

// UScaleBoxComponent @ 14698cf60

UScaleBoxComponent * __thiscall
UScaleBoxComponent::UScaleBoxComponent(UScaleBoxComponent *this,FVTableHelper *param_1)

{
  UUIComponent::UUIComponent((UUIComponent *)this,param_1);
  this->UserSpecifiedScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyScaleBox).Object = (SScaleBox *)0x0;
  (this->MyScaleBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->HorizontalAlignment = '\x02';
  this->VerticalAlignment = '\x02';
  this->Stretch = '\x02';
  this->StretchDirection = '\0';
  this->IgnoreInheritedScale = false;
  return this;
}

// UScaleBoxComponent @ 14698cfb0

UScaleBoxComponent * __thiscall
UScaleBoxComponent::UScaleBoxComponent(UScaleBoxComponent *this,FObjectInitializer *param_1)

{
  UUIComponent::UUIComponent((UUIComponent *)this,param_1);
  this->UserSpecifiedScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyScaleBox).Object = (SScaleBox *)0x0;
  (this->MyScaleBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->HorizontalAlignment = '\x02';
  this->VerticalAlignment = '\x02';
  this->Stretch = '\x02';
  this->StretchDirection = '\0';
  this->IgnoreInheritedScale = false;
  return this;
}

// ~UScaleBoxComponent @ 146993f90

void __thiscall UScaleBoxComponent::~UScaleBoxComponent(UScaleBoxComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  UUIComponent::~UUIComponent((UUIComponent *)this);
  return;
}

// GetHorizontalAlignment @ 1469d12b0

EHorizontalAlignment __thiscall UScaleBoxComponent::GetHorizontalAlignment(UScaleBoxComponent *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPrivateStaticClass @ 1469d5760

UClass * __cdecl UScaleBoxComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBoxComponent",
               &Z_Registration_Info_UClass_UScaleBoxComponent.InnerSingleton,
               StaticRegisterNativesUScaleBoxComponent,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UScaleBoxComponent>,
               InternalVTableHelperCtorCaller<UScaleBoxComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBoxComponent.InnerSingleton;
}

// GetStretch @ 1469d8a40

Type __thiscall UScaleBoxComponent::GetStretch(UScaleBoxComponent *this)

{
  return (Type)(this->Stretch).Value;
}

// GetStretchDirection @ 1469d8a60

Type __thiscall UScaleBoxComponent::GetStretchDirection(UScaleBoxComponent *this)

{
  return (Type)(this->StretchDirection).Value;
}

// GetUserSpecifiedScale @ 1469d9740

float __thiscall UScaleBoxComponent::GetUserSpecifiedScale(UScaleBoxComponent *this)

{
  return this->UserSpecifiedScale;
}

// GetVerticalAlignment @ 1469d9c70

EVerticalAlignment __thiscall UScaleBoxComponent::GetVerticalAlignment(UScaleBoxComponent *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// IsIgnoreInheritedScale @ 1469e1840

bool __thiscall UScaleBoxComponent::IsIgnoreInheritedScale(UScaleBoxComponent *this)

{
  return this->IgnoreInheritedScale;
}

// RebuildWidgetWithContent @ 146a08ce0

TSharedRef<SWidget,1> * __thiscall
UScaleBoxComponent::RebuildWidgetWithContent
          (UScaleBoxComponent *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments *pFVar5;
  longlong lVar6;
  FSharedReferencer<1> FVar7;
  atomic<int> *paVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedRef<SScaleBox,1> local_308;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_2f8;
  undefined1 local_2e0 [16];
  FArguments local_2d0;
  
  pFVar5 = SScaleBox::FArguments::FArguments(&local_2d0);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar5->_Content).Widget.Object = pSVar3;
  (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_2f8,"SScaleBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScaleBoxComponent.cpp"
             ,0xa5,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_2f8,&local_308,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8._Widget.SharedReferenceCount.ReferenceController);
  SScaleBox::FArguments::~FArguments(&local_2d0);
  if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_308.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_308.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyScaleBox == (TWeakPtr<SScaleBox,1> *)local_2e0) {
    if (local_308.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    goto LAB_146a08e5e;
    LOCK();
    paVar8 = &(local_308.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar1 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar1 != (atomic<int>)0x1) goto LAB_146a08e5e;
    lVar6 = (local_308.SharedReferenceCount.ReferenceController)->_padding_;
    FVar7.ReferenceController = local_308.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar7.ReferenceController = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
    (this->MyScaleBox).Object = local_308.Object;
    (this->MyScaleBox).WeakReferenceCount.ReferenceController =
         local_308.SharedReferenceCount.ReferenceController;
    if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_146a08e5e;
    LOCK();
    paVar8 = &(FVar7.ReferenceController)->WeakReferenceCount;
    aVar1 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar1 != (atomic<int>)0x1) goto LAB_146a08e5e;
    lVar6 = (FVar7.ReferenceController)->_padding_;
  }
  (**(code **)(lVar6 + 8))(FVar7.ReferenceController,1);
LAB_146a08e5e:
  if (local_308.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SScaleBox::SetStretchDirection(local_308.Object,(uint)(this->StretchDirection).Value);
  SScaleBox::SetStretch(local_308.Object,(uint)(this->Stretch).Value);
  SScaleBox::SetUserSpecifiedScale(local_308.Object,this->UserSpecifiedScale);
  SScaleBox::SetIgnoreInheritedScale(local_308.Object,this->IgnoreInheritedScale);
  SScaleBox::SetHAlign(local_308.Object,(uint)(this->HorizontalAlignment).Value);
  SScaleBox::SetVAlign(local_308.Object,(uint)(this->VerticalAlignment).Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  __return_storage_ptr__->Object = (SWidget *)local_308.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_308.SharedReferenceCount.ReferenceController;
  if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SetHorizontalAlignment @ 146a15220

void __thiscall
UScaleBoxComponent::SetHorizontalAlignment(UScaleBoxComponent *this,EHorizontalAlignment param_1)

{
  SScaleBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a15250;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MyScaleBox).Object;
    if (this_00 != (SScaleBox *)0x0) {
      SScaleBox::SetHAlign(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a15250:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetIgnoreInheritedScale @ 146a155a0

void __thiscall UScaleBoxComponent::SetIgnoreInheritedScale(UScaleBoxComponent *this,bool param_1)

{
  SScaleBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  this->IgnoreInheritedScale = param_1;
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a155d0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MyScaleBox).Object;
    if (this_00 != (SScaleBox *)0x0) {
      SScaleBox::SetIgnoreInheritedScale(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a155d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetStretch @ 146a1ba00

void __thiscall UScaleBoxComponent::SetStretch(UScaleBoxComponent *this,Type param_1)

{
  SScaleBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  (this->Stretch).Value = (uchar)param_1;
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1ba30;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MyScaleBox).Object;
    if (this_00 != (SScaleBox *)0x0) {
      SScaleBox::SetStretch(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a1ba30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetStretchDirection @ 146a1ba80

void __thiscall UScaleBoxComponent::SetStretchDirection(UScaleBoxComponent *this,Type param_1)

{
  SScaleBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  (this->StretchDirection).Value = (uchar)param_1;
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1bab0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MyScaleBox).Object;
    if (this_00 != (SScaleBox *)0x0) {
      SScaleBox::SetStretchDirection(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a1bab0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetUserSpecifiedScale @ 146a1d2c0

void __thiscall UScaleBoxComponent::SetUserSpecifiedScale(UScaleBoxComponent *this,float param_1)

{
  SScaleBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  this->UserSpecifiedScale = param_1;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1d2f0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MyScaleBox).Object;
    if (this_00 != (SScaleBox *)0x0) {
      SScaleBox::SetUserSpecifiedScale(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a1d2f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetVerticalAlignment @ 146a1d620

void __thiscall
UScaleBoxComponent::SetVerticalAlignment(UScaleBoxComponent *this,EVerticalAlignment param_1)

{
  SScaleBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  pTVar3 = (this->MyScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1d650;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MyScaleBox).Object;
    if (this_00 != (SScaleBox *)0x0) {
      SScaleBox::SetVAlign(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a1d650:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// StaticRegisterNativesUScaleBoxComponent @ 146a1ee30

void __cdecl UScaleBoxComponent::StaticRegisterNativesUScaleBoxComponent(void)

{
  return;
}

// SynchronizeProperties @ 146a24b60

void __thiscall
UScaleBoxComponent::SynchronizeProperties(UScaleBoxComponent *this,TSharedRef<SScaleBox,1> *param_1)

{
  SScaleBox::SetStretchDirection(param_1->Object,(uint)(this->StretchDirection).Value);
  SScaleBox::SetStretch(param_1->Object,(uint)(this->Stretch).Value);
  SScaleBox::SetUserSpecifiedScale(param_1->Object,this->UserSpecifiedScale);
  SScaleBox::SetIgnoreInheritedScale(param_1->Object,this->IgnoreInheritedScale);
  SScaleBox::SetHAlign(param_1->Object,(uint)(this->HorizontalAlignment).Value);
  SScaleBox::SetVAlign(param_1->Object,(uint)(this->VerticalAlignment).Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

