// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468d5e60

UClass * __cdecl UWidgetAnimationHandleFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationHandleFunctionLibrary",
               &Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUWidgetAnimationHandleFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationHandleFunctionLibrary>,
               InternalVTableHelperCtorCaller<UWidgetAnimationHandleFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton;
}

// UWidgetAnimationHandleFunctionLibrary @ 146902830

UWidgetAnimationHandleFunctionLibrary * __thiscall
UWidgetAnimationHandleFunctionLibrary::UWidgetAnimationHandleFunctionLibrary
          (UWidgetAnimationHandleFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWidgetAnimationHandleFunctionLibrary__6B_;
  return this;
}

// UWidgetAnimationHandleFunctionLibrary @ 146902860

UWidgetAnimationHandleFunctionLibrary * __thiscall
UWidgetAnimationHandleFunctionLibrary::UWidgetAnimationHandleFunctionLibrary
          (UWidgetAnimationHandleFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWidgetAnimationHandleFunctionLibrary__6B_;
  return this;
}

// ~UWidgetAnimationHandleFunctionLibrary @ 146904ff0

void __thiscall
UWidgetAnimationHandleFunctionLibrary::~UWidgetAnimationHandleFunctionLibrary
          (UWidgetAnimationHandleFunctionLibrary *this)

{
  *(undefined ***)this = &___7UWidgetAnimationHandleFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 1469233f0

UClass * __cdecl UWidgetAnimationHandleFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationHandleFunctionLibrary",
               &Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUWidgetAnimationHandleFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationHandleFunctionLibrary>,
               InternalVTableHelperCtorCaller<UWidgetAnimationHandleFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton;
}

// GetUserTag @ 1469253d0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl UWidgetAnimationHandleFunctionLibrary::GetUserTag(FWidgetAnimationHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  longlong *in_RDX;
  longlong lVar4;
  bool bVar5;
  
  pTVar1 = (TReferenceControllerBase<1> *)in_RDX[1];
  lVar4 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_146925406;
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
    lVar4 = *in_RDX;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (lVar4 != 0) {
    (param_1->WeakState).Object = *(FWidgetAnimationState **)(lVar4 + 0xfc);
    return (FName)param_1;
  }
LAB_146925406:
  (param_1->WeakState).Object = (FWidgetAnimationState *)0x0;
  return (FName)param_1;
}

// SetUserTag @ 146944400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetAnimationHandleFunctionLibrary::SetUserTag(FWidgetAnimationHandle *param_1,FName param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pFVar4 = (FWidgetAnimationState *)0x0;
  pTVar1 = (param_1->WeakState).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
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
    pFVar4 = (param_1->WeakState).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    pFVar4->UserTag = param_2;
  }
  return;
}

// StaticRegisterNativesUWidgetAnimationHandleFunctionLibrary @ 146945c00

void __cdecl
UWidgetAnimationHandleFunctionLibrary::StaticRegisterNativesUWidgetAnimationHandleFunctionLibrary
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetUserTag @ 146952830

void __cdecl
UWidgetAnimationHandleFunctionLibrary::execGetUserTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_18;
  longlong *plStack_10;
  
  lVar7 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = (TReferenceControllerBase<1> *)plVar9[1];
  lVar8 = lVar7;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar4->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469528e1;
      }
      LOCK();
      aVar6 = pTVar4->SharedReferenceCount;
      bVar10 = aVar5 == aVar6;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar10);
    lVar8 = *plVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (lVar8 != 0) {
    lVar7 = *(longlong *)(lVar8 + 0xfc);
  }
LAB_1469528e1:
  *(longlong *)param_3 = lVar7;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execSetUserTag @ 1469566e0

void __cdecl
UWidgetAnimationHandleFunctionLibrary::execSetUserTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  atomic<int> aVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_res10;
  longlong local_28;
  longlong *plStack_20;
  
  lVar8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = 0;
  plVar9 = &local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = (TReferenceControllerBase<1> *)plVar9[1];
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar4->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469567e4;
      }
      LOCK();
      aVar7 = pTVar4->SharedReferenceCount;
      bVar10 = aVar5 == aVar7;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar10);
    lVar8 = *plVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0xfc) = uVar6;
  }
LAB_1469567e4:
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

