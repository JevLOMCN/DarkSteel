// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 28

// GetNumberOfPieces_WrapperImpl @ 14696ad60

void __cdecl UCircularThrobber::GetNumberOfPieces_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1b0);
  return;
}

// SetNumberOfPieces_WrapperImpl @ 14696adb0

void __cdecl UCircularThrobber::SetNumberOfPieces_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x1b0) = iVar2;
  if (*(SCircularThrobber **)((longlong)param_1 + 0x278) != (SCircularThrobber *)0x0) {
    iVar1 = 0x19;
    if (iVar2 < 0x19) {
      iVar1 = iVar2;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    SCircularThrobber::SetNumPieces(*(SCircularThrobber **)((longlong)param_1 + 0x278),iVar2);
    return;
  }
  return;
}

// GetPeriod_WrapperImpl @ 14696ae00

void __cdecl UCircularThrobber::GetPeriod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1b4);
  return;
}

// SetPeriod_WrapperImpl @ 14696ae10

void __cdecl UCircularThrobber::SetPeriod_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1b4) = fVar1;
  if (*(SCircularThrobber **)((longlong)param_1 + 0x278) != (SCircularThrobber *)0x0) {
    fVar2 = SCircularThrobber::MinimumPeriodValue;
    if (SCircularThrobber::MinimumPeriodValue <= fVar1) {
      fVar2 = fVar1;
    }
    SCircularThrobber::SetPeriod(*(SCircularThrobber **)((longlong)param_1 + 0x278),fVar2);
    return;
  }
  return;
}

// GetRadius_WrapperImpl @ 14696ae50

void __cdecl UCircularThrobber::GetRadius_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1b8);
  return;
}

// SetRadius_WrapperImpl @ 14696ae70

void __cdecl UCircularThrobber::SetRadius_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  SWidget *this;
  
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1b8) = fVar1;
  this = *(SWidget **)((longlong)param_1 + 0x278);
  if (this == (SWidget *)0x0) {
    return;
  }
  if (__real_322bcc77 <
      (float)((uint)((float)this[1].PersistentState.InitialClipState.TypedValue.
                            Debugging_StateIndexFromFrame - fVar1) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame = (int)fVar1;
    SWidget::Invalidate(this,Layout);
    return;
  }
  return;
}

// GetImage_WrapperImpl @ 14696aeb0

void __cdecl UCircularThrobber::GetImage_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush *pFVar1;
  FSlateBrush local_b8;
  
  pFVar1 = FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)((longlong)param_1 + 0x1c0));
  FSlateBrush::operator=(param_2,pFVar1);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetImage_WrapperImpl @ 14696af10

void __cdecl UCircularThrobber::SetImage_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x1c0),param_2);
  if (*(SCircularThrobber **)((longlong)param_1 + 0x278) != (SCircularThrobber *)0x0) {
    SCircularThrobber::InvalidatePieceImage(*(SCircularThrobber **)((longlong)param_1 + 0x278));
    return;
  }
  return;
}

// StaticClass @ 14696af70

UClass * __cdecl UCircularThrobber::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCircularThrobber.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CircularThrobber",
               &Z_Registration_Info_UClass_UCircularThrobber.InnerSingleton,
               StaticRegisterNativesUCircularThrobber,0x290,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCircularThrobber>,
               InternalVTableHelperCtorCaller<UCircularThrobber>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCircularThrobber.InnerSingleton;
}

// UCircularThrobber @ 146988df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCircularThrobber * __thiscall
UCircularThrobber::UCircularThrobber(UCircularThrobber *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->Image);
  (this->MyCircularThrobber).Object = (SCircularThrobber *)0x0;
  (this->MyCircularThrobber).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCircularThrobber @ 146988e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCircularThrobber * __thiscall
UCircularThrobber::UCircularThrobber(UCircularThrobber *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->Image);
  this->bEnableRadius = true;
  (this->MyCircularThrobber).Object = (SCircularThrobber *)0x0;
  (this->MyCircularThrobber).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=(&this->Image,&(pFVar1->Runtime).CircularThrobberBrushStyle);
  this->NumberOfPieces = 6;
  this->Period = 0.75;
  this->Radius = 16.0;
  return this;
}

// ~UCircularThrobber @ 1469927b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCircularThrobber::~UCircularThrobber(UCircularThrobber *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyCircularThrobber).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->Image).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Image)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetImage @ 1469d1340

FSlateBrush * __thiscall UCircularThrobber::GetImage(UCircularThrobber *this)

{
  return &this->Image;
}

// GetNumberOfPieces @ 1469d2210

int __thiscall UCircularThrobber::GetNumberOfPieces(UCircularThrobber *this)

{
  return this->NumberOfPieces;
}

// GetPeriod @ 1469d37d0

float __thiscall UCircularThrobber::GetPeriod(UCircularThrobber *this)

{
  return this->Period;
}

// GetPrivateStaticClass @ 1469d3970

UClass * __cdecl UCircularThrobber::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCircularThrobber.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CircularThrobber",
               &Z_Registration_Info_UClass_UCircularThrobber.InnerSingleton,
               StaticRegisterNativesUCircularThrobber,0x290,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCircularThrobber>,
               InternalVTableHelperCtorCaller<UCircularThrobber>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCircularThrobber.InnerSingleton;
}

// GetRadius @ 1469d6b90

float __thiscall UCircularThrobber::GetRadius(UCircularThrobber *this)

{
  return this->Radius;
}

// RebuildWidget @ 1469f9920

TSharedRef<SWidget,1> * __thiscall
UCircularThrobber::RebuildWidget
          (UCircularThrobber *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SCircularThrobber,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SCircularThrobber *pSVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> local_2a8;
  SCircularThrobber *local_290;
  FSharedReferencer<1> local_288;
  undefined1 local_280 [552];
  undefined1 local_58 [32];
  
  pFVar10 = SCircularThrobber::FArguments::FArguments((FArguments *)local_280);
  pFVar10->_PieceImage = &this->Image;
  iVar13 = 0x19;
  if (this->NumberOfPieces < 0x19) {
    iVar13 = this->NumberOfPieces;
  }
  iVar12 = 1;
  if (1 < iVar13) {
    iVar12 = iVar13;
  }
  pFVar10->_NumPieces = iVar12;
  fVar14 = this->Period;
  if (this->Period <= SCircularThrobber::MinimumPeriodValue) {
    fVar14 = SCircularThrobber::MinimumPeriodValue;
  }
  pFVar10->_Period = fVar14;
  pFVar10->_Radius = this->Radius;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>
            (&local_2a8,"SCircularThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\CircularThrobber.cpp"
             ,0x30,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar4 = local_2a8._Widget.Object;
  if (local_2a8._Widget.Object == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SCircularThrobber::Construct(local_2a8._Widget.Object,pFVar10);
  if (local_2a8._Widget.Object == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  if (((local_2a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_2a8._Widget.Object)->_padding_ + 0x228))(local_2a8._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_1469f9ac3;
  }
  bVar9 = 0x20;
LAB_1469f9ac3:
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ | bVar9;
  if (local_2a8._Widget.Object == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2a8._Widget.Object == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  FVar6.ReferenceController = local_2a8._Widget.SharedReferenceCount.ReferenceController;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.Object = (SCircularThrobber *)0x0;
  if (pSVar4 == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  local_290 = pSVar4;
  local_288.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->MyCircularThrobber;
  if (pTVar2 != (TSharedPtr<SCircularThrobber,1> *)&local_290) {
    pTVar2->Object = pSVar4;
    local_290 = (SCircularThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCircularThrobber).SharedReferenceCount,&local_288);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_280);
  if (pTVar2->Object == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pTVar3 = (this->MyCircularThrobber).SharedReferenceCount.ReferenceController;
  pSVar4 = pTVar2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SCircularThrobber *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a140

void __thiscall UCircularThrobber::ReleaseSlateResources(UCircularThrobber *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyCircularThrobber != (TSharedPtr<SCircularThrobber,1> *)&local_18) {
    (this->MyCircularThrobber).Object = (SCircularThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCircularThrobber).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetImage @ 146a15600

void __thiscall UCircularThrobber::SetImage(UCircularThrobber *this,FSlateBrush *param_1)

{
  SCircularThrobber *this_00;
  
  FSlateBrush::operator=(&this->Image,param_1);
  this_00 = (this->MyCircularThrobber).Object;
  if (this_00 != (SCircularThrobber *)0x0) {
    SCircularThrobber::InvalidatePieceImage(this_00);
    return;
  }
  return;
}

// SetNumberOfPieces @ 146a182c0

void __thiscall UCircularThrobber::SetNumberOfPieces(UCircularThrobber *this,int param_1)

{
  SCircularThrobber *this_00;
  int iVar1;
  int iVar2;
  
  this->NumberOfPieces = param_1;
  this_00 = (this->MyCircularThrobber).Object;
  if (this_00 != (SCircularThrobber *)0x0) {
    iVar1 = 0x19;
    if (param_1 < 0x19) {
      iVar1 = param_1;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    SCircularThrobber::SetNumPieces(this_00,iVar2);
    return;
  }
  return;
}

// SetPeriod @ 146a18f40

void __thiscall UCircularThrobber::SetPeriod(UCircularThrobber *this,float param_1)

{
  SCircularThrobber *this_00;
  float fVar1;
  
  this->Period = param_1;
  this_00 = (this->MyCircularThrobber).Object;
  if (this_00 != (SCircularThrobber *)0x0) {
    fVar1 = SCircularThrobber::MinimumPeriodValue;
    if (SCircularThrobber::MinimumPeriodValue <= param_1) {
      fVar1 = param_1;
    }
    SCircularThrobber::SetPeriod(this_00,fVar1);
    return;
  }
  return;
}

// SetRadius @ 146a193d0

void __thiscall UCircularThrobber::SetRadius(UCircularThrobber *this,float param_1)

{
  SCircularThrobber *this_00;
  
  this->Radius = param_1;
  this_00 = (this->MyCircularThrobber).Object;
  if (this_00 == (SCircularThrobber *)0x0) {
    return;
  }
  if (__real_322bcc77 <
      (float)((uint)(this_00->Radius - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this_00->Radius = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUCircularThrobber @ 146a1e610

void __cdecl UCircularThrobber::StaticRegisterNativesUCircularThrobber(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCircularThrobber_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a1f950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCircularThrobber::SynchronizeProperties(UCircularThrobber *this)

{
  SCircularThrobber *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyCircularThrobber).Object;
  if (this_00 != (SCircularThrobber *)0x0) {
    iVar5 = 0x19;
    if (this->NumberOfPieces < 0x19) {
      iVar5 = this->NumberOfPieces;
    }
    iVar4 = 1;
    if (1 < iVar5) {
      iVar4 = iVar5;
    }
    SCircularThrobber::SetNumPieces(this_00,iVar4);
    if (((this->MyCircularThrobber).Object == (SCircularThrobber *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar6 = this->Period;
    if (this->Period <= SCircularThrobber::MinimumPeriodValue) {
      fVar6 = SCircularThrobber::MinimumPeriodValue;
    }
    SCircularThrobber::SetPeriod((this->MyCircularThrobber).Object,fVar6);
    if (((this->MyCircularThrobber).Object == (SCircularThrobber *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SCircularThrobber::SetRadius((this->MyCircularThrobber).Object,this->Radius);
    if (((this->MyCircularThrobber).Object == (SCircularThrobber *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SCircularThrobber::SetPieceImage((this->MyCircularThrobber).Object,&this->Image);
    if (((this->MyCircularThrobber).Object == (SCircularThrobber *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SCircularThrobber::InvalidatePieceImage((this->MyCircularThrobber).Object);
    this->bEnableRadius = true;
    if (*(longlong *)&this->field_0x30 != 0) {
      pUVar3 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x30,pUVar3);
      if (((bVar2) && (*(UCanvasPanelSlot **)&this->field_0x30 != (UCanvasPanelSlot *)0x0)) &&
         (bVar2 = UCanvasPanelSlot::GetAutoSize(*(UCanvasPanelSlot **)&this->field_0x30), !bVar2)) {
        this->bEnableRadius = false;
      }
    }
  }
  return;
}

// execSetNumberOfPieces @ 146a40360

void __cdecl
UCircularThrobber::execSetNumberOfPieces(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[10].field_0x20 = local_res8[0];
  if (*(SCircularThrobber **)&param_1[0xf].field_0x20 != (SCircularThrobber *)0x0) {
    iVar2 = 0x19;
    if (local_res8[0] < 0x19) {
      iVar2 = local_res8[0];
    }
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    SCircularThrobber::SetNumPieces(*(SCircularThrobber **)&param_1[0xf].field_0x20,iVar3);
  }
  return;
}

// execSetPeriod @ 146a40c00

void __cdecl UCircularThrobber::execSetPeriod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SCircularThrobber *this;
  float fVar2;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SCircularThrobber **)&param_1[0xf].field_0x20;
  *(float *)&param_1[10].field_0x24 = local_res8[0];
  if (this != (SCircularThrobber *)0x0) {
    fVar2 = SCircularThrobber::MinimumPeriodValue;
    if (SCircularThrobber::MinimumPeriodValue <= local_res8[0]) {
      fVar2 = local_res8[0];
    }
    SCircularThrobber::SetPeriod(this,fVar2);
  }
  return;
}

// execSetRadius @ 146a40ec0

void __cdecl UCircularThrobber::execSetRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SCircularThrobber *this;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SCircularThrobber **)&param_1[0xf].field_0x20;
  *(float *)(param_1 + 0xb) = local_res8[0];
  if (this != (SCircularThrobber *)0x0) {
    SCircularThrobber::SetRadius(this,local_res8[0]);
  }
  return;
}

