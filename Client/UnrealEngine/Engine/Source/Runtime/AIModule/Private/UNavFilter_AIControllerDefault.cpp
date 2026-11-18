// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146f84e60

UClass * __cdecl UNavFilter_AIControllerDefault::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavFilter_AIControllerDefault",
               &Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton,
               StaticRegisterNativesUNavFilter_AIControllerDefault,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavFilter_AIControllerDefault>,
               InternalVTableHelperCtorCaller<UNavFilter_AIControllerDefault>,local_res8,
               UNavigationQueryFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton;
}

// UNavFilter_AIControllerDefault @ 146f95a60

UNavFilter_AIControllerDefault * __thiscall
UNavFilter_AIControllerDefault::UNavFilter_AIControllerDefault
          (UNavFilter_AIControllerDefault *this,FVTableHelper *param_1)

{
  UNavigationQueryFilter::UNavigationQueryFilter((UNavigationQueryFilter *)this,param_1);
  *(undefined ***)this = &___7UNavFilter_AIControllerDefault__6B_;
  return this;
}

// UNavFilter_AIControllerDefault @ 146f95a90

UNavFilter_AIControllerDefault * __thiscall
UNavFilter_AIControllerDefault::UNavFilter_AIControllerDefault
          (UNavFilter_AIControllerDefault *this,FObjectInitializer *param_1)

{
  UNavigationQueryFilter::UNavigationQueryFilter((UNavigationQueryFilter *)this,param_1);
  *(uint *)&this->field_0x40 = *(uint *)&this->field_0x40 | 2;
  *(undefined ***)this = &___7UNavFilter_AIControllerDefault__6B_;
  return this;
}

// ~UNavFilter_AIControllerDefault @ 146f96fb0

void __thiscall
UNavFilter_AIControllerDefault::~UNavFilter_AIControllerDefault
          (UNavFilter_AIControllerDefault *this)

{
  *(undefined ***)this = &___7UNavFilter_AIControllerDefault__6B_;
  UNavigationQueryFilter::~UNavigationQueryFilter((UNavigationQueryFilter *)this);
  return;
}

// GetPrivateStaticClass @ 146fb41f0

UClass * __cdecl UNavFilter_AIControllerDefault::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavFilter_AIControllerDefault",
               &Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton,
               StaticRegisterNativesUNavFilter_AIControllerDefault,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavFilter_AIControllerDefault>,
               InternalVTableHelperCtorCaller<UNavFilter_AIControllerDefault>,local_res8,
               UNavigationQueryFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton;
}

// GetSimpleFilterForAgent @ 146fb5040

TSubclassOf<UNavigationQueryFilter> __thiscall
UNavFilter_AIControllerDefault::GetSimpleFilterForAgent
          (UNavFilter_AIControllerDefault *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TSubclassOf<UNavigationQueryFilter> TVar5;
  UObject *pUVar6;
  longlong in_R8;
  
  if (in_R8 != 0) {
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(in_R8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(in_R8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      in_R8 = *(longlong *)(in_R8 + 0x2f0);
    }
  }
  if (in_R8 != 0) {
    pUVar4 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(in_R8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(in_R8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar6 = *(UObject **)(in_R8 + 0x3d8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      goto LAB_146fb50f5;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<9154163131415527444>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\NavFilter_AIControllerDefault.cpp"
                     ,0x14,"AsAIController");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    TVar5.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar2)();
    return (TSubclassOf<UNavigationQueryFilter>)TVar5.Class.field0_0x0;
  }
  pUVar6 = (UObject *)0x0;
LAB_146fb50f5:
  *(UObject **)param_1 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  return (TSubclassOf<UNavigationQueryFilter>)(TObjectPtr<UClass>)param_1;
}

// StaticRegisterNativesUNavFilter_AIControllerDefault @ 146fd36f0

void __cdecl
UNavFilter_AIControllerDefault::StaticRegisterNativesUNavFilter_AIControllerDefault(void)

{
  return;
}

