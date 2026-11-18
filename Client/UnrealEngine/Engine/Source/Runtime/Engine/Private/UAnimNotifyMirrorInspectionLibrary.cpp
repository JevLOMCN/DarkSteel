// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147498040

UClass * __cdecl UAnimNotifyMirrorInspectionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyMirrorInspectionLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyMirrorInspectionLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyMirrorInspectionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton;
}

// UAnimNotifyMirrorInspectionLibrary @ 1474b3d40

UAnimNotifyMirrorInspectionLibrary * __thiscall
UAnimNotifyMirrorInspectionLibrary::UAnimNotifyMirrorInspectionLibrary
          (UAnimNotifyMirrorInspectionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyMirrorInspectionLibrary__6B_;
  return this;
}

// UAnimNotifyMirrorInspectionLibrary @ 1474b3d70

UAnimNotifyMirrorInspectionLibrary * __thiscall
UAnimNotifyMirrorInspectionLibrary::UAnimNotifyMirrorInspectionLibrary
          (UAnimNotifyMirrorInspectionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyMirrorInspectionLibrary__6B_;
  return this;
}

// ~UAnimNotifyMirrorInspectionLibrary @ 1474b55c0

void __thiscall
UAnimNotifyMirrorInspectionLibrary::~UAnimNotifyMirrorInspectionLibrary
          (UAnimNotifyMirrorInspectionLibrary *this)

{
  *(undefined ***)this = &___7UAnimNotifyMirrorInspectionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetMirrorDataTable @ 1474dba50

UMirrorDataTable * __cdecl
UAnimNotifyMirrorInspectionLibrary::GetMirrorDataTable(FAnimNotifyEventReference *param_1)

{
  FAnimNotifyMirrorContext *pFVar1;
  UMirrorDataTable *pUVar2;
  
  pFVar1 = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyMirrorContext>(param_1);
  if (pFVar1 != (FAnimNotifyMirrorContext *)0x0) {
    pUVar2 = (UMirrorDataTable *)FWeakObjectPtr::Get(&(pFVar1->MirrorTable).WeakPtr);
    return pUVar2;
  }
  return (UMirrorDataTable *)0x0;
}

// GetPrivateStaticClass @ 1474dd020

UClass * __cdecl UAnimNotifyMirrorInspectionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyMirrorInspectionLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyMirrorInspectionLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyMirrorInspectionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton;
}

// IsTriggeredByMirroredAnimation @ 1474ea0a0

bool __cdecl
UAnimNotifyMirrorInspectionLibrary::IsTriggeredByMirroredAnimation
          (FAnimNotifyEventReference *param_1)

{
  FAnimNotifyMirrorContext *pFVar1;
  
  pFVar1 = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyMirrorContext>(param_1);
  if (pFVar1 != (FAnimNotifyMirrorContext *)0x0) {
    return pFVar1->bAnimationMirrored;
  }
  return false;
}

// StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary @ 1474fad70

void __cdecl
UAnimNotifyMirrorInspectionLibrary::StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMirrorDataTable @ 147505810

void __cdecl
UAnimNotifyMirrorInspectionLibrary::execGetMirrorDataTable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNotifyMirrorContext *pFVar2;
  UObject *pUVar3;
  FAnimNotifyEventReference *this;
  FAnimNotifyEventReference local_38;
  
  pUVar3 = (UObject *)0x0;
  local_38.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_38.CurrentAnimTime = 0.0;
  local_38.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_38.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_38.bActiveContext = false;
  local_38.Notify = (FAnimNotifyEvent *)0x0;
  local_38.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress !=
      (FAnimNotifyEventReference *)0x0) {
    this = (FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyMirrorContext>(this);
  if (pFVar2 != (FAnimNotifyMirrorContext *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(&(pFVar2->MirrorTable).WeakPtr);
  }
  *(UObject **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// execIsTriggeredByMirroredAnimation @ 147505cf0

void __cdecl
UAnimNotifyMirrorInspectionLibrary::execIsTriggeredByMirroredAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FAnimNotifyMirrorContext *pFVar3;
  FAnimNotifyEventReference *this;
  FAnimNotifyEventReference local_38;
  
  local_38.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_38.CurrentAnimTime = 0.0;
  local_38.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_38.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_38.bActiveContext = false;
  local_38.Notify = (FAnimNotifyEvent *)0x0;
  local_38.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress !=
      (FAnimNotifyEventReference *)0x0) {
    this = (FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyMirrorContext>(this);
  uVar2 = 0;
  if (pFVar3 != (FAnimNotifyMirrorContext *)0x0) {
    uVar2 = pFVar3->bAnimationMirrored;
  }
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

