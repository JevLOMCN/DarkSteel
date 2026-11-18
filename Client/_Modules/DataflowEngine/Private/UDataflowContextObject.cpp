// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 9

// StaticClass @ 1462c1440

UClass * __cdecl UDataflowContextObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowContextObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowContextObject",
               &Z_Registration_Info_UClass_UDataflowContextObject.InnerSingleton,
               StaticRegisterNativesUDataflowContextObject,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowContextObject>,
               InternalVTableHelperCtorCaller<UDataflowContextObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowContextObject.InnerSingleton;
}

// UDataflowContextObject @ 1462cf160

UDataflowContextObject * __thiscall
UDataflowContextObject::UDataflowContextObject(UDataflowContextObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowContextObject__6B_;
  (this->RenderCollection).Object = (FManagedArrayCollection *)0x0;
  (this->RenderCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SelectedNode).field0_0x0.DebugPtr = (UDataflowEdNode *)0x0;
  this->ConstructionViewMode = (IDataflowConstructionViewMode *)0x0;
  (this->DataflowContext).Object = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
  (this->DataflowContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DataflowGraph).field0_0x0.DebugPtr = (UDataflow *)0x0;
  (this->SelectedCollection).Object = (FManagedArrayCollection *)0x0;
  (this->SelectedCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bUsingInputCollection = false;
  return this;
}

// UDataflowContextObject @ 1462cf1b0

UDataflowContextObject * __thiscall
UDataflowContextObject::UDataflowContextObject
          (UDataflowContextObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowContextObject__6B_;
  (this->RenderCollection).Object = (FManagedArrayCollection *)0x0;
  (this->RenderCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SelectedNode).field0_0x0.DebugPtr = (UDataflowEdNode *)0x0;
  this->ConstructionViewMode = (IDataflowConstructionViewMode *)0x0;
  (this->DataflowContext).Object = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
  (this->DataflowContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DataflowGraph).field0_0x0.DebugPtr = (UDataflow *)0x0;
  (this->SelectedCollection).Object = (FManagedArrayCollection *)0x0;
  (this->SelectedCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bUsingInputCollection = false;
  return this;
}

// ~UDataflowContextObject @ 1462d0270

void __thiscall UDataflowContextObject::~UDataflowContextObject(UDataflowContextObject *this)

{
  this->_padding_ = (longlong)&___7UDataflowContextObject__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedCollection).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataflowContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderCollection).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 1462d2560

void __cdecl
UDataflowContextObject::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDataflowContextObject>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[1].field_0x10,0,0);
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UDataflowContextObject>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetPrivateStaticClass @ 1462ddd30

UClass * __cdecl UDataflowContextObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowContextObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowContextObject",
               &Z_Registration_Info_UClass_UDataflowContextObject.InnerSingleton,
               StaticRegisterNativesUDataflowContextObject,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowContextObject>,
               InternalVTableHelperCtorCaller<UDataflowContextObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowContextObject.InnerSingleton;
}

// SetDataflowAsset @ 1462e5070

void __thiscall
UDataflowContextObject::SetDataflowAsset
          (UDataflowContextObject *this,TObjectPtr<UDataflow> *param_1)

{
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    (this->DataflowGraph).field0_0x0 = param_1->field0_0x0;
    return;
  }
  if ((param_1->field0_0x0).DebugPtr != (UDataflow *)0x0) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
    (this->DataflowGraph).field0_0x0 = param_1->field0_0x0;
    return;
  }
  (this->DataflowGraph).field0_0x0.DebugPtr = (UDataflow *)0x0;
  return;
}

// SetDataflowContext @ 1462e5120

void __thiscall
UDataflowContextObject::SetDataflowContext
          (UDataflowContextObject *this,
          TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->DataflowContext).SharedReferenceCount.ReferenceController;
  (this->DataflowContext).Object = pTVar2;
  (this->DataflowContext).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// StaticRegisterNativesUDataflowContextObject @ 1462e6250

void __cdecl UDataflowContextObject::StaticRegisterNativesUDataflowContextObject(void)

{
  return;
}

