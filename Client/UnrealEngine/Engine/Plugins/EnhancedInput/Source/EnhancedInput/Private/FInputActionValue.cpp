// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 4

// StaticStruct @ 14a6b3be0

UScriptStruct * __cdecl FInputActionValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputActionValue.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FInputActionValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputActionValue,(UObject *)pUVar1,
                         L"InputActionValue");
  }
  return Z_Registration_Info_UScriptStruct_FInputActionValue.OuterSingleton;
}

// GetMagnitudeSq @ 14a6df600

float __thiscall FInputActionValue::GetMagnitudeSq(FInputActionValue *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EInputActionValueType EVar4;
  code *pcVar5;
  bool bVar6;
  float fVar7;
  
  EVar4 = this->ValueType;
  if ((EVar4 == Boolean) || (EVar4 == Axis1D)) {
    dVar1 = (this->Value).field0_0x0._s_0.X;
    return (float)(dVar1 * dVar1);
  }
  if (EVar4 == Axis2D) {
    dVar1 = (this->Value).field0_0x0._s_0.X;
    dVar2 = (this->Value).field0_0x0._s_0.Y;
    return (float)(dVar2 * dVar2 + dVar1 * dVar1);
  }
  if (EVar4 != Axis3D) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                       ,0x9b,L"Unsupported value type for input action value!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar7 = (float)(*pcVar5)();
      return fVar7;
    }
    return 0.0;
  }
  dVar1 = (this->Value).field0_0x0._s_0.X;
  dVar2 = (this->Value).field0_0x0._s_0.Y;
  dVar3 = (this->Value).field0_0x0._s_0.Z;
  return (float)(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
}

// GetValueTypeFromKey @ 14a6e2d20

EInputActionValueType __cdecl FInputActionValue::GetValueTypeFromKey(FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  
  bVar2 = FKey::IsAxis3D(param_1);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return Axis3D;
  }
  bVar2 = FKey::IsAxis2D(param_1);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return Axis2D;
  }
  bVar2 = FKey::IsAxis1D(param_1);
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return Axis1D;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return Boolean;
}

// ToString @ 14a6fc7a0

FString * __thiscall
FInputActionValue::ToString(FInputActionValue *this,FString *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EInputActionValueType EVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  
  EVar4 = this->ValueType;
  if (EVar4 == Boolean) {
    dVar1 = (this->Value).field0_0x0._s_0.X;
    dVar2 = (this->Value).field0_0x0._s_0.Y;
    pwVar8 = L"false";
    dVar3 = (this->Value).field0_0x0._s_0.Z;
    if (__real_3e45798ec0000000 <= dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3) {
      pwVar8 = L"true";
    }
    ::FString::FString(__return_storage_ptr__,pwVar8);
    return __return_storage_ptr__;
  }
  if (EVar4 == Axis1D) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%3.3f");
    return __return_storage_ptr__;
  }
  if (EVar4 == Axis2D) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
    return __return_storage_ptr__;
  }
  if (EVar4 != Axis3D) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                       ,0xbf,L"Unsupported value type for input action value!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar5)();
      return pFVar7;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

