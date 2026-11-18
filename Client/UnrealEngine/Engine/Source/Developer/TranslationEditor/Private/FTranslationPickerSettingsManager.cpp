// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 1

// Get @ 146babdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSharedPtr<FTranslationPickerSettingsManager,1> * __cdecl
FTranslationPickerSettingsManager::Get(void)

{
  FTranslationPickerSettingsManager *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTranslationPickerSettings *this;
  longlong *plVar4;
  undefined1 auStackY_d8 [32];
  TRawPtrProxy<FTranslationPickerSettingsManager> local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (TranslationPickerSettingsManagerInstance.Object == (FTranslationPickerSettingsManager *)0x0) {
    pFVar1 = ::operator_new(8);
    if (pFVar1 == (FTranslationPickerSettingsManager *)0x0) {
      pFVar1 = (FTranslationPickerSettingsManager *)0x0;
    }
    else {
      pUVar2 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar3 = UTranslationPickerSettings::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar3);
      local_98._8_8_ = pUVar2;
      this = (UTranslationPickerSettings *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar4 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      pFVar1->TranslationPickerSettingsObject = this;
      UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                          (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                           *)0x0);
    }
    local_a8[0].Object = pFVar1;
    TSharedPtr<FTranslationPickerSettingsManager,1>::operator=<FTranslationPickerSettingsManager>
              (&TranslationPickerSettingsManagerInstance,local_a8);
  }
  return &TranslationPickerSettingsManagerInstance;
}

