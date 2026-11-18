// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FResolvedPropertyAndFunction @ 1462996c0

FResolvedPropertyAndFunction * __thiscall
FTrackInstancePropertyBindings::FResolvedPropertyAndFunction::FResolvedPropertyAndFunction
          (FResolvedPropertyAndFunction *this,FResolvedPropertyAndFunction *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FResolvedPropertyAndFunction *pFVar4;
  
  bVar1 = (param_1->ResolvedProperty).TypeIndex;
  (this->ResolvedProperty).TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FResolvedPropertyAndFunction *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  (this->SetterFunction).WeakPtr = (param_1->SetterFunction).WeakPtr;
  return this;
}

// FResolvedPropertyAndFunction @ 146299740

FResolvedPropertyAndFunction * __thiscall
FTrackInstancePropertyBindings::FResolvedPropertyAndFunction::FResolvedPropertyAndFunction
          (FResolvedPropertyAndFunction *this)

{
  undefined8 local_res8;
  
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  (this->ResolvedProperty)._padding_ = 0;
  *(undefined4 *)&(this->ResolvedProperty)._padding_ = 0xffffffff;
  (this->ResolvedProperty).TypeIndex = '\0';
  (this->SetterFunction).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SetterFunction).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~FResolvedPropertyAndFunction @ 14629b860

void __thiscall
FTrackInstancePropertyBindings::FResolvedPropertyAndFunction::~FResolvedPropertyAndFunction
          (FResolvedPropertyAndFunction *this)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  char *in_RDX;
  
  bVar1 = (this->ResolvedProperty).TypeIndex;
  if (1 < bVar1) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    pvVar2 = (void *)(this->ResolvedProperty)._padding_;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    if (pvVar2 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar2,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
    }
    return;
  case 2:
    *(short *)&(this->ResolvedProperty)._padding_ = (short)*(longlong *)in_RDX;
    return;
  case 3:
    *(short *)&(this->ResolvedProperty)._padding_ = (short)*(longlong *)in_RDX;
    return;
  case 4:
    (this->ResolvedProperty)._padding_ = *(longlong *)in_RDX;
    (this->ResolvedProperty)._padding_ = *(longlong *)((longlong)in_RDX + 8);
    *(longlong *)((longlong)in_RDX + 8) = 0;
    *(longlong *)in_RDX = 0;
    return;
  case 5:
    return;
  case 6:
    return;
  case 7:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->ResolvedProperty)._padding_);
    return;
  }
  pvVar2 = (void *)(this->ResolvedProperty)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->ResolvedProperty)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->ResolvedProperty)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// GetContainerAddress @ 1462aed20

void * __thiscall
FTrackInstancePropertyBindings::FResolvedPropertyAndFunction::GetContainerAddress
          (FResolvedPropertyAndFunction *this)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *pFVar2;
  void *pvVar3;
  
  uVar1 = (this->ResolvedProperty).TypeIndex;
  pFVar2 = this;
  if (uVar1 != '\0') {
    pFVar2 = (FResolvedPropertyAndFunction *)0x0;
  }
  if (pFVar2 != (FResolvedPropertyAndFunction *)0x0) {
    return (void *)(pFVar2->ResolvedProperty)._padding_;
  }
  if (uVar1 != '\x01') {
    this = (FResolvedPropertyAndFunction *)0x0;
  }
  if (this != (FResolvedPropertyAndFunction *)0x0) {
    pvVar3 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,true)
    ;
    return pvVar3;
  }
  return (void *)0x0;
}

// GetValidProperty @ 1462b10b0

FProperty * __thiscall
FTrackInstancePropertyBindings::FResolvedPropertyAndFunction::GetValidProperty
          (FResolvedPropertyAndFunction *this)

{
  uchar uVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FProperty *pFVar5;
  
  uVar1 = (this->ResolvedProperty).TypeIndex;
  pFVar5 = (FProperty *)0x0;
  pFVar2 = (FProperty *)this;
  if (uVar1 != '\0') {
    pFVar2 = pFVar5;
  }
  if (pFVar2 != (FProperty *)0x0) {
    pFVar2 = UE::MovieScene::FCachedProperty::GetValidProperty((FCachedProperty *)pFVar2);
    return pFVar2;
  }
  if (uVar1 != '\x01') {
    this = (FResolvedPropertyAndFunction *)pFVar5;
  }
  if ((FProperty *)this == (FProperty *)0x0) {
    pFVar5 = (FProperty *)0x0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&((FProperty *)this)->_padding_);
    if (pUVar3 == (UObject *)0x0) {
      ((FProperty *)this)->ArrayDim = 0;
      ((FProperty *)this)->ElementSize = 0;
    }
    else {
      pFVar4 = FProperty::StaticClass();
      pFVar5 = (FProperty *)
               FFieldPath::GetTyped
                         ((FFieldPath *)&((FProperty *)this)->ArrayDim,pFVar4,(UStruct *)0x0);
    }
    if (((((FProperty *)this)->_padding_ == 0) || (pFVar5 == (FProperty *)0x0)) ||
       ((*(EObjectFlags *)&pFVar5->_padding_ & (RF_FinishDestroyed|RF_BeginDestroyed)) != RF_NoFlags
       )) {
      return (FProperty *)0x0;
    }
  }
  return pFVar5;
}

