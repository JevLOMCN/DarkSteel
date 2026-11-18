// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4177f0

UClass * __cdecl UDS_AnimNotify_GameStart::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_GameStart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_GameStart",
               &Z_Registration_Info_UClass_UDS_AnimNotify_GameStart.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_GameStart,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_GameStart>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_GameStart>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_GameStart.InnerSingleton;
}

// UDS_AnimNotify_GameStart @ 14b41b3c0

UDS_AnimNotify_GameStart * __thiscall
UDS_AnimNotify_GameStart::UDS_AnimNotify_GameStart
          (UDS_AnimNotify_GameStart *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify_GameStart__6B_;
  return this;
}

// ~UDS_AnimNotify_GameStart @ 14b41bbb0

void __thiscall UDS_AnimNotify_GameStart::~UDS_AnimNotify_GameStart(UDS_AnimNotify_GameStart *this)

{
  *(undefined ***)this = &___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d910

UClass * __cdecl UDS_AnimNotify_GameStart::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_GameStart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_GameStart",
               &Z_Registration_Info_UClass_UDS_AnimNotify_GameStart.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_GameStart,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_GameStart>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_GameStart>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_GameStart.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_GameStart @ 14b41e220

void __cdecl UDS_AnimNotify_GameStart::StaticRegisterNativesUDS_AnimNotify_GameStart(void)

{
  return;
}

// UDS_AnimNotify_GameStart @ 14b8b2190

UDS_AnimNotify_GameStart * __thiscall
UDS_AnimNotify_GameStart::UDS_AnimNotify_GameStart
          (UDS_AnimNotify_GameStart *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify_GameStart__6B_;
  return this;
}

// Notify @ 14b8d22d0

void __thiscall
UDS_AnimNotify_GameStart::Notify
          (UDS_AnimNotify_GameStart *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2
          ,FAnimNotifyEventReference *param_3)

{
  undefined8 uVar1;
  UMirrorDataTable *pUVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  USkeletalMeshComponent *pUStack_58;
  UAnimSequenceBase *pUStack_50;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTStack_48;
  TReferenceControllerBase<1> *pTStack_40;
  FAnimNotifyEvent *pFStack_38;
  TObjectPtr<UMirrorDataTable_const_>_u_0 TStack_30;
  TObjectPtr<UObject_const_>_u_0 TStack_28;
  float fStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  
  uVar1 = *(undefined8 *)&this->field_0x30;
  *(USkeletalMeshComponent **)&this->field_0x30 = param_1;
  (**(code **)(*(longlong *)this + 0x2c8))();
  pTStack_40 = (param_3->ContextData).SharedReferenceCount.ReferenceController;
  pTStack_48 = (param_3->ContextData).Object;
  uStack_18 = 0;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUStack_58 = param_1;
  pUStack_50 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFStack_38 = param_3->Notify;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_3->MirrorTable).field0_0x0.DebugPtr, pUVar2 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  TStack_30 = (param_3->MirrorTable).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_3->NotifySource).field0_0x0.DebugPtr, pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  TStack_28 = (param_3->NotifySource).field0_0x0;
  fStack_20 = param_3->CurrentAnimTime;
  uStack_1c = param_3->bActiveContext;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotify_Received_Notify);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar4,&pUStack_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  *(undefined8 *)&this->field_0x30 = uVar1;
  return;
}

