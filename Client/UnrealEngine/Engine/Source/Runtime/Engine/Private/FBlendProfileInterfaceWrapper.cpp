// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14750ec90

UScriptStruct * __cdecl FBlendProfileInterfaceWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper,(UObject *)pUVar1,
                         L"BlendProfileInterfaceWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.OuterSingleton;
}

// SetBlendProfileProvider @ 147578950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlendProfileInterfaceWrapper::SetBlendProfileProvider
          (FBlendProfileInterfaceWrapper *this,TObjectPtr<UObject> param_1,
          IBlendProfileProviderInterface *param_2,UObject *param_3)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  UClass *pUVar4;
  UBlendProfile *pUVar5;
  longlong *plVar6;
  IBlendProfileProviderInterface *pIVar7;
  undefined1 auStackY_f8 [32];
  TObjectPtr<UBlendProfile>_u_0 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar2 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
    *(UObject **)&this->BlendProfileProvider = pUVar2;
  }
  else {
    *(UObject **)&this->BlendProfileProvider = pUVar2;
  }
  pIVar7 = (IBlendProfileProviderInterface *)0x0;
  *(IBlendProfileProviderInterface **)&(this->BlendProfileProvider).field_0x8 = param_2;
  if (pUVar2 == (UObject *)0x0) {
    param_2 = pIVar7;
  }
  if (param_2 == (IBlendProfileProviderInterface *)0x0) {
    this->bIsSkeletonBlendProfile = false;
  }
  else {
    pUVar5 = (this->BlendProfile).field0_0x0.DebugPtr;
    if ((pUVar5 == (UBlendProfile *)0x0) || ((UObject *)pUVar5->_padding_ != param_3)) {
      FObjectInitializer::AssertIfInConstructor
                (param_3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = UBlendProfile::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar4);
      local_b8._8_8_ = param_3;
      pUVar5 = (UBlendProfile *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar6 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBlendProfile *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->BlendProfile).field0_0x0.DebugPtr = pUVar5;
    }
    piVar1 = &(pUVar5->ProfileEntries).ArrayMax;
    (pUVar5->ProfileEntries).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&(pUVar5->ProfileEntries).AllocatorInstance,0,piVar1);
    }
    if (*(longlong *)&this->BlendProfileProvider != 0) {
      pIVar7 = *(IBlendProfileProviderInterface **)&(this->BlendProfileProvider).field_0x8;
    }
    local_c8[0] = (TObjectPtr<UBlendProfile>_u_0)(this->BlendProfile).field0_0x0.DebugPtr;
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_c8[0].DebugPtr != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8[0].DebugPtr);
    }
    (*pcVar3)(pIVar7,local_c8);
    this->bIsSkeletonBlendProfile = false;
  }
  return;
}

// SetSkeletonBlendProfile @ 14757a430

void __thiscall
FBlendProfileInterfaceWrapper::SetSkeletonBlendProfile
          (FBlendProfileInterfaceWrapper *this,TObjectPtr<UBlendProfile> param_1)

{
  *(undefined8 *)&this->BlendProfileProvider = 0;
  *(undefined8 *)&(this->BlendProfileProvider).field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->BlendProfile).field0_0x0 = *param_1.field0_0x0;
  this->bIsSkeletonBlendProfile = true;
  return;
}

// UpdateCachedBlendProfile @ 147581fd0

void __thiscall
FBlendProfileInterfaceWrapper::UpdateCachedBlendProfile(FBlendProfileInterfaceWrapper *this)

{
  longlong *plVar1;
  code *pcVar2;
  TObjectPtr<UBlendProfile>_u_0 local_res8;
  
  if (((this->bIsSkeletonBlendProfile == false) && (*(longlong *)&this->BlendProfileProvider != 0))
     && (local_res8 = (TObjectPtr<UBlendProfile>_u_0)(this->BlendProfile).field0_0x0.DebugPtr,
        local_res8.DebugPtr != (UBlendProfile *)0x0)) {
    plVar1 = *(longlong **)&(this->BlendProfileProvider).field_0x8;
    pcVar2 = *(code **)(*plVar1 + 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    (*pcVar2)(plVar1,&local_res8);
  }
  return;
}

