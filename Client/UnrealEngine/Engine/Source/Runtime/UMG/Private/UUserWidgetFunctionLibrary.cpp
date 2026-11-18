// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 146a48d20

UClass * __cdecl UUserWidgetFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetFunctionLibrary",
               &Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUUserWidgetFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UUserWidgetFunctionLibrary>,
               InternalVTableHelperCtorCaller<UUserWidgetFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton;
}

// UUserWidgetFunctionLibrary @ 146a56c60

UUserWidgetFunctionLibrary * __thiscall
UUserWidgetFunctionLibrary::UUserWidgetFunctionLibrary
          (UUserWidgetFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUserWidgetFunctionLibrary__6B_;
  return this;
}

// UUserWidgetFunctionLibrary @ 146a56c90

UUserWidgetFunctionLibrary * __thiscall
UUserWidgetFunctionLibrary::UUserWidgetFunctionLibrary
          (UUserWidgetFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUserWidgetFunctionLibrary__6B_;
  return this;
}

// ~UUserWidgetFunctionLibrary @ 146a58a40

void __thiscall
UUserWidgetFunctionLibrary::~UUserWidgetFunctionLibrary(UUserWidgetFunctionLibrary *this)

{
  *(undefined ***)this = &___7UUserWidgetFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_UMGSequencePlayer @ 146a62b20

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequencePlayer * __cdecl
UUserWidgetFunctionLibrary::Conv_UMGSequencePlayer(FWidgetAnimationHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  UUMGSequencePlayer *pUVar4;
  FWidgetAnimationState *this;
  bool bVar5;
  
  pTVar1 = (param_1->WeakState).WeakReferenceCount.ReferenceController;
  this = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return (UUMGSequencePlayer *)0x0;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = (param_1->WeakState).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this == (FWidgetAnimationState *)0x0) {
    return (UUMGSequencePlayer *)0x0;
  }
  pUVar4 = FWidgetAnimationState::GetOrCreateLegacyPlayer(this);
  return pUVar4;
}

// GetOuterUserWidget @ 146a77810

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUserWidget * __cdecl UUserWidgetFunctionLibrary::GetOuterUserWidget(UWidget *param_1)

{
  UClass *pUVar1;
  UUserWidget *pUVar2;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar1 = UUserWidget::StaticClass();
    pUVar2 = (UUserWidget *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
    return pUVar2;
  }
  return (UUserWidget *)0x0;
}

// GetPrivateStaticClass @ 146a78150

UClass * __cdecl UUserWidgetFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetFunctionLibrary",
               &Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUUserWidgetFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UUserWidgetFunctionLibrary>,
               InternalVTableHelperCtorCaller<UUserWidgetFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUUserWidgetFunctionLibrary @ 146a96880

void __cdecl UUserWidgetFunctionLibrary::StaticRegisterNativesUUserWidgetFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UUserWidgetFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_UMGSequencePlayer @ 146a9e640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UUserWidgetFunctionLibrary::execConv_UMGSequencePlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  UUMGSequencePlayer *pUVar4;
  FWidgetAnimationHandle *this;
  FWidgetAnimationHandle local_18;
  
  FWidgetAnimationHandle::FWidgetAnimationHandle(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FWidgetAnimationHandle *)param_2->MostRecentPropertyAddress != (FWidgetAnimationHandle *)0x0)
  {
    this = (FWidgetAnimationHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = FWidgetAnimationHandle::GetSequencePlayer(this);
  *(UUMGSequencePlayer **)param_3 = pUVar4;
  if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execGetOuterUserWidget @ 146aa2630

void __cdecl
UUserWidgetFunctionLibrary::execGetOuterUserWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  UObject *pUVar3;
  UObjectBaseUtility *local_res10 [3];
  
  local_res10[0] = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObjectBaseUtility *)0x0) {
    pUVar2 = UUserWidget::StaticClass();
    pUVar3 = UObjectBaseUtility::GetTypedOuter(this,pUVar2);
    *(UObject **)param_3 = pUVar3;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

