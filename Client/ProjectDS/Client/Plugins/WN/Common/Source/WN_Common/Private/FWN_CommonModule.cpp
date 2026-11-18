// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 4

// StartupModule @ 149482950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FWN_CommonModule::StartupModule(FWN_CommonModule *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  TObjectPtr<UWN_VariantObjectReferencer>_u_0 TVar3;
  FUObjectItem *this_00;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UWN_VariantObjectReferencer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  TVar3.DebugPtr =
       (UWN_VariantObjectReferencer *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar3.DebugPtr != (UWN_VariantObjectReferencer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  sVariantObjectReferencer.field0_0x0 =
       (TObjectPtr<UWN_VariantObjectReferencer>_u_0)
       (TObjectPtr<UWN_VariantObjectReferencer>_u_0)TVar3.DebugPtr;
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4));
  FUObjectItem::SetRootFlags(this_00,RootSet);
  return;
}

// PreUnloadCallback @ 149482a20

void __thiscall FWN_CommonModule::PreUnloadCallback(FWN_CommonModule *this)

{
  sVariantObjectReferencer.field0_0x0 = (TObjectPtr<UWN_VariantObjectReferencer>_u_0)(FObjectPtr)0x0
  ;
  return;
}

// PostLoadCallback @ 149482a40

void __thiscall FWN_CommonModule::PostLoadCallback(FWN_CommonModule *this)

{
  return;
}

// ShutdownModule @ 149482a50

void __thiscall FWN_CommonModule::ShutdownModule(FWN_CommonModule *this)

{
  return;
}

