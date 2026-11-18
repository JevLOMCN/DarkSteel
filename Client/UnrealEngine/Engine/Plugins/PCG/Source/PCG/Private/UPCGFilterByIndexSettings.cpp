// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149b2f6c0

UClass * __cdecl UPCGFilterByIndexSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByIndexSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByIndexSettings",
               &Z_Registration_Info_UClass_UPCGFilterByIndexSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByIndexSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFilterByIndexSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByIndexSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByIndexSettings.InnerSingleton;
}

// UPCGFilterByIndexSettings @ 149b574e0

UPCGFilterByIndexSettings * __thiscall
UPCGFilterByIndexSettings::UPCGFilterByIndexSettings
          (UPCGFilterByIndexSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bInvertFilter = false;
  this->_padding_ = (longlong)&___7UPCGFilterByIndexSettings__6B_;
  (this->SelectedIndices).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedIndices).Data.ArrayNum = 0;
  (this->SelectedIndices).Data.ArrayMax = 0;
  return this;
}

// UPCGFilterByIndexSettings @ 149b57520

UPCGFilterByIndexSettings * __thiscall
UPCGFilterByIndexSettings::UPCGFilterByIndexSettings
          (UPCGFilterByIndexSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bInvertFilter = false;
  this->_padding_ = (longlong)&___7UPCGFilterByIndexSettings__6B_;
  (this->SelectedIndices).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedIndices).Data.ArrayNum = 0;
  (this->SelectedIndices).Data.ArrayMax = 0;
  return this;
}

// ~UPCGFilterByIndexSettings @ 149b591f0

void __thiscall
UPCGFilterByIndexSettings::~UPCGFilterByIndexSettings(UPCGFilterByIndexSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGFilterByIndexSettings__6B_;
  pFVar1 = (this->SelectedIndices).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGFilterDataBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b410

TSharedPtr<IPCGElement,1> * __thiscall
UPCGFilterByIndexSettings::CreateElement
          (UPCGFilterByIndexSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGFilterByIndexElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGFilterByIndexElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 149b8d460

FString * __thiscall
UPCGFilterByIndexSettings::GetAdditionalTitleInformation
          (UPCGFilterByIndexSettings *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FText *this_00;
  FString *pFVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FText local_28;
  
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_28,L"PCGFilterByIndexElement",L"FilterIndices",L"Indices: ");
  pFVar2 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  local_40 = (this->SelectedIndices).Data.ArrayNum;
  lVar4 = (longlong)local_40;
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  if (iVar1 < 0xd) {
    _Src = (this->SelectedIndices).Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar4 * 2);
    }
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_48.Data,iVar1);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else {
    if (local_40 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(this->SelectedIndices).Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize((FString *)&local_28,pwVar3,9);
    ::FString::ConcatFC(&local_38,(FString *)&local_28,L"...");
    iVar1 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b91100

UClass * __cdecl UPCGFilterByIndexSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByIndexSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByIndexSettings",
               &Z_Registration_Info_UClass_UPCGFilterByIndexSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByIndexSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFilterByIndexSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByIndexSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByIndexSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGFilterByIndexSettings @ 149b98550

void __cdecl UPCGFilterByIndexSettings::StaticRegisterNativesUPCGFilterByIndexSettings(void)

{
  return;
}

