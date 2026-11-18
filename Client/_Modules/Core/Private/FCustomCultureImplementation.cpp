// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FCustomCultureImplementation @ 1416d4530

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FCustomCultureImplementation * __thiscall
FCustomCultureImplementation::FCustomCultureImplementation
          (FCustomCultureImplementation *this,TSharedRef<ICustomCulture,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_1->Object + 8))(param_1->Object,local_18);
  FICUCultureImplementation::FICUCultureImplementation
            ((FICUCultureImplementation *)this,(FString *)(*plVar2 + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  this->_padding_ = (longlong)&___7FCustomCultureImplementation__6B_;
  (this->CustomCulture).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->CustomCulture).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FCustomCultureImplementation @ 1416d84f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FCustomCultureImplementation::~FCustomCultureImplementation(FCustomCultureImplementation *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomCulture).SharedReferenceCount.ReferenceController);
  FICUCultureImplementation::~FICUCultureImplementation((FICUCultureImplementation *)this);
  return;
}

// GetDisplayName @ 1416f7e30

FString * __thiscall
FCustomCultureImplementation::GetDisplayName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x10))();
  return __return_storage_ptr__;
}

// GetEnglishName @ 1416f80a0

FString * __thiscall
FCustomCultureImplementation::GetEnglishName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x18))();
  return __return_storage_ptr__;
}

// GetName @ 1416f8bf0

FString * __thiscall
FCustomCultureImplementation::GetName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x20))();
  return __return_storage_ptr__;
}

// GetNativeLanguage @ 1416f8cf0

FString * __thiscall
FCustomCultureImplementation::GetNativeLanguage
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x48))();
  return __return_storage_ptr__;
}

// GetNativeName @ 1416f90c0

FString * __thiscall
FCustomCultureImplementation::GetNativeName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x28))();
  return __return_storage_ptr__;
}

// GetNativeRegion @ 1416f92c0

FString * __thiscall
FCustomCultureImplementation::GetNativeRegion
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x50))();
  return __return_storage_ptr__;
}

// GetRegion @ 1416fb660

FString * __thiscall
FCustomCultureImplementation::GetRegion
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x58))();
  return __return_storage_ptr__;
}

// GetScript @ 1416fb710

FString * __thiscall
FCustomCultureImplementation::GetScript
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x60))();
  return __return_storage_ptr__;
}

// GetThreeLetterISOLanguageName @ 1416fbcf0

FString * __thiscall
FCustomCultureImplementation::GetThreeLetterISOLanguageName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x38))();
  return __return_storage_ptr__;
}

// GetTwoLetterISOLanguageName @ 1416fc5e0

FString * __thiscall
FCustomCultureImplementation::GetTwoLetterISOLanguageName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x40))();
  return __return_storage_ptr__;
}

// GetUnrealLegacyThreeLetterISOLanguageName @ 1416fc7e0

FString * __thiscall
FCustomCultureImplementation::GetUnrealLegacyThreeLetterISOLanguageName
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x30))();
  return __return_storage_ptr__;
}

// GetVariant @ 1416fc980

FString * __thiscall
FCustomCultureImplementation::GetVariant
          (FCustomCultureImplementation *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->CustomCulture).Object + 0x68))();
  return __return_storage_ptr__;
}

// IsRightToLeft @ 141702930

bool __thiscall FCustomCultureImplementation::IsRightToLeft(FCustomCultureImplementation *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014170293a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->CustomCulture).Object + 0x70))();
  return (bool)uVar1;
}

