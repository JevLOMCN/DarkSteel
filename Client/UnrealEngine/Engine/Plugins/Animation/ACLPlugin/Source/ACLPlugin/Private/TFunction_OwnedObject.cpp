// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 6

// CloneToEmptyStorage @ 14deb3200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UEDatabaseStreamer::stream_in'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__stream_in_UEDatabaseStreamer__UEAAXII_NW4quality_tier_acl__Ustreaming_request_id_5__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14deb3220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl'::__l78::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14deb5650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UEDatabaseStreamer::stream_in'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014deb5655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14deb5660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl'::__l78::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014deb5665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14deb5810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UEDatabaseStreamer::stream_in'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14deb5820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl'::__l78::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

