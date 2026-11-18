// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 10

// StaticClass @ 14e47b590

UClass * __cdecl UInterchangeAudioSoundWaveNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeAudioSoundWaveNode",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioSoundWaveNode,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveNode>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveNode.InnerSingleton;
}

// UInterchangeAudioSoundWaveNode @ 14e485ea0

UInterchangeAudioSoundWaveNode * __thiscall
UInterchangeAudioSoundWaveNode::UInterchangeAudioSoundWaveNode
          (UInterchangeAudioSoundWaveNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAudioSoundWaveNode__6B_;
  return this;
}

// UInterchangeAudioSoundWaveNode @ 14e485ed0

UInterchangeAudioSoundWaveNode * __thiscall
UInterchangeAudioSoundWaveNode::UInterchangeAudioSoundWaveNode(UInterchangeAudioSoundWaveNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  *(undefined ***)this = &___7UInterchangeAudioSoundWaveNode__6B_;
  return this;
}

// ~UInterchangeAudioSoundWaveNode @ 14e48a9e0

void __thiscall
UInterchangeAudioSoundWaveNode::~UInterchangeAudioSoundWaveNode
          (UInterchangeAudioSoundWaveNode *this)

{
  *(undefined ***)this = &___7UInterchangeAudioSoundWaveNode__6B_;
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// Create @ 14e48e430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAudioSoundWaveNode * __cdecl
UInterchangeAudioSoundWaveNode::Create(UInterchangeBaseNodeContainer *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UInterchangeBaseNode *pUVar7;
  UInterchangeAudioSoundWaveNode *pUVar8;
  FString *pFVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = pUVar5;
  pUVar7 = (UInterchangeBaseNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (pUVar7 == (UInterchangeBaseNode *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Nodes\\Private\\InterchangeAudioSoundWaveNode.cpp"
                       ,0x16,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UInterchangeAudioSoundWaveNode *)(*pcVar3)();
      return pUVar8;
    }
  }
  iVar1 = (param_2->Data).ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  pFVar9 = ::FString::FString(&local_b8,L"\\");
  ::FString::ConcatCF(&local_e8,L"SoundWaves",pFVar9);
  ::FString::ConcatFR(&local_c8,&local_e8,(wchar_t *)pFVar2,iVar10);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,pUVar7,&local_c8,param_2,TranslatedAsset,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return (UInterchangeAudioSoundWaveNode *)pUVar7;
}

// GetPayloadKey @ 14e497850

TOptional<FString> * __thiscall
UInterchangeAudioSoundWaveNode::GetPayloadKey
          (UInterchangeAudioSoundWaveNode *this,TOptional<FString> *__return_storage_ptr__)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString *pFVar4;
  TOptional<FString> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::FString(&local_58,L"UInterchangeAudioSoundWaveNode.GetPayloadKey");
  pFVar4 = &UE::Interchange::FSoundWaveNodeStaticData::PayloadSourceFileKey()->Key;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FString> *)(*pcVar1)();
    return pTVar5;
  }
  this_00 = *(FAttributeStorage **)&this->field_0x28;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)pFVar4);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>
              (this_00,&local_28,(FAttributeKey *)pFVar4);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_28,&local_68);
      if ((EVar6 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e497959;
      }
      ::FString::FString(&local_48,pFVar4);
      pFVar4 = ::FString::FString(&local_38,&local_58);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar4,(FAttributeKey *)&local_48);
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e497959:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  if (bVar3) {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         local_68.Data.AllocatorInstance.Data;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_68.Data.ArrayNum;
    iVar2 = local_68.Data.ArrayMax;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if ((iVar2 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FString> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e497ff0

UClass * __cdecl UInterchangeAudioSoundWaveNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeAudioSoundWaveNode",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioSoundWaveNode,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveNode>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveNode.InnerSingleton;
}

// GetTypeName @ 14e49a880

FString * __thiscall
UInterchangeAudioSoundWaveNode::GetTypeName
          (UInterchangeAudioSoundWaveNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SoundWaveNode");
  return __return_storage_ptr__;
}

// SetPayloadKey @ 14e4a7f10

void __thiscall
UInterchangeAudioSoundWaveNode::SetPayloadKey(UInterchangeAudioSoundWaveNode *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FString *pFVar3;
  EAttributeStorageResult EVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"UInterchangeAudioSoundWaveNode.SetPayloadKey");
  pFVar3 = &UE::Interchange::FSoundWaveNodeStaticData::PayloadSourceFileKey()->Key;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)&this->field_0x28,(FAttributeKey *)pFVar3,param_1,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_18,pFVar3);
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar4,&local_38,(FAttributeKey *)&local_18);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeAudioSoundWaveNode @ 14e4a8490

void __cdecl
UInterchangeAudioSoundWaveNode::StaticRegisterNativesUInterchangeAudioSoundWaveNode(void)

{
  return;
}

