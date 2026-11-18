// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 10

// StaticClass @ 14d80bbe0

UClass * __cdecl UAudioAnalyzerNRT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerNRT",
               &Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerNRT,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerNRT>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerNRT>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton;
}

// UAudioAnalyzerNRT @ 14d80cc10

UAudioAnalyzerNRT * __thiscall
UAudioAnalyzerNRT::UAudioAnalyzerNRT(UAudioAnalyzerNRT *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioAnalyzerNRT__6B_;
  (this->Sound).field0_0x0.DebugPtr = (USoundWave *)0x0;
  (this->Result).Object = (IAnalyzerNRTResult *)0x0;
  (this->Result).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResultCriticalSection,4000);
  this->CurrentResultId = (TAtomic<int>)0x0;
  return this;
}

// UAudioAnalyzerNRT @ 14d80cc60

UAudioAnalyzerNRT * __thiscall
UAudioAnalyzerNRT::UAudioAnalyzerNRT(UAudioAnalyzerNRT *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioAnalyzerNRT__6B_;
  (this->Sound).field0_0x0.DebugPtr = (USoundWave *)0x0;
  (this->Result).Object = (IAnalyzerNRTResult *)0x0;
  (this->Result).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResultCriticalSection,4000);
  this->CurrentResultId = (TAtomic<int>)0x0;
  return this;
}

// ~UAudioAnalyzerNRT @ 14d80cf60

void __thiscall UAudioAnalyzerNRT::~UAudioAnalyzerNRT(UAudioAnalyzerNRT *this)

{
  this->_padding_ = (longlong)&___7UAudioAnalyzerNRT__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResultCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UAudioAnalyzerAssetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAnalyzerNRTFactoryName @ 14d80f710

FName __thiscall UAudioAnalyzerNRT::GetAnalyzerNRTFactoryName(UAudioAnalyzerNRT *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Classes\\AudioAnalyzerNRT.h"
             ,0xbe,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d80f9d0

UClass * __cdecl UAudioAnalyzerNRT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerNRT",
               &Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerNRT,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerNRT>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerNRT>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton;
}

// GetSettings @ 14d80fd20

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
UAudioAnalyzerNRT::GetSettings(UAudioAnalyzerNRT *this,float param_1,int param_2)

{
  IAnalyzerNRTSettings IVar1;
  IAnalyzerNRTSettings *in_RDX;
  FLLMScope local_res10 [8];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  IVar1 = (IAnalyzerNRTSettings)::operator_new(8);
  if (IVar1 != (IAnalyzerNRTSettings)0x0) {
    *(undefined ***)IVar1 = &___7IAnalyzerNRTSettings_Audio__6B_;
  }
  *in_RDX = IVar1;
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res10);
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// Serialize @ 14d810320

void __thiscall UAudioAnalyzerNRT::Serialize(UAudioAnalyzerNRT *this,FArchive *param_1)

{
  TSharedPtr<Audio::IAnalyzerNRTResult,1> *pTVar1;
  code *pcVar2;
  IAnalyzerNRTResult *pIVar3;
  bool bVar4;
  FName *pFVar5;
  IAnalyzerNRTFactory *pIVar6;
  FSharedReferencer<1> FVar7;
  FWindowsRecursiveMutex *pFVar8;
  IAnalyzerNRTResult *local_res8;
  undefined1 local_res18 [16];
  IAnalyzerNRTResult *local_38;
  FSharedReferencer<1> local_30;
  
  UObject::Serialize((UObject *)this,param_1);
  pTVar1 = &this->Result;
  if ((this->Result).Object == (IAnalyzerNRTResult *)0x0) {
    if ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0) {
      pFVar5 = (FName *)(**(code **)(this->_padding_ + 0x2b8))(this,local_res18);
      pIVar6 = Audio::GetAnalyzerNRTFactory(*pFVar5);
      if (pIVar6 != (IAnalyzerNRTFactory *)0x0) {
        pFVar8 = &this->ResultCriticalSection;
        if (pFVar8 == (FWindowsRecursiveMutex *)0x0) goto LAB_14d8104a6;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar8);
        (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,&local_res8);
        pIVar3 = local_res8;
        local_38 = local_res8;
        local_res8 = (IAnalyzerNRTResult *)0x0;
        FVar7.ReferenceController = ::operator_new(0x18);
        if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FVar7.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VIAnalyzerNRTResult_Audio__U__DefaultDeleter_VIAnalyzerNRTResult_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          FVar7.ReferenceController[1]._padding_ = (longlong)pIVar3;
        }
        local_30.ReferenceController = FVar7.ReferenceController;
        if (local_res8 != (IAnalyzerNRTResult *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
        if (pTVar1 != (TSharedPtr<Audio::IAnalyzerNRTResult,1> *)&local_38) {
          pTVar1->Object = pIVar3;
          local_38 = (IAnalyzerNRTResult *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Result).SharedReferenceCount,&local_30);
          FVar7.ReferenceController = local_30.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar8);
      }
    }
    if (pTVar1->Object == (IAnalyzerNRTResult *)0x0) {
      return;
    }
  }
  pFVar8 = &this->ResultCriticalSection;
  if (pFVar8 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar8);
    if ((pTVar1->Object == (IAnalyzerNRTResult *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*pTVar1->Object + 8))(pTVar1->Object,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar8);
    return;
  }
LAB_14d8104a6:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Serialize @ 14d8104c0

void __thiscall
UAudioAnalyzerNRT::Serialize(UAudioAnalyzerNRT *this,FStructuredArchiveRecord param_1)

{
  TSharedPtr<Audio::IAnalyzerNRTResult,1> *pTVar1;
  code *pcVar2;
  IAnalyzerNRTResult *pIVar3;
  bool bVar4;
  FArchive *pFVar5;
  FName *pFVar6;
  IAnalyzerNRTFactory *pIVar7;
  FSharedReferencer<1> FVar8;
  FWindowsRecursiveMutex *pFVar9;
  IAnalyzerNRTResult *local_res8;
  FSlotBase local_res10;
  undefined1 local_res18 [8];
  IAnalyzerNRTResult *local_38;
  FSharedReferencer<1> local_30;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,pFVar5);
  pTVar1 = &this->Result;
  if ((this->Result).Object == (IAnalyzerNRTResult *)0x0) {
    if ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0) {
      pFVar6 = (FName *)(**(code **)(this->_padding_ + 0x2b8))(this,local_res18);
      pIVar7 = Audio::GetAnalyzerNRTFactory(*pFVar6);
      if (pIVar7 != (IAnalyzerNRTFactory *)0x0) {
        pFVar9 = &this->ResultCriticalSection;
        if (pFVar9 == (FWindowsRecursiveMutex *)0x0) goto LAB_14d81065e;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar9);
        (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,&local_res8);
        pIVar3 = local_res8;
        local_38 = local_res8;
        local_res8 = (IAnalyzerNRTResult *)0x0;
        FVar8.ReferenceController = ::operator_new(0x18);
        if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          (FVar8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (FVar8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FVar8.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VIAnalyzerNRTResult_Audio__U__DefaultDeleter_VIAnalyzerNRTResult_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          FVar8.ReferenceController[1]._padding_ = (longlong)pIVar3;
        }
        local_30.ReferenceController = FVar8.ReferenceController;
        if (local_res8 != (IAnalyzerNRTResult *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
        if (pTVar1 != (TSharedPtr<Audio::IAnalyzerNRTResult,1> *)&local_38) {
          pTVar1->Object = pIVar3;
          local_38 = (IAnalyzerNRTResult *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Result).SharedReferenceCount,&local_30);
          FVar8.ReferenceController = local_30.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar9);
      }
    }
    if (pTVar1->Object == (IAnalyzerNRTResult *)0x0) {
      return;
    }
  }
  pFVar9 = &this->ResultCriticalSection;
  if (pFVar9 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar9);
    if ((pTVar1->Object == (IAnalyzerNRTResult *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*pTVar1->Object + 8))(pTVar1->Object,pFVar5);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar9);
    return;
  }
LAB_14d81065e:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUAudioAnalyzerNRT @ 14d810e30

void __cdecl UAudioAnalyzerNRT::StaticRegisterNativesUAudioAnalyzerNRT(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

