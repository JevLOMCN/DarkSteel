// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b50ba10

UClass * __cdecl UDS_M_CommonIconTextButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonIconTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonIconTextButton",
               &Z_Registration_Info_UClass_UDS_M_CommonIconTextButton.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonIconTextButton,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonIconTextButton>,
               InternalVTableHelperCtorCaller<UDS_M_CommonIconTextButton>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonIconTextButton.InnerSingleton;
}

// UDS_M_CommonIconTextButton @ 14b50fec0

UDS_M_CommonIconTextButton * __thiscall
UDS_M_CommonIconTextButton::UDS_M_CommonIconTextButton
          (UDS_M_CommonIconTextButton *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonIconTextButton__6B_;
  return this;
}

// UDS_M_CommonIconTextButton @ 14b50fef0

UDS_M_CommonIconTextButton * __thiscall
UDS_M_CommonIconTextButton::UDS_M_CommonIconTextButton
          (UDS_M_CommonIconTextButton *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonIconTextButton__6B_;
  return this;
}

// ~UDS_M_CommonIconTextButton @ 14b512860

void __thiscall
UDS_M_CommonIconTextButton::~UDS_M_CommonIconTextButton(UDS_M_CommonIconTextButton *this)

{
  *(undefined ***)this = &___7UDS_M_CommonIconTextButton__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b514e80

UClass * __cdecl UDS_M_CommonIconTextButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonIconTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonIconTextButton",
               &Z_Registration_Info_UClass_UDS_M_CommonIconTextButton.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonIconTextButton,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonIconTextButton>,
               InternalVTableHelperCtorCaller<UDS_M_CommonIconTextButton>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonIconTextButton.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonIconTextButton @ 14b516b70

void __cdecl UDS_M_CommonIconTextButton::StaticRegisterNativesUDS_M_CommonIconTextButton(void)

{
  return;
}

// GetViewModelContext @ 14bcfecf0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonIconTextButton::GetViewModelContext
          (UDS_M_CommonIconTextButton *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> *pTVar7;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar8;
  FDS_ViewModelContext_CommonIconTextButton *local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_18;
  
  puVar1 = &this->field_0x190;
  if (*(longlong *)puVar1 == 0) {
    pTVar7 = MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_18);
    local_20.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_28 = pTVar7->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FDS_ViewModelContext_CommonIconTextButton **)puVar1 != &local_28) {
      *(FDS_ViewModelContext_CommonIconTextButton **)puVar1 = local_28;
      local_28 = (FDS_ViewModelContext_CommonIconTextButton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x198,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*(longlong *)puVar1 == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2229014299215396881>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonIconTextButton.cpp"
                         ,0x11,"false");
      if (!bVar6) {
        __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar5)();
      return pTVar8;
    }
    *(undefined4 *)(*(longlong *)puVar1 + 0x18) = 0x15b;
    if ((*(longlong *)puVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar5)();
      return pTVar8;
    }
    lVar2 = *(longlong *)puVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UDS_M_CommonIconTextButton **)(lVar2 + 0x20) = this;
  }
  uVar3 = *(undefined8 *)&this->field_0x178;
  if ((*(longlong *)puVar1 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar5)();
    return pTVar8;
  }
  *(undefined8 *)(*(longlong *)puVar1 + 0x10) = uVar3;
  __return_storage_ptr__->Object = *(FDS_ViewModelContext_ModelBase **)puVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x198;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

