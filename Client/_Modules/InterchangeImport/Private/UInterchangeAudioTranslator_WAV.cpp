// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e675390

UClass * __cdecl UInterchangeAudioTranslator_WAV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_WAV",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_WAV,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_WAV>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_WAV>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton;
}

// UInterchangeAudioTranslator_WAV @ 14e690940

UInterchangeAudioTranslator_WAV * __thiscall
UInterchangeAudioTranslator_WAV::UInterchangeAudioTranslator_WAV
          (UInterchangeAudioTranslator_WAV *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslator_WAV @ 14e690980

UInterchangeAudioTranslator_WAV * __thiscall
UInterchangeAudioTranslator_WAV::UInterchangeAudioTranslator_WAV
          (UInterchangeAudioTranslator_WAV *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslator_WAV @ 14e691f50

void __thiscall
UInterchangeAudioTranslator_WAV::~UInterchangeAudioTranslator_WAV
          (UInterchangeAudioTranslator_WAV *this)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0480

UClass * __cdecl UInterchangeAudioTranslator_WAV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_WAV",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslator_WAV,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_WAV>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_WAV>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton;
}

// GetSupportedFormats @ 14e6a14c0

/* WARNING: Removing unreachable block (ram,0x00014e6a1647) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslator_WAV::GetSupportedFormats
          (UInterchangeAudioTranslator_WAV *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  FString local_28;
  
  pwVar10 = L"";
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xc0);
  pFVar7 = UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_WAV();
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  plVar8 = (longlong *)(*pcVar1)(pIVar2,pwVar10,1);
  if ((plVar8 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8), cVar4 != '\0'))
  {
    ::FString::FString(&local_28,L"wav;Wave Audio File");
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar9 <= (FScriptContainerElement *)&local_28) &&
       (((FScriptContainerElement *)&local_28 <
         pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10 &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)))) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_28.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeAudioTranslator_WAV @ 14e6a81b0

void __cdecl
UInterchangeAudioTranslator_WAV::StaticRegisterNativesUInterchangeAudioTranslator_WAV(void)

{
  return;
}

