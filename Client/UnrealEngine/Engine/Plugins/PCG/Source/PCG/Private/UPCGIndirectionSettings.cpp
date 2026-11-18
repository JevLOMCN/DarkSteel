// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149b9d8b0

UClass * __cdecl UPCGIndirectionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGIndirectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGIndirectionSettings",
               &Z_Registration_Info_UClass_UPCGIndirectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGIndirectionSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGIndirectionSettings>,
               InternalVTableHelperCtorCaller<UPCGIndirectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGIndirectionSettings.InnerSingleton;
}

// UPCGIndirectionSettings @ 149be6bf0

UPCGIndirectionSettings * __thiscall
UPCGIndirectionSettings::UPCGIndirectionSettings
          (UPCGIndirectionSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->ProxyInterfaceMode = BySettings;
  this->_padding_ = (longlong)&___7UPCGIndirectionSettings__6B_;
  (this->SettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlueprintElementClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  this->bTagOutputsBasedOnOutputPins = true;
  return this;
}

// UPCGIndirectionSettings @ 149be6c40

UPCGIndirectionSettings * __thiscall
UPCGIndirectionSettings::UPCGIndirectionSettings
          (UPCGIndirectionSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->ProxyInterfaceMode = BySettings;
  this->_padding_ = (longlong)&___7UPCGIndirectionSettings__6B_;
  (this->SettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlueprintElementClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  this->bTagOutputsBasedOnOutputPins = true;
  return this;
}

// ~UPCGIndirectionSettings @ 149be9a60

void __thiscall UPCGIndirectionSettings::~UPCGIndirectionSettings(UPCGIndirectionSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGIndirectionSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CanCullTaskIfUnwired @ 149c01890

bool __thiscall UPCGIndirectionSettings::CanCullTaskIfUnwired(UPCGIndirectionSettings *this)

{
  return false;
}

// CreateElement @ 149c04f60

TSharedPtr<IPCGElement,1> * __thiscall
UPCGIndirectionSettings::CreateElement
          (UPCGIndirectionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGIndirectionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGIndirectionElement__6B_;
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

// GetAdditionalTitleInformation @ 149c23100

FString * __thiscall
UPCGIndirectionSettings::GetAdditionalTitleInformation
          (UPCGIndirectionSettings *this,FString *__return_storage_ptr__)

{
  EPCGProxyInterfaceMode EVar1;
  int iVar2;
  UPCGSettings *pUVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  FText *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FText local_28;
  
  EVar1 = this->ProxyInterfaceMode;
  if (EVar1 != ByNativeElement) {
    if (EVar1 != ByBlueprintElement) {
      if (EVar1 == BySettings) {
        pUVar3 = (this->Settings).field0_0x0.DebugPtr;
        if (pUVar3 != (UPCGSettings *)0x0) {
          local_res8[0] = (FName)pUVar3->_padding_;
          ::FName::ToString(local_res8,__return_storage_ptr__);
          return __return_storage_ptr__;
        }
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                           ,0x53,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar4)();
          return pFVar6;
        }
      }
LAB_149c23151:
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_28,L"PCGIndirectionElement",L"MissingAsset",L"Missing Asset");
      pFVar6 = FText::ToString(this_00);
      ::FString::FString(__return_storage_ptr__,pFVar6);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      return __return_storage_ptr__;
    }
    pUVar8 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
    if (pUVar8 == (UClass *)0x0) goto LAB_149c23151;
    pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
    if (pUVar7 == (UClass *)0x0) goto LAB_149c23151;
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((!bVar5) ||
        (pUVar8 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr, pUVar8 == (UClass *)0x0))
       || (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0)) goto LAB_149c23151;
    pUVar8 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
    if (pUVar8 != (UClass *)0x0) {
      pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
      if (pUVar7 != (UClass *)0x0) {
        iVar2 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar8 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
          goto LAB_149c23270;
        }
      }
    }
    pUVar8 = (UClass *)0x0;
LAB_149c23270:
    local_res18 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_res18,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar8 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) goto LAB_149c23151;
  pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister();
  if (pUVar7 == (UClass *)0x0) goto LAB_149c23151;
  iVar2 = (int)pUVar7->_padding_;
  if (((int)pUVar8->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar5) ||
      (pUVar8 = (this->SettingsClass).Class.field0_0x0.DebugPtr, pUVar8 == (UClass *)0x0)) ||
     (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0)) goto LAB_149c23151;
  pUVar8 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
  if (pUVar8 != (UClass *)0x0) {
    pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pUVar8 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
        goto LAB_149c23339;
      }
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_149c23339:
  local_res20 = (FName)pUVar8->_padding_;
  ::FName::ToString(&local_res20,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c25550

UClass * __cdecl UPCGIndirectionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGIndirectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGIndirectionSettings",
               &Z_Registration_Info_UClass_UPCGIndirectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGIndirectionSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGIndirectionSettings>,
               InternalVTableHelperCtorCaller<UPCGIndirectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGIndirectionSettings.InnerSingleton;
}

// HasFlippedTitleLines @ 149c274a0

bool __thiscall UPCGIndirectionSettings::HasFlippedTitleLines(UPCGIndirectionSettings *this)

{
  return true;
}

// InputPinProperties @ 149c2beb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGIndirectionSettings::InputPinProperties
          (UPCGIndirectionSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EPCGProxyInterfaceMode EVar1;
  int iVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar6;
  UClass *pUVar7;
  UPCGBlueprintBaseElement *this_00;
  UPCGSettings *pUVar8;
  UClass *this_01;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FPCGPinProperties *local_48;
  int local_40;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_38;
  FPCGPinProperties *local_28;
  int local_20;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_18;
  
  this_01 = (UClass *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar1 = this->ProxyInterfaceMode;
  if (EVar1 == ByNativeElement) {
    pUVar3 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar2 = (int)pUVar7->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) &&
          (pUVar3 = (this->SettingsClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) &&
         (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
        pUVar3 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
        if ((pUVar3 != (UClass *)0x0) &&
           (pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar7 != (UClass *)0x0)) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)pUVar3->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            this_01 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
          }
        }
        if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_01);
        }
        pUVar8 = CastChecked<UPCGSettings,UObject>
                           ((this_01->ClassDefaultObject).field0_0x0.DebugPtr);
        pTVar6 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)
                 (**(code **)(pUVar8->_padding_ + 0x3b8))(pUVar8,&local_28);
        if (__return_storage_ptr__ != pTVar6) {
          DestructItems<FPCGPinProperties,int>
                    ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
          (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar6->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar6->ArrayMax;
          pTVar6->ArrayNum = 0;
          pTVar6->ArrayMax = 0;
        }
        DestructItems<FPCGPinProperties,int>(local_28,local_20);
        local_48 = local_28;
        goto LAB_149c2c028;
      }
    }
  }
  else if (EVar1 == ByBlueprintElement) {
    pUVar3 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar7 != (UClass *)0x0))
    {
      iVar2 = (int)pUVar7->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) &&
          (pUVar3 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0
          )) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
        pUVar3 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
        if ((pUVar3 != (UClass *)0x0) &&
           (pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(),
           pUVar7 != (UClass *)0x0)) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)pUVar3->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            this_01 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
          }
        }
        if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_01);
        }
        this_00 = CastChecked<UPCGBlueprintBaseElement,UObject>
                            ((this_01->ClassDefaultObject).field0_0x0.DebugPtr);
        pTVar6 = UPCGBlueprintBaseElement::GetInputPins(this_00,&local_38);
        if (__return_storage_ptr__ != pTVar6) {
          DestructItems<FPCGPinProperties,int>
                    ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
          (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar6->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar6->ArrayMax;
          pTVar6->ArrayNum = 0;
          pTVar6->ArrayMax = 0;
        }
        DestructItems<FPCGPinProperties,int>
                  ((FPCGPinProperties *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        local_48 = (FPCGPinProperties *)local_38.AllocatorInstance.Data;
        goto LAB_149c2c028;
      }
    }
  }
  else if (EVar1 == BySettings) {
    pUVar8 = (this->Settings).field0_0x0.DebugPtr;
    if (pUVar8 != (UPCGSettings *)0x0) {
      pTVar6 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)
               (**(code **)(pUVar8->_padding_ + 0x3b8))(pUVar8,&local_48);
      if (__return_storage_ptr__ != pTVar6) {
        DestructItems<FPCGPinProperties,int>
                  ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum);
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
        (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = pTVar6->ArrayNum;
        __return_storage_ptr__->ArrayMax = pTVar6->ArrayMax;
        pTVar6->ArrayNum = 0;
        pTVar6->ArrayMax = 0;
      }
      DestructItems<FPCGPinProperties,int>(local_48,local_40);
LAB_149c2c028:
      if (local_48 == (FPCGPinProperties *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_48);
      return __return_storage_ptr__;
    }
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                       ,0x79,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar6 = UPCGSettings::InputPinProperties((UPCGSettings *)this,&local_18);
  if (__return_storage_ptr__ != pTVar6) {
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum);
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = pTVar6->ArrayNum;
    __return_storage_ptr__->ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGPinProperties *)local_18.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  iVar2 = __return_storage_ptr__->ArrayNum;
  pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar2 * 0x30;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (pFVar10[0x29] == (FScriptContainerElement)0x1) {
      pFVar10[0x29] = (FScriptContainerElement)0x0;
    }
    pFVar10 = pFVar10 + 0x30;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2e040

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGIndirectionSettings::OutputPinProperties
          (UPCGIndirectionSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EPCGProxyInterfaceMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *pUVar6;
  UPCGBlueprintBaseElement *this_00;
  UPCGSettings *pUVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  int iVar12;
  FPCGPinProperties *local_58;
  int local_50;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_48;
  FPCGPinProperties *local_38;
  int local_30;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_28;
  
  EVar1 = this->ProxyInterfaceMode;
  pUVar10 = (UClass *)0x0;
  iVar8 = 0;
  pUVar9 = (UClass *)0x0;
  iVar12 = iVar8;
  if (EVar1 == ByNativeElement) {
    pUVar11 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
    if ((pUVar11 == (UClass *)0x0) ||
       (pUVar6 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar6 == (UClass *)0x0))
    goto LAB_149c2e0b7;
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar11->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((!bVar4) ||
        (pUVar11 = (this->SettingsClass).Class.field0_0x0.DebugPtr, pUVar11 == (UClass *)0x0)) ||
       (((uint)pUVar11->_padding_ >> 0x1e & 1) != 0)) goto LAB_149c2e0b7;
    pUVar9 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
    pUVar11 = pUVar10;
    if ((pUVar9 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar11 = (this->SettingsClass).Class.field0_0x0.DebugPtr;
      }
    }
    if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar11);
    }
    pUVar7 = CastChecked<UPCGSettings,UObject>((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr);
    pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)
             (**(code **)(pUVar7->_padding_ + 0x3c0))();
    if (&local_28 != pTVar5) {
      DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)0x0,0);
      pUVar10 = (UClass *)(pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar8 = pTVar5->ArrayNum;
      iVar12 = pTVar5->ArrayMax;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
    }
    DestructItems<FPCGPinProperties,int>(local_38,local_30);
    local_58 = local_38;
  }
  else if (EVar1 == ByBlueprintElement) {
    pUVar11 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
    if ((pUVar11 == (UClass *)0x0) ||
       (pUVar6 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar6 == (UClass *)0x0))
    goto LAB_149c2e0b7;
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar11->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((!bVar4) ||
        (pUVar11 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr, pUVar11 == (UClass *)0x0
        )) || (((uint)pUVar11->_padding_ >> 0x1e & 1) != 0)) goto LAB_149c2e0b7;
    pUVar9 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
    pUVar11 = pUVar10;
    if ((pUVar9 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar6 != (UClass *)0x0))
    {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar11 = (this->BlueprintElementClass).Class.field0_0x0.DebugPtr;
      }
    }
    if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar11);
    }
    this_00 = CastChecked<UPCGBlueprintBaseElement,UObject>
                        ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr);
    pTVar5 = UPCGBlueprintBaseElement::GetOutputPins(this_00,&local_48);
    if (&local_28 != pTVar5) {
      DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)0x0,0);
      pUVar10 = (UClass *)(pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar8 = pTVar5->ArrayNum;
      iVar12 = pTVar5->ArrayMax;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    local_58 = (FPCGPinProperties *)local_48.AllocatorInstance.Data;
  }
  else {
    if (EVar1 != BySettings) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                         ,0xa9,L"");
      pUVar9 = pUVar10;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
      goto LAB_149c2e0b7;
    }
    pUVar7 = (this->Settings).field0_0x0.DebugPtr;
    if (pUVar7 == (UPCGSettings *)0x0) goto LAB_149c2e0b7;
    pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)
             (**(code **)(pUVar7->_padding_ + 0x3c0))();
    if (&local_28 != pTVar5) {
      DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)0x0,0);
      pUVar10 = (UClass *)(pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar8 = pTVar5->ArrayNum;
      iVar12 = pTVar5->ArrayMax;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
    }
    DestructItems<FPCGPinProperties,int>(local_58,local_50);
  }
  if (local_58 != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_58);
  }
  pUVar9 = pUVar10;
  if (iVar8 != 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)pUVar10;
    __return_storage_ptr__->ArrayNum = iVar8;
    __return_storage_ptr__->ArrayMax = iVar12;
    DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)0x0,0);
    return __return_storage_ptr__;
  }
LAB_149c2e0b7:
  UPCGSettings::OutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)pUVar9,0);
  if (pUVar9 != (UClass *)0x0) {
    FMemory::Free(pUVar9);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGIndirectionSettings @ 149c35420

void __cdecl UPCGIndirectionSettings::StaticRegisterNativesUPCGIndirectionSettings(void)

{
  return;
}

