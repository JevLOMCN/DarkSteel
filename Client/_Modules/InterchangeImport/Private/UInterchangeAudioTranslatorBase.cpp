// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 13

// StaticClass @ 14e674bd0

UClass * __cdecl UInterchangeAudioTranslatorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslatorBase",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslatorBase,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslatorBase>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslatorBase>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton;
}

// UInterchangeAudioTranslatorBase @ 14e6905c0

UInterchangeAudioTranslatorBase * __thiscall
UInterchangeAudioTranslatorBase::UInterchangeAudioTranslatorBase
          (UInterchangeAudioTranslatorBase *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// UInterchangeAudioTranslatorBase @ 14e690600

UInterchangeAudioTranslatorBase * __thiscall
UInterchangeAudioTranslatorBase::UInterchangeAudioTranslatorBase
          (UInterchangeAudioTranslatorBase *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IInterchangeAudioPayloadInterface__;
  return this;
}

// ~UInterchangeAudioTranslatorBase @ 14e691e70

void __thiscall
UInterchangeAudioTranslatorBase::~UInterchangeAudioTranslatorBase
          (UInterchangeAudioTranslatorBase *this)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e69ff40

UClass * __cdecl UInterchangeAudioTranslatorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslatorBase",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioTranslatorBase,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslatorBase>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslatorBase>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e6a13c0

EInterchangeTranslatorAssetType __thiscall
UInterchangeAudioTranslatorBase::GetSupportedAssetTypes(UInterchangeAudioTranslatorBase *this)

{
  return Sounds;
}

// GetSupportedFormats @ 14e6a13e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAudioTranslatorBase::GetSupportedFormats
          (UInterchangeAudioTranslatorBase *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// LogError @ 14e6a3ab0

void __thiscall
UInterchangeAudioTranslatorBase::LogError(UInterchangeAudioTranslatorBase *this,FText *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  void *_Src;
  ForAnyElementType _Src_00;
  int iVar6;
  UInterchangeResultError_Generic *pUVar7;
  FString *pFVar8;
  longlong lVar9;
  FString local_38;
  FString local_28;
  
  pUVar7 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                     ((UInterchangeTranslatorBase *)this);
  if (pUVar7 != (UInterchangeResultError_Generic *)0x0) {
    pUVar4 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar7->_padding_ = (longlong)pUVar4;
    lVar5 = *(longlong *)&this->field_0x30;
    if (lVar5 == 0) {
      ::FString::operator=((FString *)&pUVar7->_padding_,L"Undefined");
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = *(int *)(lVar5 + 0x30);
      lVar9 = (longlong)local_38.Data.ArrayNum;
      _Src = *(void **)(lVar5 + 0x28);
      if (local_38.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
      }
      iVar6 = local_38.Data.ArrayNum;
      _Src_00.Data = local_38.Data.AllocatorInstance.Data;
      plVar1 = &pUVar7->_padding_;
      if ((FString *)plVar1 != &local_38) {
        iVar3 = *(int *)((longlong)&pUVar7->_padding_ + 4);
        piVar2 = (int *)((longlong)&pUVar7->_padding_ + 4);
        *(int *)&pUVar7->_padding_ = local_38.Data.ArrayNum;
        if ((local_38.Data.ArrayNum == 0) && (iVar3 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,iVar3,(ForAnyElementType *)plVar1,
                     local_38.Data.ArrayNum,piVar2);
          if (iVar6 != 0) {
            memcpy((void *)*plVar1,_Src_00.Data,(longlong)iVar6 * 2);
          }
        }
      }
      pFVar8 = FPaths::GetBaseFilename(&local_28,&local_38,true);
      plVar1 = &pUVar7->_padding_;
      if ((FString *)plVar1 != pFVar8) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)(pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pUVar7->_padding_ = (pFVar8->Data).ArrayNum;
        *(int *)((longlong)&pUVar7->_padding_ + 4) = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FText::operator=(&pUVar7->Text,param_1);
  }
  return;
}

// LogWarning @ 14e6a3c80

void __thiscall
UInterchangeAudioTranslatorBase::LogWarning(UInterchangeAudioTranslatorBase *this,FText *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  void *_Src;
  ForAnyElementType _Src_00;
  int iVar6;
  UInterchangeResultWarning_Generic *pUVar7;
  FString *pFVar8;
  longlong lVar9;
  FString local_38;
  FString local_28;
  
  pUVar7 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultWarning_Generic>
                     ((UInterchangeTranslatorBase *)this);
  if (pUVar7 != (UInterchangeResultWarning_Generic *)0x0) {
    pUVar4 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar7->_padding_ = (longlong)pUVar4;
    lVar5 = *(longlong *)&this->field_0x30;
    if (lVar5 == 0) {
      ::FString::operator=((FString *)&pUVar7->_padding_,L"Undefined");
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = *(int *)(lVar5 + 0x30);
      lVar9 = (longlong)local_38.Data.ArrayNum;
      _Src = *(void **)(lVar5 + 0x28);
      if (local_38.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
      }
      iVar6 = local_38.Data.ArrayNum;
      _Src_00.Data = local_38.Data.AllocatorInstance.Data;
      plVar1 = &pUVar7->_padding_;
      if ((FString *)plVar1 != &local_38) {
        iVar3 = *(int *)((longlong)&pUVar7->_padding_ + 4);
        piVar2 = (int *)((longlong)&pUVar7->_padding_ + 4);
        *(int *)&pUVar7->_padding_ = local_38.Data.ArrayNum;
        if ((local_38.Data.ArrayNum == 0) && (iVar3 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,iVar3,(ForAnyElementType *)plVar1,
                     local_38.Data.ArrayNum,piVar2);
          if (iVar6 != 0) {
            memcpy((void *)*plVar1,_Src_00.Data,(longlong)iVar6 * 2);
          }
        }
      }
      pFVar8 = FPaths::GetBaseFilename(&local_28,&local_38,true);
      plVar1 = &pUVar7->_padding_;
      if ((FString *)plVar1 != pFVar8) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)(pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pUVar7->_padding_ = (pFVar8->Data).ArrayNum;
        *(int *)((longlong)&pUVar7->_padding_ + 4) = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FText::operator=(&pUVar7->Text,param_1);
  }
  return;
}

// StaticRegisterNativesUInterchangeAudioTranslatorBase @ 14e6a8140

void __cdecl
UInterchangeAudioTranslatorBase::StaticRegisterNativesUInterchangeAudioTranslatorBase(void)

{
  return;
}

// Translate @ 14e6a83e0

bool __thiscall
UInterchangeAudioTranslatorBase::Translate
          (UInterchangeAudioTranslatorBase *this,UInterchangeBaseNodeContainer *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x300))();
  return lVar1 != 0;
}

// Translate_Internal @ 14e6a8ea0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UInterchangeAudioSoundWaveNode * __thiscall
UInterchangeAudioTranslatorBase::Translate_Internal
          (UInterchangeAudioTranslatorBase *this,UInterchangeBaseNodeContainer *param_1)

{
  void *_Src;
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  UInterchangeAudioSoundWaveNode *this_00;
  longlong lVar6;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  this_00 = (UInterchangeAudioSoundWaveNode *)0x0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = *(int *)(*(longlong *)&this->field_0x30 + 0x30);
  lVar6 = (longlong)local_58.Data.ArrayNum;
  _Src = *(void **)(*(longlong *)&this->field_0x30 + 0x28);
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  FPaths::NormalizeFilename(&local_58);
  bVar1 = FPaths::FileExists(&local_58);
  if (bVar1) {
    pFVar5 = FPaths::GetBaseFilename((FString *)&local_38,&local_58,true);
    this_00 = UInterchangeAudioSoundWaveNode::Create(param_1,pFVar5);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    UInterchangeAudioSoundWaveNode::SetPayloadKey(this_00,&local_58);
  }
  else {
    pFVar2 = FText::FromString(&local_28,&local_58);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"InterchangeGenericAudioTranslator",
                        L"InterchangeGenericAudioTranslator_Translate_FileNotFound",
                        L"Filepath {0} doesn\'t exist");
    pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
    pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
    LogError(this,pFVar2);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// _getUObject @ 14e6aaca0

UObject * __thiscall
UInterchangeAudioTranslatorBase::_getUObject(UInterchangeAudioTranslatorBase *this)

{
  return (UObject *)&this[-1].field_0x8;
}

