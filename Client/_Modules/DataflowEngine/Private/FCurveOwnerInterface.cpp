// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 9

// ~FCurveOwnerInterface @ 1462cfc00

void __thiscall FCurveOwnerInterface::~FCurveOwnerInterface(FCurveOwnerInterface *this)

{
  *this = (FCurveOwnerInterface)&___7FCurveOwnerInterface__6B_;
  return;
}

// GetClampedLinearColorValue @ 1462dc110

FLinearColor * __thiscall
FCurveOwnerInterface::GetClampedLinearColorValue
          (FCurveOwnerInterface *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// GetLinearColorValue @ 1462dd390

FLinearColor * __thiscall
FCurveOwnerInterface::GetLinearColorValue
          (FCurveOwnerInterface *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// HasAnyAlphaKeys @ 1462df6f0

bool __thiscall FCurveOwnerInterface::HasAnyAlphaKeys(FCurveOwnerInterface *this)

{
  return false;
}

// HasRichCurves @ 1462df810

bool __thiscall FCurveOwnerInterface::HasRichCurves(FCurveOwnerInterface *this)

{
  return true;
}

// IsLinearColorCurve @ 1462dfd40

bool __thiscall FCurveOwnerInterface::IsLinearColorCurve(FCurveOwnerInterface *this)

{
  return false;
}

// ModifyOwnerChange @ 1462e0030

void __thiscall FCurveOwnerInterface::ModifyOwnerChange(FCurveOwnerInterface *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001462e0033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x20))();
  return;
}

// RepointCurveOwner @ 1462e3d50

bool __thiscall
FCurveOwnerInterface::RepointCurveOwner
          (FCurveOwnerInterface *this,FPackageReloadedEvent *param_1,FCurveOwnerInterface **param_2)

{
  return false;
}

// SetOnCurveChangedIsInteractive @ 1462e5980

void __thiscall
FCurveOwnerInterface::SetOnCurveChangedIsInteractive(FCurveOwnerInterface *this,bool param_1)

{
  return;
}

