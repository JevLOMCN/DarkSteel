// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b31f40

UClass * __cdecl UPCGDataFromTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFromTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFromTool",
               &Z_Registration_Info_UClass_UPCGDataFromTool.InnerSingleton,
               StaticRegisterNativesUPCGDataFromTool,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGDataFromTool>,
               InternalVTableHelperCtorCaller<UPCGDataFromTool>,local_res8,UPCGSettings::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFromTool.InnerSingleton;
}

// UPCGDataFromTool @ 149b569f0

UPCGDataFromTool * __thiscall
UPCGDataFromTool::UPCGDataFromTool(UPCGDataFromTool *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataFromTool__6B_;
  (this->ToolTag).ComparisonIndex = 0;
  (this->ToolTag).Number = 0;
  (this->DataInstance).ComparisonIndex = 0;
  (this->DataInstance).Number = 0;
  return this;
}

// UPCGDataFromTool @ 149b56a30

UPCGDataFromTool * __thiscall
UPCGDataFromTool::UPCGDataFromTool(UPCGDataFromTool *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataFromTool__6B_;
  (this->ToolTag).ComparisonIndex = 0;
  (this->ToolTag).Number = 0;
  (this->DataInstance).ComparisonIndex = 0;
  (this->DataInstance).Number = 0;
  return this;
}

// ~UPCGDataFromTool @ 149b58f40

void __thiscall UPCGDataFromTool::~UPCGDataFromTool(UPCGDataFromTool *this)

{
  this->_padding_ = (longlong)&___7UPCGDataFromTool__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6aa50

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDataFromTool::CreateElement
          (UPCGDataFromTool *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDataFromToolElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDataFromToolElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8c930

FString * __thiscall
UPCGDataFromTool::GetAdditionalTitleInformation
          (UPCGDataFromTool *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  FString local_58;
  TStringBuilderBase<wchar_t> local_48;
  
  local_48.End = (wchar_t *)0x0;
  local_48.Base = (wchar_t *)0x0;
  local_48.CurPos = (wchar_t *)0x0;
  local_48.bIsDynamic = false;
  local_48.bIsExternal = false;
  if (this->ToolTag != (FName)0x0) {
    pFVar3 = ::FName::ToString(&this->ToolTag,&local_58);
    iVar1 = (pFVar3->Data).ArrayNum;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    uVar5 = (ulong64)iVar6;
    if (local_48.End < local_48.CurPos + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_48,uVar5);
    }
    if (iVar6 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_48.CurPos,pFVar2,uVar5 * 2);
      local_48.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->ToolTag != (FName)0x0) && (this->DataInstance != (FName)0x0)) {
    if (local_48.End < local_48.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_48,3);
    }
    local_48.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_48.CurPos,3," | ",3);
  }
  if (this->DataInstance != (FName)0x0) {
    pFVar3 = ::FName::ToString(&this->DataInstance,&local_58);
    iVar1 = (pFVar3->Data).ArrayNum;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    uVar5 = (ulong64)iVar6;
    if (local_48.End < local_48.CurPos + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_48,uVar5);
    }
    if (iVar6 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_48.CurPos,pFVar2,uVar5 * 2);
      local_48.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.End < local_48.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,1);
  }
  *local_48.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_48.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_48);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b90740

UClass * __cdecl UPCGDataFromTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFromTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFromTool",
               &Z_Registration_Info_UClass_UPCGDataFromTool.InnerSingleton,
               StaticRegisterNativesUPCGDataFromTool,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGDataFromTool>,
               InternalVTableHelperCtorCaller<UPCGDataFromTool>,local_res8,UPCGSettings::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFromTool.InnerSingleton;
}

// InputPinProperties @ 149b92630

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataFromTool::InputPinProperties
          (UPCGDataFromTool *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b942e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataFromTool::OutputPinProperties
          (UPCGDataFromTool *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGDataFromTool @ 149b98480

void __cdecl UPCGDataFromTool::StaticRegisterNativesUPCGDataFromTool(void)

{
  return;
}

