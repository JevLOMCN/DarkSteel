// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 26

// StaticClass @ 142c7cf30

UClass * __cdecl UTypedElementListLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementListLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementListLibrary",
               &Z_Registration_Info_UClass_UTypedElementListLibrary.InnerSingleton,
               StaticRegisterNativesUTypedElementListLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTypedElementListLibrary>,
               InternalVTableHelperCtorCaller<UTypedElementListLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementListLibrary.InnerSingleton;
}

// UTypedElementListLibrary @ 142c7d610

UTypedElementListLibrary * __thiscall
UTypedElementListLibrary::UTypedElementListLibrary
          (UTypedElementListLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTypedElementListLibrary__6B_;
  return this;
}

// UTypedElementListLibrary @ 142c7d640

UTypedElementListLibrary * __thiscall
UTypedElementListLibrary::UTypedElementListLibrary
          (UTypedElementListLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTypedElementListLibrary__6B_;
  return this;
}

// ~UTypedElementListLibrary @ 142c7d6a0

void __thiscall UTypedElementListLibrary::~UTypedElementListLibrary(UTypedElementListLibrary *this)

{
  *(undefined ***)this = &___7UTypedElementListLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142c7dff0

UClass * __cdecl UTypedElementListLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementListLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementListLibrary",
               &Z_Registration_Info_UClass_UTypedElementListLibrary.InnerSingleton,
               StaticRegisterNativesUTypedElementListLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTypedElementListLibrary>,
               InternalVTableHelperCtorCaller<UTypedElementListLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementListLibrary.InnerSingleton;
}

// StaticRegisterNativesUTypedElementListLibrary @ 142c7e3f0

void __cdecl UTypedElementListLibrary::StaticRegisterNativesUTypedElementListLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementListLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAdd @ 142c7fc40

void __cdecl UTypedElementListLibrary::execAdd(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  void **ppvVar5;
  undefined1 uVar6;
  void *local_res10;
  FScriptTypedElementHandle local_res18 [2];
  TTypedElementList<FScriptTypedElementHandle> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_28 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar3 = pTStack_20;
  ppvVar5 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_20->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_28 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    local_res18[0].InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)*ppvVar5;
    if (local_res18[0].InternalData.ControlBlock !=
        (FScriptTypedElementInternalDataControlBlock *)0x0) {
      ((FScriptTypedElementInternalDataControlBlock *)local_res18[0].InternalData.ControlBlock)->
      WeakRefCount = ((FScriptTypedElementInternalDataControlBlock *)
                     local_res18[0].InternalData.ControlBlock)->WeakRefCount + 1;
    }
    bVar4 = TTypedElementList<FScriptTypedElementHandle>::AddElementImpl(local_28,local_res18);
    if ((local_res18[0].InternalData.ControlBlock !=
         (FScriptTypedElementInternalDataControlBlock *)0x0) &&
       (*(int *)((longlong)local_res18[0].InternalData.ControlBlock + 8) =
             *(int *)((longlong)local_res18[0].InternalData.ControlBlock + 8) + -1,
       *(int *)((longlong)local_res18[0].InternalData.ControlBlock + 8) == 0)) {
      ::operator_delete((void *)local_res18[0].InternalData.ControlBlock,0x10);
    }
    if (bVar4) {
      uVar6 = 1;
      goto LAB_142c7fd73;
    }
  }
  uVar6 = 0;
LAB_142c7fd73:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined1 *)param_3 = uVar6;
  if ((local_res10 != (void *)0x0) &&
     (*(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1,
     *(int *)((longlong)local_res10 + 8) == 0)) {
    ::operator_delete(local_res10,0x10);
    local_res10 = (void *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execAppend @ 142c7fdd0

void __cdecl UTypedElementListLibrary::execAppend(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FScriptTypedElementHandle *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  TTypedElementList<FScriptTypedElementHandle> *this;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FScriptTypedElementHandle *pFVar8;
  FScriptTypedElementHandle **ppFVar9;
  FScriptTypedElementInternalDataPtr local_res10;
  FScriptTypedElementHandle *local_38;
  undefined8 local_30;
  TTypedElementList<FScriptTypedElementHandle> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FLegacySyncScopedBatch local_18;
  
  local_28 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (FScriptTypedElementHandle *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar6 = pTStack_20;
  this = local_28;
  ppFVar9 = &local_38;
  if ((FScriptTypedElementHandle **)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle **)0x0) {
    ppFVar9 = (FScriptTypedElementHandle **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_20->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_28 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    pFVar8 = *ppFVar9;
    iVar3 = *(int *)(ppFVar9 + 1);
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
              (&local_18,this,true);
    TTypedElementList<FScriptTypedElementHandle>::Reserve
              (this,(this->ElementHandles).ArrayNum + iVar3);
    pFVar2 = pFVar8 + iVar3;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 1) {
      local_res10.ControlBlock = (pFVar8->InternalData).ControlBlock;
      if (local_res10.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
        (local_res10.ControlBlock)->WeakRefCount = (local_res10.ControlBlock)->WeakRefCount + 1;
      }
      TTypedElementList<FScriptTypedElementHandle>::AddElementImpl
                (this,(FScriptTypedElementHandle *)&local_res10);
      if ((local_res10.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
         ((local_res10.ControlBlock)->WeakRefCount = (local_res10.ControlBlock)->WeakRefCount + -1,
         (local_res10.ControlBlock)->WeakRefCount == 0)) {
        ::operator_delete(local_res10.ControlBlock,0x10);
      }
    }
    TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
              (&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  DestructItems<FScriptTypedElementHandle,int>(local_38,(int)local_30);
  if (local_38 != (FScriptTypedElementHandle *)0x0) {
    FMemory::Free(local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execAppendList @ 142c7ffd0

void __cdecl
UTypedElementListLibrary::execAppendList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTypedElementList<FScriptTypedElementHandle> *this;
  TReferenceControllerBase<1> *pTVar2;
  TTypedElementList<FScriptTypedElementHandle> *this_00;
  TReferenceControllerBase<1> *pTVar3;
  TTypedElementList<FScriptTypedElementHandle> *local_res10;
  TObjectPtr<UClass>_u_0 local_res20;
  TTypedElementList<FScriptTypedElementHandle> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TTypedElementList<FScriptTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  code *local_38;
  TTypedElementList<FScriptTypedElementHandle> **local_30;
  FLegacySyncScopedBatch local_28;
  
  local_48 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = pTStack_40;
  this_00 = local_48;
  pTVar2 = pTStack_50;
  this = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_48 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
     (local_58 != (TTypedElementList<FScriptTypedElementHandle> *)0x0)) {
    if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_48 != local_58) {
      TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
                (&local_28,local_48,true);
      TTypedElementList<FScriptTypedElementHandle>::Reserve
                (this_00,(this_00->ElementHandles).ArrayNum + (this->ElementHandles).ArrayNum);
      local_30 = &local_res10;
      local_res20.DebugPtr = (UClass *)0x0;
      local_res10 = this_00;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::Append'::__l5::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
                 ::Call;
      TTypedElementList<FScriptTypedElementHandle>::ForEachElementHandle
                (this,(TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *)&local_38,
                 (TSubclassOf<UInterface> *)&local_res20.ObjectPtr);
      TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
                (&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execClone @ 142c801a0

void __cdecl UTypedElementListLibrary::execClone(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TTypedElementList<FScriptTypedElementHandle> *pTVar8;
  TTypedElementList<FScriptTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> local_38;
  undefined1 local_28 [16];
  
  local_48 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar4 = pTStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_48 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  }
  else {
    pTVar5 = TTypedElementList<FScriptTypedElementHandle>::Clone(local_48,&local_38);
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar8 = pTVar5->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar5->SharedReferenceCount).ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_3 != local_28) {
    *(TTypedElementList<FScriptTypedElementHandle> **)param_3 = pTVar8;
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_3 + 8);
    if (pTVar6 != pTVar4) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar6;
      pTVar6 = pTVar7;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            pTVar6 = (TReferenceControllerBase<1> *)0x0;
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execContains @ 142c80310

void __cdecl UTypedElementListLibrary::execContains(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  void **ppvVar6;
  FTypedElementId *pFVar7;
  undefined1 uVar8;
  void *local_res10;
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar4 = pTStack_10;
  ppvVar6 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_18 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    if ((*ppvVar6 == (longlong *)0x0) ||
       (lVar3 = *(longlong *)*ppvVar6, pFVar7 = (FTypedElementId *)(lVar3 + 8), lVar3 == 0)) {
      pFVar7 = &FTypedElementId::Unset;
    }
    bVar5 = TTypedElementList<FScriptTypedElementHandle>::ContainsElementImpl(local_18,pFVar7);
    if (bVar5) {
      uVar8 = 1;
      goto LAB_142c8042c;
    }
  }
  uVar8 = 0;
LAB_142c8042c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)param_3 = uVar8;
  if ((local_res10 != (void *)0x0) &&
     (*(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1,
     *(int *)((longlong)local_res10 + 8) == 0)) {
    ::operator_delete(local_res10,0x10);
    local_res10 = (void *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execCountElements @ 142c80490

void __cdecl
UTypedElementListLibrary::execCountElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  UClass *local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  iVar4 = 0;
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18.DebugPtr = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pTVar3 = pTStack_10;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_18 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    iVar4 = TTypedElementList<FScriptTypedElementHandle>::CountElements
                      (local_18,(TSubclassOf<UInterface> *)&local_res18.ObjectPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(int *)param_3 = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execCountElementsOfType @ 142c805d0

void __cdecl
UTypedElementListLibrary::execCountElementsOfType(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  FName local_res10;
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  iVar4 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar3 = pTStack_10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_18 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    iVar4 = TTypedElementList<FScriptTypedElementHandle>::CountElementsOfType(local_18,local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(int *)param_3 = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execCreateScriptElementList @ 142c806f0

void __cdecl
UTypedElementListLibrary::execCreateScriptElementList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  UTypedElementRegistry *local_res10;
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> local_28;
  undefined1 local_18 [16];
  
  local_res10 = (UTypedElementRegistry *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TTypedElementList<FScriptTypedElementHandle>::Private_CreateElementList(&local_28,local_res10);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (param_3 != local_18) {
    *(TTypedElementList<FScriptTypedElementHandle> **)param_3 = local_28.Object;
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_3 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != pTVar4) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) =
           local_28.SharedReferenceCount.ReferenceController;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        local_28.SharedReferenceCount.ReferenceController = pTVar5;
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// execEmpty @ 142c80810

void __cdecl UTypedElementListLibrary::execEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int local_res10 [6];
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar3 = pTStack_10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_18 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    TTypedElementList<FScriptTypedElementHandle>::Empty(local_18,local_res10[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetElementHandleAt @ 142c80a70

/* WARNING: Removing unreachable block (ram,0x000142c80bda) */
/* WARNING: Removing unreachable block (ram,0x000142c80be0) */

void __cdecl
UTypedElementListLibrary::execGetElementHandleAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  lVar7 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar4 = pTStack_40;
  lVar3 = local_48;
  lVar8 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_48 == 0) {
    local_res20 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)local_res10[0] < *(int *)(local_48 + 0x70)) {
      uVar6 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x68) + lVar8 * 8);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    local_res18 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(longlong *)param_3 = lVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetElementHandles @ 142c80c20

void __cdecl
UTypedElementListLibrary::execGetElementHandles(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UClass *local_res10;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  TTypedElementList<FScriptTypedElementHandle> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_68;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  pFVar6 = (FScriptContainerElement *)0x0;
  local_res10 = (UClass *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_78 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0].DebugPtr = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pTVar4 = pTStack_70;
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = local_78 == (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  if (bVar7) {
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    pTVar5 = &local_68;
  }
  else {
    pTVar5 = TTypedElementList<FScriptTypedElementHandle>::GetElementHandles
                       (local_78,&local_58,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr);
    pFVar6 = (pTVar5->AllocatorInstance).Data;
  }
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar5->ArrayNum;
  iVar2 = pTVar5->ArrayMax;
  pTVar5->ArrayNum = 0;
  pTVar5->ArrayMax = 0;
  if (bVar7) {
    DestructItems<FScriptTypedElementHandle,int>
              ((FScriptTypedElementHandle *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  if (!bVar7) {
    DestructItems<FScriptTypedElementHandle,int>
              ((FScriptTypedElementHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_3 == local_48) {
    DestructItems<FScriptTypedElementHandle,int>((FScriptTypedElementHandle *)pFVar6,iVar1);
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar6;
    *(int *)((longlong)param_3 + 8) = iVar1;
    *(int *)((longlong)param_3 + 0xc) = iVar2;
    DestructItems<FScriptTypedElementHandle,int>((FScriptTypedElementHandle *)0x0,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// execGetElementInterface @ 142c80e40

void __cdecl
UTypedElementListLibrary::execGetElementInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UObject *pUVar4;
  FScriptTypedElementInternalDataPtr *pFVar5;
  FScriptTypedElementInternalDataPtr local_res10;
  UClass *local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  TTypedElementList<FScriptTypedElementHandle> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_28 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar4 = (UObject *)0x0;
  local_res10.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UClass *)0x0;
  pFVar5 = &local_res10;
  if ((FScriptTypedElementInternalDataPtr *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementInternalDataPtr *)0x0) {
    pFVar5 = (FScriptTypedElementInternalDataPtr *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20.DebugPtr = local_res18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pTVar3 = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_20->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_28 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    pUVar4 = TTypedElementList<FScriptTypedElementHandle>::GetElementInterface
                       (local_28,(FScriptTypedElementHandle *)pFVar5,
                        (TSubclassOf<UInterface> *)&local_res20.ObjectPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(UObject **)param_3 = pUVar4;
  if ((local_res10.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     ((local_res10.ControlBlock)->WeakRefCount = (local_res10.ControlBlock)->WeakRefCount + -1,
     (local_res10.ControlBlock)->WeakRefCount == 0)) {
    ::operator_delete(local_res10.ControlBlock,0x10);
    local_res10.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execHasElements @ 142c80ff0

void __cdecl
UTypedElementListLibrary::execHasElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18.DebugPtr = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pTVar3 = pTStack_10;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if ((local_18 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) ||
     (bVar4 = TTypedElementList<FScriptTypedElementHandle>::HasElements
                        (local_18,(TSubclassOf<UInterface> *)&local_res18.ObjectPtr), !bVar4)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined1 *)param_3 = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execHasElementsOfType @ 142c81130

void __cdecl
UTypedElementListLibrary::execHasElementsOfType(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar3 = pTStack_10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if ((local_18 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) ||
     (bVar4 = TTypedElementList<FScriptTypedElementHandle>::HasElementsOfType(local_18,local_res10),
     !bVar4)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined1 *)param_3 = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execIsValidIndex @ 142c81320

void __cdecl
UTypedElementListLibrary::execIsValidIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined1 uVar3;
  int local_res10 [2];
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar2 = pTStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_28 == 0) || (local_res10[0] < 0)) || (*(int *)(local_28 + 0x70) <= local_res10[0])) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execNum @ 142c81590

void __cdecl UTypedElementListLibrary::execNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  longlong local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = pTStack_10;
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_18 != 0) {
    uVar4 = *(undefined4 *)(local_18 + 0x70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined4 *)param_3 = uVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execRemove @ 142c81740

void __cdecl UTypedElementListLibrary::execRemove(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  void **ppvVar6;
  FTypedElementId *pFVar7;
  undefined1 uVar8;
  void *local_res10;
  TTypedElementList<FScriptTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar4 = pTStack_10;
  ppvVar6 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_10->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (local_18 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    if ((*ppvVar6 == (longlong *)0x0) ||
       (lVar3 = *(longlong *)*ppvVar6, pFVar7 = (FTypedElementId *)(lVar3 + 8), lVar3 == 0)) {
      pFVar7 = &FTypedElementId::Unset;
    }
    bVar5 = TTypedElementList<FScriptTypedElementHandle>::RemoveElementImpl(local_18,pFVar7);
    if (bVar5) {
      uVar8 = 1;
      goto LAB_142c8185c;
    }
  }
  uVar8 = 0;
LAB_142c8185c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)param_3 = uVar8;
  if ((local_res10 != (void *)0x0) &&
     (*(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1,
     *(int *)((longlong)local_res10 + 8) == 0)) {
    ::operator_delete(local_res10,0x10);
    local_res10 = (void *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execReserve @ 142c818c0

void __cdecl UTypedElementListLibrary::execReserve(UObject *param_1,FFrame *param_2,void *param_3)

{
  ulonglong uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar6 = pTStack_20;
  lVar5 = local_28;
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar8 = (ulonglong)local_res10[0];
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28 == 0) goto LAB_142c81a1a;
  if ((uint)(*(int *)(local_28 + 0x20) - *(int *)(local_28 + 0x4c)) < local_res10[0]) {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)local_res10[0]);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(local_28 + 0x18),local_res10[0]);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((*(int *)(lVar5 + 0x60) != 0) && (iVar7 <= *(int *)(lVar5 + 0x60))) goto LAB_142c81a47;
    *(int *)(lVar5 + 0x60) = iVar7;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               (lVar5 + 0x18));
  }
  else {
LAB_142c81a47:
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
  }
  if (*(int *)(lVar5 + 0x74) < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,(ForAnyElementType *)(lVar5 + 0x68),*(int *)(lVar5 + 0x70),
               (int *)(lVar5 + 0x74));
  }
LAB_142c81a1a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execReset @ 142c81a70

void __cdecl UTypedElementListLibrary::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  TTypedElementList<FScriptTypedElementHandle> *this;
  TReferenceControllerBase<1> *pTVar6;
  FScriptTypedElementInternalDataPtr local_res10;
  TTypedElementList<FScriptTypedElementHandle> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_28 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar6 = pTStack_20;
  this = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_20->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if ((local_28 != (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
     ((local_28->ElementHandles).ArrayNum != 0)) {
    TTypedElementList<FScriptTypedElementHandle>::NoteListMayChange(local_28);
    if (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
        *(int *)&(this->ElementCombinedIds).Elements.field_0x34) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                (&this->ElementCombinedIds);
      iVar3 = *(int *)&(this->ElementCombinedIds).Elements.field_0xc;
      *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x8 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&this->ElementCombinedIds,0,
                   (int *)&(this->ElementCombinedIds).Elements.field_0xc);
      }
      *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x28 = 0;
    }
    piVar2 = &(this->ElementHandles).ArrayMax;
    pFVar5 = (this->ElementHandles).AllocatorInstance.Data;
    iVar3 = (this->ElementHandles).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<FScriptTypedElementHandle,int>((FScriptTypedElementHandle *)pFVar5,iVar3);
      (this->ElementHandles).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ElementHandles).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FScriptTypedElementHandle,int>((FScriptTypedElementHandle *)pFVar5,iVar3);
      (this->ElementHandles).ArrayNum = 0;
    }
    FTypedElementCounter::ClearCounters(&this->ElementCounts);
    local_res10.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
    TTypedElementList<FScriptTypedElementHandle>::NoteListChanged
              (this,Cleared,(FScriptTypedElementHandle *)&local_res10);
    if ((local_res10.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
       ((local_res10.ControlBlock)->WeakRefCount = (local_res10.ControlBlock)->WeakRefCount + -1,
       (local_res10.ControlBlock)->WeakRefCount == 0)) {
      ::operator_delete(local_res10.ControlBlock,0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execShrink @ 142c81c30

void __cdecl UTypedElementListLibrary::execShrink(UObject *param_1,FFrame *param_2,void *param_3)

{
  ulonglong uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  int iVar6;
  uint uVar7;
  longlong local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar5 = pTStack_10;
  lVar4 = local_18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 != 0) {
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Shrink((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_18 + 0x18));
    uVar7 = *(int *)(lVar4 + 0x20) - *(int *)(lVar4 + 0x4c);
    if (uVar7 < 4) {
      iVar6 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((0 < (int)uVar7) && (*(int *)(lVar4 + 0x60) < iVar6)) || (iVar6 < *(int *)(lVar4 + 0x60)))
    {
      *(int *)(lVar4 + 0x60) = iVar6;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 (lVar4 + 0x18));
    }
    iVar6 = *(int *)(lVar4 + 0x70);
    if (*(int *)(lVar4 + 0x74) != iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,(ForAnyElementType *)(lVar4 + 0x68),iVar6,(int *)(lVar4 + 0x74));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

