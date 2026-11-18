// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 34

// GetNumberOfPieces_WrapperImpl @ 1469596c0

void __cdecl UThrobber::GetNumberOfPieces_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1b0);
  return;
}

// SetNumberOfPieces_WrapperImpl @ 146959710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UThrobber::SetNumberOfPieces_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)param_2;
  iVar2 = 0x19;
  if (iVar1 < 0x19) {
    iVar2 = iVar1;
  }
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((iVar3 != iVar1) && (2 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(int *)((longlong)param_1 + 0x1b0) = iVar3;
  if (*(SThrobber **)((longlong)param_1 + 0x270) != (SThrobber *)0x0) {
    SThrobber::SetNumPieces(*(SThrobber **)((longlong)param_1 + 0x270),iVar3);
  }
  return;
}

// GetbAnimateHorizontally_WrapperImpl @ 146959790

void __cdecl UThrobber::GetbAnimateHorizontally_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1b4);
  return;
}

// SetbAnimateHorizontally_WrapperImpl @ 1469597a0

void __cdecl UThrobber::SetbAnimateHorizontally_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1b4) = cVar1;
  if (*(SThrobber **)((longlong)param_1 + 0x270) != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (*(SThrobber **)((longlong)param_1 + 0x270),
               -(uint)(*(char *)((longlong)param_1 + 0x1b6) != '\0') & Opacity |
               (uint)(*(char *)((longlong)param_1 + 0x1b5) != '\0') |
               -(uint)(cVar1 != '\0') & Horizontal);
    return;
  }
  return;
}

// GetbAnimateVertically_WrapperImpl @ 146959830

void __cdecl UThrobber::GetbAnimateVertically_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1b5);
  return;
}

// SetbAnimateVertically_WrapperImpl @ 146959840

void __cdecl UThrobber::SetbAnimateVertically_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1b5) = cVar1;
  if (*(SThrobber **)((longlong)param_1 + 0x270) != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (*(SThrobber **)((longlong)param_1 + 0x270),
               -(uint)(*(char *)((longlong)param_1 + 0x1b6) != '\0') & Opacity |
               -(uint)(*(char *)((longlong)param_1 + 0x1b4) != '\0') & Horizontal |
               (uint)(cVar1 != '\0'));
    return;
  }
  return;
}

// GetbAnimateOpacity_WrapperImpl @ 1469598a0

void __cdecl UThrobber::GetbAnimateOpacity_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1b6);
  return;
}

// SetbAnimateOpacity_WrapperImpl @ 1469598b0

void __cdecl UThrobber::SetbAnimateOpacity_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1b6) = cVar1;
  if (*(SThrobber **)((longlong)param_1 + 0x270) != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (*(SThrobber **)((longlong)param_1 + 0x270),
               -(uint)(*(char *)((longlong)param_1 + 0x1b4) != '\0') & Horizontal |
               (uint)(*(char *)((longlong)param_1 + 0x1b5) != '\0') |
               -(uint)(cVar1 != '\0') & Opacity);
    return;
  }
  return;
}

// GetImage_WrapperImpl @ 146959900

void __cdecl UThrobber::GetImage_WrapperImpl(void *param_1,void *param_2)

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

// SetImage_WrapperImpl @ 146959950

void __cdecl UThrobber::SetImage_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x1c0),param_2);
  if (*(SThrobber **)((longlong)param_1 + 0x270) != (SThrobber *)0x0) {
    SThrobber::InvalidatePieceImage(*(SThrobber **)((longlong)param_1 + 0x270));
    return;
  }
  return;
}

// StaticClass @ 1469599a0

UClass * __cdecl UThrobber::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UThrobber.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Throbber",&Z_Registration_Info_UClass_UThrobber.InnerSingleton,
               StaticRegisterNativesUThrobber,0x280,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UThrobber>,InternalVTableHelperCtorCaller<UThrobber>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UThrobber.InnerSingleton;
}

// UThrobber @ 14698e490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UThrobber * __thiscall UThrobber::UThrobber(UThrobber *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->Image);
  (this->MyThrobber).Object = (SThrobber *)0x0;
  (this->MyThrobber).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UThrobber @ 14698e4e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UThrobber * __thiscall UThrobber::UThrobber(UThrobber *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->Image);
  this->NumberOfPieces = 3;
  (this->MyThrobber).Object = (SThrobber *)0x0;
  (this->MyThrobber).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAnimateHorizontally = true;
  this->bAnimateVertically = true;
  this->bAnimateOpacity = true;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=(&this->Image,&(pFVar1->Runtime).ThrobberBrush);
  return this;
}

// ~UThrobber @ 146994690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UThrobber::~UThrobber(UThrobber *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyThrobber).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->Image).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Image)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetAnimation @ 1469cd0d0

EAnimation __thiscall UThrobber::GetAnimation(UThrobber *this)

{
  return -(uint)(this->bAnimateOpacity != false) & Opacity |
         -(uint)(this->bAnimateHorizontally != false) & Horizontal |
         (uint)(this->bAnimateVertically != false);
}

// GetImage @ 1469d1350

FSlateBrush * __thiscall UThrobber::GetImage(UThrobber *this)

{
  return &this->Image;
}

// GetNumberOfPieces @ 1469d2220

int __thiscall UThrobber::GetNumberOfPieces(UThrobber *this)

{
  return this->NumberOfPieces;
}

// GetPrivateStaticClass @ 1469d6350

UClass * __cdecl UThrobber::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UThrobber.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Throbber",&Z_Registration_Info_UClass_UThrobber.InnerSingleton,
               StaticRegisterNativesUThrobber,0x280,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UThrobber>,InternalVTableHelperCtorCaller<UThrobber>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UThrobber.InnerSingleton;
}

// IsAnimateHorizontally @ 1469e0a10

bool __thiscall UThrobber::IsAnimateHorizontally(UThrobber *this)

{
  return this->bAnimateHorizontally;
}

// IsAnimateOpacity @ 1469e0a20

bool __thiscall UThrobber::IsAnimateOpacity(UThrobber *this)

{
  return this->bAnimateOpacity;
}

// IsAnimateVertically @ 1469e0a30

bool __thiscall UThrobber::IsAnimateVertically(UThrobber *this)

{
  return this->bAnimateVertically;
}

// RebuildWidget @ 146a07b40

TSharedRef<SWidget,1> * __thiscall
UThrobber::RebuildWidget(UThrobber *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SThrobber,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SThrobber *pSVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  int iVar12;
  int iVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> local_268;
  SThrobber *local_250;
  FSharedReferencer<1> local_248;
  FArguments local_240;
  
  pFVar10 = SThrobber::FArguments::FArguments(&local_240);
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
  pFVar10->_Animate =
       -(uint)(this->bAnimateOpacity != false) & Opacity |
       -(uint)(this->bAnimateHorizontally != false) & Horizontal |
       (uint)(this->bAnimateVertically != false);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (&local_268,"SThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Throbber.cpp"
             ,0x30,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar4 = local_268._Widget.Object;
  if (local_268._Widget.Object == (SThrobber *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_268._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SThrobber::Construct(local_268._Widget.Object,pFVar10);
  if (local_268._Widget.Object == (SThrobber *)0x0) {
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
  if (((local_268._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_268._Widget.Object)->_padding_ + 0x228))(local_268._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_146a07cf1;
  }
  bVar9 = 0x20;
LAB_146a07cf1:
  *(byte *)&(local_268._Widget.Object)->_padding_ =
       (byte)(local_268._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_268._Widget.Object)->_padding_ =
       (byte)(local_268._Widget.Object)->_padding_ | bVar9;
  if (local_268._Widget.Object == (SThrobber *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_268._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_268._Widget.Object == (SThrobber *)0x0) {
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
  FVar6.ReferenceController = local_268._Widget.SharedReferenceCount.ReferenceController;
  local_268._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_268._Widget.Object = (SThrobber *)0x0;
  if (pSVar4 == (SThrobber *)0x0) {
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
  local_250 = pSVar4;
  local_248.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->MyThrobber;
  if (pTVar2 != (TSharedPtr<SThrobber,1> *)&local_250) {
    pTVar2->Object = pSVar4;
    local_250 = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyThrobber).SharedReferenceCount,&local_248);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
  if (pTVar2->Object == (SThrobber *)0x0) {
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
  pTVar3 = (this->MyThrobber).SharedReferenceCount.ReferenceController;
  pSVar4 = pTVar2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SThrobber *)0x0) {
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

// ReleaseSlateResources @ 146a0b680

void __thiscall UThrobber::ReleaseSlateResources(UThrobber *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyThrobber != (TSharedPtr<SThrobber,1> *)&local_18) {
    (this->MyThrobber).Object = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyThrobber).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetAnimateHorizontally @ 146a10ef0

void __thiscall UThrobber::SetAnimateHorizontally(UThrobber *this,bool param_1)

{
  SThrobber *this_00;
  
  this_00 = (this->MyThrobber).Object;
  this->bAnimateHorizontally = param_1;
  if (this_00 != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (this_00,-(uint)(this->bAnimateOpacity != false) & Opacity |
                       (uint)(this->bAnimateVertically != false) | (uint)param_1 * 2);
    return;
  }
  return;
}

// SetAnimateOpacity @ 146a10f40

void __thiscall UThrobber::SetAnimateOpacity(UThrobber *this,bool param_1)

{
  SThrobber *this_00;
  
  this_00 = (this->MyThrobber).Object;
  this->bAnimateOpacity = param_1;
  if (this_00 != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (this_00,-(uint)(this->bAnimateHorizontally != false) & Horizontal |
                       (uint)(this->bAnimateVertically != false) | (uint)param_1 << 2);
    return;
  }
  return;
}

// SetAnimateVertically @ 146a10f90

void __thiscall UThrobber::SetAnimateVertically(UThrobber *this,bool param_1)

{
  SThrobber *this_00;
  
  this_00 = (this->MyThrobber).Object;
  this->bAnimateVertically = param_1;
  if (this_00 != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (this_00,-(uint)(this->bAnimateOpacity != false) & Opacity |
                       -(uint)(this->bAnimateHorizontally != false) & Horizontal | (uint)param_1);
    return;
  }
  return;
}

// SetImage @ 146a15640

void __thiscall UThrobber::SetImage(UThrobber *this,FSlateBrush *param_1)

{
  SThrobber *this_00;
  
  FSlateBrush::operator=(&this->Image,param_1);
  this_00 = (this->MyThrobber).Object;
  if (this_00 != (SThrobber *)0x0) {
    SThrobber::InvalidatePieceImage(this_00);
    return;
  }
  return;
}

// SetNumberOfPieces @ 146a18300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UThrobber::SetNumberOfPieces(UThrobber *this,int param_1)

{
  SThrobber *this_00;
  int iVar1;
  int iVar2;
  
  iVar1 = 0x19;
  if (param_1 < 0x19) {
    iVar1 = param_1;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  if ((iVar2 != param_1) && (2 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  this_00 = (this->MyThrobber).Object;
  this->NumberOfPieces = iVar2;
  if (this_00 != (SThrobber *)0x0) {
    SThrobber::SetNumPieces(this_00,iVar2);
  }
  return;
}

// StaticRegisterNativesUThrobber @ 146a1f1a0

void __cdecl UThrobber::StaticRegisterNativesUThrobber(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UThrobber_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a270f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UThrobber::SynchronizeProperties(UThrobber *this)

{
  SThrobber *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyThrobber).Object;
  if (this_00 == (SThrobber *)0x0) {
    return;
  }
  SThrobber::SetPieceImage(this_00,&this->Image);
  if ((this->MyThrobber).Object == (SThrobber *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SThrobber::InvalidatePieceImage((this->MyThrobber).Object);
  if ((this->MyThrobber).Object == (SThrobber *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = 0x19;
  if (this->NumberOfPieces < 0x19) {
    iVar4 = this->NumberOfPieces;
  }
  iVar2 = 1;
  if (1 < iVar4) {
    iVar2 = iVar4;
  }
  SThrobber::SetNumPieces((this->MyThrobber).Object,iVar2);
  if ((this->MyThrobber).Object == (SThrobber *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SThrobber::SetAnimate
            ((this->MyThrobber).Object,
             -(uint)(this->bAnimateOpacity != false) & Opacity |
             -(uint)(this->bAnimateHorizontally != false) & Horizontal |
             (uint)(this->bAnimateVertically != false));
  return;
}

// execSetAnimateHorizontally @ 146a39e90

void __cdecl UThrobber::execSetAnimateHorizontally(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SThrobber *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SThrobber **)&param_1[0xf].field_0x18;
  param_1[10].field_0x24 = local_res8[0] != 0;
  if (this != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (this,-(uint)(param_1[10].field_0x26 != '\0') & Opacity |
                    (uint)(param_1[10].field_0x25 != '\0') | (uint)(local_res8[0] != 0) * 2);
  }
  return;
}

// execSetAnimateOpacity @ 146a39f60

void __cdecl UThrobber::execSetAnimateOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SThrobber *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SThrobber **)&param_1[0xf].field_0x18;
  param_1[10].field_0x26 = local_res8[0] != 0;
  if (this != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (this,-(uint)(param_1[10].field_0x24 != '\0') & Horizontal |
                    (uint)(param_1[10].field_0x25 != '\0') | (uint)(local_res8[0] != 0) << 2);
  }
  return;
}

// execSetAnimateVertically @ 146a3a030

void __cdecl UThrobber::execSetAnimateVertically(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SThrobber *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SThrobber **)&param_1[0xf].field_0x18;
  param_1[10].field_0x25 = local_res8[0] != 0;
  if (this != (SThrobber *)0x0) {
    SThrobber::SetAnimate
              (this,-(uint)(param_1[10].field_0x26 != '\0') & Opacity |
                    -(uint)(param_1[10].field_0x24 != '\0') & Horizontal |
                    (uint)(local_res8[0] != 0));
  }
  return;
}

// execSetNumberOfPieces @ 146a40410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UThrobber::execSetNumberOfPieces(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SThrobber *this;
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
  iVar2 = 0x19;
  if (local_res8[0] < 0x19) {
    iVar2 = local_res8[0];
  }
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((iVar3 != local_res8[0]) && (2 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  this = *(SThrobber **)&param_1[0xf].field_0x18;
  *(int *)&param_1[10].field_0x20 = iVar3;
  if (this != (SThrobber *)0x0) {
    SThrobber::SetNumPieces(this,iVar3);
  }
  return;
}

